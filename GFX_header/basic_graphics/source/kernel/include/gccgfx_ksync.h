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
 * \file    gccgfx_ksync.h
 */

#ifndef GCCGFX_KSYNC_H
#define GCCGFX_KSYNC_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_ksync
* \brief      Interface of SyncK
*/

/** \{ */
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

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/**
    Initializes the SyncK component.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kSyncInit(void);

/**
    Read the current sync value of the sync node referenced by \a syncNodeId.

    \param [in] syncNodeId  ID of sync node

    \retval     Current sync value
**/
CYGFX_EXTERN CYGFX_S32 GccGfx_kSyncNodeReadValue( GCCGFX_SYNC_NODE_ID syncNodeId);

/**
    Return the next free sync value for the sync node referenced by \a syncNodeId.
    The returned sync value can be used as parameter for #GccGfx_kSyncNodeSetValue.

    \note Every call returns a new free sync value

    \param [in] syncNodeId  ID of sync node

    \retval     Sync value
**/
CYGFX_EXTERN CYGFX_S32 GccGfx_kSyncNodeGetFreeValue( GCCGFX_SYNC_NODE_ID syncNodeId);

/**
    Return the current sync value for the sync node referenced by \a syncNodeId.
    The returned sync value can be used as parameter for #GccGfx_kSyncNodeSetValue.

    \param [in] syncNodeId  ID of sync node

    \retval     Sync value
**/
CYGFX_EXTERN CYGFX_S32 GccGfx_kSyncNodeGetLastValue( GCCGFX_SYNC_NODE_ID syncNodeId);

/**
    Test if the sync condition for the sync node referenced by \a syncNodeId is
    true. True means that the current sync node value >= \a syncValue, i.e. the
    sync node had/has a sync value of \a syncValue. The pseudo code for the check
    is as follows:
    \code
    if ((CYGFX_S32)(syncNodeId.syncValue - syncValue) >= 0)
    {
     return CYGFX_TRUE;
    }
    else
    {
      return CYGFX_FALSE;
    }
    \endcode

    \param [in] syncNodeId  ID of sync node
    \param [in] syncValue  sync value

    \retval     ::CYGFX_TRUE       Sync condition true
    \retval     ::CYGFX_FALSE      Sync condition false
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_kSyncNodeTest( GCCGFX_SYNC_NODE_ID syncNodeId,
                                              CYGFX_S32           syncValue);
#ifdef PRQA
#pragma PRQA_NO_SIDE_EFFECTS GccGfx_kSyncNodeTest
#endif


/**
    Interrupt service routine that is executed when the command sequencer
    signalizes the completion of a sequence. The routine reads the synchronization
    values signaled by the command sequencer, updates the associated driver
    internal synchronization objects, and checks whether any work-item became
    executable.

    \retval None
**/
CYGFX_EXTERN CYGFX_INTERRUPT void GccGfx_kSyncIsrCmdSeqComplete(void);

/**
    Interrupt service routine for command sequencer synchronization.
    The command sequencer is either waiting on a sync condition or is signaling a
    sync flush. The sync module reads the sync information and notifies all other
    modules about the sync flush or takes care about the waiting sync. If the sync
    wait is not yet fulfilled the sync module will notify the command sequencer as
    soon as the condition is fulfilled.

    \retval None
**/
CYGFX_EXTERN CYGFX_INTERRUPT void GccGfx_kSyncIsrCmdSeqSync(void);

/**
    Increment the sync value of the sync node referenced by \a syncNodeId.
    \note
    - Don't use this function if you use #GccGfx_kSyncNodeGetFreeValue to get new
    free sync values. Use #GccGfx_kSyncNodeSetValue instead.
    - Must only be called from an interrupt.

    \param [in] syncNodeId  ID of sync node

    \retval None
**/
CYGFX_EXTERN void GccGfx_kSyncNodeIncValue( GCCGFX_SYNC_NODE_ID syncNodeId);


/**
    Set the sync value of the sync node referenced by \a syncNodeId to \a syncValue.
    \note Must only be called from an interrupt.

    \param [in] syncNodeId  ID of sync node
    \param [in] syncValue  Sync value to set for sync node

    \retval None
**/
CYGFX_EXTERN void GccGfx_kSyncNodeSetValue( GCCGFX_SYNC_NODE_ID syncNodeId,
                                            CYGFX_S32           syncValue);


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_KSYNC_H */

