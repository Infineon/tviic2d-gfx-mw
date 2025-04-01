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
 * \file    gccgfx_win.h
 */


#ifndef GCCGFX_WIN_H
#define GCCGFX_WIN_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_WIN_OPEN ((CYGFX_U08)0x20u)  /**< Flag indicating Window open status */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/**
    Initialize the Win component.

    \retval None
**/
CYGFX_EXTERN void GccGfx_WinInit(void);
/**
    Prepare window creation.
    The resources are allocated and the window properties are set, but the hardware
    is not yet configured.
    Depending on the Commit property configuration (see
    ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT),
    the HW configuration is done in ::CyGfx_DispWinCreate() directly after this
    function was called or deferred to the next ::CyGfx_DispCommit() together with
    other window changes. Called by ::CyGfx_DispWinCreate().

    \param [in] pDisp  Pointer of GCCGFX_IRIS_DISPLAY_S, returned from a previous
                       call to::CyGfx_DispOpenDisplay(), identifying the display to create the window
                       on.
    \param [in] properties  A pointer to an ::CYGFX_DISP_WINDOW_PROPERTIES_S
                            structure which specifies the properties of the window to create.
    \param [out] pWin  On success will contain an ::CYGFX_WINDOW handle.
    \param [out] ppWindow  On success will contain a pointer to the window
                           description.
    \param [out] pbConfigurePath  Pointer to a boolean variable that tells whether
                                  the pipeline needs reconfiguration.
                                  (This is not the case, if a sublayer of an already configured layer can be used.
                                  )

    \retval ::CYGFX_OK Success
    \retval ::CYGFX_ERP_ERR_DISP_LAYER_ALREADY_USED No matching unused window found.
    \retval ::CYGFX_ERP_ERR_DISP_FAILED Resource not available.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_WinPrepareCreate( GCCGFX_IRIS_DISPLAY_S*                pDisp,
                                                  const CYGFX_DISP_WINDOW_PROPERTIES_S* properties,
                                                  CYGFX_WINDOW*                         pWin,
                                                  GCCGFX_IRIS_WINDOW_S**                ppWindow,
                                                  CYGFX_BOOL*                           pbConfigurePath);

/**
    Actually create a window in HW by configuring the pipeline with regard to the
    corresponding layer blend and fetch.
    This is called either by ::CyGfx_DispWinCreate() or by the following
    ::CyGfx_DispCommit(),
    depending on the configuration of ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT.

    \param [in] cardHandle  Card handle for the Display device.
    \param [in] pDisp  Pointer to the display.
    \param [in] pWindow  Pointer to the window description.

    \retval None
**/
CYGFX_EXTERN void GccGfx_WinExeCreate( GCCGFX_CARD_HANDLE           cardHandle,
                                       const GCCGFX_IRIS_DISPLAY_S* pDisp,
                                       GCCGFX_IRIS_WINDOW_S*        pWindow);

/**
    Perform the windows committing for ::CyGfx_WinCommit() or ::CyGfx_DispCommit(),
    depending on the configuration of ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT.
    It abstracts the ::Gfx_WinUpdateWindow call (HW access) from capture handling.

    \param [in] cardHandle  Card handle for the Display device.
    \param [in] pWindow  Pointer to the window description.

    \retval ::CYGFX_OK On success, related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_WinExeCommit( GCCGFX_CARD_HANDLE    cardHandle,
                                              GCCGFX_IRIS_WINDOW_S* pWindow);

/**
    Actually destroy a window by detaching it from the pipeline.
    Depending on the Commit property configuration (see
    ::CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT),
    this function is either called by ::CyGfx_WinDestroy() directly or by the next
    call to ::CyGfx_DispCommit() or ::CyGfx_DispCloseDisplay().

    \param [in] cardHandle  Card handle for the Display device.
    \param [in] pWindow  Pointer to the window dwscription structure.

    \retval ::CYGFX_OK On success, the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_WinExeDestroy( GCCGFX_CARD_HANDLE    cardHandle,
                                               GCCGFX_IRIS_WINDOW_S* pWindow);

/**
    Sets a color matrix for a window.
    \note
    Matrix settings of the window do not become active immediately with the
    related
    ::CyGfx_WinSetColorMatrix() call, but will be queued together with other
    settings of this window.
    See also \ref cygfx_display_commit.

    \note
    The function is available only if the window was created by
    ::CyGfx_DispWinCreate() with the ::CYGFX_DISP_FEATURE_COLOR_MATRIX feature bit.
    \note If a color matrix is set using ::CyGfx_WinSetColorMatrix(), the
    driver's internal automatic YUV-to-RGB conversion will be shut off.
    The YUV color will be converted according to the user-defined color matrix.

    \note
    The alpha part of the matrix output affects only the destination blend.

    for more information please refer to ::CyGfx_CmSetColorMatrix()

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate()
    \param [in] format  Defines the color matrix format.
                        This value must be::CYGFX_CM_CMATRIX_FORMAT_4X3 or
                        ::CYGFX_CM_CMATRIX_FORMAT_5X4.
    \param [in] pMatrix  The matrix values is a float array.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_WINDOW If the feature is not supported by
            the given window
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If one of the parameters is
            invalid
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_WinSetColorMatrix( CYGFX_WINDOW            win,
                                                   CYGFX_CM_CMATRIX_FORMAT format,
                                                   const CYGFX_FLOAT*      pMatrix);

/**
    Used to configure the color lookup table (CLUT) on the window for gamma
    correction.
    The 10-bit-wide entries of each color component of CLUT can be written;
    the number of the entries depends on the format.
    If one pointer of color components is NULL, the CLUT is set to bypass.
    The ::CYGFX_CM_CLUT_FORMAT_33 format defines 33 sample points representing the
    resulting color channel intensity.
    For information on how to define the sample points, see ::CyGfx_CmSetClutData().

    \note
    This setting will not be active immediately. See also \ref cygfx_display_commit.

    \note
    The three pointers to the array of color components must be valid until the
    setting is committed.
    \note
    The function is available only if the window was created by
    ::CyGfx_DispWinCreate() with the ::CYGFX_DISP_FEATURE_IMAGE_PROCESSING feature
    bit.
    For more information please refer to ::CyGfx_CmSetClutData()

    \param [in] win  A ::CYGFX_WINDOW returned from a previous call to
                     ::CyGfx_DispWinCreate()
    \param [in] format  Defines the number of entries in the array.
                        Depending on the hardware, the CLUT hardware may not support all format types.
                        In this case, the driver interpolates the missing or skips the values that are
                        not required.
    \param [in] pRed  Pointer to the array of red values. The size of the array
                      depends on the format.
    \param [in] pGreen  Pointer to the array of green values. The size of the array
                        depends on the format
    \param [in] pBlue  Pointer to the array of blue values. The size of the array
                       depends on the format

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER If an invalid argument was
            passed
    \retval ::CYGFX_ERP_ERR_DISP_FAILED If an unexpected error occurs
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_WinClutData( CYGFX_WINDOW         win,
                                             CYGFX_CM_CLUT_FORMAT format,
                                             const CYGFX_S16*     pRed,
                                             const CYGFX_S16*     pGreen,
                                             const CYGFX_S16*     pBlue);

/**
    Check parameters for window creation:
    - Validity of window and property pointers.
    - Window width and height.
    - Window output screen.
    - Window layer and sublayer ID.
    - Window features.

    \param [in] pDisp  Pointer to a display data structure.
    \param [in] properties  A pointer to an ::CYGFX_DISP_WINDOW_PROPERTIES_S
                            structure which specifies the properties of the window to create.
    \param [in] pWin  Pointer to a window structure. Checked to be different from
                      NULL.

    \retval ::CYGFX_OK Success
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER Invalid argument
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_WinCheckParam( const GCCGFX_IRIS_DISPLAY_S*          pDisp,
                                               const CYGFX_DISP_WINDOW_PROPERTIES_S* properties,
                                               const CYGFX_WINDOW*                   pWin);

/**
    Retrieve window description for a window object.

    \param [in] windowID  Window Id (handle).
    \param [out] ppWin  Pointer to a variable that receives the pointer to the
                        window description.

    \retval None
**/
CYGFX_EXTERN void GccGfx_WinGetWindowNoCheck( CYGFX_U32              windowID,
                                           GCCGFX_IRIS_WINDOW_S** ppWin);

/**
    Reset window description to default values.
    Called when a window is created or destroyed and on driver start.

    \param [in] pWin  Window object (handle).
    \param [in] include_del  Also reset the "delete" flags for the window (only
                             done at driver start).

    \retval None
**/
CYGFX_EXTERN void GccGfx_WinResetWindow( GCCGFX_IRIS_WINDOW_S* pWin,
                                         CYGFX_BOOL            include_del);

/**
    Map OTF window feature to blit engine task.

    \param [in] feature  OTF window feature.

    \retval Task id
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_WinFeatureToTask( CYGFX_U32 feature);

/**
    Determine shadow load request mask for a window handle.
    The shadow load mask includes the fetch unit and the second fetch unit (if
    required).
    In case the window is removed or added because of a change in the disable
    attribute.

    \param [in] win  Window ID

    \retval Required shadow load mask for the window
**/
CYGFX_EXTERN CYGFX_U64 GccGfx_WindowIdToSHDLD( CYGFX_U32 win);


/**
    Map OTF window feature to resource name used by Resource Manager.

    \param [in] feature  OTF window feature.

    \retval Corresponding resource name
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_WinFeatureToResID(CYGFX_U32 feature);


/**
    Map fetch id to OTF window resource.

    \param [in] fetch_id  fetch id

    \retval Corresponding resource name

**/
CYGFX_EXTERN CYGFX_U32 GccGfx_WinFetchToOTFRes(GCCGFX_GEN_SEL_E fetch_id);

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_WIN_H */

