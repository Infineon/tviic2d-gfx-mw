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
 * \file        gfx_gfx2d_interrupt.h
 *              This file was generated automatically by agentx 1.00.5.
 *                Design:   gfx2d
 *                Source:   gfx2d.interrupt.xml
 *                Template: interrupt_h.tpl
 * \brief      2D-Graphics-Core gfx2d interrupt definition
 * Implements Building Block: InterruptK
 * \ingroup register_definitions
 */

#ifndef GFX_GFX2D_INTERRUPT_H
#define GFX_GFX2D_INTERRUPT_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* gfx2d interrupts */
/******************************************************************************/

/* CPU interrups */
/* SHDLOAD: Shadow load (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SHDLOAD 0x00000001u /* 0 */
/* FRAMECOMPLETE: Frame complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_FRAMECOMPLETE 0x00000002u /* 1 */
/* SEQCOMPLETE: Sequence complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SEQCOMPLETE 0x00000004u /* 2 */
/* SYNCIDCOMPLETE0: Sync ID request 0 complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SYNCIDCOMPLETE0 0x00000008u /* 3 */
/* SYNCIDCOMPLETE1: Sync ID request 1 complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SYNCIDCOMPLETE1 0x00000010u /* 4 */
/* SYNCIDCOMPLETE2: Sync ID request 2 complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SYNCIDCOMPLETE2 0x00000020u /* 5 */
/* SYNCIDCOMPLETE3: Sync ID request 3 complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SYNCIDCOMPLETE3 0x00000040u /* 6 */
/* SYNCIDCOMPLETE4: Sync ID request 4 complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SYNCIDCOMPLETE4 0x00000080u /* 7 */
/* SYNCIDCOMPLETE5: Sync ID request 5 complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SYNCIDCOMPLETE5 0x00000100u /* 8 */
/* SYNCIDCOMPLETE6: Sync ID request 6 complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SYNCIDCOMPLETE6 0x00000200u /* 9 */
/* SYNCIDCOMPLETE7: Sync ID request 7 complete (Blit Engine). */
#define GFXINT_GFX2D_INTR_BIT_SYNCIDCOMPLETE7 0x00000400u /* 10 */
/* DRAWERROR: Error occured during drawing operation (Drawing Engine) */
#define GFXINT_GFX2D_INTR_BIT_DRAWERROR 0x00000800u /* 11 */
/* RESERVED2: Not implemented, reserved for future (Blit Engine) */
#define GFXINT_GFX2D_INTR_BIT_RESERVED2 0x00001000u /* 12 */
/* GENERALPURPOSE0: Software interrupt 0 (Common Control). */
#define GFXINT_GFX2D_INTR_BIT_GENERALPURPOSE0 0x00002000u /* 13 */
/* GENERALPURPOSE1: Software interrupt 1 (Common Control). */
#define GFXINT_GFX2D_INTR_BIT_GENERALPURPOSE1 0x00004000u /* 14 */
/* GENERALPURPOSE2: Software interrupt 2 (Common Control). */
#define GFXINT_GFX2D_INTR_BIT_GENERALPURPOSE2 0x00008000u /* 15 */
/* GENERALPURPOSE3: Software interrupt 3 (Common Control). */
#define GFXINT_GFX2D_INTR_BIT_GENERALPURPOSE3 0x00010000u /* 16 */
/* GENERALPURPOSE4: Software interrupt 4 (Common Control). */
#define GFXINT_GFX2D_INTR_BIT_GENERALPURPOSE4 0x00020000u /* 17 */
/* GENERALPURPOSE5: Software interrupt 5 (Common Control). */
#define GFXINT_GFX2D_INTR_BIT_GENERALPURPOSE5 0x00040000u /* 18 */
/* GENERALPURPOSE6: Software interrupt 6 (Common Control). */
#define GFXINT_GFX2D_INTR_BIT_GENERALPURPOSE6 0x00080000u /* 19 */
/* GENERALPURPOSE7: Software interrupt 7 (Common Control). */
#define GFXINT_GFX2D_INTR_BIT_GENERALPURPOSE7 0x00100000u /* 20 */
/* DRAWCOMPLETE: Drawing complete (Drawing Engine). */
#define GFXINT_GFX2D_INTR_BIT_DRAWCOMPLETE 0x00200000u /* 21 */
/* CMDSEQSYNC: Synchronization request to SW (Command Sequencer). */
#define GFXINT_GFX2D_INTR_BIT_CMDSEQSYNC 0x00400000u /* 22 */
/* CMDSEQERROR: Error condition (Command Sequencer). */
#define GFXINT_GFX2D_INTR_BIT_CMDSEQERROR 0x00800000u /* 23 */

/* Scheduler synchronisation ids  */
/* SHDLOAD: Shadow load (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SHDLOAD 0u
/* FRAMECOMPLETE: Frame complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_FRAMECOMPLETE 1u
/* SEQCOMPLETE: Sequence complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SEQCOMPLETE 2u
/* SYNCIDCOMPLETE0: Sync ID request 0 complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SYNCIDCOMPLETE0 3u
/* SYNCIDCOMPLETE1: Sync ID request 1 complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SYNCIDCOMPLETE1 4u
/* SYNCIDCOMPLETE2: Sync ID request 2 complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SYNCIDCOMPLETE2 5u
/* SYNCIDCOMPLETE3: Sync ID request 3 complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SYNCIDCOMPLETE3 6u
/* SYNCIDCOMPLETE4: Sync ID request 4 complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SYNCIDCOMPLETE4 7u
/* SYNCIDCOMPLETE5: Sync ID request 5 complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SYNCIDCOMPLETE5 8u
/* SYNCIDCOMPLETE6: Sync ID request 6 complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SYNCIDCOMPLETE6 9u
/* SYNCIDCOMPLETE7: Sync ID request 7 complete (Blit Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_SYNCIDCOMPLETE7 10u
/* DRAWERROR: Error occured during drawing operation (Drawing Engine) */
#define GFXINT_GFX2D_SCHEDULER_ID_DRAWERROR 11u
/* RESERVED2: Not implemented, reserved for future (Blit Engine) */
#define GFXINT_GFX2D_SCHEDULER_ID_RESERVED2 12u
/* GENERALPURPOSE0: Software interrupt 0 (Common Control). */
#define GFXINT_GFX2D_SCHEDULER_ID_GENERALPURPOSE0 13u
/* GENERALPURPOSE1: Software interrupt 1 (Common Control). */
#define GFXINT_GFX2D_SCHEDULER_ID_GENERALPURPOSE1 14u
/* GENERALPURPOSE2: Software interrupt 2 (Common Control). */
#define GFXINT_GFX2D_SCHEDULER_ID_GENERALPURPOSE2 15u
/* GENERALPURPOSE3: Software interrupt 3 (Common Control). */
#define GFXINT_GFX2D_SCHEDULER_ID_GENERALPURPOSE3 16u
/* GENERALPURPOSE4: Software interrupt 4 (Common Control). */
#define GFXINT_GFX2D_SCHEDULER_ID_GENERALPURPOSE4 17u
/* GENERALPURPOSE5: Software interrupt 5 (Common Control). */
#define GFXINT_GFX2D_SCHEDULER_ID_GENERALPURPOSE5 18u
/* GENERALPURPOSE6: Software interrupt 6 (Common Control). */
#define GFXINT_GFX2D_SCHEDULER_ID_GENERALPURPOSE6 19u
/* GENERALPURPOSE7: Software interrupt 7 (Common Control). */
#define GFXINT_GFX2D_SCHEDULER_ID_GENERALPURPOSE7 20u
/* DRAWCOMPLETE: Drawing complete (Drawing Engine). */
#define GFXINT_GFX2D_SCHEDULER_ID_DRAWCOMPLETE 21u
/* LBHREADY0: Sync status for link 0 (LBH Controller). */
#define GFXINT_GFX2D_SCHEDULER_ID_LBHREADY0 22u
/* LBHREADY1: Sync status for link 1 (LBH Controller). */
#define GFXINT_GFX2D_SCHEDULER_ID_LBHREADY1 23u
/* LBHREADY2: Sync status for link 2 (LBH Controller). */
#define GFXINT_GFX2D_SCHEDULER_ID_LBHREADY2 24u
/* LBHREADY3: Sync status for link 3 (LBH Controller). */
#define GFXINT_GFX2D_SCHEDULER_ID_LBHREADY3 25u
/* LBHREADY4: Sync status for link 4 (LBH Controller). */
#define GFXINT_GFX2D_SCHEDULER_ID_LBHREADY4 26u
/* CONSTACTIVE: Constant active status. */
#define GFXINT_GFX2D_SCHEDULER_ID_CONSTACTIVE 27u

/* Programmer synchronisation ids  */
/* SHDLOAD: Shadow load (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SHDLOAD 0u
/* FRAMECOMPLETE: Frame complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_FRAMECOMPLETE 1u
/* SEQCOMPLETE: Sequence complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SEQCOMPLETE 2u
/* SYNCIDCOMPLETE0: Sync ID request 0 complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SYNCIDCOMPLETE0 3u
/* SYNCIDCOMPLETE1: Sync ID request 1 complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SYNCIDCOMPLETE1 4u
/* SYNCIDCOMPLETE2: Sync ID request 2 complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SYNCIDCOMPLETE2 5u
/* SYNCIDCOMPLETE3: Sync ID request 3 complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SYNCIDCOMPLETE3 6u
/* SYNCIDCOMPLETE4: Sync ID request 4 complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SYNCIDCOMPLETE4 7u
/* SYNCIDCOMPLETE5: Sync ID request 5 complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SYNCIDCOMPLETE5 8u
/* SYNCIDCOMPLETE6: Sync ID request 6 complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SYNCIDCOMPLETE6 9u
/* SYNCIDCOMPLETE7: Sync ID request 7 complete (Blit Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_SYNCIDCOMPLETE7 10u
/* DRAWERROR: Error occured during drawing operation (Drawing Engine) */
#define GFXINT_GFX2D_PROGRAMMER_ID_DRAWERROR 11u
/* RESERVED2: Not implemented, reserved for future (Blit Engine) */
#define GFXINT_GFX2D_PROGRAMMER_ID_RESERVED2 12u
/* GENERALPURPOSE0: Software interrupt 0 (Common Control). */
#define GFXINT_GFX2D_PROGRAMMER_ID_GENERALPURPOSE0 13u
/* GENERALPURPOSE1: Software interrupt 1 (Common Control). */
#define GFXINT_GFX2D_PROGRAMMER_ID_GENERALPURPOSE1 14u
/* GENERALPURPOSE2: Software interrupt 2 (Common Control). */
#define GFXINT_GFX2D_PROGRAMMER_ID_GENERALPURPOSE2 15u
/* GENERALPURPOSE3: Software interrupt 3 (Common Control). */
#define GFXINT_GFX2D_PROGRAMMER_ID_GENERALPURPOSE3 16u
/* GENERALPURPOSE4: Software interrupt 4 (Common Control). */
#define GFXINT_GFX2D_PROGRAMMER_ID_GENERALPURPOSE4 17u
/* GENERALPURPOSE5: Software interrupt 5 (Common Control). */
#define GFXINT_GFX2D_PROGRAMMER_ID_GENERALPURPOSE5 18u
/* GENERALPURPOSE6: Software interrupt 6 (Common Control). */
#define GFXINT_GFX2D_PROGRAMMER_ID_GENERALPURPOSE6 19u
/* GENERALPURPOSE7: Software interrupt 7 (Common Control). */
#define GFXINT_GFX2D_PROGRAMMER_ID_GENERALPURPOSE7 20u
/* DRAWCOMPLETE: Drawing complete (Drawing Engine). */
#define GFXINT_GFX2D_PROGRAMMER_ID_DRAWCOMPLETE 21u


/*! \endcond Hide for doxygen */

#endif /* GFX_GFX2D_INTERRUPT_H */

