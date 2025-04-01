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
 * \file    gccgfx_sync_types.h
 */

#ifndef GCCGFX_SYNC_TYPES_H
#define GCCGFX_SYNC_TYPES_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* N/A */

#ifdef __cplusplus
extern "C"
{
#endif

/**
 \addtogroup gccgfx_sync_types
 \brief Common definitions used by user and kernel mode components, as well
        as by other modules interracting with the Sync module.
*
*/
/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/


/**
    Wait sync node for cmdseq memory tasks
**/
typedef struct
{
    CYGFX_U32 syncID;    /**< Sync node ID to use for sync notification */
    CYGFX_S32           syncValue; /**< Sync node value */
} GCCGFX_SYNC_NODE_S;

/** \name Sync Node Identifiers */
/** \{ */
typedef CYGFX_U32 GCCGFX_SYNC_NODE_ID;                                     /**< Instead of an enum, CYGFX_U32 is used as type for sync nodes to avoid potential
    issues with different enum representation between library and application. */
#define GCCGFX_SYNC_NODE_ID_IGNORE              ((GCCGFX_SYNC_NODE_ID) 0u) /**< Invalidate sync */
#define GCCGFX_SYNC_NODE_ID_DISP1_VSYNC         ((GCCGFX_SYNC_NODE_ID) 1u) /**< Display Controller 0 - VSync */
#define GCCGFX_SYNC_NODE_ID_DISP2_VSYNC         ((GCCGFX_SYNC_NODE_ID) 2u) /**< Display Controller 1 - VSync */

#define GCCGFX_SYNC_NODE_ID_DISP1_UPDATE        ((GCCGFX_SYNC_NODE_ID) 3u) /**< Update finished for Display Controller 0 */
#define GCCGFX_SYNC_NODE_ID_DISP2_UPDATE        ((GCCGFX_SYNC_NODE_ID) 4u) /**< Update finished for Display Controller 1 */

#define GCCGFX_SYNC_NODE_ID_WINDOW1_UPDATE      ((GCCGFX_SYNC_NODE_ID) 5u) /**< Update finished for window 1 */
#define GCCGFX_SYNC_NODE_ID_WINDOW2_UPDATE      ((GCCGFX_SYNC_NODE_ID) 6u) /**< Update finished for window 2 */
#define GCCGFX_SYNC_NODE_ID_WINDOW3_UPDATE      ((GCCGFX_SYNC_NODE_ID) 7u) /**< Update finished for window 3 */
#define GCCGFX_SYNC_NODE_ID_WINDOW4_UPDATE      ((GCCGFX_SYNC_NODE_ID) 8u) /**< Update finished for window 4 */
#define GCCGFX_SYNC_NODE_ID_WINDOW5_UPDATE      ((GCCGFX_SYNC_NODE_ID) 9u) /**< Update finished for window 5 */
#define GCCGFX_SYNC_NODE_ID_WINDOW6_UPDATE      ((GCCGFX_SYNC_NODE_ID)10u) /**< Update finished for window 6 */
#define GCCGFX_SYNC_NODE_ID_WINDOW7_UPDATE      ((GCCGFX_SYNC_NODE_ID)11u) /**< Update finished for window 7 */
#define GCCGFX_SYNC_NODE_ID_WINDOW8_UPDATE      ((GCCGFX_SYNC_NODE_ID)12u) /**< Update finished for window 8 */
#define GCCGFX_SYNC_NODE_ID_WINDOW9_UPDATE      ((GCCGFX_SYNC_NODE_ID)13u) /**< Update finished for window 9 */
#define GCCGFX_SYNC_NODE_ID_WINDOW10_UPDATE     ((GCCGFX_SYNC_NODE_ID)14u) /**< Update finished for window 10 */
#define GCCGFX_SYNC_NODE_ID_WINDOW11_UPDATE     ((GCCGFX_SYNC_NODE_ID)15u) /**< Update finished for window 11 */
#define GCCGFX_SYNC_NODE_ID_WINDOW12_UPDATE     ((GCCGFX_SYNC_NODE_ID)16u) /**< Update finished for window 12 */
#define GCCGFX_SYNC_NODE_ID_WINDOW13_UPDATE     ((GCCGFX_SYNC_NODE_ID)17u) /**< Update finished for window 13 */
#define GCCGFX_SYNC_NODE_ID_WINDOW14_UPDATE     ((GCCGFX_SYNC_NODE_ID)18u) /**< Update finished for window 14 */
#define GCCGFX_SYNC_NODE_ID_WINDOW15_UPDATE     ((GCCGFX_SYNC_NODE_ID)19u) /**< Update finished for window 15 */
#define GCCGFX_SYNC_NODE_ID_WINDOW16_UPDATE     ((GCCGFX_SYNC_NODE_ID)20u) /**< Update finished for window 16 */
#define GCCGFX_SYNC_NODE_ID_WINDOW17_UPDATE     ((GCCGFX_SYNC_NODE_ID)21u) /**< Update finished for window 17 */
#define GCCGFX_SYNC_NODE_ID_WINDOW18_UPDATE     ((GCCGFX_SYNC_NODE_ID)22u) /**< Update finished for window 18 */
#define GCCGFX_SYNC_NODE_ID_WINDOW19_UPDATE     ((GCCGFX_SYNC_NODE_ID)23u) /**< Update finished for window 19 */
#define GCCGFX_SYNC_NODE_ID_WINDOW20_UPDATE     ((GCCGFX_SYNC_NODE_ID)24u) /**< Update finished for window 20 */
#define GCCGFX_SYNC_NODE_ID_WINDOW21_UPDATE     ((GCCGFX_SYNC_NODE_ID)25u) /**< Update finished for window 21 */
#define GCCGFX_SYNC_NODE_ID_WINDOW22_UPDATE     ((GCCGFX_SYNC_NODE_ID)26u) /**< Update finished for window 22 */
#define GCCGFX_SYNC_NODE_ID_WINDOW23_UPDATE     ((GCCGFX_SYNC_NODE_ID)27u) /**< Update finished for window 23 */
#define GCCGFX_SYNC_NODE_ID_WINDOW24_UPDATE     ((GCCGFX_SYNC_NODE_ID)28u) /**< Update finished for window 24 */
#define GCCGFX_SYNC_NODE_ID_WINDOW25_UPDATE     ((GCCGFX_SYNC_NODE_ID)29u) /**< Update finished for window 25 */
#define GCCGFX_SYNC_NODE_ID_WINDOW26_UPDATE     ((GCCGFX_SYNC_NODE_ID)30u) /**< Update finished for window 26 */

#define GCCGFX_SYNC_NODE_ID_CAP0_UPDATE         ((GCCGFX_SYNC_NODE_ID)31u) /**< Update finished for Video Capture 0 */
#define GCCGFX_SYNC_NODE_ID_CAP0_VSYNC          ((GCCGFX_SYNC_NODE_ID)32u) /**< Video Capture 0 - VSync */
#define GCCGFX_SYNC_NODE_ID_CAP0_MEASUREMENT    ((GCCGFX_SYNC_NODE_ID)33u) /**< Video Capture 0 - Signal measurement */

#define GCCGFX_SYNC_NODE_ID_CUSTOM_1            ((GCCGFX_SYNC_NODE_ID)34u) /**< Custom application sync item */
#define GCCGFX_SYNC_NODE_ID_CUSTOM_2            ((GCCGFX_SYNC_NODE_ID)35u) /**< Custom application sync item */
#define GCCGFX_SYNC_NODE_ID_CUSTOM_3            ((GCCGFX_SYNC_NODE_ID)36u) /**< Custom application sync item */
#define GCCGFX_SYNC_NODE_ID_CUSTOM_4            ((GCCGFX_SYNC_NODE_ID)37u) /**< Custom application sync item */
#define GCCGFX_SYNC_NODE_ID_CUSTOM_5            ((GCCGFX_SYNC_NODE_ID)38u) /**< Custom application sync item */

#define GCCGFX_SYNC_NODE_ID_CMDSEQ_TASK_0_FLUSH ((GCCGFX_SYNC_NODE_ID)39u) /**< Command sequencer flush operation */
#define GCCGFX_SYNC_NODE_ID_CMDSEQ_TASK_1_FLUSH ((GCCGFX_SYNC_NODE_ID)40u) /**< Command sequencer flush operation */
#define GCCGFX_SYNC_NODE_ID_CMDSEQ_TASK_2_FLUSH ((GCCGFX_SYNC_NODE_ID)41u) /**< Command sequencer flush operation */
#define GCCGFX_SYNC_NODE_ID_CMDSEQ_TASK_3_FLUSH ((GCCGFX_SYNC_NODE_ID)42u) /**< Command sequencer flush operation */
#define GCCGFX_SYNC_NODE_ID_CMDSEQ_TASK_4_FLUSH ((GCCGFX_SYNC_NODE_ID)43u) /**< Command sequencer flush operation */
#define GCCGFX_SYNC_NODE_ID_CMDSEQ_TASK_5_FLUSH ((GCCGFX_SYNC_NODE_ID)44u) /**< Command sequencer flush operation */
#define GCCGFX_SYNC_NODE_ID_CMDSEQ_TASK_6_FLUSH ((GCCGFX_SYNC_NODE_ID)45u) /**< Command sequencer flush operation */

#define GCCGFX_SYNC_NODE_ID_WRITEBACK           ((GCCGFX_SYNC_NODE_ID)46u) /**< Frame dump finished for display stream */

#define GCCGFX_SYNC_NODE_ID_END                 ((GCCGFX_SYNC_NODE_ID)47u) /**< Last + 1 of GCCGFX_SYNC_NODE_ID */
/** \} */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/* N/A */

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_SYNC_TYPES_H */

