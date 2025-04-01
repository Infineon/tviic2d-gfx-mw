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
 * \file    gccgfx_sync.h
 */


#ifndef GCCGFX_SYNC_H
#define GCCGFX_SYNC_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
 \addtogroup gccgfx_sync
 \brief The sync component is used as an internal interface between the components
        of the driver.
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
    Sets the Sync Node ID for the sync object referenced by \a sync.

    \param [in] sync  Sync Object
    \param [in] syncNodeId  ID of sync node

    \retval None
**/
CYGFX_EXTERN void GccGfx_SyncSetSyncNodeId( CYGFX_SYNC          sync,
                                            GCCGFX_SYNC_NODE_ID syncNodeId);

/**
    Returns the currently set sync node ID and sync value of the sync object \a
    sync.

    \param [in] sync  Sync Object
    \param [out] pSyncNodeId  Pointer where currently set Sync Node ID is returned
                              [not ::NULL].
    \param [out] pSyncValue  Pointer where the currently set sync value is returned

    \retval  ::CYGFX_OK                              Success
    \retval  ::CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER  Invalid parameter
    \retval  ::CYGFX_ERP_ERR_SYNC_INVALID            Invalid sync object
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_SyncGetSyncData( CYGFX_SYNC           sync,
                                                 GCCGFX_SYNC_NODE_ID* pSyncNodeId,
                                                 CYGFX_S32*           pSyncValue);

/**
    Sets the sync value \a syncValue for a sync object.

    \param [in] sync  Sync Object
    \param [in] syncValue  Sync value

    \retval None
**/
CYGFX_EXTERN void GccGfx_SyncSetSyncValue( CYGFX_SYNC sync,
                                           CYGFX_S32  syncValue);

/**
    Read the current sync value of the sync node referenced by \a syncNodeId.

    \param [in] syncNodeId  ID of sync node

    \retval     Current sync value
**/
CYGFX_EXTERN CYGFX_S32 GccGfx_SyncNodeReadValue( GCCGFX_SYNC_NODE_ID syncNodeId);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_SYNC_H */

