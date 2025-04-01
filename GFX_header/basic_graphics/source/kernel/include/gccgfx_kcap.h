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
 * \file    gccgfx_kcap.h
 */


#ifndef GCCGFX_KCAP_H
#define GCCGFX_KCAP_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_kcap
* \brief Interface of CaptureK
* This is the OS independent part of the kernel space code of the capture module.
* It handles interrupts and the capture buffer management in capture-to-surface
* mode. The capture buffer management is described in the SW Architecture document.
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
    Interrupt Service Routine, called when capture SyncOn interrupt occurs.

    \retval None
**/
CYGFX_EXTERN CYGFX_INTERRUPT void GccGfx_kCapIsrSyncOn(void);

/**
    Interrupt Service Routine, called when capture SyncOff interrupt occurs.

    \retval None
**/
CYGFX_EXTERN CYGFX_INTERRUPT void GccGfx_kCapIsrSyncOff(void);

/**
    Interrupt Service Routine, called when Store Frame Complete interrupt occurs.
    Increments the VSync counter.
    Switches the capture buffer and stores the new buffer index in pCaptureCtx-
    >iNext in capture-to-surface buffer mode.

    \param [in] unit  Capture unit; must be ::CYGFX_CAP_UNIT_0.

    \retval None
**/
CYGFX_EXTERN CYGFX_INTERRUPT void GccGfx_kCapIsrFrameComplete( CYGFX_U32 unit);

/**
    Interrupt Service Routine, called when capture shadow registers are loaded.
    Used for capture-to-surface single buffer mode only.
    Capturing to the application provided buffer is stopped after one frame by
    setting buffer offset outside clip region.

    \retval None
**/
CYGFX_EXTERN CYGFX_INTERRUPT void GccGfx_kCapIsrShdLoad(void);

/**
    Initialize the kernel part of the capture driver for the capture unit.

    \param [in] pInitData  pointer to initialization data provided by user mode
                           part.

    \retval     None
**/
CYGFX_EXTERN void GccGfx_kCapInit( GCCGFX_KCAP_INIT_KERNEL_S* pInitData);

/**
    Locks the last captured buffer (prevents it from being overwritten by the
    capture unit) and returns the address of this buffer.

    \param [in] unit  Capture unit; must be ::CYGFX_CAP_UNIT_0.

    \retval Physical address of locked buffer.
**/
CYGFX_EXTERN CYGFX_ADDR GccGfx_kCapGetLastBuffer( CYGFX_U32 unit);

/**
    Trigger an update in CaptureK.
    The wait condition must already be checked.

    \param [in] pWi  The work item to realize

    \retval None
**/
CYGFX_EXTERN void GccGfx_kCapCardCapDevOpReady( GCCGFX_CARD_WORKITEM_S* pWi);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_KCAP_H */

