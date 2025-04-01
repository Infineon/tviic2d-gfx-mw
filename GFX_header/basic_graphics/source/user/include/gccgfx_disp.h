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
 * \file    gccgfx_disp.h
 */


#ifndef GCCGFX_DISP_H
#define GCCGFX_DISP_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
#include "gccgfx_card.h"
#include "gccgfx_defines.h"
#include "gccgfx_cap_types.h"
#include "gccgfx_disp_types.h"


#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_DISP_FEATURE_OTF_WIN_ALL ((CYGFX_U32)( \
                                             CYGFX_DISP_FEATURE_OTF_WIN_PRIO_0 | \
                                             CYGFX_DISP_FEATURE_OTF_WIN_PRIO_1 | \
                                             CYGFX_DISP_FEATURE_OTF_WIN_PRIO_2 | \
                                             CYGFX_DISP_FEATURE_OTF_WIN_PRIO_3 \
                                             )) /**< Mask for enabling all on-the-fly window feature */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/
CYGFX_EXTERN GCCGFX_IRIS_WINDOW_S       cygfx_win[GCCGFX_GEN_WINDOW_COUNT];             /**< Array of available windows to store internal parameters */
CYGFX_EXTERN CYGFX_U08                  cygfx_AlphaBlend[GCCGFX_GEN_LAYER_COUNT];       /**< For each layer, can be ::CYGFX_DISP_ALPHA_CTRL_DST, ::CYGFX_DISP_ALPHA_CTRL_SRC or ::CYGFX_DISP_ALPHA_CTRL_BLEND. */


CYGFX_EXTERN CYGFX_U08                  cygfx_OTF_sub_layer_id[GCCGFX_GEN_LAYER_COUNT]; /**< OTF window sub layer id */
CYGFX_EXTERN GCCGFX_IRIS_WARPSETTINGS_S cygfx_warp_win;                                 /**< Warp coordinate buffer parameter */
CYGFX_EXTERN GCCGFX_KDISP_INIT_KERNEL_S cygfx_InitData;                                 /**< Capture related information to send to kernel module (capture-to-window) */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Initialize the Display component.

    \param [in] PllDsp0  Frequency of Display 0 PLL (for Pixel Clock generation) in
                         Hertz
    \param [in] PllDsp1  Frequency of Display 1 PLL (for Pixel Clock generation) in
                         Hertz

    \retval None
**/
CYGFX_EXTERN void GccGfx_DispInit( CYGFX_U32 PllDsp0,
                                   CYGFX_U32 PllDsp1);

/**
    De-initialize the Display component.

    \retval None
**/
CYGFX_EXTERN void GccGfx_DispDeInit(void);

/**
    Return current active with which on-the-fly feature configured

    \param [in] task  Task identifier

    \retval ::GCCGFX_IRIS_WINDOW_S pointer to the current used Window
    \retval ::NULL - in case the on-the-fly feature is not configured for any
            window.
**/
CYGFX_EXTERN GCCGFX_IRIS_WINDOW_S* GccGfx_DispGetOtfWindow( CYGFX_U32 task);

/**
    Return the display structure

    \param [in] dispID  ID of the display (::GCCGFX_DISP_DISPLAY_ID0 or
                        ::GCCGFX_DISP_DISPLAY_ID1)
    \param [out] ppDisp  Pointer to get the display structure

    \retval ::CYGFX_OK On success. Otherwise the related error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_DispGetDisplay( CYGFX_U32               dispID,
                                                GCCGFX_IRIS_DISPLAY_S** ppDisp);

/**
    (Re-)configure display pipeline.

    \param [in] cardHandle  Used to write registers and to detect the target
                            display id.

    \retval None
**/
CYGFX_EXTERN   void GccGfx_DispConfigurePath( const GCCGFX_CARD_HANDLE cardHandle);  

/**
    Map HW resource to resource name used by Resource Manager.

    \param [in] id  HW ID of the HW resource.

    \retval Corresponding resource name
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_DispGdcIdToResID( GCCGFX_GEN_SEL_E id);    


/**
    Return the identifier of the available layer blend unit with the highest
    identifier.

    \retval CYGFX_U32 A layerblend unit identifier in the range from
            GCCGFX_GEN_SEL_LAYERBLEND5 to GCCGFX_GEN_SEL_LAYERBLEND1.
**/
CYGFX_EXTERN GCCGFX_GEN_SEL_E GccGfx_DispGetMaxLayerBlend(void);  



/**
    Wrapper for ::GccGfx_CardDevGetQueueHandle().
    Tries to get a write handle for a device.
    If the Display API is configured to be non-blocking,
    CYGFX_ERP_ERR_CARD_DEV_BUSY is returned if the device is busy.
    If the Display API is configured to be blocking (default), the function retries
    until either a card handle becomes available or the kernel signals that an
    expected shadow load is lost.

    \param [in] device  Device for which to get the write handle
    \param [in] request  Bit field describing all shadow load types the caller
                         wants to trigger.
    \param [out] pHandle  Write handle for the requested device

    \retval  ::CYGFX_OK Success. pHandle points to the write handle.
    \retval  ::CYGFX_ERP_ERR_DISP_DEV_BUSY Writing to the device is denied, because
             the previous commit call is not completely executed (e.g. shadow load request
             is pending) pHandle points to 0. (Only possible with NO_BLOCK=true.)
    \retval  ::CYGFX_ERP_ERR_DISP_SHDLD_ERROR Expected HW shadow load did never
             occur. pHandle points to 0. This signals unexpected HW behavior and should
             never happen. (Only possible with NO_BLOCK=false.)
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_DispCardDevGetQueueHandle( GCCGFX_CARD_DEVICE_S device, 
                                                        CYGFX_U64            request,
                                                        GCCGFX_CARD_HANDLE*  pHandle);



/**
    Used to configure the color lookup table (CLUT) on the display controller (e.g.,
    for gamma correction). More details see CyGfx_CmSetClutData().

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
                         CyGfx_DispOpenDisplay().
    \param [in] unit CLUT unit number.
    \param [in] format  Defines the number of entries in the array.
                        Depending on the hardware, the CLUT hardware may not support all format types.
                        In this case, the driver interpolates the missing or skips the values that are
                        not needed.
                        The current HW accepts only ::CYGFX_CM_CLUT_FORMAT_33.
    \param [in] pRed  Pointer to the array of red values. The size of the array
                      depends on the format.
    \param [in] pGreen  Pointer to the array of green values. The size of the array
                        depends on the format.
    \param [in] pBlue  Pointer to the array of blue values. The size of the array
                       depends on the format.

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_DispClutData( CYGFX_DISP             display,
                                              CYGFX_CM_CLUT_UNIT     unit,
                                              CYGFX_CM_CLUT_FORMAT   format,
                                              const CYGFX_S16*       pRed,
                                              const CYGFX_S16*       pGreen,
                                              const CYGFX_S16*       pBlue);

#ifdef TVIIC2D6MDDR
/**
    Sets a color matrix for a display.
    For more information please refer to ::CyGfx_CmSetColorMatrix()

    \param [in] display  A ::CYGFX_DISP returned from a previous call to
                     ::CyGfx_DispOpenDisplay()
    \param [in] format  Defines the color matrix format.
                        This value must be::CYGFX_CM_CMATRIX_FORMAT_4X3 or
                        ::CYGFX_CM_CMATRIX_FORMAT_5X4.
    \param [in] pMatrix  The matrix values is a float array.

    \retval ::CYGFX_OK On success, the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_DispSetColorMatrix( CYGFX_DISP              display,
                                                    CYGFX_CM_CMATRIX_FORMAT format,
                                                    const CYGFX_FLOAT*      pMatrix);

/**
    Sets the clip window on histogram unit. More details see CyGfx_CmHistoClip().

    \param [in] display  A ::CYGFX_DISP returned from a previous call to
                     ::CyGfx_DispOpenDisplay()
    \param [in] x  Top left x coordinate of the clip window [0,
                   ::CYGFX_CAP_MAX_WIDTH-1]
    \param [in] y  Top left y coordinate of the clip window [0,
                   ::CYGFX_CAP_MAX_HEIGHT-1]
    \param [in] w  Width of the clip window: [1, ::CYGFX_CAP_MAX_WIDTH-x]
    \param [in] h  Height of the clip window: [1, ::CYGFX_CAP_MAX_HEIGHT-y]

    \retval ::CYGFX_OK On success, the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_DispHistoClip( CYGFX_DISP    display,
                                               CYGFX_U32     x,
                                               CYGFX_U32     y,
                                               CYGFX_U32     w,
                                               CYGFX_U32     h);


/**
    Configures the histogram unit input color format and measurement color format.
    More details see CyGfx_CmHistoColorFormat().

    \param [in] display  A ::CYGFX_DISP returned from a previous call to
                     ::CyGfx_DispOpenDisplay()
    \param [in] eColIn  Input color format
                        - ::CYGFX_CM_HISTO_CONV_NO = Input components are not converted (default).
                        - ::CYGFX_CM_HISTO_CONV_YUV2RGB_BT601 = YUV input components as described in
                        BT.601 are converted to RGB.
                        - ::CYGFX_CM_HISTO_CONV_YUV2RGB_BT709 = YUV input components as described in.
                        BT.709 are converted to RGB.
    \param [in] eColMeasure  Measurement color format
                             - ::CYGFX_CM_HISTO_MEASURE_NO_CONV = Component0 for the histogram is measured as
                             is (default).
                             - ::CYGFX_CM_HISTO_MEASURE_LUMA = Component0 for the histogram is replaced by luma,
                             which is calculated from RGB input components according to BT.601,Y = 0.299*R+0.
                             587*G+0.114*B.
                             - ::CYGFX_CM_HISTO_MEASURE_LUMINANCE = Component0 for the histogram is replaced by
                             luminance, which is calculated from RGB input components according to BT.709, Y
                             = 0.2126*R+0.7152*G+0.0722*B.

    \retval ::CYGFX_OK On success, the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_DispHistoColorFormat( CYGFX_DISP             display,
                                                      CYGFX_CM_HISTO_CONV    eColIn,
                                                      CYGFX_CM_HISTO_MEASURE eColMeasure);

/**
    Switches histogram measurement ON/OFF and sets the operation mode.
    More details see CyGfx_CmHistoMode().

    \param [in] display  A ::CYGFX_DISP returned from a previous call to
                     ::CyGfx_DispOpenDisplay()
    \param [in] eMode  Operation mode that controls the start of frame measurement
                       - ::CYGFX_CM_HISTO_MODE_OFF = The histogram unit is switched OFF (default).
                       - ::CYGFX_CM_HISTO_MODE_TRIGGERED = A single measurement starts with the next
                       frame.
                       - ::CYGFX_CM_HISTO_MODE_CONTINUOUS = Each frame starts a measurement.

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_DispHistoMode( CYGFX_DISP          display,
                                               CYGFX_CM_HISTO_MODE eMode);

/**
    Select input source of histogram measurement.
    More details see ::CyGfx_CmHistoSelectSource().

    \param [in] display  A ::CYGFX_DISP returned from a previous call to
                     ::CyGfx_DispOpenDisplay()
    \param [in] eSource  Input source of measurement:
                       - ::CYGFX_CM_HISTO_SOURCE_0
                       - ::CYGFX_CM_HISTO_SOURCE_1
                       - ::CYGFX_CM_HISTO_SOURCE_2

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_DispHistoSelectSource( CYGFX_DISP            display,
                                                       CYGFX_CM_HISTO_SOURCE eSource);

/**
    Reads histogram results of frame measurement. More details see CyGfx_CmHistoReadValues().

    \param [in] display  A ::CYGFX_DISP returned from a previous call to
                     ::CyGfx_DispOpenDisplay()
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

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_DispHistoReadValues( CYGFX_DISP    display,
                                                     CYGFX_U32*    pComponent0,
                                                     CYGFX_U32*    pComponent1,
                                                     CYGFX_U32*    pComponent2);
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_DISP_H */

