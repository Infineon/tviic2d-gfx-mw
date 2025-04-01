/*******************************************************************************
* (c) 2019-2024, Cypress Semiconductor Corporation (an Infineon company) or an *
* affiliate of Cypress Semiconductor Corporation.  All rights reserved.        *
*                                                                              *
* This software, including source code, documentation and related              *
* materials ("Software"), is owned by Cypress Semiconductor Corporation or     *
* one of its affiliates ("Cypress") and is protected by and subject to         *
* worldwide patent protection (United States and foreign), United States       *
* copyright laws and international treaty provisions. Therefore, you may use   *
* this Software only as provided in the license agreement accompanying the     *
* software package from which you obtained this Software ("EULA").             *
*                                                                              *
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,     *
* non-transferable license to copy, modify, and compile the                    *
* Software source code solely for use in connection with Cypress's             *
* integrated circuit products.  Any reproduction, modification, translation,   *
* compilation, or representation of this Software except as specified          *
* above is prohibited without the express written permission of Cypress.       *
*                                                                              *
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO                         *
* WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING,                         *
* BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED                                 *
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A                              *
* PARTICULAR PURPOSE. Cypress reserves the right to make                       *
* changes to the Software without notice. Cypress does not assume any          *
* liability arising out of the application or use of the Software or any       *
* product or circuit described in the Software. Cypress does not               *
* authorize its products for use in any products where a malfunction or        *
* failure of the Cypress product may reasonably be expected to result in       *
* significant property damage, injury or death ("High Risk Product"). By       *
* including Cypress's product in a High Risk Product, the manufacturer         *
* of such system or application assumes all risk of such use and in doing      *
* so agrees to indemnify Cypress against all liability.                        *
*******************************************************************************/

/**
    \file        CoordinateLayer.h
*/

#ifndef COORDINATELAYER_H
#define COORDINATELAYER_H

#define _USE_MATH_DEFINES

#include "Coordinate.h"

namespace coordinate {
/** \addtogroup user_doc_utils
\{ */

/**\addtogroup warp_util Utilities for warping functions
\{ */

/**
    \brief The main class for the CoordinateLayerLib (cll) is the \ref coordinate::CoordinateLayer class.

- Documentation Overview
    - \ref warp_util_s1
    - \ref warp_util_s2
    - \ref warp_util_p2

Read the section \ref su1 carefully.
Additional information on the file types used to read in or write back the coordinates can be found on \ref warp_util_p2 page.

\section warp_util_s1 Usage
The CoordinateLayerLib can create and edit existing coordinate layers.
The library's main purpose is to convert coordinate layers to compressed low-bit-per-pixel 'delta' and 'delta increment'
modes to reduce the required bandwidth when processed with Fetchwarp.
For test purposes, it provides methods to create new coordinate layers based on a certain model.

\subsection su1 Features overview and processing flow

\note
When working with CoordinateLayer, keep the following order of the list items (1.-5.) for calling object methods.
Sub-items (a.-e.) are, in general, mutually exclusive.

 * -# Supply or generate a CoordinateLayer in double precision.
     -# Read in from file.
        - coordinate::CoordinateLayer::read()
     -# Generate a new coordinate layer.
        - see \ref Generate group
     -# Supply coordinates by iteration in a loop.
        - Set width and height with coordinate::CoordinateLayer::set_width() and coordinate::CoordinateLayer::set_height().
        - Supply coordinates with coordinate::CoordinateLayer::set_xy().
 * -# Supply general configuration options.
     -# set_* methods
        - (optional) coordinate::CoordinateLayer::set_WarpSymmetricOffset()
        - (optional) coordinate::CoordinateLayer::set_max_grid_error()
 * -# Process and optimize coordinates.
     -# Automatic optimization (recommended): find the highest compression mode coordinate::CoordinateLayer::optimize_auto()
     -# Manual get the compressed CoordinateLayer
        - Set configuration: coordinate::CoordinateLayer::set_WarpBitsPerPixel() and coordinate::CoordinateLayer::set_WarpCoordinateMode()
        - Run with coordinate::CoordinateLayer::optimize_manual()
        - Check whether the result is a valid coordinate::CoordinateLayer::get_error_cnt(); on failure, restore and try a different setup
 * -# Retrieve compressed CoordinateLayer.
     -# Write to file as ASCII or binary using coordinate::CoordinateLayer::write().
     -# Read char-wise of a binary packed memory coordinate::CoordinateLayer::get_buf_char(); see \ref GetCoordinateDataByteByByte.
     -# Write binary coordinates to buffer using coordinate::CoordinateLayer::get_buffer().
     -# Get values at a certain position coordinate::CoordinateLayer::get_x() and coordinate::CoordinateLayer::get_y().
     -# (Read LSB-aligned packed x,y tuple coordinate::CoordinateLayer::get_packed())
 * -# Retrieve settings. Note that the initial setup might be modified by the coordinate::CoordinateLayer::optimize_*() methods
     -# get_* methods
        - coordinate::CoordinateLayer::get_WarpCoordinateMode()
        - ... see \ref GetConfig group
     -#  getreg_* methods formatted for registers (formatted to fixed point where applicable)
        - coordinate::CoordinateLayer::getreg_warpcontrol()
        - ... see \ref GetRegisterConfig group

\section warp_util_s2 Simplified Example
Generate CoordinateLayer, automatically optimize, store to buffer, and get register presets.
\code
 // Coordinate object
 coordinate::CoordinateLayer l1;

 // Setup
 unsigned int width = 640;
 unsigned int height = 480;
 unsigned int bpp = 4;

 // (1.b) Generate CoordinateLayer
 l1.neutral(width, height);

 // (2.a) General Setup
 l1.set_WarpSymmetricOffset(0); // this is default
 l1.set_max_grid_error(0.0625); // this is default

 // (3.a) Process CoordinateLayer
 bpp = l1.optimize_auto(0);
 // or (3.b) manual
 //l1.set_WarpBitsPerPixel(bpp);
 //l1.set_WarpCoordinateMode(2);
 //if (l1.optimize_manual(0) != 0) {
 //  cerr << "Error: Invalid settings" << endl;
 //  return 1;
 //}

 // Allocate buffer
 char *buffer;
 size_t size = (size_t)(ceil((double)(width*bpp)/8.0)*height);

 buffer = new char [size];
 if (buffer == NULL){
   cerr << "Error: new failed" << endl;
   return 1;
 }

 // (4.c) Get CoordinateLayer written to buffer
 l1.get_buffer(buffer, size);

 // (5.b) Get configuration aligned for registers
 unsigned int reg0 = l1.getreg_warpcontrol();

 unsigned int reg1 = l1.getreg_framexoffset();
 unsigned int reg2 = l1.getreg_frameyoffset();
 unsigned int reg3 = l1.getreg_deltaxx();
 unsigned int reg4 = l1.getreg_deltaxy();
 unsigned int reg5 = l1.getreg_deltayx();
 unsigned int reg6 = l1.getreg_deltayy();

 ...
 delete [] buffer;
 buffer = NULL;

\endcode

\section warp_util_p2 Coordinate file format
The CoordinateLayer class uses two different file types to store and load coordinate layers.
A human-readable ASCII version (Portable Coordinatemap *.\ref pcm) and a binary-compressed (Binary Coordinatemap *.\ref bcm) version.
Files of the .\ref pcm file type can be used to supply coordinates generated by another program.
After processing, the coordinates can be saved using either the .\ref pcm or the .\ref bcm file type.

\anchor pcm
\section p2s1 ASCII file format (*.pcm)
The file format to store the coordinate layers is a Portable Coordinatemap (*.pcm). The format is similar to the Portable Pixmap format (*.ppm).
The Portable Coordinatemap in its ASCII flavor has the following layout:
The file must start with the header 'C1'.
Afterwards, the dimensions are given (width, height).
The field in the third row must be zero. It is reserved for future use (precision).
Each coordinate tuple (x,y) is given in a separate row. First, the x coordinate, then, following a whitespace character, the y coordinate.
A comment can be added after a '#'. All characters after a '#' are ignored.

An example of a coordinate file:
\verbatim
C1
4 3
0 # double precision
# mode=0 notation=0
#
0.0568145612519302 -0.0363729299913966
0.96446217106863 -0.0267071885879651
1.95863629000198 0.0440778965568533
2.99482336025444 -0.0257889377306164
-0.0683314101343655 1.00078041080887
0.961803425122892 1.00585207233944
1.92697776668099 0.974980690621296
3.00168986287047 0.985047437453199
0.0795896120367523 2.02296052331708
1.02896151666947 2.03025818317209
2.00697423477051 2.00019855729779
3.06446242689363 1.9729535687356
\endverbatim

\anchor bcm
\section p2s2 Binary file format (*.bcm)
The binary file has the same layout as any buffer in memory that can be directly read by Fetchwarp.
The file could be easily read and copied with memcpy().
The stream of coordinates is packed using the current WarpBitsPerPixel settings and the CoordinateLayer
in its current representation (WarpCoordinateMode and WarpSymmetricOffset).

To clarify the byte and bit order, a few examples are shown below:

WarpBitsPerPixel=32 (equals 16 bpp for each component):
\verbatim
x_0=0xabcd y_0=0xef12 address 0x0000: 0x12
                      address 0x0001: 0xef
                      address 0x0002: 0xcd
                      address 0x0003: 0xab
...
\endverbatim

WarpBitsPerPixel=16 (equals 8 bpp for each component):
\verbatim
x_0=0xcc y_0=0xa5 address 0x0000: 0xa5
                  address 0x0001: 0xcc
x_1=0x10 y_2=0x22 address 0x0002: 0x22
                  address 0x0003: 0x10
...
\endverbatim

WarpBitsPerPixel=8 (equals 4 bpp for each component):
\verbatim
x_0=0xf y_0=0x0 address 0x0000: 0xf0
x_1=0xa y_1=0x5 address 0x0001: 0xa5
...
\endverbatim

WarpBitsPerPixel=4 (equals 2 bpp for each component):
\verbatim
x_0=0x2 y_0=0x3
x_1=0x1 y_1=0x0 address 0x0001: 0x4b
...
\endverbatim
*/

/** \{ */
/** Notation */
typedef enum {
  FLOAT=0,   /**< Notation in float types */
  FIX        /**< Notation in fixed-point types */
} notation_t;

/** Modes */
typedef enum {
  PNT=0,   /**< sample point */
  D_PNT,   /**< delta */
  DD_PNT   /**< delta increment */
} warpcoordinatemode_t;

/** Chip */
typedef enum chip {
  TRAVEO=0  /**< TRAVEO (only available chip) */
} chip_t;

/**
    \brief       CoordinateLayer class.
    This is the main class for the coordinate layer.
*/
class CoordinateLayer {
  public:
    CoordinateLayer();
    /**
        Constructor supplying coordinate layer dimensions. Sets the storage size according to the new settings.
        \param width New width
        \param height New height
    */
    CoordinateLayer(unsigned int width, unsigned int height);
    /**
        Constructor supplying coordinate layer dimensions. Sets the storage size according to the new settings, and source original dimension.
        \param width New width
        \param height New height
        \param sourceWidth Width of the source graphic
        \param sourceHeight Height of the source graphic
    */
    CoordinateLayer(unsigned int width, unsigned int height, unsigned int sourceWidth, unsigned int sourceHeight);
    /** Destructor */
    ~CoordinateLayer();
    /**
        Assignment operator
        \param cp Reference to a CoordinateLayer object
        \return Reference to a CoordinateLayer object
    */
    CoordinateLayer(const CoordinateLayer& cp);
    /**
        Copy Constructor
        \param cp Reference to CoordinateLayer object
    */
    CoordinateLayer& operator= (const CoordinateLayer& cp);

    //-------------------------------------------------------------------------
    // Generate
    /**
        \anchor Generate
        \name Generate CoordinateLayer
        Generates new CoordinateLayer using one of the supplied methods.
    */
    //\{
    /**
        Generates a neutral grid. Each output pixel corresponds to its input pixel.
        \param width     Width of the coordinate frame
        \param height    Height of the coordinate frame
    */
    void neutral(unsigned int width, unsigned int height);

    /**
        Creates a coordinate layer with a randomized grid.
        Each ideal point of the neutral grid is shifted by a random value around the center.
        The maximum jitter can be configured separately for x and y with
        xjitter and yjitter.
        \param width     Width of the coordinate frame
        \param height    Height of the coordinate frame
        \param seed      Seed value to seed srand()
        \param xjitter   The xjitter maximum value that the x value can jitter: 0 no jitter, 1: +/- 0.5
        \param yjitter   The yjitter maximum value that the y value can jitter: 0 no jitter, 1: +/- 0.5
    */
    void random_grid(unsigned int width, unsigned int height, unsigned int seed, double xjitter, double yjitter);

    /**
        Creates a coordinate layer using the Brown and Conrady's lens model.
        Normalization is performed in such a way that the unit circle fits completely
        inside the image.
        \param width     Width of the coordinate frame
        \param height    Height of the coordinate frame
        \param xc        x center offset in pixel
        \param yc        y center offset in pixel
        \param k0        Radial distortion coefficient \f$k_0\f$; see formula
        \param k1        Radial distortion coefficient \f$k_1\f$; see formula
        \param k2        Radial distortion coefficient \f$k_2\f$; see formula
        \param p0        Tangential distortion coefficient \f$p_0\f$; see formula
        \param p1        Tangential distortion coefficient \f$p_1\f$; see formula
        \param p2        Tangential distortion coefficient \f$p_2\f$; see formula

        The Brown-Conrady lens model uses the following formula:
        \f[
        x_{u} = x_d + (x_d-x_c) (k_0 + k_1 r^2 + k_2 r^4) + (p_0 (r^2 + 2 (x_d-x_c)^2) + 2 p_1 (x_d-x_c)(y_d-y_c) ) (1 + p_2 r^2)
        \f]
        \f[
        y_{u} = y_d + (y_d-y_c) (k_0 + k_1 r^2 + k_2 r^4) + (p_1 (r^2 + 2 (y_d-y_c)^2) + 2 p_0 (x_d-x_c)(y_d-y_c) ) (1 + p_2 r^2)
        \f]
        with
        \f[
        r = \sqrt{(x_d-x_c)^2 + (y_d-y_c)^2}
        \f]
    */
    void barrel(unsigned int width, unsigned int height, double xc, double yc, double k0, double k1, double k2, double p0, double p1, double p2);

    /**
        Applies harmonic wave like distortion. The amplitude is damped at the top and bottom.
        \param width     Width of the coordinate frame
        \param height    Height of the coordinate frame
        \param xc        x offset of the center point on the pixel grid
        \param yc        y offset of the center point on the pixel grid
        \param a         Harmonics in x
        \param b         Harmonics in y
        \param c         Amplitude in x
        \param d         Amplitude in y
        \note It generates a coordinate grid where all source buffer pixel must be fetched.
    */
    void wave(unsigned int width, unsigned int height, double xc, double yc, double a, double b, double c, double d);

    /**
        Applies center crushing or stretching distortion in the y direction.
        \param width  Width of the coordinate frame
        \param height Height of the coordinate frame
        \param xc     x offset of the center point on the pixel grid
        \param yc     y offset of the center point on the pixel grid
        \param a      Angle in degrees

        \note tested for -25 to 25
    */

    void centercrushing(unsigned int width, unsigned int height, double xc, double yc, double a);

    /**
        Applies lense distortion using the ptlens model. Inverse function of the \ref ptlens_correct model
        using Newton's method to find a solution. The model is not a mathematical reciprocal transformation.
        \param width     Width of the coordinate frame
        \param height    Height of the coordinate frame
        \param xc        x offset of the center point on the pixel grid
        \param yc        y offset of the center point on the pixel grid
        \param a         Factor for the 4th-order term
        \param b         Factor for the 3rd-order term
        \param c         Factor for the 2nd-order term
        \note It generates a coordinate grid with wide borders outside the source buffer.
    */
    void ptlens_apply(unsigned int width, unsigned int height, double xc, double yc, double a, double b, double c);

    /**
        Creates a coordinate layer to correct the barrel distortion of a captured image using the ptlens model.
        The ptlens model is a fourth-order polynomial.
        \f$Ru = a * Rd^4 + b * Rd^3 + c * Rd + 1 * Rd\f$
        Where \f$Rd\f$ is the normalized radius of the distorted pixel and
        \f$Ru\f$ the normalized radius of the undistorted pixel.
        Normalization is performed in such a way that the unit circle fits completely
        inside the image.

        \param width     Width of the coordinate frame in pixels
        \param height    Height of the coordinate frame in pixels
        \param xc        x offset of the center point on the pixel grid; the most likely the default value is 0.5*width
        \param yc        y offset of center point on pixel grid; the most likely default value is 0.5*width
        \param a         Factor for the 4th-order term
        \param b         Factor for the 3rd-order term
        \param c         Factor for the 2nd-order term

        \see http://hugin.sourceforge.net/docs/manual/Lens_correction_model.html for more information.
        \note This coordinate layer model is tested with a captured image and matching lens parameters
        (width, height, width*0.5, height*0.5, 0, 0.003658, -0.04063).
    */
    void ptlens_correct(unsigned int width, unsigned int height,  double xc, double yc, double a, double b, double c);

    /**
        Corrects (to rectilinear) the lens distortion of a fisheye lens with an equidistant projection function.

        The equidistant projection function is
        \f[
        r_{d} = f \theta
        \f]

        \param width         Width of the coordinate frame in pixels
        \param height        Height of the coordinate frame in pixels
        \param focal         Focal length of the lens in mm
        \param cropfactor    Proportion of the sensor width to 35 mm (full-frame, 24x36mm) sensor width, 1 full-frame sensor, 1.52-1.7 APS-C sensor (manufacturer dependant)
        \param zoom          Multiplication factor for zooming
    */
    void fisheye_equidistant_correct(unsigned int width, unsigned int height, double focal, double cropfactor, double zoom);

    /**
        Corrects (to rectilinear) the lens distortion of a fisheye lens with an equisolid projection function.

        The equisolid projection function is as follows:
        \f[
        r_{d} = 2 f sin(\theta/2)
        \f]
        \param width         Width of the coordinate frame in pixels
        \param height        Height of the coordinate frame in pixels
        \param focal         Focal length of the lens in mm
        \param cropfactor    Proportion of the sensor width to 35 mm (full-frame, 24x36mm) sensor width, 1 full-frame sensor, 1.52-1.7 APS-C sensor (manufacturer dependant)
        \param zoom          Multiplication factor for zooming
        \note A lense with this characteristic is the `Sigma 10mm f/2.8 EX DC Fisheye'.
    */
    void fisheye_equisolid_correct(unsigned int width, unsigned int height, double focal, double cropfactor, double zoom);

    /**
        Generates a coordinate layer for a rotation around the center with the supplied angle.

        \param width     Width of the coordinate frame in pixels
        \param height    Height of the coordinate frame in pixels
        \param angle     Angle in mathematical orientation in degrees
        \param zoom      Multiplication factor for zooming
    */
    void rotation(unsigned int width, unsigned int height, double angle, double zoom);
    //\}

    //-------------------------------------------------------------------------
    // file I/O
    /**
        Reads in a coordinate layer from a file.

        \param filename The coordinate file in .\ref pcm flavor
    */
    void read(const std::string& filename);

    /**
        Writes the coordinate layer to a file. The coordinate is used in its current mode
        (point, delta or delta increment).

        \param filename Coordinate file name in .\ref pcm or .\ref bcm flavor
        \param binary 0: ASCII; else binary
    */
    void write(const std::string& filename, int binary);

    //-------------------------------------------------------------------------
    // General setting
    /**
        \name Copy coordinates
        Initializes the CoordinateLayer by copying the value for each pixel.
    */
    //\{
    /**
        Sets the coordinate tuple at an x, y position
        \param pos_x x position
        \param pos_y y position
        \param x Coordinate value in double precision
        \param y Coordinate value in double precision
        \note The size of the layer must be set before with set_width() and set_height().
    */
    void set_xy(unsigned int pos_x, unsigned int pos_y, double x, double y);


    /**
        Sets the original width and height of source.
        \param srcWidth Source width in pixels
        \param srcHeight Source height in pixels
    */
    void defineSourceDimension(unsigned int srcWidth, unsigned int srcHeight);

    /**
        Sets a new coordinate layer width and takes care of the storage elements.
        \param width New width in pixels
    */
    void set_width(unsigned int width);

    /**
        Sets a new coordinate layer height and takes care of the storage elements.
        \param height New height in pixels
    */
    void set_height(unsigned int height);

    //\}

    /**
        Gets the coordinate layer width.
        \return Width in pixel
    */
    unsigned int get_width();

    /**
        Gets the coordinate layer height.
        \return Height in pixel
    */
    unsigned int get_height();

    //-------------------------------------------------------------------------
    // Config
    /**
        \anchor SetConfig
        \name Set configuration
        Sets the configuration and threshold.
    */
    //\{
    /**
        Sets the maximum grid error.
        A deviation off the fixed point grid larger than the max grid error counts as error.
        Must be at least 0.03125 if symmetric offset is set.
        \param error Default is 0.0625 (1/16 sub grid)
    */
    void set_max_grid_error(double error);

    /**
        Sets the WarpBitPerPixel mode for the  coordinate layer.
        This will set the fixed-point notation for each coordinate as defined in the specification.

        \param bpp bits-per-pixel, valid values: 32, 24, 16, 8, 4, 2, 1 other values will default to 32
    */
    void set_WarpBitsPerPixel(unsigned int bpp);

    /**
        Sets the coordinate WarpCoordinateMode as int.
        \param mode int [0=POINT/PNT, 1=DELTA/D_PNT, 2=DELTAINC/DD_PNT]
    */
    void set_WarpCoordinateMode(int mode);

    /**
        Set/reset WarpSymmetricOffset mode.
        \param offset [0=DISABLE, 1=ENABLE]
    */
    void set_WarpSymmetricOffset(int offset);
    //\}

    /**
        Gets the max grid error; reset value is 0.0625.
        \return max grid error
    */
    double get_max_grid_error();

    /**
        Gets the mean square error after converting to delta or delta increment mode.

        \note This is a debug feature;
        it is more useful to set the tolerance with set_max_grid_error()
        and get the off-grid errors with get_error_cnt().
        \return Mean square error
    */
    double get_mse();

    /**
        Returns the error count after compressing the CoordinateLayer with optimize_auto()
        or optimize_manual().
        An error is counted if the x or y sub grid cannot be reached within the max grid error tolerance.
        \return Error count
        \note For the manual optimize flow, this is the same as the optimize_manual() return value.
    */
    int get_error_cnt();

    //-------------------------------------------------------------------------
    // debug

    /**
        Prints the coordinate frame to stdout.
        \note This is a debug feature.
    */
    void print();


    //-------------------------------------------------------------------------
    // Process
    /**
        \name Compress CoordinateLayer
        Applies settings or finds the most optimized compression.
    */
    //\{
    /**
        Finds the most suitable representation for the coordinate layer.
        It converts the original coordinates in sample-point mode and floating point
        notation to fixed-point notation.
        Then it tries o calculate all modes starting with the 'delta increment'
        mode and continues with the 'delta' and regular 'sample point' mode.
        For each mode, it tries to find the most optimized bit-per-pixel representation.
        As soon as the most compressed valid WarpBitsPerPixel/bpp setting is found, the setting is
        applied to this layer and the new WarpBitsPerPixel settings are returned.
        If there is no compressed representation of the coordinate layer, the
        coordinate layer is converted only to fixed-point notation.

        \param error_cnt Count of sub pixel errors that are acceptable; default should be zero.
        \return New WarpBitsPerPixel settings
    */
    unsigned int optimize_auto(int error_cnt);

    /**
        Tries to compress the coordinate layer using the settings supplied with
        set_WarpCoordinateMode(), set_WarpBitsPerPixel(), and set_WarpSymmetricOffset().
        These settings may not lead to a valid compressed coordinate layer;
        therefore the return value must be checked.
        On error, the original coordinate layer must be manually restored; different settings should be used to try again.
        Due to easier handling, optimize_auto() should be used whenever possible.

        \param error_cnt Count of subpixel errors that are acceptable; default should be zero.
        \return Validity of coordinate layer: [1=valid, 0=invalid]

        \note The error_cnt parameter can be used to relax the requirements;
        also, selecting a more tolerant grid error with set_max_grid_error() can help.
        However, most likely the WarpBitsPerPixel settings are too low, or the WarpCoordinateMode is improperly set.
    */
    unsigned int optimize_manual(int error_cnt);
    //\}


    //-------------------------------------------------------------------------
    /**
        \anchor GetCoordinateDataByteByByte
        \name Get coordinate data byte-by-byte
        Reads the coordinate data byte-by-byte from the binary buffer.
    */
    //\{
    /**
        \return Size of the buffer in terms of char
    */
    size_t get_buf_size();

    /**
        \return 1 at the end of the buffer; 0 otherwise.
    */
    int get_buf_end();

    /**
        Returns the char at the current buffer iterator position and increments the buffer iterator.
        \return Char at the current position.
        \note The buffer is implicitly created using the current WarpBitsPerPixel settings and the current WarpCoordinateMode.
    */
    char get_buf_char();
    //\}

    //-------------------------------------------------------------------------
    /**
        \anchor GetCoordinateData
        \name Get coordinate data
        Supplementary ways to retrieve the coordinate data.
    */
    //\{
    /**
        Saves the coordinate layer as a memory buffer.
        The coordinate layer must be in fixed-point notation; it is packed as binary using the current fixed-point notation.
        \note The memory must be allocated prior to passing the pointer to this method.
        \param buffer Pointer to allocated buffer
        \param size Size of the buffer in terms of char
        \return Validity of the buffer [1=valid, 0=invalid]
    */
    int get_buffer(void *buffer, size_t &size);

    /**
        Returns the LSB-aligned packed coordinate tuple at the supplied list position.
        \param pos List position of the coordinates
        \return LSB-aligned packed x and y coordinate
    */
    unsigned int get_packed(unsigned int pos);

    /**
        Returns the x coordinate at the supplied list position.
        \param pos List position of the coordinate
        \return Packed x coordinate
        \note The layer must be converted to fixed-point notation before.
    */
    unsigned int get_x(unsigned int pos);

    /**
        Returns the y coordinate at the supplied list position.
        \param pos List position of the coordinate
        \return Packed y coordinate
        \note The layer must be converted to fixed-point notation before.
    */
    unsigned int get_y(unsigned int pos);

    /**
        Returns the x coordinate at the supplied position. If the position is outside the list, -1 is returned.
        \param x x position of the coordinate
        \param y y position of the coordinate
        \return x coordinate as double
    */
    double get_x(unsigned int x, unsigned int y);

    /**
        Returns the y coordinate at the supplied position. If the position is outside the list, -1 is returned.
        \param x x position of the coordinate
        \param y y position of the coordinate
        \return y coordinate as double
    */
    double get_y(unsigned int x, unsigned int y);
    //\}

    //-------------------------------------------------------------------------
    // related to convert and retrieve config
    /**
        Prints the current configuration to stdout.
    */
    void print_config();

    /**
        Prints the current configuration register aligned to stdout.
    */
    void print_config_reg();


    //-------------------------------------------------------------------------
    /**
        \anchor GetConfig
        \name Get configuration
    */
    //\{
    /**
        Gets the bit-per-pixel (bpp) settings.
        \return Current bpp settings [32, 24, 16, 8, 4, 2, 1]
    */
    unsigned int get_WarpBitsPerPixel();

    /**
        Gets the coordinate mode as unsigned int.
        \return unsigned int [POINT=0, DELTA=1, DELTAINC=2]
    */
    unsigned int get_WarpCoordinateMode();

    /**
        Gets the symmetric offset setting.
        \return symmetric offset [0=DISABLED, 1=ENABLED]
    */
    int get_WarpSymmetricOffset();

    /**
        Gets the FrameXOffset integer fraction.
        \note Use the getreg_framexoffset() method for register-aligned values.
        \return Fixed-point value for FrameXOffset integer places
    */
    unsigned int get_framexoffset();

    /**
        Gets the FrameXOffset decimal fraction.
        \note Use the getreg_framexoffset() method for register-aligned values.
        \return Fixed-point value for FrameXOffset decimal places
    */
    unsigned int get_framexoffsetdecimalplaces();

    /**
        Gets the FrameYOffset integer fraction.
        \note Use the getreg_frameyoffset() method for register-aligned values.
        \return Fixed-point value for FrameYOffset integer places
    */
    unsigned int get_frameyoffset();

    /**
        Gets the FrameYOffset decimal fraction.
        \note Use the getreg_frameyoffset() method for register aligned value.
        \return Fixed-point value for FrameYOffset decimal places
    */
    unsigned int get_frameyoffsetdecimalplaces();


    /**
        Gets the DeltaXX value.
        \note Use the getreg_deltaxx() method for register-aligned values.
        \return Fixed-point value for DeltaXX
    */
    unsigned int get_deltaxx();

    /**
        Gets the DeltaXY value.
        \note Use the getreg_deltaxy() method for register-aligned values.
        \return Fixed-point value for DeltaXY
    */
    unsigned int get_deltaxy();

    /**
        Gets the DeltaYX value.
        \note Use the getreg_deltayx() method for register-aligned values.
        \return Fixed-point value for DeltaYX
    */
    unsigned int get_deltayx();

    /**
        Gets the DeltaYY value.
        \note Use the getreg_deltayy() method for register-aligned values.
        \return Fixed-point value for DeltaYY
    */
    unsigned int get_deltayy();

    /**
        Gets the ArbStartX value.
        \note Same as getreg_arbstartx() method for register-aligned value.
        \return 16.5 fixed-point value for ArbStartX
    */
    unsigned int get_arbstartx();

    /**
        Gets the ArbStartY value.
        \note Same as getreg_arbstarty() method for register-aligned value.
        \return 16.5 fixed-point value for ArbStartY
    */
    unsigned int get_arbstarty();

    /**
        Gets the ArbDeltaYY value.
        \note Use the getreg_arbdelta() method for register-aligned values.
        \return 3.5 fixed-point value for ArbDeltaYY
    */
    unsigned int get_arbdeltayy();

    /**
        Gets the ArbDeltaYX value.
        \note Use the getreg_arbdelta() method for register-aligned values.
        \return 3.5 fixed-point value for ArbDeltaYX
    */
    unsigned int get_arbdeltayx();

    /**
        Gets the ArbDeltaXY value.
        \note Use the getreg_arbdelta() method for register-aligned values.
        \return 3.5 fixed-point value for ArbDeltaXY
    */
    unsigned int get_arbdeltaxy();

    /**
        Gets the ArbDeltaXX value.
        \note Use the getreg_arbdelta() method for register-aligned values.
        \return 3.5 fixed-point value for ArbDeltaXX
    */
    unsigned int get_arbdeltaxx();

    //\}

    //-------------------------------------------------------------------------
    /**
        \anchor GetRegisterConfig
        \name Get register values
        Gets values properly aligned for registers.
    */
    //\{
    /**
        Gets the configuration value aligned for the FrameXOffset register.
        \return 32-bit fixed-point value for the FrameXOffset register
    */
    unsigned int getreg_framexoffset();

    /**
        Gets the configuration value aligned for the FrameYOffset register.
        \return 32-bit fixed-point value for the FrameYOffset register
    */
    unsigned int getreg_frameyoffset();

    /**
        Gets the configuration value aligned for the DeltaXX register.
        \return 32-bit fixed-point value for the DeltaXX register
    */
    unsigned int getreg_deltaxx();

    /**
        Gets the configuration value aligned for the DeltaXY register.
        \return 32-bit fixed-point value for the DeltaXY register
    */
    unsigned int getreg_deltaxy();

    /**
        Gets the configuration value aligned for the DeltaYX register.
        \return 32-bit fixed-point value for the DeltaYX register
    */
    unsigned int getreg_deltayx();

    /**
        Gets the configuration value aligned for the DeltaYY register.
        \return 32-bit fixed-point value for the DeltaYY register
    */
    unsigned int getreg_deltayy();

    /**
        Gets the warp configuration values aligned for the WarpControl register.
        \return 32-bit fixed-point value for the WarpControl register
    */
    unsigned int getreg_warpcontrol();

    /**
        Gets the configuration value aligned for the ArbStartX register.
        \return 32-bit fixed-point value for the ArbStartX register
    */
    unsigned int getreg_arbstartx();

    /**
        Gets the configuration value aligned for the ArbStartY register.
        \return 32-bit fixed-point value for the ArbStartY register
    */
    unsigned int getreg_arbstarty();

    /**
        Gets the configuration value aligned for the ArbStartY register.
        \return 32-bit fixed-point value for the ArbStartY register
    */
    unsigned int getreg_arbdelta();


    //\}

    /*! \cond PRIVATE */
    double get_stat_cnt_inside();
    double get_stat_avg_dy();
    /*! \endcond */

  private:
    //-------------------------------------------------------------------------
    // initialization
    /**
        Performs common initialization used by all constructors.
    */
    void initialize();

    //-------------------------------------------------------------------------
    // conversion
    /**
        Converts the original coordinate layer in floating-point notation (double precision)
        to a coordinate layer with 1/16 sub-grid precision.
        Sample points are again stored as floating points for easier processing.
        This method should be called before any other processing step.
    */
    void to_grid();

    //-------------------------------------------------------------------------
    // coordinate mode
    /**
        Calculates the 'delta' mode of a coordinate layer.
        The coordinate layer must be on hand in sample-point representation and
        the coordinate values must be given in double-precision notation.
        However, sample points must be rounded to the grid before using to_grid().
        If the sub-grid cannot be reached for either x or y position, the error count is incremented.
        A valid configuration has an error count of zero.
        \note The calculation is performed so that the first delta vectors equal zero.
    */
    void calculate_d();

    /**
        Calculates the 'delta increment' mode of a coordinate layer.
        The coordinate layer must be on hand in sample-point representation and
        the coordinate values must be given in double-precision notation.
        However, sample points must be rounded to grid before using to_grid().
        Check whether the compressed coordinate grid can be restored within the max_grid_error limit.
        If the position is outside the max_grid_error limit for either x or y position, the error count is incremented.
        \note The calculation is performed so that the first delta increment vectors equal zero.
    */
    void calculate_dd();

    //-------------------------------------------------------------------------
    /**
        Allocates the char buffer and saves the coordinate layer.
        The coordinate layer can be accessed byte-wise using the get_buf_char() method.

        \return On success, returns the size of the buffer in terms of char; on failure, zero.
    */
    size_t create_buf();

    /**
        Deletes the char buffer and sets the size and iterator to zero.
    */
    void destroy_buf();

    //-------------------------------------------------------------------------
    // fixpoint conversion
    /**
        Converts a CoordinateLayer to fixed-point notation using the settings supplied.
        \note Debug feature
        \param num_int Integer places
        \param num_dec Decimal places
        \param offset Manual enable [0=Disabled, 1=Enabled]
        \return 1 on error; else zero.
    */
    int double2fix(int num_int, int num_dec, int offset);

    /**
        Converts a CoordinateLayer to fixed-point notation using the settings supplied.
        \note Debug feature
        \param num_int Integer places
        \param num_dec Decimal places
        \return 1 on error; else zero.
    */
    int double2fix(int num_int, int num_dec);

    /**
        Converts a CoordinateLayer to fixed-point notation using the default fixed-point layout settings.
        \return 1 on error; else zero.
    */
    int double2fix();

    /**
        Converts a CoordinateLayer from fixed-point notation back to double-precision notation.
        This method is useful in calculating the mean square error using the double notation.
        \note The previous loss of information when converting to fixed-point notation cannot be undone.
    */
    void fix2double();

    /**
        Converts frame offset presets to fixed-point notation.
        \return 1 on error; else zero.
    */
    int frameoffset_double2fix();

    /**
        Converts the frameoffset to fixed-point notation
        using fixed-point notation other than the default settings.
        \note Debug feature
        \param num_int Integer places
        \param num_dec Decimal places
        \return 1 on error; else zero.
    */
    int frameoffset_double2fix(int num_int, int num_dec);

    /**
        Converts delta presets to fixed-point notation.
        \return 1 on error; else zero.
    */
    int delta_double2fix();

    /**
        Converts the delta values to fixed-point notation
        using fixed-point notation other than the default settings.
        \note Debug feature
        \param num_int Integer places
        \param num_dec Decimal places
        \return 1 on error; else zero.
    */
    int delta_double2fix(int num_int, int num_dec);

    //-------------------------------------------------------------------------

    unsigned int width;
    unsigned int height;

    unsigned int m_sourceWidth;
    unsigned int m_sourceHeight;

    chip_t chip;
    notation_t notation;
    warpcoordinatemode_t mode; // WarpCoordinateMode
    warpcoordinatemode_t target_mode;
    unsigned int bpp; // WarpBitsPerPixel, total width of packed bits should be equal or greater than 2*fixpoint size
    int offset; // WarpSymmetricOffset
    bool faulty;
    int ongrid;
    int error_cnt;

    int fixpoint_int;
    int fixpoint_dec;
    std::vector< class Coordinate > p;

    int internal_int;
    int internal_dec;

    // Additional offsets for delta mode
    class Coordinate frameoffset;
    int frameoffset_fixedpoint_int;
    int frameoffset_fixedpoint_dec;
    int frameoffset_isfixedpoint;

    // Additional offsets for delta increment mode
    class Coordinate deltax;
    class Coordinate deltay;
    int delta_fixedpoint_int;
    int delta_fixedpoint_dec;
    int delta_isfixedpoint;

    double max_grid_error;
    double mse;

    //
    char *buf;
    size_t buf_size;
    size_t buf_i;

    /**
        Removes commonly used whitespaces of a string passed as reference.
        Removes blank, tab, newline, and carriage return characters.
        \param buffer String as reference
    */
    static void remove_whitespace(std::string& buffer);

    double stat_cnt_inside;
    double stat_avg_dy;

};

/** \} */ /* end addtogroup */

} // namespace
#endif
