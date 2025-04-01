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
 * \file    cygfx_capture.h
 */


#ifndef CYGFX_CAPTURE_H
#define CYGFX_CAPTURE_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In Doxygen comments, the character sequences e.g., double slash are used.
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
/**
 \addtogroup cygfx_capture
 \code #include "cygfx_capture.h" \endcode
 \brief The video capture API provides video capture functions.

 As mentioned in \ref overview_capture, there are three modes to capture a video stream.
 ::CYGFX_CAP_CTX is a handle for a capture stream that can be used to bind the following:
 - a capture stream to a display
 - a capture stream to a window
 - a capture stream to a surface array \n
 The following examples show how to realize the three capture modes.

 - Capture-to-Display
\code
    CYGFX_DISP_TIMING_S captureTiming =
        {
            (CYGFX_FLOAT)(60 * 800 * 500) / 1000000.0f, //PixelClock
            640, //Hact
            480, //Vact
            800, //Htot
            500, //Vtot,
            144, //Hsbp
            17,  //Vsbp
            64,  //Hsync
            4,   //Vsync
            788, //HtotMin
            497, //VtotMin
            812, //HtotMax
            503, //VtotMax
            CYGFX_DISP_DCK_INVERT_ON,
            CYGFX_GEN_POLARITY_HIGH,
            CYGFX_GEN_POLARITY_HIGH,
            CYGFX_GEN_POLARITY_HIGH,
            CYGFX_DISP_RGB_LOW
        };
    CYGFX_CAP_PROPERTIES_S   capProperties = CYGFX_CAP_PROPERTIES_INITIALIZER;
    CYGFX_DISP_PROPERTIES_S  mode = CYGFX_DISP_PROPERTIES_INITIALIZER;
    CYGFX_CAP_CTX            capCtx = 0;
    CYGFX_DISP               display = 0;

    // open capture
    capProperties.Hact  = captureTiming->Hact;
    capProperties.Vact  = captureTiming->Vact;
    capProperties.Htot  = captureTiming->Htot;
    capProperties.Vtot  = captureTiming->Vtot;
    capProperties.pixelClock      = captureTiming->pixelClock;
    capProperties.polEn           = captureTiming->polEn;
    capProperties.polHs           = captureTiming->polHs;
    capProperties.polVs           = captureTiming->polVs
    capProperties.directCapEnable = CYGFX_CAP_DIRECT_CAPTURE_ON;
    CyGfx_CapOpen(CYGFX_CAP_UNIT_0, &capProperties, &capCtx);

    // open display
    mode.timing = &captureTiming;
    CyGfx_DispOpenDisplay( &mode, &display, &capCtx);

    // close display and capture
    CyGfx_DispCloseDisplay(display);
    CyGfx_CapClose(capCtx);
\endcode

 - Capture-to-Window
\code
    CYGFX_DISP_WINDOW_PROPERTIES_S windowProp = CYGFX_DISP_WINDOW_PROPERTIES_INITIALIZER;

    // open display and capture
    // ...

    // Assign a VRAM block as ring buffer
    ringBufferSize = RINGBUFFERSIZE;
    ringBufferVirt = utVideoAlloc(ringBufferSize, 64, &ringBufferPhys);
    memset(ringBufferVirt, 0, ringBufferSize);
    CyGfx_CapAssignCapToWinBuffer(capCtx, ringBufferPhys, ringBufferSize);

    // Create a full screen window layer
    windowProp.width = WIN_WIDTH;
    windowProp.height = WIN_HEIGHT;
    windowProp.features = CYGFX_DISP_FEATURE_CAPTURE;
    CyGfx_DispWinCreate(display, &windowProp, &win);

    // Bind capture stream to window and show the content
    CyGfx_WinSetCapture(win, capCtx);

    // Start capture and show window
    CyGfx_WinCommit(win);

    // Stop capture-to-window
    CyGfx_WinSetCapture(win, 0);
    CyGfx_WinDestroy(win);
    utVideoFree(ringBufferVirt);
    ringBufferVirt = 0;

    // close display and capture
    // ...
\endcode

 - Capture-to-Surface
\code
    CYGFX_DISP_WINDOW_PROPERTIES_S windowProp = CYGFX_DISP_WINDOW_PROPERTIES_INITIALIZER;

    // Open display and capture
    // ...

    // Create a full-screen window layer
    windowProp.width = WIN_WIDTH;
    windowProp.height = WIN_HEIGHT;
    CyGfx_DispWinCreate(display, &windowProp, &win);

    // Initialize capture buffers
    utSmGenSurfaceObjects(numBuffers, capSurf);
    for (i=0; i<numBuffers; i++)
    {
        CYGFX_U08 *pVirt;
        utSurfCreateBuffer(capSurf[i], SURF_WIDTH, SURF_HEIGHT, CYGFX_SM_FORMAT_R8G8B8A8);
        CyGfx_SmGetAttribute(capSurf[i], CYGFX_SM_ATTR_VIRT_ADDRESS, (CYGFX_U32*)(&pVirt));
    }
    CyGfx_CapAssignSurfaceArray(capCtx, capSurf, numBuffers);

    // Start capture
    CyGfx_CapCommit(capCtx);

    // Retrieve the last captured frame and show it on the screen
    CyGfx_CapGetSurface(capCtx, store);
    CyGfx_WinSetSurface(win, CYGFX_DISP_BUFF_TARGET_COLOR_BUFF, store);
    CyGfx_WinCommit(win);

    // Stop capture-to-surface
    CyGfx_CapAssignSurfaceArray(capCtx, 0, 0);
    CyGfx_CapCommit(capCtx);

    for (i=0; i<numBuffers; i++)
    {
        utSurfDeleteBuffer(capSurf[i]);
    }
    utSmDeleteSurfaceObjects(numBuffers, capSurf);

    // Destroy window layers
    CyGfx_WinDestroy(win);

    // Close display and capture
    // ...
\endcode
  The Graphics Driver also provides functions to perform the following:
  - Format conversion
  - Scaling
  - Cropping
  - Measurement of histogram values that can be used for color correction.

*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define CYGFX_CAP_MIN_WIDTH              ((CYGFX_U16)(160u))  /**< Minimum supported width for the capture unit */
#define CYGFX_CAP_MIN_HEIGHT             ((CYGFX_U16)(60u))   /**< Minimum supported height for the capture unit */
#define CYGFX_CAP_MAX_WIDTH              ((CYGFX_U16)(2880u)) /**< Maximum supported width for the capture unit */
#define CYGFX_CAP_MAX_HEIGHT             ((CYGFX_U16)(1080u)) /**< Maximum supported height for the capture unit */
#define CYGFX_CAP_MIN_HOR_BLANKING_RATIO ((CYGFX_U16)(5))     /**< Minimum horizontal blanking interval in relation to the active width (in percent) */
#define CYGFX_CAP_MAX_HOR_BLANKING_RATIO ((CYGFX_U16)(40))    /**< Maximum horizontal blanking interval in relation to the active width (in percent) */
#define CYGFX_CAP_MIN_VER_BLANKING_RATIO ((CYGFX_U16)(2))     /**< Minimum vertical blanking interval in relation to the active height (in percent) */
#define CYGFX_CAP_MAX_VER_BLANKING_RATIO ((CYGFX_U16)(20))    /**< Maximum vertical blanking interval in relation to the active height (in percent) */
#ifdef TVIIC2D6MDDR
#define CYGFX_CAP_MAX_H_SCALING          ((CYGFX_U32)(1920))  /**< Maximum input size for horizontal upscaling and maximum output size for horizontal downscaling */
#define CYGFX_CAP_MAX_V_SCALING          ((CYGFX_U32)(1080))   /**< Maximum input size for vertical upscaling and maximum output size for vertical downscaling */
#else
#define CYGFX_CAP_MAX_H_SCALING          ((CYGFX_U32)(1600))  /**< Maximum input size for horizontal upscaling and maximum output size for horizontal downscaling */
#define CYGFX_CAP_MAX_V_SCALING          ((CYGFX_U32)(800))   /**< Maximum input size for vertical upscaling and maximum output size for vertical downscaling */
#endif
#define CYGFX_CAP_MAX_SCALE_FACTOR       ((CYGFX_U32)(32))    /**< Maximum scale factor */
#define CYGFX_CAP_PIN_CNT                ((CYGFX_U08)(27))    /**< Pin number of capture input multiplexer */
#define CYGFX_CAP_MEASUREMENT_INITIALIZER  \
    { \
        CYGFX_CAP_CLOCK_SUPERVISION_OFF, \
        CYGFX_CAP_SIGNAL_MEASUREMENT_OFF, \
        CYGFX_CAP_FRAME_SUPERVISION_OFF,   \
        5u, \
        0u, \
        0u  \
    } /**< Capture measurement initialization structure */
#define CYGFX_CAP_PROPERTIES_INITIALIZER  \
    { \
        27.0f, \
        720u,  \
        576u,  \
        864u,  \
        625u,  \
        0u,    \
        0u,    \
        0u,    \
        CYGFX_CAP_VIDEO_FORMAT_PARALLEL_RGB, \
        CYGFX_CAP_INTERFACE_TTL,             \
        CYGFX_CAP_DIRECT_CAPTURE_OFF,        \
        CYGFX_CAP_MODE_PROGRESSIVE,          \
        CYGFX_CAP_MEASUREMENT_INITIALIZER,   \
        NULL                                 \
    } /**< Default initializer (576p) */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
typedef CYGFX_U08 CYGFX_CAP_PIN_MUX[CYGFX_CAP_PIN_CNT];    /**< Pin ID value of pin multiplexer for capture 27(::CYGFX_CAP_PIN_CNT) bits input. Valid pin ID values are 0 to 26.
    CYGFX_CAP_PIN_MUX[0] - CYGFX_CAP_PIN_MUX[9] : Pin ID for color bit 0 to 9, or ITU656 data bit 0 to 9.
    CYGFX_CAP_PIN_MUX[10] - CYGFX_CAP_PIN_MUX[23] : Pin ID for color bit 10 to 23.
    CYGFX_CAP_PIN_MUX[24] : Pin ID for HSYNC horizontal sync signal.
    CYGFX_CAP_PIN_MUX[25] : Pin ID for VSYNC vertical sync signal.
    CYGFX_CAP_PIN_MUX[26] : Pin ID for DE data enable signal. */

/** \name YUV Conversion Mode */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_YUVCONVERSIONMODE;                                    /**< Type for capture YUV conversion modes */
#define CYGFX_CAP_YUVCONVERSIONMODE_ITU601    ((CYGFX_CAP_YUVCONVERSIONMODE)(1u)) /**< Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV).
    Input range is 16..235 for Y and 16..240 for U/V. */
#define CYGFX_CAP_YUVCONVERSIONMODE_ITU601_FR ((CYGFX_CAP_YUVCONVERSIONMODE)(2u)) /**< Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255).
    Most typically used for computer graphics (e.g., for JPEG encoding). */
#define CYGFX_CAP_YUVCONVERSIONMODE_ITU709    ((CYGFX_CAP_YUVCONVERSIONMODE)(3u)) /**< Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV).
    Input range is 16..235 for Y and 16..240 for U/V. */
/** \} */

/** \name Capture attributes */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_ATTR;                              /**< Type for capture attributes */
#define CYGFX_CAP_ATTR_COLORBITS         ((CYGFX_CAP_ATTR)(0)) /**< Color component size in bits 0xRRGGBBAA (default = 0x08080808).
    The maximum size for R, G, and B is 10. Maximum size for A is 8.
    For parallel YUV 4:4:4 input, it maps to 0xYYUUVV00.
    \note
    Only applicable for parallel video input with separate HS, VS, DE signals. */
#define CYGFX_CAP_ATTR_COLORSHIFT        ((CYGFX_CAP_ATTR)(1)) /**< Color component shift 0xRRGGBBAA (default = 0x18100800).
    For parallel YUV 4:4:4 input, it maps to 0xYYUUVV00.
    \note
    Only applicable for parallel video input with separate HS, VS, DE signals. */
#define CYGFX_CAP_ATTR_YUVCONVERSIONMODE ((CYGFX_CAP_ATTR)(2)) /**< Select the YUV to RGB conversion mode. Must be one of the following:
    - ::CYGFX_CAP_YUVCONVERSIONMODE_ITU601 (default)
    - ::CYGFX_CAP_YUVCONVERSIONMODE_ITU601_FR
    - ::CYGFX_CAP_YUVCONVERSIONMODE_ITU709 */
/** \} */

/** \name Available capture units */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_UNIT;              /**< Type for capture unit */
#define CYGFX_CAP_UNIT_0 ((CYGFX_CAP_UNIT)(0)) /**< Capture unit 0. */
/** \} */

/** \name Format of capture input */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_VIDEO_FORMAT;                                    /**< Type for video input format */
#define CYGFX_CAP_VIDEO_FORMAT_PARALLEL_RGB    ((CYGFX_CAP_VIDEO_FORMAT)(0)) /**< Capture parallel input with RGB format */
#define CYGFX_CAP_VIDEO_FORMAT_PARALLEL_YUV444 ((CYGFX_CAP_VIDEO_FORMAT)(1)) /**< Capture parallel input with YUV444 format */
#define CYGFX_CAP_VIDEO_FORMAT_PARALLEL_YUV422 ((CYGFX_CAP_VIDEO_FORMAT)(2)) /**< Capture parallel input with YUV422 format */
#define CYGFX_CAP_VIDEO_FORMAT_ITU10_YUV422    ((CYGFX_CAP_VIDEO_FORMAT)(3)) /**< Capture ITU656 10-bit input with YUV422 format */
#define CYGFX_CAP_VIDEO_FORMAT_ITU8_YUV422     ((CYGFX_CAP_VIDEO_FORMAT)(4)) /**< Capture ITU656 8-bit input with YUV422 format */
/** \} */

/** \name Capture interface */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_INTERFACE;                               /**< Type for capture interface */
#define CYGFX_CAP_INTERFACE_TTL           ((CYGFX_CAP_INTERFACE)(0)) /**< Capture TTL interface  */
#define CYGFX_CAP_INTERFACE_CSI           ((CYGFX_CAP_INTERFACE)(1)) /**< Capture MIPI-CSI2 interface */
#define CYGFX_CAP_INTERFACE_RESERVED0     ((CYGFX_CAP_INTERFACE)(2)) /**< Reserved, do not use */
#define CYGFX_CAP_INTERFACE_RESERVED1     ((CYGFX_CAP_INTERFACE)(3)) /**< Reserved, do not use */
/** \} */

/** \name Capture Modes */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_MODE;                        /**< Type for capture modes */
#define CYGFX_CAP_MODE_PROGRESSIVE ((CYGFX_CAP_MODE)(0)) /**< Capture input is progressive. */
#define CYGFX_CAP_MODE_INTERLACED  ((CYGFX_CAP_MODE)(1)) /**< Capture input is interlaced. */
/** \} */

/** \name Capture-to-display flags */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_DIRECT_CAPTURE;                          /**< Type for direct capture setting */
#define CYGFX_CAP_DIRECT_CAPTURE_OFF                ((CYGFX_CAP_DIRECT_CAPTURE)(0)) /**< Disable direct capture-to-display mode. */
#define CYGFX_CAP_DIRECT_CAPTURE_ON                 ((CYGFX_CAP_DIRECT_CAPTURE)(1)) /**< Enable direct capture-to-display mode. Fast synchronization mode
                                                                                         is enabled to speed up the initial synchronization procedure to
                                                                                         a few frames. The display timing will not start immediately; this
                                                                                         can only be used when no display operation is required during the
                                                                                         synchronization procedure. */
#define CYGFX_CAP_DIRECT_CAPTURE_ON_FAST_SYNC_OFF   ((CYGFX_CAP_DIRECT_CAPTURE)(2)) /**< Enable direct capture-to-display mode. Fast synchronization mode
                                                                                         is disabled; synchronization may take a noticeable time. The display
                                                                                         timing starts immediately; this can be used when other display
                                                                                         operations are required during the synchronization procedure. */
/** \} */

/** \name Capture clock supervision */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_CLOCK_SUPERVISION;                             /**< Type for capture clock supervision setting */
#define CYGFX_CAP_CLOCK_SUPERVISION_OFF ((CYGFX_CAP_CLOCK_SUPERVISION)(0)) /**< Disable capture clock supervision. */
#define CYGFX_CAP_CLOCK_SUPERVISION_ON  ((CYGFX_CAP_CLOCK_SUPERVISION)(1)) /**< Enable capture clock supervision. */
/** \} */

/** \name Capture signal measurement */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_SIGNAL_MEASUREMENT;                              /**< Type for capture signal measurement setting */
#define CYGFX_CAP_SIGNAL_MEASUREMENT_OFF ((CYGFX_CAP_SIGNAL_MEASUREMENT)(0)) /**< Disable capture signal measurement. */
#define CYGFX_CAP_SIGNAL_MEASUREMENT_ON  ((CYGFX_CAP_SIGNAL_MEASUREMENT)(1)) /**< Enable capture signal measurement. */
/** \} */

/** \name Capture frame supervision */
/** \{ */
typedef CYGFX_U08 CYGFX_CAP_FRAME_SUPERVISION;                             /**< Type for capture signal measurement setting */
#define CYGFX_CAP_FRAME_SUPERVISION_OFF ((CYGFX_CAP_FRAME_SUPERVISION)(0)) /**< Disable capture frame supervision. */
#define CYGFX_CAP_FRAME_SUPERVISION_ON  ((CYGFX_CAP_FRAME_SUPERVISION)(1)) /**< Enable capture frame supervision. */
/** \} */

/**
    Capture Measurement Configuration
**/
typedef struct
{
    CYGFX_CAP_CLOCK_SUPERVISION  clockSupervision;        /**< Clock supervision setting.
                                                               Can be ::CYGFX_CAP_CLOCK_SUPERVISION_OFF or ::CYGFX_CAP_CLOCK_SUPERVISION_ON. */
    CYGFX_CAP_SIGNAL_MEASUREMENT signalMeasurement;       /**< Signal measurement setting.
                                                               Can be ::CYGFX_CAP_SIGNAL_MEASUREMENT_OFF or ::CYGFX_CAP_SIGNAL_MEASUREMENT_ON. */
    CYGFX_CAP_FRAME_SUPERVISION frameSupervision;         /**< Frame supervision setting.
                                                               Can be ::CYGFX_CAP_FRAME_SUPERVISION_OFF or ::CYGFX_CAP_FRAME_SUPERVISION_ON.
                                                               Frame supervision only works when signalMeasurement is enabled. */
    CYGFX_U16                    clockTimeout;           /**< Clock recovery timeout (in AXI clock cycles).
                                                               Minimum timeout: 6 * (frequency(AXI clock) / frequency(Capture PixelClock)) + 2.
                                                               Maximum timeout: 0x3FF
                                                               I.e. Considering the AXI Clock of 250 MHz and the Capture PixelClock of 24 MHz,
                                                               minimum timeout would be ~65 clocks. */
    CYGFX_U32                    frameSizeTolerance;      /**< Frame measurement time tolerance (in axi clock cycles). Valid range: 0 - 0x7FFFFFFF. */
    CYGFX_U16                    frameNotMeasuredTimeout; /**< Frame size inconsistent error count threshold. */
} CYGFX_CAP_MEASUREMENT_CONFIG_S;


/**
    Structure to hold the current properties of the capture unit
**/
typedef struct
{
    CYGFX_FLOAT                    pixelClock;      /**< Pixel clock in units of MHz */
    CYGFX_U16                      Hact;            /**< Active width of the video frame; must match the actual video dimension:
                                                          ::CYGFX_CAP_MIN_WIDTH .. ::CYGFX_CAP_MAX_WIDTH. */
    CYGFX_U16                      Vact;            /**< Active height of the video frame; must match the actual video dimension:
                                                          ::CYGFX_CAP_MIN_HEIGHT .. ::CYGFX_CAP_MAX_HEIGHT. */
    CYGFX_U16                      Htot;            /**< Total width of the video frame; must match the actual video dimension:
                                                          Hact + ::CYGFX_CAP_MIN_HOR_BLANKING_RATIO .. ::CYGFX_CAP_MAX_HOR_BLANKING_RATIO %. */
    CYGFX_U16                      Vtot;            /**< Total height of the video frame; must match the actual video dimension:
                                                          Vact + ::CYGFX_CAP_MIN_VER_BLANKING_RATIO .. ::CYGFX_CAP_MAX_VER_BLANKING_RATIO %. */
    CYGFX_GEN_POLARITY             polEn;           /**< Polarity of the enable signal; See the definition of ::CYGFX_GEN_POLARITY. */
    CYGFX_GEN_POLARITY             polHs;           /**< Polarity of horizontal sync signal; See the definition of ::CYGFX_GEN_POLARITY. */
    CYGFX_GEN_POLARITY             polVs;           /**< Polarity of vertical sync signal; See the definition of ::CYGFX_GEN_POLARITY. */
    CYGFX_CAP_VIDEO_FORMAT         format;          /**< Input format: one of ::CYGFX_CAP_VIDEO_FORMAT */
    CYGFX_CAP_INTERFACE            inputInterface;  /**< Input interface: one of ::CYGFX_CAP_INTERFACE */
    CYGFX_CAP_DIRECT_CAPTURE       directCapEnable; /**< Enable direct capture-to-display mode; no buffer; display is synced to video;
                                                          video timing and resolution must be the same as the display. */
    CYGFX_CAP_MODE                 video_mode;      /**< 0: Video signal is progressive; 1: Video signal is interlaced. */
    CYGFX_CAP_MEASUREMENT_CONFIG_S measurement;     /**< Capture measurement configuration */
    CYGFX_CAP_PIN_MUX*             pPinMux;         /**< Pointer to Pin ID values of pin multiplexer for capture input; see ::CYGFX_CAP_PIN_MUX.
                                                          NULL pointer set default value. Available only on TVIIC2D6MDDR. */
} CYGFX_CAP_PROPERTIES_S;


/**
    Capture Measurement Status
**/
typedef struct
{
    CYGFX_U08 streamSynchronized;      /**< Capture stream synchronization status: 0 - Out of Sync, 1 - In Sync */
    CYGFX_U08 clockLost;               /**< Capture clock status: 0 - Clock is present, 1 - Clock is lost */
    CYGFX_U08 measurementFinished;     /**< Capture signal measurement status: 0 - measurement not finished; 1- measurement done */
    CYGFX_U08 frameSizeInconsistent;   /**< Capture frame consistency status: 0 - frame size didn't change, 1 - frame size changed(err) */
    CYGFX_U16 frameNotMeasuredCounter; /**< Counter to prevent how many times frameSizeInconsistent occurred */
    CYGFX_U08 fifoFull;	               /**< Capture Write access to full coupling FIFO blocked when 1 */
    CYGFX_U08 vsLate;                  /**< Capture VSYNC is detected too late */
    CYGFX_U08 vsEarly;                 /**< Capture VSYNC is detected too early */
} CYGFX_CAP_MEASUREMENT_STATUS_S;


/**
    Capture Measurement Results
**/
typedef struct
{
    CYGFX_U16   ActWidth;       /**< Measured capture frame active width (in pixels) */
    CYGFX_U16   ActHeight;      /**< Measured capture frame active height (in pixels) */
    CYGFX_U16   TotWidth;       /**< Measured capture frame total width (in pixels) */
    CYGFX_U16   TotHeight;      /**< Measured capture frame total height(in pixels) */
    CYGFX_U32   TotWidth_time;  /**< Measured capture frame width  (in axi clock cycles) */
    CYGFX_U32   ActWidth_time;  /**< Measured capture frame height (in axi clock cycles) */
    CYGFX_U32   FrameTime;      /**< Measured number of bus cycles per frame */
    CYGFX_FLOAT PixelFrameRate; /**< Measured Pixel frame rate (in pixels per axi clock).
                                     The result must be multiplied by the AXI clock frequency
                                     to obtain the actual measured Pixel clock. */
} CYGFX_CAP_MEASUREMENT_RESULT_S;


/**
    Capture Measurement Structure; holds the status and result values
**/
typedef struct
{
    CYGFX_CAP_MEASUREMENT_STATUS_S measurementStatus; /**< Measurement status */
    CYGFX_CAP_MEASUREMENT_RESULT_S measurementResult; /**< Measurement results */
} CYGFX_CAP_MEASUREMENT_S;


typedef struct GCCGFX_CAP_CTX_TYPE* CYGFX_CAP_CTX; /**< Capture context type */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Open a capture unit and return a handle for it. The capture unit to be opened
    is specified by the \a unit argument.
    \note
    The application must ensure that the actual video input signal is available and
    matches the characteristics described in the \a properties argument.

    \param [in] unit  Identifier of the capture unit to open (must be
                      ::CYGFX_CAP_UNIT_0)
    \param [in] properties  Structure describing the capture properties (video
                            frame parameters, polarity, video format)
    \param [out] cap  Capture handle

    \retval  ::CYGFX_OK Successfully opened the capture unit.
    \retval  ::CYGFX_ERP_ERR_CAP_NOT_SUPPORTED Device does not support video
             capture.
    \retval  ::CYGFX_ERP_ERR_CAP_BUSY Capture unit is already in use.
    \retval  ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER Invalid parameter
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapOpen( CYGFX_CAP_UNIT                unit,
                                        const CYGFX_CAP_PROPERTIES_S* properties,
                                        CYGFX_CAP_CTX*                cap);

/**
    Closes an opened capture unit. All resources allocated for the capture unit are
    released.

    \param [in] cap  Capture handle returned by CyGfx_CapOpen().

    \retval  ::CYGFX_OK    Successfully performed operation.
    \retval  ::CYGFX_ERP_ERR_CAP_NOT_OPEN   Capture unit not open
    \retval  ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  Invalid handle
    \retval  ::CYGFX_ERP_ERR_CAP_DEV_BUSY   If previous commit or close call is not
             completely executed (e.g., shadow load request is pending). Call again later.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapClose( CYGFX_CAP_CTX cap);

/**
    Sets the \a eAttr attribute to the \a param for the capture unit specified by
    \a cap.
    \note
    This setting will not be active immediately. Use CyGfx_CapCommit() to submit
    for processing.

    \param [in] cap  Capture handle returned by CyGfx_CapOpen()
    \param [in] eAttr  Parameter name. See ::CYGFX_CAP_ATTR for valid values.
    \param [in] param  Value to set for the \a eAttr parameter

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  One of the parameters is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapSetAttribute( CYGFX_CAP_CTX  cap,
                                                CYGFX_CAP_ATTR eAttr,
                                                CYGFX_U32      param);

/**
    Gets the value for the \a eAttr attribute. \a cap specifies for which capture
    unit the attribute should be retrieved.

    \param [in] cap  Capture handle returned by CyGfx_CapOpen()
    \param [in] eAttr  Attribute name. See ::CYGFX_CAP_ATTR for valid values.
    \param [out] pParam  The address where the read value of the attribute is stored

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN   Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  One of the parameters is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapGetAttribute( CYGFX_CAP_CTX  cap,
                                                CYGFX_CAP_ATTR eAttr,
                                                CYGFX_U32*     pParam);

/**
    Sets the cropping window size and position.
    \note This setting will not be active immediately. Use CyGfx_CapCommit() to
    submit for processing.

    \param [in] cap  Capture handle returned by CyGfx_CapOpen()
    \param [in] xStart  The horizontal start position of the cropping window [0,
                        CYGFX_CAP_PROPERTIES_S.Hact-1]
    \param [in] yStart  The vertical start position of the cropping window [0,
                        CYGFX_CAP_PROPERTIES_S.Vact-1]
    \param [in] width  Width of the cropping window [1, CYGFX_CAP_PROPERTIES_S.Hact-xStart]
    \param [in] height  Height of the cropping window [1,CYGFX_CAP_PROPERTIES_S.Vact-yStart]

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER One of the parameters is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapSetCropWindow( CYGFX_CAP_CTX cap,
                                                 CYGFX_U16     xStart,
                                                 CYGFX_U16     yStart,
                                                 CYGFX_U16     width,
                                                 CYGFX_U16     height);

/**
    Assigns an array of surfaces to store the capture frames.
    Calling this function with \a num > 0 switches the component to capture-to-
    surface mode.
    Calling this function with \a num = 0 turns capture OFF.

    \note
    Dynamic configuration. This setting will not be active immediately. Use
    CyGfx_CapCommit() to submit for processing.

    \note
    All assigned surfaces must have identical color formats and dimension
    parameters.
    The surface address parameter must point to a valid VRAM address to store the
    captured frames.

    \note
    The surfaces must adhere to the following requirements:
    - The size of a pixel in bits must be a power of two, 18, or 24.
    - For a pixel width of 32 bits, the buffer address must be a multiple of 4; for
    a pixel width of 16 bits, the buffer address must be a multiple of 2.
    - For a pixel width of 32 bits, the stride must be a multiple of 4; for a pixel
    width of 16 bits, the stride must be a multiple of 2.
    - The surface dimensions must not exceed the original video input dimension.

    \note
    If one buffer is provided, a single frame is captured after CyGfx_CapCommit()
    is called.
    The application must use the Synchronization API function to wait for the frame
    to be completed before it can call CyGfx_CapGetSurface() to request the
    captured still image. Before triggering the next frame capture, the application
    must ensure that the buffer is no longer needed (e.g., blit finished).
    If two buffers are provided, a single frame is captured after CyGfx_CapCommit()
    is called.
    The two buffers are used alternately.
    The application must use the Synchronization API function to wait for the frame
    to be completed before it can call CyGfx_CapGetSurface() to request the
    captured still image.
    As opposed to the one-buffer mode, the application can trigger the next frame
    capture while still using the last frame.

    If three or four buffers are provided, these are used as capture buffers in a
    round-robin style.
    The application can request the latest still image at any time using
    CyGfx_CapGetSurface() without the need to synchronize.

    \note
    Before calling CyGfx_CapAssignSurfaceArray() again to assign new surface(s)
    with different size or format, capture-to-surface must be first stopped by
    calling CyGfx_CapAssignSurfaceArray(cap, 0, 0) and CyGfx_CapCommit().

    \param [in] cap  Capture handle returned by CyGfx_CapOpen().
    \param [in] pSurf[]  Array of num surfaces receiving the capture frames
    \param [in] num  Number of surfaces in the pSurf array (0 or [1..4])

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN   Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  One of the parameters is invalid.
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_SURFACE If a \a pSurf is ::NULL.
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_COUNT If \a num is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapAssignSurfaceArray( CYGFX_CAP_CTX cap,
                                                      CYGFX_SURFACE pSurf[],
                                                      CYGFX_U32     num);

/**
    The Capture-to-window mode feature is not working as expected; you should not use this feature.
    Assigns the VRAM block for capture-to-window mode.
    The driver calculates the compression of the ring buffer depending on the
    capture input format, size, and window output size.
    The maximum compression is 50%; for packed YUV422, no compression is possible.
    If the size is not sufficient, CyGfx_WinCommit() will fail.

    The minimum size of the ring buffer without compression is calculated as
    described in the Application Note "Ring Buffer Setup".
    See the CalculateRingbufferSize() utility function.

    \note
    Dynamic configuration. This setting will not be active immediately.
    Use CyGfx_WinCommit() to submit for processing (see also CyGfx_CapCommit()).



    \note
    The buffer address must fulfill the HW requirements for ring buffer start
    address.
    It is recommended to align it to 64 bytes, because this is sufficient for all
    possible settings of pixel size and burst length.

    \param [in] cap  Capture handle returned by CyGfx_CapOpen().
    \param [in] address  Physical address of the VRAM block that is used as ring
                         buffer
    \param [in] size  Size of the given VRAM block

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN   Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  One of the parameters is invalid.
    \retval ::CYGFX_ERP_ERR_FEATURE_NOT_SUPPORTED  DDR devices not supported.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapAssignCapToWinBuffer( CYGFX_CAP_CTX cap,
                                                        CYGFX_ADDR    address,
                                                        CYGFX_U32     size);

/**
    Locks the last captured buffer and writes the address and the buffer describing
    the parameters in the surface description.
    This API allows an application to get a single capture frame.
    For this, the application must provide several buffers using
    CyGfx_CapAssignSurfaceArray(), which are used as the ring buffer to
    continuously capture new frames.
    The API gives access to one of these buffers.

    \note
    This function can be called only if the capture module is active after the
    CyGfx_CapCommit() call.
    \note
    This function is allowed only with capture-to-surface mode.

    \param [in] cap  Handle returned by CyGfx_CapOpen()
    \param [in] surf  Surface to receive the current capture frame description

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN   Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  One of the parameters is invalid.
    \retval ::CYGFX_ERP_ERR_CAP_DEV_BUSY capture was interrupted; try again with
    next frame.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapGetSurface( CYGFX_CAP_CTX cap,
                                              CYGFX_SURFACE surf);

/**
    Initializes the sync object \a sync to get signaled after \a vsyncCnt VSyncs
    have happened.
    VSync is taken from the capture unit specified by \a cap.

    \param [in] cap  Capture handle returned by CyGfx_CapOpen().
    \param [in] sync  Sync object to initialize with the sync condition
    \param [in] vsyncCnt  Number of VSyncs to elapse until the sync object gets
                          signaled. Parameter must be < 0x7FFFFFFF.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  One of the parameters is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapGetVSync( CYGFX_CAP_CTX cap,
                                            CYGFX_SYNC    sync,
                                            CYGFX_U32     vsyncCnt);

/**
    Requests a sync object from the capture component.
    The sync object will be signaled after the preceding CyGfx_CapCommit() has been
    processed.
    In case of capture-to-surface with one or two buffers, this means that the
    frame is captured.
    If capture is switched OFF, it means that the last frame write has finished.

    \note
    A successful call to CyGfx_CapClose() cannot be detected by CyGfx_CapGetSync().

    \param [in] cap  Capture handle returned by CyGfx_CapOpen().
    \param [out] sync  Sync object. Holds the data after the successful execution
                       of the function.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER If one of the parameters is
            invalid
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN  If Capture unit is not open
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapGetSync( CYGFX_CAP_CTX cap,
                                           CYGFX_SYNC    sync);

/**
    Capture dynamic configurations will not be active immediately.
    CyGfx_CapCommit() submits the settings for processing.

    \note
    In capture-to-display mode (direct capture), call CyGfx_DispOpenDisplay()
    instead of CyGfx_CapCommit().
    \note
    In capture-to-window mode, call CyGfx_WinCommit() instead of
    CyGfx_CapCommit().
    \note
    The video input signal must be available and match the characteristics
    described in CyGfx_CapOpen().

    \param [in] cap  Capture handle returned by CyGfx_CapOpen().

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_DEV_BUSY  Writing to the capture device is denied
            because the previous commit call is not completely executed (e.g., shadow load
            request is pending). Call again later.
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN  Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  One of the parameters is invalid.
    \retval ::CYGFX_ERP_ERR_CAP_NO_BUFFER  No capture buffers defined
    \retval ::CYGFX_ERP_ERR_CAP_NOT_SUPPORTED  Device does not support video
            capture.
    \retval ::CYGFX_ERP_ERR_CAP_ILLEGAL_CAPTURE_MODE Current capture mode is not
            capture-to-surface.
    \retval ::CYGFX_ERP_ERR_CAP_BUFFER_TOO_SMALL  Ring buffer is too small in the
            capture-to-window mode.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapCommit( CYGFX_CAP_CTX cap);

/**
    Gets the results of clock supervision and signal measurement.

    The measurement may not have finished yet, or not have been able to
    retrieve consistent results. These conditions are indicated by the
    measurementFinished element of the returned CYGFX_CAP_MEASUREMENT_S
    structure set to #CYGFX_FALSE, and by its frameSizeInconsistent element set
    to #CYGFX_TRUE, respectively. If either of these applies, the other elements
    of the returned CYGFX_CAP_MEASUREMENT_S structure are undefined.

    The measurement result (measurementResult) is only updated once after the 
    capture unit is opened. The status measurementFinished is locked when the measurement
    is done. The measurement result is valid and locked when the 
    measurement is finished and the results are not zero. It can only be restarted 
    when the capture unit is closed and reopened.
    \note
    If the video signal is unstable, the application can not get a valid measurement result. 
    It is recommended to set a timeout for waiting for the measurement result.
    
    The status streamSynchronized, clockLost, frameSizeInconsistent, fifoFull, 
    vsLate, and vsEarly are updated when corresponding interrupts are triggered.

    The status frameNotMeasuredCounter counts how many times the frameSizeInconsistent
    error is triggered.

    During signal measurement, the capture-to-surface mode and capture-to-display mode can
    not work as usual. In capture-to-display mode, if measurement is enabled by capture open,
    call #CyGfx_CapUpdateFrameDimension after the measurement is finished, to activate normal
    capture-to-display mode. In capture-to-surface mode, if measurement is enabled by capture open,
    call #CyGfx_CapUpdateFrameDimension and #CyGfx_CapCommit, after the measurement is finished,
    to activate normal capture-to-surface mode.
    For stable measurement result, it is recommended to enable both signal measurement(#CYGFX_CAP_SIGNAL_MEASUREMENT) and clock supervision(#CYGFX_CAP_CLOCK_SUPERVISION).
    \param [in] cap  Capture handle returned by CyGfx_CapOpen()
    \param [out] result  Pointer to the structure reserved for measurement result

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN  Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER  One of the parameters is invalid.
    \retval ::CYGFX_ERP_ERR_CAP_MEASUREMENT_TIMEOUT  Measurement timeout occurred.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapGetMeasurementResult( CYGFX_CAP_CTX            cap,
                                                        CYGFX_CAP_MEASUREMENT_S* result);

/**
    Updates Capture frame dimension with the measured values

    \param [in] cap  Capture handle returned by CyGfx_CapOpen()
    \param [in] measurement  Pointer to the capture measurement results
                             provided by CyGfx_CapGetMeasurementResult

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CAP_NOT_OPEN Capture unit not open
    \retval ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER One of the parameters is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_CapUpdateFrameDimension( CYGFX_CAP_CTX                  cap,
                                                        const CYGFX_CAP_MEASUREMENT_S* measurement);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_CAPTURE_H */
