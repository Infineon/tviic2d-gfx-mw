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
 * \file    gccgfx_cmdseq.h
 */


#ifndef GCCGFX_CMDSEQ_H
#define GCCGFX_CMDSEQ_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_cmdseq
* \brief      VIDEOSS CommandSequencer interface
*/

/** \{ */
/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_CMDSEQ_OP_ASSIGN              0U                                                                   /**< Operation code for GccGfx_CmdseqSchedulerCalc(): Reg = val */
#define GCCGFX_CMDSEQ_OP_ADD                 1U                                                                   /**< Operation code for GccGfx_CmdseqSchedulerCalc(): Reg += val */
#define GCCGFX_CMDSEQ_WORD_SIZE              0x04U                                                                /**< Size in byte of one word */
#define GCCGFX_CMDSEQ_GPR_START_ADDR         (GFXREG_SUBSS_GFX2D_CMDSEQ_BASE + GFXREG_CMDSEQ_GPR0)                /**< General-purpose register range in bytes */
#define GCCGFX_CMDSEQ_GPR_NUM                (16u)                                                                /**< Number of 32-bit general-purpose registers available */
#define GCCGFX_CMDSEQ_SPR_NUM                (8u)                                                                 /**< Number of 16-bit special purpose registers available */
#define GCCGFX_CMDSEQ_GPR_SCHED_SYNC_ID_0    (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U *  0U))                          /**< The CmdSeq is waiting on the sync condition with id - slot 0 */
#define GCCGFX_CMDSEQ_GPR_SCHED_SYNC_ID_1    (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U *  1U))                          /**< The CmdSeq is waiting on the sync condition with id - slot 1 */
#define GCCGFX_CMDSEQ_GPR_SCHED_SYNC_ID_2    (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U *  2U))                          /**< The CmdSeq is waiting on the sync condition with id - slot 2 */
#define GCCGFX_CMDSEQ_GPR_SCHED_SYNC_VALUE_0 (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U *  8U))                          /**< The CmdSeq is waiting on the sync condition with value - slot 0 */
#define GCCGFX_CMDSEQ_GPR_SCHED_SYNC_VALUE_1 (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U *  9U))                          /**< The CmdSeq is waiting on the sync condition with value - slot 1 */
#define GCCGFX_CMDSEQ_GPR_SCHED_SYNC_VALUE_2 (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U * 10U))                          /**< The CmdSeq is waiting on the sync condition with value - slot 2 */
#define GCCGFX_CMDSEQ_SPR_TASK_0             (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U * (GCCGFX_CMDSEQ_GPR_NUM + 0U))) /**< LBH registers; used for GCCGFX_SPR_ID_OTF_FETCHLAYER0  */
#define GCCGFX_CMDSEQ_SPR_TASK_1             (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U * (GCCGFX_CMDSEQ_GPR_NUM + 1U))) /**< LBH registers; used for GCCGFX_SPR_ID_OTF_FETCHDECODE4 */
#define GCCGFX_CMDSEQ_SPR_TASK_2             (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U * (GCCGFX_CMDSEQ_GPR_NUM + 2U))) /**< LBH registers; used for GCCGFX_SPR_ID_OTF_FETCHWARP1   */
#define GCCGFX_CMDSEQ_SPR_TASK_3             (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U * (GCCGFX_CMDSEQ_GPR_NUM + 3U))) /**< LBH registers; used for GCCGFX_SPR_ID_OTF_FETCHLAYER1  */
#define GCCGFX_CMDSEQ_SPR_TASK_4             (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U * (GCCGFX_CMDSEQ_GPR_NUM + 4U))) /**< LBH registers; used for GCCGFX_SPR_ID_OTF_FETCHDECODE0 */
#define GCCGFX_CMDSEQ_SPR_TASK_5             (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U * (GCCGFX_CMDSEQ_GPR_NUM + 5U))) /**< LBH registers; used for GCCGFX_SPR_ID_MEM_0            */
#define GCCGFX_CMDSEQ_SPR_TASK_6             (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U * (GCCGFX_CMDSEQ_GPR_NUM + 6U))) /**< LBH registers; used for GCCGFX_SPR_ID_MEM_1            */
#define GCCGFX_CMDSEQ_SPR_TASK_7             (GCCGFX_CMDSEQ_GPR_START_ADDR + (4U * (GCCGFX_CMDSEQ_GPR_NUM + 7U))) /**< LBH registers; used for GCCGFX_SPR_ID_MEM_2            */

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
    Initialize Command Sequencer. Reset SW internal variables.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CmdseqInit(void);

/**
    Deinitialize the Command Sequencer. Reset SW internal variables.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CmdseqDeInit(void);

/**
    Assign Command Sequencer FIFO memory. Assigns a part of the VRAM to be used as
    FIFO memory by the command sequencer.

    \param [in] task  Defines the task number 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS
    \param [in] address  Start address in the VRAM. Must be 8-byte aligned.
    \param [in] size  Size in bytes of the buffer. It must be 4-byte aligned and
                      smaller than 0x40000, otherwise the function will return an error.

    \retval CYGFX_OK On success,\n otherwise the related error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CmdseqAssignFifo( CYGFX_U32   task,
                                                  const void* address,
                                                  CYGFX_U32   size);

#if (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_ENABLED)
/**
    This function is for debug version only. It returns a lower bound for the
    available space in the command fifo (not considering the actually processed
    commands). It can be used to check the fifo usage.

    \param [in] task  Defines the task number 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS

    \retval Size in bytes.
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_CmdSeqSpaceRequestCnt( CYGFX_U32 task);

/**
    Debug code - switches an internal flag on/off controlling the recording of the
    seq buffer

    \param [in] enable

**/
CYGFX_EXTERN void GccGfx_CmdseqDumpSeq( CYGFX_U32 enable);
#endif

/**
    End the scheduler sequence and start a new one if the remaining scheduler
    section is to small to add a new program.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] bForce  Force to start a new sequence

**/
CYGFX_EXTERN void GccGfx_CmdseqUpdateSchedulerAddr( CYGFX_U32  task,
                                                    CYGFX_BOOL bForce);

/**
    Start a scheduler sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] requiredWords  Number of words that will be added (required free
                               fifo space).

    \retval CYGFX_ERP_ERR_CMD_SEQ_FIFO_UNINITIALIZED The task buffer was not
            initialized.
    \retval CYGFX_ERP_ERR_CMD_SEQ_COMMAND_QUEUE_FULL Not enough space in the
            command buffer.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CmdseqStartSchedulerSequence( CYGFX_U32 task,
                                                              CYGFX_U32 requiredWords);

/**
    End a scheduler sequence that was started previously.
    \note A programmer sequence must not be opened after the call of this function.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CmdseqEndSchedulerSequence( CYGFX_U32 task);

/**
    Start a programmer sequence.
    \note Requires an open scheduler sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] requiredWords  Number of words that will be added (required free
                               fifo space).

    \retval CYGFX_ERP_ERR_CMD_SEQ_FIFO_UNINITIALIZED The task buffer was not
            initialized.
    \retval CYGFX_ERP_ERR_CMD_SEQ_COMMAND_QUEUE_FULL Not enough space in the
            command buffer.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CmdseqStartProgrammerSequence( CYGFX_U32 task,
                                                               CYGFX_U32 requiredWords);

/**
    End the programmer sequence that was started previously.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] bDiscard  Flag that indicates that all commands that have so far
                          been added to the programmer sequence shall be discarded.
    \param [in] RegisterOffs  Address of the register that defines the condition
                              for conditional execution. If 0, the programmer sequence is executed
                              unconditionally.
    \param [in] startline  Lower limit for conditional execution. Ignored if
                           RegisterOffs is 0.
    \param [in] endline  Upper limit for conditional execution. Ignored if
                         RegisterOffs is 0.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CmdseqEndProgrammerSequence( CYGFX_U32  task,
                                                      CYGFX_BOOL bDiscard,
                                                      CYGFX_U32  RegisterOffs,
                                                      CYGFX_U16  startline,
                                                      CYGFX_U16  endline);

/**
    Return the current position of the scheduler sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.

    \retval The position of the scheduler sequence
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_CmdseqSchedulerGetCur( CYGFX_U32 task);

/**
    Insert a NOP instruction into the CMDSEQ scheduler sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] cnt  Number of clock cycles to wait.

**/
CYGFX_EXTERN void GccGfx_CmdseqSchedulerNop( CYGFX_U32 task,
                                             CYGFX_U32 cnt);

/**
    Insert a CALC instruction into the CMDSEQ scheduler sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] reg  Target register address
    \param [in] op  Required calc operation (GCCGFX_CMDSEQ_OP_ASSIGN or
                    GCCGFX_CMDSEQ_OP_ADD).
    \param [in] val  Value to assign or add.

**/
CYGFX_EXTERN void GccGfx_CmdseqSchedulerCalc( CYGFX_U32 task,
                                              CYGFX_U32 reg,
                                              CYGFX_U32 op,
                                              CYGFX_U32 val);

/**
    Add a JUMP instruction to the scheduler sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] offs  The jump destination as an offset to the task buffer base
                      address

    \retval Position of the jump instruction in the scheduler sequence. Can be used
            to overwrite the jump instruction with
            GccGfx_CmdseqDisableSchedulerInstruction() or
            GccGfx_CmdseqUpdateSchedulerJump().
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_CmdseqSchedulerJump( CYGFX_U32 task,
                                                   CYGFX_U32 offs);

/**
    Overwrite a single instruction with a NOP instruction.
    This function can be used to disable a jump instruction, e.g. to stop the
    display repeat,
    or to disable a sync instruction.
    \note The instruction must be a single word command, not JumpIf.

    \return none

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] SchedulerOffs  Position of the JUMP instruction as returned by
                               GccGfx_CmdseqSchedulerJump().

**/
CYGFX_EXTERN void GccGfx_CmdseqDisableSchedulerInstruction( CYGFX_U32 task,
                                                            CYGFX_U32 SchedulerOffs);

/**
    Overwrite a JUMP instruction with a new JUMP instruction.
    \note The jump instruction must be a single word Jump command, not JumpIf.

    \return none

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] SchedulerOffs  Position of the JUMP instruction as returned by
                               GccGfx_CmdseqSchedulerJump().
    \param [in] offs  The new jump destination as an offset to the task buffer base
                      address.

**/
CYGFX_EXTERN void GccGfx_CmdseqUpdateSchedulerJump( CYGFX_U32 task,
                                                    CYGFX_U32 SchedulerOffs,
                                                    CYGFX_U32 offs);

/**
    Add a conditional jump to the CMDSEQ scheduler sequence: jump if lower <=
    reg[RegisterOffs] <= upper.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] offs  The jump destination as an offset to the task buffer base
                      address
    \param [in] RegisterOffs  Address of the register that defines the condition
                              for the jump.
    \param [in] lower  Lower limit for the conditional execution of the jump.
    \param [in] upper  Upper limit for the conditional execution of the jump.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CmdseqSchedulerJumpIf( CYGFX_U32 task,
                                                CYGFX_U32 offs,
                                                CYGFX_U32 RegisterOffs,
                                                CYGFX_U16 lower,
                                                CYGFX_U16 upper);

/**
    Inserts an interrupt INTR op-code into the CMDSEQ scheduler sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CmdseqSchedulerIntr( CYGFX_U32 task);

/**
    Inserts a SYNC op code into the CMDSEQ programmer sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] id  A programmer synchronization identifier
                    (GFXINT_GFX2D_PROGRAMMER_ID_*).

    \retval None
**/
CYGFX_EXTERN void GccGfx_CmdseqProgrammerSyncAndClear( CYGFX_U32 task,
                                                       CYGFX_U32 id);

/**
    Inserts a SYNC op code into the CMDSEQ programmer sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] id  A programmer synchronization identifier
                    (GFXINT_GFX2D_PROGRAMMER_ID_*).
    \param [in] delay  Flag requesting the arbitration following the sync command
                       to be delayed by one instruction.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CmdseqSchedulerSync( CYGFX_U32  task,
                                              CYGFX_U32  id,
                                              CYGFX_BOOL delay);

/**
    Insert a single write command into the CMDSEQ programmer sequence

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] address  Destination address of the write operation.
    \param [in] data  Value to be written.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CmdseqProgrammerWriteSingle( CYGFX_U32 task,
                                                      CYGFX_U32 address,
                                                      CYGFX_U32 data);

/**
    Inserts a write command into the CMDSEQ programmer sequence for the elements of
    an array.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] address  Destination address of the write operation.
    \param [in] count  Number of values to be written.
    \param [in] data[]  Array of data to be written.

**/
CYGFX_EXTERN void GccGfx_CmdseqProgrammerWriteArray( CYGFX_U32       task,
                                                     CYGFX_U32       address,
                                                     CYGFX_U32       count,
                                                     const CYGFX_U32 data[]);

/**
    Inserts a write command for multiple values into the CmdSeq programmer sequence.

    The values to write must be added with GccGfx_CmdseqProgrammerWriteAdd().

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] address  Destination address of the first value to write.
    \param [in] count  Number of values to write.

**/
CYGFX_EXTERN void GccGfx_CmdseqProgrammerWriteStart( CYGFX_U32  task,
                                                     CYGFX_ADDR address,
                                                     CYGFX_U32  count);

/**
    Adds data to a write sequence started with GccGfx_CmdseqProgrammerWriteStart.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] data  A value to write.

**/
CYGFX_EXTERN void GccGfx_CmdseqProgrammerWriteAdd( CYGFX_U32 task,
                                                   CYGFX_U32 data);

/**
    Inserts a copy instruction into the CmdSeq programmer sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] source  Address of the source of the copy operation.
    \param [in] destination  Address of the destination of the copy operation.

**/
CYGFX_EXTERN void GccGfx_CmdseqProgrammerCopy( CYGFX_U32  task,
                                               CYGFX_ADDR source,
                                               CYGFX_ADDR destination);

/**
    Determine the currently available fifo space for a task.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.

    \retval Current fifo space in words
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_CmdseqCurrentFifoSpace( CYGFX_U32 task);

/**
    Returns the minimum available fifo space for a task.
    \note The returned value may not be fully accurate. In order to limit the
    number of register read operations, the fifo queue size is kept in a shadow
    value and only updated if needed.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.

    \retval Minimum fifo space in words
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_CmdseqGetMinFifoSpace( CYGFX_U32 task);


/** \} end addtogroup */
#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_CMDSEQ_H */

