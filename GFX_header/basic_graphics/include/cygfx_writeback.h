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

