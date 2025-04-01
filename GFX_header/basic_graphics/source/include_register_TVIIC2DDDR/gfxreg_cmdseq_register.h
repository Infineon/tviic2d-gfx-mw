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
 * \version     4.00
 * \date        Mon Jul 05 13:05:13 2021
 * \file        gfxreg_cmdseq_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   cmdseq
 *              Source:   cmdseq.component.xml
 *              Template: component_h.tpl
 * \brief      Iris cmdseq register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_CMDSEQ_REGISTER_H
#define GFXREG_CMDSEQ_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* cmdseq registers */
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


/* TASKBUFFERADDRESS0: Task buffer 0 address register */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS0 0x00000000U
/* ADDRESSTB0: Task buffer 0 base address in multiple of 64-bit words. */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS0_ADDRESSTB0_FSHIFT 3U
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS0_ADDRESSTB0_FMASK 0x1fffffffU
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS0_SETM_ADDRESSTB0(val) (((CYGFX_U32)(val) & 0x1fffffffUL) << 3U)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS0_SET_ADDRESSTB0(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS0_GET_ADDRESSTB0(val) (((CYGFX_U32)(val) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_SETM_ADDRESSTB0(s,val) ( (s)->taskbufferaddress0 = ((s)->taskbufferaddress0 & ~0xfffffff8UL) | (((CYGFX_U32)(val) << 3U) & 0xfffffff8UL) )
#define GFXREG_CMDSEQ_SET_ADDRESSTB0(s,val)  ( (s)->taskbufferaddress0 = (((s)->taskbufferaddress0 & ~0xfffffff8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_ADDRESSTB0(s) ((((s)->taskbufferaddress0) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS0_ADDRESSTB0_RESET 0U

/* TASKBUFFERSIZE0: Task buffer 0 size register */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE0 0x00000004U
/* SIZETB0: Task buffer 0 size in multiple of 32-bit words. The maximal size of task buffer equals to 4 * (2^16 - 1) bytes. The minimal size required to start execution is 2, because the minimal value of the stop offset is 1 and it has to be smaller then the task buffer size. */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE0_SIZETB0_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSIZE0_SIZETB0_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSIZE0_SETM_SIZETB0(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSIZE0_SET_SIZETB0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSIZE0_GET_SIZETB0(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_SIZETB0(s,val) ( (s)->taskbuffersize0 = ((s)->taskbuffersize0 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_SIZETB0(s,val)  ( (s)->taskbuffersize0 = (((s)->taskbuffersize0 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_SIZETB0(s) ((((s)->taskbuffersize0) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSIZE0_SIZETB0_RESET 0x0U

/* TASKBUFFERSTOPOFFSET0: Task buffer 0 stop offset register */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET0 0x00000008U
/* STOPOFFSETTB0: Task buffer 0 stop offset in multiple of 32-bit words to determine the last valid scheduling instruction. Only scheduling instructions up to this offset are executed or with other words instruction at the StopOffset-1 is the last instruction which is executed. */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET0_STOPOFFSETTB0_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET0_STOPOFFSETTB0_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET0_SETM_STOPOFFSETTB0(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET0_SET_STOPOFFSETTB0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET0_GET_STOPOFFSETTB0(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_STOPOFFSETTB0(s,val) ( (s)->taskbufferstopoffset0 = ((s)->taskbufferstopoffset0 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_STOPOFFSETTB0(s,val)  ( (s)->taskbufferstopoffset0 = (((s)->taskbufferstopoffset0 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_STOPOFFSETTB0(s) ((((s)->taskbufferstopoffset0) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET0_STOPOFFSETTB0_RESET 0U

/* TASKBUFFERADDRESS1: Task buffer 1 address register */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS1 0x0000000cU
/* ADDRESSTB1: Task buffer 1 base address in multiple of 64-bit words. */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS1_ADDRESSTB1_FSHIFT 3U
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS1_ADDRESSTB1_FMASK 0x1fffffffU
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS1_SETM_ADDRESSTB1(val) (((CYGFX_U32)(val) & 0x1fffffffUL) << 3U)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS1_SET_ADDRESSTB1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS1_GET_ADDRESSTB1(val) (((CYGFX_U32)(val) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_SETM_ADDRESSTB1(s,val) ( (s)->taskbufferaddress1 = ((s)->taskbufferaddress1 & ~0xfffffff8UL) | (((CYGFX_U32)(val) << 3U) & 0xfffffff8UL) )
#define GFXREG_CMDSEQ_SET_ADDRESSTB1(s,val)  ( (s)->taskbufferaddress1 = (((s)->taskbufferaddress1 & ~0xfffffff8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_ADDRESSTB1(s) ((((s)->taskbufferaddress1) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS1_ADDRESSTB1_RESET 0U

/* TASKBUFFERSIZE1: Task buffer 1 size register */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE1 0x00000010U
/* SIZETB1: Task buffer 1 size in multiple of 32-bit words. The maximal size of task buffer equals to 4 * (2^16 - 1) bytes. The minimal size required to start execution is 2, because the minimal value of the stop offset is 1 and it has to be smaller then the task buffer size. */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE1_SIZETB1_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSIZE1_SIZETB1_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSIZE1_SETM_SIZETB1(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSIZE1_SET_SIZETB1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSIZE1_GET_SIZETB1(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_SIZETB1(s,val) ( (s)->taskbuffersize1 = ((s)->taskbuffersize1 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_SIZETB1(s,val)  ( (s)->taskbuffersize1 = (((s)->taskbuffersize1 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_SIZETB1(s) ((((s)->taskbuffersize1) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSIZE1_SIZETB1_RESET 0x0U

/* TASKBUFFERSTOPOFFSET1: Task buffer 1 stop offset register */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET1 0x00000014U
/* STOPOFFSETTB1: Task buffer 1 stop offset in multiple of 32-bit words to determine the last valid scheduling instruction. Only scheduling instructions up to this offset are executed or with other words instruction at the StopOffset-1 is the last instruction which is executed. */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET1_STOPOFFSETTB1_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET1_STOPOFFSETTB1_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET1_SETM_STOPOFFSETTB1(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET1_SET_STOPOFFSETTB1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET1_GET_STOPOFFSETTB1(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_STOPOFFSETTB1(s,val) ( (s)->taskbufferstopoffset1 = ((s)->taskbufferstopoffset1 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_STOPOFFSETTB1(s,val)  ( (s)->taskbufferstopoffset1 = (((s)->taskbufferstopoffset1 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_STOPOFFSETTB1(s) ((((s)->taskbufferstopoffset1) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET1_STOPOFFSETTB1_RESET 0U

/* TASKBUFFERADDRESS2: Task buffer 2 address register */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS2 0x00000018U
/* ADDRESSTB2: Task buffer 2 base address in multiple of 64-bit words. */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS2_ADDRESSTB2_FSHIFT 3U
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS2_ADDRESSTB2_FMASK 0x1fffffffU
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS2_SETM_ADDRESSTB2(val) (((CYGFX_U32)(val) & 0x1fffffffUL) << 3U)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS2_SET_ADDRESSTB2(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS2_GET_ADDRESSTB2(val) (((CYGFX_U32)(val) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_SETM_ADDRESSTB2(s,val) ( (s)->taskbufferaddress2 = ((s)->taskbufferaddress2 & ~0xfffffff8UL) | (((CYGFX_U32)(val) << 3U) & 0xfffffff8UL) )
#define GFXREG_CMDSEQ_SET_ADDRESSTB2(s,val)  ( (s)->taskbufferaddress2 = (((s)->taskbufferaddress2 & ~0xfffffff8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_ADDRESSTB2(s) ((((s)->taskbufferaddress2) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS2_ADDRESSTB2_RESET 0U

/* TASKBUFFERSIZE2: Task buffer 2 size register */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE2 0x0000001cU
/* SIZETB2: Task buffer 2 size in multiple of 32-bit words. The maximal size of task buffer equals to 4 * (2^16 - 1) bytes. The minimal size required to start execution is 2, because the minimal value of the stop offset is 1 and it has to be smaller then the task buffer size. */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE2_SIZETB2_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSIZE2_SIZETB2_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSIZE2_SETM_SIZETB2(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSIZE2_SET_SIZETB2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSIZE2_GET_SIZETB2(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_SIZETB2(s,val) ( (s)->taskbuffersize2 = ((s)->taskbuffersize2 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_SIZETB2(s,val)  ( (s)->taskbuffersize2 = (((s)->taskbuffersize2 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_SIZETB2(s) ((((s)->taskbuffersize2) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSIZE2_SIZETB2_RESET 0x0U

/* TASKBUFFERSTOPOFFSET2: Task buffer 2 stop offset register */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET2 0x00000020U
/* STOPOFFSETTB2: Task buffer 2 stop offset in multiple of 32-bit words to determine the last valid scheduling instruction. Only scheduling instructions up to this offset are executed or with other words instruction at the StopOffset-1 is the last instruction which is executed. */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET2_STOPOFFSETTB2_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET2_STOPOFFSETTB2_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET2_SETM_STOPOFFSETTB2(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET2_SET_STOPOFFSETTB2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET2_GET_STOPOFFSETTB2(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_STOPOFFSETTB2(s,val) ( (s)->taskbufferstopoffset2 = ((s)->taskbufferstopoffset2 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_STOPOFFSETTB2(s,val)  ( (s)->taskbufferstopoffset2 = (((s)->taskbufferstopoffset2 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_STOPOFFSETTB2(s) ((((s)->taskbufferstopoffset2) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET2_STOPOFFSETTB2_RESET 0U

/* TASKBUFFERADDRESS3: Task buffer 3 address register */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS3 0x00000024U
/* ADDRESSTB3: Task buffer 3 base address in multiple of 64-bit words. */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS3_ADDRESSTB3_FSHIFT 3U
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS3_ADDRESSTB3_FMASK 0x1fffffffU
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS3_SETM_ADDRESSTB3(val) (((CYGFX_U32)(val) & 0x1fffffffUL) << 3U)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS3_SET_ADDRESSTB3(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS3_GET_ADDRESSTB3(val) (((CYGFX_U32)(val) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_SETM_ADDRESSTB3(s,val) ( (s)->taskbufferaddress3 = ((s)->taskbufferaddress3 & ~0xfffffff8UL) | (((CYGFX_U32)(val) << 3U) & 0xfffffff8UL) )
#define GFXREG_CMDSEQ_SET_ADDRESSTB3(s,val)  ( (s)->taskbufferaddress3 = (((s)->taskbufferaddress3 & ~0xfffffff8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_ADDRESSTB3(s) ((((s)->taskbufferaddress3) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS3_ADDRESSTB3_RESET 0U

/* TASKBUFFERSIZE3: Task buffer 3 size register */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE3 0x00000028U
/* SIZETB3: Task buffer 3 size in multiple of 32-bit words. The maximal size of task buffer equals to 4 * (2^16 - 1) bytes. The minimal size required to start execution is 2, because the minimal value of the stop offset is 1 and it has to be smaller then the task buffer size. */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE3_SIZETB3_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSIZE3_SIZETB3_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSIZE3_SETM_SIZETB3(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSIZE3_SET_SIZETB3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSIZE3_GET_SIZETB3(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_SIZETB3(s,val) ( (s)->taskbuffersize3 = ((s)->taskbuffersize3 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_SIZETB3(s,val)  ( (s)->taskbuffersize3 = (((s)->taskbuffersize3 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_SIZETB3(s) ((((s)->taskbuffersize3) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSIZE3_SIZETB3_RESET 0x0U

/* TASKBUFFERSTOPOFFSET3: Task buffer 3 stop offset register */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET3 0x0000002cU
/* STOPOFFSETTB3: Task buffer 3 stop offset in multiple of 32-bit words to determine the last valid scheduling instruction. Only scheduling instructions up to this offset are executed or with other words instruction at the StopOffset-1 is the last instruction which is executed. */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET3_STOPOFFSETTB3_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET3_STOPOFFSETTB3_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET3_SETM_STOPOFFSETTB3(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET3_SET_STOPOFFSETTB3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET3_GET_STOPOFFSETTB3(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_STOPOFFSETTB3(s,val) ( (s)->taskbufferstopoffset3 = ((s)->taskbufferstopoffset3 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_STOPOFFSETTB3(s,val)  ( (s)->taskbufferstopoffset3 = (((s)->taskbufferstopoffset3 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_STOPOFFSETTB3(s) ((((s)->taskbufferstopoffset3) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET3_STOPOFFSETTB3_RESET 0U

/* TASKBUFFERADDRESS4: Task buffer 4 address register */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS4 0x00000030U
/* ADDRESSTB4: Task buffer 4 base address in multiple of 64-bit words. */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS4_ADDRESSTB4_FSHIFT 3U
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS4_ADDRESSTB4_FMASK 0x1fffffffU
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS4_SETM_ADDRESSTB4(val) (((CYGFX_U32)(val) & 0x1fffffffUL) << 3U)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS4_SET_ADDRESSTB4(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS4_GET_ADDRESSTB4(val) (((CYGFX_U32)(val) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_SETM_ADDRESSTB4(s,val) ( (s)->taskbufferaddress4 = ((s)->taskbufferaddress4 & ~0xfffffff8UL) | (((CYGFX_U32)(val) << 3U) & 0xfffffff8UL) )
#define GFXREG_CMDSEQ_SET_ADDRESSTB4(s,val)  ( (s)->taskbufferaddress4 = (((s)->taskbufferaddress4 & ~0xfffffff8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_ADDRESSTB4(s) ((((s)->taskbufferaddress4) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS4_ADDRESSTB4_RESET 0U

/* TASKBUFFERSIZE4: Task buffer 4 size register */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE4 0x00000034U
/* SIZETB4: Task buffer 4 size in multiple of 32-bit words. The maximal size of task buffer equals to 4 * (2^16 - 1) bytes. The minimal size required to start execution is 2, because the minimal value of the stop offset is 1 and it has to be smaller then the task buffer size. */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE4_SIZETB4_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSIZE4_SIZETB4_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSIZE4_SETM_SIZETB4(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSIZE4_SET_SIZETB4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSIZE4_GET_SIZETB4(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_SIZETB4(s,val) ( (s)->taskbuffersize4 = ((s)->taskbuffersize4 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_SIZETB4(s,val)  ( (s)->taskbuffersize4 = (((s)->taskbuffersize4 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_SIZETB4(s) ((((s)->taskbuffersize4) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSIZE4_SIZETB4_RESET 0x0U

/* TASKBUFFERSTOPOFFSET4: Task buffer 4 stop offset register */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET4 0x00000038U
/* STOPOFFSETTB4: Task buffer 4 stop offset in multiple of 32-bit words to determine the last valid scheduling instruction. Only scheduling instructions up to this offset are executed or with other words instruction at the StopOffset-1 is the last instruction which is executed. */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET4_STOPOFFSETTB4_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET4_STOPOFFSETTB4_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET4_SETM_STOPOFFSETTB4(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET4_SET_STOPOFFSETTB4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET4_GET_STOPOFFSETTB4(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_STOPOFFSETTB4(s,val) ( (s)->taskbufferstopoffset4 = ((s)->taskbufferstopoffset4 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_STOPOFFSETTB4(s,val)  ( (s)->taskbufferstopoffset4 = (((s)->taskbufferstopoffset4 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_STOPOFFSETTB4(s) ((((s)->taskbufferstopoffset4) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET4_STOPOFFSETTB4_RESET 0U

/* TASKBUFFERADDRESS5: Task buffer 5 address register */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS5 0x0000003cU
/* ADDRESSTB5: Task buffer 5 base address in multiple of 64-bit words. */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS5_ADDRESSTB5_FSHIFT 3U
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS5_ADDRESSTB5_FMASK 0x1fffffffU
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS5_SETM_ADDRESSTB5(val) (((CYGFX_U32)(val) & 0x1fffffffUL) << 3U)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS5_SET_ADDRESSTB5(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS5_GET_ADDRESSTB5(val) (((CYGFX_U32)(val) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_SETM_ADDRESSTB5(s,val) ( (s)->taskbufferaddress5 = ((s)->taskbufferaddress5 & ~0xfffffff8UL) | (((CYGFX_U32)(val) << 3U) & 0xfffffff8UL) )
#define GFXREG_CMDSEQ_SET_ADDRESSTB5(s,val)  ( (s)->taskbufferaddress5 = (((s)->taskbufferaddress5 & ~0xfffffff8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_ADDRESSTB5(s) ((((s)->taskbufferaddress5) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS5_ADDRESSTB5_RESET 0U

/* TASKBUFFERSIZE5: Task buffer 5 size register */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE5 0x00000040U
/* SIZETB5: Task buffer 5 size in multiple of 32-bit words. The maximal size of task buffer equals to 4 * (2^16 - 1) bytes. The minimal size required to start execution is 2, because the minimal value of the stop offset is 1 and it has to be smaller then the task buffer size. */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE5_SIZETB5_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSIZE5_SIZETB5_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSIZE5_SETM_SIZETB5(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSIZE5_SET_SIZETB5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSIZE5_GET_SIZETB5(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_SIZETB5(s,val) ( (s)->taskbuffersize5 = ((s)->taskbuffersize5 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_SIZETB5(s,val)  ( (s)->taskbuffersize5 = (((s)->taskbuffersize5 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_SIZETB5(s) ((((s)->taskbuffersize5) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSIZE5_SIZETB5_RESET 0x0U

/* TASKBUFFERSTOPOFFSET5: Task buffer 5 stop offset register */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET5 0x00000044U
/* STOPOFFSETTB5: Task buffer 5 stop offset in multiple of 32-bit words to determine the last valid scheduling instruction. Only scheduling instructions up to this offset are executed or with other words instruction at the StopOffset-1 is the last instruction which is executed. */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET5_STOPOFFSETTB5_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET5_STOPOFFSETTB5_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET5_SETM_STOPOFFSETTB5(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET5_SET_STOPOFFSETTB5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET5_GET_STOPOFFSETTB5(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_STOPOFFSETTB5(s,val) ( (s)->taskbufferstopoffset5 = ((s)->taskbufferstopoffset5 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_STOPOFFSETTB5(s,val)  ( (s)->taskbufferstopoffset5 = (((s)->taskbufferstopoffset5 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_STOPOFFSETTB5(s) ((((s)->taskbufferstopoffset5) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET5_STOPOFFSETTB5_RESET 0U

/* TASKBUFFERADDRESS6: Task buffer 6 address register */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS6 0x00000048U
/* ADDRESSTB6: Task buffer 6 base address in multiple of 64-bit words. */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS6_ADDRESSTB6_FSHIFT 3U
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS6_ADDRESSTB6_FMASK 0x1fffffffU
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS6_SETM_ADDRESSTB6(val) (((CYGFX_U32)(val) & 0x1fffffffUL) << 3U)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS6_SET_ADDRESSTB6(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS6_GET_ADDRESSTB6(val) (((CYGFX_U32)(val) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_SETM_ADDRESSTB6(s,val) ( (s)->taskbufferaddress6 = ((s)->taskbufferaddress6 & ~0xfffffff8UL) | (((CYGFX_U32)(val) << 3U) & 0xfffffff8UL) )
#define GFXREG_CMDSEQ_SET_ADDRESSTB6(s,val)  ( (s)->taskbufferaddress6 = (((s)->taskbufferaddress6 & ~0xfffffff8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_ADDRESSTB6(s) ((((s)->taskbufferaddress6) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS6_ADDRESSTB6_RESET 0U

/* TASKBUFFERSIZE6: Task buffer 6 size register */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE6 0x0000004cU
/* SIZETB6: Task buffer 6 size in multiple of 32-bit words. The maximal size of task buffer equals to 4 * (2^16 - 1) bytes. The minimal size required to start execution is 2, because the minimal value of the stop offset is 1 and it has to be smaller then the task buffer size. */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE6_SIZETB6_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSIZE6_SIZETB6_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSIZE6_SETM_SIZETB6(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSIZE6_SET_SIZETB6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSIZE6_GET_SIZETB6(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_SIZETB6(s,val) ( (s)->taskbuffersize6 = ((s)->taskbuffersize6 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_SIZETB6(s,val)  ( (s)->taskbuffersize6 = (((s)->taskbuffersize6 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_SIZETB6(s) ((((s)->taskbuffersize6) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSIZE6_SIZETB6_RESET 0x0U

/* TASKBUFFERSTOPOFFSET6: Task buffer 6 stop offset register */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET6 0x00000050U
/* STOPOFFSETTB6: Task buffer 6 stop offset in multiple of 32-bit words to determine the last valid scheduling instruction. Only scheduling instructions up to this offset are executed or with other words instruction at the StopOffset-1 is the last instruction which is executed. */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET6_STOPOFFSETTB6_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET6_STOPOFFSETTB6_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET6_SETM_STOPOFFSETTB6(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET6_SET_STOPOFFSETTB6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET6_GET_STOPOFFSETTB6(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_STOPOFFSETTB6(s,val) ( (s)->taskbufferstopoffset6 = ((s)->taskbufferstopoffset6 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_STOPOFFSETTB6(s,val)  ( (s)->taskbufferstopoffset6 = (((s)->taskbufferstopoffset6 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_STOPOFFSETTB6(s) ((((s)->taskbufferstopoffset6) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET6_STOPOFFSETTB6_RESET 0U

/* TASKBUFFERADDRESS7: Task buffer 7 address register */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS7 0x00000054U
/* ADDRESSTB7: Task buffer 7 base address in multiple of 64-bit words. */
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS7_ADDRESSTB7_FSHIFT 3U
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS7_ADDRESSTB7_FMASK 0x1fffffffU
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS7_SETM_ADDRESSTB7(val) (((CYGFX_U32)(val) & 0x1fffffffUL) << 3U)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS7_SET_ADDRESSTB7(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS7_GET_ADDRESSTB7(val) (((CYGFX_U32)(val) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_SETM_ADDRESSTB7(s,val) ( (s)->taskbufferaddress7 = ((s)->taskbufferaddress7 & ~0xfffffff8UL) | (((CYGFX_U32)(val) << 3U) & 0xfffffff8UL) )
#define GFXREG_CMDSEQ_SET_ADDRESSTB7(s,val)  ( (s)->taskbufferaddress7 = (((s)->taskbufferaddress7 & ~0xfffffff8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_ADDRESSTB7(s) ((((s)->taskbufferaddress7) >> 3U) & 0x1fffffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERADDRESS7_ADDRESSTB7_RESET 0U

/* TASKBUFFERSIZE7: Task buffer 7 size register */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE7 0x00000058U
/* SIZETB7: Task buffer 7 size in multiple of 32-bit words. The maximal size of task buffer equals to 4 * (2^16 - 1) bytes. The minimal size required to start execution is 2, because the minimal value of the stop offset is 1 and it has to be smaller then the task buffer size. */
#define GFXREG_CMDSEQ_TASKBUFFERSIZE7_SIZETB7_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSIZE7_SIZETB7_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSIZE7_SETM_SIZETB7(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSIZE7_SET_SIZETB7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSIZE7_GET_SIZETB7(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_SIZETB7(s,val) ( (s)->taskbuffersize7 = ((s)->taskbuffersize7 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_SIZETB7(s,val)  ( (s)->taskbuffersize7 = (((s)->taskbuffersize7 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_SIZETB7(s) ((((s)->taskbuffersize7) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSIZE7_SIZETB7_RESET 0x0U

/* TASKBUFFERSTOPOFFSET7: Task buffer 7 stop offset register */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET7 0x0000005cU
/* STOPOFFSETTB7: Task buffer 7 stop offset in multiple of 32-bit words to determine the last valid scheduling instruction. Only scheduling instructions up to this offset are executed or with other words instruction at the StopOffset-1 is the last instruction which is executed. */
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET7_STOPOFFSETTB7_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET7_STOPOFFSETTB7_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET7_SETM_STOPOFFSETTB7(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET7_SET_STOPOFFSETTB7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET7_GET_STOPOFFSETTB7(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SETM_STOPOFFSETTB7(s,val) ( (s)->taskbufferstopoffset7 = ((s)->taskbufferstopoffset7 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_CMDSEQ_SET_STOPOFFSETTB7(s,val)  ( (s)->taskbufferstopoffset7 = (((s)->taskbufferstopoffset7 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_CMDSEQ_GET_STOPOFFSETTB7(s) ((((s)->taskbufferstopoffset7) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFERSTOPOFFSET7_STOPOFFSETTB7_RESET 0U

/* TASKBUFFEREXECOFFSET0: Task buffer 0 execute offset register */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET0 0x00000060U
/* EXECOFFSETTB0: Task buffer 0 execution offset in multiple of 32-bit words. Offset of the scheduling instruction that is to be executed next. Instruction at address = AddressTB0 has offset zero.  */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET0_EXECOFFSETTB0_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET0_EXECOFFSETTB0_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET0_GET_EXECOFFSETTB0(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_EXECOFFSETTB0(s) ((((s)->taskbufferexecoffset0) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET0_EXECOFFSETTB0_RESET (none)U

/* TASKBUFFEREXECOFFSET1: Task buffer 1 execute offset register */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET1 0x00000064U
/* EXECOFFSETTB1: Task buffer 1 execution offset in multiple of 32-bit words. Offset of the scheduling instruction that is to be executed next. Instruction at address = AddressTB1 has offset zero.  */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET1_EXECOFFSETTB1_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET1_EXECOFFSETTB1_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET1_GET_EXECOFFSETTB1(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_EXECOFFSETTB1(s) ((((s)->taskbufferexecoffset1) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET1_EXECOFFSETTB1_RESET (none)U

/* TASKBUFFEREXECOFFSET2: Task buffer 2 execute offset register */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET2 0x00000068U
/* EXECOFFSETTB2: Task buffer 2 execution offset in multiple of 32-bit words. Offset of the scheduling instruction that is to be executed next. Instruction at address = AddressTB2 has offset zero.  */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET2_EXECOFFSETTB2_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET2_EXECOFFSETTB2_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET2_GET_EXECOFFSETTB2(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_EXECOFFSETTB2(s) ((((s)->taskbufferexecoffset2) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET2_EXECOFFSETTB2_RESET (none)U

/* TASKBUFFEREXECOFFSET3: Task buffer 3 execute offset register */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET3 0x0000006cU
/* EXECOFFSETTB3: Task buffer 3 execution offset in multiple of 32-bit words. Offset of the scheduling instruction that is to be executed next. Instruction at address = AddressTB3 has offset zero.  */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET3_EXECOFFSETTB3_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET3_EXECOFFSETTB3_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET3_GET_EXECOFFSETTB3(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_EXECOFFSETTB3(s) ((((s)->taskbufferexecoffset3) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET3_EXECOFFSETTB3_RESET (none)U

/* TASKBUFFEREXECOFFSET4: Task buffer 4 execute offset register */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET4 0x00000070U
/* EXECOFFSETTB4: Task buffer 4 execution offset in multiple of 32-bit words. Offset of the scheduling instruction that is to be executed next. Instruction at address = AddressTB4 has offset zero.  */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET4_EXECOFFSETTB4_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET4_EXECOFFSETTB4_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET4_GET_EXECOFFSETTB4(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_EXECOFFSETTB4(s) ((((s)->taskbufferexecoffset4) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET4_EXECOFFSETTB4_RESET (none)U

/* TASKBUFFEREXECOFFSET5: Task buffer 5 execute offset register */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET5 0x00000074U
/* EXECOFFSETTB5: Task buffer 5 execution offset in multiple of 32-bit words. Offset of the scheduling instruction that is to be executed next. Instruction at address = AddressTB5 has offset zero.  */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET5_EXECOFFSETTB5_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET5_EXECOFFSETTB5_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET5_GET_EXECOFFSETTB5(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_EXECOFFSETTB5(s) ((((s)->taskbufferexecoffset5) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET5_EXECOFFSETTB5_RESET (none)U

/* TASKBUFFEREXECOFFSET6: Task buffer 6 execute offset register */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET6 0x00000078U
/* EXECOFFSETTB6: Task buffer 6 execution offset in multiple of 32-bit words. Offset of the scheduling instruction that is to be executed next. Instruction at address = AddressTB6 has offset zero.  */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET6_EXECOFFSETTB6_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET6_EXECOFFSETTB6_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET6_GET_EXECOFFSETTB6(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_EXECOFFSETTB6(s) ((((s)->taskbufferexecoffset6) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET6_EXECOFFSETTB6_RESET (none)U

/* TASKBUFFEREXECOFFSET7: Task buffer 7 execute offset register */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET7 0x0000007cU
/* EXECOFFSETTB7: Task buffer 7 execution offset in multiple of 32-bit words. Offset of the scheduling instruction that is to be executed next. Instruction at address = AddressTB7 has offset zero.  */
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET7_EXECOFFSETTB7_FSHIFT 0U
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET7_EXECOFFSETTB7_FMASK 0xffffU
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET7_GET_EXECOFFSETTB7(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_EXECOFFSETTB7(s) ((((s)->taskbufferexecoffset7) ) & 0xffffUL)
#define GFXREG_CMDSEQ_TASKBUFFEREXECOFFSET7_EXECOFFSETTB7_RESET (none)U

/* STATUS: Status register */
#define GFXREG_CMDSEQ_STATUS 0x00000080U
/* TASKBUFFERDONE: Each bit corresponds to one task buffer. '1' means that the ExecOffset equals to the StopOffset  */
#define GFXREG_CMDSEQ_STATUS_TASKBUFFERDONE_FSHIFT 0U
#define GFXREG_CMDSEQ_STATUS_TASKBUFFERDONE_FMASK 0xffU
#define GFXREG_CMDSEQ_STATUS_GET_TASKBUFFERDONE(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_CMDSEQ_GET_TASKBUFFERDONE(s) ((((s)->status) ) & 0xffUL)
#define GFXREG_CMDSEQ_STATUS_TASKBUFFERDONE_RESET (none)U

/* TASKBUFFERSYNC: Each bit corresponds to one task buffer. '1' means that the scheduling of corresponding TB is blocked until some SW or HW state is reached. */
#define GFXREG_CMDSEQ_STATUS_TASKBUFFERSYNC_FSHIFT 8U
#define GFXREG_CMDSEQ_STATUS_TASKBUFFERSYNC_FMASK 0xffU
#define GFXREG_CMDSEQ_STATUS_GET_TASKBUFFERSYNC(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_CMDSEQ_GET_TASKBUFFERSYNC(s) ((((s)->status) >> 8U) & 0xffUL)
#define GFXREG_CMDSEQ_STATUS_TASKBUFFERSYNC_RESET (none)U

/* SCHEDULERACTIVETB: Task buffer being executed in scheduler. If scheduler is in idle state, the value of this field is not valid. */
#define GFXREG_CMDSEQ_STATUS_SCHEDULERACTIVETB_FSHIFT 16U
#define GFXREG_CMDSEQ_STATUS_SCHEDULERACTIVETB_FMASK 0x7U
#define GFXREG_CMDSEQ_STATUS_GET_SCHEDULERACTIVETB(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_CMDSEQ_GET_SCHEDULERACTIVETB(s) ((((s)->status) >> 16U) & 0x7UL)
#define GFXREG_CMDSEQ_STATUS_SCHEDULERACTIVETB_RESET (none)U

/* SCHEDULERIDLE: Scheduler is not processing any instructions and there are no outstanding AXI transactions. */
#define GFXREG_CMDSEQ_STATUS_SCHEDULERIDLE_FSHIFT 19U
#define GFXREG_CMDSEQ_STATUS_SCHEDULERIDLE_FMASK 0x1U
#define GFXREG_CMDSEQ_STATUS_GET_SCHEDULERIDLE(val) (((CYGFX_U32)(val) >> 19U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_SCHEDULERIDLE(s) ((((s)->status) >> 19U) & 0x1UL)
#define GFXREG_CMDSEQ_STATUS_SCHEDULERIDLE_RESET (none)U

/* FETCHEDACTIVETB: Task buffer being fetch last in programmer. If programmer is in idle state, the value of this field is not valid. */
#define GFXREG_CMDSEQ_STATUS_FETCHEDACTIVETB_FSHIFT 20U
#define GFXREG_CMDSEQ_STATUS_FETCHEDACTIVETB_FMASK 0x7U
#define GFXREG_CMDSEQ_STATUS_GET_FETCHEDACTIVETB(val) (((CYGFX_U32)(val) >> 20U) & 0x7UL)
#define GFXREG_CMDSEQ_GET_FETCHEDACTIVETB(s) ((((s)->status) >> 20U) & 0x7UL)
#define GFXREG_CMDSEQ_STATUS_FETCHEDACTIVETB_RESET (none)U

/* REQUESTEDAXITRANSACTIONS: There are some outstanding axi transactions that have been requested but are not received yet. */
#define GFXREG_CMDSEQ_STATUS_REQUESTEDAXITRANSACTIONS_FSHIFT 23U
#define GFXREG_CMDSEQ_STATUS_REQUESTEDAXITRANSACTIONS_FMASK 0x1U
#define GFXREG_CMDSEQ_STATUS_GET_REQUESTEDAXITRANSACTIONS(val) (((CYGFX_U32)(val) >> 23U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_REQUESTEDAXITRANSACTIONS(s) ((((s)->status) >> 23U) & 0x1UL)
#define GFXREG_CMDSEQ_STATUS_REQUESTEDAXITRANSACTIONS_RESET (none)U

/* PROGRAMMERSTATE: Execution state of programmer */
#define GFXREG_CMDSEQ_STATUS_PROGRAMMERSTATE_FSHIFT 24U
#define GFXREG_CMDSEQ_STATUS_PROGRAMMERSTATE_FMASK 0x3U
#define GFXREG_CMDSEQ_STATUS_GET_PROGRAMMERSTATE(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_CMDSEQ_GET_PROGRAMMERSTATE(s) ((((s)->status) >> 24U) & 0x3UL)
#define GFXREG_CMDSEQ_STATUS_PROGRAMMERSTATE_IDLE 0U /* When all fetched instructions have been executed and there are no functions scheduled for the execution */
#define GFXREG_CMDSEQ_STATUS_PROGRAMMERSTATE_SYNC 1U /* During execution of the SYNC instruction */
#define GFXREG_CMDSEQ_STATUS_PROGRAMMERSTATE_ACTIVE 2U /* Execution of instructions */
#define GFXREG_CMDSEQ_STATUS_PROGRAMMERSTATE_AXI_WAIT 3U /* There is function scheduled for the execution, but the internal instruction buffer is empty. */
#define GFXREG_CMDSEQ_STATUS_PROGRAMMERSTATE_RESET (none)U

/* CMDSEQIDLE: CmdSeq is not processing any instructions and there are no outstanding AXI transactions. */
#define GFXREG_CMDSEQ_STATUS_CMDSEQIDLE_FSHIFT 26U
#define GFXREG_CMDSEQ_STATUS_CMDSEQIDLE_FMASK 0x1U
#define GFXREG_CMDSEQ_STATUS_GET_CMDSEQIDLE(val) (((CYGFX_U32)(val) >> 26U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_CMDSEQIDLE(s) ((((s)->status) >> 26U) & 0x1UL)
#define GFXREG_CMDSEQ_STATUS_CMDSEQIDLE_RESET (none)U

/* ERRORCODE: Error code register, each field of this register is one bit wide and corresponds to an error event. If the value of this register is zero, than there are no errors. */
#define GFXREG_CMDSEQ_ERRORCODE 0x00000084U
/* ERRORSCHEDULEROPCODE: Opcode error in scheduler */
#define GFXREG_CMDSEQ_ERRORCODE_ERRORSCHEDULEROPCODE_FSHIFT 0U
#define GFXREG_CMDSEQ_ERRORCODE_ERRORSCHEDULEROPCODE_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERRORSCHEDULEROPCODE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERRORSCHEDULEROPCODE(s) ((((s)->errorcode) ) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERRORSCHEDULEROPCODE_RESET (none)U

/* ERRORPROGRAMMEROPCODE: Opcode error in programmer */
#define GFXREG_CMDSEQ_ERRORCODE_ERRORPROGRAMMEROPCODE_FSHIFT 1U
#define GFXREG_CMDSEQ_ERRORCODE_ERRORPROGRAMMEROPCODE_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERRORPROGRAMMEROPCODE(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERRORPROGRAMMEROPCODE(s) ((((s)->errorcode) >> 1U) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERRORPROGRAMMEROPCODE_RESET (none)U

/* ERROREXECUTIONOFFSET: Execution offset is outside of the task buffer */
#define GFXREG_CMDSEQ_ERRORCODE_ERROREXECUTIONOFFSET_FSHIFT 2U
#define GFXREG_CMDSEQ_ERRORCODE_ERROREXECUTIONOFFSET_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERROREXECUTIONOFFSET(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERROREXECUTIONOFFSET(s) ((((s)->errorcode) >> 2U) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERROREXECUTIONOFFSET_RESET (none)U

/* ERRORSTOPOFFSETWITHININSTRUCTION: Stop offset is within instruction in scheduler */
#define GFXREG_CMDSEQ_ERRORCODE_ERRORSTOPOFFSETWITHININSTRUCTION_FSHIFT 3U
#define GFXREG_CMDSEQ_ERRORCODE_ERRORSTOPOFFSETWITHININSTRUCTION_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERRORSTOPOFFSETWITHININSTRUCTION(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERRORSTOPOFFSETWITHININSTRUCTION(s) ((((s)->errorcode) >> 3U) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERRORSTOPOFFSETWITHININSTRUCTION_RESET (none)U

/* ERRORAXISLV: AXI slave error has been occurred. SchedulerAddress and ProgrammerAddress have to be evaluated */
#define GFXREG_CMDSEQ_ERRORCODE_ERRORAXISLV_FSHIFT 4U
#define GFXREG_CMDSEQ_ERRORCODE_ERRORAXISLV_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERRORAXISLV(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERRORAXISLV(s) ((((s)->errorcode) >> 4U) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERRORAXISLV_RESET (none)U

/* ERRORAXIDEC: AXI decoder error has been occurred. SchedulerAddress and ProgrammerAddress have to be evaluated */
#define GFXREG_CMDSEQ_ERRORCODE_ERRORAXIDEC_FSHIFT 5U
#define GFXREG_CMDSEQ_ERRORCODE_ERRORAXIDEC_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERRORAXIDEC(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERRORAXIDEC(s) ((((s)->errorcode) >> 5U) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERRORAXIDEC_RESET (none)U

/* ERRORREGID: Error accessing an register via id that is not bound to any GPR or SPR register */
#define GFXREG_CMDSEQ_ERRORCODE_ERRORREGID_FSHIFT 6U
#define GFXREG_CMDSEQ_ERRORCODE_ERRORREGID_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERRORREGID(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERRORREGID(s) ((((s)->errorcode) >> 6U) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERRORREGID_RESET (none)U

/* ERRORDELAYEDSYNC: SYNC is following delayed SYNC in Scheduler */
#define GFXREG_CMDSEQ_ERRORCODE_ERRORDELAYEDSYNC_FSHIFT 7U
#define GFXREG_CMDSEQ_ERRORCODE_ERRORDELAYEDSYNC_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERRORDELAYEDSYNC(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERRORDELAYEDSYNC(s) ((((s)->errorcode) >> 7U) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERRORDELAYEDSYNC_RESET (none)U

/* ERRORSTOPOFFSETOUTSIDETB: Stop offset value is bigger than or equals to task buffer size. If however both are zero, no error should be raised. */
#define GFXREG_CMDSEQ_ERRORCODE_ERRORSTOPOFFSETOUTSIDETB_FSHIFT 8U
#define GFXREG_CMDSEQ_ERRORCODE_ERRORSTOPOFFSETOUTSIDETB_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERRORSTOPOFFSETOUTSIDETB(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERRORSTOPOFFSETOUTSIDETB(s) ((((s)->errorcode) >> 8U) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERRORSTOPOFFSETOUTSIDETB_RESET (none)U

/* ERRORFUNCTIONOFFSET: Function offset provided by the EXEC instruction is outside of task buffer */
#define GFXREG_CMDSEQ_ERRORCODE_ERRORFUNCTIONOFFSET_FSHIFT 9U
#define GFXREG_CMDSEQ_ERRORCODE_ERRORFUNCTIONOFFSET_FMASK 0x1U
#define GFXREG_CMDSEQ_ERRORCODE_GET_ERRORFUNCTIONOFFSET(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_CMDSEQ_GET_ERRORFUNCTIONOFFSET(s) ((((s)->errorcode) >> 9U) & 0x1UL)
#define GFXREG_CMDSEQ_ERRORCODE_ERRORFUNCTIONOFFSET_RESET (none)U

/* DESIGNCONFIGURATION: Provides HW specific information. */
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION 0x00000088U
/* BUFFERDEPTH: The size of the buffer between the Scheduler and the Programmer. */
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_BUFFERDEPTH_FSHIFT 0U
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_BUFFERDEPTH_FMASK 0xfU
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_GET_BUFFERDEPTH(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_CMDSEQ_GET_BUFFERDEPTH(s) ((((s)->designconfiguration) ) & 0xfUL)
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_BUFFERDEPTH_RESET (none)U

/* BUFFERDEPTHSCHEDULER: The buffer (axi decouple fifo) size inside of the scheduler. */
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_BUFFERDEPTHSCHEDULER_FSHIFT 8U
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_BUFFERDEPTHSCHEDULER_FMASK 0xffU
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_GET_BUFFERDEPTHSCHEDULER(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_CMDSEQ_GET_BUFFERDEPTHSCHEDULER(s) ((((s)->designconfiguration) >> 8U) & 0xffUL)
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_BUFFERDEPTHSCHEDULER_RESET (none)U

/* BUFFERDEPTHPROGRAMMER: The buffer (axi decouple fifo) size inside of the programmer. */
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_BUFFERDEPTHPROGRAMMER_FSHIFT 16U
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_BUFFERDEPTHPROGRAMMER_FMASK 0xffU
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_GET_BUFFERDEPTHPROGRAMMER(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_CMDSEQ_GET_BUFFERDEPTHPROGRAMMER(s) ((((s)->designconfiguration) >> 16U) & 0xffUL)
#define GFXREG_CMDSEQ_DESIGNCONFIGURATION_BUFFERDEPTHPROGRAMMER_RESET (none)U

/* SCHEDULERADDRESS: Last fetched address of scheduler. */
#define GFXREG_CMDSEQ_SCHEDULERADDRESS 0x0000008cU
/* SCHEDULERADDRESS: Last fetched address of scheduler */
#define GFXREG_CMDSEQ_SCHEDULERADDRESS_SCHEDULERADDRESS_FSHIFT 0U
#define GFXREG_CMDSEQ_SCHEDULERADDRESS_SCHEDULERADDRESS_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_SCHEDULERADDRESS_GET_SCHEDULERADDRESS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_SCHEDULERADDRESS(s) ((((s)->scheduleraddress) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_SCHEDULERADDRESS_SCHEDULERADDRESS_RESET (none)U

/* PROGRAMMERADDRESS: Last fetched address of programmer. */
#define GFXREG_CMDSEQ_PROGRAMMERADDRESS 0x00000090U
/* PROGRAMMERADDRESS: Last fetched address of programmer */
#define GFXREG_CMDSEQ_PROGRAMMERADDRESS_PROGRAMMERADDRESS_FSHIFT 0U
#define GFXREG_CMDSEQ_PROGRAMMERADDRESS_PROGRAMMERADDRESS_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_PROGRAMMERADDRESS_GET_PROGRAMMERADDRESS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_PROGRAMMERADDRESS(s) ((((s)->programmeraddress) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_PROGRAMMERADDRESS_PROGRAMMERADDRESS_RESET (none)U

/* GPR0: General purpose Register. (Internal register with id = 0)  */
#define GFXREG_CMDSEQ_GPR0 0x00000094U
/* GENERALPURPOSEREGISTER0: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR0_GENERALPURPOSEREGISTER0_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR0_GENERALPURPOSEREGISTER0_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR0_GET_GENERALPURPOSEREGISTER0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER0(s) ((((s)->gpr0) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR0_GENERALPURPOSEREGISTER0_RESET (none)U

/* GPR1: General purpose Register. (Internal register with id = 1)  */
#define GFXREG_CMDSEQ_GPR1 0x00000098U
/* GENERALPURPOSEREGISTER1: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR1_GENERALPURPOSEREGISTER1_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR1_GENERALPURPOSEREGISTER1_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR1_GET_GENERALPURPOSEREGISTER1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER1(s) ((((s)->gpr1) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR1_GENERALPURPOSEREGISTER1_RESET (none)U

/* GPR2: General purpose Register. (Internal register with id = 2)  */
#define GFXREG_CMDSEQ_GPR2 0x0000009cU
/* GENERALPURPOSEREGISTER2: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR2_GENERALPURPOSEREGISTER2_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR2_GENERALPURPOSEREGISTER2_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR2_GET_GENERALPURPOSEREGISTER2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER2(s) ((((s)->gpr2) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR2_GENERALPURPOSEREGISTER2_RESET (none)U

/* GPR3: General purpose Register. (Internal register with id = 3)  */
#define GFXREG_CMDSEQ_GPR3 0x000000a0U
/* GENERALPURPOSEREGISTER3: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR3_GENERALPURPOSEREGISTER3_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR3_GENERALPURPOSEREGISTER3_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR3_GET_GENERALPURPOSEREGISTER3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER3(s) ((((s)->gpr3) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR3_GENERALPURPOSEREGISTER3_RESET (none)U

/* GPR4: General purpose Register. (Internal register with id = 4)  */
#define GFXREG_CMDSEQ_GPR4 0x000000a4U
/* GENERALPURPOSEREGISTER4: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR4_GENERALPURPOSEREGISTER4_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR4_GENERALPURPOSEREGISTER4_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR4_GET_GENERALPURPOSEREGISTER4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER4(s) ((((s)->gpr4) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR4_GENERALPURPOSEREGISTER4_RESET (none)U

/* GPR5: General purpose Register. (Internal register with id = 5)  */
#define GFXREG_CMDSEQ_GPR5 0x000000a8U
/* GENERALPURPOSEREGISTER5: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR5_GENERALPURPOSEREGISTER5_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR5_GENERALPURPOSEREGISTER5_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR5_GET_GENERALPURPOSEREGISTER5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER5(s) ((((s)->gpr5) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR5_GENERALPURPOSEREGISTER5_RESET (none)U

/* GPR6: General purpose Register. (Internal register with id = 6)  */
#define GFXREG_CMDSEQ_GPR6 0x000000acU
/* GENERALPURPOSEREGISTER6: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR6_GENERALPURPOSEREGISTER6_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR6_GENERALPURPOSEREGISTER6_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR6_GET_GENERALPURPOSEREGISTER6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER6(s) ((((s)->gpr6) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR6_GENERALPURPOSEREGISTER6_RESET (none)U

/* GPR7: General purpose Register. (Internal register with id = 7)  */
#define GFXREG_CMDSEQ_GPR7 0x000000b0U
/* GENERALPURPOSEREGISTER7: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR7_GENERALPURPOSEREGISTER7_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR7_GENERALPURPOSEREGISTER7_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR7_GET_GENERALPURPOSEREGISTER7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER7(s) ((((s)->gpr7) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR7_GENERALPURPOSEREGISTER7_RESET (none)U

/* GPR8: General purpose Register. (Internal register with id = 8)  */
#define GFXREG_CMDSEQ_GPR8 0x000000b4U
/* GENERALPURPOSEREGISTER8: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR8_GENERALPURPOSEREGISTER8_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR8_GENERALPURPOSEREGISTER8_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR8_GET_GENERALPURPOSEREGISTER8(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER8(s) ((((s)->gpr8) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR8_GENERALPURPOSEREGISTER8_RESET (none)U

/* GPR9: General purpose Register. (Internal register with id = 9)  */
#define GFXREG_CMDSEQ_GPR9 0x000000b8U
/* GENERALPURPOSEREGISTER9: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR9_GENERALPURPOSEREGISTER9_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR9_GENERALPURPOSEREGISTER9_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR9_GET_GENERALPURPOSEREGISTER9(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER9(s) ((((s)->gpr9) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR9_GENERALPURPOSEREGISTER9_RESET (none)U

/* GPR10: General purpose Register. (Internal register with id = 10)  */
#define GFXREG_CMDSEQ_GPR10 0x000000bcU
/* GENERALPURPOSEREGISTER10: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR10_GENERALPURPOSEREGISTER10_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR10_GENERALPURPOSEREGISTER10_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR10_GET_GENERALPURPOSEREGISTER10(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER10(s) ((((s)->gpr10) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR10_GENERALPURPOSEREGISTER10_RESET (none)U

/* GPR11: General purpose Register. (Internal register with id = 11)  */
#define GFXREG_CMDSEQ_GPR11 0x000000c0U
/* GENERALPURPOSEREGISTER11: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR11_GENERALPURPOSEREGISTER11_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR11_GENERALPURPOSEREGISTER11_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR11_GET_GENERALPURPOSEREGISTER11(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER11(s) ((((s)->gpr11) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR11_GENERALPURPOSEREGISTER11_RESET (none)U

/* GPR12: General purpose Register. (Internal register with id = 12)  */
#define GFXREG_CMDSEQ_GPR12 0x000000c4U
/* GENERALPURPOSEREGISTER12: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR12_GENERALPURPOSEREGISTER12_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR12_GENERALPURPOSEREGISTER12_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR12_GET_GENERALPURPOSEREGISTER12(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER12(s) ((((s)->gpr12) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR12_GENERALPURPOSEREGISTER12_RESET (none)U

/* GPR13: General purpose Register. (Internal register with id = 13)  */
#define GFXREG_CMDSEQ_GPR13 0x000000c8U
/* GENERALPURPOSEREGISTER13: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR13_GENERALPURPOSEREGISTER13_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR13_GENERALPURPOSEREGISTER13_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR13_GET_GENERALPURPOSEREGISTER13(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER13(s) ((((s)->gpr13) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR13_GENERALPURPOSEREGISTER13_RESET (none)U

/* GPR14: General purpose Register. (Internal register with id = 14)  */
#define GFXREG_CMDSEQ_GPR14 0x000000ccU
/* GENERALPURPOSEREGISTER14: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR14_GENERALPURPOSEREGISTER14_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR14_GENERALPURPOSEREGISTER14_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR14_GET_GENERALPURPOSEREGISTER14(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER14(s) ((((s)->gpr14) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR14_GENERALPURPOSEREGISTER14_RESET (none)U

/* GPR15: General purpose Register. (Internal register with id = 15)  */
#define GFXREG_CMDSEQ_GPR15 0x000000d0U
/* GENERALPURPOSEREGISTER15: General Purpose Register used internally for CmdSeq and for synchronization with SW. */
#define GFXREG_CMDSEQ_GPR15_GENERALPURPOSEREGISTER15_FSHIFT 0U
#define GFXREG_CMDSEQ_GPR15_GENERALPURPOSEREGISTER15_FMASK 0xffffffffU
#define GFXREG_CMDSEQ_GPR15_GET_GENERALPURPOSEREGISTER15(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GET_GENERALPURPOSEREGISTER15(s) ((((s)->gpr15) ) & 0xffffffffUL)
#define GFXREG_CMDSEQ_GPR15_GENERALPURPOSEREGISTER15_RESET (none)U

/* SPR0: Special Purpose Register. (Internal register with id = 16)  */
#define GFXREG_CMDSEQ_SPR0 0x000000d4U
/* LINECOUNTERTB0: Holds the scheduled line of the frame that is being executed in TB0. The value of this register is routed outside CmdSeq. */
#define GFXREG_CMDSEQ_SPR0_LINECOUNTERTB0_FSHIFT 0U
#define GFXREG_CMDSEQ_SPR0_LINECOUNTERTB0_FMASK 0xffffU
#define GFXREG_CMDSEQ_SPR0_GET_LINECOUNTERTB0(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_LINECOUNTERTB0(s) ((((s)->spr0) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SPR0_LINECOUNTERTB0_RESET (none)U

/* SPR1: Special Purpose Register (internal register with id = 17) */
#define GFXREG_CMDSEQ_SPR1 0x000000d8U
/* LINECOUNTERTB1: Holds the scheduled line of the frame that is being executed in TB1. The value of this register is routed outside CmdSeq. */
#define GFXREG_CMDSEQ_SPR1_LINECOUNTERTB1_FSHIFT 0U
#define GFXREG_CMDSEQ_SPR1_LINECOUNTERTB1_FMASK 0xffffU
#define GFXREG_CMDSEQ_SPR1_GET_LINECOUNTERTB1(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_LINECOUNTERTB1(s) ((((s)->spr1) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SPR1_LINECOUNTERTB1_RESET (none)U

/* SPR2: Special Purpose Register (internal register with id = 18) */
#define GFXREG_CMDSEQ_SPR2 0x000000dcU
/* LINECOUNTERTB2: Holds the scheduled line of the frame that is being executed in TB2. The value of this register is routed outside CmdSeq. */
#define GFXREG_CMDSEQ_SPR2_LINECOUNTERTB2_FSHIFT 0U
#define GFXREG_CMDSEQ_SPR2_LINECOUNTERTB2_FMASK 0xffffU
#define GFXREG_CMDSEQ_SPR2_GET_LINECOUNTERTB2(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_LINECOUNTERTB2(s) ((((s)->spr2) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SPR2_LINECOUNTERTB2_RESET (none)U

/* SPR3: Special Purpose Register (internal register with id = 19) */
#define GFXREG_CMDSEQ_SPR3 0x000000e0U
/* LINECOUNTERTB3: Holds the scheduled line of the frame that is being executed in TB3. The value of this register is routed outside CmdSeq. */
#define GFXREG_CMDSEQ_SPR3_LINECOUNTERTB3_FSHIFT 0U
#define GFXREG_CMDSEQ_SPR3_LINECOUNTERTB3_FMASK 0xffffU
#define GFXREG_CMDSEQ_SPR3_GET_LINECOUNTERTB3(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_LINECOUNTERTB3(s) ((((s)->spr3) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SPR3_LINECOUNTERTB3_RESET (none)U

/* SPR4: Special Purpose Register (internal register with id = 20) */
#define GFXREG_CMDSEQ_SPR4 0x000000e4U
/* LINECOUNTERTB4: Holds the scheduled line of the frame that is being executed in TB4. The value of this register is routed outside CmdSeq. */
#define GFXREG_CMDSEQ_SPR4_LINECOUNTERTB4_FSHIFT 0U
#define GFXREG_CMDSEQ_SPR4_LINECOUNTERTB4_FMASK 0xffffU
#define GFXREG_CMDSEQ_SPR4_GET_LINECOUNTERTB4(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_LINECOUNTERTB4(s) ((((s)->spr4) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SPR4_LINECOUNTERTB4_RESET (none)U

/* SPR5: Special Purpose Register (internal register with id = 21) */
#define GFXREG_CMDSEQ_SPR5 0x000000e8U
/* LINECOUNTERTB5: Holds the scheduled line of the frame that is being executed in TB5. The value of this register is routed outside CmdSeq. */
#define GFXREG_CMDSEQ_SPR5_LINECOUNTERTB5_FSHIFT 0U
#define GFXREG_CMDSEQ_SPR5_LINECOUNTERTB5_FMASK 0xffffU
#define GFXREG_CMDSEQ_SPR5_GET_LINECOUNTERTB5(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_LINECOUNTERTB5(s) ((((s)->spr5) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SPR5_LINECOUNTERTB5_RESET (none)U

/* SPR6: Special Purpose Register (internal register with id = 22) */
#define GFXREG_CMDSEQ_SPR6 0x000000ecU
/* LINECOUNTERTB6: Holds the scheduled line of the frame that is being executed in TB6. The value of this register is routed outside CmdSeq. */
#define GFXREG_CMDSEQ_SPR6_LINECOUNTERTB6_FSHIFT 0U
#define GFXREG_CMDSEQ_SPR6_LINECOUNTERTB6_FMASK 0xffffU
#define GFXREG_CMDSEQ_SPR6_GET_LINECOUNTERTB6(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_LINECOUNTERTB6(s) ((((s)->spr6) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SPR6_LINECOUNTERTB6_RESET (none)U

/* SPR7: Special Purpose Register (internal register with id = 23) */
#define GFXREG_CMDSEQ_SPR7 0x000000f0U
/* LINECOUNTERTB7: Holds the scheduled line of the frame that is being executed in TB7. The value of this register is routed outside CmdSeq. */
#define GFXREG_CMDSEQ_SPR7_LINECOUNTERTB7_FSHIFT 0U
#define GFXREG_CMDSEQ_SPR7_LINECOUNTERTB7_FMASK 0xffffU
#define GFXREG_CMDSEQ_SPR7_GET_LINECOUNTERTB7(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_CMDSEQ_GET_LINECOUNTERTB7(s) ((((s)->spr7) ) & 0xffffUL)
#define GFXREG_CMDSEQ_SPR7_LINECOUNTERTB7_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_CMDSEQ_REGISTER_H */

