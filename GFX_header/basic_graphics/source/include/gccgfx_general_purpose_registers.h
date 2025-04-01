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
 * \file    gccgfx_general_purpose_registers.h
 * \brief   General purpose register defines.
 *          The general purpose registers are derived from
 *          gfxreg_gfx2dcfg_register register file
 */


#ifndef GCCGFX_GENERAL_PURPOSE_REGISTERS_H
#define GCCGFX_GENERAL_PURPOSE_REGISTERS_H


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
#define GCCGFX_GFX2D_GPR_START_ADDR                    (GFXREG_SUBSS_GFX2D_GFX2DCFG_BASE + GFXREG_GFX2DCFG_GENERALPURPOSE) /**< General-purpose register range start address */

/* The PROGRESS var is updated by CmdSeq if all loops are finished and a new blit sequence will start.
   The tells the SW exactly the free CmdSeq area that can be filled with the next operation. */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_0_PROGRESS        (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  0U))                          /**< Identifier for Slot 0. */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_1_PROGRESS        (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  1U))                          /**< Identifier for Slot 1. */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_2_PROGRESS        (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  2U))                          /**< Identifier for Slot 2. */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_3_PROGRESS        (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  3U))                          /**< Identifier for Slot 3. */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_4_PROGRESS        (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  4U))                          /**< Identifier for Slot 4. */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_5_PROGRESS        (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  5U))                          /**< Identifier for Slot 5. */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_6_PROGRESS        (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  6U))                          /**< Identifier for Slot 6. */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_7_PROGRESS        (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  7U))                          /**< Identifier for Slot 7. */

/* The cmd seq is signaling a sync flush with value         */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_0_PROG_SYNC_VALUE (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  8U))                          /**< The CmdSeq is signaling a sync flush with value - slot 0 */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_1_PROG_SYNC_VALUE (GCCGFX_GFX2D_GPR_START_ADDR + (4U *  9U))                          /**< The CmdSeq is signaling a sync flush with value - slot 1 */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_2_PROG_SYNC_VALUE (GCCGFX_GFX2D_GPR_START_ADDR + (4U * 10U))                          /**< The CmdSeq is signaling a sync flush with value - slot 2 */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_3_PROG_SYNC_VALUE (GCCGFX_GFX2D_GPR_START_ADDR + (4U * 11U))                          /**< The CmdSeq is signaling a sync flush with value - slot 3 */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_4_PROG_SYNC_VALUE (GCCGFX_GFX2D_GPR_START_ADDR + (4U * 12U))                          /**< The CmdSeq is signaling a sync flush with value - slot 4 */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_5_PROG_SYNC_VALUE (GCCGFX_GFX2D_GPR_START_ADDR + (4U * 13U))                          /**< The CmdSeq is signaling a sync flush with value - slot 5 */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_6_PROG_SYNC_VALUE (GCCGFX_GFX2D_GPR_START_ADDR + (4U * 14U))                          /**< The CmdSeq is signaling a sync flush with value - slot 6 */
#define GCCGFX_GFX2D_GPR_CMDSEQ_TASK_7_PROG_SYNC_VALUE (GCCGFX_GFX2D_GPR_START_ADDR + (4U * 15U))                          /**< The CmdSeq is signaling a sync flush with value - slot 7 */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_GENERAL_PURPOSE_REGISTERS_H */

