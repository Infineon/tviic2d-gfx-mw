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
 * \file    gccgfx_card_types.h
 */


#ifndef GCCGFX_CARD_TYPES_H
#define GCCGFX_CARD_TYPES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* N/A */

#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_card_types
* \brief Data structures shared between CardU and CardK
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_CARD_WI_USER     (GCCGFX_GEN_CUSTOM_SYNC_COUNT)                                                                        /**< Number of user/application related work items */
#define GCCGFX_CARD_WI_CNT_DISP (GCCGFX_GEN_DISPLAY_COUNT + GCCGFX_GEN_WINDOW_COUNT)                                                  /**< Number of all display related work items */
#define GCCGFX_CARD_WI_CNT      (GCCGFX_GEN_DISPLAY_COUNT + GCCGFX_GEN_WINDOW_COUNT + GCCGFX_GEN_CAPTURE_COUNT + GCCGFX_CARD_WI_USER) /**< Number of all work items in the queue */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/** \name Device types supported by Card component */
/** \{ */
typedef CYGFX_U08 GCCGFX_CARD_DEVICE_TYPE;                         /**< Device types supported by card */
#define GCCGFX_CARD_DEVICE_2D        ((GCCGFX_CARD_DEVICE_TYPE)0u) /**< 2D (BlitEng) device type */
#define GCCGFX_CARD_DEVICE_DISPLAY_0 ((GCCGFX_CARD_DEVICE_TYPE)1u) /**< Display0 device type */
#define GCCGFX_CARD_DEVICE_DISPLAY_1 ((GCCGFX_CARD_DEVICE_TYPE)2u) /**< Display1 device type */
#define GCCGFX_CARD_DEVICE_CAPTURE   ((GCCGFX_CARD_DEVICE_TYPE)3u) /**< Capture device type */
#define GCCGFX_CARD_DEVICE_USER      ((GCCGFX_CARD_DEVICE_TYPE)4u) /**< User device type */
/** \} */

/**
    Data type describing a device
**/
typedef struct
{
    GCCGFX_CARD_DEVICE_TYPE type; /**< Device type as specified by ::GCCGFX_CARD_DEVICE_TYPE */
    CYGFX_U08               id;   /**< The device number.
                                       For type == GCCGFX_CARD_DEVICE_DISPLAY_0 and type == GCCGFX_CARD_DEVICE_DISPLAY_1,
                                           a value of 0 specifies the display device, a value greater than 0 specifies a window index.
                                       For type == GCCGFX_CARD_DEVICE_CAPTURE, id is the capture device index + 1.
                                       For type == GCCGFX_CARD_DEVICE_USER, id is the value of custom sync identifier (see ::CYGFX_SYNC_CUSTOM) */
    CYGFX_U08 paddingByte0;       /**< Padding byte 0. */
    CYGFX_U08 paddingByte1;       /**< Padding byte 1. */
} GCCGFX_CARD_DEVICE_S;


/**
    Data structure which stores the sync test/wait information for a work item
**/
typedef struct
{
    GCCGFX_SYNC_NODE_ID syncNodeId; /**< ID of the sync node */
    CYGFX_S32           syncValue;  /**< Sync value to wait for */
} GCCGFX_CARD_SYNC_WAIT_DATA_S;


/**
    Enumeration of work item states
**/
typedef enum
{
    GCCGFX_CARD_WI_STATE_FREE = 0,           /**< The work item is unused (owned by CardK). */
    GCCGFX_CARD_WI_STATE_USER,               /**< The work item is given to user mode (owned by CardK). */
    GCCGFX_CARD_WI_STATE_DISCARD,            /**< The work item was discarded (owned by Card). */
    GCCGFX_CARD_WI_STATE_SUBMITTED,          /**< The work item is submitted (owned by Card). */
    GCCGFX_CARD_WI_STATE_WAIT_FOR_SYNC,      /**< The work item waits for a sync item (owned by CardK). */
    GCCGFX_CARD_WI_STATE_IN_PROCESS,         /**< The work item is currently processed by HW (owned by CardK). */
    GCCGFX_CARD_WI_STATE_DISP_WAIT_FOR_SHLD, /**< The work item is waiting for a shadow load (owned by DisplayK). */
    GCCGFX_CARD_WI_STATE_CAP_WAIT_FOR_SHLD,  /**< The work item is waiting for a shadow load (owned by CaptureK). */
    GCCGFX_CARD_WI_STATE_CAP_WAIT_FOR_FRAME  /**< The work item is waiting for a new frame complete (owned by CaptureK). */
} GCCGFX_CARD_WI_STATE_E;

/**
    Structure that describes a work item
**/
typedef struct
{
    GCCGFX_CARD_DEVICE_S         device;               /**< The device for the work item */
    CYGFX_U64                    requestShld;          /**< Used by Display to store the ShdLd trigger mask. */
    CYGFX_U64                    waitShld;             /**< Used by Display to store the ShdLd wait mask. */
    GCCGFX_SYNC_NODE_ID          syncNodeId;           /**< Sync node ID to use for sync notification */
    CYGFX_S32                    syncValue;            /**< Sync node value to write after work item has been processed. */
    GCCGFX_CARD_WI_STATE_E       state;                /**< Work item is free, in process or submitted */
    GCCGFX_CARD_SYNC_WAIT_DATA_S syncWaitData;         /**< Sync wait condition (set by application) before work item can be submitted */
    GCCGFX_CARD_SYNC_WAIT_DATA_S syncWaitDataInternal; /**< Sync wait condition (set by client module) before work item can be submitted */
    CYGFX_U08                    TriggerWaitCnt;       /**< Counter that collects the trigger loads. This allows to return a API error if something unexpected happens. */
    CYGFX_U08                    paddingByte0;         /**< Padding byte 0 */
    CYGFX_U08                    paddingByte1;         /**< Padding byte 1 */
    CYGFX_U08                    paddingByte2;         /**< Padding byte 2 */
} GCCGFX_CARD_WORKITEM_S;

/** \} end addtogroup */
/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_CARD_TYPES_H */

