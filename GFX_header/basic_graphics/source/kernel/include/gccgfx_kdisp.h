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
 * \file    gccgfx_kdisp.h
 */


#ifndef GCCGFX_KDISP_H
#define GCCGFX_KDISP_H


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

/* N/A */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Initializes the DisplayK module.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kDispInit(void);

/**
    Interrupt Service Routine.
    Updates the fetch base address in Capture-to-Window mode.

    \param [in] controller  Display controller; must be 0 or 1.

    \retval None
**/
CYGFX_EXTERN CYGFX_INTERRUPT void GccGfx_kDispIsrFrameComplete( CYGFX_U32 controller);

/**
    Interrupt Service Routine.
    Increments the VSync Counter and switches the Display Buffer on Display VSync
    interrupt occurrence.

    \param [in] controller  Display controller; must be 0 or 1.

    \retval None
**/
CYGFX_EXTERN CYGFX_INTERRUPT void GccGfx_kDispIsrVSync( CYGFX_U32 controller);

/**
    Initializes kernel part of given display controller.

    \param [in] pInitData  Pointer to the Initialization data provided by user mode
                           part.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kDispSetup( GCCGFX_KDISP_INIT_KERNEL_S* pInitData);

/**
    Trigger an update in display unit.
    The wait condition must already be checked.

    \param [in] pWi  The work item to realize

    \retval None
**/
CYGFX_EXTERN void GccGfx_kDispProceed( GCCGFX_CARD_WORKITEM_S* pWi);

/**
    Trigger shadow load for specific entry in gfx_shd_trigger_list.

    \param [in] DispID  Display controller id.
    \param [in] mask  Set of entries in gfx_shd_trigger_list to be triggered.
                      Bit mask of GCCGFX_DISP_SHDLD_... values.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kDispTriggerShadowLoad( CYGFX_U32 DispID,
                                                 CYGFX_U64 mask);

/**
    This function provides shadow load status information to the caller
    and clears the shadow load error status.

    \param [out] pStatus  Pointer to a structure that is filled with
                          error load status information.

    \retval CYGFX_TRUE If a shadow load error was detected and shadow load error
            information was copied to the pStatus buffer.
    \retval CYGFX_FALSE If no shadow load error was detected and no shadow load
            error information was copied to the pStatus buffer.
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_kDispReadShadowLoadErrors( GCCGFX_KDISP_SHADOW_LOAD_ERROR_S* pStatus);

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_KDISP_H */

