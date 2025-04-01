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
/*****************************************************************************/


/**
 * \file    cygfx_surfman.h
 */


#ifndef CYGFX_SURFMAN_H
#define CYGFX_SURFMAN_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to
                  allow an easier understanding of the code
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */

#ifdef __cplusplus
extern "C"
{
#endif

/**
 \addtogroup cygfx_surfman
 \code #include "cygfx_surfman.h" \endcode
 \brief The Surface API provides functions to manage memory blocks with image content, called image
    buffer. (See also \ref overview_surface)

    The Surface API provides functions to manage memory blocks with image content, called image
    buffer. A "surface" is a description of such an image buffer, including
    the dimensions of the image, pixel format, and physical address in memory. The described
    image can be a YUV or (compressed) RGB(A) buffer, and optionally use a color lookup table.

    Most modules of this driver can work on surfaces.
    Examples are \ref cygfx_capture, \ref cygfx_display and \ref cygfx_bliteng.
    The Surface API allows, for example, to:
    - Pass surfaces created by the application to BlitEng for further
    processing
    - Pass surfaces created by the application to Display for displaying on
    the screen
    - Pass surfaces obtained from Capture to BlitEng for further processing
    - etc.

    The properties can be assigned by using the ::CyGfx_SmAssignBuffer and
    ::CyGfx_SmPaletteAssign helper functions or "manually" using ::CyGfx_SmSetAttribute calls. In the second case,
    the minimum required attributes are typically ::CYGFX_SM_ATTR_VIRT_ADDRESS,
    ::CYGFX_SM_ATTR_WIDTH, ::CYGFX_SM_ATTR_HEIGHT, ::CYGFX_SM_ATTR_BITPERPIXEL,
    ::CYGFX_SM_ATTR_COLORBITS, and ::CYGFX_SM_ATTR_COLORSHIFT.
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
/* Surface range */
#define CYGFX_SM_MIN_DIMENSION ((CYGFX_U32)(0))    /**< Absolute minimum width and height for surfaces */
#define CYGFX_SM_MAX_DIMENSION ((CYGFX_U32)(4096)) /**< Absolute maximum width and height for surfaces */
/**
    Gets an RGBA color in the format that is used for many functions:
    CYGFX_DISP_ATTR_BACKGROUND_COLOR, CYGFX_WIN_ATTR_COLOR,
    CYGFX_BE_CTX_ATTR_COLOR, CYGFX_BE_SURF_ATTR_COLOR

    \param [in] r  8-bit color value for red
    \param [in] g  8-bit color value for green
    \param [in] b  8-bit color value for blue
    \param [in] a  8-bit alpha value

**/
#define CYGFX_SM_COLOR_TO_RGBA(r, g, b, a) ((((r)&0xffu)<<24u) | (((g)&0xffu)<<16u) | (((b)&0xffu)<<8u) | (((a)&0xffu)<<0u))

/**
    Retrieves the red color component from an R8G8B8A8 value.

    \param [in] rgba  An R8G8B8A8 value

**/
#define CYGFX_SM_COLOR_GET_R(rgba) (((rgba)>>24u)&0xffu)

/**
    Retrieves the green color component from an R8G8B8A8 value.

    \param [in] rgba  An R8G8B8A8 value

**/
#define CYGFX_SM_COLOR_GET_G(rgba) (((rgba)>>16u)&0xffu)

/**
    Retrieves the blue color component from an R8G8B8A8 value.

    \param [in] rgba  An R8G8B8A8 value

**/
#define CYGFX_SM_COLOR_GET_B(rgba) (((rgba)>>8u)&0xffu)

/**
    Retrieves the alpha component from an R8G8B8A8 value.

    \param [in] rgba  An R8G8B8A8 value

**/
#define CYGFX_SM_COLOR_GET_A(rgba) (((rgba)>>0u)&0xffu)

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    The surface object container
**/
typedef struct
{
    CYGFX_U32 reserved[14]; /**< Reserved memory needed for any surface container */
} CYGFX_SURFACE_OBJECT_S;


typedef CYGFX_SURFACE_OBJECT_S* CYGFX_SURFACE; /**< The surface object definition */

/**
    Defines the column info for compressed images packed with object partitioning.
    If object partitioning is used the image data must start with n *
    CYGFX_SURFACE_COLUMN_INFO_S and continue with the compressed streams.
**/
typedef struct
{
    CYGFX_U16 reserved;              /**< Reserved. Must be 0. */
    CYGFX_U16 column_width;          /**< Defines the column width (Note: the sum of all column_width must be equal to the surface width) */
    CYGFX_U32 column_address_offset; /**< Address offset of column */
} CYGFX_SURFACE_COLUMN_INFO_S;


/** The color format of surface buffer. The syntax for RGBA buffers is as follows:
    R, G, B, A, and X stand for red, green, blue, alpha, and unused.
    The field description(s) are followed by the bit width. For example, R5G6B5 uses 5 red, 6 green, and 5
    blue bits but no alpha.
    \note Additional formats are supported by the BlitEng hardware.
    They can be defined with the ::CyGfx_SmSetAttribute function.

    The following examples show the related memory organization:

    \b R8G8B8A8:
    <table border="0">
        <tr>
            <th>Byte</th><th>0</th><th>1</th><th>2</th><th>3</th><th>4</th><th>5</th><th>6</th><th>7</th>
        </tr>
        <tr>
            <td>Color</td><td>A0</td><td>B0</td><td>G0</td><td>R0</td><td>A1</td><td>B1</td><td>G1</td><td>R1</td>
        </tr>
    </table>
    \b RGB8A8:
    <table border="0">
        <tr>
            <th>Byte</th><th>0</th><th>1</th><th>2</th><th>3</th>
        </tr>
        <tr>
            <td>Color</td><td>A0</td><td>RGB0</td><td>A1</td><td>RGB1</td>
        </tr>
    </table>

    The bit width of components of YUV formats Y, U (Cb), and V (Cr) is always 8.
    The memory organization is described below.
    */
/** \name Color formats */
/** \{ */
typedef CYGFX_U08 CYGFX_SM_FORMAT;                       /**< Type for surface formats */
#define CYGFX_SM_FORMAT_R8G8B8A8 ((CYGFX_SM_FORMAT)(0))  /**< 32 bpp RGBA format */
#define CYGFX_SM_FORMAT_A8B8G8R8 ((CYGFX_SM_FORMAT)(1))  /**< 32 bpp ABGR format */
#define CYGFX_SM_FORMAT_A8R8G8B8 ((CYGFX_SM_FORMAT)(2))  /**< 32 bpp ARGB format */
#define CYGFX_SM_FORMAT_B8G8R8A8 ((CYGFX_SM_FORMAT)(3))  /**< 32 bpp BGRA format */
#define CYGFX_SM_FORMAT_R8G8B8X8 ((CYGFX_SM_FORMAT)(4))  /**< 32 bpp RGB format; the X-bits are not applied. */
#define CYGFX_SM_FORMAT_X8B8G8R8 ((CYGFX_SM_FORMAT)(5))  /**< 32 bpp BGR format; the X-bits are not applied. */
#define CYGFX_SM_FORMAT_X8R8G8B8 ((CYGFX_SM_FORMAT)(6))  /**< 32 bpp RGB format; the X-bits are not applied. */
#define CYGFX_SM_FORMAT_R8G8B8   ((CYGFX_SM_FORMAT)(7))  /**< 24 bpp RGB format */
#define CYGFX_SM_FORMAT_B8G8R8   ((CYGFX_SM_FORMAT)(8))  /**< 24 bpp BGR format */
#define CYGFX_SM_FORMAT_R6G6B6   ((CYGFX_SM_FORMAT)(9))  /**< 18 bpp RGB format */
#define CYGFX_SM_FORMAT_R4G4B4A4 ((CYGFX_SM_FORMAT)(10)) /**< 16 bpp RGBA format */
#define CYGFX_SM_FORMAT_A4R4G4B4 ((CYGFX_SM_FORMAT)(11)) /**< 16 bpp ARGB format */
#define CYGFX_SM_FORMAT_R5G5B5A1 ((CYGFX_SM_FORMAT)(12)) /**< 16 bpp RGBA format (5 bit for RGB, 1 bit alpha) */
#define CYGFX_SM_FORMAT_A1R5G5B5 ((CYGFX_SM_FORMAT)(13)) /**< 16 bpp ARGB format (5 bit for RGB, 1 bit alpha) */
#define CYGFX_SM_FORMAT_A1B5G5R5 ((CYGFX_SM_FORMAT)(14)) /**< 16 bpp ABGR format (5 bit for RGB, 1 bit alpha) */
#define CYGFX_SM_FORMAT_B5G5R5A1 ((CYGFX_SM_FORMAT)(15)) /**< 16 bpp BGRA format (5 bit for RGB, 1 bit alpha) */
#define CYGFX_SM_FORMAT_R5G6B5   ((CYGFX_SM_FORMAT)(16)) /**< 16 bpp RGB format (5 bit for RB, 6 bit for G) */
#define CYGFX_SM_FORMAT_A8RGB8   ((CYGFX_SM_FORMAT)(17)) /**< 16 bpp, A8RGB8 can be used for gray or indexed image buffers with additional alpha values. For the second use case, an indexed color lookup table (palette) must be assigned to the surface. */
#define CYGFX_SM_FORMAT_RGB8     ((CYGFX_SM_FORMAT)(18)) /**< 8 bpp, RGB8 can be used for gray or indexed image buffers. For the second use case, an indexed color lookup table (palette) must be assigned to the surface. */
#define CYGFX_SM_FORMAT_A8       ((CYGFX_SM_FORMAT)(19)) /**< 8 bpp alpha format; can be used as, for example, text buffer or external alpha mask buffer. */
#define CYGFX_SM_FORMAT_A4RGB4   ((CYGFX_SM_FORMAT)(20)) /**< 8 bpp, A4RGB4; can be used for gray or indexed image buffers with additional alpha value. For the second use case, an indexed color lookup table (palette) must be assigned to the surface. */
#define CYGFX_SM_FORMAT_A4       ((CYGFX_SM_FORMAT)(21)) /**< 4 bpp alpha format; can be used as, for example, a text buffer or external alpha mask buffer. */
#define CYGFX_SM_FORMAT_A2       ((CYGFX_SM_FORMAT)(22)) /**< 2 bpp alpha format; can be used as, for example, a text buffer or external alpha mask buffer. */
#define CYGFX_SM_FORMAT_A1       ((CYGFX_SM_FORMAT)(23)) /**< 1 bpp alpha format; can be used as, for example, a text buffer or external alpha mask buffer. */
#define CYGFX_SM_FORMAT_RGB1     ((CYGFX_SM_FORMAT)(24)) /**< 1 bpp black/white buffer (no alpha) */
#define CYGFX_SM_FORMAT_YUV444   ((CYGFX_SM_FORMAT)(25)) /**< 24 bpp YUV format. 8 bits for each Y, U, and V. Y at highest bits, V at lowest bits [Y1U1V1Y2U2V2Y3U3V3...]. */


/**
YUV (YCbCr) color buffer: two neighbor pixels in a line are described by a common UV component but individual Y components: Pixel 0: Y0U0V0,  Pixel 1: Y1U0V0, Pixel3: Y2U1V1, ...<br>
<b>Packed format:</b>
Buffer defined by ::CYGFX_SM_ATTR_VIRT_ADDRESS<br>

<table border="1">
<tr><th>Byte</th><th>Color</th></tr>
<tr><td>0</td><td>U0</td></tr>
<tr><td>1</td><td>Y0</td></tr>
<tr><td>2</td><td>V0</td></tr>
<tr><td>3</td><td>Y1</td></tr>
<tr><td>4</td><td>U1</td></tr>
<tr><td>5</td><td>Y2</td></tr>
<tr><td>6</td><td>V1</td></tr>
<tr><td>7</td><td>Y3</td></tr>
</table> */

#define CYGFX_SM_FORMAT_YVYU422 ((CYGFX_SM_FORMAT)(26))
/**
YUV (YCbCr) color buffer: two neighbor pixels in a line are described by a common UV component but individual Y components: Pixel 0: Y0U0V0,  Pixel 1: Y1U0V0, Pixel3: Y2U1V1, ...<br>
<b>Packed format:</b>
Buffer defined by ::CYGFX_SM_ATTR_VIRT_ADDRESS<br>

<table border="1">
<tr><th>Byte</th><th>Color</th></tr>
<tr><td>0</td><td>Y0</td></tr>
<tr><td>1</td><td>U0</td></tr>
<tr><td>2</td><td>Y1</td></tr>
<tr><td>3</td><td>V0</td></tr>
<tr><td>4</td><td>Y2</td></tr>
<tr><td>5</td><td>U1</td></tr>
<tr><td>6</td><td>Y3</td></tr>
<tr><td>7</td><td>V1</td></tr>
</table>
*/
#define CYGFX_SM_FORMAT_VYUY422 ((CYGFX_SM_FORMAT)(27))

#define CYGFX_SM_FORMAT_YUV420  ((CYGFX_SM_FORMAT)(28))  /**< YUV (YCbCr) color buffer: semi planar,
Y of four pixels in a rectangle are described by a common UV component, U comes always before V in memory.
Y buffer presented by ::CYGFX_SM_ATTR_VIRT_ADDRESS, UV buffer presented by ::CYGFX_SM_ATTR_VIRT_ADDRESS_SEC. */
/** \} */

/** \name Compression types */
/** \{ */
typedef CYGFX_U08 CYGFX_SM_COMP;                          /**< Type for surface compression formats */
#define CYGFX_SM_COMP_NONE         ((CYGFX_SM_COMP)(0x4)) /**< The buffer is not compressed. */
#define CYGFX_SM_COMP_RLC          ((CYGFX_SM_COMP)(0x3)) /**< Run length encoded (allowed for read buffers only) */
#define CYGFX_SM_COMP_RLA          ((CYGFX_SM_COMP)(0x2)) /**< Run-Length Adaptive (lossless compression; allowed for read buffers only) */
#define CYGFX_SM_COMP_RLAD         ((CYGFX_SM_COMP)(0x0)) /**< Run-Length Adaptive Dithering (lossy compression) */
#define CYGFX_SM_COMP_RLAD_UNIFORM ((CYGFX_SM_COMP)(0x1)) /**< Run-Length Adaptive Dithering (lossy compression; uniform package size) */
/** \} */

/** \name Color models */
/** \{ */
typedef CYGFX_U08 CYGFX_SM_COLOR_FORMAT;                            /**< Type for surface color formats */
#define CYGFX_SM_COLOR_FORMAT_RGBA   ((CYGFX_SM_COLOR_FORMAT)(0x0)) /**< Single-buffer format; the surface describes an RGBA image. */
#define CYGFX_SM_COLOR_FORMAT_YUV444 ((CYGFX_SM_COLOR_FORMAT)(0x1)) /**< Single buffer format; the surface describes a YUV444 image. Only Read Supported. */
#define CYGFX_SM_COLOR_FORMAT_YUV422 ((CYGFX_SM_COLOR_FORMAT)(0x2)) /**< Single-buffer format; the surface describes a YUV422 image with one packed YUV buffer:
Two neighbor pixels in a line are described by a common UV component but individual Y components. U comes always before V in memory. */
#define CYGFX_SM_COLOR_FORMAT_YUV420 ((CYGFX_SM_COLOR_FORMAT)(0x3)) /**< Semi-planar buffer format; the surface describes a YUV420 image with 2 buffers: Y and UV.
Y of four pixels in a rectangle are described by a common UV component.
Y buffer presented by ::CYGFX_SM_ATTR_VIRT_ADDRESS; UV buffer presented by ::CYGFX_SM_ATTR_VIRT_ADDRESS_SEC. See also \ref YUV_buffer.*/
/** \} */

/** \name Color spaces */
/** \{ */
typedef CYGFX_U08 CYGFX_SM_COLOR_SPACE;                                           /**< Type for surface color spaces */
#define CYGFX_SM_COLOR_SPACE_RGB                    ((CYGFX_SM_COLOR_SPACE)(0x0)) /**< Standard RGB color space */
#define CYGFX_SM_COLOR_SPACE_YUV_BT601_SWING_STUDIO ((CYGFX_SM_COLOR_SPACE)(0x1)) /**< YUV color space conforming to ITU-R BT.601. Y data in the range [16, 235] and UV data in the range [16, 239]. */
#define CYGFX_SM_COLOR_SPACE_YUV_BT601_SWING_FULL   ((CYGFX_SM_COLOR_SPACE)(0x2)) /**< YUV color space conforming to ITU-R BT.601. Y data and UV data in the range [0, 255]. The default color space for the YUV format. */
#define CYGFX_SM_COLOR_SPACE_YUV_BT709_SWING_STUDIO ((CYGFX_SM_COLOR_SPACE)(0x3)) /**< YUV color space conforming to ITU-R BT.709. Y data in the range [16, 235] and UV data in the range [16, 239]. */
/** \} */

/** \name Surface Manager attributes */
/** \{ */
typedef CYGFX_U08 CYGFX_SM_ATTR;                                /**< Type for surface attributes */
/** \note In the following description, "initial" means the value after ::CyGfx_SmResetSurfaceObject was called. */
#define CYGFX_SM_ATTR_VIRT_ADDRESS     ((CYGFX_SM_ATTR)(0))     /**< Virtual base address of first buffer.
For single-buffer format ::CYGFX_SM_COLOR_FORMAT_RGBA and ::CYGFX_SM_COLOR_FORMAT_YUV422, it points to the single buffer.
For semi-planar format ::CYGFX_SM_COLOR_FORMAT_YUV420, it points to the Y buffer.
The default value is 0.
\note
- The base address should be used to address images inside the VRAM.
- When setting a virtual address, the physical address will be overwritten.
- See the address restrictions under CyGfx_SmAssignBuffer(). */
#define CYGFX_SM_ATTR_PHYS_ADDRESS     ((CYGFX_SM_ATTR)(1))     /**< Physical base address of the first buffer.
For single-buffer format ::CYGFX_SM_COLOR_FORMAT_RGBA and ::CYGFX_SM_COLOR_FORMAT_YUV422, it points to the single buffer.
For semi-planar format ::CYGFX_SM_COLOR_FORMAT_YUV420, it points to the Y buffer.
The default value is 0.
\note
- Can be used to read image buffers directly from the NOR flash.
- When setting a physical address, the virtual address will be overwritten.
- See the address restrictions under CyGfx_SmAssignBuffer(). */
#define CYGFX_SM_ATTR_VIRT_ADDRESS_SEC ((CYGFX_SM_ATTR)(2))     /**< Virtual base address of the secondary buffer; only required for sem- planar format ::CYGFX_SM_COLOR_FORMAT_YUV420, it points to the UV buffer. For details, see ::CYGFX_SM_ATTR_VIRT_ADDRESS. */
#define CYGFX_SM_ATTR_PHYS_ADDRESS_SEC ((CYGFX_SM_ATTR)(3))     /**< Physical base address of the secondary buffer; only required for semi-planar format ::CYGFX_SM_COLOR_FORMAT_YUV420, it points to UV buffer. For details, see ::CYGFX_SM_ATTR_PHYS_ADDRESS. */
#define CYGFX_SM_ATTR_WIDTH            ((CYGFX_SM_ATTR)(4))     /**< Width in pixels. The default value is 0.
See the restriction under CyGfx_SmAssignBuffer(). */
#define CYGFX_SM_ATTR_HEIGHT           ((CYGFX_SM_ATTR)(5))     /**< Height in pixels. The default value is 0.
See the restriction under CyGfx_SmAssignBuffer(). */
#define CYGFX_SM_ATTR_STRIDE           ((CYGFX_SM_ATTR)(6))     /**< Size of a line in bytes of the first buffer.
For single-buffer format ::CYGFX_SM_COLOR_FORMAT_RGBA and ::CYGFX_SM_COLOR_FORMAT_YUV422, it is the stride of the single buffer.
For semi-planar format ::CYGFX_SM_COLOR_FORMAT_YUV420, it is the stride of the Y buffer.
The default value is 0.
\note - If stride is 0, the default stride for the image buffer is assumed represented by the following formula:
\code stride = ((Width * BitPerPixel + 7) >> 3)\endcode
The GetAttribute call will return the previously set "custom" stride value or the default stride calculated with the formula above.
The stride value is not important for compressed images. If the surface describes a compressed image,
the returned stride value will be 0.
- For 32 BITPERPIXEL stride%4 must be 0
- For 16 BITPERPIXEL stride%2 must be 0 */
#define CYGFX_SM_ATTR_STRIDE_SEC       ((CYGFX_SM_ATTR)(7))     /**< Size of a line in bytes of the secondary buffer.
For single-buffer format ::CYGFX_SM_COLOR_FORMAT_RGBA and ::CYGFX_SM_COLOR_FORMAT_YUV422, it is ignored.
For semi-planar format ::CYGFX_SM_COLOR_FORMAT_YUV420, it is the stride of the UV buffer.
The default value is 0.
\note - If stride is 0, the default stride for the image buffer is assumed represented by the following formula:
\code stride = ((Width * BitPerPixel + 7) >> 3)\endcode
The GetAttribute call will return the previously set "custom" stride value or the default stride calculated with the formula above.
*/
#define CYGFX_SM_ATTR_BITPERPIXEL      ((CYGFX_SM_ATTR)(8))     /**<
For single-buffer format ::CYGFX_SM_COLOR_FORMAT_RGBA and ::CYGFX_SM_COLOR_FORMAT_YUV422; it is the size of one pixel in bits, can be one of 1, 2, 4, 8, 16, 18, 24, or 32.
For semi-planar format ::CYGFX_SM_COLOR_FORMAT_YUV420, it is average size of one pixel in bits; can be 12.
The default value is 32. */

/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In Doxygen comments, character sequences such as double slash are used.
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
#define CYGFX_SM_ATTR_COLORBITS ((CYGFX_SM_ATTR)(9))            /**< Color component size in bits 0xRRGGBBAA or 0xY0U0Y1V0.
The default value is 0x08080808.
\code
    color_bits = red_bits<<24 +
                 green_bits<<16 +
                 blue_bits<<8 +
                 alpha_bits;
                 //for RGBA format
    color_bits = Y0_bits<<24 +
                 U_bits<<16 +
                 Y1_bits<<8 +
                 V_bits;
                 //for YUV422 format.
\endcode
\note - For YUV, the following restrictions apply:
- Y0_bits = Y1_bits, U_bits = V_bits
\note
- 0<=alpha_bits<=8; 0<=red_bits,green_bits,blue_bits,Y_bits,U_bits,V_bits<=10 for uncompressed surfaces
- 0<=alpha_bits,red_bits,green_bits,blue_bits,Y_bits,U_bits,V_bits<=8 for compressed surfaces
- See also ::CYGFX_SM_ATTR_COLORSHIFT
\note - red_bits defines the width of the color index of indexed colors and thus the maximum length of the color palette.
See also \ref cygfx_palette. */
/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In Doxygen comments, character sequences such as double slash are used.
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
#define CYGFX_SM_ATTR_COLORSHIFT          ((CYGFX_SM_ATTR)(10)) /**< Color component shift (0xRRGGBBAA) or (0xY0U0Y1V0).
The default value is 0x18100800.
\code
color_shift = red_shift<<24 +
              green_shift<<16 +
              blue_shift<<8 +
              alpha_shift;
              // for RGBA format
color_shift = Y0_shift<<24 +
              U_shift<<16 +
              Y1_shift<<8 +
              V_shift;
             // for YUV422 format
             // (two consecutive pixels
             //  combined).
\endcode
\note
- Ensure that all bits are in the range of BITPERPIXEL. (e.g., red_shift = 6 and red_bits = 4 cannot be for BITPERPIXEL = 8.)
- For indexed formats, the red_bits and red_shift define the index. In this case, the following restriction is valid: 0<red_bits<=8, red_shift = 0
- For YUV, the following restrictions apply: Y0_shift < Y1_shift, U_shift < V_shift (U must be in first pixel, V in second pixel)
- Only the following YUV formats have been tested and can guarantee correct behavior:
BPP=16, COLORBITS=0x08080808u, COLORSHIFT=0x08001810 (CYGFX_SM_FORMAT_YVYU422)
BPP=16, COLORBITS=0x08080808u, COLORSHIFT=0x00081018 (CYGFX_SM_FORMAT_VYUY422) */
#define CYGFX_SM_ATTR_COMPRESSION_FORMAT  ((CYGFX_SM_ATTR)(11)) /**< Compression format. Must be one of ::CYGFX_SM_COMP.
The default value is ::CYGFX_SM_COMP_NONE. */
#define CYGFX_SM_ATTR_RLAD_MAXCOLORBITS   ((CYGFX_SM_ATTR)(12)) /**< Maximum for average number of bits per compressed pixel.
This value is used for surfaces with the ::CYGFX_SM_COMP_RLAD and ::CYGFX_SM_COMP_RLAD_UNIFORM compression formats.
The format is similar to ::CYGFX_SM_ATTR_COLORBITS (0xRRGGBBAA) or (0xY0U0Y1V0).
The default value is 0x08080808.
If the surface is used as the target buffer (blit or capture), and the compression format is ::CYGFX_SM_COMP_RLAD or
::CYGFX_SM_COMP_RLAD_UNIFORM, the ::CYGFX_SM_ATTR_BITPERPIXEL value defines the maximum write buffer size (see ::CYGFX_SM_ATTR_SIZEINBYTES).
The application can use the ::CYGFX_SM_ATTR_SIZEINBYTES parameter to calculate the required buffer size and can allocate and assign a VRAM space for this operation. */
#define CYGFX_SM_ATTR_COLOR_FORMAT        ((CYGFX_SM_ATTR)(13)) /**< Color format. Must be one of ::CYGFX_SM_COLOR_FORMAT.
The default value is ::CYGFX_SM_COLOR_FORMAT_RGBA). */
#define CYGFX_SM_ATTR_SIZEINBYTES         ((CYGFX_SM_ATTR)(14)) /**< Buffer size in bytes. The default value is 0.
\note This value must be set for images with the ::CYGFX_SM_COMP_RLC and CYGFX_SM_COMP_RLA compression types.
The size of the compressed source buffer must be 4-byte-aligned. The size can be set to zero for all other image types.
If the size is zero, ::CyGfx_SmGetAttribute will return the following size depending on the given compression type:
- CYGFX_SM_COMP_NONE: required buffer size (Height * Stride). For ::CYGFX_SM_COLOR_FORMAT_YUV420, the size is the total size of two buffers.
- CYGFX_SM_COMP_RLC: 0 (the correct size must be set by the application)
- CYGFX_SM_COMP_RLA: 0 (the correct size must be set by the application)
- CYGFX_SM_COMP_RLAD: the maximum required size for the given compression settings
- CYGFX_SM_COMP_RLAD_UNIFORM: the maximum required size for the given compression settings */
#define CYGFX_SM_ATTR_SURF_FORMAT         ((CYGFX_SM_ATTR)(15)) /**< Macro attribute to set and get ::CYGFX_SM_FORMAT.
The default value is CYGFX_SM_FORMAT_R8G8B8A8.
\note A ::CyGfx_SmSetAttribute call with the CYGFX_SM_ATTR_SURF_FORMAT attribute will implicitly set the ::CYGFX_SM_ATTR_BITPERPIXEL, ::CYGFX_SM_ATTR_COLORBITS, ::CYGFX_SM_ATTR_COLORSHIFT, ::CYGFX_SM_ATTR_COLOR_FORMAT, and ::CYGFX_SM_ATTR_COLOR_SPACE attributes.
A ::CyGfx_SmGetAttribute call with the CYGFX_SM_ATTR_SURF_FORMAT attribute will return the related color format if the same attributes match the ::CYGFX_SM_FORMAT definition. */
#define CYGFX_SM_ATTR_COLOR_SPACE         ((CYGFX_SM_ATTR)(16)) /**< Color space. Must be one of ::CYGFX_SM_COLOR_SPACE.
The default value is ::CYGFX_SM_COLOR_SPACE_RGB.
The value should differ from the default value only when using a YUV surface format as described in ::CYGFX_SM_FORMAT. */
#define CYGFX_SM_ATTR_OBJECT_PARTITIONING ((CYGFX_SM_ATTR)(17)) /**< The number of partitions for object partitioning; only for compressed images. For uncompressed images, this value is ignored.
The default value is 0. */
#define CYGFX_SM_ATTR_USERDEFINED         ((CYGFX_SM_ATTR)(18)) /**< User-defined. The default value is 0. */
/** \} */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Resets a surface object with the default values.

    \param [in,out] surf  The surface to reset (Must be a pointer to a
    ::CYGFX_SURFACE_OBJECT_S object).

    \retval             ::CYGFX_OK On success
    \retval             ::CYGFX_ERP_ERR_SURF_INVALID_PARAMETER The specified
    surface is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SmResetSurfaceObject( CYGFX_SURFACE surf);

/**
    Assigns a memory address, width, height, and color format representing an image
    to a surface object.
    The buffer is owned by the calling function. It just describes how the image
    buffer must be used by a function.
    The application must ensure that the memory is available as long as the surface
    is being used.
    \note
    - The CyGfx_SmAssignBuffer call is a fast way to assign an image to a surface
    object. Alternatively,
      it is also possible to assign the same properties with several calls of ::CyGfx_SmSetAttribute.
    - The eFormat value can be used to define the most useful color formats. Note
      that not all hardware units support all color formats.
    - The BlitEng HW can operate with many more color formats. Use ::CyGfx_SmSetAttribute in this case
      to assign the correct format to the surface.
    - It is recommended to always use 4-byte-aligned addresses for pBufferAddress.

      It is required for 32-bpp (Bit Per Pixel) and compressed buffers (two lowest
    bits of the address must be 0).
      The requirement for 16-bpp is 2-byte alignment (The lowest bit of the
    address must be 0).
      All other buffers do not have an alignment restriction.
    - The pBufferAddress -and the complete buffer- must address the memory that is
    accessible for
      VIDEOSS; for example, the VRAM or the internal flash.
    - pBufferAddress for surfaces used as the write destination (::CYGFX_BE_TARGET_STORE for blit, draw and fill,
      CyGfx_CapAssignSurfaceArray() for capture and CyGfx_WbDumpFrame()) must
    address the memory where write access is allowed.
    - In some cases, pBufferAddress can be zero. Such surfaces can be used as
    source surfaces in
      BlitEng operations or for CyGfx_WinSetSurface(). In this case, the
    hardware will not access
      the surface memory, but the driver uses the geometry settings of the surface.

    - Surface dimensions can be 1..::CYGFX_SM_MAX_DIMENSION pixels in width and
      height.
      The surfaces can be used as the writing target, e.g., STORE for CyGfx_DeDraw(),

      STORE for CyGfx_BeBlt(), or CyGfx_CapAssignSurfaceArray()). The surfaces
      can also
      be used as the reading source, e.g., CyGfx_WinSetSurface() or SRC for
      CyGfx_BeBlt()).
    - Surfaces with run-length-encoded buffers (uRleWords != 0) are supported only
    for source
      surfaces in BlitEng operations and for window buffers if the surface is not
    clipped.
      If uRleWords is different from zero, ::CYGFX_SM_COMP_RLC
      will be set to ::CYGFX_SM_ATTR_COMPRESSION_FORMAT; otherwise ::CYGFX_SM_COMP_NONE.

    \param [in] surf  Surface object (Must be a pointer to a ::CYGFX_SURFACE_OBJECT_S object.)
    \param [in] uWidth  Width of the image in pixels
    \param [in] uHeight  Height of the image in pixels
    \param [in] eFormat  Format of the image. The format defines the BitPerPixel,
    ColorBits, and ColorShift, and Color format fields.
    \param [in] pBufferAddress  Memory address of the image. The buffer starts with
    the upper-left pixel.
    \param [in] uRleWords  Number of 32-bit words that are required to decode
    (::CYGFX_SM_COMP_RLC) the run-length-encoded source buffer. Zero indicates an
    uncompressed buffer.

    \retval  ::CYGFX_OK On success
    \retval  ::CYGFX_ERP_ERR_SURF_INVALID_SURFACE If a NULL pointer is given for
    surf
    \retval  ::CYGFX_ERP_ERR_SURF_INVALID_FORMAT If an illegal value is given for
    eFormat
    \retval  ::CYGFX_ERP_ERR_SURF_INVALID_PARAMETER If the surface size is out of
    range; see ::CYGFX_SM_MAX_DIMENSION.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SmAssignBuffer( CYGFX_SURFACE   surf,
                                               CYGFX_U32       uWidth,
                                               CYGFX_U32       uHeight,
                                               CYGFX_SM_FORMAT eFormat,
                                               void*           pBufferAddress,
                                               CYGFX_U32       uRleWords);

/**
    Assign or detach a palette to or from a surface. This is required to use the
    image as indexed image.
    \note
    Only allocated palettes ::CyGfx_PaletteAlloc can be assigned.
    Reallocated palette needs to be reassigned.
    \note
    Changing the palette properties after ::CyGfx_PaletteAlloc and ::CyGfx_SmPaletteAssign
    does not influence the uploaded palette.
    For the uploaded palette, the properties are updated only after a call of the
    ::CyGfx_PaletteAlloc and ::CyGfx_SmPaletteAssign APIs.

    \param [in,out] surf  The surface (Must be a pointer to a ::CYGFX_SURFACE_OBJECT_S object).
    \param [in] palette  The palette object (Must be a pointer to a
    ::CYGFX_PALETTE_OBJECT_S object) or NULL to detach a previously assigned palette.

    \retval  ::CYGFX_OK On success
    \retval  ::CYGFX_ERP_ERR_SURF_INVALID_SURFACE The specified surface is invalid.
    \retval ::CYGFX_ERP_ERR_SURF_INVALID_PARAMETER Unallocated palette or,
    HwBitWidth or ColorBits for the specified palette are invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SmPaletteAssign( CYGFX_SURFACE       surf,
                                                const CYGFX_PALETTE palette);

/**
    Free the assigned palette of the surface.
    It frees hardware resources that were marked as used with ::CyGfx_PaletteAlloc
    and ::CyGfx_SmPaletteAssign, even if the palette is shared with other surfaces.

    \note ::CyGfx_PaletteFree can also be used to free a palette.
    \note ::CyGfx_SmPaletteAssign can be used to detach a palette from a surface
    without freeing hardware resources.

    \param [in,out] surf  The surface (Must be a pointer to a ::CYGFX_SURFACE_OBJECT_S object.)

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_SURF_INVALID_SURFACE The specified surface is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SmPaletteFree( CYGFX_SURFACE surf);

/**
    Sets surface attributes.
    The application must ensure that the parameters like stride, height, size, and
    format of the surface are always consistent and match the size of the memory
    block allocated for the surface.

    \param [in] surf  Surface object (Must be a pointer to a ::CYGFX_SURFACE_OBJECT_S object.)
    \param [in] eName  Name of the attribute. See ::CYGFX_SM_ATTR.
    \param [in] uValue  New value

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_SURF_INVALID_ATTRIBUTE If an illegal value is given for
    eName
    \retval ::CYGFX_ERP_ERR_SURF_INVALID_SURFACE If a NULL pointer is given for surf
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SmSetAttribute( CYGFX_SURFACE surf,
                                               CYGFX_SM_ATTR eName,
                                               CYGFX_U32     uValue);

/**
    Gets surface attributes

    \param [in] surf  Surface (Must be a pointer to a ::CYGFX_SURFACE_OBJECT_S
    object.)
    \param [in] eName  Name of the attribute. See ::CYGFX_SM_ATTR.
    \param [out] puValue  Pointer to a variable to receive the parameter value

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_SURF_INVALID_ATTRIBUTE If an illegal value is given for
    eName
    \retval ::CYGFX_ERP_ERR_SURF_INVALID_SURFACE If a NULL pointer is given for surf
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SmGetAttribute( const CYGFX_SURFACE surf,
                                               CYGFX_SM_ATTR       eName,
                                               CYGFX_U32*          puValue);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_SURFMAN_H */
