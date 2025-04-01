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
 * \file    cygfx_window.h
 */


#ifndef CYGFX_WINDOW_H
#define CYGFX_WINDOW_H


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
 \addtogroup cygfx_window
 \code #include "cygfx_window.h" \endcode
 \brief The Window API exposes the window functionality to the display, blend, and synchronize layers.
        See also \ref overview_display
*
*/
/** \{ */
/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/** \name Alpha channel setting */
/** \{ */
typedef CYGFX_U08 CYGFX_WIN_ALPHA_CTRL;                        /**< Type for display alpha control setting */
#define CYGFX_WIN_ALPHA_CTRL_DST   ((CYGFX_WIN_ALPHA_CTRL)(0)) /**< The layer/window does not modify the display alpha channel. (Aout = Adst) */
#define CYGFX_WIN_ALPHA_CTRL_SRC   ((CYGFX_WIN_ALPHA_CTRL)(1)) /**< The layer/window uses the resulting source alpha channel. (Aout = Ad; Ad see ::CyGfx_WinSetBlendMode() */
#define CYGFX_WIN_ALPHA_CTRL_BLEND ((CYGFX_WIN_ALPHA_CTRL)(2)) /**< The layer/window adds the resulting source alpha channel. (Aout = Ad + Adst * (1-Ad)); Ad see ::CyGfx_WinSetBlendMode() */
/** \} */

/** \name Blend modes */
/** \{ */
typedef CYGFX_U32 CYGFX_WIN_BLEND;                                           /**< Type for display blend modes */
#define CYGFX_WIN_BLEND_NONE                  ((CYGFX_WIN_BLEND)(0u))        /**< Disable blending */
#define CYGFX_WIN_BLEND_TRANSPARENCY          ((CYGFX_WIN_BLEND)(1uL << 0u)) /**< Enable transparency */
#define CYGFX_WIN_BLEND_GLOBAL_ALPHA          ((CYGFX_WIN_BLEND)(1uL << 1u)) /**< Enable global alpha blending */
#define CYGFX_WIN_BLEND_SOURCE_ALPHA          ((CYGFX_WIN_BLEND)(1uL << 2u)) /**< Enable per-pixel source alpha blending */
#define CYGFX_WIN_BLEND_EXTERN_ALPHA          ((CYGFX_WIN_BLEND)(1uL << 3u)) /**< Enable per-pixel external alpha blending */
#define CYGFX_WIN_BLEND_SOURCE_MULTIPLY_ALPHA ((CYGFX_WIN_BLEND)(1uL << 4u)) /**< Enable source alpha multiplication */
/** \} */

/** \name Window attributes */
/** \{ */
typedef CYGFX_U08 CYGFX_WIN_ATTR;                                     /**< Type for window attributes */
#define CYGFX_WIN_ATTR_LAYER_ID                ((CYGFX_WIN_ATTR)(0))  /**< Layer used for the window (see ::CYGFX_DISP_LAYER).
    This attribute is read-only. */
#define CYGFX_WIN_ATTR_SUB_LAYER_ID            ((CYGFX_WIN_ATTR)(1))  /**< Sublayer used for the window (::CYGFX_DISP_SUB_LAYER_1 .. ::CYGFX_DISP_SUB_LAYER_8) or ::CYGFX_DISP_SUB_LAYER_DEFAULT if the ::CYGFX_DISP_FEATURE_MULTI_LAYER feature is not used for the window
    This attribute is read-only. */
#define CYGFX_WIN_ATTR_TOPLEFT_X               ((CYGFX_WIN_ATTR)(2))  /**< Top-left X coordinate of the window on the display
    This attribute is initialized by ::CyGfx_DispWinCreate().

    \note To set a negative value for X, use the following formula:

    \code
    value = 0xFFFFFFFF- ((CYGFX_U32)(-X) - 1);
    \endcode

    If the value is returned by CyGfx_WinGetAttribute(), the most significant bit must be used to check for negative values:
    \code
    X = ((value & 0x80000000) == 0) ?
        (int)value :
        -(int)((0xFFFFFFFF - value) + 1);
    \endcode

    Allowed range
    [0 ... \<display width\> - \<window width\>] for OTF windows,
    [-::CYGFX_DISP_MAX_WIDTH ... ::CYGFX_DISP_MAX_WIDTH] otherwise. */
#define CYGFX_WIN_ATTR_TOPLEFT_Y               ((CYGFX_WIN_ATTR)(3))  /**< Top-left Y coordinate of the window on the display.
    This attribute is initialized by ::CyGfx_DispWinCreate().

    \note
    The Y value can be negative.
    See ::CYGFX_WIN_ATTR_TOPLEFT_X.

    Allowed range
    [0 ... \<display height\> - \<window height\>] for OTF windows,
    [-::CYGFX_DISP_MAX_HEIGHT ... ::CYGFX_DISP_MAX_HEIGHT] otherwise. */
#define CYGFX_WIN_ATTR_WIDTH                   ((CYGFX_WIN_ATTR)(4))  /**< Width of the window on the display.
    This attribute is initialized by ::CyGfx_DispWinCreate().

    \note
    The area beyond the range of the underlying frame buffer or surface will be filled as black.

    Allowed range [0 ... ::CYGFX_DISP_MAX_WIDTH]. (A value of 0 disables the window.) */
#define CYGFX_WIN_ATTR_HEIGHT                  ((CYGFX_WIN_ATTR)(5))  /**< Height of the window on the display.
    This attribute is initialized by ::CyGfx_DispWinCreate().

    \note The area beyond the range of the underlying frame buffer or surface will be filled as black.

    Allowed range [0 ... ::CYGFX_DISP_MAX_HEIGHT]. (A value of 0 disables the window.) */
#define CYGFX_WIN_ATTR_SCREEN                  ((CYGFX_WIN_ATTR)(6))  /**< Selection of the screen(s) where the layer is displayed.
    Alpha layers do not have this attribute. See ::CYGFX_DISP_OUTPUT_SCREEN.
    This attribute is read-only. */
#define CYGFX_WIN_ATTR_COLOR                   ((CYGFX_WIN_ATTR)(7))  /**< Sets the window color.
    The format of the color value is 0xRRGGBBAA.
    Three use cases are possible for the window color:
    - If the color surface set to the window has no RGB color, the surface fetches the RGB color from the window color. The window color will be ignored if the surface brings the RGB color by itself.
    - If blend mode is ::CYGFX_WIN_BLEND_TRANSPARENCY, the transparency color is defined by the RGB part of the window color.
    - If blend mode is ::CYGFX_WIN_BLEND_GLOBAL_ALPHA, the global alpha value is defined by the alpha part of the window color.
    The default value is 0xFFFFFFFF. */
#define CYGFX_WIN_ATTR_DISABLE                 ((CYGFX_WIN_ATTR)(8))  /**< Switches the window OFF.
    - Default value = 0: window is enabled.
    - Set value = 1: window is switched OFF and invisible on screen. */
#define CYGFX_WIN_ATTR_SWAP_INTERVAL           ((CYGFX_WIN_ATTR)(9))  /**< Selects the swap interval.
    The swap interval defines the number of frames for one swap (property changes).
    This will be used if different surfaces are shown after each other using ::CyGfx_WinSetSurface() and ::CyGfx_WinCommit().

    The default value is 1.
    The minimum allowed value = 0 (would result in display flicker).
    The maximum allowed value = (2^31)-1.

    \note
    The swap interval will be ignored if the display attribute ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT is set to ::CYGFX_TRUE and ::CyGfx_DispCommit() is used to apply changes.

    \note
    Note that a high value will also defer window operations like closing the window for that period.
    It is recommended not to use a value > 60. */
#define CYGFX_WIN_ATTR_MAX_BUFFER              ((CYGFX_WIN_ATTR)(10)) /**< Defines the maximum number of frame buffers that can be queued by the driver for a window.
    If an application submits surfaces using ::CyGfx_WinSetSurface() and ::CyGfx_WinCommit() faster than they can be displayed, the driver queues them up to the maximum specified by ::CYGFX_WIN_ATTR_MAX_BUFFER.
    This attribute is read-only. */
#define CYGFX_WIN_ATTR_FILTER                  ((CYGFX_WIN_ATTR)(11)) /**< This attribute can be used to define the filter setting for a window with an enabled scale or subpixel movement matrix, or for windows with active warping properties. See ::CYGFX_GEN_FILTER for possible filter values.
    The default value is ::CYGFX_GEN_FILTER_BILINEAR.

    \note
    The bilinear filter is available only if the ::CYGFX_DISP_FEATURE_WARP or ::CYGFX_DISP_FEATURE_UPSCALE features are requested. For other windows, filter settings are ignored. */
#define CYGFX_WIN_ATTR_TILE_MODE               ((CYGFX_WIN_ATTR)(12)) /**< This attribute can be used
    to define the tile mode for windows. If the surface set to the window has
    its own color buffer, the tile mode defines the color of
    pixels outside the surface but inside the window. This is relevant if the
    assigned surface is smaller than the window or if the geometry matrix for
    the window moves the surface out of the window. The tile mode must be a
    value of ::CYGFX_DISP_TILE_MODE. The default value is ::CYGFX_DISP_TILE_MODE_CLIP.
    If the surface set to the window has no color buffer, the tile mode
    defines the color of pixels inside the surface. The pixels are 0 if tile
    mode is ::CYGFX_DISP_TILE_MODE_ZERO; the pixels use window color if tile
    mode is not ::CYGFX_DISP_TILE_MODE_ZERO.

    Tip: The ::CYGFX_DISP_TILE_MODE_PAD mode can be used to generate a gradient
    background with a single-line surface.

    \note
    ::CYGFX_DISP_TILE_MODE_PAD cannot be used with compressed surfaces and with
    YUV surfaces. In this case, ::CYGFX_DISP_TILE_MODE_ZERO is used.
    Surfaces with address 0 always use ::CYGFX_DISP_TILE_MODE_CLIP. */
#define CYGFX_WIN_ATTR_FEATURE                 ((CYGFX_WIN_ATTR)(13)) /**< This is a read-only attribute.
    It returns the available features for the given window handle.
    An application must use the features parameter of the ::CYGFX_DISP_WINDOW_PROPERTIES_S structure to request a window feature when creating the window. */
#define CYGFX_WIN_ATTR_GAMMA                   ((CYGFX_WIN_ATTR)(14)) /**< Gamma conversion.
    The related parameter can be one of the following:
    - ::CYGFX_DISP_GAMMA_NEUTRAL (default)
    - ::CYGFX_DISP_GAMMA_REMOVE

    \note
    To get high-quality layer blending results, set the ::CYGFX_DISP_GAMMA_ADD display attribute and the ::CYGFX_DISP_GAMMA_REMOVE window attribute for all attached windows. */
#define CYGFX_WIN_ATTR_OTF_MIN_AVAILABLE_LINES ((CYGFX_WIN_ATTR)(15)) /**< This attribute shows the minimal number of available lines in the line buffer that can be read by the display.
    This attribute is read-only and available only for OTF windows.
    - A value smaller than 8 is critical. If more than one OTF windows are running in parallel, the critical threshold may be higher, which means that each OTF window may need a bigger line buffer.
    Assign a surface with more lines using ::CyGfx_WinSetSurface() and ::CyGfx_BeBindSurface().
    - A value = 0 may indicates a buffer underrun.
    - The value provided before the first ::CyGfx_WinCommit() is not valid.
    - The value provided by the first two reads are not valid. */
#define CYGFX_WIN_ATTR_OTF_WARP_KEEPLINES ((CYGFX_WIN_ATTR)(16))      /**< Maximum vertical difference of a warping distortion.
    The default value is 0.
    \note
    - This attribute must be set to use an OTF warping window (window with feature CYGFX_DISP_FEATURE_OTF_WIN_PRIO_X and CYGFX_DISP_FEATURE_WARP).
    - It must be set to a non-zero value before the first ::CyGfx_WinCommit() is called; it cannot be changed later.
    - The warping buffer parameter KeepLines of ::CYGFX_WARP_PARAM_S must not be greater than CYGFX_WIN_ATTR_OTF_WARP_KEEPLINES. */
/** \} */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/** \name Window Functions
 * \{
 */


/**
    All window-related updates will be written in a work item.
    CyGfx_WinCommit() submits the work item of a window for processing.
    By default, this function is blocked until the previous operations of the device
    window are completely executed.
    Use ::CyGfx_ConfigSetAttribute() to set ::CYGFX_CONFIG_ATTR_DISPLAY_NOBLOCK to
    1 to make it non-blocking.

    \note
    If the ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT display attribute is ::CYGFX_TRUE,
    CyGfx_WinCommit() will report an error if another window of the same display
    controller is in a non-committed open or close state.

    \param [in] win  A  ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate()

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER One of the parameters is invalid.


    \retval ::CYGFX_ERP_ERR_DISP_DEV_BUSY The writing to the device window is
            denied because the previous commit, create, or destroy call is not completely
            executed (e.g., shadow load request is pending). Call again later.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinCommit( CYGFX_WINDOW win);

/**
    Destroys a window.
    By default, this function is blocked until the previous operations of the device
    display and device window are completely executed.
    Use ::CyGfx_ConfigSetAttribute() to set ::CYGFX_CONFIG_ATTR_DISPLAY_NOBLOCK to 1
    to make it non-blocking.
    - If the ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT attribute is ::CYGFX_FALSE, the
    windows will be destroyed on hardware.
    - If the ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT attribute is ::CYGFX_TRUE, only
    the window close will be prepared but not executed on hardware.
    The window will be freed for a CyGfx_DispWinCreate() call in this case and the
    new setting will be applied with the next ::CyGfx_DispCommit() call.
    A ::CyGfx_WinCommit() call will return an error.
    - See also \ref cygfx_display_commit.
    - For OTF windows (feature CYGFX_DISP_FEATURE_OTF_WIN_PRIO_x), a closed window
    (::CyGfx_WinDestroy), can be reopened again (::CyGfx_DispWinCreate) after at
    least two frames (::CyGfx_DispGetVSync and ::CyGfx_SyncWaitSync).

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate()

    \retval  ::CYGFX_OK On success
    \retval  ::CYGFX_ERP_ERR_DISP_WRONG_STATE The window is already in either open
             or close state. Use CyGfx_DispCommit() first.
    \retval ::CYGFX_ERP_ERR_DISP_WRONG_ON_THE_FLY_SETUP Store surface does not have
            enough lines for the warp buffer
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinDestroy( CYGFX_WINDOW win);

/**
    Gets the value for the \a pname attribute. \a win specifies the window for
    which the attribute should be retrieved.

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate()
    \param [in] pname  Parameter name. See ::CYGFX_WIN_ATTR for valid values.
    \param [out] pParam  Address where the read value of the attribute is stored

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_WIN_CLOSED The function is called with a window
            parameter that is currently closed.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
            invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinGetAttribute( CYGFX_WINDOW   win,
                                                CYGFX_WIN_ATTR pname,
                                                CYGFX_U32*     pParam);

/**
    Requests a sync object from the window pipeline.
    The sync object will be signaled after the preceding ::CyGfx_WinCommit() or
    ::CyGfx_DispWinCreate() has been processed.

    \note
    This function is not available for windows with the
    ::CYGFX_DISP_FEATURE_CAPTURE feature.

    \note
    The sync object must be a pointer of a ::CYGFX_SYNC_OBJECT_S.

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate().
    \param [out] sync  Sync object. After the successful completion of
                       ::CyGfx_WinGetSync(), it holds the parameter of the inserted sync.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
            invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinGetSync( CYGFX_WINDOW win,
                                           CYGFX_SYNC   sync);

/**
    Sets the \a pname attribute to \a param. \a win specifies the window the
    attribute should be set for.

    \note
    Attribute settings of the window do not become active immediately with the
    related ::CyGfx_WinSetAttribute() call, but will be queued together with other
    settings of this window.
    Use ::CyGfx_WinCommit() to submit these settings for processing.

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate().
    \param [in] pname  Parameter name. See ::CYGFX_WIN_ATTR for valid values.
    \param [in] param  Value to set for the parameter pname.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_DISP_WIN_CLOSED The function is called with a window
            parameter that is currently closed.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
            invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinSetAttribute( CYGFX_WINDOW   win,
                                                CYGFX_WIN_ATTR pname,
                                                CYGFX_U32      param);

/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In Doxygen comments, the character sequences such as double slash are used.
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
/**
    This function controls the alpha channel modification of the display inside the
    window dimension.
    The alpha channel of the display can be used to include (alpha value is 255) or
    exclude (all other alpha values) the pixel from signature calculation or gamma
    correction (see ::CyGfx_DispClutAlpha()).
    The signature unit can be used by another driver, for example the TRAVEO(TM) T2G
    Cluster Series FsSigDrv software.
    This function controls only additional alpha values for this layer.

    The previous alpha values resulting from background color (
    ::CYGFX_DISP_ATTR_BACKGROUND_COLOR) and from previous layers.
    \code
    Ad:   Resulting source alpha
    See CyGfx_WinSetBlendMode() description (for scaled windows Ad = 1)
    Adst: (Blend) destination alpha
    Aout: Output alpha from this layer blend unit
    if (alpha_mode == CYGFX_WIN_ALPHA_CTRL_DST)
    Aout = Adst;
    else if (alpha_mode == CYGFX_WIN_ALPHA_CTRL_SRC)
    Aout = Ad;
    else  //alpha_mode == CYGFX_WIN_ALPHA_CTRL_BLEND
    Aout = Ad + Adst * (1-Ad);
    \endcode

    \note
    - ::CyGfx_WinSetAlphaMode() cannot be set differently for sub windows with the
    same layer ID.
    Therefore, changing one subwindow will change this setting for all windows with
    the same layer.
    - Blend mode settings of the window do not become active immediately with the
    related CyGfx_WinSetAlphaMode() call, but will be queued together with other
    settings of this window. See also \ref cygfx_display_commit.
    - If a window is scaled (the ::CYGFX_DISP_FEATURE_UPSCALE or
    ::CYGFX_DISP_FEATURE_CAPTURE feature), no source alpha is available.

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate().
    \param [in] alpha_mode  The blend mode-related parameter can be one of the
                            following:
                            - ::CYGFX_WIN_ALPHA_CTRL_DST
                            - ::CYGFX_WIN_ALPHA_CTRL_SRC
                            - ::CYGFX_WIN_ALPHA_CTRL_BLEND (default)

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If an invalid argument was passed.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinSetAlphaMode( CYGFX_WINDOW         win,
                                                CYGFX_WIN_ALPHA_CTRL alpha_mode);

/**
    Sets the blending mode.

    \code
    Csrc: Source color
    Asrc: Source alpha
    Agbl: Global alpha
    Aext: External alpha
    Cdst: (Blend) destination color (alpha value of the destination is not used)
    Ctrans: Transparency color
    Cout: Output color from this layer blend unit
    As = 1;
    if (((mode & CYGFX_WIN_BLEND_TRANSPARENCY) ==
                           CYGFX_WIN_BLEND_TRANSPARENCY) &&
        (Ctrans == Csrc))
        As = 0;
    if ((mode & CYGFX_WIN_BLEND_GLOBAL_ALPHA) ==
                         CYGFX_WIN_BLEND_GLOBAL_ALPHA)
        As = As * Agbl;
    if ((mode & CYGFX_WIN_BLEND_EXTERN_ALPHA) ==
                         CYGFX_WIN_BLEND_EXTERN_ALPHA)
        As = As * Aext;
        Ad = As;
    if ((mode & CYGFX_WIN_BLEND_SOURCE_ALPHA) ==
                         CYGFX_WIN_BLEND_SOURCE_ALPHA)
         Ad = Ad * Asrc;
    if ((mode & CYGFX_WIN_BLEND_SOURCE_MULTIPLY_ALPHA) ==
                          CYGFX_WIN_BLEND_SOURCE_MULTIPLY_ALPHA)
        As = As * Asrc;
        Cout = Csrc * As + Cdst * (1 - Ad);
    \endcode

    \note
    - Blend mode settings of the window do not become active immediately with the
    related CyGfx_WinSetBlendMode() call, but will be queued together with other
    settings of this window.
    See also \ref cygfx_display_commit.
    - Transparency is not supported for the YUV format.
    - If the ::CYGFX_WIN_BLEND_EXTERN_ALPHA blend mode is selected, it must be a
    window with the ::CYGFX_DISP_FEATURE_EXTERN_ALPHA feature, and an alpha buffer
    must be set by the previous call of ::CyGfx_WinSetSurface with
    ::CYGFX_DISP_BUFF_TARGET_EXTERN_ALPHA as the target.
    - If the ::CYGFX_WIN_BLEND_TRANSPARENCY blend mode is selected, set the
    transparency color by ::CyGfx_WinSetAttribute with the ::CYGFX_WIN_ATTR_COLOR
    attribute.
    - If ::CYGFX_WIN_BLEND_GLOBAL_ALPHA blend mode is selected, set the global
    alpha ratio by CyGfx_WinSetAttribute() with the ::CYGFX_WIN_ATTR_COLOR
    attribute.
    - If a window is scaled (the ::CYGFX_DISP_FEATURE_UPSCALE or
    ::CYGFX_DISP_FEATURE_CAPTURE feature), only the ::CYGFX_WIN_BLEND_NONE and
    ::CYGFX_WIN_BLEND_GLOBAL_ALPHA blend modes are allowed.

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate().
    \param [in] blend_mode  Blend mode-related parameter can be a bit field
                            combination of the following:
                            - ::CYGFX_WIN_BLEND_NONE = Disable blending (default)
                            - ::CYGFX_WIN_BLEND_TRANSPARENCY = Enable transparency
                            - ::CYGFX_WIN_BLEND_GLOBAL_ALPHA = Enable global alpha blending
                            - ::CYGFX_WIN_BLEND_SOURCE_ALPHA = Enable per-pixel source alpha blending
                            - ::CYGFX_WIN_BLEND_EXTERN_ALPHA = Enable per-pixel external alpha layer
                            blending
                            - ::CYGFX_WIN_BLEND_SOURCE_MULTIPLY_ALPHA = Enable source alpha multiplication
                            The default blend mode is ::CYGFX_WIN_BLEND_NONE.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If an invalid argument was passed.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinSetBlendMode( CYGFX_WINDOW    win,
                                                CYGFX_WIN_BLEND blend_mode);

/**
    The Capture-to-window mode feature is not working as expected; you should not use this feature.
    Binds a previously opened capture stream to a window and shows the content.
    \note
    - The settings of the capture window do not become active immediately with the
    related CyGfx_WinSetCapture() call, but will be queued together with other
    settings of this window.
    See also \ref cygfx_display_commit.
    - It is not possible to set a capture stream to a non-video layer.
    A video layer is a window that has been created with
    ::CYGFX_DISP_FEATURE_CAPTURE as the feature request.
    - The window must lie entirely inside the active display area; otherwise
    tearing might occur.
    If the ring buffer specified by ::CyGfx_CapAssignCapToWinBuffer() is too small
    to allow uncompressed storage and the window overlaps the right or lower
    display boundary, ::CyGfx_WinCommit() will return an error.
    - The video window will not show the correct content with the first frame.
    The ring buffer handling requires up to four frames to become stable.
    To avoid displaying wrong frames, it is a good practice to hide the window
    after creating it and show it when it is stable (e.g., by using
    ::CyGfx_WinSetBlendMode() with the ::CYGFX_WIN_BLEND_GLOBAL_ALPHA blend_mode and
    ::CyGfx_WinSetAttribute() with the ::CYGFX_WIN_ATTR_COLOR attribute).

    Changes like the window position and size, or reopening of the capture window
    also restart the ring buffer mechanism and cause some corrupted capture frames
    that should be hidden.

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate()
    \param [in] capHandle  A ::CYGFX_CAP_CTX handle returned from a previous call
                           to ::CyGfx_CapOpen(),
                           identifying the capture stream which will be shown in this window
                           capHandle=0 unbinds the capture stream from the window.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_WIN_INVALID_PARAMETER If an invalid argument was passed
    or configured in TVIIC2D6MDDR
    \retval ::CYGFX_ERP_ERR_WIN_NO_CAPTURE_STREAM If (\a capHandle = 0) and no
    capture stream is currently bound to this window
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinSetCapture( CYGFX_WINDOW  win,
                                              CYGFX_CAP_CTX capHandle);

/**
    Sets the transformation matrix on the window color buffer and/or the external
    alpha buffer for scaling, rotation, translation, and flipping.
    The formula for the transformation based on this matrix is:
    \code
    xout = matrix[0] * x + matrix[2] * y + matrix[4]
    yout = matrix[1] * x + matrix[3] * y + matrix[5]
    \endcode

    If matrix = NULL, the following data is set in the transformation matrix:
    \code
    / matrix[0] matrix[2] matrix[4] \      / 1.0 0.0 0.0 \
                                                        =
    \ matrix[1] matrix[3] matrix[5] /      \ 0.0 1.0 0.0 /
    \endcode

    \note
    - The matrix settings of the window do not become active immediately with the
    related ::CyGfx_WinSetGeoMatrix() call, but will be queued together with other
    settings of this window. See also \ref cygfx_display_commit.
    - The allowed matrix properties depend on the applied window features.
    A basic matrix is:

    \code
    /  u 0 xoffset \
    \  0 v yoffset /
    \endcode

    or

    \code
    /  0 u xoffset \
    \  v 0 yoffset /
    \endcode

    with u and v element of {-2.0, -1.0, -0.5, 0.5, 1.0, 2.0}

    - This allows:
    - scaling with two factors (0.5 and 2.0)
    - rotation in steps of 90 degrees
    - mirroring on the x-axis and/or y-axis
    - translation
    - combinations of these options

    For example:
    \code
    /  -2.0 0.0 xoffset \
    \   0.0 2.0 yoffset /
    \endcode

    for scaling by 2.0 plus mirroring on y-axis.

    - A rotation by 90 or 270 degrees results in performance drop especially if the
    source is not read from VRAM (recommendation is to use VRAM).
    - If the ::CYGFX_DISP_FEATURE_WARP feature is in use, the matrix degenerates to:





    \code
    /  1.0 0.0 0.0 \
    \  0.0 1.0 0.0 /
    \endcode

    - If the ::CYGFX_DISP_FEATURE_DECODE feature is in use, the matrix degenerates
    to:

    \code
    /  1.0 0.0 xoffset \
    \  0.0 1.0 yoffset /
    \endcode

    with xoffset and yoffset so that the complete surface is inside the window.

    \note
    - If the ::CYGFX_DISP_FEATURE_MULTI_LAYER feature is in use, the matrix
    elements [0], [1], [2] and [3] need to be identical for every subwindow.
    - If the ::CYGFX_DISP_FEATURE_UPSCALE feature is in use, the matrix expands to:



    \code
    /  u 0 xoffset \
    \  0 v yoffset /
    \endcode

    where u and v must be in the range [-32.0, -1.0] or [1.0, 32.0].

    For example:
    \code
    /  2.0 0.0 xoffset \
    \  0.0 3.0 yoffset /
    \endcode

    If xoffset and/or yoffset are not integers, subpixel filtering is applied even
    if u and v are 1 (no scaling) provided that ::CYGFX_GEN_FILTER_BILINEAR is
    enabled.

    \note
    - The same options and limitations of a matrix apply for both targets (
    ::CYGFX_DISP_BUFF_TARGET_COLOR_BUFF and ::CYGFX_DISP_BUFF_TARGET_EXTERN_ALPHA).
    However, the matrices for both targets do not need to be identical.
    - Downscaling is not supported by the display (with the exceptions listed
    above).
    - The external alpha buffer cannot be scaled.
    - A YUV buffer cannot be scaled.
    - A buffer larger than the window will be cut to fit the window size.
    - A YUV buffer cannot be cut to odd pixel width.
    - For the window which is connected with a capture (::CyGfx_WinSetCapture()),
    setting this matrix will not have any effect.

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate().
    \param [in] target  The target where the matrix is set to.
                        The related parameter can be a bit field combination of the following:
                        - ::CYGFX_DISP_BUFF_TARGET_COLOR_BUFF = Color buffer as the target
                        - ::CYGFX_DISP_BUFF_TARGET_EXTERN_ALPHA = External alpha buffer as the target
    \param [in] matrix  Transformation 3x2 matrix for scaling, rotation,
                        translation, and flipping.
                        Note: The matrix must not be singular. (The matrix must have an inverse matrix).

                        Otherwise, the window will be hidden.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER The specified target parameter
            is invalid.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_WINDOW Operation is not supported on OTF
            windows.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinSetGeoMatrix( CYGFX_WINDOW       win,
                                                CYGFX_U32          target,
                                                const CYGFX_FLOAT* matrix);

/**
    Shows the surface content on a previously opened window.
    \note
    - The function will not be executed immediately but will be queued together
    with other modifications of this window.
    See also \ref cygfx_display_commit.
    - If the surface uses a YUV color space, the window must be created with the
    YUV feature ::CYGFX_DISP_FEATURE_YUV1BUFF; otherwise an error will be
    returned.
    - If ::CYGFX_DISP_BUFF_TARGET_EXTERN_ALPHA is selected as the target buffer,
    the window must be created with the ::CYGFX_DISP_FEATURE_EXTERN_ALPHA feature.
    - For a YUV surface (e.g., ::CYGFX_SM_FORMAT_YVYU422 and
    ::CYGFX_SM_FORMAT_VYUY422), the driver will automatically select a color matrix
    according to the surface color space ::CYGFX_SM_COLOR_SPACE to convert YUV to
    the RGB color format.
    However, if a user-defined color matrix is set using ::CyGfx_CmSetColorMatrix(),

    the YUV format will be converted according to  the user-defined color matrix.
    - For a compressed surface, the surface must not overlap the
    display boundary.
    - For OTF windows (feature CYGFX_DISP_FEATURE_OTF_WIN_PRIO_x), the surface
    height must be a power of 2. The surface height is at least one slice (16
    lines) and at most (2 * window height - 1).
    Do not change the surface when the OTF window is still active. If the surface
    height (line buffer size) must be changed, first, close the OTF window (
    ::CyGfx_WinDestroy), wait at least two frames (::CyGfx_DispGetVSync and
    ::CyGfx_SyncWaitSync), reopen the window (::CyGfx_DispWinCreate) again, and  then
    set the new surface.
    \note
    - When indexed colors ("color palettes"; requires
    ::CYGFX_DISP_FEATURE_INDEX_COLOR) are used for sublayer windows within a layer
    (requires ::CYGFX_DISP_FEATURE_MULTI_LAYER), it is recommended all sub-windows request
    ::CYGFX_DISP_FEATURE_INDEX_COLOR even if not all sub-windows use indexed colors.
    - The color palette has a maximum of 256 entries. This applies for a color
    index width of 8.  Color index width is defined by the width of red in
    ::CYGFX_SM_ATTR_COLORBITS.

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate().
    \param [in] target  The target where the surface is set to.
                        The related parameter can be one of the following:
                        - ::CYGFX_DISP_BUFF_TARGET_COLOR_BUFF = Color buffer as the target
                        - ::CYGFX_DISP_BUFF_TARGET_EXTERN_ALPHA = External alpha buffer as the target
                        - The combination of the color buffer and alpha buffer (
                        ::CYGFX_DISP_BUFF_TARGET_COLOR_BUFF | ::CYGFX_DISP_BUFF_TARGET_EXTERN_ALPHA) is
                        not valid.
    \param [in] surf  The ::CYGFX_SURFACE object to show.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If an invalid argument was passed.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinSetSurface( CYGFX_WINDOW  win,
                                              CYGFX_U32     target,
                                              CYGFX_SURFACE surf);

/**
    Sets the warp buffer.
    Either a virtual address or a physical address can be used to indicate the
    buffer address.
    If both addresses are ::NULL, the warping feature will be shut off.    See also
    \ref cygfx_display_commit.

    \note
    The changes are also applied to all other (sub-) windows with the same layer ID.

    \note
    If the dimension of warping is smaller than  the display resolution, 
    the upper left area shows the warped buffer.

    \note
    The address (\a pAdd or \a pPhyAdd) must be 32-bit aligned.

    \note
    For an OTF window (window with feature CYGFX_DISP_FEATURE_OTF_WIN_PRIO_X), the
    ::CYGFX_WIN_ATTR_OTF_WARP_KEEPLINES attribute must be set before
    ::CyGfx_WinCommit() is called.
    The warping buffer parameter KeepLines of pWarpParam must not be greater than
    ::CYGFX_WIN_ATTR_OTF_WARP_KEEPLINES, and it must not be smaller than the
    vertical distortion range defined by the warping coordinates.
    Warping coordinates that cause large vertical distortions, for example by
    rotation, are  not suitable for OTF windows.

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate().
    \param [in] pWarpParam  Warp coordinate buffer parameters.
    \param [in] pAdd  Virtual address of the warp buffer.
    \param [in] pPhyAdd  Physical address of the warp buffer.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
            invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinSetWarpBuffer( CYGFX_WINDOW              win,
                                                 const CYGFX_WARP_PARAM_S* pWarpParam,
                                                 const void*               pAdd,
                                                 const void*               pPhyAdd);

/**
    Inserts a sync wait into the window pipeline.
    ::CyGfx_WinCommit() operations performed after this call are executed only
    after the sync gets signaled.
    CyGfx_WinWaitSync() must be called only once before a call to
    ::CyGfx_WinCommit().

    \note
    This function is not available for windows with the
    ::CYGFX_DISP_FEATURE_CAPTURE feature.

    \note
    This function is not available for windows with the
    CYGFX_DISP_FEATURE_OTF_WIN_PRIO_X feature.

    \note
    The sync object must be a pointer of a ::CYGFX_SYNC that was initialized by
    ::CyGfx_SyncReset() or a function that "defines" a sync condition.
    See \ref bgd_sync.

    \param [in] win  The window to apply the wait condition.
    \param [in] sync  Sync object to wait for.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
            invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WinWaitSync( CYGFX_WINDOW win,
                                            CYGFX_SYNC   sync);


/** \} end Window Functions */


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_WINDOW_H */
