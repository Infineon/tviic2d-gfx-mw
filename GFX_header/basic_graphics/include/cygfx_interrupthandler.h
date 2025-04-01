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
 * \file    cygfx_interrupthandler.h
 */


#ifndef CYGFX_INTERRUPTHANDLER_H
#define CYGFX_INTERRUPTHANDLER_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* N/A */

#ifdef __cplusplus
extern "C"
{
#endif


/**
\addtogroup cygfx_interrupthandler
\code #include "cygfx_interrupthandler.h" \endcode
\brief VIDEOSS interrupt handler functions

    The interrupt API provides all required functions to handle
    VIDEOSS interrupts.

    \note VIDEOSS interrupts are required for the Graphics Driver.
    Therefore, it is required that all VIDEOSS IRQ lines connected to the Arm(R)
    core are enabled and linked to the ::CyGfx_kInterruptHandlerVideoio0,
    ::CyGfx_kInterruptHandlerVideoio1, and ::CyGfx_kInterruptHandlerGfx2d functions
    provided by this interface. The Graphics Driver ensures that the interrupt
    sources are reset.

    Optionally, it is possible for an application to register a callback function
    for dedicated VIDEOSS interrupts using ::CyGfx_kInterruptRegisterHandler.
    In this case, the driver will call the function after clearing the interrupt
    status.
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* Bit positions are equivalent to the definitions in the generated file, gfx_interrupt.h */

/** \name Interrupt signal identifiers. These can be used in ::CyGfx_kInterruptRegisterHandler. */
/** \{ */
typedef CYGFX_U08 CYGFX_INT_BIT;                                       /**< Type for interrupt bits. */
#define CYGFX_INT_BANK0_VIDEOIO0_EXTDST4_FRAMECOMPLETE    (1uL << 4u)  /**< GFXINT_VIDEOIO_INTR0_BIT_EXTDST4_FRAMECOMPLETE: Frame complete (Display Controller 0, primary stream). */
#define CYGFX_INT_BANK0_VIDEOIO0_EXTDST5_FRAMECOMPLETE    (1uL << 10u) /**< GFXINT_VIDEOIO_INTR0_BIT_EXTDST5_FRAMECOMPLETE: Frame complete (Display Controller 1, primary Stream). */
#define CYGFX_INT_BANK0_VIDEOIO0_STORE4_FRAMECOMPLETE     (1uL << 13u) /**< GFXINT_VIDEOIO_INTR0_BIT_STORE4_FRAMECOMPLETE: Frame complete (Capture Controller, Storage Stream). */
#define CYGFX_INT_BANK0_VIDEOIO0_HISTOGRAM4_VALID         (1uL << 15u) /**< GFXINT_VIDEOIO_INTR0_BIT_HISTOGRAM4_VALID: Measurement valid (Video/Capture Plane 0, Histogram #4 unit) */
#define CYGFX_INT_BANK0_VIDEOIO0_FRAMEDUMP_ERROR          (1uL << 16u) /**< GFXINT_VIDEOIO_INTR0_BIT_FRAMEDUMP_ERROR: Error condition (Display Plane 0, FrameDump unit). */
#define CYGFX_INT_BANK0_VIDEOIO0_FRAMECAP0_SYNC_ON        (1uL << 17u) /**< GFXINT_VIDEOIO_INTR0_BIT_FRAMECAP0_SYNC_ON: Synchronization status activated (FrameCap unit, Capture Plane 0) */
#define CYGFX_INT_BANK0_VIDEOIO0_FRAMECAP0_SYNC_OFF       (1uL << 18u) /**< GFXINT_VIDEOIO_INTR0_BIT_FRAMECAP0_SYNC_OFF: Synchronization status deactivated (FrameCap unit, Capture Plane 0). */
#define CYGFX_INT_BANK0_VIDEOIO0_ITUIFC0_ERROR            (1uL << 19u) /**< GFXINT_VIDEOIO_INTR0_BIT_ITUIFC0_ERROR: Error condition (ItuIfc unit, Capture Plane 0). */
#define CYGFX_INT_BANK0_VIDEOIO0_DEBUG_CAP2WIN            (1uL << 21u) /**< GFXINT_VIDEOIO_INTR0_BIT_GENERALPURPOSE1 (legacy COMCTRL_SW3): SW interrupt triggered by kernel when ring buffer is out of sync. */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_PRIMSYNC_ON    (1uL << 0u)  /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_PRIMSYNC_ON: Synchronization status activated (Display Controller 0, primary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_PRIMSYNC_OFF   (1uL << 1u)  /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_PRIMSYNC_OFF: Synchronization status deactivated (Display Controller 0, primary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_SECSYNC_ON     (1uL << 2u)  /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_SECSYNC_ON: Synchronization status activated (Display Controller 0, secondary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_SECSYNC_OFF    (1uL << 3u)  /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_SECSYNC_OFF: Synchronization status deactivated (Display Controller 0, secondary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_DISENGCFG_FRAMECOMPLETE0 (1uL << 5u)  /**< GFXINT_VIDEOIO_INTR1_BIT_DISENGCFG_FRAMECOMPLETE0: Frame complete (Display Controller, Display Stream 0). */
#ifdef TVIIC2D6MDDR
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_PRIMSYNC_ON    (1uL << 16u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_PRIMSYNC_ON: Synchronization status activated (Display Controller 1, primary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_PRIMSYNC_OFF   (1uL << 17u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_PRIMSYNC_OFF: Synchronization status deactivated (Display Controller 1, primary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_SECSYNC_ON     (1uL << 18u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_SECSYNC_ON: Synchronization status activated (Display Controller 1, secondary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_SECSYNC_OFF    (1uL << 19u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_SECSYNC_OFF: Synchronization status deactivated (Display Controller 1, secondary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_DISENGCFG_FRAMECOMPLETE1 (1uL << 21u) /**< GFXINT_VIDEOIO_INTR1_BIT_DISENGCFG_FRAMECOMPLETE1: Frame complete (Display Controller, Display Stream 1). */
#else
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_PRIMSYNC_ON    (1uL << 14u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_PRIMSYNC_ON: Synchronization status activated (Display Controller 1, primary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_PRIMSYNC_OFF   (1uL << 15u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_PRIMSYNC_OFF: Synchronization status deactivated (Display Controller 1, primary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_SECSYNC_ON     (1uL << 16u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_SECSYNC_ON: Synchronization status activated (Display Controller 1, secondary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_SECSYNC_OFF    (1uL << 17u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_SECSYNC_OFF: Synchronization status deactivated (Display Controller 1, secondary stream). */
#define CYGFX_INT_BANK1_VIDEOIO1_DISENGCFG_FRAMECOMPLETE1 (1uL << 19u) /**< GFXINT_VIDEOIO_INTR1_BIT_DISENGCFG_FRAMECOMPLETE1: Frame complete (Display Controller, Display Stream 1). */
#endif
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_INT2           (1uL << 9u)  /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_INT2: Programmable interrupt 2 (Display Controller 0, Frame Generator). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_INT3           (1uL << 10u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_INT3: Programmable interrupt 3 (Display Controller 0, Frame Generator). */
#ifdef TVIIC2D6MDDR
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_INT2           (1uL << 25u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_INT2: Programmable interrupt 2 (Display Controller 1, Frame Generator). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_INT3           (1uL << 26u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_INT3: Programmable interrupt 3 (Display Controller 1, Frame Generator). */
#else
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_INT2           (1uL << 23u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_INT2: Programmable interrupt 2 (Display Controller 1, Frame Generator). */
#define CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_INT3           (1uL << 24u) /**< GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_INT3: Programmable interrupt 3 (Display Controller 1, Frame Generator). */
#endif
#define CYGFX_INT_BANK2_GFX2D_CMDSEQ_ERROR                (1uL << 23u) /**< GFXINT_GFX2D_INTR_BIT_CMDSEQERROR: Error condition (Command Sequencer). */
#define CYGFX_INT_BANK2_GFX2D_DRAW_ERROR                  (1uL << 11u) /**< GFXINT_GFX2D_INTR_BIT_DRAWERROR: Error occurred during the drawing operation (Drawing Engine). */
/** \} */

/** \name Interrupt bank identifiers */
/** \{ */
typedef CYGFX_U08 CYGFX_INT_BANK;                   /**< Bank for interrupts */
#define CYGFX_INT_BANK_VIDEOIO0 ((CYGFX_INT_BANK)0) /**< Bank 0 (VIDEOIO0) */
#define CYGFX_INT_BANK_VIDEOIO1 ((CYGFX_INT_BANK)1) /**< Bank 1 (VIDEOIO1) */
#define CYGFX_INT_BANK_GFX2D    ((CYGFX_INT_BANK)2) /**< Bank 2 (GFX2D) */
/** \} */

/**
    Interrupt Callback Prototype

    \param [in] bank  Interrupt bank. Can be CYGFX_INT_BANK_VIDEOIO0,
                      CYGFX_INT_BANK_VIDEOIO1, or CYGFX_INT_BANK_GFX2D.
    \param [in] intrrpt  "OR"ed combination of CYGFX_INTERRUPT_HW_XXX flags.

**/
typedef  void (* CyGfx_InterruptHandler)( CYGFX_INT_BANK bank,
                                          CYGFX_U32      intrrpt);

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \name Interrupt operation functions
 * \{
 */

/**
    Interrupt Handler Function
    Interrupt service routine for VIDEOSS interrupts.
    This function must be called by Arm(R) if a VIDEOIO0 interrupt occurs.
    The function ensures that the interrupt status in VIDEOSS is reset.
    The related interrupt status in Arm(R) must be reset by the calling function.

    \retval None
**/
CYGFX_EXTERN void CyGfx_kInterruptHandlerVideoio0(void);

/**
    Interrupt Handler Function
    Interrupt service routine for VIDEOSS interrupts.
    This function must be called by Arm(R) if a VIDEOIO1 interrupt occurs.
    The function ensures that the interrupt status in VIDEOSS is reset.
    The related interrupt status in Arm(R) must be reset by the calling function.

    \retval None
**/
CYGFX_EXTERN void CyGfx_kInterruptHandlerVideoio1(void);

/**
    Interrupt Handler Function
    Interrupt service routine for VIDEOSS interrupts.
    This function must be called by Arm(R) if a GFX2D interrupt occurs.
    The function ensures that the interrupt status in VIDEOSS is reset.
    The related interrupt status in Arm(R) must be reset by the calling function.

    \retval None
**/
CYGFX_EXTERN void CyGfx_kInterruptHandlerGfx2d(void);

/**
    Sets an application-defined interrupt handler function.
    This function allows an application to define a callback function for dedicated
    interrupts at runtime.
    The function ensures that the related interrupts are enabled in VIDEOSS.

    \note The callback function must not call any Graphics Driver APIs as direct
    action because it is part of the Arm(R) interrupt sequence.
    The callback function will be called \e after the driver has handled the
    interrupt internally.

    \note Only one callback function can be registered.
    A second call to CyGfx_kInterruptRegisterHandler will change the callback
    function for all interrupts defined in any of the calls to
    CyGfx_kInterruptRegisterHandler.

    \param [in] bank  Interrupt bank in the range from CYGFX_INT_BANK_0 to
                      CYGFX_INT_BANK_2
    \param [in] bits  "OR"ed Bitmask with all interrupts calling pHandler.
                      See ::CYGFX_INT_BANK0_VIDEOIO0_STORE4_FRAMECOMPLETE, etc..
    \param [in] pHandler  The pHandler Callback function that will be called if one
                          or more requested interrupts occur.
                          The bank and bits parameters indicate the related interrupts.
                          If pHandler is zero, the callback function will no longer be called.

    \retval ::CYGFX_OK On success.
    \retval ::CYGFX_KERP_ERR_INTERRUPT_INVALID_PARAMETER Invalid interrupt id for
    ::CYGFX_INT_BANK_VIDEOIO1, or invalid interrupt bank.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_kInterruptRegisterHandler( CYGFX_INT_BANK         bank,
                                                          CYGFX_U32              bits,
                                                          CyGfx_InterruptHandler pHandler);

/** \} */

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_INTERRUPTHANDLER_H */

