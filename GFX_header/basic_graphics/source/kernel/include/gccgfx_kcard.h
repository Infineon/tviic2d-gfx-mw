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
 * \file        gccgfx_kcard.h
 * \ingroup     gdc_internal
 * \brief       Interface of Card K
 * Implements Building Block: CardK
 *
 * Internal Card Interface (Kernel Space)
 */

#ifndef GCCGFX_KCARD_H
#define GCCGFX_KCARD_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_kcard
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
/**
    Write a 32-bit unsigned value to a VIDEOSS register.
    The following HW modules can be accessed:
    - Display Controller
    - Blit Engine
    - Command Sequencer
    - Write Back Processor
    - Video Capture
    - Timing Controller (TCON)

    \param [in] add  Address of register to access.
    \param [in] value  Value to write to the register.

    \retval None
**/
/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 1 */
#define GCCGFX_KCARD_REG_WRITE_UINT32(add, value) GCCGFX_HWEB_WRITE32(cygfx_Hweb_dev_ctx, (CYGFX_U32)(add), (value))

/**
    Read a 32-bit unsigned value from a VIDEOSS register. The following HW modules
    can be accessed:
    - Display Controller
    - Blit Engine
    - Command Sequencer
    - Write Back Processor
    - Video Capture
    - Timing Controller (TCON)

    \param [in] add  Address of register to access.
    \param [out] pValue  Pointer to a location in memory where the register value
                         will be stored.

    \retval None
**/
#define GCCGFX_KCARD_REG_READ_UINT32(add, pValue)            \
    do {                                                    \
        *(pValue) = GCCGFX_HWEB_READ32(cygfx_Hweb_dev_ctx, (CYGFX_U32)(add));  \
    } while (0)
#ifdef PRQA
#pragma PRQA_MACRO_MESSAGES_OFF "GCCGFX_KCARD_REG_READ_UINT32" 2743
#endif

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Notifies the Card component that a device operation has been completed.\n
    This function is called in the context of an ISR when the completion of a
    display or capture work item is detected.

    \note This functionality is not available for the 2D device
    ::GCCGFX_CARD_DEVICE_2D

    \param [in] pWi  The work item

    \retval None
**/
CYGFX_EXTERN void GccGfx_kCardDevOpProcessed( GCCGFX_CARD_WORKITEM_S* pWi);

/**
    Initializes the CardK component. Called by ::CyGfx_SysInitializeDriver().

    \retval None
**/
CYGFX_EXTERN void GccGfx_kCardInit(void);

#if defined(DEBUG) || defined(RELEASE)
/**
    Deinitialize the CardK component. It does only report asserts in release version.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kCardDeInit(void);
#endif

/**
    Completes the device write operation. Called by GccGfx_CardQueueSubmit via SW
    interrupt.

    \retval None
**/
CYGFX_EXTERN CYGFX_INTERRUPT void GccGfx_kCardIsrQueueSubmit(void);

/**
    Request a work item for a device. This function checks whether the flags in
    RequestMask are pending, which prohibits reconfiguration of the device's
    pipeline. If so, the request is refused.
    The function returns zero if no free WI is available or the RequestMask is not
    free. The WI will be marked as GCCGFX_CARD_WI_STATE_USER that means the kernel
    module does not change anything until the user mode change the state to
    GCCGFX_CARD_WI_STATE_DISCARD or GCCGFX_CARD_WI_STATE_WAIT_FOR_SYNC.
    The user mode should raise an interrupt if the WI is released from user mode.

    \param [in] device  Device for which a work item is requested.
    \param [in] RequestMask  The flags that will be changed.
                            \note It is expected that RequestMask flags
                            are pushed in the requestShld before.
    \retval Pointer to WI that was requested. Otherwise zero.
**/
CYGFX_EXTERN GCCGFX_CARD_WORKITEM_S* GccGfx_kCardDevGetWi( GCCGFX_CARD_DEVICE_S device,
                                                           CYGFX_U64            RequestMask);

/**
    Check all device queues whether a work item is ready for processing.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kCardDeviceCheckAllQueues(void);

/**
    Return the sync node id for the given device. Because the function does not
    change anything it can be called for user and kernel mode.

    \param [in] device  Device

    \retval GCCGFX_SYNC_NODE_ID Sync node ID for the device.
**/
CYGFX_EXTERN GCCGFX_SYNC_NODE_ID GccGfx_kCardGetSyncNodeId( GCCGFX_CARD_DEVICE_S device);

/**
    Return the requested WI for display. It allows other modules to progress all WI
    without access to the static array.

    \param [in] id  Number of WI (must be in range)

    \retval GCCGFX_CARD_WORKITEM_S pointer for the id.
**/
CYGFX_EXTERN GCCGFX_CARD_WORKITEM_S* GccGfx_kCardGetWiDisp( CYGFX_U32 id);

/**
    Return the WI for capture. It allows other modules to progress all WI without
    access to the static array.

    \retval GCCGFX_CARD_WORKITEM_S pointer for capture.
**/
CYGFX_EXTERN GCCGFX_CARD_WORKITEM_S* GccGfx_kCardGetWiCap(void);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_KCARD_H */

