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
/******************************************************************************/

/*!
 * \date        Mon Jul 05 13:05:12 2021
 * \file        gfx_videoio_interrupt.h
 *              This file was generated automatically by agentx 1.00.5.
 *                Design:   videoio
 *                Source:   videoio.interrupt.xml
 *                Template: interrupt_h.tpl
 * \brief      2D-Graphics-Core videoio interrupt definition
 * Implements Building Block: InterruptK
 * \ingroup register_definitions
 */

#ifndef GFX_VIDEOIO_INTERRUPT_H
#define GFX_VIDEOIO_INTERRUPT_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* videoio interrupts */
/******************************************************************************/

/* CPU interrups */
/* EXTDST0_SHDLOAD: Shadow load (Display Engine 0, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST0_SHDLOAD 0x00000001u /* 0 */
/* EXTDST0_FRAMECOMPLETE: Frame complete (Display Engine 0, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST0_FRAMECOMPLETE 0x00000002u /* 1 */
/* EXTDST0_SEQCOMPLETE: Sequence complete (Display Engine 0, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST0_SEQCOMPLETE 0x00000004u /* 2 */
/* EXTDST4_SHDLOAD: Shadow load (Display Engine 0, Primary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST4_SHDLOAD 0x00000008u /* 3 */
/* EXTDST4_FRAMECOMPLETE: Frame complete (Display Engine 0, Primary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST4_FRAMECOMPLETE 0x00000010u /* 4 */
/* EXTDST4_SEQCOMPLETE: Sequence complete (Display Engine 0, Primary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST4_SEQCOMPLETE 0x00000020u /* 5 */
/* EXTDST1_SHDLOAD: Shadow load (Display Engine 1, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST1_SHDLOAD 0x00000040u /* 6 */
/* EXTDST1_FRAMECOMPLETE: Frame complete (Display Engine 1, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST1_FRAMECOMPLETE 0x00000080u /* 7 */
/* EXTDST1_SEQCOMPLETE: Sequence complete (Display Engine 1, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST1_SEQCOMPLETE 0x00000100u /* 8 */
/* EXTDST5_SHDLOAD: Shadow load (Display Engine 1, Primary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST5_SHDLOAD 0x00000200u /* 9 */
/* EXTDST5_FRAMECOMPLETE: Frame complete (Display Engine 1, Primary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST5_FRAMECOMPLETE 0x00000400u /* 10 */
/* EXTDST5_SEQCOMPLETE: Sequence complete (Display Engine 1, Primary Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_EXTDST5_SEQCOMPLETE 0x00000800u /* 11 */
/* STORE4_SHDLOAD: Shadow load (Capture Engine 0, Storage Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_STORE4_SHDLOAD 0x00001000u /* 12 */
/* STORE4_FRAMECOMPLETE: Frame complete (Capture Engine 0, Storage Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_STORE4_FRAMECOMPLETE 0x00002000u /* 13 */
/* STORE4_SEQCOMPLETE: Sequence complete (Capture Engine 0, Storage Stream). */
#define GFXINT_VIDEOIO_INTR0_BIT_STORE4_SEQCOMPLETE 0x00004000u /* 14 */
/* HISTOGRAM4_VALID: Measurement valid (Capture Engine 0). */
#define GFXINT_VIDEOIO_INTR0_BIT_HISTOGRAM4_VALID 0x00008000u /* 15 */
/* FRAMEDUMP_ERROR: Error condition (FrameDump unit). */
#define GFXINT_VIDEOIO_INTR0_BIT_FRAMEDUMP_ERROR 0x00010000u /* 16 */
/* FRAMECAP0_SYNC_ON: Synchronization status activated (Capture Engine 0). */
#define GFXINT_VIDEOIO_INTR0_BIT_FRAMECAP0_SYNC_ON 0x00020000u /* 17 */
/* FRAMECAP0_SYNC_OFF: Synchronization status deactivated (Capture Engine 0). */
#define GFXINT_VIDEOIO_INTR0_BIT_FRAMECAP0_SYNC_OFF 0x00040000u /* 18 */
/* ITUIFC0_ERROR: Error condition ITU interface (Capture Engine 0, Frame Capture Unit). */
#define GFXINT_VIDEOIO_INTR0_BIT_ITUIFC0_ERROR 0x00080000u /* 19 */
/* GENERALPURPOSE0: Software interrupt 0 (Common Control). */
#define GFXINT_VIDEOIO_INTR0_BIT_GENERALPURPOSE0 0x00100000u /* 20 */
/* GENERALPURPOSE1: Software interrupt 1 (Common Control). */
#define GFXINT_VIDEOIO_INTR0_BIT_GENERALPURPOSE1 0x00200000u /* 21 */
/* GENERALPURPOSE2: Software interrupt 2 (Common Control). */
#define GFXINT_VIDEOIO_INTR0_BIT_GENERALPURPOSE2 0x00400000u /* 22 */
/* GENERALPURPOSE3: Software interrupt 3 (Common Control). */
#define GFXINT_VIDEOIO_INTR0_BIT_GENERALPURPOSE3 0x00800000u /* 23 */
/* FRAMEGEN0_PRIMSYNC_ON: Synchronization status activated (Display Engine 0, Primary Stream). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_PRIMSYNC_ON 0x00000001u /* 0 */
/* FRAMEGEN0_PRIMSYNC_OFF: Synchronization status deactivated (Display Engine 0, Primary Stream). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_PRIMSYNC_OFF 0x00000002u /* 1 */
/* FRAMEGEN0_SECSYNC_ON: Synchronization status activated (Display Engine 0, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_SECSYNC_ON 0x00000004u /* 2 */
/* FRAMEGEN0_SECSYNC_OFF: Synchronization status deactivated (Display Engine 0, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_SECSYNC_OFF 0x00000008u /* 3 */
/* DISENGCFG_SHDLOAD0: Shadow load (Display Engine 0). */
#define GFXINT_VIDEOIO_INTR1_BIT_DISENGCFG_SHDLOAD0 0x00000010u /* 4 */
/* DISENGCFG_FRAMECOMPLETE0: Frame complete (Display Engine 0). */
#define GFXINT_VIDEOIO_INTR1_BIT_DISENGCFG_FRAMECOMPLETE0 0x00000020u /* 5 */
/* DISENGCFG_SEQCOMPLETE0: Sequence complete (Display Engine 0). */
#define GFXINT_VIDEOIO_INTR1_BIT_DISENGCFG_SEQCOMPLETE0 0x00000040u /* 6 */
/* FRAMEGEN0_INT0: Programmable interrupt 0 (Display Engine 0, Frame Generator). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_INT0 0x00000080u /* 7 */
/* FRAMEGEN0_INT1: Programmable interrupt 1 (Display Engine 0, Frame Generator). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_INT1 0x00000100u /* 8 */
/* FRAMEGEN0_INT2: Programmable interrupt 2 (Display Engine 0, Frame Generator). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_INT2 0x00000200u /* 9 */
/* FRAMEGEN0_INT3: Programmable interrupt 3 (Display Engine 0, Frame Generator). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN0_INT3 0x00000400u /* 10 */
/* SIG0_SHDLOAD: Shadow load (Display Engine 0, Signature Unit). */
#define GFXINT_VIDEOIO_INTR1_BIT_SIG0_SHDLOAD 0x00000800u /* 11 */
/* SIG0_VALID: Measurement valid (Display Engine 0, Signature Unit) */
#define GFXINT_VIDEOIO_INTR1_BIT_SIG0_VALID 0x00001000u /* 12 */
/* SIG0_ERROR: Error condition (Display Engine 0, Signature Unit) */
#define GFXINT_VIDEOIO_INTR1_BIT_SIG0_ERROR 0x00002000u /* 13 */
/* HISTOGRAM0_VALID: Measurement valid (Display Engine 0, Histogram Unit) */
#define GFXINT_VIDEOIO_INTR1_BIT_HISTOGRAM0_VALID 0x00004000u /* 14 */
/* RESERVED0: Reserved. */
#define GFXINT_VIDEOIO_INTR1_BIT_RESERVED0 0x00008000u /* 15 */
/* FRAMEGEN1_PRIMSYNC_ON: Synchronization status activated (Display Engine 1, Primary Stream). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_PRIMSYNC_ON 0x00010000u /* 16 */
/* FRAMEGEN1_PRIMSYNC_OFF: Synchronization status deactivated (Display Engine 1, Primary Stream). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_PRIMSYNC_OFF 0x00020000u /* 17 */
/* FRAMEGEN1_SECSYNC_ON: Synchronization status activated (Display Engine 1, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_SECSYNC_ON 0x00040000u /* 18 */
/* FRAMEGEN1_SECSYNC_OFF: Synchronization status deactivated (Display Engine 1, Secondary Stream). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_SECSYNC_OFF 0x00080000u /* 19 */
/* DISENGCFG_SHDLOAD1: Shadow load (Display Engine 1). */
#define GFXINT_VIDEOIO_INTR1_BIT_DISENGCFG_SHDLOAD1 0x00100000u /* 20 */
/* DISENGCFG_FRAMECOMPLETE1: Frame complete (Display Engine 1). */
#define GFXINT_VIDEOIO_INTR1_BIT_DISENGCFG_FRAMECOMPLETE1 0x00200000u /* 21 */
/* DISENGCFG_SEQCOMPLETE1: Sequence complete (Display Engine 1). */
#define GFXINT_VIDEOIO_INTR1_BIT_DISENGCFG_SEQCOMPLETE1 0x00400000u /* 22 */
/* FRAMEGEN1_INT0: Programmable interrupt 0 (Display Engine 1, Frame Generator). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_INT0 0x00800000u /* 23 */
/* FRAMEGEN1_INT1: Programmable interrupt 1 (Display Engine 1, Frame Generator). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_INT1 0x01000000u /* 24 */
/* FRAMEGEN1_INT2: Programmable interrupt 2 (Display Engine 1, Frame Generator). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_INT2 0x02000000u /* 25 */
/* FRAMEGEN1_INT3: Programmable interrupt 3 (Display Engine 1, Frame Generator). */
#define GFXINT_VIDEOIO_INTR1_BIT_FRAMEGEN1_INT3 0x04000000u /* 26 */
/* SIG1_SHDLOAD: Shadow load (Display Engine 1, Signature Unit). */
#define GFXINT_VIDEOIO_INTR1_BIT_SIG1_SHDLOAD 0x08000000u /* 27 */
/* SIG1_VALID: Measurement valid (Display Engine 1, Signature Unit) */
#define GFXINT_VIDEOIO_INTR1_BIT_SIG1_VALID 0x10000000u /* 28 */
/* SIG1_ERROR: Error condition (Display Engine 1, Signature Unit) */
#define GFXINT_VIDEOIO_INTR1_BIT_SIG1_ERROR 0x20000000u /* 29 */
/* HISTOGRAM1_VALID: Measurement valid (Display Engine 1, Histogram Unit) */
#define GFXINT_VIDEOIO_INTR1_BIT_HISTOGRAM1_VALID 0x40000000u /* 30 */
/* RESERVED1: Reserved. */
#define GFXINT_VIDEOIO_INTR1_BIT_RESERVED1 0x80000000u /* 31 */

/* Scheduler synchronisation ids  */

/* Programmer synchronisation ids  */


/*! \endcond Hide for doxygen */

#endif /* GFX_VIDEOIO_INTERRUPT_H */

