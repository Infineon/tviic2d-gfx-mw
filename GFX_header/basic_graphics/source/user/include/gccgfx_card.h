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
 * \file    gccgfx_card.h
 */


#ifndef GCCGFX_CARD_H
#define GCCGFX_CARD_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * \addtogroup gccgfx_card
 * \brief      CardU internal interface\n
 * The card component provides the following principle functionality to access HW IP's
 * \par Direct register access:
 *      This allows to directly access registers, i.e. the register read/write is
 *      executed immediately.
 * \par Queued register writes:
 *      Instead of immediately writing registers, this allows to write registers through
 *      a device queue. This decouples the generation of register values from the actual
 *      execution. In addition to writing register values, several synchronization functions
 *      exist for a device queue. They allow to delay the execution of register writes until
 *      a sync event occurs (e.g. a rendering of a framebuffer has finished) or notify the
 *      execution of register writes through a sync event (e.g. Blit Engine blit operation executed).
 *      \n
 *      The following device queues exist:
 *        Device Name |  Description
 *      --------------|--------------
 *       2D           | Blit Engine device.
 *       Display      | Display device. Each display controller has its own queue.
 *       Window       | Window device. Each window of the display controllers has its own queue.
 *       Capture      | Capture device. Each capture unit has its own queue.
 *       User         | User device. Provides synchronization mechanism across all other devices.\n
 * For more information refer to the Software Architecture Specification.
 */

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
/**
    Bit shift macro

    \param [in] x  Number of bit positions to be shifted to the left.

**/
#define GCCGFX_CARD_INT_BIT(x) (1uL << (x))

#if (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_ENABLED)
/**
    Debug/Release version of write function for successive addresses. Call this
    macro only after ::GccGfx_CardQueueStartWriteSeq.

    \param [in] handle  Write handle
    \param [in] addr  Write address for val
    \note The address will only be used for verification. The production version of
          the driver will not use it and the compiler removes this addr parameter.
    \param [in] val  The value for this address.
**/
#define GCCGFX_CARD_QUEUE_WRITE_SEQ_REG(handle, addr, val)               \
    do                                                            \
    {                                                             \
        GCCGFX_ERP_ASSERT(GccGfx_CardQueueSeqCheckReg(handle, (addr)));  \
        GccGfx_CardQueueWriteSeq(handle, (val));                  \
    }                                                             \
    while (0)
#else /* ! (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_ENABLED) */
/**
    Production version of write function for successive addresses. Call this
    macro only after ::GccGfx_CardQueueStartWriteSeq.
    \param [in] handle Write handle
    \param [in] addr Write address for val
                     \note The address will only be used for verification.
                     The production version of the driver will not
                     use it and the compiler removes this addr parameter.
    \param [in] val The value for this address.
**/
#define GCCGFX_CARD_QUEUE_WRITE_SEQ_REG(handle, addr, val) GccGfx_CardQueueWriteSeq(handle, (val))
#endif /* if (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_ENABLED) */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
typedef struct GCCGFX_CARD_HANDLE_TYPE* GCCGFX_CARD_HANDLE;    /**< Typedef for card handle. It is basically a pointer to a work item from CardK,
    but Card passes it only as an unspecified handle to other modules. */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Initialize the card component.

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardInit(void);

/**
    Write a 32-bit unsigned value to a VIDEOSS register. The following HW modules
    can be accessed:
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
CYGFX_EXTERN void GccGfx_CardRegWriteUint32( CYGFX_ADDR add,
                                             CYGFX_U32  value);

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
CYGFX_EXTERN void GccGfx_CardRegReadUint32( CYGFX_ADDR add,
                                            CYGFX_U32* pValue);

/** \name Device Functions
 */
/** \{ */

/**
    Returns a handle that can be used for write-operations to a device queue.
    The card module ensures that there is no shadow load pending, which prohibits
    reconfiguring of the device.

    \param [in] device  Device for which to get the write handle
    \param [in] cmd_words  Define the minimum number of words that the caller
                           requires to be able to append to the queue. cmd_words 0 will skip the check.
    \param [in] request  Bit field describing all shadow load types the caller
                         wants to trigger. Valid values are GCCGFX_DISP_SHDLD_... (see gccgfx_defines.h)
    \param [out] pHandle  Write handle for the requested device

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_ERP_ERR_CARD_DEV_BUSY If the writing to the device is denied
            because the previous commit call is not completely executed (e.g.
            shadow load request is pending).
    \retval ::CYGFX_ERP_ERR_CMD_SEQ_COMMAND_QUEUE_FULL If the requested cmd_words
            is not available.
    \retval Or the related internal error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_CardDevGetQueueHandle( GCCGFX_CARD_DEVICE_S device,
                                                       CYGFX_U32            cmd_words,
                                                       CYGFX_U64            request,
                                                       GCCGFX_CARD_HANDLE*  pHandle);

/**
    Completes the device write operation that has been started by
    ::GccGfx_CardDevGetQueueHandle().

    \param [in] handle  Write handle
    \param [in] bDiscard  Return the handle to CARD without triggering any HW
                          action
                          Note: For devices other than 2D, write operations are executed immediately;
                          the client should not do any write operations between
                          ::GccGfx_CardDevGetQueueHandle() and
                          ::GccGfx_CardQueueSubmit(bDiscard=TRUE).

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardQueueSubmit( GCCGFX_CARD_HANDLE handle,
                                          CYGFX_BOOL         bDiscard);

/**
    Completes the device write operation that has been started by
    ::GccGfx_CardDevGetQueueHandle().

    \param [in] handle  Write handle
    \param [in] bDiscard  Return the handle to CARD without triggering any HW
                          action.
                          Note: For a 2D device, all write operations are stored in a queue;
                          (bDiscard=CYGFX_TRUE) means that all write operations
                          since ::GccGfx_CardDevGetQueueHandle() are never executed.
    \param [in] RegisterOffs  Register offset
    \param [in] startline  Start line
    \param [in] endline  End line

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardQueueSubmit2D( GCCGFX_CARD_HANDLE handle,
                                            CYGFX_BOOL         bDiscard,
                                            CYGFX_U32          RegisterOffs,
                                            CYGFX_U16          startline,
                                            CYGFX_U16          endline);

/**
    Returns the device a write handle writes to.

    \param [in] handle  Write handle

    \retval The card device structure (it is a part structure of handle).
**/
CYGFX_EXTERN GCCGFX_CARD_DEVICE_S GccGfx_CardQueueGetDevice( GCCGFX_CARD_HANDLE handle);

/**
    Sets user specific values for the device queue specified by \a handle. This
    value is used for synchronization purposes, depending on the device. The
    display module for example uses the first value to define the shadow load
    requests issued by GccGfx_CardQueueSubmit(), while the second one is used in
    ::GccGfx_CardDevGetQueueHandle() to see if a pending shadow load forbids queuing
    of further commands. By default, the user specific values are set to 0.
    \note This functionality is not available for GCCGFX_CARD_DEVICE_2D.

    \param [in] handle  Write handle
    \param [in] requestShld  Bit field identifying the components for which a
                             shadow load should be triggered. Valid values are GCCGFX_DISP_SHDLD_... (see
                             gccgfx_defines.h)
    \param [in] waitShld  Bit field identifying the components for which a shadow
                          load must be completed before the handle is freed. Valid values are
                          GCCGFX_DISP_SHDLD_... (see gccgfx_defines.h)

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardQueueSetShdldMask( GCCGFX_CARD_HANDLE handle,
                                                CYGFX_U64          requestShld,
                                                CYGFX_U64          waitShld);

/**
    Adds a single 32-bit register write to the device queue specified by \a handle.
    Required Work Item space: 3.

    \param [in] handle  Write handle
    \param [in] addr  Address to write to
    \param [in] value  Value to write

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardQueueWriteValue( GCCGFX_CARD_HANDLE handle,
                                              CYGFX_ADDR         addr,
                                              CYGFX_U32          value);

/**
    Adds a series of 32-bit register writes to the device queue specified by \a
    handle. The start address for the register writes is specified by \a addr.
    After every register write, the write address is incremented. Required Work
    Item space: 2 + \a cnt.

    \param [in] handle  Write handle
    \param [in] addr  Start address for register writes
    \param [in] pValues  Pointer to values to write
    \param [in] cnt  Number of 32-bit values to write

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardQueueWriteData( GCCGFX_CARD_HANDLE handle,
                                             CYGFX_ADDR         addr,
                                             const CYGFX_U32*   pValues,
                                             CYGFX_U32          cnt);

/**
    Copies the value from a single 32-bit register to another 32-bit register.

    \param [in] handle  Write handle (must be type 2D)
    \param [in] srcaddr  Address to read from
    \param [in] dstaddr  Address to write to

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardQueueCopyRegister( GCCGFX_CARD_HANDLE handle,
                                                CYGFX_ADDR         srcaddr,
                                                CYGFX_ADDR         dstaddr);

/**
    Starts a series of sequential 32-bit register writes to the device queue
    specified by \a handle. The start address for the register writes is specified
    by \a addr. \a cnt specifies the number of register writes that must be done.
    The register writes are done by ::GccGfx_CardQueueWriteSeq. Required Work Item
    space: 2
    \note The exact number of register writes specified by \a cnt must be written.
    Failure to do so results in an undefined behavior.

    \param [in] handle  Write handle
    \param [in] addr  Start address to write to
    \param [in] cnt  Number of 32-bit values to write

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardQueueStartWriteSeq( GCCGFX_CARD_HANDLE handle,
                                                 CYGFX_ADDR         addr,
                                                 CYGFX_U32          cnt);

/**
    Adds the next sequential 32-bit register write to the device queue specified by
    \a handle. Before calling this function, the start-address and number of
    register-writes must be specified by ::GccGfx_CardQueueStartWriteSeq. Required
    Work Item space: 1.

    \param [in] handle  Write handle
    \param [in] value  Value to write

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardQueueWriteSeq( GCCGFX_CARD_HANDLE handle,
                                            CYGFX_U32          value);

#if (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_ENABLED)
/**
    Check that the address of a sequential written instruction
    (GccGfx_CardQueueWriteSeq) is correct. The function is not available for
    production. The production version does not use and check addresses.

    \param [in] handle  Write handle
    \param [in] addr  The address the gets the next value on a sequence

    \retval ::CYGFX_OK On success.
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_CardQueueSeqCheckReg( GCCGFX_CARD_HANDLE handle,
                                                     CYGFX_ADDR         addr);
#endif

/**
    Performs a non-blocking flush of a Device Queue, i.e. outstanding register
    writes of the device queue are submitted for processing. The completion of the
    register writes is signaled by the sync event returned in \a pSyncNodeId and \a
    pSyncValue. For display or window devices, nothing is flushed; \a pSyncNodeId
    and \a pSyncValue indicate, when the previous Commit is finished.

    \param [in] device  Device to flush
    \param [out] pSyncNodeId  ID of sync node that signals the write completion
    \param [out] pSyncValue  Sync node value that will signal the write completion

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardDevFlushSync( GCCGFX_CARD_DEVICE_S device,
                                           GCCGFX_SYNC_NODE_ID* pSyncNodeId,
                                           CYGFX_S32*           pSyncValue);

/**
    Adds a sync test to a device queue. The next action for the device will only be
    started after the sync test passes.
    \note This function is only for devices handles not for BlitEngine (2D) related
    callers.

    \param [in] handle  Write handle
    \param [in] syncNodeId  ID of sync node
    \param [in] syncValue  Sync value to test for

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardDevAddSyncTestOther( GCCGFX_CARD_HANDLE  handle,
                                                  GCCGFX_SYNC_NODE_ID syncNodeId,
                                                  CYGFX_S32           syncValue);

/**
    Adds an internal sync test to a device queue. The next action for the device
    will only be submitted after the sync test passes.
    \note This function is called by client module.

    \param [in] handle  Write handle
    \param [in] syncNodeId  ID of sync node
    \param [in] syncValue  Sync value to test for

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardDevAddSyncTestInternal( GCCGFX_CARD_HANDLE  handle,
                                                     GCCGFX_SYNC_NODE_ID syncNodeId,
                                                     CYGFX_S32           syncValue);

/**
    Insert a SYNC command into CmdSeq FIFO, so that CmdSeq stalls execution until a
    certain SYNC (interrupt) event was generated.

    \param [in] handle  Write handle
    \param [in] interrupt  Interrupt to wait for (valid values are
                           GFXINT_GFX2D_INTR_*)

    \retval None
**/
CYGFX_EXTERN void GccGfx_CardQueueWaitForInt( GCCGFX_CARD_HANDLE handle,
                                              CYGFX_U32          interrupt);
/** \} */

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_CARD_H */

