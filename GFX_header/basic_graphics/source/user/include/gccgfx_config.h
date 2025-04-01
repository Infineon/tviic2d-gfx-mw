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
 * \file    gccgfx_config.h
 * \brief   Config module interface
 */


#ifndef GCCGFX_CONFIG_H
#define GCCGFX_CONFIG_H


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

/* Forward declarations of structures that are passed by pointers, but not
   dereferenced here. */
struct GCCGFX_IRIS_WINDOW_TYPE;
struct GCCGFX_CARD_HANDLE_TYPE;

/**
    Type of the capture commit function.

    \param [in] cap  The capture context

**/
typedef  CYGFX_ERROR (* GccGfx_ConfigCapCommitType)( CYGFX_CAP_CTX cap);

/**
    Type of the set capture window function

    \param [in] cap  The capture context
    \param [in,out] pWin  A pointer to the window object

**/
typedef  CYGFX_ERROR (* GccGfx_ConfigCapSetWindowType)( CYGFX_CAP_CTX                   cap,
                                                        struct GCCGFX_IRIS_WINDOW_TYPE* pWin);

/**
    Type of the direct capture enable function.

    \param [in] cardHandle  The card handle
    \param [in] cap  The capture context

**/
typedef  void (* GccGfx_ConfigCapDirectCaptureEnableType)( struct GCCGFX_CARD_HANDLE_TYPE* cardHandle,
                                                           CYGFX_CAP_CTX                   cap);

/**
    Type of the interrupt service routine called when capture vsync interrupt
    occurs.

    \param [in] unit  Capture unit; must be ::CYGFX_CAP_UNIT_0.

    \retval None
**/
typedef  void (* GccGfx_ConfigKCapIsrFrameCompleteType)( CYGFX_U32 unit);

/**
    Type of interrupt service routine called when capture shadow registers are
    loaded.

    \retval None
**/
typedef  void (* GccGfx_ConfigKCapIsrShdLoadType)(void);

/**
    Type of interrupt service routine, called when capture SyncOn interrupt occurs.

    \retval None
**/
typedef  void (* GccGfx_ConfigKCapIsrSyncOnType)(void);

/**
    Type of interrupt service routine, called when capture SyncOff interrupt occurs.

    \retval None
**/
typedef  void (* GccGfx_ConfigKCapIsrSyncOffType)(void);

/**
    Type of function that triggers an update in CaptureK.

    \param [in] pWi  The work item to realize

    \retval None
**/
typedef  void (* GccGfx_ConfigKCapCardCapDevOpReadyType)( GCCGFX_CARD_WORKITEM_S* pWi);

/**
    Type of the OTF window update function

    \param [in] cardHandle  A card object handle
    \param [in,out] pIrisWin  A pointer to a window object
    \param [in] bEnable  Enable flag
    \param [in] keepLines  Number of lines to preserve

**/
typedef  CYGFX_ERROR (* GccGfx_ConfigBeUpdateOtfWinType)( struct GCCGFX_CARD_HANDLE_TYPE* cardHandle,
                                                          struct GCCGFX_IRIS_WINDOW_TYPE* pIrisWin,
                                                          CYGFX_BOOL                      bEnable,
                                                          CYGFX_U32                       keepLines);

/**
    Type of a function that checks if an OTF window has rendered content.

    \param [in] pIrisWin  Pointer to the window description.

    \retval CYGFX_TRUE If rendered content is available.
    \retval CYGFX_FALSE Otherwise.
**/
typedef  CYGFX_BOOL (* GccGfx_ConfigBeHasRenderContentType)( const struct GCCGFX_IRIS_WINDOW_TYPE* pIrisWin);

/**
    Type of a function that inserts a write command into the CMDSEQ programmer
    sequence for the elements of an array.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] address  Destination address of the write operation.
    \param [in] count  Number of values to be written.
    \param [in] data[]  Array of data to be written.

**/
typedef  void (* GccGfx_ConfigCmdseqProgrammerWriteArrayType)( CYGFX_U32       task,
                                                               CYGFX_U32       address,
                                                               CYGFX_U32       count,
                                                               const CYGFX_U32 data[]);

/**
    Type of a function that insert a single write command into the CMDSEQ
    programmer sequence

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] address  Destination address of the write operation.
    \param [in] data  Value to be written.

    \retval None
**/
typedef  void (* GccGfx_ConfigCmdseqProgrammerWriteSingleType)( CYGFX_U32 task,
                                                                CYGFX_U32 address,
                                                                CYGFX_U32 data);

/**
    Type of a function that inserts a write command for multiple values into the
    CmdSeq programmer sequence. The values to write must be added with
    GccGfx_CmdseqProgrammerWriteAdd().

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] address  Destination address of the first value to write.
    \param [in] count  Number of values to write.

**/
typedef  void (* GccGfx_ConfigCmdseqProgrammerWriteStartType)( CYGFX_U32  task,
                                                               CYGFX_ADDR address,
                                                               CYGFX_U32  count);

/**
    Type of a function that starts a programmer sequence.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] requiredWords  Number of words that will be added (required free
                               fifo space).

    \retval CYGFX_ERP_ERR_CMD_SEQ_FIFO_UNINITIALIZED The task buffer was not
            initialized.
    \retval CYGFX_ERP_ERR_CMD_SEQ_COMMAND_QUEUE_FULL Not enough space in the
            command buffer.
**/
typedef  CYGFX_ERROR (* GccGfx_ConfigCmdseqStartProgrammerSequenceType)( CYGFX_U32 task,
                                                                         CYGFX_U32 requiredWords);

/**
    Type of a function that adds data to a write sequence started with
    GccGfx_CmdseqProgrammerWriteStart.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] data  A value to write.

**/
typedef  void (* GccGfx_ConfigCmdseqProgrammerWriteAddType)( CYGFX_U32 task,
                                                             CYGFX_U32 data);

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/
CYGFX_EXTERN CYGFX_CONFIG_DEVICE                            cygfx_Config_ActiveDevice;                     /**< Active device identifier. */

CYGFX_EXTERN CYGFX_U32                                      cygfx_Config_DispNoBlock;                      /**< Display functions are non-blocking, if this is not 0. */
CYGFX_EXTERN CYGFX_U32                                      cygfx_Config_CapNoBlock;                       /**< Capture functions are non-blocking, if this is not 0. */
CYGFX_EXTERN CYGFX_U32                                      cygfx_Config_LbhHeight;                        /**< Number of lines in one slice */
CYGFX_EXTERN CYGFX_U32                                      cygfx_Config_LbWidth;                          /**< Pixels of one line of slice */
CYGFX_EXTERN CyGfx_CacheCleanFunctionType                   cygfx_Config_CacheCleanFunctionPtr;            /**< Pointer to a CyGfx_CacheCleanFunctionType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigCapCommitType                     cygfx_Config_CapCommitPtr;                     /**< Pointer to a GccGfx_ConfigCapCommitType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigCapSetWindowType                  cygfx_Config_CapSetWindowPtr;                  /**< Pointer to a GccGfx_ConfigCapSetWindowType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigCapDirectCaptureEnableType        cygfx_Config_CapDirectCaptureEnablePtr;        /**< Pointer to a GccGfx_ConfigCapDirectCaptureEnableType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigKCapIsrFrameCompleteType          cygfx_Config_KCapIsrFrameCompletePtr;          /**< Pointer to a GccGfx_ConfigKCapIsrFrameCompleteType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigKCapIsrShdLoadType                cygfx_Config_KCapIsrShdLoadPtr;                /**< Pointer to a GccGfx_ConfigKCapIsrShdLoadType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigKCapIsrSyncOnType                 cygfx_Config_KCapIsrSyncOnPtr;                 /**< Pointer to a GccGfx_ConfigKCapIsrSyncOnType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigKCapIsrSyncOffType                cygfx_Config_KCapIsrSyncOffPtr;                /**< Pointer to a GccGfx_ConfigKCapIsrSyncOffType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigKCapCardCapDevOpReadyType         cygfx_Config_KCapCardCapDevOpReadyPtr;         /**< Pointer to a GccGfx_ConfigKCapCardCapDevOpReadyType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigBeUpdateOtfWinType                cygfx_Config_BeUpdateOtfWinPtr;                /**< Pointer to a GccGfx_ConfigBeUpdateOtfWinType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigBeHasRenderContentType            cygfx_Config_BeHasRenderContentPtr;            /**< Pointer to a GccGfx_ConfigBeHasRenderContentType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigCmdseqProgrammerWriteArrayType    cygfx_Config_CmdseqProgrammerWriteArrayPtr;    /**< Pointer to a GccGfx_ConfigCmdseqProgrammerWriteArrayType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigCmdseqProgrammerWriteSingleType   cygfx_Config_CmdseqProgrammerWriteSinglePtr;   /**< Pointer to a GccGfx_ConfigCmdseqProgrammerWriteSingleType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigCmdseqProgrammerWriteStartType    cygfx_Config_CmdseqProgrammerWriteStartPtr;    /**< Pointer to a GccGfx_ConfigCmdseqProgrammerWriteStartType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigCmdseqStartProgrammerSequenceType cygfx_Config_CmdseqStartProgrammerSequencePtr; /**< Pointer to a GccGfx_ConfigCmdseqStartProgrammerSequenceType function or a dummy function. */
CYGFX_EXTERN GccGfx_ConfigCmdseqProgrammerWriteAddType      cygfx_Config_CmdseqProgrammerWriteAddPtr;      /**< Pointer to a GccGfx_ConfigCmdseqProgrammerWriteAddType function or a dummy function. */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Initialize the Config component.

    \retval None
**/
CYGFX_EXTERN void GccGfx_ConfigInit(void);

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_CONFIG_H */

