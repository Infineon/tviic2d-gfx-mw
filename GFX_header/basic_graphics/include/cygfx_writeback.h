/*******************************************************************************
* (c) 2019-2026, Infineon Technologies AG, or an affiliate of Infineon         *
* Technologies AG. All rights reserved.                                        *
* This software, associated documentation and materials ("Software") is        *
* owned by Infineon Technologies AG or one of its affiliates ("Infineon")      *
* and is protected by and subject to worldwide patent protection, worldwide    *
* copyright laws, and international treaty provisions. Therefore, you may use  *
* this Software only as provided in the license agreement accompanying the     *
* software package from which you obtained this Software. If no license        *
* agreement applies, then any use, reproduction, modification, translation, or *
* compilation of this Software is prohibited without the express written       *
* permission of Infineon.                                                      *
*                                                                              *
* Disclaimer: UNLESS OTHERWISE EXPRESSLY AGREED WITH INFINEON, THIS SOFTWARE   *
* IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,         *
* INCLUDING, BUT NOT LIMITED TO, ALL WARRANTIES OF NON-INFRINGEMENT OF         *
* THIRD-PARTY RIGHTS AND IMPLIED WARRANTIES SUCH AS WARRANTIES OF FITNESS FOR A*
* SPECIFIC USE/PURPOSE OR MERCHANTABILITY.                                     *
* Infineon reserves the right to make changes to the Software without notice.  *
* You are responsible for properly designing, programming, and testing the     *
* functionality and safety of your intended application of the Software, as    *
* well as complying with any legal requirements related to its use. Infineon   *
* does not guarantee that the Software will be free from intrusion, data theft *
* or loss, or other breaches ("Security Breaches"), and Infineon shall have    *
* no liability arising out of any Security Breaches. Unless otherwise          *
* explicitly approved by Infineon, the Software may not be used in any         *
* application where a failure of the Product or any consequences of the use    *
* thereof can reasonably be expected to result in personal injury.             *
*******************************************************************************/
/*****************************************************************************/


/**
 * \file    cygfx_writeback.h
 */


#ifndef CYGFX_WRITEBACK_H
#define CYGFX_WRITEBACK_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup cygfx_writeback
* \code #include "cygfx_writeback.h" \endcode
* \brief The WriteBack API allows an application to store one frame of a
*        display stream in a surface buffer using the frame dump functionality.
*
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

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
    Dumps a single display frame into a surface.
    This function returns immediately. Use CyGfx_SyncWaitSync() to determine
    whether the frame dump is finished.

    \note
    The dump area size is determined by the surface dimensions.

    \note
    Functionality is not available if Capture-to-Surface or Capture-to-Window
    mode is used.

    \note
    The writeback is not available in slave mode because it is reserved by the Safety 
    Display Driver.

    \note
    On the TVIIC2D6MDDR device, frame dumping can cause errors during refresh or 
    retraining period of LPDDR4. 
    Frame dumping on Display Engine 0: Error occurs during some refreshes.
    Frame dumping on Display Engine 1: Error occurs during some refreshes 
    and all retrainings. This error can be detected by registering the  
    #CYGFX_INT_BANK0_VIDEOIO0_FRAMEDUMP_ERROR interrupt. After such errors, next frames 
    will be dumped correctly.

    \param [in] display  An ::CYGFX_DISP returned from a previous call to
                         CyGfx_DispOpenDisplay().
    \param [out] surf  The ::CYGFX_SURFACE object to save the frame
    \param [in] sync  Sync object that signals completion
    \param [in] offsetx  Horizontal offset of the dump area
    \param [in] offsety  Vertical offset of the dump area

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_WB_INVALID_PARAMETER Invalid argument was passed.
    \retval ::CYGFX_ERP_ERR_DISP_CLOSED Display is closed.
    \retval ::CYGFX_ERP_ERR_BE_INVALID_TARGET Invalid surface
    \retval ::CYGFX_ERP_ERR_BE_INVALID_SURFACE_OBJECT Invalid surface 
                                                      CYGFX_BE_SURF_MASK_ALPHA.
    \retval ::CYGFX_ERP_ERR_BE_INVALID_ADDRESS Wrong address.
    \retval ::CYGFX_ERP_ERR_BE_INVALID_STRIDE Invalid stride
    \retval ::CYGFX_ERP_ERR_BE_INVALID_DIMENSION Surface dimensions are 0.
    \retval ::CYGFX_ERP_ERR_WB_DEVICE_BUSY Requested hardware is in use.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_WbDumpFrame( CYGFX_DISP    display,
                                            CYGFX_SURFACE surf,
                                            CYGFX_SYNC    sync,
                                            CYGFX_U16     offsetx,
                                            CYGFX_U16     offsety);
/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_WRITEBACK_H */

