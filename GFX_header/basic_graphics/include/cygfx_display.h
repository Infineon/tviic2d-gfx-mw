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
 * \file    cygfx_display.h
 */


#ifndef CYGFX_DISPLAY_H
#define CYGFX_DISPLAY_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In Doxygen comments, the character sequences such as double slash are used.
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
/**
 \addtogroup cygfx_display
 \code #include "cygfx_display.h" \endcode
 \brief The Display API exposes all the hardware features of the display unit.
        See also \ref overview_display

    The software interface provides two objects required to use and control the display unit:

    The ::CYGFX_DISP is a software handle for a hardware \b display \b controller and
    is required to
    - set up video modes
    - configure dithering or gamma correction

    The ::CYGFX_WINDOW is the software handle for hardware \b layers and is required
    - to use hardware layers to show rendered or video capture content
    - to configure blending and transparency of layers
    - for synchronization between layers and other hardware components

    \anchor display_window_sample_code
    The following example demonstrates the steps to show an image on Display 0:

\code
    // Use the default initializer for the properties and change the important fields later.
    CYGFX_DISP_PROPERTIES_S         dispProp   = CYGFX_DISP_PROPERTIES_INITIALIZER;
    CYGFX_DISP_WINDOW_PROPERTIES_S  windowProp = CYGFX_DISP_WINDOW_PROPERTIES_INITIALIZER;
    CYGFX_DISP                      display;
    CYGFX_WINDOW               win;
    CYGFX_SURFACE                   target;

    // Set your requested display properties
    dispProp.outputController   = CYGFX_DISP_CONTROLLER_0;
    utDispGetTiming(640, 480, &dispProp.Timing);
    // Open the display
    CyGfx_DispOpenDisplay( &dispProp, &display, 0);
    // Set Window properties
    windowProp.topLeftX         = 0;
    windowProp.topLeftY         = 0;
    windowProp.width            = 640;
    windowProp.height           = 480;
    //Create the window
    CyGfx_DispWinCreate(display, &windowProp, &win);
    // Draw something in a surface
    MyDrawFunction(target);
    // Push the surface to the window
    CyGfx_WinSetSurface(win, CYGFX_DISP_BUFF_TARGET_COLOR_BUFF, target);
    CyGfx_WinCommit(win);

    //Close Window and Display
    CyGfx_WinDestroy(win);
    CyGfx_DispCloseDisplay(display);
\endcode

\section cygfx_display_features Windows features

As described in the \ref overview_display section, enhanced features (::CYGFX_DISP_WINDOW_PROPERTIES_S)
can be requested while opening (::CyGfx_DispWinCreate) a window.
The table below lists the available feature types and their restrictions:

<table border="1">
  <tr>
    <th>Window Feature</th>
    <th>Comment</th>
    <th>Restrictions</th>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_INDEX_COLOR</td>
    <td>The window can show an indexed image.</td>
    <td>- Cannot be combined with ::CYGFX_DISP_FEATURE_WARP, ::CYGFX_DISP_FEATURE_YUV1BUFF</td>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_DECODE</td>
    <td>The window can display an RLE or RLAD buffer.</td>
    <td>- The surface must not be mirrored or rotated if compression is used.<br>- Cannot be combined with ::CYGFX_DISP_FEATURE_WARP and ::CYGFX_DISP_FEATURE_MULTI_LAYER.<br>- Only two windows with this feature are available.</td>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_EXTERN_ALPHA</td>
    <td>This window can read a separate alpha buffer that is used to control the transparency for layer blending.</td>
    <td>- Only two windows with this feature are available.<br>- Cannot be combined with ::CYGFX_DISP_FEATURE_WARP and ::CYGFX_DISP_FEATURE_MULTI_LAYER.</td>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_YUV1BUFF</td>
    <td>YUV window with one buffer (YUV444 and YUV422 packed).</td>
    <td>- YUV422 cannot be used with ::CYGFX_DISP_FEATURE_WARP.</td>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_WARP</td>
    <td>The window can warp the source buffer (e.g., windshield correction) defined by a second coordinate buffer.</td>
    <td>- Up to 8 ::CYGFX_DISP_FEATURE_MULTI_LAYER windows use the same coordinate buffer.<br>- Cannot be combined with ::CYGFX_DISP_FEATURE_INDEX_COLOR, ::CYGFX_DISP_FEATURE_DECODE, ::CYGFX_DISP_FEATURE_EXTERN_ALPHA, ::CYGFX_DISP_FEATURE_UPSCALE.</td>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_CAPTURE</td>
    <td>The window can be used for \ref capsurf "Capture-to-Window" mode. </td>
    <td>- Cannot be combined with ::CYGFX_DISP_FEATURE_WARP, ::CYGFX_DISP_FEATURE_INDEX_COLOR, ::CYGFX_DISP_FEATURE_MULTI_LAYER</td>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_UPSCALE</td>
    <td>The window can be upscaled.</td>
    <td>- Only one window with this feature is available.<br>- Cannot be combined with ::CYGFX_DISP_FEATURE_MULTI_LAYER, ::CYGFX_DISP_FEATURE_CAPTURE.</td>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_COLOR_MATRIX</td>
    <td>The window supports color modification such as color matrix and gamma correction.</td>
    <td>- Only one window with this feature is available.<br>- Cannot be combined with ::CYGFX_DISP_FEATURE_MULTI_LAYER.</td>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_MULTI_LAYER</td>
    <td>Up to eight subwindows with different sizes, color formats, and buffer addresses, but with the same layer ID can be opened and used simultaneously for one display.
        The combined windows represent a common layer that can be blended with lower-layer windows. If subwindows of a layer overlap, the resulting pixel is
        defined by the subwindow with the highest sublayer identifier. Color values of overlapped pixels of sublayers with a lower identifier are not read from
        memory and obscured completely. If CYGFX_DISP_SUB_LAYER_DEFAULT is specified for the sub_layerId element of the CYGFX_DISP_WINDOW_PROPERTIES_S structure handed over
        to CyGfx_DispWinCreate, the last opened subwindow obtains the highest sublayer identifier and, therefore, obscures previously opened subwindows.</td>
    <td>- Overlapping subwindows of one layer cannot be blended with each other. Only the top-most window will be blended against the background.<br>
        - Cannot be combined with ::CYGFX_DISP_FEATURE_DECODE, ::CYGFX_DISP_FEATURE_EXTERN_ALPHA, ::CYGFX_DISP_FEATURE_UPSCALE, ::CYGFX_DISP_FEATURE_COLOR_MATRIX.</td>
  </tr>
  <tr>
    <td>::CYGFX_DISP_FEATURE_FETCH_DECODE0, ::CYGFX_DISP_FEATURE_FETCH_WARP1, ::CYGFX_DISP_FEATURE_FETCH_DECODE4, ::CYGFX_DISP_FEATURE_FETCH_LAYER0 and ::CYGFX_DISP_FEATURE_FETCH_LAYER1</td>
    <td>Can be added to other features to select a dedicated hardware unit. <br>Example: The first window doesn't need features but the driver uses default settings with FetchDecode0. The second and third window need the decode feature but one decode fetch is already in use. It is possible to avoid this by selecting another, for example, ::CYGFX_DISP_FEATURE_FETCH_WARP1 for the first window.</td>
    <td>These features may be available only on this device. Do not use these features if you plan to use the application on other devices also.</td>
  </tr>
</table>

\section cygfx_display_commit Commit changes
All property changes for a display (e.g., CyGfx_DispSetAttribute() or CyGfx_CmSetClutData()) or a window
(e.g., CyGfx_WinSetSurface() or CyGfx_WinSetBlendMode()) must be applied by using a commit
function. Display changes always require a CyGfx_DispCommit().

There are two different possibilities to commit window changes. It also influences the
CyGfx_DispWinCreate() and CyGfx_WinDestroy() functions.

\note Different synchronization functions are required for the different commit functions independent from ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT:
    - Use CyGfx_WinGetSync() and CyGfx_WinWaitSync() to control CyGfx_WinCommit()
    - Use CyGfx_DispGetSync() and CyGfx_DispWaitSync() to control CyGfx_DispCommit()

\subsection cygfx_display_commit_true Default behavior
With default settings (display attribute ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT = CYGFX_FALSE), the commit function for a window is CyGfx_WinCommit().
CyGfx_DispWinCreate() and CyGfx_WinDestroy() are immediately executed on hardware.

A sequence of CyGfx_WinDestroy(), CyGfx_DispWinCreate(), and CyGfx_WinCommit() typically requires the time of three frames.
In addition, creating or closing multiple windows may require multiple frames.

\subsection cygfx_display_commit_fase Extended behavior
By changing the window attribute ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT to CYGFX_TRUE, the following functions operate differently:
    - CyGfx_DispWinCreate() and CyGfx_WinDestroy() will no longer change anything on the device. Only the
      new state will be stored. CyGfx_DispCommit() must be called to apply all changes.
    - A CyGfx_DispCommit() call will also apply all changes for all windows connected to this display.

This allows to close, create, and change the properties for multiple windows with one commit. However, if multiple successive CyGfx_DispCommit() calls are executed, the second CyGfx_DispCommit() may still block for one frame.

It is also still possible to commit changes for a single window with CyGfx_WinCommit(). However,
it will fail if another window of this display controller is in a non-committed open or close state.


The following example shows how to update window 1 and 2 always together with high priority. Window 3
has a lower priority and updates only every 10 frames.
\code
void Init()
{
    CyGfx_DispOpenDisplay( &dispProp, &display, 0);
    // set new display property
    CyGfx_DispSetAttribute(display, CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT, CYGFX_TRUE);
    // create the windows
    CyGfx_DispWinCreate(display, &windowProp1_a, &win1);
    CyGfx_DispWinCreate(display, &windowProp2_a, &win2);
    CyGfx_DispWinCreate(display, &windowProp3_a, &win3);
    //set swap interval to 10 for win3
    CyGfx_WinSetAttribute(win3, CYGFX_WIN_ATTR_SWAP_INTERVAL, 10);
    //apply all changes together
    CyGfx_DispCommit(display);
}

void UpdateWins()
{
    // First, handle the high-priority windows

    // start only rendering if win1 and win2 are updated
    if (CyGfx_SyncWaitSync(SyncDisp, 0) == CYGFX_ERP_ERR_SYNC_TIMEOUT)
        return;
    RenderWin1(); // Render the surface and set it to win1 using CyGfx_WinSetSurface().
    RenderWin2(); // Render the surface and set it to win2 using CyGfx_WinSetSurface().
    CyGfx_BeGetSync(&CtxBlt,SyncBlt); // Get a sync for the last blitting operation.
    CyGfx_DispWaitSync(display, SyncBlt); //Set the sync for the next CyGfx_DispCommit.
    CyGfx_DispCommit(display); // Apply all changes (includes win1 and win2).
    CyGfx_DispGetSync(display, SyncDisp); // Get a sync item for display update.

    //Next, handle the low-priority windows

    // Start rendering only if win3 is updated.
    if (CyGfx_SyncWaitSync(SyncWin3, 0) = CYGFX_ERP_ERR_SYNC_TIMEOUT)
        return;
    RenderWin3(); // Render the surface and set it to win3 by using CyGfx_WinSetSurface().
    CyGfx_BeGetSync(&CtxBlt,SyncBlt); // Get a sync for the last blitting operation.
    CyGfx_WinWaitSync(win3, SyncBlt); //Set the sync for the next CyGfx_WinCommit.
    CyGfx_WinCommit(win3); // Apply the changes for win3.
    CyGfx_WinGetSync(win3, SyncWin3); // Get a sync item for the win3 update.
}
\endcode

The following code demonstrates how to proceed if a new arrangement of the windows is
required (e.g., a new layer order).
\code
void SwapLayers()
{
    // Ensure that all updates are finished to avoid any API blocking.
    if (CyGfx_SyncWaitSync(SyncDisp, 0) == CYGFX_ERP_ERR_SYNC_TIMEOUT)
        return;
    if (CyGfx_SyncWaitSync(SyncWin3, 0) == CYGFX_ERP_ERR_SYNC_TIMEOUT)
        return;
    // Close all windows
    CyGfx_WinDestroy(win1);
    CyGfx_WinDestroy(win2);
    CyGfx_WinDestroy(win3);
    // create all new with new properties
    CyGfx_DispWinCreate(display, &windowProp1_b, &win1);
    CyGfx_DispWinCreate(display, &windowProp2_b, &win2);
    CyGfx_DispWinCreate(display, &windowProp3_b, &win3);
    // Set the swap interval to 10 for win3.
    CyGfx_WinSetAttribute(win3, CYGFX_WIN_ATTR_SWAP_INTERVAL, 10);
    // Render the new content and set it to the windows using CyGfx_WinSetSurface().
    RenderWin1();
    RenderWin2();
    RenderWin3();
    CyGfx_BeGetSync(&CtxBlt,SyncBlt); // Get a sync for the last Blt.
    CyGfx_DispWaitSync(display, SyncBlt); // Set the sync for the next CyGfx_DispCommit.
    CyGfx_DispCommit(display); // Apply all changes.
    CyGfx_DispGetSync(display, SyncDisp); // Get a sync item for display update.
}
\endcode

*
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define CYGFX_DISP_MIN_DIMENSION    ((CYGFX_U16)(60u))     /**< Minimum resolution supported by the display */
#define CYGFX_DISP_MAX_WIDTH        ((CYGFX_U16)(2880u))   /**< Maximum width supported by the display */
#define CYGFX_DISP_MAX_HEIGHT       ((CYGFX_U16)(1080u))   /**< Maximum height supported by the display */
#ifdef TVIIC2D6MDDR
#define CYGFX_DISP_MAX_WIDTH_OTF    ((CYGFX_U16)(1920u))   /**< Maximum OTF window width supported by the display */
#else
#define CYGFX_DISP_MAX_WIDTH_OTF    ((CYGFX_U16)(1600u))   /**< Maximum OTF window width supported by the display */
#endif

#ifdef TVIIC2D6MDDR
#define CYGFX_DISP_MAX_HEIGHT_OTF   ((CYGFX_U16)(1080u))    /**< Maximum OTF window height supported by the display */
#else
#define CYGFX_DISP_MAX_HEIGHT_OTF   ((CYGFX_U16)(800u))    /**< Maximum OTF window height supported by the display */
#endif

#ifdef TVIIC2D6MDDR
#define CYGFX_DISP_MAX_H_SCALING    ((CYGFX_U32)(1920))    /**< Maximum input size for horizontal upscaling */
#define CYGFX_DISP_MAX_V_SCALING    ((CYGFX_U32)(1080))     /**< Maximum input size for vertical upscaling */
#else
#define CYGFX_DISP_MAX_H_SCALING    ((CYGFX_U32)(1600))    /**< Maximum input size for horizontal upscaling */
#define CYGFX_DISP_MAX_V_SCALING    ((CYGFX_U32)(800))     /**< Maximum input size for vertical upscaling */
#endif

#define CYGFX_DISP_MAX_SCALE_FACTOR ((CYGFX_U32)(32))      /**< Maximum scale factor */
#if (defined(CYGFX_SILICON) || defined(CYGFX_FPGA))
#define CYGFX_DISP_MIN_PIXEL_CLOCK  ((CYGFX_FLOAT)(7.0))   /**< Minimum supported pixel clock for the display controller in single-screen mode */
#else
#define CYGFX_DISP_MIN_PIXEL_CLOCK  ((CYGFX_FLOAT)(1.0))   /**< Minimum supported pixel clock for the display controller */
#endif
#define CYGFX_DISP_MAX_PIXEL_CLOCK  ((CYGFX_FLOAT)(220.0)) /**< Maximum supported pixel clock for the display controller in dual-channel mode */
#define CYGFX_DISP_PROPERTIES_INITIALIZER  \
    { \
        CYGFX_DISP_CONTROLLER_0, \
        CYGFX_DISP_MODE_SINGLE_SCREEN, \
        CYGFX_DISP_SYNC_MODE_NONE, \
        CYGFX_DISP_TIMING_INITIALIZER, \
        NULL, \
        0 \
    } /**< Default initializer for ::CYGFX_DISP_PROPERTIES_S */
#define CYGFX_DISP_WINDOW_PROPERTIES_INITIALIZER  \
    { \
        CYGFX_DISP_OUTPUT_SCREEN_PRIMARY, \
        0, \
        0, \
        0, \
        0, \
        CYGFX_DISP_LAYER_0, \
        0, \
        CYGFX_DISP_SUB_LAYER_DEFAULT \
    } /**< Default initializer for ::CYGFX_DISP_WINDOW_PROPERTIES_S */
#define CYGFX_DISP_TIMING_INITIALIZER  \
    { \
        0.0f,                      /* pixelClock */ \
        0,                         /* Hact */ \
        0,                         /* Vact */ \
        0,                         /* Htot */ \
        0,                         /* Vtot */ \
        0,                         /* Hsbp */ \
        0,                         /* Vsbp */ \
        0,                         /* Hsync */ \
        0,                         /* Vsync */ \
        0,                         /* HtotMin */ \
        0,                         /* VtotMin */ \
        0,                         /* HtotMax */ \
        0,                         /* VtotMax */ \
        CYGFX_DISP_DCK_INVERT_OFF, /* DCKInvertEnable */ \
        CYGFX_GEN_POLARITY_HIGH,   /* polEn */ \
        CYGFX_GEN_POLARITY_LOW,    /* polHs */ \
        CYGFX_GEN_POLARITY_LOW,    /* polVs */ \
        CYGFX_DISP_RGB_LOW         /* pixInv */ \
    } /**< Default initializer for ::CYGFX_DISP_TIMING_S */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/** \name Layer feature request */
/** \{ */
typedef CYGFX_U32 CYGFX_DISP_FEATURE;                                                                                                              /**< Type for display features */
#define CYGFX_DISP_FEATURE_INDEX_COLOR      ((CYGFX_DISP_FEATURE)(1uL <<  0u))                                                                     /**< Indexed color support */
#define CYGFX_DISP_FEATURE_DECODE           ((CYGFX_DISP_FEATURE)(1uL <<  1u))                                                                     /**< Show encoded images */
#define CYGFX_DISP_FEATURE_EXTERN_ALPHA     ((CYGFX_DISP_FEATURE)(1uL <<  2u))                                                                     /**< Window with external alpha buffer */
#define CYGFX_DISP_FEATURE_YUV1BUFF         ((CYGFX_DISP_FEATURE)(1uL <<  3u))                                                                     /**< YUV window with one buffer (packed) */
#define CYGFX_DISP_FEATURE_YUV2BUFF         ((CYGFX_DISP_FEATURE)(1uL << 4u))                                                                      /**< YUV window with two buffer (semi-planar)  */
#define CYGFX_DISP_FEATURE_LINEAR_FILTER    ((CYGFX_DISP_FEATURE)(1uL << 5u))                                                                      /**< Linear up-sampling filter */
#define CYGFX_DISP_FEATURE_YUV2BUFF_FILTER  (CYGFX_DISP_FEATURE_YUV2BUFF | CYGFX_DISP_FEATURE_LINEAR_FILTER | CYGFX_DISP_FEATURE_IMAGE_PROCESSING) /**< YUV420 two buffer (semi-planar) with linear up-sampling filter */
#define CYGFX_DISP_FEATURE_WARP             ((CYGFX_DISP_FEATURE)(1uL <<  6u))                                                                     /**< Warping window */
#define CYGFX_DISP_FEATURE_UPSCALE          ((CYGFX_DISP_FEATURE)(1uL <<  7u))                                                                     /**< This feature must be requested when window buffer scaling or window buffer subpixel movement is required. It must not be requested for a capture window, even if it requires upscaling of the video stream. */
#define CYGFX_DISP_FEATURE_COLOR_MATRIX     ((CYGFX_DISP_FEATURE)(1uL <<  7u))                                                                     /**< Color matrix transformation for surfaces with RGB color space */
#define CYGFX_DISP_FEATURE_IMAGE_PROCESSING ((CYGFX_DISP_FEATURE)(1uL <<  7u))                                                                     /**< Includes upscaling, color matrix, and gamma correction */
#define CYGFX_DISP_FEATURE_MULTI_LAYER      ((CYGFX_DISP_FEATURE)(1uL <<  8u))                                                                     /**< The window is part of a multi-layer. That means it shares some properties like blend mode and surface color format. */
#define CYGFX_DISP_FEATURE_CAPTURE          ((CYGFX_DISP_FEATURE)(1uL <<  9u))                                                                     /**< Video capture window */
#define CYGFX_DISP_FEATURE_OTF_WIN_PRIO_0   ((CYGFX_DISP_FEATURE)(1uL <<  10u))                                                                    /**< Window supports on-the-fly mode used by the  ::CYGFX_BE_TASK_WIN_PRIO_0 task */
#define CYGFX_DISP_FEATURE_OTF_WIN_PRIO_1   ((CYGFX_DISP_FEATURE)(1uL <<  11u))                                                                    /**< Window supports on-the-fly mode used by the ::CYGFX_BE_TASK_WIN_PRIO_1 task */
#define CYGFX_DISP_FEATURE_OTF_WIN_PRIO_2   ((CYGFX_DISP_FEATURE)(1uL << 12u))                                                                     /**< Window supports on-the-fly mode used by the ::CYGFX_BE_TASK_WIN_PRIO_2 task */
#define CYGFX_DISP_FEATURE_OTF_WIN_PRIO_3   ((CYGFX_DISP_FEATURE)(1uL << 13u))                                                                     /**< Window supports on-the-fly mode used by the ::CYGFX_BE_TASK_WIN_PRIO_3 task */
#define CYGFX_DISP_FEATURE_FETCH_DECODE0    ((CYGFX_DISP_FEATURE)(1uL << 14u))                                                                     /**< Use the hardware block FetchDecode0. */
#define CYGFX_DISP_FEATURE_FETCH_WARP1      ((CYGFX_DISP_FEATURE)(1uL << 15u))                                                                     /**< Use the hardware block FetchWarp1. */
#define CYGFX_DISP_FEATURE_FETCH_DECODE4    ((CYGFX_DISP_FEATURE)(1uL << 16u))                                                                     /**< Use the hardware block FetchDecode4. */
#define CYGFX_DISP_FEATURE_FETCH_LAYER0     ((CYGFX_DISP_FEATURE)(1uL << 17u))                                                                     /**< Use the hardware block FetchLayer0. */
#define CYGFX_DISP_FEATURE_FETCH_LAYER1     ((CYGFX_DISP_FEATURE)(1uL << 18u))                                                                     /**< Use the hardware block FetchLayer1. */
/** \} */

/** \name Buffer target */
/** \{ */
typedef CYGFX_U32 CYGFX_DISP_BUFF_TARGET;                                         /**< Type for display buffer targets */
#define CYGFX_DISP_BUFF_TARGET_EXTERN_ALPHA ((CYGFX_DISP_BUFF_TARGET)(1uL << 0u)) /**< External alpha buffer as the target buffer */
#define CYGFX_DISP_BUFF_TARGET_COLOR_BUFF   ((CYGFX_DISP_BUFF_TARGET)(1uL << 1u)) /**< Color buffer as the target buffer */
/** \} */

/** \name Polarity control RGB */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_RGB;                  /**< Type for inversion of RGB pixel */
#define CYGFX_DISP_RGB_LOW  ((CYGFX_DISP_RGB)(0u)) /**< No inversion of pixel data */
#define CYGFX_DISP_RGB_HIGH ((CYGFX_DISP_RGB)(1u)) /**< Pixel data inverted */
/** \} */

/** \name Gamma conversion settings */
/** \{ */
typedef CYGFX_U32 CYGFX_DISP_GAMMA;                       /**< Type for display gamma setting */
#define CYGFX_DISP_GAMMA_NEUTRAL ((CYGFX_DISP_GAMMA)(0u)) /**< Disable gamma correction stage, no gamma conversion */
#define CYGFX_DISP_GAMMA_REMOVE  ((CYGFX_DISP_GAMMA)(1u)) /**< Window attribute only: Enable the gamma correction stage to remove gamma for window sources */
#define CYGFX_DISP_GAMMA_ADD     ((CYGFX_DISP_GAMMA)(2u)) /**< Display attribute only: Enable the gamma correction stage to apply gamma */
/** \} */

typedef struct GCCGFX_DISP_TYPE* CYGFX_DISP;        /**< Display object handle */

typedef struct GCCGFX_DISP_WINDOW_TYPE* CYGFX_WINDOW;    /**< Window object */

/** \name Display controller */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_CONTROLLER;                     /**< Type for display controller */
#define CYGFX_DISP_CONTROLLER_0 ((CYGFX_DISP_CONTROLLER)(0)) /**< Display controller 0 */
#define CYGFX_DISP_CONTROLLER_1 ((CYGFX_DISP_CONTROLLER)(1)) /**< Display controller 1 */
/** \} */

/** \name Display programmable interrupts */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_INTERRUPT;                    /**< Type for display programmable interrupt */
#define CYGFX_DISP_INTERRUPT_2 ((CYGFX_DISP_INTERRUPT)(0)) /**< Display programmable interrupt 2 */
#define CYGFX_DISP_INTERRUPT_3 ((CYGFX_DISP_INTERRUPT)(1)) /**< Display programmable interrupt 3 */
/** \} */

/** \name Display mode */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_MODE;                           /**< Type for display mode */
#define CYGFX_DISP_MODE_SINGLE_SCREEN ((CYGFX_DISP_MODE)(0)) /**< Single-screen mode */
#define CYGFX_DISP_MODE_DUAL_CHANNEL  ((CYGFX_DISP_MODE)(1)) /**< Dual-channel mode - Both FpdLink outputs are operating synchronously, driven by display controller 0 */
#define CYGFX_DISP_MODE_DUAL_SCREEN   ((CYGFX_DISP_MODE)(2)) /**< Reserved for future use */
#define CYGFX_DISP_MODE_DUAL_VIEW     ((CYGFX_DISP_MODE)(3)) /**< Reserved for future use */
/** \} */

/** \name Display synchronization mode */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_SYNC_MODE;                         /**< Type for display side-by-side synchronization mode */
#define CYGFX_DISP_SYNC_MODE_NONE   ((CYGFX_DISP_SYNC_MODE)(0)) /**< No side-by-side synchronization */
#define CYGFX_DISP_SYNC_MODE_MASTER ((CYGFX_DISP_SYNC_MODE)(1)) /**< The display is the master for side-by-side synchronization. The slave display must be opened first. */
#define CYGFX_DISP_SYNC_MODE_SLAVE  ((CYGFX_DISP_SYNC_MODE)(3)) /**< The display is the slave for side-by-side synchronization. If one display is the slave, then the other display must be the master. */
/** \} */

/** \name Display screen */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_OUTPUT_SCREEN;                                /**< Type for display screen selection */
#define CYGFX_DISP_OUTPUT_SCREEN_PRIMARY   ((CYGFX_DISP_OUTPUT_SCREEN)(0)) /**< Show layer on primary screen. */
#define CYGFX_DISP_OUTPUT_SCREEN_SECONDARY ((CYGFX_DISP_OUTPUT_SCREEN)(1)) /**< Reserved for future use */
#define CYGFX_DISP_OUTPUT_SCREEN_BOTH      ((CYGFX_DISP_OUTPUT_SCREEN)(2)) /**< Reserved for future use */
/** \} */

/** \name Display tile mode */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_TILE_MODE;                        /**< Type for display tile mode */
#define CYGFX_DISP_TILE_MODE_ZERO  ((CYGFX_DISP_TILE_MODE)(0)) /**< Pixels outside the surface are 0 if the surface has a buffer.
                                                                    Pixels inside the surface are 0 if the surface has no buffer. */
#define CYGFX_DISP_TILE_MODE_CONST ((CYGFX_DISP_TILE_MODE)(1)) /**< Pixels outside the surface use the constant color of the window if the surface has a buffer.
                                                                    Pixels inside the surface use the constant color of the window if the surface has no buffer. */
#define CYGFX_DISP_TILE_MODE_PAD   ((CYGFX_DISP_TILE_MODE)(2)) /**< Pixels use the closest pixel from the source buffer; this must not be set for RLD operations. */
#define CYGFX_DISP_TILE_MODE_CLIP  ((CYGFX_DISP_TILE_MODE)(3)) /**< The window position and size will be clipped to the overlapped area of the given window and the surface.
For pixels outside the surface, tile mode PAD is applied to RGB channels and tile mode ZERO to the alpha channel. */
/** \} */

/** \name Display layers */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_LAYER;                /**< Type for display layers */
#define CYGFX_DISP_LAYER_0 ((CYGFX_DISP_LAYER)(0)) /**< Layer 0 (bottom most layer) */
#define CYGFX_DISP_LAYER_1 ((CYGFX_DISP_LAYER)(1)) /**< Layer 1 */
#define CYGFX_DISP_LAYER_2 ((CYGFX_DISP_LAYER)(2)) /**< Layer 2 */
#define CYGFX_DISP_LAYER_3 ((CYGFX_DISP_LAYER)(3)) /**< Layer 3 */
#define CYGFX_DISP_LAYER_4 ((CYGFX_DISP_LAYER)(4)) /**< Layer 4 (top most layer) */
/** \} */

/** \name Display sublayers */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_SUB_LAYER;                          /**< Type for display sublayers */
#define CYGFX_DISP_SUB_LAYER_DEFAULT ((CYGFX_DISP_SUB_LAYER)(0)) /**< Window is not a multi-layer window or the next free sub-layer is used.
 All sub layers are available, but at one time, only one of them can be used.
 They are logically placed in front-to-back order from 1 to 8  */
#define CYGFX_DISP_SUB_LAYER_1       ((CYGFX_DISP_SUB_LAYER)(1)) /**< Sublayer 1. Only available sublayer for OTF windows. */
#define CYGFX_DISP_SUB_LAYER_2       ((CYGFX_DISP_SUB_LAYER)(2)) /**< Sublayer 2 */
#define CYGFX_DISP_SUB_LAYER_3       ((CYGFX_DISP_SUB_LAYER)(3)) /**< Sublayer 3 */
#define CYGFX_DISP_SUB_LAYER_4       ((CYGFX_DISP_SUB_LAYER)(4)) /**< Sublayer 4 */
#define CYGFX_DISP_SUB_LAYER_5       ((CYGFX_DISP_SUB_LAYER)(5)) /**< Sublayer 5 */
#define CYGFX_DISP_SUB_LAYER_6       ((CYGFX_DISP_SUB_LAYER)(6)) /**< Sublayer 6 */
#define CYGFX_DISP_SUB_LAYER_7       ((CYGFX_DISP_SUB_LAYER)(7)) /**< Sublayer 7 */
#define CYGFX_DISP_SUB_LAYER_8       ((CYGFX_DISP_SUB_LAYER)(8)) /**< Sublayer 8 */
/** \} */

/** \name Display group inversion */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_DCK_INVERT;                       /**< Type for display clock inversion */
#define CYGFX_DISP_DCK_INVERT_OFF ((CYGFX_DISP_DCK_INVERT)(0)) /**< The display clock output signal is delayed by one generated display clock cycle, i.e., by 180 degrees. This is the HW default setting. */
#define CYGFX_DISP_DCK_INVERT_ON  ((CYGFX_DISP_DCK_INVERT)(1)) /**< The display clock output signal is not delayed. */
/** \} */

/** \name Dithering */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_DITHER;                   /**< Type for dithering */
#define CYGFX_DISP_DITHER_OFF ((CYGFX_DISP_DITHER)(0)) /**< Flag to disable dithering */
#define CYGFX_DISP_DITHER_ON  ((CYGFX_DISP_DITHER)(1)) /**< Flag to enable dithering */
/** \} */

/** \name Dithering mode */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_DITHER_MODE;                                /**< Type for dithering mode */
#define CYGFX_DISP_DITHER_MODE_TEMP ((CYGFX_DISP_DITHER_MODE)(0))        /**< Flag to specify temporal dithering */
#define CYGFX_DISP_DITHER_MODE_SPAT ((CYGFX_DISP_DITHER_MODE)(1u << 4u)) /**< Flag to specify spatial dithering */
/** \} */

/** \name Dithering range */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_DITHER_RANGE;                            /**< Type for dithering range */
#define CYGFX_DISP_DITHER_RANGE_S11LOW ((CYGFX_DISP_DITHER_RANGE)(0)) /**< Flag to specify the dither range: add 0s to lower bits. */
/** \} */

/** \name Dithering format 0x0R0G0B00 */
/** \{ */
typedef CYGFX_U32 CYGFX_DISP_DITHER_FORMAT;                                   /**< Type for dithering format */
#define CYGFX_DISP_DITHER_FORMAT_108 ((CYGFX_DISP_DITHER_FORMAT)(0x08080800)) /**< Flag to specify the dithering output format of RGB 10x10x10 -> 8x8x8 */
#define CYGFX_DISP_DITHER_FORMAT_107 ((CYGFX_DISP_DITHER_FORMAT)(0x07070700)) /**< Flag to specify the dithering output format of RGB 10x10x10 -> 7x7x7 */
#define CYGFX_DISP_DITHER_FORMAT_106 ((CYGFX_DISP_DITHER_FORMAT)(0x06060600)) /**< Flag to specify the dithering output format of RGB 10x10x10 -> 6x6x6 */
#define CYGFX_DISP_DITHER_FORMAT_105 ((CYGFX_DISP_DITHER_FORMAT)(0x05060500)) /**< Flag to specify the dithering output format of RGB 10x10x10 -> 5x6x5 */
/** \} */


/** \name Display alpha mask mode */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_ALPHA_MASK;                          /**< Type for display color correction activity by alpha channel see ::CyGfx_DispAlphaMask() */
#define CYGFX_DISP_ALPHA_MASK_OFF    ((CYGFX_DISP_ALPHA_MASK)(0)) /**< Color correction for display is alpha independent */
#define CYGFX_DISP_ALPHA_MASK_ON     ((CYGFX_DISP_ALPHA_MASK)(1)) /**< Color correction for display is active for alpha on (value == 255) */
#define CYGFX_DISP_ALPHA_MASK_INVERT ((CYGFX_DISP_ALPHA_MASK)(2)) /**< Color correction for display is active for alpha off (value < 255) */
/** \} */


/** \name Display CLUT alpha channel */
/** \{ */
typedef CYGFX_DISP_ALPHA_MASK CYGFX_DISP_CLUT_ALPHA;                                         /**< Type for display CLUT activity by alpha channel; see ::CyGfx_DispClutAlpha()*/
#define CYGFX_DISP_CLUT_ALPHA_OFF    ((CYGFX_DISP_CLUT_ALPHA)(CYGFX_DISP_ALPHA_MASK_OFF))    /**< CLUT is alpha-independent */
#define CYGFX_DISP_CLUT_ALPHA_ON     ((CYGFX_DISP_CLUT_ALPHA)(CYGFX_DISP_ALPHA_MASK_ON))     /**< CLUT is active for alpha on (value == 255) */
#define CYGFX_DISP_CLUT_ALPHA_INVERT ((CYGFX_DISP_CLUT_ALPHA)(CYGFX_DISP_ALPHA_MASK_INVERT)) /**< CLUT is active for alpha off (value < 255) */
/** \} */

/** \name Display input control */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_INPUT_CONTROL;                                 /**< Type for display input control */
#define CYGFX_DISP_INPUT_CONTROL_PRIMARY ((CYGFX_DISP_INPUT_CONTROL)(0))    /**< Primary stream (display) only is shown. */
#define CYGFX_DISP_INPUT_CONTROL_BLEND   ((CYGFX_DISP_INPUT_CONTROL)(1))    /**< Blending of the primary stream (display) with the secondary stream (direct capture) is shown.
                                                                                 This is the default in direct capture mode and can only be used in direct capture mode. */
/** \} */

/** \name Display attributes */
/** \{ */
typedef CYGFX_U08 CYGFX_DISP_ATTR;                                /**< Type for display attributes */
#define CYGFX_DISP_ATTR_OUTPUT_CONTROLLER  ((CYGFX_DISP_ATTR)(0)) /**< Display controller that is used for the display (see ::CYGFX_DISP_CONTROLLER).
This attribute is read-only. */
#define CYGFX_DISP_ATTR_X_RESOLUTION       ((CYGFX_DISP_ATTR)(1)) /**< Horizontal resolution
This attribute is read-only. */
#define CYGFX_DISP_ATTR_Y_RESOLUTION       ((CYGFX_DISP_ATTR)(2)) /**< Vertical resolution
This attribute is read-only. */
#define CYGFX_DISP_ATTR_BACKGROUND_COLOR   ((CYGFX_DISP_ATTR)(3)) /**< Sets the background color 0xRRGGBBAA for the screen area that is not included in any display window.
By default, the background color is blended with display layers.
The default value is 0 (black).

\note
The constant color on the panel may slightly differ from this value if ::CYGFX_DISP_GAMMA_ADD is set. */
#define CYGFX_DISP_ATTR_BUFF_ERR           ((CYGFX_DISP_ATTR)(4)) /**< If the data read from the memory area falls or is too slow, the internal FIFO buffer fails to supply the display data.
This attribute shows an error status of the FIFO for the specified display controller.
This attribute is read-only.
The hardware status is cleared after the read operation.
Returned values:
0 - No buffer error occurred.
1 - A buffer error occurred in the primary stream (display path).
2 - A buffer error occurred in the secondary stream (capture path).
3 - A buffer error occurred in the primary stream and the secondary stream. */
#define CYGFX_DISP_ATTR_GAMMA              ((CYGFX_DISP_ATTR)(5)) /**< Gamma conversion.
The related parameter can be one of the following:
- ::CYGFX_DISP_GAMMA_NEUTRAL (default)
- ::CYGFX_DISP_GAMMA_ADD

\note
To get high-quality layer blending results, you must set the ::CYGFX_DISP_GAMMA_ADD display attribute and the  ::CYGFX_DISP_GAMMA_REMOVE window attribute for all attached windows. */
#define CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT ((CYGFX_DISP_ATTR)(6)) /**< Controls the Commit properties:

- ::CYGFX_FALSE (default):
CyGfx_DispWinCreate() and CyGfx_WinDestroy() will be executed immediately on the device.
It may cause successive calls to get delayed or return an error (see ::CYGFX_CONFIG_ATTR_DISPLAY_NOBLOCK).
CyGfx_DispCommit() changes only display properties.

- ::CYGFX_TRUE: CyGfx_DispWinCreate() and CyGfx_WinDestroy() will not be applied on the device; they require CyGfx_DispCommit(). CyGfx_DispCommit() changes display properties and all creates, closes, and property changes of all windows of this display controller.
It ensures that all changes are applied together.

It is also possible to use CyGfx_WinCommit() for single window-property changes.
- See also \ref cygfx_display_commit.

\note
It is not required to call CyGfx_DispCommit() after changing this property.
It is only allowed to change this attribute after creating a display and before other display functions are called; otherwise the result is undefined.
This feature is not supported if any opened window is an OTF window (created with the CYGFX_DISP_FEATURE_OTF_WIN_PRIO_X feature). */

#define CYGFX_DISP_ATTR_LINE_INDEX         ((CYGFX_DISP_ATTR)(7)) /**< Index of the output line that is currently generated.
- Starts with 1 for first active output line, 1..Vtot.
- Read only.
*/

#define CYGFX_DISP_ATTR_IN_CTRL            ((CYGFX_DISP_ATTR)(8)) /**< Display input control.
The related parameter can be one of the following:
- ::CYGFX_DISP_INPUT_CONTROL_PRIMARY
- ::CYGFX_DISP_INPUT_CONTROL_BLEND
*/
/** \} */

/**
    Data type used to specify the custom timing for a display mode
**/
typedef struct
{
    CYGFX_FLOAT pixelClock;                /**< Pixel clock in units of MHz

    \note
    The pixel clock must be in the range [::CYGFX_DISP_MIN_PIXEL_CLOCK (MHz) .. ::CYGFX_DISP_MAX_PIXEL_CLOCK (MHz)].
    The display PLL frequency must be in the range [::CYGFX_SYS_INIT_DISP_PLL_MIN (MHz) .. ::CYGFX_SYS_INIT_DISP_PLL_MAX (MHz)].

    It must also be possible to generate the pixel clock from the PLL frequency.
    This can be checked as follows:
    Single-screen mode: display_ClockDivider = GfxPll / (pixelClock * 2);
    Dual-channel mode:  display_ClockDivider = GfxPll / pixelClock;

    display_ClockDivider must be one of the values in {1, 2, 4, 8}.

    Thus, for a pixel clock of 64 MHz, a GfxPll of 128 MHz is required. The driver receives the information about the
    configured PLL frequency with the pDriverInitInfo parameter of ::CyGfx_SysInitializeDriver. */
    CYGFX_U16 Hact;                        /**< Active pixels per line: ::CYGFX_DISP_MIN_DIMENSION .. ::CYGFX_DISP_MAX_WIDTH */
    CYGFX_U16 Vact;                        /**< Active lines per frame: ::CYGFX_DISP_MIN_DIMENSION .. ::CYGFX_DISP_MAX_HEIGHT */
    CYGFX_U16 Htot;                        /**< Total pixels per line. Must be between 5% and 40 % higher than Hact. */
    CYGFX_U16 Vtot;                        /**< Total lines per frame. Must be between 2% and 20 % higher than Vact
    (between 2% and 5% for capture-to-display). */
    CYGFX_U16 Hsbp;                        /**< Width of horizontal sync + back porch */
    CYGFX_U16 Vsbp;                        /**< Height of vertical sync + back porch */
    CYGFX_U16 Hsync;                       /**< Width of horizontal sync */
    CYGFX_U16 Vsync;                       /**< Height of vertical sync */
    CYGFX_U16 HtotMin;                     /**< Minimum total pixels per line: Hact < HtotMin <= Htot <= HtotMax.
    Used for skew regulation in capture-to-display mode.
    It is ignored when capture-to-display is not enabled.
    The parameter is written as is to the hardware register. The application can tweak this value based on the display properties of the panel to get an optimal performance. */
    CYGFX_U16 VtotMin;                     /**< Minimum total lines per frame: Vact < VtotMin <= Vtot <= VtotMax.
    Used for skew regulation in capture-to-display mode.
    It is ignored when capture-to-display is not enabled.
    The parameter is written as is to the hardware register. The application can tweak this value based on the display properties of the panel to get an optimal performance. */
    CYGFX_U16 HtotMax;                     /**< Maximum total pixels per line: Hact < HtotMin <= Htot <= HtotMax.
    Used for skew regulation in capture-to-display mode.
    It is ignored when capture-to-display is not enabled.
    The parameter is written as is to the hardware register. The application can tweak this value based on the display properties of the panel to get an optimal performance. */
    CYGFX_U16 VtotMax;                     /**< Maximum total lines per frame: Vact < VtotMin <= Vtot <= VtotMax.
    Used for skew regulation in capture-to-display mode.
    It is ignored when capture-to-display is not enabled.
    The parameter is written as is to the hardware register. The application can tweak this value based on the display properties of the panel to get an optimal performance. */
    CYGFX_DISP_DCK_INVERT DCKInvertEnable; /**< Display clock inversion. See the definition of ::CYGFX_DISP_DCK_INVERT. */
    CYGFX_GEN_POLARITY    polEn;           /**< Polarity of the enable signal. See the definition of ::CYGFX_GEN_POLARITY. */
    CYGFX_GEN_POLARITY    polHs;           /**< Polarity of the horizontal sync signal. See the definition of ::CYGFX_GEN_POLARITY. */
    CYGFX_GEN_POLARITY    polVs;           /**< Polarity of the vertical sync signal. See the definition of ::CYGFX_GEN_POLARITY. */
    CYGFX_DISP_RGB        pixInv;          /**< Inversion of the RGB pixel data. See the definition of ::CYGFX_DISP_RGB. */
} CYGFX_DISP_TIMING_S;


/**
    Data type used to program timing controller (TCON) registers
**/
typedef struct
{
    CYGFX_U32 address; /**< Address offset of the TCON register (for details see TRAVEO(TM) T2G Automotive Cluster 2D Registers Technical Reference Manual (TRM) (TVII-C-2D-6M) Document Number: 002-25923 Rev *F). Offset 0 stands for the first SSQCNTS, SSQCYCLE has offset 0x400, and so on. */
    CYGFX_U32 value;   /**< Value of the TCON register */
} CYGFX_DISP_TCON_PROPERTIES_S;


/**
    Data type used to configure a display controller.
    Specify the custom timing parameters in the \a timing structure to configure
    the display.
    In addition, provide an array of TCON register address/value pairs (refer to
    the Hardware Manual for a description of the timing controller registers).
**/
typedef struct
{
    CYGFX_DISP_CONTROLLER         outputController; /**< Specifies the display controller to use */
    CYGFX_DISP_MODE               displayMode;      /**< Only single-screen mode is currently supported: must be set to ::CYGFX_DISP_MODE_SINGLE_SCREEN. */
    CYGFX_DISP_SYNC_MODE          syncMode;         /**< Determines the operating mode of the display for Side-by-Side synchronization */
    CYGFX_DISP_TIMING_S           timing;           /**< Custom display timing information */
    CYGFX_DISP_TCON_PROPERTIES_S* pTconProps;       /**< Pointer to the TCON register/value structure array. Must be ::NULL if no TCON is used. */
    CYGFX_U32                     countTconProps;   /**< Number of TCON registers to be programmed. Must be zero if no TCON is used. */
} CYGFX_DISP_PROPERTIES_S;


/**
    Data type used to specify window creation parameters
**/
typedef struct
{
    CYGFX_DISP_OUTPUT_SCREEN outputScreen; /**< Specifies the output screen on which the window should be created */
    CYGFX_U32                topLeftX;     /**< Top left X coordinate of the window on the display */
    CYGFX_U32                topLeftY;     /**< Top left Y coordinate of the window on the display */
    CYGFX_U32                width;        /**< Width of the window */
    CYGFX_U32                height;       /**< Height of the window */
    CYGFX_DISP_LAYER         layerId;      /**< Layer to use for the window (see ::CYGFX_DISP_LAYER) */
    CYGFX_U32                features;     /**< Features requested by the window; the related parameter can be a bit field combination of the following:
    - ::CYGFX_DISP_FEATURE_INDEX_COLOR
    - ::CYGFX_DISP_FEATURE_DECODE
    - ::CYGFX_DISP_FEATURE_EXTERN_ALPHA
    - ::CYGFX_DISP_FEATURE_YUV1BUFF
    - ::CYGFX_DISP_FEATURE_WARP
    - ::CYGFX_DISP_FEATURE_UPSCALE
    - ::CYGFX_DISP_FEATURE_COLOR_MATRIX
    - ::CYGFX_DISP_FEATURE_IMAGE_PROCESSING
    - ::CYGFX_DISP_FEATURE_MULTI_LAYER
    - ::CYGFX_DISP_FEATURE_CAPTURE
    - ::CYGFX_DISP_FEATURE_OTF_WIN_PRIO_0
    - ::CYGFX_DISP_FEATURE_OTF_WIN_PRIO_1
    - ::CYGFX_DISP_FEATURE_OTF_WIN_PRIO_2
    - ::CYGFX_DISP_FEATURE_OTF_WIN_PRIO_3
    - ::CYGFX_DISP_FEATURE_FETCH_DECODE0
    - ::CYGFX_DISP_FEATURE_FETCH_WARP1
    - ::CYGFX_DISP_FEATURE_FETCH_DECODE4
    - ::CYGFX_DISP_FEATURE_FETCH_LAYER0
    - ::CYGFX_DISP_FEATURE_FETCH_LAYER1 */
    CYGFX_DISP_SUB_LAYER sub_layerId;      /**< Sub-Layer to use for windows with the requested feature ::CYGFX_DISP_FEATURE_MULTI_LAYER. */
} CYGFX_DISP_WINDOW_PROPERTIES_S;

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \name Display functions
 * \{
 */

/**
    Used to open a display.
    By default, this function is blocked until previous operations of the device
    display are completely executed.
    Use CyGfx_ConfigSetAttribute() and set ::CYGFX_CONFIG_ATTR_DISPLAY_NOBLOCK to 1
    to make it non-blocking.
    \note
    The display resolution is limited to ::CYGFX_DISP_MIN_DIMENSION ..
    ::CYGFX_DISP_MAX_WIDTH pixels in horizontal direction and
    ::CYGFX_DISP_MIN_DIMENSION .. ::CYGFX_DISP_MAX_HEIGHT pixels in vertical
    direction according to the hardware specification.
    \note
    This function must be called only once for each display output controller.
    \note
    In side-by-side mode, open the slave display first.
    \note
    In direct capture (capture-to-display) mode, the video source must have the
    same timing and resolution as the display.
    \note
    In direct capture (capture-to-display) fast sync off mode ::CYGFX_CAP_DIRECT_CAPTURE_ON_FAST_SYNC_OFF,
    the sync object got by ::CyGfx_DispGetSync will not check the both stream, but
    it is signaled just after the primary stream (display stream) of CyGfx_DispOpenDisplay()
    has been processed. The secondary stream (capture stream) can be checked by an interrupt.
    When the secondary stream has been processed, the interrupt ::CYGFX_INT_BANK0_VIDEOIO0_FRAMECAP0_SYNC_ON
    is triggered.
    \note
    The PLL frequency specified with the ::CyGfx_SysInitializeDriver call must be
    configured before ::CyGfx_DispOpenDisplay is called.
    CyGfx_DispOpenDisplay neither modifies nor checks the PLL configuration.

    \param [in] mode  A pointer to an ::CYGFX_DISP_PROPERTIES_S structure
    describing the desired resolution and display timings
    \param [out] display  On success, will contain a valid ::CYGFX_DISP
    \param [in] capCtx  Handle returned from CyGfx_CapOpen().
    A valid handle enables direct capture (capture-to-display) mode, with no buffer;
    display is synced to video;
    the video timing and resolution must be the same as the display.
    ::NULL disables capture-to-display.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If an invalid argument was
    passed
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_MODE Requested display mode not supported
    on the hardware or direct capture requested for CyGfx_DispOpenDisplay(), but
    not for CyGfx_CapOpen().
    \retval ::CYGFX_ERP_ERR_DISP_WRONG_CAPTURE_TIMING Capture source timing does
    not match the display timing.
    \retval ::CYGFX_ERP_ERR_DISP_DISPLAY_ALREADY_OPEN If the display is already
    opened
    \retval ::CYGFX_ERP_ERR_DISP_DEV_BUSY If writing to the device display is
    denied because the previous close call is not completely executed (e.g., shadow
    load request is pending). Call again later.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispOpenDisplay( const CYGFX_DISP_PROPERTIES_S* mode,
                                                CYGFX_DISP*                    display,
                                                CYGFX_CAP_CTX                  capCtx);

/**
    Closes a display and all windows opened by this display.
    This function can be blocking until previous operations of the device display are
    completely executed, regardless of the  ::CYGFX_CONFIG_ATTR_DISPLAY_NOBLOCK attribute.
    \note
    The display closed by the last process switches the display controller OFF.
    \note
    In Side-by-Side mode, close the master display first.

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay().

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If an invalid argument was
    passed
    \retval ::CYGFX_ERP_ERR_DISP_DEV_BUSY If writing to the device display is
    denied because the previous commit, open, create, or destroy call is not
    completely executed (e.g., shadow load request is pending). Call again later.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispCloseDisplay( CYGFX_DISP display);

/**
    Used to configure dithering on the display controller.
    Dither processing is active if ::CYGFX_DISP_DITHER_ON is set.
    Dithering improves the display images if the display has less color levels than
    the original picture.
    The number of bits per pixel is lowered from the original value (e.g., RGB888
    to RGB666 with ::CYGFX_DISP_DITHER_FORMAT_106).
    The value of lower bits are randomly rounded up or down based on the location
    of the pixel in the frame (::CYGFX_DISP_DITHER_MODE_SPAT).
    Or, a random vector is generated to address the dither matrix (::CYGFX_DISP_DITHER_MODE_TEMP).

    \note
    This setting will not be active immediately. Use CyGfx_DispCommit() to submit
    for processing.

    \param [in] display  A ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay()
    \param [in] enable  Enable Dithering:
    - ::CYGFX_DISP_DITHER_OFF = Disable dithering
    - ::CYGFX_DISP_DITHER_ON = Enable dithering
    \param [in] mode  Select mode for dithering:
    - ::CYGFX_DISP_DITHER_MODE_TEMP = Temporal dithering
    - ::CYGFX_DISP_DITHER_MODE_SPAT = Spatial dithering
    \param [in] range  Sets dither range: - ::CYGFX_DISP_DITHER_RANGE_S11LOW = adds
    0s to lower bits
    \param [in] format  Select output format for dithering:
    - ::CYGFX_DISP_DITHER_FORMAT_108 = 10x10x10->8x8x8
    - ::CYGFX_DISP_DITHER_FORMAT_107 = 10x10x10->7x7x7
    - ::CYGFX_DISP_DITHER_FORMAT_106 = 10x10x10->6x6x6
    - ::CYGFX_DISP_DITHER_FORMAT_105 = 10x10x10->5x6x5

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If an invalid argument was passed
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispDitherCtrl( CYGFX_DISP               display,
                                               CYGFX_DISP_DITHER        enable,
                                               CYGFX_DISP_DITHER_MODE   mode,
                                               CYGFX_DISP_DITHER_RANGE  range,
                                               CYGFX_DISP_DITHER_FORMAT format);

/**
    The CLUT (see CyGfx_CmSetClutData()) can be activated per pixel depending on
    the alpha value of this pixel.
    See CyGfx_WinSetAlphaMode() to configure the alpha channel in the display path.

    \note
    This API exists for backwards compatibility reason. ::CyGfx_DispAlphaMask()
    is recommended to use.

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay().
    \param [in] flag  Defines the CLUT operation mode (see ::CYGFX_DISP_CLUT_ALPHA).

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If an invalid argument was
    passed
    \retval ::CYGFX_ERP_ERR_DISP_CLOSED      The specified display was not opened.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispClutAlpha( CYGFX_DISP            display,
                                              CYGFX_DISP_CLUT_ALPHA flag);

/**
    Color correction for display can be activated per pixel depending on
    the alpha value of this pixel.
    For devices before TVIIC2D6MDDR, the color correction unit is one CLUT unit (see
    ::CYGFX_CM_CLUT_UNIT_0 of ::CyGfx_CmSetClutData() for ::CYGFX_DISP).
    For TVIIC2D6MDDR, color correction units are two CLUT units (see
    ::CyGfx_CmSetClutData() for ::CYGFX_DISP) and one color matrix unit (see
    ::CyGfx_CmSetColorMatrix for ::CYGFX_DISP).
    See CyGfx_WinSetAlphaMode() to configure the alpha channel in the display path.

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
                         CyGfx_DispOpenDisplay().
    \param [in] flag  Defines the alpha mask mode (see ::CYGFX_DISP_ALPHA_MASK).

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If an invalid argument was
            passed
    \retval ::CYGFX_ERP_ERR_DISP_CLOSED      Specified display was not opened.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispAlphaMask( CYGFX_DISP            display,
                                              CYGFX_DISP_ALPHA_MASK flag);

/**
    Initializes the sync object \a sync to get signaled after \a vsyncCnt VSyncs
    have happened.
    The VSync is taken from the display controller specified by the display.

    \note
    Typically, a negative value or 0 does not make sense because the condition is
    always fulfilled.
    However, in a program, it can be helpful to use it as the start condition and
    increment the sync CyGfx_SyncIncr() in a loop.

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay()
    \param [out] sync  Sync object to initialize with the sync condition Note: The
    sync object must be a pointer to a ::CYGFX_SYNC_OBJECT_S.
    \param [in] vsyncCnt  Number of VSyncs to elapse until the sync object gets
    signaled.
    The parameter must be -0x7FFFFFFF < vsyncCnt < 0x7FFFFFFF.
    Note: Typically, a negative value or 0 does not make sense because the
    condition is always fulfilled.
    However, in a program, it can be helpful to use it as the start condition and
    increment the sync CyGfx_SyncIncr() in a loop.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If a parameter is invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispGetVSync( CYGFX_DISP display,
                                             CYGFX_SYNC sync,
                                             CYGFX_S32  vsyncCnt);

/**
    Sets the \a pname attribute to \a param. \a display specifies the display
    controller for which the attribute should be set.
    \note
    This setting will not be active immediately.
    Use CyGfx_DispCommit() to submit for processing.

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay()
    \param [in] pname  Parameter name. See ::CYGFX_DISP_ATTR for valid values.
    \param [in] param  Value to set for the pname parameter

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_CLOSED The function is called with a display
    parameter that is currently closed.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
    invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispSetAttribute( CYGFX_DISP      display,
                                                 CYGFX_DISP_ATTR pname,
                                                 CYGFX_U32       param);

/**
    Gets the value for the \a pname attribute. \a display specifies the display
    controller for which the attribute should be retrieved.

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay().
    \param [in] pname  Parameter name. See ::CYGFX_DISP_ATTR for valid values.
    \param [out] pParam  Address where the read value of the attribute is stored

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_CLOSED The function is called with a display
    parameter that is currently closed.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
    invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispGetAttribute( CYGFX_DISP      display,
                                                 CYGFX_DISP_ATTR pname,
                                                 CYGFX_U32*      pParam);

/**
    Requests a sync object from the display pipeline.
    The sync object will be signaled after the preceding CyGfx_DispCommit() or
    CyGfx_DispOpenDisplay() has been processed.
    \note
    The sync object must be a pointer of a ::CYGFX_SYNC_OBJECT_S.

    \param [in] display  A ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay().
    \param [out] sync  Sync object. After the successful completion of
    CyGfx_DispGetSync(), it holds the parameter of the inserted sync.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
    invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispGetSync( CYGFX_DISP display,
                                            CYGFX_SYNC sync);

/**
    Inserts a sync wait into the display pipeline.
    CyGfx_DispCommit() operations performed after this call are executed only after
    sync gets signaled.
    CyGfx_DispWaitSync() must be called only once before a call to
    CyGfx_DispCommit().

    \note
    The sync object must be a pointer of a ::CYGFX_SYNC_OBJECT_S that was
    initialized by CyGfx_SyncReset() or a function that "defines" a sync condition.

    See \ref bgd_sync

    \param [in] display  The display to which the wait condition is applied
    \param [in] sync  The sync object to wait for

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
    invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispWaitSync( CYGFX_DISP display,
                                             CYGFX_SYNC sync);

/**
    Applies all changes for the display:
    - If the ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT attribute is set to ::CYGFX_FALSE,

    only display changes are applied to the hardware.
    - If the ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT attribute is set to ::CYGFX_TRUE,
    this function also applies the CyGfx_WinDestroy(), CyGfx_DispWinCreate(), and
    property changes of the windows of this display controller.
    - See also \ref cygfx_display_commit.

    \note
    The display-related setting modification will not be active immediately.
    The CyGfx_DispCommit() submits these settings for processing.
    By default, this function is blocked until previous operations of the device
    display are completely executed.
    Use CyGfx_ConfigSetAttribute() to set ::CYGFX_CONFIG_ATTR_DISPLAY_NOBLOCK to 1
    to make it non-blocking.

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay()

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
    invalid
    \retval ::CYGFX_ERP_ERR_DISP_DEV_BUSY If writing to the device display is
    denied because the previous commit, open, create, or destroy call is not
    completely executed (e.g., shadow load request is pending). Call again later.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispCommit( CYGFX_DISP display);

/**
    Configure the position of the programmable display interrupt signals. The configuration
    will have immediate effect.
    Callback functions can be registered with the corresponding interrupts.
    Display controller 0, ::CYGFX_DISP_INTERRUPT_2 -> ::CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_INT2.
    Display controller 0, ::CYGFX_DISP_INTERRUPT_3 -> ::CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_INT3.
    Display controller 1, ::CYGFX_DISP_INTERRUPT_2 -> ::CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_INT2.
    Display controller 1, ::CYGFX_DISP_INTERRUPT_3 -> ::CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_INT3.

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay()
    \param [in] interrupt_id Interrupt id ::CYGFX_DISP_INTERRUPT
    \param [in] column Column of the trigger point. Valid value 1..Htot.
                       column == 0 disable the interrupt.
    \param [in] row    Row of the trigger point. Valid value 1..Vtot.
                       row == 0 disable the interrupt.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER if one of the parameters is
    invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispConfigInterrupt( CYGFX_DISP           display,
                                                    CYGFX_DISP_INTERRUPT interrupt_id,
                                                    CYGFX_U32            column,
                                                    CYGFX_U32            row);

/** \} end Display Functions */

/** \name Window functions
 * \{
 */

/**
    Creates a window.
    By default, this function is blocked until previous operations of device
    display and device window are completely executed.
    Use CyGfx_ConfigSetAttribute() to set ::CYGFX_CONFIG_ATTR_DISPLAY_NOBLOCK to 1
    to make it non-blocking.
    - If the ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT attribute is ::CYGFX_FALSE, the
    windows will be created on hardware.
    - If the ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT attribute is set to ::CYGFX_TRUE,
    only the returned window handle will be prepared.

    Further property changes like CyGfx_WinSetSurface() are possible.
    In every case, it requires a CyGfx_DispCommit().
    A following CyGfx_WinDestroy() or CyGfx_WinCommit() call without
    CyGfx_DispCommit() will report an error.
    - See also \ref cygfx_display_commit

    \note
    It is suggested to create windows in the following order:
    - window with the ::CYGFX_DISP_FEATURE_DECODE feature
    - window with the ::CYGFX_DISP_FEATURE_IMAGE_PROCESSING,
    ::CYGFX_DISP_FEATURE_CAPTURE, ::CYGFX_DISP_FEATURE_YUV1BUFF feature
    - window with the ::CYGFX_DISP_FEATURE_EXTERN_ALPHA feature
    - window with the ::CYGFX_DISP_FEATURE_WARP feature
    - window with the ::CYGFX_DISP_FEATURE_MULTI_LAYER feature
    - window with the ::CYGFX_DISP_FEATURE_INDEX_COLOR feature
    - window with no feature

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
    CyGfx_DispOpenDisplay(), identifying the display on which to create the window
    \param [in] properties  A pointer to an ::CYGFX_DISP_WINDOW_PROPERTIES_S
    structure, which specifies the properties of the window to create
    \param [out] pWin  On success, will contain an ::CYGFX_WINDOW

    \retval  ::CYGFX_OK On success
    \retval  ::CYGFX_ERP_ERR_DISP_SHDLD_ERROR Internal HW error - register shadow
    load not confirmed in the expected time
    \retval ::CYGFX_ERP_ERR_CARD_DEV_BUSY Device access request denied
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DispWinCreate( CYGFX_DISP                            display,
                                              const CYGFX_DISP_WINDOW_PROPERTIES_S* properties,
                                              CYGFX_WINDOW*                         pWin);


/** \} end Window Functions */

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_DISPLAY_H */
