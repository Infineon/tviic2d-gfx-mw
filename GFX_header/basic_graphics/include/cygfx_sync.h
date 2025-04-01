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
 * \file    cygfx_sync.h
 */


#ifndef CYGFX_SYNC_H
#define CYGFX_SYNC_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup cygfx_sync
* \code #include "cygfx_sync.h" \endcode
* \brief Synchronization API - Synchronization of graphics driver operations

* The Synchronization API provides mechanisms to synchronize graphics driver operations. These are
*  - 2D graphics operations (e.g., blit finished)
*  - Display operations (e.g., framebuffer displayed, VSync happened)
*  - Video Capture operations (e.g., new frame captured, VSync happened)
*
* Synchronization is achieved through sync objects - a representation of events whose completion
* status can be tested or waited upon. Waiting can be done by
*  - the CPU (see CyGfx_SyncWaitSync())
*  - as part of a graphics operation (more details below)
*
* The function to initialize a sync object, i.e., setting the sync condition, and the function
* to perform a wait as part of a graphics operation are part of the corresponding module's API:
*  - 2D operations: See \ref cygfx_bliteng
*  - Display: See \ref cygfx_display
*  - Video Capture: See \ref cygfx_capture
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define CYGFX_SYNC_INCREMENT_MIN ((CYGFX_S32)(-32768)) /**< Defines the minimum increment of sync count */
#define CYGFX_SYNC_INCREMENT_MAX ((CYGFX_S32)(32767))  /**< Defines the maximum increment of sync count */

/** \name Custom sync identifiers */
/** \{ */
typedef CYGFX_U32 CYGFX_SYNC_CUSTOM;                       /**< The custom sync object definition */
#define CYGFX_SYNC_CUSTOM_1 ((CYGFX_SYNC_CUSTOM)0u)        /**< Custom application sync item 1 */
#define CYGFX_SYNC_CUSTOM_2 ((CYGFX_SYNC_CUSTOM)1u)        /**< Custom application sync item 2 */
#define CYGFX_SYNC_CUSTOM_3 ((CYGFX_SYNC_CUSTOM)2u)        /**< Custom application sync item 3 */
#define CYGFX_SYNC_CUSTOM_4 ((CYGFX_SYNC_CUSTOM)3u)        /**< Custom application sync item 4 */
#define CYGFX_SYNC_CUSTOM_5 ((CYGFX_SYNC_CUSTOM)4u)        /**< Custom application sync item 5 */
/** \} */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    Data type to refer to a sync object
**/
typedef struct
{
    CYGFX_U32 reserved[2]; /**< Reserved memory needed for any sync container */
} CYGFX_SYNC_OBJECT_S;


typedef CYGFX_SYNC_OBJECT_S* CYGFX_SYNC; /**< The sync object definition */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Resets all parameters of the sync object.
    \note The reset function must be called if the next operation with this sync
    object \b uses this sync object. After this reset, the sync object always
    signals a fulfilled sync condition. It is not required to reset the sync object
    if the first operation \b defines this sync object. See \ref bgd_sync

    \param [in,out] sync  Pointer to an object of type ::CYGFX_SYNC_OBJECT_S

    \retval        ::CYGFX_OK On success
    \retval        ::CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER The specified sync id is
    invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SyncReset( CYGFX_SYNC sync);

/**
    Waits for a sync object to be signaled

    \param [in] sync  Sync object to wait for getting signaled. \note The sync
                      object must be a pointer of ::CYGFX_SYNC_OBJECT_S that was initialized by
                      CyGfx_SyncReset() or a function that "defines" a sync condition.
                      See \ref bgd_sync.
    \param [in] timeout  MUST be 0

    \retval  ::CYGFX_OK                             Success
    \retval  ::CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER Invalid parameter
    \retval  ::CYGFX_ERP_ERR_SYNC_INVALID           Sync object is not valid.
    \retval  ::CYGFX_ERP_ERR_SYNC_TIMEOUT           Sync object is not signaled.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SyncWaitSync( CYGFX_SYNC sync,
                                             CYGFX_S32  timeout);

/**
    Increments the sync count for the sync object \a sync. This way, a sync object
    can be used to wait for the last sync condition + \a incr. This must be used
    only for sync sources that increment the sync counter repeatedly (e.g., Display
    controller VSync, which is incremented with every display frame).

    \param [in] sync  Sync object for which to increment the sync counter. \note
                      The sync object must be a pointer of ::CYGFX_SYNC_OBJECT_S that was filled by
                      CyGfx_DispGetVSync() or CyGfx_CapGetVSync().
    \param [in] incr  Sync counter increment Parameter must be
                      ::CYGFX_SYNC_INCREMENT_MIN <= incr <= ::CYGFX_SYNC_INCREMENT_MAX. (Typically,
                      negative values for incr do not make sense because the condition is usually
                      fulfilled. However, it is possible to call {CyGfx_SyncIncr(sync,2);
                      CyGfx_SyncIncr(sync,-1);} which is equivalent to CyGfx_SyncIncr(sync,1);)

    \retval  ::CYGFX_OK                             Success
    \retval  ::CYGFX_ERP_ERR_SYNC_INVALID           Sync object not valid
    \retval  ::CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER Invalid parameter
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SyncIncr( CYGFX_SYNC sync,
                                         CYGFX_S32  incr);



/**
    Resets all parameters of the sync object

    \param [in] syncIdentifier  Custom sync identifier of type ::CYGFX_SYNC_CUSTOM
    \param [in,out] sync  Pointer to an object of type ::CYGFX_SYNC_OBJECT_S.
                          If used immediately with ::CyGfx_SyncWaitSync API, it will return ::CYGFX_OK.
                          A timeout can be forced by using the ::CyGfx_SyncIncr API.

    \retval  ::CYGFX_OK On success
    \retval  ::CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER The specified sync id is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SyncGetSync(CYGFX_SYNC_CUSTOM syncIdentifier, CYGFX_SYNC sync);


/**
    Triggers the custom sync object.
    Intended to be used when synchronization between different elements is required.

    For example, waiting for a custom event (either a simple GPIO button press event or
    new CAN message received indication). This event is represented by ::CYGFX_SYNC_CUSTOM object.

    Display, Window, BlitEngine APIs (i.e., ::CyGfx_WinWaitSync) can make use of this API
    to 'delay' the Window Update only after sync happens.

    Note: This is the only API that can be called from the interrupt context.

    \param [in,out] sync  Pointer to an object of type ::CYGFX_SYNC_OBJECT_S.
                          It can be obtained by initially calling the ::CyGfx_SyncGetSync API.

    \retval        ::CYGFX_OK On success
    \retval        ::CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER The specified sync id is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SyncTriggerSync(CYGFX_SYNC sync);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_SYNC_H */

