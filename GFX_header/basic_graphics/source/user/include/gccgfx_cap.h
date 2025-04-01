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
 * \file    gccgfx_cap.h
 */


#ifndef GCCGFX_CAP_H
#define GCCGFX_CAP_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif


/**
 * \addtogroup gccgfx_cap
 * \brief      CaptureU internal interface
 *
 * \b Ring \b Buffer \b Setup: \n
 * Capture-to-Window mode uses the fractional ring buffer feature of the 2D Graphics
 * Core.
 * The calculation of ring buffer size and delta values for frame repetition decision
 * is described in detail in the Application Note "Ring Buffer Setup", which is part
 * of the Spec 002-08996.
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
/**
    Macro to get a handle for the capture surface of a capture unit.

    \param [in] unit  Capture unit ID. Must be ::CYGFX_CAP_UNIT_0.

    \retval Capture surface handle
**/
/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to
                  allow an easier understanding of the code
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 1 */
#define GCCGFX_CAP_MODE_GET_SURFACE(unit) ((CYGFX_SURFACE)(&(cygfx_Cap_Surf[(unit)])))

#define GCCGFX_FRAMECAP_STS_MDRCMRDONE_RESET (CYGFX_U32)(0xffffffffu) /** Measurement is in reset state. */
#define GCCGFX_FRAMECAP_STS_MDRCMRDONE_FINISH (CYGFX_U08)(0x1u) /** MdrCmrDone = 1 means mode detection is completed and pixel clock measurement is done. */
#define GCCGFX_FRAMECAP_STS_MDRCMRDONE_VALID (CYGFX_U08)(0x2u) /** Measurement is done and values are valid. */
/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    Capture context object

**/
typedef struct GCCGFX_CAP_CTX_TYPE
{
    GCCGFX_INSTANCE_IDENTIFIER_S identifier;                    /**< identify the handle type */
    CYGFX_CAP_UNIT               unit;                          /**< Capture unit */
    CYGFX_U08                    paddingByte0;                  /**< Padding byte 0 */
    CYGFX_U08                    paddingByte1;                  /**< Padding byte 1 */
    CYGFX_U08                    paddingByte2;                  /**< Padding byte 2 */
    CYGFX_CAP_PROPERTIES_S       properties;                    /**< Currently configured capture properties */
    GCCGFX_CAP_MODE_E            mode;                          /**< Operation mode of the capture unit */
    CYGFX_U16                    scaleWidth;                    /**< Width of output frame (only in capture-to-window mode) */
    CYGFX_U16                    scaleHeight;                   /**< Height of output frame (only in capture-to-window mode) */
    CYGFX_U16                    cropXStart;                    /**< Horizontal start position of cropping window */
    CYGFX_U16                    cropYStart;                    /**< Vertical start position of cropping window */
    CYGFX_U16                    cropWidth;                     /**< Width of cropping window */
    CYGFX_U16                    cropHeight;                    /**< Height of cropping window */
    GCCGFX_IRIS_COLORMATRIX_S    cMatrix;                       /**< Color transformation matrix */
    GCCGFX_HISTO_DATA_S          histoData;                     /**< Structure of histogram data */
    const CYGFX_S16*             pComponent0;                   /**< Pointer to an array of 33 10-bit values which represent the red (or Y) values */
    const CYGFX_S16*             pComponent1;                   /**< Pointer to an array of 33 10-bit values which represent the green (or U) values */
    const CYGFX_S16*             pComponent2;                   /**< Pointer to an array of 33 10-bit values which represent the blue (or V) values */
    CYGFX_U32                    numCapBuffers;                 /**< Number of capture buffers in capture-to-surface mode */
    CYGFX_SURFACE                capSurface[4];                 /**< List of capture buffers, described as surfaces */
    CYGFX_ADDR                   ringBufferAddr;                /**< VRAM Physical address of ring buffer in capture-to-window mode */
    CYGFX_U32                    ringBufferSize;                /**< Size of ring buffer in capture-to-window mode */
    GCCGFX_IRIS_WINDOW_S*        pWin;                          /**< pointer to internal window structure in capture-to-window mode */
    CYGFX_U32                    dstWidth;                      /**< Width of the frame written by Store #4 into memory */
    CYGFX_U32                    dstHeight;                     /**< Height of the frame written by Store #4 into memory */
    CYGFX_U32                    ulColorBits;                   /**< Color component size in bits (0xRRGGBBAA) of RGB input signal */
    CYGFX_U32                    ulColorShift;                  /**< Color component shift (0xRRGGBBAA) of RGB input signal */
    CYGFX_U32                    ulYuvMode;                     /**< YUV conversion mode (default: CYGFX_CAP_YUVCONVERSIONMODE_ITU601) */
    CYGFX_U32                    bOpen                    : 1;  /**< Is the capture unit initialized? */
    CYGFX_U32                    cropEnable               : 1;  /**< Cropping enabled */
    CYGFX_U32                    scaleEnable              : 1;  /**< Scaling enabled */
    CYGFX_U32                    clutEnabled              : 1;  /**< Enable color look up table */
    CYGFX_U32                    downscale                : 1;  /**< downscaling required (must be done in capture path) */
    CYGFX_U32                    upscale                  : 1;  /**< upscaling required (must be done in display path - only possible in capture-to-window mode) */
    CYGFX_U32                    bUseVideoProcessingBlock : 1;  /**< The video processing block is currently in the capture path */
    CYGFX_U32                    bReconfigureRingbuffer   : 1;  /**< If crop, scaler or ring buffer settings have been changed that require reconfiguration of ring buffer in capture_to_window mod */
    CYGFX_U32                    bChanged                 : 1;  /**< Capture context changed, need a commit in capture-to-window mode */
    CYGFX_U32                    padding                  : 23; /**< Padding to fill up bitfields */
} GCCGFX_CAP_CTX_S;

/**
    Capture Frame Cap Register Structure
**/
typedef struct
{
    volatile CYGFX_U32 stsReg;           /**< STS status register */
    volatile CYGFX_U32 MDRCMRDONE_STATE;     /**< MDRDONE state */
    volatile CYGFX_U32 mdSts0Reg;        /**< MDSTS0 status register */
    volatile CYGFX_U32 cmSts1Reg;        /**< CMSTS1 status register */
    volatile CYGFX_U32 cmSts2Reg;        /**< CMSTS2 status register */
    volatile CYGFX_U32 frameInconsistentCnt; /**< frame size inconsistent count, increased when HW error triggered, not read from HW register. */
    volatile CYGFX_U32 frLineCountReg;   /**< frame line count register */
} GCCGFX_CAP_FRAME_CAP_REGISTER_S; 

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/
CYGFX_EXTERN GCCGFX_SURFACE_S                 cygfx_Cap_Surf[GCCGFX_GEN_CAPTURE_COUNT]; /**< Surface that can be associated to a window that shows the output of a capture unit */
CYGFX_EXTERN volatile GCCGFX_CAP_RINGBUFFER_S cygfx_Cap_Ringbuffer;                     /**< Ring buffer associated with cygfx_Cap_Surf[0] */
CYGFX_EXTERN volatile GCCGFX_CAP_FRAME_CAP_REGISTER_S cygfx_capFrameCapRegister;                /**< Capture Frame Cap Register Structure object */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Initialize capture unit and reset SW internal variables.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CapInit(void);

/**
    Get internal capture context structure.

    \param [in] unit Identify unit.

    \retval Pointer of ::GCCGFX_CAP_CTX_S
**/
CYGFX_EXTERN GCCGFX_CAP_CTX_S* GccGfx_CapGetSettings(CYGFX_CAP_UNIT unit);

/**
    Inform capture module whether a capture stream is bound to a window and get
    surface pointer from capture module.

    \param [in] cap  Handle returned from ::CyGfx_CapOpen().
    \param [in,out] pWin  Pointer to structure describing the window or 0, if the
                          capture stream is disconnected from the window.

    \retval ::CYGFX_OK On success, the related error code otherwise
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CapSetWindow( CYGFX_CAP_CTX         cap,
                                              GCCGFX_IRIS_WINDOW_S* pWin);

/**
    Sets the dimension of the capture buffer in capture-to-window mode.
    More details see ::CyGfx_CmSetScaling().

    \param [in] cap  Capture handle returned by ::CyGfx_CapOpen()
    \param [in] width  Width of the scaled image [1,::CYGFX_CAP_MAX_WIDTH]
    \param [in] height  Height of the scaled image [1,::CYGFX_CAP_MAX_HEIGHT]

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER One of the parameters is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CapSetScaling( CYGFX_CAP_CTX cap,
                                               CYGFX_U16     width,
                                               CYGFX_U16     height);


/**
    Sets the color transformation matrix.
    More details see ::CyGfx_CmSetColorMatrix().
    \param [in] cap  Capture handle returned by ::CyGfx_CapOpen()
    \param [in] eFormat  Defines the color matrix format. This value must be
                         ::CYGFX_CM_CMATRIX_FORMAT_4X3.
    \param [in] fMatrix  A 4x3 matrix for color transformation. If \a fMatrix =
                         ::NULL, matrix unit is set to bypass.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN   Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  One of the parameters is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CapSetColorMatrix( CYGFX_CAP_CTX           cap,
                                                   CYGFX_CM_CMATRIX_FORMAT eFormat,
                                                   const CYGFX_FLOAT*      fMatrix);

/**
    Used to configure the color lookup table (CLUT) (e.g., for gamma correction).
    More details see ::CyGfx_CmSetClutData().

    \param [in] cap  Capture handle returned by ::CyGfx_CapOpen()
    \param [in] eFormat  Defines the number of entries in the array.
                         Depending on the hardware, the CLUT hardware may not support all format types.
                         In this case, the driver interpolates the missing values or skips the values
                         that are not required.
                         Current HW accepts only ::CYGFX_CM_CLUT_FORMAT_33.
    \param [in] pComponent0  Pointer to an array of \a eFormat 10-bit values, which
                             in the case of RGB pixels means the red value;
                             in the case of YUV pixels means the Y value.
    \param [in] pComponent1  Pointer to an array of \a eFormat 10-bit values, which
                             in the case of RGB pixels means the green value;
                             in the case of YUV pixels means the U value.
    \param [in] pComponent2  Pointer to an array of \a eFormat 10-bit values, which
                             in the case of RGB pixels means the blue value;
                             in the case of YUV pixels means the V value.

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CapClutData( CYGFX_CAP_CTX        cap,
                                             CYGFX_CM_CLUT_FORMAT eFormat,
                                             const CYGFX_S16*     pComponent0,
                                             const CYGFX_S16*     pComponent1,
                                             const CYGFX_S16*     pComponent2);

/**
    Sets the clip window on histogram unit. More details see CyGfx_CmHistoClip().

    \param [in] cap  Handle returned from CyGfx_CapOpen()
    \param [in] x  Top left x coordinate of the clip window
    \param [in] y  Top left y coordinate of the clip window
    \param [in] w  Width of the clip window
    \param [in] h  Height of the clip window

    \retval ::CYGFX_OK On success, the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CapHistoClip( CYGFX_CAP_CTX cap,
                                              CYGFX_U32     x,
                                              CYGFX_U32     y,
                                              CYGFX_U32     w,
                                              CYGFX_U32     h);


/**
    Configures the histogram unit input color format and measurement color format.
    More details see CyGfx_CmHistoColorFormat().

    \param [in] cap  Handle returned from CyGfx_CapOpen().
    \param [in] eColIn  Input color format
    \param [in] eColMeasure  Measurement color format
    \retval ::CYGFX_OK On success, the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CapHistoColorFormat( CYGFX_CAP_CTX          cap,
                                                     CYGFX_CM_HISTO_CONV    eColIn,
                                                     CYGFX_CM_HISTO_MEASURE eColMeasure);

/**
    Switches histogram measurement ON/OFF and sets the operation mode.
    More details see CyGfx_CmHistoMode().

    \param [in] cap  Handle returned from CyGfx_CapOpen()
    \param [in] eMode  Operation mode that controls the start of frame measurement

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CapHistoMode( CYGFX_CAP_CTX       cap,
                                              CYGFX_CM_HISTO_MODE eMode);

/**
    Reads histogram results of frame measurement. More details see CyGfx_CmHistoReadValues().

    \param [in] cap  Handle returned from CyGfx_CapOpen()
    \param [out] pComponent0  A pointer to an array of 64 bin values of Component0.
    \param [out] pComponent1  A pointer to an array of 64 bin values of Component1.
    \param [out] pComponent2  A pointer to an array of 64 bin values of Component2.

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CapHistoReadValues( CYGFX_CAP_CTX cap,
                                                    CYGFX_U32*    pComponent0,
                                                    CYGFX_U32*    pComponent1,
                                                    CYGFX_U32*    pComponent2);


/**
    Program FrameCap and ExtSrc4 for Capture-to-Display mode.

    \param [in] cardHandle  Card handle for the Display device.
    \param [in] capCtx  Valid Capture handle (returned by ::CyGfx_CapOpen);
                        NULL - functionality is not required.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CapDirectCaptureEnable( GCCGFX_CARD_HANDLE cardHandle,
                                                 CYGFX_CAP_CTX      capCtx);

/**
    Capture dynamic configurations will not be active immediately.
    GccGfx_CapCommit() submits the settings for processing.

    \note
    This function is invoked only in the following modes:
    - Capture-to-Window by ::CyGfx_WinCommit();
    - Capture-to-Surface by ::CyGfx_CapCommit().

    \param [in] cap  Handle returned from ::CyGfx_CapOpen().

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_NO_BUFFER  No capture buffer(s) defined
    \retval ::CYGFX_ERP_ERR_CAP_BUFFER_TOO_SMALL Ring buffer too small in capture-
            to-window mode
    \retval ::CYGFX_ERP_ERR_CAP_DEV_BUSY If the previous Capture Commit or Close
            execution is not finished. (e.g. shadow load request is pending).
            Retry is required.
    \retval ::CYGFX_ERP_ERR_CAP_SCALE_ERROR  Scale size is bigger than window size.

    \retval Or corresponding error code from an internal function.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CapCommit( CYGFX_CAP_CTX cap);

/**
    Enable Capture related interrupt handlers.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CapEnableIntHandlers(void);


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_CAP_H */

