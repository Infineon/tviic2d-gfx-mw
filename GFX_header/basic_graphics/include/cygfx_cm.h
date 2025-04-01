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
 * \file    cygfx_cm.h
 */


#ifndef CYGFX_CM_H
#define CYGFX_CM_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup cygfx_cm
* \code #include "cygfx_cm.h" \endcode
* \brief The Common Module provide the common APIs shared by multi-modules. Filter, Scaler, CLUT, Color Matrix,
* and Histo APIs are shared between Blit, Capture, Display and Window modules.
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/** \name Common filter channel definitions */
/** \{ */
typedef CYGFX_U08 CYGFX_CM_FILTER_CHANNEL;                                                                                                                                      /**< Type for filter channel. */
#define CYGFX_CM_FILTER_CHANNEL_R    ((CYGFX_CM_FILTER_CHANNEL)(1u << 3u))                                                                                                      /**< Filter is applied to the R or Y channel. */
#define CYGFX_CM_FILTER_CHANNEL_G    ((CYGFX_CM_FILTER_CHANNEL)(1u << 2u))                                                                                                      /**< Filter is applied to the G or U channel. */
#define CYGFX_CM_FILTER_CHANNEL_B    ((CYGFX_CM_FILTER_CHANNEL)(1u << 1u))                                                                                                      /**< Filter is applied to the B or V channel. */
#define CYGFX_CM_FILTER_CHANNEL_A    ((CYGFX_CM_FILTER_CHANNEL)1u)                                                                                                              /**< Filter is applied to the Alpha channel. */
#define CYGFX_CM_FILTER_CHANNEL_RGB  ((CYGFX_CM_FILTER_CHANNEL)(CYGFX_CM_FILTER_CHANNEL_R | CYGFX_CM_FILTER_CHANNEL_G | CYGFX_CM_FILTER_CHANNEL_B))                             /**< Filter is applied to the RGB or YUV channel. */
#define CYGFX_CM_FILTER_CHANNEL_RGBA ((CYGFX_CM_FILTER_CHANNEL)(CYGFX_CM_FILTER_CHANNEL_R | CYGFX_CM_FILTER_CHANNEL_G | CYGFX_CM_FILTER_CHANNEL_B | CYGFX_CM_FILTER_CHANNEL_A)) /**< Filter is applied to the RGBA or YUV channel. */
/** \} */

/** \name Common color lookup table formats */
/** \{ */
typedef CYGFX_U16 CYGFX_CM_CLUT_FORMAT;                      /**< Type for clut format. */
#define CYGFX_CM_CLUT_FORMAT_33  ((CYGFX_CM_CLUT_FORMAT)33)  /**< Each array for RGB contains thirty-three 10-bit values to describe the 0-255 index range. The missing values are interpolated (see ::CyGfx_CmSetClutData for details). */
#define CYGFX_CM_CLUT_FORMAT_256 ((CYGFX_CM_CLUT_FORMAT)256) /**< Each array for RGB contains 256 values to describe the CLUT. */
/** \} */

/** \name Common color lookup table units */
/** \{ */
typedef CYGFX_U08 CYGFX_CM_CLUT_UNIT;                      /**< Type for clut unit number. */
#define CYGFX_CM_CLUT_UNIT_0  ((CYGFX_CM_CLUT_UNIT)(0))    /**< Clut unit 0. */
#define CYGFX_CM_CLUT_UNIT_1  ((CYGFX_CM_CLUT_UNIT)(1))    /**< Clut unit 1. */
/** \} */

/** \name Common color matrix formats */
/** \{ */
typedef CYGFX_U08 CYGFX_CM_CMATRIX_FORMAT;                       /**< Type for color matrix format */
#define CYGFX_CM_CMATRIX_FORMAT_4X3 ((CYGFX_CM_CMATRIX_FORMAT)12) /**< float[12] array with four columns and three lines */
#define CYGFX_CM_CMATRIX_FORMAT_5X4 ((CYGFX_CM_CMATRIX_FORMAT)20) /**< float[20] array with five columns and four lines */
/** \} */

typedef void* CYGFX_CM_HANDLE; /**< Type for different handle pointer, can be ::CYGFX_DISP, ::CYGFX_WINDOW, ::CYGFX_CAP_CTX and ::CYGFX_BE_CONTEXT */

/** \name Common histogram operation modes */
/** \{ */
typedef CYGFX_U08 CYGFX_CM_HISTO_MODE;                         /**< Type for histo modes. */
#define CYGFX_CM_HISTO_MODE_OFF        ((CYGFX_CM_HISTO_MODE)(0)) /**< The histogram unit is switched OFF. */
#define CYGFX_CM_HISTO_MODE_TRIGGERED  ((CYGFX_CM_HISTO_MODE)(1)) /**< A single measurement starts with the next frame. */
#define CYGFX_CM_HISTO_MODE_CONTINUOUS ((CYGFX_CM_HISTO_MODE)(2)) /**< Each frame starts a new measurement. */
/** \} */

/** \name Color space conversion for common histogram measurement */
/** \{ */
typedef CYGFX_U08 CYGFX_CM_HISTO_CONV;                            /**< Type for histogram conversions. */
#define CYGFX_CM_HISTO_CONV_NO            ((CYGFX_CM_HISTO_CONV)(0)) /**< Input components are not converted. */
#define CYGFX_CM_HISTO_CONV_YUV2RGB_BT601 ((CYGFX_CM_HISTO_CONV)(1)) /**< YUV input components as described in BT.601 are converted to RGB. */
#define CYGFX_CM_HISTO_CONV_YUV2RGB_BT709 ((CYGFX_CM_HISTO_CONV)(2)) /**< YUV input components as described in BT.709 are converted to RGB. */
/** \} */

/** \name Common histogram measurement color format */
/** \{ */
typedef CYGFX_U08 CYGFX_CM_HISTO_MEASURE;                           /**< Type for histogram measurements. */
#define CYGFX_CM_HISTO_MEASURE_NO_CONV   ((CYGFX_CM_HISTO_MEASURE)(0)) /**< Component0 for histogram is measured as is. */
#define CYGFX_CM_HISTO_MEASURE_LUMA      ((CYGFX_CM_HISTO_MEASURE)(1)) /**< Component0 for histogram is replaced by Luma, which is calculated from RGB input components according to BT.601, Y = 0.299*R+0.587*G+0.114*B. */
#define CYGFX_CM_HISTO_MEASURE_LUMINANCE ((CYGFX_CM_HISTO_MEASURE)(2)) /**< Component0 for histogram is replaced by luminance, which is calculated from RGB input components according to BT.709, Y = 0.2126*R+0.7152*G+0.0722*B. */
/** \} */


/** \name Input source for Common Histogram Measurement */
/** \{ */
typedef CYGFX_U08 CYGFX_CM_HISTO_SOURCE;                           /**< Type for histogram input source. */
#define CYGFX_CM_HISTO_SOURCE_0   ((CYGFX_CM_HISTO_SOURCE)(0)) /**< Input source are original pixels. Pixels not handled by color correction stages are measured. */
#define CYGFX_CM_HISTO_SOURCE_1   ((CYGFX_CM_HISTO_SOURCE)(1)) 
/**< Input source are output pixels of the first color correction stage. Pixels handled by the first color correction stage are measured.
For ::CYGFX_DISP, the first color correction stage is composed of two CLUT units (::CyGfx_CmSetClutData) and one color matrix unit (::CyGfx_CmSetColorMatrix). */
#define CYGFX_CM_HISTO_SOURCE_2   ((CYGFX_CM_HISTO_SOURCE)(2)) 
/**< Input source are output pixels of the second color correction stage. Pixels handled by the first and second color correction stages are measured.
For ::CYGFX_DISP, the second color correction stage is one dither unit (::CyGfx_DispDitherCtrl). */
/** \} */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Sets the clip window on histogram unit; all pixels outside this window are not
    taken into account.
    If \a w and \a h are equal to 0, clipping is disabled.

    \note
    Dynamic configuration. This setting will not be active immediately.
    Use ::CyGfx_CapCommit() to submit for processing.
    In capture-to-window mode, call ::CyGfx_WinCommit() instead of
    ::CyGfx_CapCommit().
    Use ::CyGfx_DispCommit() to submit settings to ::CYGFX_DISP handle for processing.

    \param [in] pHandle CYGFX_CAP_CTX returned from ::CyGfx_CapOpen() or
                        a ::CYGFX_DISP returned from ::CyGfx_DispOpenDisplay().
                        ::CYGFX_DISP is supported only on the TVIIC2D6MDDR device.
    \param [in] x  Top left x coordinate of the clip window [0,
                   ::CYGFX_CAP_MAX_WIDTH-1].
    \param [in] y  Top left y coordinate of the clip window [0,
                   ::CYGFX_CAP_MAX_HEIGHT-1].
    \param [in] w  Width of the clip window: [1, ::CYGFX_CAP_MAX_WIDTH-x].
    \param [in] h  Height of the clip window: [1, ::CYGFX_CAP_MAX_HEIGHT-y].

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER The given pHandle is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CmHistoClip( CYGFX_CM_HANDLE pHandle,
                                            CYGFX_U32       x,
                                            CYGFX_U32       y,
                                            CYGFX_U32       w,
                                            CYGFX_U32       h);

/**
    Configures the histogram unit input color format and measurement color format.

    \note
    Dynamic configuration. This setting will not be active immediately.
    Use ::CyGfx_CapCommit() to submit for processing.
    In capture-to-window mode, call CyGfx_WinCommit() instead of
    ::CyGfx_CapCommit().
    Use ::CyGfx_DispCommit() to submit settings to ::CYGFX_DISP handle for processing.

    \param [in] pHandle CYGFX_CAP_CTX returned from ::CyGfx_CapOpen() or
                        a ::CYGFX_DISP returned from ::CyGfx_DispOpenDisplay().
                        ::CYGFX_DISP is supported only on the TVIIC2D6MDDR device.
    \param [in] eColIn  Input color format:
                        - ::CYGFX_CM_HISTO_CONV_NO = Input components are not converted (default).
                        - ::CYGFX_CM_HISTO_CONV_YUV2RGB_BT601 = YUV input components as described in
                        BT.601 are converted to RGB.
                        - ::CYGFX_CM_HISTO_CONV_YUV2RGB_BT709 = YUV input components as described in
                        BT.709 are converted to RGB.
    \param [in] eColMeasure  Measurement color format:
                             - ::CYGFX_CM_HISTO_MEASURE_NO_CONV = Component0 for the histogram is measured as
                             is (default).
                             - ::CYGFX_CM_HISTO_MEASURE_LUMA = Component0 for the histogram is replaced by luma,
                             which is calculated from RGB input components according to BT.601,Y = 0.299*R+0.
                             587*G+0.114*B.
                             - ::CYGFX_CM_HISTO_MEASURE_LUMINANCE = Component0 for the histogram is replaced by
                             luminance, which is calculated from RGB input components according to BT.709, Y
                             = 0.2126*R+0.7152*G+0.0722*B.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER The given pHandle is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CmHistoColorFormat( CYGFX_CM_HANDLE        pHandle,
                                                   CYGFX_CM_HISTO_CONV    eColIn,
                                                   CYGFX_CM_HISTO_MEASURE eColMeasure);

/**
    Switches histogram measurement ON/OFF and sets the operation mode.

    \note
    Dynamic configuration.
    This setting will be active and the measurement will start after the 
    ::CyGfx_CapCommit() call.
    In capture-to-window mode, call ::CyGfx_WinCommit() instead of
    ::CyGfx_CapCommit().
    Use ::CyGfx_DispCommit() to submit settings to ::CYGFX_DISP handle for processing.

    \param [in] pHandle CYGFX_CAP_CTX returned from ::CyGfx_CapOpen() or
                        a ::CYGFX_DISP returned from ::CyGfx_DispOpenDisplay().
                        ::CYGFX_DISP is supported only on the TVIIC2D6MDDR device.
    \param [in] eMode  Operation mode that controls the start of frame measurement:
                       - ::CYGFX_CM_HISTO_MODE_OFF = The histogram unit is switched OFF (default).
                       - ::CYGFX_CM_HISTO_MODE_TRIGGERED = A single measurement starts with the next
                       frame.
                       - ::CYGFX_CM_HISTO_MODE_CONTINUOUS = Each frame starts a measurement.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER The given pHandle is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CmHistoMode( CYGFX_CM_HANDLE     pHandle,
                                            CYGFX_CM_HISTO_MODE eMode);



/**
    Select input source of histogram measurement. See input source details in ::CYGFX_CM_HISTO_SOURCE.

    \note
    Dynamic configuration.
    Use ::CyGfx_DispCommit() to submit settings to ::CYGFX_DISP handle for processing.

    \param [in] pHandle ::CYGFX_DISP returned from ::CyGfx_DispOpenDisplay(),
                         is supported only on the TVIIC2D6MDDR device.
    \param [in] eSource  Input source of measurement:
                       - ::CYGFX_CM_HISTO_SOURCE_0
                       - ::CYGFX_CM_HISTO_SOURCE_1
                       - ::CYGFX_CM_HISTO_SOURCE_2

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER The given pHandle is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CmHistoSelectSource( CYGFX_CM_HANDLE       pHandle,
                                                    CYGFX_CM_HISTO_SOURCE eSource);

/**
    Reads histogram results of frame measurement. The 64 bin values of each color
    component can be read.
    The measurement results are available after the measurement is finished; otherwise, 
    CYGFX_KERP_ERR_HISTO_NOT_READY is returned. After successfully calling CyGfx_CmHistoReadValues,
    the next call returns CYGFX_KERP_ERR_HISTO_NOT_READY if no new measurement has been completed
    meanwhile. In other words: successive calls to CyGfx_CmHistoReadValues return
    the result of new frames. 
    \note The measurement is not ensured to be frame-synchronized. If the measurement for a defined 
          output is required, then the measurement must be triggered twice without changing the output;
          the value read the second time is assured to be the defined output.

    \note The correct result for OTF windows may be available one frame later.

    \param [in] pHandle ::CYGFX_CAP_CTX returned from ::CyGfx_CapOpen() or
                        a ::CYGFX_DISP returned from ::CyGfx_DispOpenDisplay().
                        ::CYGFX_DISP is supported only on the TVIIC2D6MDDR device.
    \param [out] pComponent0  A pointer to an array of 64 bin values of Component0,
                              which in the case of RGB pixels means the red value; in the case of YUV pixels
                              means the Y value.
                              If \a pComponent0 = ::NULL, no result will be saved in array \a pComponent0.
    \param [out] pComponent1  A pointer to an array of 64 bin values of Component1,
                              which in the case of RGB pixels means the green value; in the case of YUV
                              pixels means the U value.
                              If \a pComponent1 = ::NULL, no result will be saved in array \a pComponent1.
    \param [out] pComponent2  A pointer to an array of 64 bin values of Component2,
                              which in the case of RGB pixels means the blue value; in the case of YUV pixels
                              means the V value.
                              If \a pComponent2 = ::NULL, no result will be saved in array \a pComponent2.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER The given pHandle is invalid.
    \retval ::CYGFX_KERP_ERR_HISTO_NOT_READY No new results from Histo are available.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CmHistoReadValues( CYGFX_CM_HANDLE pHandle,
                                                  CYGFX_U32*      pComponent0,
                                                  CYGFX_U32*      pComponent1,
                                                  CYGFX_U32*      pComponent2);

/**
    Used to configure the Color Lookup Table (CLUT) (e.g., for gamma correction).
    The ::CYGFX_CM_CLUT_FORMAT_256 format defines 256 sample points
    representing the resulting color channel intensity.
    The ::CYGFX_CM_CLUT_FORMAT_33 format defines 33 sample points
    representing the resulting color channel intensity.
    Intermediate values will be interpolated by the HW.
    The first sample point corresponds to the input color code 0, the second one to
    32, ...,
    and the last one to 1024 of the 10-bit VIDEOSS internal processing pipeline.
    Although input 1024 is not possible, the last sample point
    is needed for interpolation of codes 993 to 1023.
    An index entry of 0 stands for the minimum and 1023 for the maximum intensity.

    Index values outside this range will be clamped.
    \note
    - Using ::CyGfx_CmSetClutData() with blit context ::CYGFX_BE_CONTEXT requires the IBO render mode.
    \note
    Example: Let F(in) be the requested gamma formula.
    Input values of F(in) are in the range [0.0, 1.0].
    Output values smaller than 0.0 or bigger than 1.0 are allowed.
    The value array (in this example pRed) must be calculated in the following way:

    - ::CYGFX_CM_CLUT_FORMAT_256:
    \code
    for (i = 0; i <= 255; i++)
      pRed[i] = (CYGFX_S16)
                  (0.5f + ( F(i/255.0f) * 1023.0f));
    \endcode
    - ::CYGFX_CM_CLUT_FORMAT_33:
    \code
    for (i = 0; i <= 32; i++)
      pRed[i] = (CYGFX_S16)
                  (0.5f + ( F(i/32.0f * 1024.0f/1023.0f) * 1023));
    \endcode
    Note that the given formula calculates the value for F(256/255).
    If F(x) is only defined for input values 0.0 ... 1.0, pRed[32] can be
    extrapolated as
    \code
    pRed[32] = (CYGFX_S16)
                  (0.5f + (( 32.0f * F(1) - F(31.0f * 32.0f / 1023.0f))
                      * 1023.0f / 31.0f));
    \endcode
    \note
    This setting will not be active immediately.
    Use ::CyGfx_DispCommit() to submit settings to ::CYGFX_DISP handle for processing,
    use ::CyGfx_BeBlt() to submit settings to ::CYGFX_BE_CONTEXT handle for processing,
    use ::CyGfx_WinCommit() to submit settings to ::CYGFX_WINDOW handle for processing,
    use ::CyGfx_CapCommit() to submit settings to ::CYGFX_CAP_CTX handle for processing.
    The pRed, pGreen, and pBlue pointers must be valid for all following processing calls.

    \note
    For ::CYGFX_DISP, ::CYGFX_WINDOW and ::CYGFX_CAP_CTX handle, only ::CYGFX_CM_CLUT_FORMAT_33
    is supported.
    \note
    For ::CYGFX_WINDOW handle, the function is available only if the window was created by
    ::CyGfx_DispWinCreate() with the ::CYGFX_DISP_FEATURE_IMAGE_PROCESSING feature bit.
    
    \note 
    If one pointer of color components is NULL, then the CLUT is set to bypass.

    \param [in,out] pHandle A ::CYGFX_BE_CONTEXT Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object),
                           a ::CYGFX_DISP returned from a previous call of ::CyGfx_DispOpenDisplay(),
                           a ::CYGFX_WINDOW returned from a previous call of ::CyGfx_DispWinCreate(),
                           a ::CYGFX_CAP_CTX returned from a previous call of ::CyGfx_CapOpen().
    \param [in] unit CLUT unit number. For ::CYGFX_BE_CONTEXT, ::CYGFX_WINDOW and ::CYGFX_CAP_CTX handle,
                          this parameter is ignored. For ::CYGFX_DISP handle, ::CYGFX_CM_CLUT_UNIT_0 
                          indicates the CLUT unit after Color Matrix; ::CYGFX_CM_CLUT_UNIT_1 indicates 
                          the CLUT unit before Color Matrix. ::CYGFX_CM_CLUT_UNIT_1 is supported only by
                          the TVIIC2D6MDDR device.
    \param [in] format  Defines the number of entries in the array.
                        Depending on the hardware, the CLUT hardware may not support all format types.
                        In such cases, the driver interpolates the missing, or skips the values that are
                        not required.
    \param [in] pRed  Pointer to an array, which in the case of RGB pixels means the red value, in the 
                      case of YUV pixels means the Y value. The size of the array depends on the format.
    \param [in] pGreen  Pointer to an array, which in the case of RGB pixels means the green value, in the 
                      case of YUV pixels means the U value. The size of the array depends on the format.
    \param [in] pBlue  Pointer to an array, which in the case of RGB pixels means the blue value, in the 
                      case of YUV pixels means the V value. The size of the array depends on the format.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER The given identifier parameter is
    invalid or the given pHandle is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CmSetClutData( CYGFX_CM_HANDLE      pHandle,
                                              CYGFX_CM_CLUT_UNIT   unit,
                                              CYGFX_CM_CLUT_FORMAT format,
                                              const CYGFX_S16*     pRed,
                                              const CYGFX_S16*     pGreen,
                                              const CYGFX_S16*     pBlue);
/**
    ::CyGfx_CmSetColorMatrix is the setting function for the color matrix.
    Depending on the format parameter, it is possible to define two matrix types.
    The following formulas define the use case for both cases:
    ::CYGFX_CM_CMATRIX_FORMAT_4X3 (fMatrix represents a float[12] array for RGB
    modification):
    \code
    red_out   = fMatrix[0] * red + fMatrix[3] * green + fMatrix[6] * blue +
                      fMatrix[ 9] * 255.75
    green_out = fMatrix[1] * red + fMatrix[4] * green + fMatrix[7] * blue +
                        fMatrix[10] * 255.75
    blue_out  = fMatrix[2] * red + fMatrix[5] * green + fMatrix[8] * blue +
                       fMatrix[11] * 255.75
    alpha_out = alpha
    \endcode
    ::CYGFX_CM_CMATRIX_FORMAT_5X4 (fMatrix represents a float[20] array for RGBA
    modification):
    \code
    red_out   = fMatrix[0] * red + fMatrix[4] * green + fMatrix[ 8] * blue +
                      fMatrix[12] * alpha + fMatrix[16] * 255.75
    green_out = fMatrix[1] * red + fMatrix[5] * green + fMatrix[ 9] * blue +
                        fMatrix[13] * alpha + fMatrix[17] * 255.75
    blue_out  = fMatrix[2] * red + fMatrix[6] * green + fMatrix[10] * blue +
                       fMatrix[14] * alpha + fMatrix[18] * 255.75
    alpha_out = fMatrix[3] * red + fMatrix[7] * green + fMatrix[11] * blue +
                      fMatrix[15] * alpha + fMatrix[19] * 255.75
    \endcode
    The offset multiplication 255.75 comes from the internal 10-bit color depth.
    If fMatrix = NULL (default), the color matrix function will be switched OFF.
    The alpha value is bypassed without modification.
    \note For blit engine (::CYGFX_BE_CONTEXT), if a color matrix is set using
    ::CyGfx_CmSetColorMatrix(), the driver-internal automatic YUV-to-RGB conversion of the SRC buffer
    will be shut OFF. The YUV color will be converted
    according to the user-defined color matrix.
    \note The range of matrix elements is [-3.99, 3.99].
    The production version of the driver does not always check this range.
    
    \note
    Restrictions for ::CYGFX_WINDOW handle:
    - the function is available only if the window was created by
    ::CyGfx_DispWinCreate() with the ::CYGFX_DISP_FEATURE_COLOR_MATRIX feature bit.
    - the alpha part of the matrix output affects only the destination blend.
    - if a color matrix is set using ::CyGfx_CmSetColorMatrix(), the
    driver's internal automatic YUV-to-RGB conversion will be shut off.
    The YUV color will be converted according to the user-defined color matrix.

    \note
    This setting will not be active immediately.
    Use ::CyGfx_BeBlt() to submit settings to ::CYGFX_BE_CONTEXT handle for processing,
    use ::CyGfx_DispCommit() to submit settings to ::CYGFX_DISP handle for processing,
    use ::CyGfx_WinCommit() to submit settings to ::CYGFX_WINDOW handle for processing,
    use ::CyGfx_CapCommit() to submit settings to ::CYGFX_CAP_CTX handle for processing.

    \note
    For ::CYGFX_DISP and ::CYGFX_CAP_CTX handle, only ::CYGFX_CM_CMATRIX_FORMAT_4X3 is supported.
    \param [in,out] pHandle A ::CYGFX_BE_CONTEXT Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object),
                           a ::CYGFX_DISP returned from a previous call of ::CyGfx_DispOpenDisplay()
                           supported only by the TVIIC2D6MDDR device,
                           a ::CYGFX_WINDOW returned from a previous call of ::CyGfx_DispWinCreate(),
                           a ::CYGFX_CAP_CTX returned from a previous call of ::CyGfx_CapOpen().
    \param [in] format  Defines the format of the matrix (see above).
    \param [in] fMatrix  Address of the color matrix (see [Description]).

    \retval  ::CYGFX_OK On success.
    \retval  ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER The given identifier parameter
    is NULL or the given pHandle is invalid.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_WINDOW The color matrix feature is not
    requested by this window.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CmSetColorMatrix( CYGFX_CM_HANDLE          pHandle,
                                                 CYGFX_CM_CMATRIX_FORMAT  format,
                                                 const CYGFX_FLOAT*       fMatrix);
/**
    Sets the dimension of the capture buffer in capture-to-window mode.
    The scale size must not be larger than the window size.
    This setting has no effect in capture-to-surface mode where
    the capture buffer dimension is defined by the surface assigned by
    ::CyGfx_CapAssignSurfaceArray().

    \note
    This setting will not be active immediately.
    Use ::CyGfx_WinCommit() to submit for processing.

    \param [in] pHandle ::CYGFX_CAP_CTX returned from ::CyGfx_CapOpen().
    \param [in] width  Width of the scaled image [1,::CYGFX_CAP_MAX_WIDTH].
    \param [in] height  Height of the scaled image [1,::CYGFX_CAP_MAX_HEIGHT].

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER The given identifier or pHandle
    is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CmSetScaling( CYGFX_CM_HANDLE pHandle,
                                             CYGFX_U16       width,
                                             CYGFX_U16       height);
/**
    The ::CyGfx_CmSetFilter() function specifies a filter for the current context.

    \param [in,out] pHandle A ::CYGFX_BE_CONTEXT Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object).
    \param [in] eChannel  Filter channel.
    \param [in] fir_exponent  FIR product sum is divided by 2**(fir_exponent) and
                              rounded. Must be: 0 <= fir_exponent < 16.
    \param [in] taps_h  Filter width; can be 0 or any odd value between 3 and 15.
                        Must be consistent with the number of coefficients in the fir_coefficients_h
                        vector.
    \param [in] fir_coefficients_h  Pointer to a vector of coefficients doing
                                    horizontal filtering. The coefficients are taps_h numbers in 8-bit signed
                                    integer format. Null pointer and taps_h = 0 mean that horizontal filtering is
                                    bypassed.
    \param [in] taps_v  Filter height; can be 0 or any odd value between 3 and 15.
                        Must be consistent with the number of coefficients in the fir_coefficients_v
                        vector.
    \param [in] fir_coefficients_v  Pointer to a vector of coefficients doing
                                    vertical filtering. The coefficients are taps_v numbers in 8-bit signed integer
                                    format. Null pointer and taps_v = 0 mean that vertical filtering is bypassed.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER The given identifier or pHandle.
    is invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CmSetFilter( CYGFX_CM_HANDLE           pHandle,
                                            CYGFX_CM_FILTER_CHANNEL   eChannel,
                                            CYGFX_U08                 fir_exponent,
                                            CYGFX_U08                 taps_h,
                                            const CYGFX_S08*          fir_coefficients_h,
                                            CYGFX_U08                 taps_v,
                                            const CYGFX_S08*          fir_coefficients_v);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_CM_H */
