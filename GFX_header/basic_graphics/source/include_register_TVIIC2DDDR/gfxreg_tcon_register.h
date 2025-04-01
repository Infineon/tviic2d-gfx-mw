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
 * \date        Mon Jul 05 13:05:15 2021
 * \file        gfxreg_tcon_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   tcon
 *              Source:   tcon.component.xml
 *              Template: component_h.tpl
 * \brief      Iris tcon register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_TCON_REGISTER_H
#define GFXREG_TCON_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* tcon registers */
/******************************************************************************/

/* Deviation from MISRA C:2012 Dir-1.1.
   Justification: This cannot be avoided and is supported by the required compiler. */
/* PRQA S 0380 EOF */

/* Deviation from MISRA C:2012 Rule-1.3, Rule-5.2.
   Justification: This cannot be avoided and is supported by the required compiler. */
/* PRQA S 0779 EOF */

/* Deviation from MISRA C:2012 Dir-1.1.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */


/* SSQCNTS: The 64 Sequencer Position Definitions registers define the X/Y scan positions of the sequencers, hold their output value and assign the sequencer to an odd/even field */
#define GFXREG_TCON_SSQCNTS 0x00000000U
/* SSQCNTS_OUT: This bit holds the value (0,1) to be output when the X/Y scan position is reached. */
#define GFXREG_TCON_SSQCNTS_SSQCNTS_OUT_FSHIFT 31U
#define GFXREG_TCON_SSQCNTS_SSQCNTS_OUT_FMASK 0x1U
#define GFXREG_TCON_SSQCNTS_SETM_SSQCNTS_OUT(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SSQCNTS_SET_SSQCNTS_OUT(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SSQCNTS_GET_SSQCNTS_OUT(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SSQCNTS_OUT(s,val) ( (s)->ssqcnts = ((s)->ssqcnts & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SSQCNTS_OUT(s,val)  ( (s)->ssqcnts = (((s)->ssqcnts & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SSQCNTS_OUT(s) ((((s)->ssqcnts) >> 31U) & 0x1UL)
#define GFXREG_TCON_SSQCNTS_SSQCNTS_OUT_RESET (none)U

/* SSQCNTS_SEQX: X scan position  */
#define GFXREG_TCON_SSQCNTS_SSQCNTS_SEQX_FSHIFT 16U
#define GFXREG_TCON_SSQCNTS_SSQCNTS_SEQX_FMASK 0x7fffU
#define GFXREG_TCON_SSQCNTS_SETM_SSQCNTS_SEQX(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SSQCNTS_SET_SSQCNTS_SEQX(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SSQCNTS_GET_SSQCNTS_SEQX(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SSQCNTS_SEQX(s,val) ( (s)->ssqcnts = ((s)->ssqcnts & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SSQCNTS_SEQX(s,val)  ( (s)->ssqcnts = (((s)->ssqcnts & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SSQCNTS_SEQX(s) ((((s)->ssqcnts) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SSQCNTS_SSQCNTS_SEQX_RESET (none)U

/* SSQCNTS_FIELD: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SSQCNTS_SSQCNTS_FIELD_FSHIFT 15U
#define GFXREG_TCON_SSQCNTS_SSQCNTS_FIELD_FMASK 0x1U
#define GFXREG_TCON_SSQCNTS_SETM_SSQCNTS_FIELD(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SSQCNTS_SET_SSQCNTS_FIELD(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SSQCNTS_GET_SSQCNTS_FIELD(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SSQCNTS_FIELD(s,val) ( (s)->ssqcnts = ((s)->ssqcnts & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SSQCNTS_FIELD(s,val)  ( (s)->ssqcnts = (((s)->ssqcnts & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SSQCNTS_FIELD(s) ((((s)->ssqcnts) >> 15U) & 0x1UL)
#define GFXREG_TCON_SSQCNTS_SSQCNTS_FIELD_RESET (none)U

/* SSQCNTS_SEQY: Y scan position  */
#define GFXREG_TCON_SSQCNTS_SSQCNTS_SEQY_FSHIFT 0U
#define GFXREG_TCON_SSQCNTS_SSQCNTS_SEQY_FMASK 0x7fffU
#define GFXREG_TCON_SSQCNTS_SETM_SSQCNTS_SEQY(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SSQCNTS_SET_SSQCNTS_SEQY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SSQCNTS_GET_SSQCNTS_SEQY(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SSQCNTS_SEQY(s,val) ( (s)->ssqcnts = ((s)->ssqcnts & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SSQCNTS_SEQY(s,val)  ( (s)->ssqcnts = (((s)->ssqcnts & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SSQCNTS_SEQY(s) ((((s)->ssqcnts) ) & 0x7fffUL)
#define GFXREG_TCON_SSQCNTS_SSQCNTS_SEQY_RESET (none)U



/* SSQCYCLE: This bitfield sets the sequencer cycle length. The value set here -1 is the number of sequencer cycles */
#define GFXREG_TCON_SSQCYCLE 0x00000400U
/* SSQCYCLE: Sequencer cycle length (number -1) of sequencer cycles  */
#define GFXREG_TCON_SSQCYCLE_SSQCYCLE_FSHIFT 0U
#define GFXREG_TCON_SSQCYCLE_SSQCYCLE_FMASK 0x3fU
#define GFXREG_TCON_SSQCYCLE_SETM_SSQCYCLE(val) (((CYGFX_U32)(val) & 0x3fUL) )
#define GFXREG_TCON_SSQCYCLE_SET_SSQCYCLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_TCON_SSQCYCLE_GET_SSQCYCLE(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_TCON_SETM_SSQCYCLE(s,val) ( (s)->ssqcycle = ((s)->ssqcycle & ~0x3fUL) | (((CYGFX_U32)(val) ) & 0x3fUL) )
#define GFXREG_TCON_SET_SSQCYCLE(s,val)  ( (s)->ssqcycle = (((s)->ssqcycle & ~0x3fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SSQCYCLE(s) ((((s)->ssqcycle) ) & 0x3fUL)
#define GFXREG_TCON_SSQCYCLE_SSQCYCLE_RESET 0U

/* SWRESET: TCON Software Reset - Reset all tcon registers except configuration registers. Detailed description in specification document */
#define GFXREG_TCON_SWRESET 0x00000404U
/* SWRESET: Software reset  */
#define GFXREG_TCON_SWRESET_SWRESET_FSHIFT 0U
#define GFXREG_TCON_SWRESET_SWRESET_FMASK 0x1U
#define GFXREG_TCON_SWRESET_SETM_SWRESET(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_TCON_SWRESET_SET_SWRESET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SWRESET_GET_SWRESET(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_TCON_SETM_SWRESET(s,val) ( (s)->swreset = ((s)->swreset & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_TCON_SET_SWRESET(s,val)  ( (s)->swreset = (((s)->swreset & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SWRESET(s) ((((s)->swreset) ) & 0x1UL)
#define GFXREG_TCON_SWRESET_SWRESET_OPERATION 0x0U /*  operation mode */
#define GFXREG_TCON_SWRESET_SWRESET_SWRESET 0x1U /* So long SWReset = 0x1 tcon is in 'SW reset state' and it is released by internal logic (SWReset is released and end of frame arrived), read  0b  reset not active 1b  reset active (that means NO pixel of video frame is excepted until 'SW reset state' is released) */
#define GFXREG_TCON_SWRESET_SWRESET_RESET 0U

/* ENRESETWORD: Enable to blend ResetWord into miniLVDS stream  */
#define GFXREG_TCON_SWRESET_ENRESETWORD_FSHIFT 4U
#define GFXREG_TCON_SWRESET_ENRESETWORD_FMASK 0xfffU
#define GFXREG_TCON_SWRESET_SETM_ENRESETWORD(val) (((CYGFX_U32)(val) & 0xfffUL) << 4U)
#define GFXREG_TCON_SWRESET_SET_ENRESETWORD(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SWRESET_GET_ENRESETWORD(val) (((CYGFX_U32)(val) >> 4U) & 0xfffUL)
#define GFXREG_TCON_SETM_ENRESETWORD(s,val) ( (s)->swreset = ((s)->swreset & ~0xfff0UL) | (((CYGFX_U32)(val) << 4U) & 0xfff0UL) )
#define GFXREG_TCON_SET_ENRESETWORD(s,val)  ( (s)->swreset = (((s)->swreset & ~0xfff0UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_ENRESETWORD(s) ((((s)->swreset) >> 4U) & 0xfffUL)
#define GFXREG_TCON_SWRESET_ENRESETWORD_RESET 65U

/* RESETWORDEND: 8-Bits value, that will be blended on falling edge of tsig[11] into miniLVDS stream  */
#define GFXREG_TCON_SWRESET_RESETWORDEND_FSHIFT 16U
#define GFXREG_TCON_SWRESET_RESETWORDEND_FMASK 0xffU
#define GFXREG_TCON_SWRESET_SETM_RESETWORDEND(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_TCON_SWRESET_SET_RESETWORDEND(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SWRESET_GET_RESETWORDEND(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_TCON_SETM_RESETWORDEND(s,val) ( (s)->swreset = ((s)->swreset & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_TCON_SET_RESETWORDEND(s,val)  ( (s)->swreset = (((s)->swreset & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_RESETWORDEND(s) ((((s)->swreset) >> 16U) & 0xffUL)
#define GFXREG_TCON_SWRESET_RESETWORDEND_RESET 192U

/* RESETWORDSTART: 8-Bits value, that will be blended on rising edge of tsig[11] into miniLVDS stream  */
#define GFXREG_TCON_SWRESET_RESETWORDSTART_FSHIFT 24U
#define GFXREG_TCON_SWRESET_RESETWORDSTART_FMASK 0xffU
#define GFXREG_TCON_SWRESET_SETM_RESETWORDSTART(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_TCON_SWRESET_SET_RESETWORDSTART(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SWRESET_GET_RESETWORDSTART(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_TCON_SETM_RESETWORDSTART(s,val) ( (s)->swreset = ((s)->swreset & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_TCON_SET_RESETWORDSTART(s,val)  ( (s)->swreset = (((s)->swreset & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_RESETWORDSTART(s) ((((s)->swreset) >> 24U) & 0xffUL)
#define GFXREG_TCON_SWRESET_RESETWORDSTART_RESET 63U

/* TCON_CTRL: TCON Control register  */
#define GFXREG_TCON_TCON_CTRL 0x00000408U
/* CHANNELMODE: Selects one of tcon operation modes, SINGLE, DUAL_INTERLEAVED or DUAL_SPLIT. */
#define GFXREG_TCON_TCON_CTRL_CHANNELMODE_FSHIFT 0U
#define GFXREG_TCON_TCON_CTRL_CHANNELMODE_FMASK 0x3U
#define GFXREG_TCON_TCON_CTRL_SETM_CHANNELMODE(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_TCON_TCON_CTRL_SET_CHANNELMODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_CHANNELMODE(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_TCON_SETM_CHANNELMODE(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_TCON_SET_CHANNELMODE(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_CHANNELMODE(s) ((((s)->tcon_ctrl) ) & 0x3UL)
#define GFXREG_TCON_TCON_CTRL_CHANNELMODE_SINGLE 0x0U /* Single pixel mode. Both channels channel are active at full pixel clock. If bitmap of both panels are the same, both panels are identical */
#define GFXREG_TCON_TCON_CTRL_CHANNELMODE_DUAL_INTERLEAVED 0x1U /* Dual pixel mode. Both channels are active at half the pixel clock. 1st channel drives display columns with even and 2nd one with odd index. */
#define GFXREG_TCON_TCON_CTRL_CHANNELMODE_DUAL_SPLIT 0x2U /* Dual pixel mode. Both channels are active at half the pixel clock. 1st channel drives the left and 2nd one the right half of the display. Note   data_en is needed in this mode */
#define GFXREG_TCON_TCON_CTRL_CHANNELMODE_RESET 0U

/* TCON_SYNC: Select synchronization between hsync/vsync and hlast/vlast  */
#define GFXREG_TCON_TCON_CTRL_TCON_SYNC_FSHIFT 2U
#define GFXREG_TCON_TCON_CTRL_TCON_SYNC_FMASK 0x1U
#define GFXREG_TCON_TCON_CTRL_SETM_TCON_SYNC(val) (((CYGFX_U32)(val) & 0x1UL) << 2U)
#define GFXREG_TCON_TCON_CTRL_SET_TCON_SYNC(val) (((CYGFX_U32)(val) << 2U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_TCON_SYNC(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_TCON_SETM_TCON_SYNC(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x4UL) | (((CYGFX_U32)(val) << 2U) & 0x4UL) )
#define GFXREG_TCON_SET_TCON_SYNC(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x4UL) | ((CYGFX_U32)(val) << 2U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_TCON_SYNC(s) ((((s)->tcon_ctrl) >> 2U) & 0x1UL)
#define GFXREG_TCON_TCON_CTRL_TCON_SYNC_H_VLAST 0x0U /*  tcon timing generator synchronized to hlast, vlast */
#define GFXREG_TCON_TCON_CTRL_TCON_SYNC_H_VSYNC 0x1U /*  tcon timing generator synchronized to hsync, vsync where horizontal synchronization is synchronized at the falling edge of hsync */
#define GFXREG_TCON_TCON_CTRL_TCON_SYNC_RESET 0U

/* BYPASS: Bypassing synchronization  */
#define GFXREG_TCON_TCON_CTRL_BYPASS_FSHIFT 3U
#define GFXREG_TCON_TCON_CTRL_BYPASS_FMASK 0x1U
#define GFXREG_TCON_TCON_CTRL_SETM_BYPASS(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_TCON_TCON_CTRL_SET_BYPASS(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_BYPASS(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_TCON_SETM_BYPASS(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_TCON_SET_BYPASS(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_BYPASS(s) ((((s)->tcon_ctrl) >> 3U) & 0x1UL)
#define GFXREG_TCON_TCON_CTRL_BYPASS_TCON_MODE 0x0U /*  tcon operation mode */
#define GFXREG_TCON_TCON_CTRL_BYPASS_BYPASS_MODE 0x1U /*  tcon in Bypass mode. input pixel and its sync-signals are bypassed to tcon-output */
#define GFXREG_TCON_TCON_CTRL_BYPASS_RESET 1U

/* INV_CTRL: Minimize the toggle rate of tcon output for display panel, that supports data inversion control. Otherwise set Inv_Ctrl = 0.   */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_FSHIFT 4U
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_FMASK 0xfU
#define GFXREG_TCON_TCON_CTRL_SETM_INV_CTRL(val) (((CYGFX_U32)(val) & 0xfUL) << 4U)
#define GFXREG_TCON_TCON_CTRL_SET_INV_CTRL(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_INV_CTRL(val) (((CYGFX_U32)(val) >> 4U) & 0xfUL)
#define GFXREG_TCON_SETM_INV_CTRL(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0xf0UL) | (((CYGFX_U32)(val) << 4U) & 0xf0UL) )
#define GFXREG_TCON_SET_INV_CTRL(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0xf0UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_INV_CTRL(s) ((((s)->tcon_ctrl) >> 4U) & 0xfUL)
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_DISABLE 0x0U /*  Disable inversion control  */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_2_BITS 0x1U /*  Enable inversion control for number of RGB-Bits = 2 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_4_BITS 0x2U /*  Enable inversion control for number of RGB-Bits = 4 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_6_BITS 0x3U /*  Enable inversion control for number of RGB-Bits = 6 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_8_BITS 0x4U /*  Enable inversion control for number of RGB-Bits = 8 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_10_BITS 0x5U /*  Enable inversion control for number of RGB-Bits = 10 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_12_BITS 0x6U /*  Enable inversion control for number of RGB-Bits = 12 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_14_BITS 0x7U /*  Enable inversion control for number of RGB-Bits = 14 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_16_BITS 0x8U /*  Enable inversion control for number of RGB-Bits = 16 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_18_BITS 0x9U /*  Enable inversion control for number of RGB-Bits = 18 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_20_BITS 0xAU /*  Enable inversion control for number of RGB-Bits = 20 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_22_BITS 0xBU /*  Enable inversion control for number of RGB-Bits = 22 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RGB_24_BITS 0xCU /*  Enable inversion control for number of RGB-Bits = 24 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RESERVED1 0xDU /*  RESERVED1 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RESERVED2 0xEU /*  RESERVED2 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RESERVED3 0xFU /*  RESERVED3 */
#define GFXREG_TCON_TCON_CTRL_INV_CTRL_RESET 0U

/* ENLVDS: Enable LVDS Mode  */
#define GFXREG_TCON_TCON_CTRL_ENLVDS_FSHIFT 8U
#define GFXREG_TCON_TCON_CTRL_ENLVDS_FMASK 0x1U
#define GFXREG_TCON_TCON_CTRL_SETM_ENLVDS(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_TCON_TCON_CTRL_SET_ENLVDS(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_ENLVDS(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_TCON_SETM_ENLVDS(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_TCON_SET_ENLVDS(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_ENLVDS(s) ((((s)->tcon_ctrl) >> 8U) & 0x1UL)
#define GFXREG_TCON_TCON_CTRL_ENLVDS_ENABLE_LVDS 0x1U /* Enable LVDS , TTL and RSDS are disable  */
#define GFXREG_TCON_TCON_CTRL_ENLVDS_DISABLE_LVDS 0x0U /* Disable LVDS, Enable TTL and RSDS  */
#define GFXREG_TCON_TCON_CTRL_ENLVDS_RESET 0U

/* LVDSMODE: Selection the LVDS Mode if EnLVDS = ENABLE_LVDS  */
#define GFXREG_TCON_TCON_CTRL_LVDSMODE_FSHIFT 9U
#define GFXREG_TCON_TCON_CTRL_LVDSMODE_FMASK 0x1U
#define GFXREG_TCON_TCON_CTRL_SETM_LVDSMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_TCON_TCON_CTRL_SET_LVDSMODE(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_LVDSMODE(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_TCON_SETM_LVDSMODE(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_TCON_SET_LVDSMODE(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_LVDSMODE(s) ((((s)->tcon_ctrl) >> 9U) & 0x1UL)
#define GFXREG_TCON_TCON_CTRL_LVDSMODE_MINI_LVDS 0x1U /* MiniLVDS   */
#define GFXREG_TCON_TCON_CTRL_LVDSMODE_LVDS 0x0U /* LVDS Mode, refer to OpenLDI  */
#define GFXREG_TCON_TCON_CTRL_LVDSMODE_RESET 0U

/* LVDS_BALANCE: Operation mode of LVDS-OpenLDI  */
#define GFXREG_TCON_TCON_CTRL_LVDS_BALANCE_FSHIFT 10U
#define GFXREG_TCON_TCON_CTRL_LVDS_BALANCE_FMASK 0x1U
#define GFXREG_TCON_TCON_CTRL_SETM_LVDS_BALANCE(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_TCON_TCON_CTRL_SET_LVDS_BALANCE(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_LVDS_BALANCE(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_TCON_SETM_LVDS_BALANCE(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_TCON_SET_LVDS_BALANCE(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_LVDS_BALANCE(s) ((((s)->tcon_ctrl) >> 10U) & 0x1UL)
#define GFXREG_TCON_TCON_CTRL_LVDS_BALANCE_BALANCED 0x1U /* LVDS operates in 24 bits Balanced Mode  */
#define GFXREG_TCON_TCON_CTRL_LVDS_BALANCE_UNBALANCED 0x0U /* LVDS operates in 24 bits Unbalanced Mode   */
#define GFXREG_TCON_TCON_CTRL_LVDS_BALANCE_RESET 1U

/* LVDS_CLOCK_INV: Inversion the polarity of lvds clock in OpenLDI Mode */
#define GFXREG_TCON_TCON_CTRL_LVDS_CLOCK_INV_FSHIFT 11U
#define GFXREG_TCON_TCON_CTRL_LVDS_CLOCK_INV_FMASK 0x1U
#define GFXREG_TCON_TCON_CTRL_SETM_LVDS_CLOCK_INV(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_TCON_TCON_CTRL_SET_LVDS_CLOCK_INV(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_LVDS_CLOCK_INV(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_TCON_SETM_LVDS_CLOCK_INV(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_TCON_SET_LVDS_CLOCK_INV(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_LVDS_CLOCK_INV(s) ((((s)->tcon_ctrl) >> 11U) & 0x1UL)
#define GFXREG_TCON_TCON_CTRL_LVDS_CLOCK_INV_INV 0x01U /* Invert LVDS Clock   */
#define GFXREG_TCON_TCON_CTRL_LVDS_CLOCK_INV_NON_INV 0x0U /* NON-Invert LVDS Clock   */
#define GFXREG_TCON_TCON_CTRL_LVDS_CLOCK_INV_RESET 0U

/* MINILVDS_OPCODE: Operation mode of MiniLVDS  */
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_FSHIFT 12U
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_FMASK 0x7U
#define GFXREG_TCON_TCON_CTRL_SETM_MINILVDS_OPCODE(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_TCON_CTRL_SET_MINILVDS_OPCODE(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_MINILVDS_OPCODE(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_MINILVDS_OPCODE(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_MINILVDS_OPCODE(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MINILVDS_OPCODE(s) ((((s)->tcon_ctrl) >> 12U) & 0x7UL)
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_MODE_3PAIRS 0x0U /*  MiniLVDS operates in 6 and 8 bit data, three pairs   */
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_MODE_4PAIRS 0x1U /*  Not Implemented   */
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_MODE_5PAIRS 0x2U /*  Not Implemented   */
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_MODE_6PAIRS 0x3U /*  MiniLVDS operates in 6 and 8 bit data, six pairs   */
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_RESERVED1 0x4U /*  RESERVED1 */
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_RESERVED2 0x5U /*  RESERVED2 */
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_RESERVED3 0x6U /*  RESERVED3 */
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_RESERVED4 0x7U /*  RESERVED4 */
#define GFXREG_TCON_TCON_CTRL_MINILVDS_OPCODE_RESET 1U

/* DUAL_SWAP: pixels of lower/upper channel can be swapped if tcon operates in DUAL-mode (include LVDS/miniLVDS)  */
#define GFXREG_TCON_TCON_CTRL_DUAL_SWAP_FSHIFT 15U
#define GFXREG_TCON_TCON_CTRL_DUAL_SWAP_FMASK 0x1U
#define GFXREG_TCON_TCON_CTRL_SETM_DUAL_SWAP(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_TCON_CTRL_SET_DUAL_SWAP(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_DUAL_SWAP(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_DUAL_SWAP(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_DUAL_SWAP(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_DUAL_SWAP(s) ((((s)->tcon_ctrl) >> 15U) & 0x1UL)
#define GFXREG_TCON_TCON_CTRL_DUAL_SWAP_SWAP 0x01U /* swapping pixels between lower-channel and upper-channel */
#define GFXREG_TCON_TCON_CTRL_DUAL_SWAP_NON_SWAP 0x0U /* NON-swapping pixels between lower-channel and upper-channel  */
#define GFXREG_TCON_TCON_CTRL_DUAL_SWAP_RESET 0U

/* SPLITPOSITION: Index of first column of right display half when ChannelMode is DUAL_SPLIT.  */
#define GFXREG_TCON_TCON_CTRL_SPLITPOSITION_FSHIFT 16U
#define GFXREG_TCON_TCON_CTRL_SPLITPOSITION_FMASK 0x3fffU
#define GFXREG_TCON_TCON_CTRL_SETM_SPLITPOSITION(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_TCON_TCON_CTRL_SET_SPLITPOSITION(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_TCON_CTRL_GET_SPLITPOSITION(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_TCON_SETM_SPLITPOSITION(s,val) ( (s)->tcon_ctrl = ((s)->tcon_ctrl & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_TCON_SET_SPLITPOSITION(s,val)  ( (s)->tcon_ctrl = (((s)->tcon_ctrl & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPLITPOSITION(s) ((((s)->tcon_ctrl) >> 16U) & 0x3fffUL)
#define GFXREG_TCON_TCON_CTRL_SPLITPOSITION_RESET 320U

/* RSDSINVCTRL: Controls inversion of output polarity when connected IO cells operate in RSDS mode */
#define GFXREG_TCON_RSDSINVCTRL 0x0000040cU
/* RSDS_INV: Inversion vector for 1st channel. For i in [ 0 .. 11 ]; if  RSDS_Inv [ i ] == 0 => NON-Inversion of RSDS [ i ] else Inversion of RSDS [ i ] */
#define GFXREG_TCON_RSDSINVCTRL_RSDS_INV_FSHIFT 0U
#define GFXREG_TCON_RSDSINVCTRL_RSDS_INV_FMASK 0xfffU
#define GFXREG_TCON_RSDSINVCTRL_SETM_RSDS_INV(val) (((CYGFX_U32)(val) & 0xfffUL) )
#define GFXREG_TCON_RSDSINVCTRL_SET_RSDS_INV(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffUL, __FILE__, __LINE__))
#define GFXREG_TCON_RSDSINVCTRL_GET_RSDS_INV(val) (((CYGFX_U32)(val) ) & 0xfffUL)
#define GFXREG_TCON_SETM_RSDS_INV(s,val) ( (s)->rsdsinvctrl = ((s)->rsdsinvctrl & ~0xfffUL) | (((CYGFX_U32)(val) ) & 0xfffUL) )
#define GFXREG_TCON_SET_RSDS_INV(s,val)  ( (s)->rsdsinvctrl = (((s)->rsdsinvctrl & ~0xfffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_RSDS_INV(s) ((((s)->rsdsinvctrl) ) & 0xfffUL)
#define GFXREG_TCON_RSDSINVCTRL_RSDS_INV_RESET 0U

/* RSDS_INV_DUAL: Same as RSDS_inv for 2nd channel */
#define GFXREG_TCON_RSDSINVCTRL_RSDS_INV_DUAL_FSHIFT 16U
#define GFXREG_TCON_RSDSINVCTRL_RSDS_INV_DUAL_FMASK 0xfffU
#define GFXREG_TCON_RSDSINVCTRL_SETM_RSDS_INV_DUAL(val) (((CYGFX_U32)(val) & 0xfffUL) << 16U)
#define GFXREG_TCON_RSDSINVCTRL_SET_RSDS_INV_DUAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffUL, __FILE__, __LINE__))
#define GFXREG_TCON_RSDSINVCTRL_GET_RSDS_INV_DUAL(val) (((CYGFX_U32)(val) >> 16U) & 0xfffUL)
#define GFXREG_TCON_SETM_RSDS_INV_DUAL(s,val) ( (s)->rsdsinvctrl = ((s)->rsdsinvctrl & ~0xfff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xfff0000UL) )
#define GFXREG_TCON_SET_RSDS_INV_DUAL(s,val)  ( (s)->rsdsinvctrl = (((s)->rsdsinvctrl & ~0xfff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_RSDS_INV_DUAL(s) ((((s)->rsdsinvctrl) >> 16U) & 0xfffUL)
#define GFXREG_TCON_RSDSINVCTRL_RSDS_INV_DUAL_RESET 0U

/* MAPBIT3_0: Mapping of 24 bit RGB or Timing Generator TSig[5-0] to bit 0 .. 3  */
#define GFXREG_TCON_MAPBIT3_0 0x00000410U
/* MAPBIT0: map bit[ 0 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit0 in [ 23..0 ] => bit[ 0 ] = [ Blue, Green, Red ] [ MapBit0 ]; if MapBit0 in [29 .. 24] => bit[ 0 ] in { TSig[5] .. TSig[0] }; If MapBit0 = 31 => bit[ 0 ] = 0 ; if MapBit1= 30 =>  bit[ 0 ] = 1  */
#define GFXREG_TCON_MAPBIT3_0_MAPBIT0_FSHIFT 0U
#define GFXREG_TCON_MAPBIT3_0_MAPBIT0_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT3_0_SETM_MAPBIT0(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT3_0_SET_MAPBIT0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT3_0_GET_MAPBIT0(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT0(s,val) ( (s)->mapbit3_0 = ((s)->mapbit3_0 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT0(s,val)  ( (s)->mapbit3_0 = (((s)->mapbit3_0 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT0(s) ((((s)->mapbit3_0) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT3_0_MAPBIT0_RESET 0U

/* MAPBIT1: map bit[ 1 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit1 in [ 23..0 ] => bit[ 1 ] = [ Blue, Green, Red ] [ MapBit1 ]; if MapBit1 in [29 .. 24] => bit[ 1 ] in { TSig[5] .. TSig[0] }; If MapBit1 = 31 => bit[ 1 ] = 0 ; if MapBit1= 30 =>  bit[ 1 ] = 1  */
#define GFXREG_TCON_MAPBIT3_0_MAPBIT1_FSHIFT 8U
#define GFXREG_TCON_MAPBIT3_0_MAPBIT1_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT3_0_SETM_MAPBIT1(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT3_0_SET_MAPBIT1(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT3_0_GET_MAPBIT1(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT1(s,val) ( (s)->mapbit3_0 = ((s)->mapbit3_0 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT1(s,val)  ( (s)->mapbit3_0 = (((s)->mapbit3_0 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT1(s) ((((s)->mapbit3_0) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT3_0_MAPBIT1_RESET 1U

/* MAPBIT2: map bit[ 2 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit2 in [ 23..0 ] => bit[ 2 ] = [ Blue, Green, Red ] [ MapBit2 ]; if MapBit2 in [29 .. 24] => bit[ 2 ] in { TSig[5] .. TSig[0] }; If MapBit2 = 31 => bit[ 2 ] = 0 ; if MapBit2= 30 =>  bit[ 2 ] = 1  */
#define GFXREG_TCON_MAPBIT3_0_MAPBIT2_FSHIFT 16U
#define GFXREG_TCON_MAPBIT3_0_MAPBIT2_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT3_0_SETM_MAPBIT2(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT3_0_SET_MAPBIT2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT3_0_GET_MAPBIT2(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT2(s,val) ( (s)->mapbit3_0 = ((s)->mapbit3_0 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT2(s,val)  ( (s)->mapbit3_0 = (((s)->mapbit3_0 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT2(s) ((((s)->mapbit3_0) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT3_0_MAPBIT2_RESET 2U

/* MAPBIT3: map bit[ 3 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit3 in [ 23..0 ] => bit[ 3 ] = [ Blue, Green, Red ] [ MapBit3 ]; if MapBit3 in [29 .. 24] => bit[ 3 ] in { TSig[5] .. TSig[0] }; If MapBit3 = 31 => bit[ 3 ] = 0 ; if MapBit3= 30 =>  bit[ 3 ] = 1  */
#define GFXREG_TCON_MAPBIT3_0_MAPBIT3_FSHIFT 24U
#define GFXREG_TCON_MAPBIT3_0_MAPBIT3_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT3_0_SETM_MAPBIT3(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT3_0_SET_MAPBIT3(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT3_0_GET_MAPBIT3(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT3(s,val) ( (s)->mapbit3_0 = ((s)->mapbit3_0 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT3(s,val)  ( (s)->mapbit3_0 = (((s)->mapbit3_0 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT3(s) ((((s)->mapbit3_0) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT3_0_MAPBIT3_RESET 3U

/* MAPBIT7_4: Mapping of 24 bit RGB or Timing Generator TSig[5-0] to bit 4 .. 7  */
#define GFXREG_TCON_MAPBIT7_4 0x00000414U
/* MAPBIT4: map bit[ 4 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit4 in [ 23..0 ] => bit[ 4 ] = [ Blue, Green, Red ] [ MapBit4 ]; if MapBit4 in [29 .. 24] => bit[ 4 ] in { TSig[5] .. TSig[0] }; If MapBit4 = 31 => bit[ 4 ] = 0 ; if MapBit4= 30 =>  bit[ 4 ] = 1  */
#define GFXREG_TCON_MAPBIT7_4_MAPBIT4_FSHIFT 0U
#define GFXREG_TCON_MAPBIT7_4_MAPBIT4_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT7_4_SETM_MAPBIT4(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT7_4_SET_MAPBIT4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT7_4_GET_MAPBIT4(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT4(s,val) ( (s)->mapbit7_4 = ((s)->mapbit7_4 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT4(s,val)  ( (s)->mapbit7_4 = (((s)->mapbit7_4 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT4(s) ((((s)->mapbit7_4) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT7_4_MAPBIT4_RESET 4U

/* MAPBIT5: map bit[ 5 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit5 in [ 23..0 ] => bit[ 5 ] = [ Blue, Green, Red ] [ MapBit5 ]; if MapBit5 in [29 .. 24] => bit[ 5 ] in { TSig[5] .. TSig[0] }; If MapBit5 = 31 => bit[ 5 ] = 0 ; if MapBit5= 30 =>  bit[ 5 ] = 1  */
#define GFXREG_TCON_MAPBIT7_4_MAPBIT5_FSHIFT 8U
#define GFXREG_TCON_MAPBIT7_4_MAPBIT5_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT7_4_SETM_MAPBIT5(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT7_4_SET_MAPBIT5(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT7_4_GET_MAPBIT5(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT5(s,val) ( (s)->mapbit7_4 = ((s)->mapbit7_4 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT5(s,val)  ( (s)->mapbit7_4 = (((s)->mapbit7_4 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT5(s) ((((s)->mapbit7_4) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT7_4_MAPBIT5_RESET 5U

/* MAPBIT6: map bit[ 6 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit6 in [ 23..0 ] => bit[ 6 ] = [ Blue, Green, Red ] [ MapBit6 ]; if MapBit6 in [29 .. 24] => bit[ 6 ] in { TSig[5] .. TSig[0] }; If MapBit6 = 31 => bit[ 6 ] = 0 ; if MapBit6= 30 =>  bit[ 6 ] = 1  */
#define GFXREG_TCON_MAPBIT7_4_MAPBIT6_FSHIFT 16U
#define GFXREG_TCON_MAPBIT7_4_MAPBIT6_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT7_4_SETM_MAPBIT6(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT7_4_SET_MAPBIT6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT7_4_GET_MAPBIT6(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT6(s,val) ( (s)->mapbit7_4 = ((s)->mapbit7_4 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT6(s,val)  ( (s)->mapbit7_4 = (((s)->mapbit7_4 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT6(s) ((((s)->mapbit7_4) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT7_4_MAPBIT6_RESET 6U

/* MAPBIT7: map bit[ 7 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit7 in [ 23..0 ] => bit[ 7 ] = [ Blue, Green, Red ] [ MapBit7 ]; if MapBit7 in [29 .. 24] => bit[ 7 ] in { TSig[5] .. TSig[0] }; If MapBit7 = 31 => bit[ 7 ] = 0 ; if MapBit7= 30 =>  bit[ 7 ] = 1  */
#define GFXREG_TCON_MAPBIT7_4_MAPBIT7_FSHIFT 24U
#define GFXREG_TCON_MAPBIT7_4_MAPBIT7_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT7_4_SETM_MAPBIT7(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT7_4_SET_MAPBIT7(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT7_4_GET_MAPBIT7(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT7(s,val) ( (s)->mapbit7_4 = ((s)->mapbit7_4 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT7(s,val)  ( (s)->mapbit7_4 = (((s)->mapbit7_4 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT7(s) ((((s)->mapbit7_4) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT7_4_MAPBIT7_RESET 7U

/* MAPBIT11_8: Mapping of 24 bit RGB or Timing Generator TSig[5-0] to bit 8 .. 11  */
#define GFXREG_TCON_MAPBIT11_8 0x00000418U
/* MAPBIT8: map bit[ 8 ] from [ Blue, Green, Red ] or from TSig[5-0].  if MapBit8 in [ 23..0 ]  => bit[ 8 ]  = [ Blue, Green, Red ] [ MapBit8 ]; if MapBit8 in [29 .. 24] => bit[ 8 ] in { TSig[5] .. TSig[0] }; If MapBit8 = 31   => bit[ 8 ] = 0  ; if MapBit8= 30  =>  bit[ 8 ]  = 1  */
#define GFXREG_TCON_MAPBIT11_8_MAPBIT8_FSHIFT 0U
#define GFXREG_TCON_MAPBIT11_8_MAPBIT8_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT11_8_SETM_MAPBIT8(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT11_8_SET_MAPBIT8(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT11_8_GET_MAPBIT8(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT8(s,val) ( (s)->mapbit11_8 = ((s)->mapbit11_8 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT8(s,val)  ( (s)->mapbit11_8 = (((s)->mapbit11_8 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT8(s) ((((s)->mapbit11_8) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT11_8_MAPBIT8_RESET 8U

/* MAPBIT9: map bit[ 9 ] from [ Blue, Green, Red ] or from TSig[5-0].  if MapBit9 in [ 23..0 ]  => bit[ 9 ]  = [ Blue, Green, Red ] [ MapBit9 ]; if MapBit9 in [29 .. 24] => bit[ 9 ] in { TSig[5] .. TSig[0] }; If MapBit9 = 31   => bit[ 9 ] = 0  ; if MapBit9= 30  =>  bit[ 9 ]  = 1  */
#define GFXREG_TCON_MAPBIT11_8_MAPBIT9_FSHIFT 8U
#define GFXREG_TCON_MAPBIT11_8_MAPBIT9_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT11_8_SETM_MAPBIT9(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT11_8_SET_MAPBIT9(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT11_8_GET_MAPBIT9(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT9(s,val) ( (s)->mapbit11_8 = ((s)->mapbit11_8 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT9(s,val)  ( (s)->mapbit11_8 = (((s)->mapbit11_8 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT9(s) ((((s)->mapbit11_8) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT11_8_MAPBIT9_RESET 9U

/* MAPBIT10: map bit[ 10 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit10 in [ 23..0 ] => bit[ 10 ] = [ Blue, Green, Red ] [ MapBit10 ]; if MapBit10 in [29 .. 24] => bit[ 10 ] in { TSig[5] .. TSig[0] } ; If MapBit10 = 31 => bit[ 10 ] = 0 ; if MapBit10= 30 =>  bit[ 10 ] = 1  */
#define GFXREG_TCON_MAPBIT11_8_MAPBIT10_FSHIFT 16U
#define GFXREG_TCON_MAPBIT11_8_MAPBIT10_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT11_8_SETM_MAPBIT10(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT11_8_SET_MAPBIT10(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT11_8_GET_MAPBIT10(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT10(s,val) ( (s)->mapbit11_8 = ((s)->mapbit11_8 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT10(s,val)  ( (s)->mapbit11_8 = (((s)->mapbit11_8 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT10(s) ((((s)->mapbit11_8) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT11_8_MAPBIT10_RESET 10U

/* MAPBIT11: map bit[ 11 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit11 in [ 23..0 ] => bit[ 11 ] = [ Blue, Green, Red ] [ MapBit11 ]; if MapBit11 in [29 .. 24] => bit[ 11 ] in { TSig[5] .. TSig[0] } ; If MapBit11 = 31 => bit[ 11 ] = 0 ; if MapBit11= 30 =>  bit[ 11 ] = 1  */
#define GFXREG_TCON_MAPBIT11_8_MAPBIT11_FSHIFT 24U
#define GFXREG_TCON_MAPBIT11_8_MAPBIT11_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT11_8_SETM_MAPBIT11(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT11_8_SET_MAPBIT11(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT11_8_GET_MAPBIT11(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT11(s,val) ( (s)->mapbit11_8 = ((s)->mapbit11_8 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT11(s,val)  ( (s)->mapbit11_8 = (((s)->mapbit11_8 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT11(s) ((((s)->mapbit11_8) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT11_8_MAPBIT11_RESET 11U

/* MAPBIT15_12: Mapping of 24 bit RGB or Timing Generator TSig[5-0] to bit 12 .. 15 */
#define GFXREG_TCON_MAPBIT15_12 0x0000041cU
/* MAPBIT12: map bit[ 12 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit12 in [ 23..0 ] => bit[ 12 ] = [ Blue, Green, Red ] [ MapBit12 ]; if MapBit12 in [29 .. 24] => bit[ 12 ] in { TSig[5] .. TSig[0] } ; If MapBit12 = 31 => bit[ 12 ] = 0 ; if MapBit12= 30 =>  bit[ 12 ] = 1  */
#define GFXREG_TCON_MAPBIT15_12_MAPBIT12_FSHIFT 0U
#define GFXREG_TCON_MAPBIT15_12_MAPBIT12_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT15_12_SETM_MAPBIT12(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT15_12_SET_MAPBIT12(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT15_12_GET_MAPBIT12(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT12(s,val) ( (s)->mapbit15_12 = ((s)->mapbit15_12 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT12(s,val)  ( (s)->mapbit15_12 = (((s)->mapbit15_12 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT12(s) ((((s)->mapbit15_12) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT15_12_MAPBIT12_RESET 12U

/* MAPBIT13: map bit[ 13 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit13 in [ 23..0 ] => bit[ 13 ] = [ Blue, Green, Red ] [ MapBit13 ]; if MapBit13 in [29 .. 24] => bit[ 13 ] in { TSig[5] .. TSig[0] } ; If MapBit13 = 31 => bit[ 13 ] = 0 ; if MapBit13= 30 =>  bit[ 13 ] = 1  */
#define GFXREG_TCON_MAPBIT15_12_MAPBIT13_FSHIFT 8U
#define GFXREG_TCON_MAPBIT15_12_MAPBIT13_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT15_12_SETM_MAPBIT13(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT15_12_SET_MAPBIT13(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT15_12_GET_MAPBIT13(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT13(s,val) ( (s)->mapbit15_12 = ((s)->mapbit15_12 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT13(s,val)  ( (s)->mapbit15_12 = (((s)->mapbit15_12 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT13(s) ((((s)->mapbit15_12) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT15_12_MAPBIT13_RESET 13U

/* MAPBIT14: map bit[ 14 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit14 in [ 23..0 ] => bit[ 14 ] = [ Blue, Green, Red ] [ MapBit14 ]; if MapBit14 in [29 .. 24] => bit[ 14 ] in { TSig[5] .. TSig[0] } ; If MapBit14 = 31 => bit[ 14 ] = 0 ; if MapBit14= 30 =>  bit[ 14 ] = 1  */
#define GFXREG_TCON_MAPBIT15_12_MAPBIT14_FSHIFT 16U
#define GFXREG_TCON_MAPBIT15_12_MAPBIT14_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT15_12_SETM_MAPBIT14(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT15_12_SET_MAPBIT14(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT15_12_GET_MAPBIT14(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT14(s,val) ( (s)->mapbit15_12 = ((s)->mapbit15_12 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT14(s,val)  ( (s)->mapbit15_12 = (((s)->mapbit15_12 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT14(s) ((((s)->mapbit15_12) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT15_12_MAPBIT14_RESET 14U

/* MAPBIT15: map bit[ 15 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit15 in [ 23..0 ] => bit[ 15 ] = [ Blue, Green, Red ] [ MapBit15 ]; if MapBit15 in [29 .. 24] => bit[ 15 ] in { TSig[5] .. TSig[0] } ; If MapBit15 = 31 => bit[ 15 ] = 0 ; if MapBit15= 30 =>  bit[ 15 ] = 1  */
#define GFXREG_TCON_MAPBIT15_12_MAPBIT15_FSHIFT 24U
#define GFXREG_TCON_MAPBIT15_12_MAPBIT15_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT15_12_SETM_MAPBIT15(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT15_12_SET_MAPBIT15(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT15_12_GET_MAPBIT15(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT15(s,val) ( (s)->mapbit15_12 = ((s)->mapbit15_12 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT15(s,val)  ( (s)->mapbit15_12 = (((s)->mapbit15_12 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT15(s) ((((s)->mapbit15_12) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT15_12_MAPBIT15_RESET 15U

/* MAPBIT19_16: Mapping of 24 bit RGB or Timing Generator TSig[5-0] to bit 16 .. 19 */
#define GFXREG_TCON_MAPBIT19_16 0x00000420U
/* MAPBIT16: map bit[ 16 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit16 in [ 23..0 ] => bit[ 16 ] = [ Blue, Green, Red ] [ MapBit16 ]; if MapBit16 in [29 .. 24] => bit[ 16 ] in { TSig[5] .. TSig[0] } ; If MapBit16 = 31 => bit[ 16 ] = 0 ; if MapBit16= 30 =>  bit[ 16 ] = 1  */
#define GFXREG_TCON_MAPBIT19_16_MAPBIT16_FSHIFT 0U
#define GFXREG_TCON_MAPBIT19_16_MAPBIT16_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT19_16_SETM_MAPBIT16(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT19_16_SET_MAPBIT16(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT19_16_GET_MAPBIT16(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT16(s,val) ( (s)->mapbit19_16 = ((s)->mapbit19_16 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT16(s,val)  ( (s)->mapbit19_16 = (((s)->mapbit19_16 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT16(s) ((((s)->mapbit19_16) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT19_16_MAPBIT16_RESET 16U

/* MAPBIT17: map bit[ 17 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit17 in [ 23..0 ] => bit[ 17 ] = [ Blue, Green, Red ] [ MapBit17 ]; if MapBit17 in [29 .. 24] => bit[ 17 ] in { TSig[5] .. TSig[0] } ; If MapBit17 = 31 => bit[ 17 ] = 0 ; if MapBit17= 30 =>  bit[ 17 ] = 1  */
#define GFXREG_TCON_MAPBIT19_16_MAPBIT17_FSHIFT 8U
#define GFXREG_TCON_MAPBIT19_16_MAPBIT17_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT19_16_SETM_MAPBIT17(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT19_16_SET_MAPBIT17(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT19_16_GET_MAPBIT17(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT17(s,val) ( (s)->mapbit19_16 = ((s)->mapbit19_16 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT17(s,val)  ( (s)->mapbit19_16 = (((s)->mapbit19_16 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT17(s) ((((s)->mapbit19_16) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT19_16_MAPBIT17_RESET 17U

/* MAPBIT18: map bit[ 18 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit18 in [ 23..0 ] => bit[ 18 ] = [ Blue, Green, Red ] [ MapBit18 ]; if MapBit18 in [29 .. 24] => bit[ 18 ] in { TSig[5] .. TSig[0] } ; If MapBit18 = 31 => bit[ 18 ] = 0 ; if MapBit18= 30 =>  bit[ 18 ] = 1  */
#define GFXREG_TCON_MAPBIT19_16_MAPBIT18_FSHIFT 16U
#define GFXREG_TCON_MAPBIT19_16_MAPBIT18_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT19_16_SETM_MAPBIT18(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT19_16_SET_MAPBIT18(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT19_16_GET_MAPBIT18(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT18(s,val) ( (s)->mapbit19_16 = ((s)->mapbit19_16 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT18(s,val)  ( (s)->mapbit19_16 = (((s)->mapbit19_16 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT18(s) ((((s)->mapbit19_16) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT19_16_MAPBIT18_RESET 18U

/* MAPBIT19: map bit[ 19 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit19 in [ 23..0 ] => bit[ 19 ] = [ Blue, Green, Red ] [ MapBit19 ]; if MapBit19 in [29 .. 24] => bit[ 19 ] in { TSig[5] .. TSig[0] } ; If MapBit19 = 31 => bit[ 19 ] = 0 ; if MapBit19= 30 =>  bit[ 19 ] = 1  */
#define GFXREG_TCON_MAPBIT19_16_MAPBIT19_FSHIFT 24U
#define GFXREG_TCON_MAPBIT19_16_MAPBIT19_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT19_16_SETM_MAPBIT19(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT19_16_SET_MAPBIT19(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT19_16_GET_MAPBIT19(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT19(s,val) ( (s)->mapbit19_16 = ((s)->mapbit19_16 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT19(s,val)  ( (s)->mapbit19_16 = (((s)->mapbit19_16 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT19(s) ((((s)->mapbit19_16) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT19_16_MAPBIT19_RESET 19U

/* MAPBIT23_20: Mapping of 24 bit RGB or Timing Generator TSig[5-0] to bit 20 .. 23 */
#define GFXREG_TCON_MAPBIT23_20 0x00000424U
/* MAPBIT20: map bit[ 20 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit20 in [ 23..0 ] => bit[ 20 ] = [ Blue, Green, Red ] [ MapBit20 ]; if MapBit20 in [29 .. 24] => bit[ 20 ] in { TSig[5] .. TSig[0] } ; If MapBit20 = 31 => bit[ 20 ] = 0 ; if MapBit20= 30 =>  bit[ 20 ] = 1  */
#define GFXREG_TCON_MAPBIT23_20_MAPBIT20_FSHIFT 0U
#define GFXREG_TCON_MAPBIT23_20_MAPBIT20_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT23_20_SETM_MAPBIT20(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT23_20_SET_MAPBIT20(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT23_20_GET_MAPBIT20(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT20(s,val) ( (s)->mapbit23_20 = ((s)->mapbit23_20 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT20(s,val)  ( (s)->mapbit23_20 = (((s)->mapbit23_20 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT20(s) ((((s)->mapbit23_20) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT23_20_MAPBIT20_RESET 20U

/* MAPBIT21: map bit[ 21 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit21 in [ 23..0 ] => bit[ 21 ] = [ Blue, Green, Red ] [ MapBit21 ]; if MapBit21 in [29 .. 24] => bit[ 21 ] in { TSig[5] .. TSig[0] } ; If MapBit21 = 31 => bit[ 21 ] = 0 ; if MapBit21= 30 =>  bit[ 21 ] = 1  */
#define GFXREG_TCON_MAPBIT23_20_MAPBIT21_FSHIFT 8U
#define GFXREG_TCON_MAPBIT23_20_MAPBIT21_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT23_20_SETM_MAPBIT21(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT23_20_SET_MAPBIT21(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT23_20_GET_MAPBIT21(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT21(s,val) ( (s)->mapbit23_20 = ((s)->mapbit23_20 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT21(s,val)  ( (s)->mapbit23_20 = (((s)->mapbit23_20 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT21(s) ((((s)->mapbit23_20) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT23_20_MAPBIT21_RESET 21U

/* MAPBIT22: map bit[ 22 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit22 in [ 23..0 ] => bit[ 22 ] = [ Blue, Green, Red ] [ MapBit22 ]; if MapBit22 in [29 .. 24] => bit[ 22 ] in { TSig[5] .. TSig[0] } ; If MapBit22 = 31 => bit[ 22 ] = 0 ; if MapBit22= 30 =>  bit[ 22 ] = 1  */
#define GFXREG_TCON_MAPBIT23_20_MAPBIT22_FSHIFT 16U
#define GFXREG_TCON_MAPBIT23_20_MAPBIT22_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT23_20_SETM_MAPBIT22(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT23_20_SET_MAPBIT22(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT23_20_GET_MAPBIT22(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT22(s,val) ( (s)->mapbit23_20 = ((s)->mapbit23_20 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT22(s,val)  ( (s)->mapbit23_20 = (((s)->mapbit23_20 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT22(s) ((((s)->mapbit23_20) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT23_20_MAPBIT22_RESET 22U

/* MAPBIT23: map bit[ 23 ] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit23 in [ 23..0 ] => bit[ 23 ] = [ Blue, Green, Red ] [ MapBit23 ]; if MapBit23 in [29 .. 24] => bit[ 23 ] in { TSig[5] .. TSig[0] } ; If MapBit23 = 31 => bit[ 23 ] = 0 ; if MapBit23= 30 =>  bit[ 23 ] = 1  */
#define GFXREG_TCON_MAPBIT23_20_MAPBIT23_FSHIFT 24U
#define GFXREG_TCON_MAPBIT23_20_MAPBIT23_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT23_20_SETM_MAPBIT23(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT23_20_SET_MAPBIT23(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT23_20_GET_MAPBIT23(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT23(s,val) ( (s)->mapbit23_20 = ((s)->mapbit23_20 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT23(s,val)  ( (s)->mapbit23_20 = (((s)->mapbit23_20 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT23(s) ((((s)->mapbit23_20) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT23_20_MAPBIT23_RESET 23U

/* MAPBIT27_24: Mapping of 24 bit RGB or Timing Generator TSig[5-0] to bit 24 .. 27 */
#define GFXREG_TCON_MAPBIT27_24 0x00000428U
/* MAPBIT24: map bit[24] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit24 in [ 23..0 ] => bit[24] = [ Blue, Green, Red ] [ MapBit24 ]; if MapBit24 in [29 .. 24] => bit[24] in { TSig[5] .. TSig[0] } ; If MapBit24 = 31 => bit[24] = 0 ; if MapBit24= 30 => bit[24] = 1  */
#define GFXREG_TCON_MAPBIT27_24_MAPBIT24_FSHIFT 0U
#define GFXREG_TCON_MAPBIT27_24_MAPBIT24_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT27_24_SETM_MAPBIT24(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT27_24_SET_MAPBIT24(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT27_24_GET_MAPBIT24(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT24(s,val) ( (s)->mapbit27_24 = ((s)->mapbit27_24 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT24(s,val)  ( (s)->mapbit27_24 = (((s)->mapbit27_24 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT24(s) ((((s)->mapbit27_24) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT27_24_MAPBIT24_RESET 24U

/* MAPBIT25: map bit[25] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit25 in [ 23..0 ] => bit[25] = [ Blue, Green, Red ] [ MapBit25 ]; if MapBit25 in [29 .. 24] => bit[25] in { TSig[5] .. TSig[0] } ; If MapBit25 = 31 => bit[25] = 0 ; if MapBit25= 30 => bit[25] = 1  */
#define GFXREG_TCON_MAPBIT27_24_MAPBIT25_FSHIFT 8U
#define GFXREG_TCON_MAPBIT27_24_MAPBIT25_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT27_24_SETM_MAPBIT25(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT27_24_SET_MAPBIT25(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT27_24_GET_MAPBIT25(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT25(s,val) ( (s)->mapbit27_24 = ((s)->mapbit27_24 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT25(s,val)  ( (s)->mapbit27_24 = (((s)->mapbit27_24 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT25(s) ((((s)->mapbit27_24) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT27_24_MAPBIT25_RESET 25U

/* MAPBIT26: map bit[26] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit26 in [ 23..0 ] => bit[26] = [ Blue, Green, Red ] [ MapBit26 ]; if MapBit26 in [29 .. 24] => bit[26] in { TSig[5] .. TSig[0] } ; If MapBit26 = 31 => bit[26] = 0 ; if MapBit26= 30 => bit[26] = 1  */
#define GFXREG_TCON_MAPBIT27_24_MAPBIT26_FSHIFT 16U
#define GFXREG_TCON_MAPBIT27_24_MAPBIT26_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT27_24_SETM_MAPBIT26(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT27_24_SET_MAPBIT26(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT27_24_GET_MAPBIT26(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT26(s,val) ( (s)->mapbit27_24 = ((s)->mapbit27_24 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT26(s,val)  ( (s)->mapbit27_24 = (((s)->mapbit27_24 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT26(s) ((((s)->mapbit27_24) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT27_24_MAPBIT26_RESET 26U

/* MAPBIT27: map bit[27] from [ Blue, Green, Red ] or from TSig[5-0]. If MapBit27 in [ 23..0 ] => bit[27] = [ Blue, Green, Red ] [ MapBit27 ]; if MapBit27 in [29 .. 24] => bit[27] in { TSig[5] .. TSig[0] } ; If MapBit27 = 31 => bit[27] = 0 ; if MapBit27= 30 => bit[27] = 1  */
#define GFXREG_TCON_MAPBIT27_24_MAPBIT27_FSHIFT 24U
#define GFXREG_TCON_MAPBIT27_24_MAPBIT27_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT27_24_SETM_MAPBIT27(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT27_24_SET_MAPBIT27(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT27_24_GET_MAPBIT27(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT27(s,val) ( (s)->mapbit27_24 = ((s)->mapbit27_24 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT27(s,val)  ( (s)->mapbit27_24 = (((s)->mapbit27_24 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT27(s) ((((s)->mapbit27_24) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT27_24_MAPBIT27_RESET 27U

/* MAPBIT3_0_DUAL: Same as MapBit3_0 for 2nd channel */
#define GFXREG_TCON_MAPBIT3_0_DUAL 0x0000042cU
/* MAPBIT0_DUAL: Same as MapBit0 for 2nd channel */
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT0_DUAL_FSHIFT 0U
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT0_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT3_0_DUAL_SETM_MAPBIT0_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT3_0_DUAL_SET_MAPBIT0_DUAL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT3_0_DUAL_GET_MAPBIT0_DUAL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT0_DUAL(s,val) ( (s)->mapbit3_0_dual = ((s)->mapbit3_0_dual & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT0_DUAL(s,val)  ( (s)->mapbit3_0_dual = (((s)->mapbit3_0_dual & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT0_DUAL(s) ((((s)->mapbit3_0_dual) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT0_DUAL_RESET 0U

/* MAPBIT1_DUAL: Same as MapBit1 for 2nd channel */
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT1_DUAL_FSHIFT 8U
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT1_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT3_0_DUAL_SETM_MAPBIT1_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT3_0_DUAL_SET_MAPBIT1_DUAL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT3_0_DUAL_GET_MAPBIT1_DUAL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT1_DUAL(s,val) ( (s)->mapbit3_0_dual = ((s)->mapbit3_0_dual & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT1_DUAL(s,val)  ( (s)->mapbit3_0_dual = (((s)->mapbit3_0_dual & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT1_DUAL(s) ((((s)->mapbit3_0_dual) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT1_DUAL_RESET 1U

/* MAPBIT2_DUAL: Same as MapBit2 for 2nd channel */
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT2_DUAL_FSHIFT 16U
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT2_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT3_0_DUAL_SETM_MAPBIT2_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT3_0_DUAL_SET_MAPBIT2_DUAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT3_0_DUAL_GET_MAPBIT2_DUAL(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT2_DUAL(s,val) ( (s)->mapbit3_0_dual = ((s)->mapbit3_0_dual & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT2_DUAL(s,val)  ( (s)->mapbit3_0_dual = (((s)->mapbit3_0_dual & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT2_DUAL(s) ((((s)->mapbit3_0_dual) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT2_DUAL_RESET 2U

/* MAPBIT3_DUAL: Same as MapBit3 for 2nd channel */
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT3_DUAL_FSHIFT 24U
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT3_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT3_0_DUAL_SETM_MAPBIT3_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT3_0_DUAL_SET_MAPBIT3_DUAL(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT3_0_DUAL_GET_MAPBIT3_DUAL(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT3_DUAL(s,val) ( (s)->mapbit3_0_dual = ((s)->mapbit3_0_dual & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT3_DUAL(s,val)  ( (s)->mapbit3_0_dual = (((s)->mapbit3_0_dual & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT3_DUAL(s) ((((s)->mapbit3_0_dual) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT3_0_DUAL_MAPBIT3_DUAL_RESET 3U

/* MAPBIT7_4_DUAL: Same as MapBit7_4 for 2nd channel */
#define GFXREG_TCON_MAPBIT7_4_DUAL 0x00000430U
/* MAPBIT4_DUAL: Same as MapBit4 for 2nd channel */
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT4_DUAL_FSHIFT 0U
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT4_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT7_4_DUAL_SETM_MAPBIT4_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT7_4_DUAL_SET_MAPBIT4_DUAL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT7_4_DUAL_GET_MAPBIT4_DUAL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT4_DUAL(s,val) ( (s)->mapbit7_4_dual = ((s)->mapbit7_4_dual & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT4_DUAL(s,val)  ( (s)->mapbit7_4_dual = (((s)->mapbit7_4_dual & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT4_DUAL(s) ((((s)->mapbit7_4_dual) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT4_DUAL_RESET 4U

/* MAPBIT5_DUAL: Same as MapBit5 for 2nd channel */
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT5_DUAL_FSHIFT 8U
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT5_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT7_4_DUAL_SETM_MAPBIT5_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT7_4_DUAL_SET_MAPBIT5_DUAL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT7_4_DUAL_GET_MAPBIT5_DUAL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT5_DUAL(s,val) ( (s)->mapbit7_4_dual = ((s)->mapbit7_4_dual & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT5_DUAL(s,val)  ( (s)->mapbit7_4_dual = (((s)->mapbit7_4_dual & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT5_DUAL(s) ((((s)->mapbit7_4_dual) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT5_DUAL_RESET 5U

/* MAPBIT6_DUAL: Same as MapBit6 for 2nd channel */
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT6_DUAL_FSHIFT 16U
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT6_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT7_4_DUAL_SETM_MAPBIT6_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT7_4_DUAL_SET_MAPBIT6_DUAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT7_4_DUAL_GET_MAPBIT6_DUAL(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT6_DUAL(s,val) ( (s)->mapbit7_4_dual = ((s)->mapbit7_4_dual & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT6_DUAL(s,val)  ( (s)->mapbit7_4_dual = (((s)->mapbit7_4_dual & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT6_DUAL(s) ((((s)->mapbit7_4_dual) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT6_DUAL_RESET 6U

/* MAPBIT7_DUAL: Same as MapBit7 for 2nd channel */
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT7_DUAL_FSHIFT 24U
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT7_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT7_4_DUAL_SETM_MAPBIT7_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT7_4_DUAL_SET_MAPBIT7_DUAL(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT7_4_DUAL_GET_MAPBIT7_DUAL(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT7_DUAL(s,val) ( (s)->mapbit7_4_dual = ((s)->mapbit7_4_dual & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT7_DUAL(s,val)  ( (s)->mapbit7_4_dual = (((s)->mapbit7_4_dual & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT7_DUAL(s) ((((s)->mapbit7_4_dual) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT7_4_DUAL_MAPBIT7_DUAL_RESET 7U

/* MAPBIT11_8_DUAL: Same as MapBit11_8 for 2nd channel */
#define GFXREG_TCON_MAPBIT11_8_DUAL 0x00000434U
/* MAPBIT8_DUAL: Same as MapBit8 for 2nd channel */
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT8_DUAL_FSHIFT 0U
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT8_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT11_8_DUAL_SETM_MAPBIT8_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT11_8_DUAL_SET_MAPBIT8_DUAL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT11_8_DUAL_GET_MAPBIT8_DUAL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT8_DUAL(s,val) ( (s)->mapbit11_8_dual = ((s)->mapbit11_8_dual & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT8_DUAL(s,val)  ( (s)->mapbit11_8_dual = (((s)->mapbit11_8_dual & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT8_DUAL(s) ((((s)->mapbit11_8_dual) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT8_DUAL_RESET 8U

/* MAPBIT9_DUAL: Same as MapBit9 for 2nd channel */
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT9_DUAL_FSHIFT 8U
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT9_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT11_8_DUAL_SETM_MAPBIT9_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT11_8_DUAL_SET_MAPBIT9_DUAL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT11_8_DUAL_GET_MAPBIT9_DUAL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT9_DUAL(s,val) ( (s)->mapbit11_8_dual = ((s)->mapbit11_8_dual & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT9_DUAL(s,val)  ( (s)->mapbit11_8_dual = (((s)->mapbit11_8_dual & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT9_DUAL(s) ((((s)->mapbit11_8_dual) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT9_DUAL_RESET 9U

/* MAPBIT10_DUAL: Same as MapBit10 for 2nd channel */
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT10_DUAL_FSHIFT 16U
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT10_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT11_8_DUAL_SETM_MAPBIT10_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT11_8_DUAL_SET_MAPBIT10_DUAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT11_8_DUAL_GET_MAPBIT10_DUAL(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT10_DUAL(s,val) ( (s)->mapbit11_8_dual = ((s)->mapbit11_8_dual & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT10_DUAL(s,val)  ( (s)->mapbit11_8_dual = (((s)->mapbit11_8_dual & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT10_DUAL(s) ((((s)->mapbit11_8_dual) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT10_DUAL_RESET 10U

/* MAPBIT11_DUAL: Same as MapBit11 for 2nd channel */
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT11_DUAL_FSHIFT 24U
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT11_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT11_8_DUAL_SETM_MAPBIT11_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT11_8_DUAL_SET_MAPBIT11_DUAL(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT11_8_DUAL_GET_MAPBIT11_DUAL(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT11_DUAL(s,val) ( (s)->mapbit11_8_dual = ((s)->mapbit11_8_dual & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT11_DUAL(s,val)  ( (s)->mapbit11_8_dual = (((s)->mapbit11_8_dual & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT11_DUAL(s) ((((s)->mapbit11_8_dual) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT11_8_DUAL_MAPBIT11_DUAL_RESET 11U

/* MAPBIT15_12_DUAL: Same as MapBit15_12 for 2nd channel */
#define GFXREG_TCON_MAPBIT15_12_DUAL 0x00000438U
/* MAPBIT12_DUAL: Same as MapBit12 for 2nd channel */
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT12_DUAL_FSHIFT 0U
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT12_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT15_12_DUAL_SETM_MAPBIT12_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT15_12_DUAL_SET_MAPBIT12_DUAL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT15_12_DUAL_GET_MAPBIT12_DUAL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT12_DUAL(s,val) ( (s)->mapbit15_12_dual = ((s)->mapbit15_12_dual & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT12_DUAL(s,val)  ( (s)->mapbit15_12_dual = (((s)->mapbit15_12_dual & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT12_DUAL(s) ((((s)->mapbit15_12_dual) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT12_DUAL_RESET 12U

/* MAPBIT13_DUAL: Same as MapBit13 for 2nd channel */
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT13_DUAL_FSHIFT 8U
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT13_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT15_12_DUAL_SETM_MAPBIT13_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT15_12_DUAL_SET_MAPBIT13_DUAL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT15_12_DUAL_GET_MAPBIT13_DUAL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT13_DUAL(s,val) ( (s)->mapbit15_12_dual = ((s)->mapbit15_12_dual & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT13_DUAL(s,val)  ( (s)->mapbit15_12_dual = (((s)->mapbit15_12_dual & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT13_DUAL(s) ((((s)->mapbit15_12_dual) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT13_DUAL_RESET 13U

/* MAPBIT14_DUAL: Same as MapBit14 for 2nd channel */
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT14_DUAL_FSHIFT 16U
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT14_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT15_12_DUAL_SETM_MAPBIT14_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT15_12_DUAL_SET_MAPBIT14_DUAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT15_12_DUAL_GET_MAPBIT14_DUAL(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT14_DUAL(s,val) ( (s)->mapbit15_12_dual = ((s)->mapbit15_12_dual & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT14_DUAL(s,val)  ( (s)->mapbit15_12_dual = (((s)->mapbit15_12_dual & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT14_DUAL(s) ((((s)->mapbit15_12_dual) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT14_DUAL_RESET 14U

/* MAPBIT15_DUAL: Same as MapBit15 for 2nd channel */
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT15_DUAL_FSHIFT 24U
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT15_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT15_12_DUAL_SETM_MAPBIT15_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT15_12_DUAL_SET_MAPBIT15_DUAL(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT15_12_DUAL_GET_MAPBIT15_DUAL(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT15_DUAL(s,val) ( (s)->mapbit15_12_dual = ((s)->mapbit15_12_dual & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT15_DUAL(s,val)  ( (s)->mapbit15_12_dual = (((s)->mapbit15_12_dual & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT15_DUAL(s) ((((s)->mapbit15_12_dual) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT15_12_DUAL_MAPBIT15_DUAL_RESET 15U

/* MAPBIT19_16_DUAL: Same as MapBit19_16 for 2nd channel */
#define GFXREG_TCON_MAPBIT19_16_DUAL 0x0000043cU
/* MAPBIT16_DUAL: Same as MapBit16 for 2nd channel */
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT16_DUAL_FSHIFT 0U
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT16_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT19_16_DUAL_SETM_MAPBIT16_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT19_16_DUAL_SET_MAPBIT16_DUAL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT19_16_DUAL_GET_MAPBIT16_DUAL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT16_DUAL(s,val) ( (s)->mapbit19_16_dual = ((s)->mapbit19_16_dual & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT16_DUAL(s,val)  ( (s)->mapbit19_16_dual = (((s)->mapbit19_16_dual & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT16_DUAL(s) ((((s)->mapbit19_16_dual) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT16_DUAL_RESET 16U

/* MAPBIT17_DUAL: Same as MapBit17 for 2nd channel */
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT17_DUAL_FSHIFT 8U
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT17_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT19_16_DUAL_SETM_MAPBIT17_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT19_16_DUAL_SET_MAPBIT17_DUAL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT19_16_DUAL_GET_MAPBIT17_DUAL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT17_DUAL(s,val) ( (s)->mapbit19_16_dual = ((s)->mapbit19_16_dual & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT17_DUAL(s,val)  ( (s)->mapbit19_16_dual = (((s)->mapbit19_16_dual & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT17_DUAL(s) ((((s)->mapbit19_16_dual) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT17_DUAL_RESET 17U

/* MAPBIT18_DUAL: Same as MapBit18 for 2nd channel */
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT18_DUAL_FSHIFT 16U
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT18_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT19_16_DUAL_SETM_MAPBIT18_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT19_16_DUAL_SET_MAPBIT18_DUAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT19_16_DUAL_GET_MAPBIT18_DUAL(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT18_DUAL(s,val) ( (s)->mapbit19_16_dual = ((s)->mapbit19_16_dual & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT18_DUAL(s,val)  ( (s)->mapbit19_16_dual = (((s)->mapbit19_16_dual & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT18_DUAL(s) ((((s)->mapbit19_16_dual) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT18_DUAL_RESET 18U

/* MAPBIT19_DUAL: Same as MapBit19 for 2nd channel */
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT19_DUAL_FSHIFT 24U
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT19_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT19_16_DUAL_SETM_MAPBIT19_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT19_16_DUAL_SET_MAPBIT19_DUAL(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT19_16_DUAL_GET_MAPBIT19_DUAL(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT19_DUAL(s,val) ( (s)->mapbit19_16_dual = ((s)->mapbit19_16_dual & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT19_DUAL(s,val)  ( (s)->mapbit19_16_dual = (((s)->mapbit19_16_dual & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT19_DUAL(s) ((((s)->mapbit19_16_dual) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT19_16_DUAL_MAPBIT19_DUAL_RESET 19U

/* MAPBIT23_20_DUAL: Same as MapBit23_20 for 2nd channel */
#define GFXREG_TCON_MAPBIT23_20_DUAL 0x00000440U
/* MAPBIT20_DUAL: Same as MapBit20 for 2nd channel */
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT20_DUAL_FSHIFT 0U
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT20_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT23_20_DUAL_SETM_MAPBIT20_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT23_20_DUAL_SET_MAPBIT20_DUAL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT23_20_DUAL_GET_MAPBIT20_DUAL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT20_DUAL(s,val) ( (s)->mapbit23_20_dual = ((s)->mapbit23_20_dual & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT20_DUAL(s,val)  ( (s)->mapbit23_20_dual = (((s)->mapbit23_20_dual & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT20_DUAL(s) ((((s)->mapbit23_20_dual) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT20_DUAL_RESET 20U

/* MAPBIT21_DUAL: Same as MapBit21 for 2nd channel */
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT21_DUAL_FSHIFT 8U
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT21_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT23_20_DUAL_SETM_MAPBIT21_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT23_20_DUAL_SET_MAPBIT21_DUAL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT23_20_DUAL_GET_MAPBIT21_DUAL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT21_DUAL(s,val) ( (s)->mapbit23_20_dual = ((s)->mapbit23_20_dual & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT21_DUAL(s,val)  ( (s)->mapbit23_20_dual = (((s)->mapbit23_20_dual & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT21_DUAL(s) ((((s)->mapbit23_20_dual) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT21_DUAL_RESET 21U

/* MAPBIT22_DUAL: Same as MapBit22 for 2nd channel */
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT22_DUAL_FSHIFT 16U
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT22_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT23_20_DUAL_SETM_MAPBIT22_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT23_20_DUAL_SET_MAPBIT22_DUAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT23_20_DUAL_GET_MAPBIT22_DUAL(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT22_DUAL(s,val) ( (s)->mapbit23_20_dual = ((s)->mapbit23_20_dual & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT22_DUAL(s,val)  ( (s)->mapbit23_20_dual = (((s)->mapbit23_20_dual & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT22_DUAL(s) ((((s)->mapbit23_20_dual) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT22_DUAL_RESET 22U

/* MAPBIT23_DUAL: Same as MapBit23 for 2nd channel */
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT23_DUAL_FSHIFT 24U
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT23_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT23_20_DUAL_SETM_MAPBIT23_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT23_20_DUAL_SET_MAPBIT23_DUAL(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT23_20_DUAL_GET_MAPBIT23_DUAL(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT23_DUAL(s,val) ( (s)->mapbit23_20_dual = ((s)->mapbit23_20_dual & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT23_DUAL(s,val)  ( (s)->mapbit23_20_dual = (((s)->mapbit23_20_dual & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT23_DUAL(s) ((((s)->mapbit23_20_dual) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT23_20_DUAL_MAPBIT23_DUAL_RESET 23U

/* MAPBIT27_24_DUAL: Same as MapBit27_24 for 2nd channel */
#define GFXREG_TCON_MAPBIT27_24_DUAL 0x00000444U
/* MAPBIT24_DUAL: Same as MapBit24 for 2nd channel */
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT24_DUAL_FSHIFT 0U
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT24_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT27_24_DUAL_SETM_MAPBIT24_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_TCON_MAPBIT27_24_DUAL_SET_MAPBIT24_DUAL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT27_24_DUAL_GET_MAPBIT24_DUAL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT24_DUAL(s,val) ( (s)->mapbit27_24_dual = ((s)->mapbit27_24_dual & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_TCON_SET_MAPBIT24_DUAL(s,val)  ( (s)->mapbit27_24_dual = (((s)->mapbit27_24_dual & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT24_DUAL(s) ((((s)->mapbit27_24_dual) ) & 0x1fUL)
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT24_DUAL_RESET 24U

/* MAPBIT25_DUAL: Same as MapBit25 for 2nd channel */
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT25_DUAL_FSHIFT 8U
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT25_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT27_24_DUAL_SETM_MAPBIT25_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_TCON_MAPBIT27_24_DUAL_SET_MAPBIT25_DUAL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT27_24_DUAL_GET_MAPBIT25_DUAL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT25_DUAL(s,val) ( (s)->mapbit27_24_dual = ((s)->mapbit27_24_dual & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_TCON_SET_MAPBIT25_DUAL(s,val)  ( (s)->mapbit27_24_dual = (((s)->mapbit27_24_dual & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT25_DUAL(s) ((((s)->mapbit27_24_dual) >> 8U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT25_DUAL_RESET 25U

/* MAPBIT26_DUAL: Same as MapBit26 for 2nd channel */
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT26_DUAL_FSHIFT 16U
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT26_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT27_24_DUAL_SETM_MAPBIT26_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_TCON_MAPBIT27_24_DUAL_SET_MAPBIT26_DUAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT27_24_DUAL_GET_MAPBIT26_DUAL(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT26_DUAL(s,val) ( (s)->mapbit27_24_dual = ((s)->mapbit27_24_dual & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_TCON_SET_MAPBIT26_DUAL(s,val)  ( (s)->mapbit27_24_dual = (((s)->mapbit27_24_dual & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT26_DUAL(s) ((((s)->mapbit27_24_dual) >> 16U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT26_DUAL_RESET 26U

/* MAPBIT27_DUAL: Same as MapBit27 for 2nd channel */
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT27_DUAL_FSHIFT 24U
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT27_DUAL_FMASK 0x1fU
#define GFXREG_TCON_MAPBIT27_24_DUAL_SETM_MAPBIT27_DUAL(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_TCON_MAPBIT27_24_DUAL_SET_MAPBIT27_DUAL(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_TCON_MAPBIT27_24_DUAL_GET_MAPBIT27_DUAL(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_TCON_SETM_MAPBIT27_DUAL(s,val) ( (s)->mapbit27_24_dual = ((s)->mapbit27_24_dual & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_TCON_SET_MAPBIT27_DUAL(s,val)  ( (s)->mapbit27_24_dual = (((s)->mapbit27_24_dual & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_MAPBIT27_DUAL(s) ((((s)->mapbit27_24_dual) >> 24U) & 0x1fUL)
#define GFXREG_TCON_MAPBIT27_24_DUAL_MAPBIT27_DUAL_RESET 27U

/* SPG0POSON: Sync pulse generator 0, 'Switch on' position */
#define GFXREG_TCON_SPG0POSON 0x00000448U
/* SPGPSON_TOGGLE0: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG0POSON_SPGPSON_TOGGLE0_FSHIFT 31U
#define GFXREG_TCON_SPG0POSON_SPGPSON_TOGGLE0_FMASK 0x1U
#define GFXREG_TCON_SPG0POSON_SETM_SPGPSON_TOGGLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG0POSON_SET_SPGPSON_TOGGLE0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0POSON_GET_SPGPSON_TOGGLE0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE0(s,val) ( (s)->spg0poson = ((s)->spg0poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE0(s,val)  ( (s)->spg0poson = (((s)->spg0poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE0(s) ((((s)->spg0poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG0POSON_SPGPSON_TOGGLE0_RESET 0U

/* SPGPSON_X0: X scan position  */
#define GFXREG_TCON_SPG0POSON_SPGPSON_X0_FSHIFT 16U
#define GFXREG_TCON_SPG0POSON_SPGPSON_X0_FMASK 0x7fffU
#define GFXREG_TCON_SPG0POSON_SETM_SPGPSON_X0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG0POSON_SET_SPGPSON_X0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0POSON_GET_SPGPSON_X0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X0(s,val) ( (s)->spg0poson = ((s)->spg0poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X0(s,val)  ( (s)->spg0poson = (((s)->spg0poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X0(s) ((((s)->spg0poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG0POSON_SPGPSON_X0_RESET 0x148U

/* SPGPSON_FIELD0: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG0POSON_SPGPSON_FIELD0_FSHIFT 15U
#define GFXREG_TCON_SPG0POSON_SPGPSON_FIELD0_FMASK 0x1U
#define GFXREG_TCON_SPG0POSON_SETM_SPGPSON_FIELD0(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG0POSON_SET_SPGPSON_FIELD0(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0POSON_GET_SPGPSON_FIELD0(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD0(s,val) ( (s)->spg0poson = ((s)->spg0poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD0(s,val)  ( (s)->spg0poson = (((s)->spg0poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD0(s) ((((s)->spg0poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG0POSON_SPGPSON_FIELD0_RESET 0U

/* SPGPSON_Y0: Y scan position  */
#define GFXREG_TCON_SPG0POSON_SPGPSON_Y0_FSHIFT 0U
#define GFXREG_TCON_SPG0POSON_SPGPSON_Y0_FMASK 0x7fffU
#define GFXREG_TCON_SPG0POSON_SETM_SPGPSON_Y0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG0POSON_SET_SPGPSON_Y0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0POSON_GET_SPGPSON_Y0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y0(s,val) ( (s)->spg0poson = ((s)->spg0poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y0(s,val)  ( (s)->spg0poson = (((s)->spg0poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y0(s) ((((s)->spg0poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG0POSON_SPGPSON_Y0_RESET 0U

/* SPG0MASKON: The Sequencer Pulse Generator 0 Mask Enable register is used to mask the enable of SPG 0 */
#define GFXREG_TCON_SPG0MASKON 0x0000044cU
/* SPGMKON0: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG0MASKON_SPGMKON0_FSHIFT 0U
#define GFXREG_TCON_SPG0MASKON_SPGMKON0_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG0MASKON_SETM_SPGMKON0(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG0MASKON_SET_SPGMKON0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0MASKON_GET_SPGMKON0(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON0(s,val) ( (s)->spg0maskon = ((s)->spg0maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON0(s,val)  ( (s)->spg0maskon = (((s)->spg0maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON0(s) ((((s)->spg0maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG0MASKON_SPGMKON0_RESET 0xFFFFU

/* SPG0POSOFF: Sync pulse generator 0, 'Switch off' position */
#define GFXREG_TCON_SPG0POSOFF 0x00000450U
/* SPGPSOFF_TOGGLE0: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_TOGGLE0_FSHIFT 31U
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_TOGGLE0_FMASK 0x1U
#define GFXREG_TCON_SPG0POSOFF_SETM_SPGPSOFF_TOGGLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG0POSOFF_SET_SPGPSOFF_TOGGLE0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0POSOFF_GET_SPGPSOFF_TOGGLE0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE0(s,val) ( (s)->spg0posoff = ((s)->spg0posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE0(s,val)  ( (s)->spg0posoff = (((s)->spg0posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE0(s) ((((s)->spg0posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_TOGGLE0_RESET 0U

/* SPGPSOFF_X0: X scan position  */
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_X0_FSHIFT 16U
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_X0_FMASK 0x7fffU
#define GFXREG_TCON_SPG0POSOFF_SETM_SPGPSOFF_X0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG0POSOFF_SET_SPGPSOFF_X0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0POSOFF_GET_SPGPSOFF_X0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X0(s,val) ( (s)->spg0posoff = ((s)->spg0posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X0(s,val)  ( (s)->spg0posoff = (((s)->spg0posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X0(s) ((((s)->spg0posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_X0_RESET 0x168U

/* SPGPSOFF_FIELD0: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_FIELD0_FSHIFT 15U
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_FIELD0_FMASK 0x1U
#define GFXREG_TCON_SPG0POSOFF_SETM_SPGPSOFF_FIELD0(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG0POSOFF_SET_SPGPSOFF_FIELD0(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0POSOFF_GET_SPGPSOFF_FIELD0(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD0(s,val) ( (s)->spg0posoff = ((s)->spg0posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD0(s,val)  ( (s)->spg0posoff = (((s)->spg0posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD0(s) ((((s)->spg0posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_FIELD0_RESET 0U

/* SPGPSOFF_Y0: Y scan position  */
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_Y0_FSHIFT 0U
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_Y0_FMASK 0x7fffU
#define GFXREG_TCON_SPG0POSOFF_SETM_SPGPSOFF_Y0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG0POSOFF_SET_SPGPSOFF_Y0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0POSOFF_GET_SPGPSOFF_Y0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y0(s,val) ( (s)->spg0posoff = ((s)->spg0posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y0(s,val)  ( (s)->spg0posoff = (((s)->spg0posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y0(s) ((((s)->spg0posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG0POSOFF_SPGPSOFF_Y0_RESET 0U

/* SPG0MASKOFF: The Sequencer Pulse Generator 0 Mask Enable register is used to mask the disable of SPG 0 */
#define GFXREG_TCON_SPG0MASKOFF 0x00000454U
/* SPGMKOFF0: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG0MASKOFF_SPGMKOFF0_FSHIFT 0U
#define GFXREG_TCON_SPG0MASKOFF_SPGMKOFF0_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG0MASKOFF_SETM_SPGMKOFF0(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG0MASKOFF_SET_SPGMKOFF0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG0MASKOFF_GET_SPGMKOFF0(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF0(s,val) ( (s)->spg0maskoff = ((s)->spg0maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF0(s,val)  ( (s)->spg0maskoff = (((s)->spg0maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF0(s) ((((s)->spg0maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG0MASKOFF_SPGMKOFF0_RESET 0xFFFFU

/* SPG1POSON: Sync pulse generator 1, 'Switch on' position */
#define GFXREG_TCON_SPG1POSON 0x00000458U
/* SPGPSON_TOGGLE1: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG1POSON_SPGPSON_TOGGLE1_FSHIFT 31U
#define GFXREG_TCON_SPG1POSON_SPGPSON_TOGGLE1_FMASK 0x1U
#define GFXREG_TCON_SPG1POSON_SETM_SPGPSON_TOGGLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG1POSON_SET_SPGPSON_TOGGLE1(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1POSON_GET_SPGPSON_TOGGLE1(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE1(s,val) ( (s)->spg1poson = ((s)->spg1poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE1(s,val)  ( (s)->spg1poson = (((s)->spg1poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE1(s) ((((s)->spg1poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG1POSON_SPGPSON_TOGGLE1_RESET 0U

/* SPGPSON_X1: X scan position  */
#define GFXREG_TCON_SPG1POSON_SPGPSON_X1_FSHIFT 16U
#define GFXREG_TCON_SPG1POSON_SPGPSON_X1_FMASK 0x7fffU
#define GFXREG_TCON_SPG1POSON_SETM_SPGPSON_X1(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG1POSON_SET_SPGPSON_X1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1POSON_GET_SPGPSON_X1(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X1(s,val) ( (s)->spg1poson = ((s)->spg1poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X1(s,val)  ( (s)->spg1poson = (((s)->spg1poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X1(s) ((((s)->spg1poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG1POSON_SPGPSON_X1_RESET 0U

/* SPGPSON_FIELD1: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG1POSON_SPGPSON_FIELD1_FSHIFT 15U
#define GFXREG_TCON_SPG1POSON_SPGPSON_FIELD1_FMASK 0x1U
#define GFXREG_TCON_SPG1POSON_SETM_SPGPSON_FIELD1(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG1POSON_SET_SPGPSON_FIELD1(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1POSON_GET_SPGPSON_FIELD1(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD1(s,val) ( (s)->spg1poson = ((s)->spg1poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD1(s,val)  ( (s)->spg1poson = (((s)->spg1poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD1(s) ((((s)->spg1poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG1POSON_SPGPSON_FIELD1_RESET 0U

/* SPGPSON_Y1: Y scan position  */
#define GFXREG_TCON_SPG1POSON_SPGPSON_Y1_FSHIFT 0U
#define GFXREG_TCON_SPG1POSON_SPGPSON_Y1_FMASK 0x7fffU
#define GFXREG_TCON_SPG1POSON_SETM_SPGPSON_Y1(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG1POSON_SET_SPGPSON_Y1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1POSON_GET_SPGPSON_Y1(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y1(s,val) ( (s)->spg1poson = ((s)->spg1poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y1(s,val)  ( (s)->spg1poson = (((s)->spg1poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y1(s) ((((s)->spg1poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG1POSON_SPGPSON_Y1_RESET 0xf3U

/* SPG1MASKON: The Sequencer Pulse Generator 1 Mask Enable register is used to mask the enable of SPG 1 */
#define GFXREG_TCON_SPG1MASKON 0x0000045cU
/* SPGMKON1: mask bits (1= do not include this bit into position matching) */
#define GFXREG_TCON_SPG1MASKON_SPGMKON1_FSHIFT 0U
#define GFXREG_TCON_SPG1MASKON_SPGMKON1_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG1MASKON_SETM_SPGMKON1(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG1MASKON_SET_SPGMKON1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1MASKON_GET_SPGMKON1(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON1(s,val) ( (s)->spg1maskon = ((s)->spg1maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON1(s,val)  ( (s)->spg1maskon = (((s)->spg1maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON1(s) ((((s)->spg1maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG1MASKON_SPGMKON1_RESET 0x7FFF0000U

/* SPG1POSOFF: Sync pulse generator 1, 'Switch off' position */
#define GFXREG_TCON_SPG1POSOFF 0x00000460U
/* SPGPSOFF_TOGGLE1: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_TOGGLE1_FSHIFT 31U
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_TOGGLE1_FMASK 0x1U
#define GFXREG_TCON_SPG1POSOFF_SETM_SPGPSOFF_TOGGLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG1POSOFF_SET_SPGPSOFF_TOGGLE1(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1POSOFF_GET_SPGPSOFF_TOGGLE1(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE1(s,val) ( (s)->spg1posoff = ((s)->spg1posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE1(s,val)  ( (s)->spg1posoff = (((s)->spg1posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE1(s) ((((s)->spg1posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_TOGGLE1_RESET 0U

/* SPGPSOFF_X1: X scan position  */
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_X1_FSHIFT 16U
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_X1_FMASK 0x7fffU
#define GFXREG_TCON_SPG1POSOFF_SETM_SPGPSOFF_X1(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG1POSOFF_SET_SPGPSOFF_X1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1POSOFF_GET_SPGPSOFF_X1(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X1(s,val) ( (s)->spg1posoff = ((s)->spg1posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X1(s,val)  ( (s)->spg1posoff = (((s)->spg1posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X1(s) ((((s)->spg1posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_X1_RESET 0U

/* SPGPSOFF_FIELD1: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_FIELD1_FSHIFT 15U
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_FIELD1_FMASK 0x1U
#define GFXREG_TCON_SPG1POSOFF_SETM_SPGPSOFF_FIELD1(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG1POSOFF_SET_SPGPSOFF_FIELD1(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1POSOFF_GET_SPGPSOFF_FIELD1(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD1(s,val) ( (s)->spg1posoff = ((s)->spg1posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD1(s,val)  ( (s)->spg1posoff = (((s)->spg1posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD1(s) ((((s)->spg1posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_FIELD1_RESET 0U

/* SPGPSOFF_Y1: Y scan position  */
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_Y1_FSHIFT 0U
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_Y1_FMASK 0x7fffU
#define GFXREG_TCON_SPG1POSOFF_SETM_SPGPSOFF_Y1(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG1POSOFF_SET_SPGPSOFF_Y1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1POSOFF_GET_SPGPSOFF_Y1(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y1(s,val) ( (s)->spg1posoff = ((s)->spg1posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y1(s,val)  ( (s)->spg1posoff = (((s)->spg1posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y1(s) ((((s)->spg1posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG1POSOFF_SPGPSOFF_Y1_RESET 0xf7U

/* SPG1MASKOFF: The Sequencer Pulse Generator 1 Mask Enable register is used to mask the disable of SPG 1 */
#define GFXREG_TCON_SPG1MASKOFF 0x00000464U
/* SPGMKOFF1: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG1MASKOFF_SPGMKOFF1_FSHIFT 0U
#define GFXREG_TCON_SPG1MASKOFF_SPGMKOFF1_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG1MASKOFF_SETM_SPGMKOFF1(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG1MASKOFF_SET_SPGMKOFF1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG1MASKOFF_GET_SPGMKOFF1(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF1(s,val) ( (s)->spg1maskoff = ((s)->spg1maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF1(s,val)  ( (s)->spg1maskoff = (((s)->spg1maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF1(s) ((((s)->spg1maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG1MASKOFF_SPGMKOFF1_RESET 0x7FFF0000U

/* SPG2POSON: Sync pulse generator 2, 'Switch on' position */
#define GFXREG_TCON_SPG2POSON 0x00000468U
/* SPGPSON_TOGGLE2: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG2POSON_SPGPSON_TOGGLE2_FSHIFT 31U
#define GFXREG_TCON_SPG2POSON_SPGPSON_TOGGLE2_FMASK 0x1U
#define GFXREG_TCON_SPG2POSON_SETM_SPGPSON_TOGGLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG2POSON_SET_SPGPSON_TOGGLE2(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2POSON_GET_SPGPSON_TOGGLE2(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE2(s,val) ( (s)->spg2poson = ((s)->spg2poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE2(s,val)  ( (s)->spg2poson = (((s)->spg2poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE2(s) ((((s)->spg2poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG2POSON_SPGPSON_TOGGLE2_RESET 0U

/* SPGPSON_X2: X scan position  */
#define GFXREG_TCON_SPG2POSON_SPGPSON_X2_FSHIFT 16U
#define GFXREG_TCON_SPG2POSON_SPGPSON_X2_FMASK 0x7fffU
#define GFXREG_TCON_SPG2POSON_SETM_SPGPSON_X2(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG2POSON_SET_SPGPSON_X2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2POSON_GET_SPGPSON_X2(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X2(s,val) ( (s)->spg2poson = ((s)->spg2poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X2(s,val)  ( (s)->spg2poson = (((s)->spg2poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X2(s) ((((s)->spg2poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG2POSON_SPGPSON_X2_RESET 0U

/* SPGPSON_FIELD2: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG2POSON_SPGPSON_FIELD2_FSHIFT 15U
#define GFXREG_TCON_SPG2POSON_SPGPSON_FIELD2_FMASK 0x1U
#define GFXREG_TCON_SPG2POSON_SETM_SPGPSON_FIELD2(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG2POSON_SET_SPGPSON_FIELD2(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2POSON_GET_SPGPSON_FIELD2(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD2(s,val) ( (s)->spg2poson = ((s)->spg2poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD2(s,val)  ( (s)->spg2poson = (((s)->spg2poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD2(s) ((((s)->spg2poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG2POSON_SPGPSON_FIELD2_RESET 0U

/* SPGPSON_Y2: Y scan position  */
#define GFXREG_TCON_SPG2POSON_SPGPSON_Y2_FSHIFT 0U
#define GFXREG_TCON_SPG2POSON_SPGPSON_Y2_FMASK 0x7fffU
#define GFXREG_TCON_SPG2POSON_SETM_SPGPSON_Y2(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG2POSON_SET_SPGPSON_Y2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2POSON_GET_SPGPSON_Y2(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y2(s,val) ( (s)->spg2poson = ((s)->spg2poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y2(s,val)  ( (s)->spg2poson = (((s)->spg2poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y2(s) ((((s)->spg2poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG2POSON_SPGPSON_Y2_RESET 0U

/* SPG2MASKON: The Sequencer Pulse Generator 2 Mask Enable register is used to mask the enable of SPG 2 */
#define GFXREG_TCON_SPG2MASKON 0x0000046cU
/* SPGMKON2: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG2MASKON_SPGMKON2_FSHIFT 0U
#define GFXREG_TCON_SPG2MASKON_SPGMKON2_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG2MASKON_SETM_SPGMKON2(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG2MASKON_SET_SPGMKON2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2MASKON_GET_SPGMKON2(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON2(s,val) ( (s)->spg2maskon = ((s)->spg2maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON2(s,val)  ( (s)->spg2maskon = (((s)->spg2maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON2(s) ((((s)->spg2maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG2MASKON_SPGMKON2_RESET 0xFFFFU

/* SPG2POSOFF: Sync pulse generator 2, 'Switch off' position */
#define GFXREG_TCON_SPG2POSOFF 0x00000470U
/* SPGPSOFF_TOGGLE2: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_TOGGLE2_FSHIFT 31U
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_TOGGLE2_FMASK 0x1U
#define GFXREG_TCON_SPG2POSOFF_SETM_SPGPSOFF_TOGGLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG2POSOFF_SET_SPGPSOFF_TOGGLE2(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2POSOFF_GET_SPGPSOFF_TOGGLE2(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE2(s,val) ( (s)->spg2posoff = ((s)->spg2posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE2(s,val)  ( (s)->spg2posoff = (((s)->spg2posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE2(s) ((((s)->spg2posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_TOGGLE2_RESET 0U

/* SPGPSOFF_X2: X scan position  */
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_X2_FSHIFT 16U
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_X2_FMASK 0x7fffU
#define GFXREG_TCON_SPG2POSOFF_SETM_SPGPSOFF_X2(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG2POSOFF_SET_SPGPSOFF_X2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2POSOFF_GET_SPGPSOFF_X2(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X2(s,val) ( (s)->spg2posoff = ((s)->spg2posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X2(s,val)  ( (s)->spg2posoff = (((s)->spg2posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X2(s) ((((s)->spg2posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_X2_RESET 0x140U

/* SPGPSOFF_FIELD2: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_FIELD2_FSHIFT 15U
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_FIELD2_FMASK 0x1U
#define GFXREG_TCON_SPG2POSOFF_SETM_SPGPSOFF_FIELD2(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG2POSOFF_SET_SPGPSOFF_FIELD2(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2POSOFF_GET_SPGPSOFF_FIELD2(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD2(s,val) ( (s)->spg2posoff = ((s)->spg2posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD2(s,val)  ( (s)->spg2posoff = (((s)->spg2posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD2(s) ((((s)->spg2posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_FIELD2_RESET 0U

/* SPGPSOFF_Y2: Y scan position  */
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_Y2_FSHIFT 0U
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_Y2_FMASK 0x7fffU
#define GFXREG_TCON_SPG2POSOFF_SETM_SPGPSOFF_Y2(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG2POSOFF_SET_SPGPSOFF_Y2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2POSOFF_GET_SPGPSOFF_Y2(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y2(s,val) ( (s)->spg2posoff = ((s)->spg2posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y2(s,val)  ( (s)->spg2posoff = (((s)->spg2posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y2(s) ((((s)->spg2posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG2POSOFF_SPGPSOFF_Y2_RESET 0U

/* SPG2MASKOFF: The Sequencer Pulse Generator 2 Mask Enable register is used to mask the disable of SPG 2 */
#define GFXREG_TCON_SPG2MASKOFF 0x00000474U
/* SPGMKOFF2: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG2MASKOFF_SPGMKOFF2_FSHIFT 0U
#define GFXREG_TCON_SPG2MASKOFF_SPGMKOFF2_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG2MASKOFF_SETM_SPGMKOFF2(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG2MASKOFF_SET_SPGMKOFF2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG2MASKOFF_GET_SPGMKOFF2(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF2(s,val) ( (s)->spg2maskoff = ((s)->spg2maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF2(s,val)  ( (s)->spg2maskoff = (((s)->spg2maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF2(s) ((((s)->spg2maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG2MASKOFF_SPGMKOFF2_RESET 0xFFFFU

/* SPG3POSON: Sync pulse generator 3, 'Switch on' position */
#define GFXREG_TCON_SPG3POSON 0x00000478U
/* SPGPSON_TOGGLE3: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG3POSON_SPGPSON_TOGGLE3_FSHIFT 31U
#define GFXREG_TCON_SPG3POSON_SPGPSON_TOGGLE3_FMASK 0x1U
#define GFXREG_TCON_SPG3POSON_SETM_SPGPSON_TOGGLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG3POSON_SET_SPGPSON_TOGGLE3(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3POSON_GET_SPGPSON_TOGGLE3(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE3(s,val) ( (s)->spg3poson = ((s)->spg3poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE3(s,val)  ( (s)->spg3poson = (((s)->spg3poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE3(s) ((((s)->spg3poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG3POSON_SPGPSON_TOGGLE3_RESET 0U

/* SPGPSON_X3: X scan position  */
#define GFXREG_TCON_SPG3POSON_SPGPSON_X3_FSHIFT 16U
#define GFXREG_TCON_SPG3POSON_SPGPSON_X3_FMASK 0x7fffU
#define GFXREG_TCON_SPG3POSON_SETM_SPGPSON_X3(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG3POSON_SET_SPGPSON_X3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3POSON_GET_SPGPSON_X3(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X3(s,val) ( (s)->spg3poson = ((s)->spg3poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X3(s,val)  ( (s)->spg3poson = (((s)->spg3poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X3(s) ((((s)->spg3poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG3POSON_SPGPSON_X3_RESET 0U

/* SPGPSON_FIELD3: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG3POSON_SPGPSON_FIELD3_FSHIFT 15U
#define GFXREG_TCON_SPG3POSON_SPGPSON_FIELD3_FMASK 0x1U
#define GFXREG_TCON_SPG3POSON_SETM_SPGPSON_FIELD3(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG3POSON_SET_SPGPSON_FIELD3(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3POSON_GET_SPGPSON_FIELD3(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD3(s,val) ( (s)->spg3poson = ((s)->spg3poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD3(s,val)  ( (s)->spg3poson = (((s)->spg3poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD3(s) ((((s)->spg3poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG3POSON_SPGPSON_FIELD3_RESET 0U

/* SPGPSON_Y3: Y scan position  */
#define GFXREG_TCON_SPG3POSON_SPGPSON_Y3_FSHIFT 0U
#define GFXREG_TCON_SPG3POSON_SPGPSON_Y3_FMASK 0x7fffU
#define GFXREG_TCON_SPG3POSON_SETM_SPGPSON_Y3(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG3POSON_SET_SPGPSON_Y3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3POSON_GET_SPGPSON_Y3(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y3(s,val) ( (s)->spg3poson = ((s)->spg3poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y3(s,val)  ( (s)->spg3poson = (((s)->spg3poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y3(s) ((((s)->spg3poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG3POSON_SPGPSON_Y3_RESET 0U

/* SPG3MASKON: The Sequencer Pulse Generator 3 Mask Enable register is used to mask the enable of SPG 3 */
#define GFXREG_TCON_SPG3MASKON 0x0000047cU
/* SPGMKON3: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG3MASKON_SPGMKON3_FSHIFT 0U
#define GFXREG_TCON_SPG3MASKON_SPGMKON3_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG3MASKON_SETM_SPGMKON3(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG3MASKON_SET_SPGMKON3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3MASKON_GET_SPGMKON3(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON3(s,val) ( (s)->spg3maskon = ((s)->spg3maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON3(s,val)  ( (s)->spg3maskon = (((s)->spg3maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON3(s) ((((s)->spg3maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG3MASKON_SPGMKON3_RESET 0x7FFF0000U

/* SPG3POSOFF: Sync pulse generator 3, 'Switch off' position */
#define GFXREG_TCON_SPG3POSOFF 0x00000480U
/* SPGPSOFF_TOGGLE3: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_TOGGLE3_FSHIFT 31U
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_TOGGLE3_FMASK 0x1U
#define GFXREG_TCON_SPG3POSOFF_SETM_SPGPSOFF_TOGGLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG3POSOFF_SET_SPGPSOFF_TOGGLE3(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3POSOFF_GET_SPGPSOFF_TOGGLE3(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE3(s,val) ( (s)->spg3posoff = ((s)->spg3posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE3(s,val)  ( (s)->spg3posoff = (((s)->spg3posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE3(s) ((((s)->spg3posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_TOGGLE3_RESET 0U

/* SPGPSOFF_X3: X scan position  */
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_X3_FSHIFT 16U
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_X3_FMASK 0x7fffU
#define GFXREG_TCON_SPG3POSOFF_SETM_SPGPSOFF_X3(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG3POSOFF_SET_SPGPSOFF_X3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3POSOFF_GET_SPGPSOFF_X3(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X3(s,val) ( (s)->spg3posoff = ((s)->spg3posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X3(s,val)  ( (s)->spg3posoff = (((s)->spg3posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X3(s) ((((s)->spg3posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_X3_RESET 0U

/* SPGPSOFF_FIELD3: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_FIELD3_FSHIFT 15U
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_FIELD3_FMASK 0x1U
#define GFXREG_TCON_SPG3POSOFF_SETM_SPGPSOFF_FIELD3(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG3POSOFF_SET_SPGPSOFF_FIELD3(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3POSOFF_GET_SPGPSOFF_FIELD3(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD3(s,val) ( (s)->spg3posoff = ((s)->spg3posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD3(s,val)  ( (s)->spg3posoff = (((s)->spg3posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD3(s) ((((s)->spg3posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_FIELD3_RESET 0U

/* SPGPSOFF_Y3: Y scan position  */
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_Y3_FSHIFT 0U
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_Y3_FMASK 0x7fffU
#define GFXREG_TCON_SPG3POSOFF_SETM_SPGPSOFF_Y3(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG3POSOFF_SET_SPGPSOFF_Y3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3POSOFF_GET_SPGPSOFF_Y3(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y3(s,val) ( (s)->spg3posoff = ((s)->spg3posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y3(s,val)  ( (s)->spg3posoff = (((s)->spg3posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y3(s) ((((s)->spg3posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG3POSOFF_SPGPSOFF_Y3_RESET 0xF0U

/* SPG3MASKOFF: The Sequencer Pulse Generator 3 Mask Enable register is used to mask the disable of SPG 3 */
#define GFXREG_TCON_SPG3MASKOFF 0x00000484U
/* SPGMKOFF3: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG3MASKOFF_SPGMKOFF3_FSHIFT 0U
#define GFXREG_TCON_SPG3MASKOFF_SPGMKOFF3_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG3MASKOFF_SETM_SPGMKOFF3(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG3MASKOFF_SET_SPGMKOFF3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG3MASKOFF_GET_SPGMKOFF3(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF3(s,val) ( (s)->spg3maskoff = ((s)->spg3maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF3(s,val)  ( (s)->spg3maskoff = (((s)->spg3maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF3(s) ((((s)->spg3maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG3MASKOFF_SPGMKOFF3_RESET 0x7FFF0000U

/* SPG4POSON: Sync pulse generator 4, 'Switch on' position */
#define GFXREG_TCON_SPG4POSON 0x00000488U
/* SPGPSON_TOGGLE4: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG4POSON_SPGPSON_TOGGLE4_FSHIFT 31U
#define GFXREG_TCON_SPG4POSON_SPGPSON_TOGGLE4_FMASK 0x1U
#define GFXREG_TCON_SPG4POSON_SETM_SPGPSON_TOGGLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG4POSON_SET_SPGPSON_TOGGLE4(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4POSON_GET_SPGPSON_TOGGLE4(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE4(s,val) ( (s)->spg4poson = ((s)->spg4poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE4(s,val)  ( (s)->spg4poson = (((s)->spg4poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE4(s) ((((s)->spg4poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG4POSON_SPGPSON_TOGGLE4_RESET 0U

/* SPGPSON_X4: X scan position  */
#define GFXREG_TCON_SPG4POSON_SPGPSON_X4_FSHIFT 16U
#define GFXREG_TCON_SPG4POSON_SPGPSON_X4_FMASK 0x7fffU
#define GFXREG_TCON_SPG4POSON_SETM_SPGPSON_X4(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG4POSON_SET_SPGPSON_X4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4POSON_GET_SPGPSON_X4(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X4(s,val) ( (s)->spg4poson = ((s)->spg4poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X4(s,val)  ( (s)->spg4poson = (((s)->spg4poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X4(s) ((((s)->spg4poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG4POSON_SPGPSON_X4_RESET 0U

/* SPGPSON_FIELD4: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG4POSON_SPGPSON_FIELD4_FSHIFT 15U
#define GFXREG_TCON_SPG4POSON_SPGPSON_FIELD4_FMASK 0x1U
#define GFXREG_TCON_SPG4POSON_SETM_SPGPSON_FIELD4(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG4POSON_SET_SPGPSON_FIELD4(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4POSON_GET_SPGPSON_FIELD4(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD4(s,val) ( (s)->spg4poson = ((s)->spg4poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD4(s,val)  ( (s)->spg4poson = (((s)->spg4poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD4(s) ((((s)->spg4poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG4POSON_SPGPSON_FIELD4_RESET 0U

/* SPGPSON_Y4: Y scan position  */
#define GFXREG_TCON_SPG4POSON_SPGPSON_Y4_FSHIFT 0U
#define GFXREG_TCON_SPG4POSON_SPGPSON_Y4_FMASK 0x7fffU
#define GFXREG_TCON_SPG4POSON_SETM_SPGPSON_Y4(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG4POSON_SET_SPGPSON_Y4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4POSON_GET_SPGPSON_Y4(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y4(s,val) ( (s)->spg4poson = ((s)->spg4poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y4(s,val)  ( (s)->spg4poson = (((s)->spg4poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y4(s) ((((s)->spg4poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG4POSON_SPGPSON_Y4_RESET 0U

/* SPG4MASKON: The Sequencer Pulse Generator 4 Mask Enable register is used to mask the enable of SPG 4 */
#define GFXREG_TCON_SPG4MASKON 0x0000048cU
/* SPGMKON4: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG4MASKON_SPGMKON4_FSHIFT 0U
#define GFXREG_TCON_SPG4MASKON_SPGMKON4_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG4MASKON_SETM_SPGMKON4(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG4MASKON_SET_SPGMKON4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4MASKON_GET_SPGMKON4(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON4(s,val) ( (s)->spg4maskon = ((s)->spg4maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON4(s,val)  ( (s)->spg4maskon = (((s)->spg4maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON4(s) ((((s)->spg4maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG4MASKON_SPGMKON4_RESET 0U

/* SPG4POSOFF: Sync pulse generator 4, 'Switch off' position */
#define GFXREG_TCON_SPG4POSOFF 0x00000490U
/* SPGPSOFF_TOGGLE4: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_TOGGLE4_FSHIFT 31U
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_TOGGLE4_FMASK 0x1U
#define GFXREG_TCON_SPG4POSOFF_SETM_SPGPSOFF_TOGGLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG4POSOFF_SET_SPGPSOFF_TOGGLE4(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4POSOFF_GET_SPGPSOFF_TOGGLE4(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE4(s,val) ( (s)->spg4posoff = ((s)->spg4posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE4(s,val)  ( (s)->spg4posoff = (((s)->spg4posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE4(s) ((((s)->spg4posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_TOGGLE4_RESET 0U

/* SPGPSOFF_X4: X scan position  */
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_X4_FSHIFT 16U
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_X4_FMASK 0x7fffU
#define GFXREG_TCON_SPG4POSOFF_SETM_SPGPSOFF_X4(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG4POSOFF_SET_SPGPSOFF_X4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4POSOFF_GET_SPGPSOFF_X4(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X4(s,val) ( (s)->spg4posoff = ((s)->spg4posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X4(s,val)  ( (s)->spg4posoff = (((s)->spg4posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X4(s) ((((s)->spg4posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_X4_RESET 0U

/* SPGPSOFF_FIELD4: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_FIELD4_FSHIFT 15U
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_FIELD4_FMASK 0x1U
#define GFXREG_TCON_SPG4POSOFF_SETM_SPGPSOFF_FIELD4(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG4POSOFF_SET_SPGPSOFF_FIELD4(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4POSOFF_GET_SPGPSOFF_FIELD4(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD4(s,val) ( (s)->spg4posoff = ((s)->spg4posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD4(s,val)  ( (s)->spg4posoff = (((s)->spg4posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD4(s) ((((s)->spg4posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_FIELD4_RESET 0U

/* SPGPSOFF_Y4: Y scan position  */
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_Y4_FSHIFT 0U
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_Y4_FMASK 0x7fffU
#define GFXREG_TCON_SPG4POSOFF_SETM_SPGPSOFF_Y4(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG4POSOFF_SET_SPGPSOFF_Y4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4POSOFF_GET_SPGPSOFF_Y4(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y4(s,val) ( (s)->spg4posoff = ((s)->spg4posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y4(s,val)  ( (s)->spg4posoff = (((s)->spg4posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y4(s) ((((s)->spg4posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG4POSOFF_SPGPSOFF_Y4_RESET 0U

/* SPG4MASKOFF: The Sequencer Pulse Generator 4 Mask Enable register is used to mask the disable of SPG 4 */
#define GFXREG_TCON_SPG4MASKOFF 0x00000494U
/* SPGMKOFF4: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG4MASKOFF_SPGMKOFF4_FSHIFT 0U
#define GFXREG_TCON_SPG4MASKOFF_SPGMKOFF4_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG4MASKOFF_SETM_SPGMKOFF4(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG4MASKOFF_SET_SPGMKOFF4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG4MASKOFF_GET_SPGMKOFF4(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF4(s,val) ( (s)->spg4maskoff = ((s)->spg4maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF4(s,val)  ( (s)->spg4maskoff = (((s)->spg4maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF4(s) ((((s)->spg4maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG4MASKOFF_SPGMKOFF4_RESET 0U

/* SPG5POSON: Sync pulse generator 5, 'Switch on' position */
#define GFXREG_TCON_SPG5POSON 0x00000498U
/* SPGPSON_TOGGLE5: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG5POSON_SPGPSON_TOGGLE5_FSHIFT 31U
#define GFXREG_TCON_SPG5POSON_SPGPSON_TOGGLE5_FMASK 0x1U
#define GFXREG_TCON_SPG5POSON_SETM_SPGPSON_TOGGLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG5POSON_SET_SPGPSON_TOGGLE5(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5POSON_GET_SPGPSON_TOGGLE5(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE5(s,val) ( (s)->spg5poson = ((s)->spg5poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE5(s,val)  ( (s)->spg5poson = (((s)->spg5poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE5(s) ((((s)->spg5poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG5POSON_SPGPSON_TOGGLE5_RESET 0U

/* SPGPSON_X5: X scan position  */
#define GFXREG_TCON_SPG5POSON_SPGPSON_X5_FSHIFT 16U
#define GFXREG_TCON_SPG5POSON_SPGPSON_X5_FMASK 0x7fffU
#define GFXREG_TCON_SPG5POSON_SETM_SPGPSON_X5(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG5POSON_SET_SPGPSON_X5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5POSON_GET_SPGPSON_X5(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X5(s,val) ( (s)->spg5poson = ((s)->spg5poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X5(s,val)  ( (s)->spg5poson = (((s)->spg5poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X5(s) ((((s)->spg5poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG5POSON_SPGPSON_X5_RESET 0U

/* SPGPSON_FIELD5: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG5POSON_SPGPSON_FIELD5_FSHIFT 15U
#define GFXREG_TCON_SPG5POSON_SPGPSON_FIELD5_FMASK 0x1U
#define GFXREG_TCON_SPG5POSON_SETM_SPGPSON_FIELD5(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG5POSON_SET_SPGPSON_FIELD5(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5POSON_GET_SPGPSON_FIELD5(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD5(s,val) ( (s)->spg5poson = ((s)->spg5poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD5(s,val)  ( (s)->spg5poson = (((s)->spg5poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD5(s) ((((s)->spg5poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG5POSON_SPGPSON_FIELD5_RESET 0U

/* SPGPSON_Y5: Y scan position  */
#define GFXREG_TCON_SPG5POSON_SPGPSON_Y5_FSHIFT 0U
#define GFXREG_TCON_SPG5POSON_SPGPSON_Y5_FMASK 0x7fffU
#define GFXREG_TCON_SPG5POSON_SETM_SPGPSON_Y5(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG5POSON_SET_SPGPSON_Y5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5POSON_GET_SPGPSON_Y5(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y5(s,val) ( (s)->spg5poson = ((s)->spg5poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y5(s,val)  ( (s)->spg5poson = (((s)->spg5poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y5(s) ((((s)->spg5poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG5POSON_SPGPSON_Y5_RESET 0U

/* SPG5MASKON: The Sequencer Pulse Generator 5 Mask Enable register is used to mask the enable of SPG 5 */
#define GFXREG_TCON_SPG5MASKON 0x0000049cU
/* SPGMKON5: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG5MASKON_SPGMKON5_FSHIFT 0U
#define GFXREG_TCON_SPG5MASKON_SPGMKON5_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG5MASKON_SETM_SPGMKON5(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG5MASKON_SET_SPGMKON5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5MASKON_GET_SPGMKON5(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON5(s,val) ( (s)->spg5maskon = ((s)->spg5maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON5(s,val)  ( (s)->spg5maskon = (((s)->spg5maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON5(s) ((((s)->spg5maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG5MASKON_SPGMKON5_RESET 0U

/* SPG5POSOFF: Sync pulse generator 5, 'Switch off' position */
#define GFXREG_TCON_SPG5POSOFF 0x000004a0U
/* SPGPSOFF_TOGGLE5: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_TOGGLE5_FSHIFT 31U
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_TOGGLE5_FMASK 0x1U
#define GFXREG_TCON_SPG5POSOFF_SETM_SPGPSOFF_TOGGLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG5POSOFF_SET_SPGPSOFF_TOGGLE5(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5POSOFF_GET_SPGPSOFF_TOGGLE5(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE5(s,val) ( (s)->spg5posoff = ((s)->spg5posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE5(s,val)  ( (s)->spg5posoff = (((s)->spg5posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE5(s) ((((s)->spg5posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_TOGGLE5_RESET 0U

/* SPGPSOFF_X5: X scan position  */
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_X5_FSHIFT 16U
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_X5_FMASK 0x7fffU
#define GFXREG_TCON_SPG5POSOFF_SETM_SPGPSOFF_X5(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG5POSOFF_SET_SPGPSOFF_X5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5POSOFF_GET_SPGPSOFF_X5(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X5(s,val) ( (s)->spg5posoff = ((s)->spg5posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X5(s,val)  ( (s)->spg5posoff = (((s)->spg5posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X5(s) ((((s)->spg5posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_X5_RESET 0U

/* SPGPSOFF_FIELD5: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_FIELD5_FSHIFT 15U
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_FIELD5_FMASK 0x1U
#define GFXREG_TCON_SPG5POSOFF_SETM_SPGPSOFF_FIELD5(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG5POSOFF_SET_SPGPSOFF_FIELD5(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5POSOFF_GET_SPGPSOFF_FIELD5(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD5(s,val) ( (s)->spg5posoff = ((s)->spg5posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD5(s,val)  ( (s)->spg5posoff = (((s)->spg5posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD5(s) ((((s)->spg5posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_FIELD5_RESET 0U

/* SPGPSOFF_Y5: Y scan position  */
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_Y5_FSHIFT 0U
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_Y5_FMASK 0x7fffU
#define GFXREG_TCON_SPG5POSOFF_SETM_SPGPSOFF_Y5(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG5POSOFF_SET_SPGPSOFF_Y5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5POSOFF_GET_SPGPSOFF_Y5(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y5(s,val) ( (s)->spg5posoff = ((s)->spg5posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y5(s,val)  ( (s)->spg5posoff = (((s)->spg5posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y5(s) ((((s)->spg5posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG5POSOFF_SPGPSOFF_Y5_RESET 0U

/* SPG5MASKOFF: The Sequencer Pulse Generator 5 Mask Enable register is used to mask the disable of SPG 5 */
#define GFXREG_TCON_SPG5MASKOFF 0x000004a4U
/* SPGMKOFF5: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG5MASKOFF_SPGMKOFF5_FSHIFT 0U
#define GFXREG_TCON_SPG5MASKOFF_SPGMKOFF5_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG5MASKOFF_SETM_SPGMKOFF5(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG5MASKOFF_SET_SPGMKOFF5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG5MASKOFF_GET_SPGMKOFF5(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF5(s,val) ( (s)->spg5maskoff = ((s)->spg5maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF5(s,val)  ( (s)->spg5maskoff = (((s)->spg5maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF5(s) ((((s)->spg5maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG5MASKOFF_SPGMKOFF5_RESET 0U

/* SPG6POSON: Sync pulse generator 6, 'Switch on' position */
#define GFXREG_TCON_SPG6POSON 0x000004a8U
/* SPGPSON_TOGGLE6: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG6POSON_SPGPSON_TOGGLE6_FSHIFT 31U
#define GFXREG_TCON_SPG6POSON_SPGPSON_TOGGLE6_FMASK 0x1U
#define GFXREG_TCON_SPG6POSON_SETM_SPGPSON_TOGGLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG6POSON_SET_SPGPSON_TOGGLE6(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6POSON_GET_SPGPSON_TOGGLE6(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE6(s,val) ( (s)->spg6poson = ((s)->spg6poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE6(s,val)  ( (s)->spg6poson = (((s)->spg6poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE6(s) ((((s)->spg6poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG6POSON_SPGPSON_TOGGLE6_RESET 0U

/* SPGPSON_X6: X scan position  */
#define GFXREG_TCON_SPG6POSON_SPGPSON_X6_FSHIFT 16U
#define GFXREG_TCON_SPG6POSON_SPGPSON_X6_FMASK 0x7fffU
#define GFXREG_TCON_SPG6POSON_SETM_SPGPSON_X6(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG6POSON_SET_SPGPSON_X6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6POSON_GET_SPGPSON_X6(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X6(s,val) ( (s)->spg6poson = ((s)->spg6poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X6(s,val)  ( (s)->spg6poson = (((s)->spg6poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X6(s) ((((s)->spg6poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG6POSON_SPGPSON_X6_RESET 0U

/* SPGPSON_FIELD6: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG6POSON_SPGPSON_FIELD6_FSHIFT 15U
#define GFXREG_TCON_SPG6POSON_SPGPSON_FIELD6_FMASK 0x1U
#define GFXREG_TCON_SPG6POSON_SETM_SPGPSON_FIELD6(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG6POSON_SET_SPGPSON_FIELD6(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6POSON_GET_SPGPSON_FIELD6(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD6(s,val) ( (s)->spg6poson = ((s)->spg6poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD6(s,val)  ( (s)->spg6poson = (((s)->spg6poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD6(s) ((((s)->spg6poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG6POSON_SPGPSON_FIELD6_RESET 0U

/* SPGPSON_Y6: Y scan position  */
#define GFXREG_TCON_SPG6POSON_SPGPSON_Y6_FSHIFT 0U
#define GFXREG_TCON_SPG6POSON_SPGPSON_Y6_FMASK 0x7fffU
#define GFXREG_TCON_SPG6POSON_SETM_SPGPSON_Y6(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG6POSON_SET_SPGPSON_Y6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6POSON_GET_SPGPSON_Y6(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y6(s,val) ( (s)->spg6poson = ((s)->spg6poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y6(s,val)  ( (s)->spg6poson = (((s)->spg6poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y6(s) ((((s)->spg6poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG6POSON_SPGPSON_Y6_RESET 0U

/* SPG6MASKON: The Sequencer Pulse Generator 6 Mask Enable register is used to mask the enable of SPG 6 */
#define GFXREG_TCON_SPG6MASKON 0x000004acU
/* SPGMKON6: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG6MASKON_SPGMKON6_FSHIFT 0U
#define GFXREG_TCON_SPG6MASKON_SPGMKON6_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG6MASKON_SETM_SPGMKON6(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG6MASKON_SET_SPGMKON6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6MASKON_GET_SPGMKON6(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON6(s,val) ( (s)->spg6maskon = ((s)->spg6maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON6(s,val)  ( (s)->spg6maskon = (((s)->spg6maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON6(s) ((((s)->spg6maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG6MASKON_SPGMKON6_RESET 0U

/* SPG6POSOFF: Sync pulse generator 6, 'Switch off' position */
#define GFXREG_TCON_SPG6POSOFF 0x000004b0U
/* SPGPSOFF_TOGGLE6: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_TOGGLE6_FSHIFT 31U
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_TOGGLE6_FMASK 0x1U
#define GFXREG_TCON_SPG6POSOFF_SETM_SPGPSOFF_TOGGLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG6POSOFF_SET_SPGPSOFF_TOGGLE6(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6POSOFF_GET_SPGPSOFF_TOGGLE6(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE6(s,val) ( (s)->spg6posoff = ((s)->spg6posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE6(s,val)  ( (s)->spg6posoff = (((s)->spg6posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE6(s) ((((s)->spg6posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_TOGGLE6_RESET 0U

/* SPGPSOFF_X6: X scan position  */
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_X6_FSHIFT 16U
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_X6_FMASK 0x7fffU
#define GFXREG_TCON_SPG6POSOFF_SETM_SPGPSOFF_X6(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG6POSOFF_SET_SPGPSOFF_X6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6POSOFF_GET_SPGPSOFF_X6(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X6(s,val) ( (s)->spg6posoff = ((s)->spg6posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X6(s,val)  ( (s)->spg6posoff = (((s)->spg6posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X6(s) ((((s)->spg6posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_X6_RESET 0U

/* SPGPSOFF_FIELD6: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_FIELD6_FSHIFT 15U
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_FIELD6_FMASK 0x1U
#define GFXREG_TCON_SPG6POSOFF_SETM_SPGPSOFF_FIELD6(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG6POSOFF_SET_SPGPSOFF_FIELD6(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6POSOFF_GET_SPGPSOFF_FIELD6(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD6(s,val) ( (s)->spg6posoff = ((s)->spg6posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD6(s,val)  ( (s)->spg6posoff = (((s)->spg6posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD6(s) ((((s)->spg6posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_FIELD6_RESET 0U

/* SPGPSOFF_Y6: Y scan position  */
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_Y6_FSHIFT 0U
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_Y6_FMASK 0x7fffU
#define GFXREG_TCON_SPG6POSOFF_SETM_SPGPSOFF_Y6(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG6POSOFF_SET_SPGPSOFF_Y6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6POSOFF_GET_SPGPSOFF_Y6(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y6(s,val) ( (s)->spg6posoff = ((s)->spg6posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y6(s,val)  ( (s)->spg6posoff = (((s)->spg6posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y6(s) ((((s)->spg6posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG6POSOFF_SPGPSOFF_Y6_RESET 0U

/* SPG6MASKOFF: The Sequencer Pulse Generator 6 Mask Enable register is used to mask the disable of SPG 6 */
#define GFXREG_TCON_SPG6MASKOFF 0x000004b4U
/* SPGMKOFF6: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG6MASKOFF_SPGMKOFF6_FSHIFT 0U
#define GFXREG_TCON_SPG6MASKOFF_SPGMKOFF6_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG6MASKOFF_SETM_SPGMKOFF6(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG6MASKOFF_SET_SPGMKOFF6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG6MASKOFF_GET_SPGMKOFF6(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF6(s,val) ( (s)->spg6maskoff = ((s)->spg6maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF6(s,val)  ( (s)->spg6maskoff = (((s)->spg6maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF6(s) ((((s)->spg6maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG6MASKOFF_SPGMKOFF6_RESET 0U

/* SPG7POSON: Sync pulse generator 7, 'Switch on' position */
#define GFXREG_TCON_SPG7POSON 0x000004b8U
/* SPGPSON_TOGGLE7: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG7POSON_SPGPSON_TOGGLE7_FSHIFT 31U
#define GFXREG_TCON_SPG7POSON_SPGPSON_TOGGLE7_FMASK 0x1U
#define GFXREG_TCON_SPG7POSON_SETM_SPGPSON_TOGGLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG7POSON_SET_SPGPSON_TOGGLE7(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7POSON_GET_SPGPSON_TOGGLE7(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE7(s,val) ( (s)->spg7poson = ((s)->spg7poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE7(s,val)  ( (s)->spg7poson = (((s)->spg7poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE7(s) ((((s)->spg7poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG7POSON_SPGPSON_TOGGLE7_RESET 0U

/* SPGPSON_X7: X scan position  */
#define GFXREG_TCON_SPG7POSON_SPGPSON_X7_FSHIFT 16U
#define GFXREG_TCON_SPG7POSON_SPGPSON_X7_FMASK 0x7fffU
#define GFXREG_TCON_SPG7POSON_SETM_SPGPSON_X7(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG7POSON_SET_SPGPSON_X7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7POSON_GET_SPGPSON_X7(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X7(s,val) ( (s)->spg7poson = ((s)->spg7poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X7(s,val)  ( (s)->spg7poson = (((s)->spg7poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X7(s) ((((s)->spg7poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG7POSON_SPGPSON_X7_RESET 0U

/* SPGPSON_FIELD7: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG7POSON_SPGPSON_FIELD7_FSHIFT 15U
#define GFXREG_TCON_SPG7POSON_SPGPSON_FIELD7_FMASK 0x1U
#define GFXREG_TCON_SPG7POSON_SETM_SPGPSON_FIELD7(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG7POSON_SET_SPGPSON_FIELD7(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7POSON_GET_SPGPSON_FIELD7(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD7(s,val) ( (s)->spg7poson = ((s)->spg7poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD7(s,val)  ( (s)->spg7poson = (((s)->spg7poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD7(s) ((((s)->spg7poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG7POSON_SPGPSON_FIELD7_RESET 0U

/* SPGPSON_Y7: Y scan position  */
#define GFXREG_TCON_SPG7POSON_SPGPSON_Y7_FSHIFT 0U
#define GFXREG_TCON_SPG7POSON_SPGPSON_Y7_FMASK 0x7fffU
#define GFXREG_TCON_SPG7POSON_SETM_SPGPSON_Y7(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG7POSON_SET_SPGPSON_Y7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7POSON_GET_SPGPSON_Y7(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y7(s,val) ( (s)->spg7poson = ((s)->spg7poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y7(s,val)  ( (s)->spg7poson = (((s)->spg7poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y7(s) ((((s)->spg7poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG7POSON_SPGPSON_Y7_RESET 0U

/* SPG7MASKON: The Sequencer Pulse Generator 7 Mask Enable register is used to mask the enable of SPG 7 */
#define GFXREG_TCON_SPG7MASKON 0x000004bcU
/* SPGMKON7: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG7MASKON_SPGMKON7_FSHIFT 0U
#define GFXREG_TCON_SPG7MASKON_SPGMKON7_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG7MASKON_SETM_SPGMKON7(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG7MASKON_SET_SPGMKON7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7MASKON_GET_SPGMKON7(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON7(s,val) ( (s)->spg7maskon = ((s)->spg7maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON7(s,val)  ( (s)->spg7maskon = (((s)->spg7maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON7(s) ((((s)->spg7maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG7MASKON_SPGMKON7_RESET 0U

/* SPG7POSOFF: Sync pulse generator 7, 'Switch off' position */
#define GFXREG_TCON_SPG7POSOFF 0x000004c0U
/* SPGPSOFF_TOGGLE7: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_TOGGLE7_FSHIFT 31U
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_TOGGLE7_FMASK 0x1U
#define GFXREG_TCON_SPG7POSOFF_SETM_SPGPSOFF_TOGGLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG7POSOFF_SET_SPGPSOFF_TOGGLE7(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7POSOFF_GET_SPGPSOFF_TOGGLE7(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE7(s,val) ( (s)->spg7posoff = ((s)->spg7posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE7(s,val)  ( (s)->spg7posoff = (((s)->spg7posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE7(s) ((((s)->spg7posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_TOGGLE7_RESET 0U

/* SPGPSOFF_X7: X scan position  */
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_X7_FSHIFT 16U
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_X7_FMASK 0x7fffU
#define GFXREG_TCON_SPG7POSOFF_SETM_SPGPSOFF_X7(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG7POSOFF_SET_SPGPSOFF_X7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7POSOFF_GET_SPGPSOFF_X7(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X7(s,val) ( (s)->spg7posoff = ((s)->spg7posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X7(s,val)  ( (s)->spg7posoff = (((s)->spg7posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X7(s) ((((s)->spg7posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_X7_RESET 0U

/* SPGPSOFF_FIELD7: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_FIELD7_FSHIFT 15U
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_FIELD7_FMASK 0x1U
#define GFXREG_TCON_SPG7POSOFF_SETM_SPGPSOFF_FIELD7(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG7POSOFF_SET_SPGPSOFF_FIELD7(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7POSOFF_GET_SPGPSOFF_FIELD7(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD7(s,val) ( (s)->spg7posoff = ((s)->spg7posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD7(s,val)  ( (s)->spg7posoff = (((s)->spg7posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD7(s) ((((s)->spg7posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_FIELD7_RESET 0U

/* SPGPSOFF_Y7: Y scan position  */
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_Y7_FSHIFT 0U
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_Y7_FMASK 0x7fffU
#define GFXREG_TCON_SPG7POSOFF_SETM_SPGPSOFF_Y7(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG7POSOFF_SET_SPGPSOFF_Y7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7POSOFF_GET_SPGPSOFF_Y7(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y7(s,val) ( (s)->spg7posoff = ((s)->spg7posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y7(s,val)  ( (s)->spg7posoff = (((s)->spg7posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y7(s) ((((s)->spg7posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG7POSOFF_SPGPSOFF_Y7_RESET 0U

/* SPG7MASKOFF: The Sequencer Pulse Generator 7 Mask Enable register is used to mask the disable of SPG 7 */
#define GFXREG_TCON_SPG7MASKOFF 0x000004c4U
/* SPGMKOFF7: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG7MASKOFF_SPGMKOFF7_FSHIFT 0U
#define GFXREG_TCON_SPG7MASKOFF_SPGMKOFF7_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG7MASKOFF_SETM_SPGMKOFF7(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG7MASKOFF_SET_SPGMKOFF7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG7MASKOFF_GET_SPGMKOFF7(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF7(s,val) ( (s)->spg7maskoff = ((s)->spg7maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF7(s,val)  ( (s)->spg7maskoff = (((s)->spg7maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF7(s) ((((s)->spg7maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG7MASKOFF_SPGMKOFF7_RESET 0U

/* SPG8POSON: Sync pulse generator 8, 'Switch on' position */
#define GFXREG_TCON_SPG8POSON 0x000004c8U
/* SPGPSON_TOGGLE8: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG8POSON_SPGPSON_TOGGLE8_FSHIFT 31U
#define GFXREG_TCON_SPG8POSON_SPGPSON_TOGGLE8_FMASK 0x1U
#define GFXREG_TCON_SPG8POSON_SETM_SPGPSON_TOGGLE8(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG8POSON_SET_SPGPSON_TOGGLE8(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8POSON_GET_SPGPSON_TOGGLE8(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE8(s,val) ( (s)->spg8poson = ((s)->spg8poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE8(s,val)  ( (s)->spg8poson = (((s)->spg8poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE8(s) ((((s)->spg8poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG8POSON_SPGPSON_TOGGLE8_RESET 0U

/* SPGPSON_X8: X scan position  */
#define GFXREG_TCON_SPG8POSON_SPGPSON_X8_FSHIFT 16U
#define GFXREG_TCON_SPG8POSON_SPGPSON_X8_FMASK 0x7fffU
#define GFXREG_TCON_SPG8POSON_SETM_SPGPSON_X8(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG8POSON_SET_SPGPSON_X8(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8POSON_GET_SPGPSON_X8(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X8(s,val) ( (s)->spg8poson = ((s)->spg8poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X8(s,val)  ( (s)->spg8poson = (((s)->spg8poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X8(s) ((((s)->spg8poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG8POSON_SPGPSON_X8_RESET 0U

/* SPGPSON_FIELD8: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG8POSON_SPGPSON_FIELD8_FSHIFT 15U
#define GFXREG_TCON_SPG8POSON_SPGPSON_FIELD8_FMASK 0x1U
#define GFXREG_TCON_SPG8POSON_SETM_SPGPSON_FIELD8(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG8POSON_SET_SPGPSON_FIELD8(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8POSON_GET_SPGPSON_FIELD8(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD8(s,val) ( (s)->spg8poson = ((s)->spg8poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD8(s,val)  ( (s)->spg8poson = (((s)->spg8poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD8(s) ((((s)->spg8poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG8POSON_SPGPSON_FIELD8_RESET 0U

/* SPGPSON_Y8: Y scan position  */
#define GFXREG_TCON_SPG8POSON_SPGPSON_Y8_FSHIFT 0U
#define GFXREG_TCON_SPG8POSON_SPGPSON_Y8_FMASK 0x7fffU
#define GFXREG_TCON_SPG8POSON_SETM_SPGPSON_Y8(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG8POSON_SET_SPGPSON_Y8(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8POSON_GET_SPGPSON_Y8(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y8(s,val) ( (s)->spg8poson = ((s)->spg8poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y8(s,val)  ( (s)->spg8poson = (((s)->spg8poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y8(s) ((((s)->spg8poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG8POSON_SPGPSON_Y8_RESET 0U

/* SPG8MASKON: The Sequencer Pulse Generator 8 Mask Enable register is used to mask the enable of SPG 8 */
#define GFXREG_TCON_SPG8MASKON 0x000004ccU
/* SPGMKON8: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG8MASKON_SPGMKON8_FSHIFT 0U
#define GFXREG_TCON_SPG8MASKON_SPGMKON8_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG8MASKON_SETM_SPGMKON8(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG8MASKON_SET_SPGMKON8(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8MASKON_GET_SPGMKON8(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON8(s,val) ( (s)->spg8maskon = ((s)->spg8maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON8(s,val)  ( (s)->spg8maskon = (((s)->spg8maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON8(s) ((((s)->spg8maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG8MASKON_SPGMKON8_RESET 0U

/* SPG8POSOFF: Sync pulse generator 8, 'Switch off' position */
#define GFXREG_TCON_SPG8POSOFF 0x000004d0U
/* SPGPSOFF_TOGGLE8: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_TOGGLE8_FSHIFT 31U
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_TOGGLE8_FMASK 0x1U
#define GFXREG_TCON_SPG8POSOFF_SETM_SPGPSOFF_TOGGLE8(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG8POSOFF_SET_SPGPSOFF_TOGGLE8(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8POSOFF_GET_SPGPSOFF_TOGGLE8(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE8(s,val) ( (s)->spg8posoff = ((s)->spg8posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE8(s,val)  ( (s)->spg8posoff = (((s)->spg8posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE8(s) ((((s)->spg8posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_TOGGLE8_RESET 0U

/* SPGPSOFF_X8: X scan position  */
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_X8_FSHIFT 16U
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_X8_FMASK 0x7fffU
#define GFXREG_TCON_SPG8POSOFF_SETM_SPGPSOFF_X8(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG8POSOFF_SET_SPGPSOFF_X8(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8POSOFF_GET_SPGPSOFF_X8(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X8(s,val) ( (s)->spg8posoff = ((s)->spg8posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X8(s,val)  ( (s)->spg8posoff = (((s)->spg8posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X8(s) ((((s)->spg8posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_X8_RESET 0U

/* SPGPSOFF_FIELD8: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_FIELD8_FSHIFT 15U
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_FIELD8_FMASK 0x1U
#define GFXREG_TCON_SPG8POSOFF_SETM_SPGPSOFF_FIELD8(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG8POSOFF_SET_SPGPSOFF_FIELD8(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8POSOFF_GET_SPGPSOFF_FIELD8(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD8(s,val) ( (s)->spg8posoff = ((s)->spg8posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD8(s,val)  ( (s)->spg8posoff = (((s)->spg8posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD8(s) ((((s)->spg8posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_FIELD8_RESET 0U

/* SPGPSOFF_Y8: Y scan position  */
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_Y8_FSHIFT 0U
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_Y8_FMASK 0x7fffU
#define GFXREG_TCON_SPG8POSOFF_SETM_SPGPSOFF_Y8(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG8POSOFF_SET_SPGPSOFF_Y8(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8POSOFF_GET_SPGPSOFF_Y8(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y8(s,val) ( (s)->spg8posoff = ((s)->spg8posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y8(s,val)  ( (s)->spg8posoff = (((s)->spg8posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y8(s) ((((s)->spg8posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG8POSOFF_SPGPSOFF_Y8_RESET 0U

/* SPG8MASKOFF: The Sequencer Pulse Generator 8 Mask Enable register is used to mask the disable of SPG 8 */
#define GFXREG_TCON_SPG8MASKOFF 0x000004d4U
/* SPGMKOFF8: Mask bits  0b=Include this  bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG8MASKOFF_SPGMKOFF8_FSHIFT 0U
#define GFXREG_TCON_SPG8MASKOFF_SPGMKOFF8_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG8MASKOFF_SETM_SPGMKOFF8(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG8MASKOFF_SET_SPGMKOFF8(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG8MASKOFF_GET_SPGMKOFF8(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF8(s,val) ( (s)->spg8maskoff = ((s)->spg8maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF8(s,val)  ( (s)->spg8maskoff = (((s)->spg8maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF8(s) ((((s)->spg8maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG8MASKOFF_SPGMKOFF8_RESET 0U

/* SPG9POSON: Sync pulse generator 9, 'Switch on' position */
#define GFXREG_TCON_SPG9POSON 0x000004d8U
/* SPGPSON_TOGGLE9: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG9POSON_SPGPSON_TOGGLE9_FSHIFT 31U
#define GFXREG_TCON_SPG9POSON_SPGPSON_TOGGLE9_FMASK 0x1U
#define GFXREG_TCON_SPG9POSON_SETM_SPGPSON_TOGGLE9(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG9POSON_SET_SPGPSON_TOGGLE9(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9POSON_GET_SPGPSON_TOGGLE9(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE9(s,val) ( (s)->spg9poson = ((s)->spg9poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE9(s,val)  ( (s)->spg9poson = (((s)->spg9poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE9(s) ((((s)->spg9poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG9POSON_SPGPSON_TOGGLE9_RESET 0U

/* SPGPSON_X9: X scan position  */
#define GFXREG_TCON_SPG9POSON_SPGPSON_X9_FSHIFT 16U
#define GFXREG_TCON_SPG9POSON_SPGPSON_X9_FMASK 0x7fffU
#define GFXREG_TCON_SPG9POSON_SETM_SPGPSON_X9(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG9POSON_SET_SPGPSON_X9(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9POSON_GET_SPGPSON_X9(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X9(s,val) ( (s)->spg9poson = ((s)->spg9poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X9(s,val)  ( (s)->spg9poson = (((s)->spg9poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X9(s) ((((s)->spg9poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG9POSON_SPGPSON_X9_RESET 0U

/* SPGPSON_FIELD9: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG9POSON_SPGPSON_FIELD9_FSHIFT 15U
#define GFXREG_TCON_SPG9POSON_SPGPSON_FIELD9_FMASK 0x1U
#define GFXREG_TCON_SPG9POSON_SETM_SPGPSON_FIELD9(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG9POSON_SET_SPGPSON_FIELD9(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9POSON_GET_SPGPSON_FIELD9(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD9(s,val) ( (s)->spg9poson = ((s)->spg9poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD9(s,val)  ( (s)->spg9poson = (((s)->spg9poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD9(s) ((((s)->spg9poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG9POSON_SPGPSON_FIELD9_RESET 0U

/* SPGPSON_Y9: Y scan position  */
#define GFXREG_TCON_SPG9POSON_SPGPSON_Y9_FSHIFT 0U
#define GFXREG_TCON_SPG9POSON_SPGPSON_Y9_FMASK 0x7fffU
#define GFXREG_TCON_SPG9POSON_SETM_SPGPSON_Y9(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG9POSON_SET_SPGPSON_Y9(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9POSON_GET_SPGPSON_Y9(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y9(s,val) ( (s)->spg9poson = ((s)->spg9poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y9(s,val)  ( (s)->spg9poson = (((s)->spg9poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y9(s) ((((s)->spg9poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG9POSON_SPGPSON_Y9_RESET 0U

/* SPG9MASKON: The Sequencer Pulse Generator 9 Mask Enable register is used to mask the enable of SPG 9 */
#define GFXREG_TCON_SPG9MASKON 0x000004dcU
/* SPGMKON9: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG9MASKON_SPGMKON9_FSHIFT 0U
#define GFXREG_TCON_SPG9MASKON_SPGMKON9_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG9MASKON_SETM_SPGMKON9(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG9MASKON_SET_SPGMKON9(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9MASKON_GET_SPGMKON9(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON9(s,val) ( (s)->spg9maskon = ((s)->spg9maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON9(s,val)  ( (s)->spg9maskon = (((s)->spg9maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON9(s) ((((s)->spg9maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG9MASKON_SPGMKON9_RESET 0U

/* SPG9POSOFF: Sync pulse generator 9, 'Switch off' position */
#define GFXREG_TCON_SPG9POSOFF 0x000004e0U
/* SPGPSOFF_TOGGLE9: Toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_TOGGLE9_FSHIFT 31U
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_TOGGLE9_FMASK 0x1U
#define GFXREG_TCON_SPG9POSOFF_SETM_SPGPSOFF_TOGGLE9(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG9POSOFF_SET_SPGPSOFF_TOGGLE9(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9POSOFF_GET_SPGPSOFF_TOGGLE9(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE9(s,val) ( (s)->spg9posoff = ((s)->spg9posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE9(s,val)  ( (s)->spg9posoff = (((s)->spg9posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE9(s) ((((s)->spg9posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_TOGGLE9_RESET 0U

/* SPGPSOFF_X9: X scan position  */
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_X9_FSHIFT 16U
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_X9_FMASK 0x7fffU
#define GFXREG_TCON_SPG9POSOFF_SETM_SPGPSOFF_X9(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG9POSOFF_SET_SPGPSOFF_X9(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9POSOFF_GET_SPGPSOFF_X9(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X9(s,val) ( (s)->spg9posoff = ((s)->spg9posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X9(s,val)  ( (s)->spg9posoff = (((s)->spg9posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X9(s) ((((s)->spg9posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_X9_RESET 0U

/* SPGPSOFF_FIELD9: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_FIELD9_FSHIFT 15U
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_FIELD9_FMASK 0x1U
#define GFXREG_TCON_SPG9POSOFF_SETM_SPGPSOFF_FIELD9(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG9POSOFF_SET_SPGPSOFF_FIELD9(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9POSOFF_GET_SPGPSOFF_FIELD9(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD9(s,val) ( (s)->spg9posoff = ((s)->spg9posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD9(s,val)  ( (s)->spg9posoff = (((s)->spg9posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD9(s) ((((s)->spg9posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_FIELD9_RESET 0U

/* SPGPSOFF_Y9: Y scan position  */
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_Y9_FSHIFT 0U
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_Y9_FMASK 0x7fffU
#define GFXREG_TCON_SPG9POSOFF_SETM_SPGPSOFF_Y9(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG9POSOFF_SET_SPGPSOFF_Y9(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9POSOFF_GET_SPGPSOFF_Y9(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y9(s,val) ( (s)->spg9posoff = ((s)->spg9posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y9(s,val)  ( (s)->spg9posoff = (((s)->spg9posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y9(s) ((((s)->spg9posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG9POSOFF_SPGPSOFF_Y9_RESET 0U

/* SPG9MASKOFF: The Sequencer Pulse Generator 9 Mask Enable register is used to mask the disable of SPG 9 */
#define GFXREG_TCON_SPG9MASKOFF 0x000004e4U
/* SPGMKOFF9: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG9MASKOFF_SPGMKOFF9_FSHIFT 0U
#define GFXREG_TCON_SPG9MASKOFF_SPGMKOFF9_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG9MASKOFF_SETM_SPGMKOFF9(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG9MASKOFF_SET_SPGMKOFF9(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG9MASKOFF_GET_SPGMKOFF9(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF9(s,val) ( (s)->spg9maskoff = ((s)->spg9maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF9(s,val)  ( (s)->spg9maskoff = (((s)->spg9maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF9(s) ((((s)->spg9maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG9MASKOFF_SPGMKOFF9_RESET 0U

/* SPG10POSON: Sync pulse generator 10, 'Switch on' position */
#define GFXREG_TCON_SPG10POSON 0x000004e8U
/* SPGPSON_TOGGLE10: toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG10POSON_SPGPSON_TOGGLE10_FSHIFT 31U
#define GFXREG_TCON_SPG10POSON_SPGPSON_TOGGLE10_FMASK 0x1U
#define GFXREG_TCON_SPG10POSON_SETM_SPGPSON_TOGGLE10(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG10POSON_SET_SPGPSON_TOGGLE10(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10POSON_GET_SPGPSON_TOGGLE10(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE10(s,val) ( (s)->spg10poson = ((s)->spg10poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE10(s,val)  ( (s)->spg10poson = (((s)->spg10poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE10(s) ((((s)->spg10poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG10POSON_SPGPSON_TOGGLE10_RESET 0U

/* SPGPSON_X10: X scan position  */
#define GFXREG_TCON_SPG10POSON_SPGPSON_X10_FSHIFT 16U
#define GFXREG_TCON_SPG10POSON_SPGPSON_X10_FMASK 0x7fffU
#define GFXREG_TCON_SPG10POSON_SETM_SPGPSON_X10(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG10POSON_SET_SPGPSON_X10(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10POSON_GET_SPGPSON_X10(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X10(s,val) ( (s)->spg10poson = ((s)->spg10poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X10(s,val)  ( (s)->spg10poson = (((s)->spg10poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X10(s) ((((s)->spg10poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG10POSON_SPGPSON_X10_RESET 0U

/* SPGPSON_FIELD10: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG10POSON_SPGPSON_FIELD10_FSHIFT 15U
#define GFXREG_TCON_SPG10POSON_SPGPSON_FIELD10_FMASK 0x1U
#define GFXREG_TCON_SPG10POSON_SETM_SPGPSON_FIELD10(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG10POSON_SET_SPGPSON_FIELD10(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10POSON_GET_SPGPSON_FIELD10(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD10(s,val) ( (s)->spg10poson = ((s)->spg10poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD10(s,val)  ( (s)->spg10poson = (((s)->spg10poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD10(s) ((((s)->spg10poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG10POSON_SPGPSON_FIELD10_RESET 0U

/* SPGPSON_Y10: Y scan position  */
#define GFXREG_TCON_SPG10POSON_SPGPSON_Y10_FSHIFT 0U
#define GFXREG_TCON_SPG10POSON_SPGPSON_Y10_FMASK 0x7fffU
#define GFXREG_TCON_SPG10POSON_SETM_SPGPSON_Y10(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG10POSON_SET_SPGPSON_Y10(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10POSON_GET_SPGPSON_Y10(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y10(s,val) ( (s)->spg10poson = ((s)->spg10poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y10(s,val)  ( (s)->spg10poson = (((s)->spg10poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y10(s) ((((s)->spg10poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG10POSON_SPGPSON_Y10_RESET 0U

/* SPG10MASKON: The Sequencer Pulse Generator 10 Mask Enable register is used to mask the enable of SPG 10 */
#define GFXREG_TCON_SPG10MASKON 0x000004ecU
/* SPGMKON10: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG10MASKON_SPGMKON10_FSHIFT 0U
#define GFXREG_TCON_SPG10MASKON_SPGMKON10_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG10MASKON_SETM_SPGMKON10(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG10MASKON_SET_SPGMKON10(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10MASKON_GET_SPGMKON10(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON10(s,val) ( (s)->spg10maskon = ((s)->spg10maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON10(s,val)  ( (s)->spg10maskon = (((s)->spg10maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON10(s) ((((s)->spg10maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG10MASKON_SPGMKON10_RESET 0U

/* SPG10POSOFF: Sync pulse generator 10, 'Switch off' position */
#define GFXREG_TCON_SPG10POSOFF 0x000004f0U
/* SPGPSOFF_TOGGLE10: toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_TOGGLE10_FSHIFT 31U
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_TOGGLE10_FMASK 0x1U
#define GFXREG_TCON_SPG10POSOFF_SETM_SPGPSOFF_TOGGLE10(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG10POSOFF_SET_SPGPSOFF_TOGGLE10(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10POSOFF_GET_SPGPSOFF_TOGGLE10(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE10(s,val) ( (s)->spg10posoff = ((s)->spg10posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE10(s,val)  ( (s)->spg10posoff = (((s)->spg10posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE10(s) ((((s)->spg10posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_TOGGLE10_RESET 0U

/* SPGPSOFF_X10: X scan position  */
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_X10_FSHIFT 16U
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_X10_FMASK 0x7fffU
#define GFXREG_TCON_SPG10POSOFF_SETM_SPGPSOFF_X10(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG10POSOFF_SET_SPGPSOFF_X10(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10POSOFF_GET_SPGPSOFF_X10(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X10(s,val) ( (s)->spg10posoff = ((s)->spg10posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X10(s,val)  ( (s)->spg10posoff = (((s)->spg10posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X10(s) ((((s)->spg10posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_X10_RESET 0U

/* SPGPSOFF_FIELD10: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_FIELD10_FSHIFT 15U
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_FIELD10_FMASK 0x1U
#define GFXREG_TCON_SPG10POSOFF_SETM_SPGPSOFF_FIELD10(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG10POSOFF_SET_SPGPSOFF_FIELD10(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10POSOFF_GET_SPGPSOFF_FIELD10(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD10(s,val) ( (s)->spg10posoff = ((s)->spg10posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD10(s,val)  ( (s)->spg10posoff = (((s)->spg10posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD10(s) ((((s)->spg10posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_FIELD10_RESET 0U

/* SPGPSOFF_Y10: Y scan position  */
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_Y10_FSHIFT 0U
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_Y10_FMASK 0x7fffU
#define GFXREG_TCON_SPG10POSOFF_SETM_SPGPSOFF_Y10(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG10POSOFF_SET_SPGPSOFF_Y10(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10POSOFF_GET_SPGPSOFF_Y10(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y10(s,val) ( (s)->spg10posoff = ((s)->spg10posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y10(s,val)  ( (s)->spg10posoff = (((s)->spg10posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y10(s) ((((s)->spg10posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG10POSOFF_SPGPSOFF_Y10_RESET 0U

/* SPG10MASKOFF: The Sequencer Pulse Generator 10 Mask Enable register is used to mask the disable of SPG 10 */
#define GFXREG_TCON_SPG10MASKOFF 0x000004f4U
/* SPGMKOFF10: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG10MASKOFF_SPGMKOFF10_FSHIFT 0U
#define GFXREG_TCON_SPG10MASKOFF_SPGMKOFF10_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG10MASKOFF_SETM_SPGMKOFF10(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG10MASKOFF_SET_SPGMKOFF10(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG10MASKOFF_GET_SPGMKOFF10(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF10(s,val) ( (s)->spg10maskoff = ((s)->spg10maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF10(s,val)  ( (s)->spg10maskoff = (((s)->spg10maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF10(s) ((((s)->spg10maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG10MASKOFF_SPGMKOFF10_RESET 0U

/* SPG11POSON: Sync pulse generator 11, 'Switch on' position */
#define GFXREG_TCON_SPG11POSON 0x000004f8U
/* SPGPSON_TOGGLE11: toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG11POSON_SPGPSON_TOGGLE11_FSHIFT 31U
#define GFXREG_TCON_SPG11POSON_SPGPSON_TOGGLE11_FMASK 0x1U
#define GFXREG_TCON_SPG11POSON_SETM_SPGPSON_TOGGLE11(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG11POSON_SET_SPGPSON_TOGGLE11(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11POSON_GET_SPGPSON_TOGGLE11(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_TOGGLE11(s,val) ( (s)->spg11poson = ((s)->spg11poson & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSON_TOGGLE11(s,val)  ( (s)->spg11poson = (((s)->spg11poson & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_TOGGLE11(s) ((((s)->spg11poson) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG11POSON_SPGPSON_TOGGLE11_RESET 0U

/* SPGPSON_X11: X scan position  */
#define GFXREG_TCON_SPG11POSON_SPGPSON_X11_FSHIFT 16U
#define GFXREG_TCON_SPG11POSON_SPGPSON_X11_FMASK 0x7fffU
#define GFXREG_TCON_SPG11POSON_SETM_SPGPSON_X11(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG11POSON_SET_SPGPSON_X11(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11POSON_GET_SPGPSON_X11(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_X11(s,val) ( (s)->spg11poson = ((s)->spg11poson & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSON_X11(s,val)  ( (s)->spg11poson = (((s)->spg11poson & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_X11(s) ((((s)->spg11poson) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG11POSON_SPGPSON_X11_RESET 0U

/* SPGPSON_FIELD11: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG11POSON_SPGPSON_FIELD11_FSHIFT 15U
#define GFXREG_TCON_SPG11POSON_SPGPSON_FIELD11_FMASK 0x1U
#define GFXREG_TCON_SPG11POSON_SETM_SPGPSON_FIELD11(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG11POSON_SET_SPGPSON_FIELD11(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11POSON_GET_SPGPSON_FIELD11(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSON_FIELD11(s,val) ( (s)->spg11poson = ((s)->spg11poson & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSON_FIELD11(s,val)  ( (s)->spg11poson = (((s)->spg11poson & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_FIELD11(s) ((((s)->spg11poson) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG11POSON_SPGPSON_FIELD11_RESET 0U

/* SPGPSON_Y11: Y scan position  */
#define GFXREG_TCON_SPG11POSON_SPGPSON_Y11_FSHIFT 0U
#define GFXREG_TCON_SPG11POSON_SPGPSON_Y11_FMASK 0x7fffU
#define GFXREG_TCON_SPG11POSON_SETM_SPGPSON_Y11(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG11POSON_SET_SPGPSON_Y11(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11POSON_GET_SPGPSON_Y11(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSON_Y11(s,val) ( (s)->spg11poson = ((s)->spg11poson & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSON_Y11(s,val)  ( (s)->spg11poson = (((s)->spg11poson & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSON_Y11(s) ((((s)->spg11poson) ) & 0x7fffUL)
#define GFXREG_TCON_SPG11POSON_SPGPSON_Y11_RESET 0U

/* SPG11MASKON: The Sequencer Pulse Generator 11 Mask Enable register is used to mask the enable of SPG 11 */
#define GFXREG_TCON_SPG11MASKON 0x000004fcU
/* SPGMKON11: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG11MASKON_SPGMKON11_FSHIFT 0U
#define GFXREG_TCON_SPG11MASKON_SPGMKON11_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG11MASKON_SETM_SPGMKON11(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG11MASKON_SET_SPGMKON11(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11MASKON_GET_SPGMKON11(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKON11(s,val) ( (s)->spg11maskon = ((s)->spg11maskon & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKON11(s,val)  ( (s)->spg11maskon = (((s)->spg11maskon & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKON11(s) ((((s)->spg11maskon) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG11MASKON_SPGMKON11_RESET 0U

/* SPG11POSOFF: Sync pulse generator 11, 'Switch off' position */
#define GFXREG_TCON_SPG11POSOFF 0x00000500U
/* SPGPSOFF_TOGGLE11: toggle enable  0b=disable, 1b=enable */
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_TOGGLE11_FSHIFT 31U
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_TOGGLE11_FMASK 0x1U
#define GFXREG_TCON_SPG11POSOFF_SETM_SPGPSOFF_TOGGLE11(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_TCON_SPG11POSOFF_SET_SPGPSOFF_TOGGLE11(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11POSOFF_GET_SPGPSOFF_TOGGLE11(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_TOGGLE11(s,val) ( (s)->spg11posoff = ((s)->spg11posoff & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_TOGGLE11(s,val)  ( (s)->spg11posoff = (((s)->spg11posoff & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_TOGGLE11(s) ((((s)->spg11posoff) >> 31U) & 0x1UL)
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_TOGGLE11_RESET 0U

/* SPGPSOFF_X11: X scan position  */
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_X11_FSHIFT 16U
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_X11_FMASK 0x7fffU
#define GFXREG_TCON_SPG11POSOFF_SETM_SPGPSOFF_X11(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_TCON_SPG11POSOFF_SET_SPGPSOFF_X11(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11POSOFF_GET_SPGPSOFF_X11(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_X11(s,val) ( (s)->spg11posoff = ((s)->spg11posoff & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_X11(s,val)  ( (s)->spg11posoff = (((s)->spg11posoff & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_X11(s) ((((s)->spg11posoff) >> 16U) & 0x7fffUL)
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_X11_RESET 0U

/* SPGPSOFF_FIELD11: Field  0b=odd field, 1b=even field */
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_FIELD11_FSHIFT 15U
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_FIELD11_FMASK 0x1U
#define GFXREG_TCON_SPG11POSOFF_SETM_SPGPSOFF_FIELD11(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_TCON_SPG11POSOFF_SET_SPGPSOFF_FIELD11(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11POSOFF_GET_SPGPSOFF_FIELD11(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_TCON_SETM_SPGPSOFF_FIELD11(s,val) ( (s)->spg11posoff = ((s)->spg11posoff & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_TCON_SET_SPGPSOFF_FIELD11(s,val)  ( (s)->spg11posoff = (((s)->spg11posoff & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_FIELD11(s) ((((s)->spg11posoff) >> 15U) & 0x1UL)
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_FIELD11_RESET 0U

/* SPGPSOFF_Y11: Y scan position  */
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_Y11_FSHIFT 0U
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_Y11_FMASK 0x7fffU
#define GFXREG_TCON_SPG11POSOFF_SETM_SPGPSOFF_Y11(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_TCON_SPG11POSOFF_SET_SPGPSOFF_Y11(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11POSOFF_GET_SPGPSOFF_Y11(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_TCON_SETM_SPGPSOFF_Y11(s,val) ( (s)->spg11posoff = ((s)->spg11posoff & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_TCON_SET_SPGPSOFF_Y11(s,val)  ( (s)->spg11posoff = (((s)->spg11posoff & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGPSOFF_Y11(s) ((((s)->spg11posoff) ) & 0x7fffUL)
#define GFXREG_TCON_SPG11POSOFF_SPGPSOFF_Y11_RESET 0U

/* SPG11MASKOFF: The Sequencer Pulse Generator 11 Mask Enable register is used to mask the disable of SPG 11 */
#define GFXREG_TCON_SPG11MASKOFF 0x00000504U
/* SPGMKOFF11: Mask bits  0b=Include this bit in position matching, 1b= Do not include this bit in position matching */
#define GFXREG_TCON_SPG11MASKOFF_SPGMKOFF11_FSHIFT 0U
#define GFXREG_TCON_SPG11MASKOFF_SPGMKOFF11_FMASK 0x7fffffffU
#define GFXREG_TCON_SPG11MASKOFF_SETM_SPGMKOFF11(val) (((CYGFX_U32)(val) & 0x7fffffffUL) )
#define GFXREG_TCON_SPG11MASKOFF_SET_SPGMKOFF11(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SPG11MASKOFF_GET_SPGMKOFF11(val) (((CYGFX_U32)(val) ) & 0x7fffffffUL)
#define GFXREG_TCON_SETM_SPGMKOFF11(s,val) ( (s)->spg11maskoff = ((s)->spg11maskoff & ~0x7fffffffUL) | (((CYGFX_U32)(val) ) & 0x7fffffffUL) )
#define GFXREG_TCON_SET_SPGMKOFF11(s,val)  ( (s)->spg11maskoff = (((s)->spg11maskoff & ~0x7fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SPGMKOFF11(s) ((((s)->spg11maskoff) ) & 0x7fffffffUL)
#define GFXREG_TCON_SPG11MASKOFF_SPGMKOFF11_RESET 0U

/* SMX0SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX0SIGS 0x00000508U
/* SMX0SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG0 .. SPG5  */
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX0SIGS_SETM_SMX0SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX0SIGS_SET_SMX0SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX0SIGS_GET_SMX0SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX0SIGS_S4(s,val) ( (s)->smx0sigs = ((s)->smx0sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX0SIGS_S4(s,val)  ( (s)->smx0sigs = (((s)->smx0sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX0SIGS_S4(s) ((((s)->smx0sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S4_RESET 0U

/* SMX0SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX0SIGS_SETM_SMX0SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX0SIGS_SET_SMX0SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX0SIGS_GET_SMX0SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX0SIGS_S3(s,val) ( (s)->smx0sigs = ((s)->smx0sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX0SIGS_S3(s,val)  ( (s)->smx0sigs = (((s)->smx0sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX0SIGS_S3(s) ((((s)->smx0sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S3_RESET 0U

/* SMX0SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX0SIGS_SETM_SMX0SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX0SIGS_SET_SMX0SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX0SIGS_GET_SMX0SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX0SIGS_S2(s,val) ( (s)->smx0sigs = ((s)->smx0sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX0SIGS_S2(s,val)  ( (s)->smx0sigs = (((s)->smx0sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX0SIGS_S2(s) ((((s)->smx0sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S2_RESET 0U

/* SMX0SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX0SIGS_SETM_SMX0SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX0SIGS_SET_SMX0SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX0SIGS_GET_SMX0SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX0SIGS_S1(s,val) ( (s)->smx0sigs = ((s)->smx0sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX0SIGS_S1(s,val)  ( (s)->smx0sigs = (((s)->smx0sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX0SIGS_S1(s) ((((s)->smx0sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S1_RESET 0U

/* SMX0SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX0SIGS_SETM_SMX0SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX0SIGS_SET_SMX0SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX0SIGS_GET_SMX0SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX0SIGS_S0(s,val) ( (s)->smx0sigs = ((s)->smx0sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX0SIGS_S0(s,val)  ( (s)->smx0sigs = (((s)->smx0sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX0SIGS_S0(s) ((((s)->smx0sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX0SIGS_SMX0SIGS_S0_RESET 2U

/* SMX0FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX0FCTTABLE 0x0000050cU
/* SMXFCT0: Sync mixer 0 function table */
#define GFXREG_TCON_SMX0FCTTABLE_SMXFCT0_FSHIFT 0U
#define GFXREG_TCON_SMX0FCTTABLE_SMXFCT0_FMASK 0xffffffffU
#define GFXREG_TCON_SMX0FCTTABLE_SETM_SMXFCT0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX0FCTTABLE_SET_SMXFCT0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX0FCTTABLE_GET_SMXFCT0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT0(s,val) ( (s)->smx0fcttable = ((s)->smx0fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT0(s,val)  ( (s)->smx0fcttable = (((s)->smx0fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT0(s) ((((s)->smx0fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX0FCTTABLE_SMXFCT0_RESET 1U

/* SMX1SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX1SIGS 0x00000510U
/* SMX1SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG0 .. SPG5  */
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX1SIGS_SETM_SMX1SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX1SIGS_SET_SMX1SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX1SIGS_GET_SMX1SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX1SIGS_S4(s,val) ( (s)->smx1sigs = ((s)->smx1sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX1SIGS_S4(s,val)  ( (s)->smx1sigs = (((s)->smx1sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX1SIGS_S4(s) ((((s)->smx1sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S4_RESET 0U

/* SMX1SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX1SIGS_SETM_SMX1SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX1SIGS_SET_SMX1SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX1SIGS_GET_SMX1SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX1SIGS_S3(s,val) ( (s)->smx1sigs = ((s)->smx1sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX1SIGS_S3(s,val)  ( (s)->smx1sigs = (((s)->smx1sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX1SIGS_S3(s) ((((s)->smx1sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S3_RESET 0U

/* SMX1SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX1SIGS_SETM_SMX1SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX1SIGS_SET_SMX1SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX1SIGS_GET_SMX1SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX1SIGS_S2(s,val) ( (s)->smx1sigs = ((s)->smx1sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX1SIGS_S2(s,val)  ( (s)->smx1sigs = (((s)->smx1sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX1SIGS_S2(s) ((((s)->smx1sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S2_RESET 0U

/* SMX1SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX1SIGS_SETM_SMX1SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX1SIGS_SET_SMX1SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX1SIGS_GET_SMX1SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX1SIGS_S1(s,val) ( (s)->smx1sigs = ((s)->smx1sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX1SIGS_S1(s,val)  ( (s)->smx1sigs = (((s)->smx1sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX1SIGS_S1(s) ((((s)->smx1sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S1_RESET 0U

/* SMX1SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX1SIGS_SETM_SMX1SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX1SIGS_SET_SMX1SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX1SIGS_GET_SMX1SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX1SIGS_S0(s,val) ( (s)->smx1sigs = ((s)->smx1sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX1SIGS_S0(s,val)  ( (s)->smx1sigs = (((s)->smx1sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX1SIGS_S0(s) ((((s)->smx1sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX1SIGS_SMX1SIGS_S0_RESET 3U

/* SMX1FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX1FCTTABLE 0x00000514U
/* SMXFCT1: Sync mixer 1 function table */
#define GFXREG_TCON_SMX1FCTTABLE_SMXFCT1_FSHIFT 0U
#define GFXREG_TCON_SMX1FCTTABLE_SMXFCT1_FMASK 0xffffffffU
#define GFXREG_TCON_SMX1FCTTABLE_SETM_SMXFCT1(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX1FCTTABLE_SET_SMXFCT1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX1FCTTABLE_GET_SMXFCT1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT1(s,val) ( (s)->smx1fcttable = ((s)->smx1fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT1(s,val)  ( (s)->smx1fcttable = (((s)->smx1fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT1(s) ((((s)->smx1fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX1FCTTABLE_SMXFCT1_RESET 1U

/* SMX2SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX2SIGS 0x00000518U
/* SMX2SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG0 .. SPG5  */
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX2SIGS_SETM_SMX2SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX2SIGS_SET_SMX2SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX2SIGS_GET_SMX2SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX2SIGS_S4(s,val) ( (s)->smx2sigs = ((s)->smx2sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX2SIGS_S4(s,val)  ( (s)->smx2sigs = (((s)->smx2sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX2SIGS_S4(s) ((((s)->smx2sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S4_RESET 0U

/* SMX2SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX2SIGS_SETM_SMX2SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX2SIGS_SET_SMX2SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX2SIGS_GET_SMX2SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX2SIGS_S3(s,val) ( (s)->smx2sigs = ((s)->smx2sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX2SIGS_S3(s,val)  ( (s)->smx2sigs = (((s)->smx2sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX2SIGS_S3(s) ((((s)->smx2sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S3_RESET 0U

/* SMX2SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX2SIGS_SETM_SMX2SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX2SIGS_SET_SMX2SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX2SIGS_GET_SMX2SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX2SIGS_S2(s,val) ( (s)->smx2sigs = ((s)->smx2sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX2SIGS_S2(s,val)  ( (s)->smx2sigs = (((s)->smx2sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX2SIGS_S2(s) ((((s)->smx2sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S2_RESET 0U

/* SMX2SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX2SIGS_SETM_SMX2SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX2SIGS_SET_SMX2SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX2SIGS_GET_SMX2SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX2SIGS_S1(s,val) ( (s)->smx2sigs = ((s)->smx2sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX2SIGS_S1(s,val)  ( (s)->smx2sigs = (((s)->smx2sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX2SIGS_S1(s) ((((s)->smx2sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S1_RESET 5U

/* SMX2SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX2SIGS_SETM_SMX2SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX2SIGS_SET_SMX2SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX2SIGS_GET_SMX2SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX2SIGS_S0(s,val) ( (s)->smx2sigs = ((s)->smx2sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX2SIGS_S0(s,val)  ( (s)->smx2sigs = (((s)->smx2sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX2SIGS_S0(s) ((((s)->smx2sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX2SIGS_SMX2SIGS_S0_RESET 4U

/* SMX2FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s**3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX2FCTTABLE 0x0000051cU
/* SMXFCT2: Sync mixer 2 function table */
#define GFXREG_TCON_SMX2FCTTABLE_SMXFCT2_FSHIFT 0U
#define GFXREG_TCON_SMX2FCTTABLE_SMXFCT2_FMASK 0xffffffffU
#define GFXREG_TCON_SMX2FCTTABLE_SETM_SMXFCT2(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX2FCTTABLE_SET_SMXFCT2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX2FCTTABLE_GET_SMXFCT2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT2(s,val) ( (s)->smx2fcttable = ((s)->smx2fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT2(s,val)  ( (s)->smx2fcttable = (((s)->smx2fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT2(s) ((((s)->smx2fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX2FCTTABLE_SMXFCT2_RESET 8U

/* SMX3SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX3SIGS 0x00000520U
/* SMX3SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG0 .. SPG5  */
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX3SIGS_SETM_SMX3SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX3SIGS_SET_SMX3SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX3SIGS_GET_SMX3SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX3SIGS_S4(s,val) ( (s)->smx3sigs = ((s)->smx3sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX3SIGS_S4(s,val)  ( (s)->smx3sigs = (((s)->smx3sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX3SIGS_S4(s) ((((s)->smx3sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S4_RESET 0U

/* SMX3SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX3SIGS_SETM_SMX3SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX3SIGS_SET_SMX3SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX3SIGS_GET_SMX3SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX3SIGS_S3(s,val) ( (s)->smx3sigs = ((s)->smx3sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX3SIGS_S3(s,val)  ( (s)->smx3sigs = (((s)->smx3sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX3SIGS_S3(s) ((((s)->smx3sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S3_RESET 0U

/* SMX3SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX3SIGS_SETM_SMX3SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX3SIGS_SET_SMX3SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX3SIGS_GET_SMX3SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX3SIGS_S2(s,val) ( (s)->smx3sigs = ((s)->smx3sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX3SIGS_S2(s,val)  ( (s)->smx3sigs = (((s)->smx3sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX3SIGS_S2(s) ((((s)->smx3sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S2_RESET 0U

/* SMX3SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX3SIGS_SETM_SMX3SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX3SIGS_SET_SMX3SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX3SIGS_GET_SMX3SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX3SIGS_S1(s,val) ( (s)->smx3sigs = ((s)->smx3sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX3SIGS_S1(s,val)  ( (s)->smx3sigs = (((s)->smx3sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX3SIGS_S1(s) ((((s)->smx3sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S1_RESET 0U

/* SMX3SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX3SIGS_SETM_SMX3SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX3SIGS_SET_SMX3SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX3SIGS_GET_SMX3SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX3SIGS_S0(s,val) ( (s)->smx3sigs = ((s)->smx3sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX3SIGS_S0(s,val)  ( (s)->smx3sigs = (((s)->smx3sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX3SIGS_S0(s) ((((s)->smx3sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX3SIGS_SMX3SIGS_S0_RESET 0U

/* SMX3FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX3FCTTABLE 0x00000524U
/* SMXFCT3: Sync mixer 3 function table */
#define GFXREG_TCON_SMX3FCTTABLE_SMXFCT3_FSHIFT 0U
#define GFXREG_TCON_SMX3FCTTABLE_SMXFCT3_FMASK 0xffffffffU
#define GFXREG_TCON_SMX3FCTTABLE_SETM_SMXFCT3(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX3FCTTABLE_SET_SMXFCT3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX3FCTTABLE_GET_SMXFCT3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT3(s,val) ( (s)->smx3fcttable = ((s)->smx3fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT3(s,val)  ( (s)->smx3fcttable = (((s)->smx3fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT3(s) ((((s)->smx3fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX3FCTTABLE_SMXFCT3_RESET 0U

/* SMX4SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX4SIGS 0x00000528U
/* SMX4SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG0 .. SPG5  */
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX4SIGS_SETM_SMX4SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX4SIGS_SET_SMX4SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX4SIGS_GET_SMX4SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX4SIGS_S4(s,val) ( (s)->smx4sigs = ((s)->smx4sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX4SIGS_S4(s,val)  ( (s)->smx4sigs = (((s)->smx4sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX4SIGS_S4(s) ((((s)->smx4sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S4_RESET 0U

/* SMX4SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX4SIGS_SETM_SMX4SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX4SIGS_SET_SMX4SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX4SIGS_GET_SMX4SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX4SIGS_S3(s,val) ( (s)->smx4sigs = ((s)->smx4sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX4SIGS_S3(s,val)  ( (s)->smx4sigs = (((s)->smx4sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX4SIGS_S3(s) ((((s)->smx4sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S3_RESET 0U

/* SMX4SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX4SIGS_SETM_SMX4SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX4SIGS_SET_SMX4SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX4SIGS_GET_SMX4SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX4SIGS_S2(s,val) ( (s)->smx4sigs = ((s)->smx4sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX4SIGS_S2(s,val)  ( (s)->smx4sigs = (((s)->smx4sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX4SIGS_S2(s) ((((s)->smx4sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S2_RESET 0U

/* SMX4SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX4SIGS_SETM_SMX4SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX4SIGS_SET_SMX4SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX4SIGS_GET_SMX4SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX4SIGS_S1(s,val) ( (s)->smx4sigs = ((s)->smx4sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX4SIGS_S1(s,val)  ( (s)->smx4sigs = (((s)->smx4sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX4SIGS_S1(s) ((((s)->smx4sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S1_RESET 0U

/* SMX4SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX4SIGS_SETM_SMX4SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX4SIGS_SET_SMX4SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX4SIGS_GET_SMX4SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX4SIGS_S0(s,val) ( (s)->smx4sigs = ((s)->smx4sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX4SIGS_S0(s,val)  ( (s)->smx4sigs = (((s)->smx4sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX4SIGS_S0(s) ((((s)->smx4sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX4SIGS_SMX4SIGS_S0_RESET 0U

/* SMX4FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX4FCTTABLE 0x0000052cU
/* SMXFCT4: Sync mixer 4 function table */
#define GFXREG_TCON_SMX4FCTTABLE_SMXFCT4_FSHIFT 0U
#define GFXREG_TCON_SMX4FCTTABLE_SMXFCT4_FMASK 0xffffffffU
#define GFXREG_TCON_SMX4FCTTABLE_SETM_SMXFCT4(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX4FCTTABLE_SET_SMXFCT4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX4FCTTABLE_GET_SMXFCT4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT4(s,val) ( (s)->smx4fcttable = ((s)->smx4fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT4(s,val)  ( (s)->smx4fcttable = (((s)->smx4fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT4(s) ((((s)->smx4fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX4FCTTABLE_SMXFCT4_RESET 0U

/* SMX5SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX5SIGS 0x00000530U
/* SMX5SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG0 .. SPG5  */
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX5SIGS_SETM_SMX5SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX5SIGS_SET_SMX5SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX5SIGS_GET_SMX5SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX5SIGS_S4(s,val) ( (s)->smx5sigs = ((s)->smx5sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX5SIGS_S4(s,val)  ( (s)->smx5sigs = (((s)->smx5sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX5SIGS_S4(s) ((((s)->smx5sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S4_RESET 0U

/* SMX5SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX5SIGS_SETM_SMX5SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX5SIGS_SET_SMX5SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX5SIGS_GET_SMX5SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX5SIGS_S3(s,val) ( (s)->smx5sigs = ((s)->smx5sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX5SIGS_S3(s,val)  ( (s)->smx5sigs = (((s)->smx5sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX5SIGS_S3(s) ((((s)->smx5sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S3_RESET 0U

/* SMX5SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX5SIGS_SETM_SMX5SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX5SIGS_SET_SMX5SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX5SIGS_GET_SMX5SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX5SIGS_S2(s,val) ( (s)->smx5sigs = ((s)->smx5sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX5SIGS_S2(s,val)  ( (s)->smx5sigs = (((s)->smx5sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX5SIGS_S2(s) ((((s)->smx5sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S2_RESET 0U

/* SMX5SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX5SIGS_SETM_SMX5SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX5SIGS_SET_SMX5SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX5SIGS_GET_SMX5SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX5SIGS_S1(s,val) ( (s)->smx5sigs = ((s)->smx5sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX5SIGS_S1(s,val)  ( (s)->smx5sigs = (((s)->smx5sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX5SIGS_S1(s) ((((s)->smx5sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S1_RESET 0U

/* SMX5SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG0 .. SPG5  */
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX5SIGS_SETM_SMX5SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX5SIGS_SET_SMX5SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX5SIGS_GET_SMX5SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX5SIGS_S0(s,val) ( (s)->smx5sigs = ((s)->smx5sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX5SIGS_S0(s,val)  ( (s)->smx5sigs = (((s)->smx5sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX5SIGS_S0(s) ((((s)->smx5sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX5SIGS_SMX5SIGS_S0_RESET 0U

/* SMX5FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX5FCTTABLE 0x00000534U
/* SMXFCT5: Sync mixer 5 function table */
#define GFXREG_TCON_SMX5FCTTABLE_SMXFCT5_FSHIFT 0U
#define GFXREG_TCON_SMX5FCTTABLE_SMXFCT5_FMASK 0xffffffffU
#define GFXREG_TCON_SMX5FCTTABLE_SETM_SMXFCT5(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX5FCTTABLE_SET_SMXFCT5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX5FCTTABLE_GET_SMXFCT5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT5(s,val) ( (s)->smx5fcttable = ((s)->smx5fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT5(s,val)  ( (s)->smx5fcttable = (((s)->smx5fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT5(s) ((((s)->smx5fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX5FCTTABLE_SMXFCT5_RESET 0U

/* SMX6SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX6SIGS 0x00000538U
/* SMX6SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG6 .. SPG11  */
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX6SIGS_SETM_SMX6SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX6SIGS_SET_SMX6SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX6SIGS_GET_SMX6SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX6SIGS_S4(s,val) ( (s)->smx6sigs = ((s)->smx6sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX6SIGS_S4(s,val)  ( (s)->smx6sigs = (((s)->smx6sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX6SIGS_S4(s) ((((s)->smx6sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S4_RESET 0U

/* SMX6SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX6SIGS_SETM_SMX6SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX6SIGS_SET_SMX6SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX6SIGS_GET_SMX6SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX6SIGS_S3(s,val) ( (s)->smx6sigs = ((s)->smx6sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX6SIGS_S3(s,val)  ( (s)->smx6sigs = (((s)->smx6sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX6SIGS_S3(s) ((((s)->smx6sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S3_RESET 0U

/* SMX6SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX6SIGS_SETM_SMX6SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX6SIGS_SET_SMX6SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX6SIGS_GET_SMX6SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX6SIGS_S2(s,val) ( (s)->smx6sigs = ((s)->smx6sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX6SIGS_S2(s,val)  ( (s)->smx6sigs = (((s)->smx6sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX6SIGS_S2(s) ((((s)->smx6sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S2_RESET 0U

/* SMX6SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX6SIGS_SETM_SMX6SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX6SIGS_SET_SMX6SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX6SIGS_GET_SMX6SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX6SIGS_S1(s,val) ( (s)->smx6sigs = ((s)->smx6sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX6SIGS_S1(s,val)  ( (s)->smx6sigs = (((s)->smx6sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX6SIGS_S1(s) ((((s)->smx6sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S1_RESET 0U

/* SMX6SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX6SIGS_SETM_SMX6SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX6SIGS_SET_SMX6SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX6SIGS_GET_SMX6SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX6SIGS_S0(s,val) ( (s)->smx6sigs = ((s)->smx6sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX6SIGS_S0(s,val)  ( (s)->smx6sigs = (((s)->smx6sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX6SIGS_S0(s) ((((s)->smx6sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX6SIGS_SMX6SIGS_S0_RESET 0U

/* SMX6FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX6FCTTABLE 0x0000053cU
/* SMXFCT6: Sync mixer 6 function table */
#define GFXREG_TCON_SMX6FCTTABLE_SMXFCT6_FSHIFT 0U
#define GFXREG_TCON_SMX6FCTTABLE_SMXFCT6_FMASK 0xffffffffU
#define GFXREG_TCON_SMX6FCTTABLE_SETM_SMXFCT6(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX6FCTTABLE_SET_SMXFCT6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX6FCTTABLE_GET_SMXFCT6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT6(s,val) ( (s)->smx6fcttable = ((s)->smx6fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT6(s,val)  ( (s)->smx6fcttable = (((s)->smx6fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT6(s) ((((s)->smx6fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX6FCTTABLE_SMXFCT6_RESET 0U

/* SMX7SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX7SIGS 0x00000540U
/* SMX7SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG6 .. SPG11  */
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX7SIGS_SETM_SMX7SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX7SIGS_SET_SMX7SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX7SIGS_GET_SMX7SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX7SIGS_S4(s,val) ( (s)->smx7sigs = ((s)->smx7sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX7SIGS_S4(s,val)  ( (s)->smx7sigs = (((s)->smx7sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX7SIGS_S4(s) ((((s)->smx7sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S4_RESET 0U

/* SMX7SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX7SIGS_SETM_SMX7SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX7SIGS_SET_SMX7SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX7SIGS_GET_SMX7SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX7SIGS_S3(s,val) ( (s)->smx7sigs = ((s)->smx7sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX7SIGS_S3(s,val)  ( (s)->smx7sigs = (((s)->smx7sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX7SIGS_S3(s) ((((s)->smx7sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S3_RESET 0U

/* SMX7SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX7SIGS_SETM_SMX7SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX7SIGS_SET_SMX7SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX7SIGS_GET_SMX7SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX7SIGS_S2(s,val) ( (s)->smx7sigs = ((s)->smx7sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX7SIGS_S2(s,val)  ( (s)->smx7sigs = (((s)->smx7sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX7SIGS_S2(s) ((((s)->smx7sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S2_RESET 0U

/* SMX7SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX7SIGS_SETM_SMX7SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX7SIGS_SET_SMX7SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX7SIGS_GET_SMX7SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX7SIGS_S1(s,val) ( (s)->smx7sigs = ((s)->smx7sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX7SIGS_S1(s,val)  ( (s)->smx7sigs = (((s)->smx7sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX7SIGS_S1(s) ((((s)->smx7sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S1_RESET 0U

/* SMX7SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX7SIGS_SETM_SMX7SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX7SIGS_SET_SMX7SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX7SIGS_GET_SMX7SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX7SIGS_S0(s,val) ( (s)->smx7sigs = ((s)->smx7sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX7SIGS_S0(s,val)  ( (s)->smx7sigs = (((s)->smx7sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX7SIGS_S0(s) ((((s)->smx7sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX7SIGS_SMX7SIGS_S0_RESET 0U

/* SMX7FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX7FCTTABLE 0x00000544U
/* SMXFCT7: Sync mixer 7 function table */
#define GFXREG_TCON_SMX7FCTTABLE_SMXFCT7_FSHIFT 0U
#define GFXREG_TCON_SMX7FCTTABLE_SMXFCT7_FMASK 0xffffffffU
#define GFXREG_TCON_SMX7FCTTABLE_SETM_SMXFCT7(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX7FCTTABLE_SET_SMXFCT7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX7FCTTABLE_GET_SMXFCT7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT7(s,val) ( (s)->smx7fcttable = ((s)->smx7fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT7(s,val)  ( (s)->smx7fcttable = (((s)->smx7fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT7(s) ((((s)->smx7fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX7FCTTABLE_SMXFCT7_RESET 0U

/* SMX8SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX8SIGS 0x00000548U
/* SMX8SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG6 .. SPG11  */
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX8SIGS_SETM_SMX8SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX8SIGS_SET_SMX8SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX8SIGS_GET_SMX8SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX8SIGS_S4(s,val) ( (s)->smx8sigs = ((s)->smx8sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX8SIGS_S4(s,val)  ( (s)->smx8sigs = (((s)->smx8sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX8SIGS_S4(s) ((((s)->smx8sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S4_RESET 0U

/* SMX8SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX8SIGS_SETM_SMX8SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX8SIGS_SET_SMX8SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX8SIGS_GET_SMX8SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX8SIGS_S3(s,val) ( (s)->smx8sigs = ((s)->smx8sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX8SIGS_S3(s,val)  ( (s)->smx8sigs = (((s)->smx8sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX8SIGS_S3(s) ((((s)->smx8sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S3_RESET 0U

/* SMX8SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX8SIGS_SETM_SMX8SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX8SIGS_SET_SMX8SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX8SIGS_GET_SMX8SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX8SIGS_S2(s,val) ( (s)->smx8sigs = ((s)->smx8sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX8SIGS_S2(s,val)  ( (s)->smx8sigs = (((s)->smx8sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX8SIGS_S2(s) ((((s)->smx8sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S2_RESET 0U

/* SMX8SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX8SIGS_SETM_SMX8SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX8SIGS_SET_SMX8SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX8SIGS_GET_SMX8SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX8SIGS_S1(s,val) ( (s)->smx8sigs = ((s)->smx8sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX8SIGS_S1(s,val)  ( (s)->smx8sigs = (((s)->smx8sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX8SIGS_S1(s) ((((s)->smx8sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S1_RESET 0U

/* SMX8SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX8SIGS_SETM_SMX8SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX8SIGS_SET_SMX8SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX8SIGS_GET_SMX8SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX8SIGS_S0(s,val) ( (s)->smx8sigs = ((s)->smx8sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX8SIGS_S0(s,val)  ( (s)->smx8sigs = (((s)->smx8sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX8SIGS_S0(s) ((((s)->smx8sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX8SIGS_SMX8SIGS_S0_RESET 0U

/* SMX8FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX8FCTTABLE 0x0000054cU
/* SMXFCT8: Sync mixer 8 function table */
#define GFXREG_TCON_SMX8FCTTABLE_SMXFCT8_FSHIFT 0U
#define GFXREG_TCON_SMX8FCTTABLE_SMXFCT8_FMASK 0xffffffffU
#define GFXREG_TCON_SMX8FCTTABLE_SETM_SMXFCT8(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX8FCTTABLE_SET_SMXFCT8(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX8FCTTABLE_GET_SMXFCT8(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT8(s,val) ( (s)->smx8fcttable = ((s)->smx8fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT8(s,val)  ( (s)->smx8fcttable = (((s)->smx8fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT8(s) ((((s)->smx8fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX8FCTTABLE_SMXFCT8_RESET 0U

/* SMX9SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX9SIGS 0x00000550U
/* SMX9SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG6 .. SPG11  */
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX9SIGS_SETM_SMX9SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX9SIGS_SET_SMX9SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX9SIGS_GET_SMX9SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX9SIGS_S4(s,val) ( (s)->smx9sigs = ((s)->smx9sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX9SIGS_S4(s,val)  ( (s)->smx9sigs = (((s)->smx9sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX9SIGS_S4(s) ((((s)->smx9sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S4_RESET 0U

/* SMX9SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX9SIGS_SETM_SMX9SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX9SIGS_SET_SMX9SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX9SIGS_GET_SMX9SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX9SIGS_S3(s,val) ( (s)->smx9sigs = ((s)->smx9sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX9SIGS_S3(s,val)  ( (s)->smx9sigs = (((s)->smx9sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX9SIGS_S3(s) ((((s)->smx9sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S3_RESET 0U

/* SMX9SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX9SIGS_SETM_SMX9SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX9SIGS_SET_SMX9SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX9SIGS_GET_SMX9SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX9SIGS_S2(s,val) ( (s)->smx9sigs = ((s)->smx9sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX9SIGS_S2(s,val)  ( (s)->smx9sigs = (((s)->smx9sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX9SIGS_S2(s) ((((s)->smx9sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S2_RESET 0U

/* SMX9SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX9SIGS_SETM_SMX9SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX9SIGS_SET_SMX9SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX9SIGS_GET_SMX9SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX9SIGS_S1(s,val) ( (s)->smx9sigs = ((s)->smx9sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX9SIGS_S1(s,val)  ( (s)->smx9sigs = (((s)->smx9sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX9SIGS_S1(s) ((((s)->smx9sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S1_RESET 0U

/* SMX9SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX9SIGS_SETM_SMX9SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX9SIGS_SET_SMX9SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX9SIGS_GET_SMX9SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX9SIGS_S0(s,val) ( (s)->smx9sigs = ((s)->smx9sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX9SIGS_S0(s,val)  ( (s)->smx9sigs = (((s)->smx9sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX9SIGS_S0(s) ((((s)->smx9sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX9SIGS_SMX9SIGS_S0_RESET 0U

/* SMX9FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX9FCTTABLE 0x00000554U
/* SMXFCT9: Sync mixer 9 function table */
#define GFXREG_TCON_SMX9FCTTABLE_SMXFCT9_FSHIFT 0U
#define GFXREG_TCON_SMX9FCTTABLE_SMXFCT9_FMASK 0xffffffffU
#define GFXREG_TCON_SMX9FCTTABLE_SETM_SMXFCT9(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX9FCTTABLE_SET_SMXFCT9(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX9FCTTABLE_GET_SMXFCT9(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT9(s,val) ( (s)->smx9fcttable = ((s)->smx9fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT9(s,val)  ( (s)->smx9fcttable = (((s)->smx9fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT9(s) ((((s)->smx9fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX9FCTTABLE_SMXFCT9_RESET 0U

/* SMX10SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX10SIGS 0x00000558U
/* SMX10SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG6 .. SPG11  */
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX10SIGS_SETM_SMX10SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX10SIGS_SET_SMX10SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX10SIGS_GET_SMX10SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX10SIGS_S4(s,val) ( (s)->smx10sigs = ((s)->smx10sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX10SIGS_S4(s,val)  ( (s)->smx10sigs = (((s)->smx10sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX10SIGS_S4(s) ((((s)->smx10sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S4_RESET 0U

/* SMX10SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX10SIGS_SETM_SMX10SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX10SIGS_SET_SMX10SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX10SIGS_GET_SMX10SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX10SIGS_S3(s,val) ( (s)->smx10sigs = ((s)->smx10sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX10SIGS_S3(s,val)  ( (s)->smx10sigs = (((s)->smx10sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX10SIGS_S3(s) ((((s)->smx10sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S3_RESET 0U

/* SMX10SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX10SIGS_SETM_SMX10SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX10SIGS_SET_SMX10SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX10SIGS_GET_SMX10SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX10SIGS_S2(s,val) ( (s)->smx10sigs = ((s)->smx10sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX10SIGS_S2(s,val)  ( (s)->smx10sigs = (((s)->smx10sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX10SIGS_S2(s) ((((s)->smx10sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S2_RESET 0U

/* SMX10SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX10SIGS_SETM_SMX10SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX10SIGS_SET_SMX10SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX10SIGS_GET_SMX10SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX10SIGS_S1(s,val) ( (s)->smx10sigs = ((s)->smx10sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX10SIGS_S1(s,val)  ( (s)->smx10sigs = (((s)->smx10sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX10SIGS_S1(s) ((((s)->smx10sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S1_RESET 0U

/* SMX10SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX10SIGS_SETM_SMX10SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX10SIGS_SET_SMX10SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX10SIGS_GET_SMX10SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX10SIGS_S0(s,val) ( (s)->smx10sigs = ((s)->smx10sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX10SIGS_S0(s,val)  ( (s)->smx10sigs = (((s)->smx10sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX10SIGS_S0(s) ((((s)->smx10sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX10SIGS_SMX10SIGS_S0_RESET 0U

/* SMX10FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX10FCTTABLE 0x0000055cU
/* SMXFCT10: Sync mixer 10 function table */
#define GFXREG_TCON_SMX10FCTTABLE_SMXFCT10_FSHIFT 0U
#define GFXREG_TCON_SMX10FCTTABLE_SMXFCT10_FMASK 0xffffffffU
#define GFXREG_TCON_SMX10FCTTABLE_SETM_SMXFCT10(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX10FCTTABLE_SET_SMXFCT10(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX10FCTTABLE_GET_SMXFCT10(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT10(s,val) ( (s)->smx10fcttable = ((s)->smx10fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT10(s,val)  ( (s)->smx10fcttable = (((s)->smx10fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT10(s) ((((s)->smx10fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX10FCTTABLE_SMXFCT10_RESET 0U

/* SMX11SIGS: Selection of input signals of sync mixer */
#define GFXREG_TCON_SMX11SIGS 0x00000560U
/* SMX11SIGS_S4: select 4 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator SPG6 .. SPG11  */
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S4_FSHIFT 12U
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S4_FMASK 0x7U
#define GFXREG_TCON_SMX11SIGS_SETM_SMX11SIGS_S4(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_TCON_SMX11SIGS_SET_SMX11SIGS_S4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX11SIGS_GET_SMX11SIGS_S4(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX11SIGS_S4(s,val) ( (s)->smx11sigs = ((s)->smx11sigs & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_TCON_SET_SMX11SIGS_S4(s,val)  ( (s)->smx11sigs = (((s)->smx11sigs & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX11SIGS_S4(s) ((((s)->smx11sigs) >> 12U) & 0x7UL)
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S4_RESET 0U

/* SMX11SIGS_S3: select 3 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S3_FSHIFT 9U
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S3_FMASK 0x7U
#define GFXREG_TCON_SMX11SIGS_SETM_SMX11SIGS_S3(val) (((CYGFX_U32)(val) & 0x7UL) << 9U)
#define GFXREG_TCON_SMX11SIGS_SET_SMX11SIGS_S3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX11SIGS_GET_SMX11SIGS_S3(val) (((CYGFX_U32)(val) >> 9U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX11SIGS_S3(s,val) ( (s)->smx11sigs = ((s)->smx11sigs & ~0xe00UL) | (((CYGFX_U32)(val) << 9U) & 0xe00UL) )
#define GFXREG_TCON_SET_SMX11SIGS_S3(s,val)  ( (s)->smx11sigs = (((s)->smx11sigs & ~0xe00UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX11SIGS_S3(s) ((((s)->smx11sigs) >> 9U) & 0x7UL)
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S3_RESET 0U

/* SMX11SIGS_S2: select 2 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S2_FSHIFT 6U
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S2_FMASK 0x7U
#define GFXREG_TCON_SMX11SIGS_SETM_SMX11SIGS_S2(val) (((CYGFX_U32)(val) & 0x7UL) << 6U)
#define GFXREG_TCON_SMX11SIGS_SET_SMX11SIGS_S2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX11SIGS_GET_SMX11SIGS_S2(val) (((CYGFX_U32)(val) >> 6U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX11SIGS_S2(s,val) ( (s)->smx11sigs = ((s)->smx11sigs & ~0x1c0UL) | (((CYGFX_U32)(val) << 6U) & 0x1c0UL) )
#define GFXREG_TCON_SET_SMX11SIGS_S2(s,val)  ( (s)->smx11sigs = (((s)->smx11sigs & ~0x1c0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX11SIGS_S2(s) ((((s)->smx11sigs) >> 6U) & 0x7UL)
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S2_RESET 0U

/* SMX11SIGS_S1: select 1 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S1_FSHIFT 3U
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S1_FMASK 0x7U
#define GFXREG_TCON_SMX11SIGS_SETM_SMX11SIGS_S1(val) (((CYGFX_U32)(val) & 0x7UL) << 3U)
#define GFXREG_TCON_SMX11SIGS_SET_SMX11SIGS_S1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX11SIGS_GET_SMX11SIGS_S1(val) (((CYGFX_U32)(val) >> 3U) & 0x7UL)
#define GFXREG_TCON_SETM_SMX11SIGS_S1(s,val) ( (s)->smx11sigs = ((s)->smx11sigs & ~0x38UL) | (((CYGFX_U32)(val) << 3U) & 0x38UL) )
#define GFXREG_TCON_SET_SMX11SIGS_S1(s,val)  ( (s)->smx11sigs = (((s)->smx11sigs & ~0x38UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX11SIGS_S1(s) ((((s)->smx11sigs) >> 3U) & 0x7UL)
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S1_RESET 0U

/* SMX11SIGS_S0: select 0 000b=constant 0, 001b=sync sequencer output, 010b...111b sync pulse generator  SPG6 .. SPG11  */
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S0_FSHIFT 0U
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S0_FMASK 0x7U
#define GFXREG_TCON_SMX11SIGS_SETM_SMX11SIGS_S0(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_TCON_SMX11SIGS_SET_SMX11SIGS_S0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX11SIGS_GET_SMX11SIGS_S0(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_TCON_SETM_SMX11SIGS_S0(s,val) ( (s)->smx11sigs = ((s)->smx11sigs & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_TCON_SET_SMX11SIGS_S0(s,val)  ( (s)->smx11sigs = (((s)->smx11sigs & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMX11SIGS_S0(s) ((((s)->smx11sigs) ) & 0x7UL)
#define GFXREG_TCON_SMX11SIGS_SMX11SIGS_S0_RESET 0U

/* SMX11FCTTABLE: The sync mixer output is the result of the function table a=s4*2**4+s3*2**3+s2*2**2+s1*2**1+s0*2**0 whereby a is bit number and s result of sync mixer input selection */
#define GFXREG_TCON_SMX11FCTTABLE 0x00000564U
/* SMXFCT11: Sync mixer 11 function table */
#define GFXREG_TCON_SMX11FCTTABLE_SMXFCT11_FSHIFT 0U
#define GFXREG_TCON_SMX11FCTTABLE_SMXFCT11_FMASK 0xffffffffU
#define GFXREG_TCON_SMX11FCTTABLE_SETM_SMXFCT11(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_TCON_SMX11FCTTABLE_SET_SMXFCT11(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_TCON_SMX11FCTTABLE_GET_SMXFCT11(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_TCON_SETM_SMXFCT11(s,val) ( (s)->smx11fcttable = ((s)->smx11fcttable & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_TCON_SET_SMXFCT11(s,val)  ( (s)->smx11fcttable = (((s)->smx11fcttable & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_TCON_GET_SMXFCT11(s) ((((s)->smx11fcttable) ) & 0xffffffffUL)
#define GFXREG_TCON_SMX11FCTTABLE_SMXFCT11_RESET 0U

/* RESET_OVER_UNDERFLOW: reset status overflow and underflow of both dual channel fifos */
#define GFXREG_TCON_RESET_OVER_UNDERFLOW 0x00000568U
/* RESET_STATUS: write a '1' to clear all overflow-Bits and underflow-Bits in Dual_Debug register  */
#define GFXREG_TCON_RESET_OVER_UNDERFLOW_RESET_STATUS_FSHIFT 0U
#define GFXREG_TCON_RESET_OVER_UNDERFLOW_RESET_STATUS_FMASK 0x1U
#define GFXREG_TCON_RESET_OVER_UNDERFLOW_SETM_RESET_STATUS(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_TCON_RESET_OVER_UNDERFLOW_SET_RESET_STATUS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_TCON_SETM_RESET_STATUS(s,val) ( (s)->reset_over_underflow = ((s)->reset_over_underflow & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_TCON_SET_RESET_STATUS(s,val)  ( (s)->reset_over_underflow = (((s)->reset_over_underflow & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_TCON_RESET_OVER_UNDERFLOW_RESET_STATUS_RESET 0U

/* DUAL_DEBUG: Status of fifo during dual channel operation. They are only available in Split Mode  */
#define GFXREG_TCON_DUAL_DEBUG 0x0000056cU
/* LOWER_FIFO_OVERFLOW: There are more input pixels than output pixels in a line of lower fifo (too less horizontal blanking or others ...). Once it is set, it remains active until it's reset on software reset or on Reset_Over_Underflow/reset_status */
#define GFXREG_TCON_DUAL_DEBUG_LOWER_FIFO_OVERFLOW_FSHIFT 0U
#define GFXREG_TCON_DUAL_DEBUG_LOWER_FIFO_OVERFLOW_FMASK 0x1U
#define GFXREG_TCON_DUAL_DEBUG_GET_LOWER_FIFO_OVERFLOW(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_TCON_GET_LOWER_FIFO_OVERFLOW(s) ((((s)->dual_debug) ) & 0x1UL)
#define GFXREG_TCON_DUAL_DEBUG_LOWER_FIFO_OVERFLOW_RESET 0U

/* LOWER_FIFO_UNDERFLOW: There are less input pixels than output pixels in a line of lower fifo (check data_en and split-position  or others ...). Once it is set, it remains active until it's reset on software reset or on Reset_Over_Underflow/reset_status */
#define GFXREG_TCON_DUAL_DEBUG_LOWER_FIFO_UNDERFLOW_FSHIFT 1U
#define GFXREG_TCON_DUAL_DEBUG_LOWER_FIFO_UNDERFLOW_FMASK 0x1U
#define GFXREG_TCON_DUAL_DEBUG_GET_LOWER_FIFO_UNDERFLOW(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_TCON_GET_LOWER_FIFO_UNDERFLOW(s) ((((s)->dual_debug) >> 1U) & 0x1UL)
#define GFXREG_TCON_DUAL_DEBUG_LOWER_FIFO_UNDERFLOW_RESET 0U

/* UPPER_FIFO_OVERFLOW: There are more input pixels than output pixels in a line of upper fifo (too less horizontal blanking or others ...). Once it is set, it remains active until it's reset on software reset or on Reset_Over_Underflow/reset_status */
#define GFXREG_TCON_DUAL_DEBUG_UPPER_FIFO_OVERFLOW_FSHIFT 4U
#define GFXREG_TCON_DUAL_DEBUG_UPPER_FIFO_OVERFLOW_FMASK 0x1U
#define GFXREG_TCON_DUAL_DEBUG_GET_UPPER_FIFO_OVERFLOW(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_TCON_GET_UPPER_FIFO_OVERFLOW(s) ((((s)->dual_debug) >> 4U) & 0x1UL)
#define GFXREG_TCON_DUAL_DEBUG_UPPER_FIFO_OVERFLOW_RESET 0U

/* UPPER_FIFO_UNDERFLOW: There are less input pixels than output pixels in a line of upper fifo (check data_en and split-position  or others ...). Once it is set, it remains active until it's reset on software reset or on Reset_Over_Underflow/reset_status */
#define GFXREG_TCON_DUAL_DEBUG_UPPER_FIFO_UNDERFLOW_FSHIFT 5U
#define GFXREG_TCON_DUAL_DEBUG_UPPER_FIFO_UNDERFLOW_FMASK 0x1U
#define GFXREG_TCON_DUAL_DEBUG_GET_UPPER_FIFO_UNDERFLOW(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_TCON_GET_UPPER_FIFO_UNDERFLOW(s) ((((s)->dual_debug) >> 5U) & 0x1UL)
#define GFXREG_TCON_DUAL_DEBUG_UPPER_FIFO_UNDERFLOW_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_TCON_REGISTER_H */

