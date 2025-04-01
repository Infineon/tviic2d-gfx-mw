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
 * \version     0.1
 * \date        Thu Sep 24 07:57:03 2020
 * \file        gfxreg_vram_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   vram
 *              Source:   vram.component.xml
 *              Template: component_h.tpl
 * \brief      Iris vram register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_VRAM_REGISTER_H
#define GFXREG_VRAM_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* vram registers */
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


/* ARBITER_PRIORITY: Assigns arbitration priorities to each of the read/write ports. A port with a higher priority will always win over a port with a lower one. Ports having same priority will be round-robin arbitrated. The arbitration winner is determined based on the current bank arbitration state and the access requests from the slave interfaces.  The state machine tries to execute the round robin access sequence of S0 Write, S0 Read, S1 Read, S2 Read, S3 Read and S4 Read. If the preferred interface is not requesting, then the state machine skips to the next requesting interface. Currently 04 priority levels i.e. 0,1,2,3 are being supported. In order to represent 04 priority levels we need 2 bits.  As a result for each port there are two bits reserved in the arbiter_priority register. In priority levels, 3 represents the highest priority and 0 represents the lowest priority.  On reset, all ports will have same priority value of 0.     */
#define GFXREG_VRAM_ARBITER_PRIORITY 0x00000000U
/* PRIORITY_WR0: Priority for write slave interfaces 0. */
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_WR0_FSHIFT 0U
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_WR0_FMASK 0x3U
#define GFXREG_VRAM_ARBITER_PRIORITY_SETM_PRIORITY_WR0(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_VRAM_ARBITER_PRIORITY_SET_PRIORITY_WR0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VRAM_ARBITER_PRIORITY_GET_PRIORITY_WR0(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_VRAM_SETM_PRIORITY_WR0(s,val) ( (s)->arbiter_priority = ((s)->arbiter_priority & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_VRAM_SET_PRIORITY_WR0(s,val)  ( (s)->arbiter_priority = (((s)->arbiter_priority & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VRAM_GET_PRIORITY_WR0(s) ((((s)->arbiter_priority) ) & 0x3UL)
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_WR0_RESET 0U

/* PRIORITY_WR1: Priority for write slave interfaces 1. */
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_WR1_FSHIFT 2U
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_WR1_FMASK 0x3U
#define GFXREG_VRAM_ARBITER_PRIORITY_SETM_PRIORITY_WR1(val) (((CYGFX_U32)(val) & 0x3UL) << 2U)
#define GFXREG_VRAM_ARBITER_PRIORITY_SET_PRIORITY_WR1(val) (((CYGFX_U32)(val) << 2U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VRAM_ARBITER_PRIORITY_GET_PRIORITY_WR1(val) (((CYGFX_U32)(val) >> 2U) & 0x3UL)
#define GFXREG_VRAM_SETM_PRIORITY_WR1(s,val) ( (s)->arbiter_priority = ((s)->arbiter_priority & ~0xcUL) | (((CYGFX_U32)(val) << 2U) & 0xcUL) )
#define GFXREG_VRAM_SET_PRIORITY_WR1(s,val)  ( (s)->arbiter_priority = (((s)->arbiter_priority & ~0xcUL) | ((CYGFX_U32)(val) << 2U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VRAM_GET_PRIORITY_WR1(s) ((((s)->arbiter_priority) >> 2U) & 0x3UL)
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_WR1_RESET 0U

/* PRIORITY_RD0: Priority for read slave interface 0. */
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD0_FSHIFT 8U
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD0_FMASK 0x3U
#define GFXREG_VRAM_ARBITER_PRIORITY_SETM_PRIORITY_RD0(val) (((CYGFX_U32)(val) & 0x3UL) << 8U)
#define GFXREG_VRAM_ARBITER_PRIORITY_SET_PRIORITY_RD0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VRAM_ARBITER_PRIORITY_GET_PRIORITY_RD0(val) (((CYGFX_U32)(val) >> 8U) & 0x3UL)
#define GFXREG_VRAM_SETM_PRIORITY_RD0(s,val) ( (s)->arbiter_priority = ((s)->arbiter_priority & ~0x300UL) | (((CYGFX_U32)(val) << 8U) & 0x300UL) )
#define GFXREG_VRAM_SET_PRIORITY_RD0(s,val)  ( (s)->arbiter_priority = (((s)->arbiter_priority & ~0x300UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VRAM_GET_PRIORITY_RD0(s) ((((s)->arbiter_priority) >> 8U) & 0x3UL)
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD0_RESET 0U

/* PRIORITY_RD1: Priority for read slave interface 1. */
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD1_FSHIFT 12U
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD1_FMASK 0x3U
#define GFXREG_VRAM_ARBITER_PRIORITY_SETM_PRIORITY_RD1(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_VRAM_ARBITER_PRIORITY_SET_PRIORITY_RD1(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VRAM_ARBITER_PRIORITY_GET_PRIORITY_RD1(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_VRAM_SETM_PRIORITY_RD1(s,val) ( (s)->arbiter_priority = ((s)->arbiter_priority & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_VRAM_SET_PRIORITY_RD1(s,val)  ( (s)->arbiter_priority = (((s)->arbiter_priority & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VRAM_GET_PRIORITY_RD1(s) ((((s)->arbiter_priority) >> 12U) & 0x3UL)
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD1_RESET 0U

/* PRIORITY_RD2: Priority for read slave interface 2. */
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD2_FSHIFT 16U
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD2_FMASK 0x3U
#define GFXREG_VRAM_ARBITER_PRIORITY_SETM_PRIORITY_RD2(val) (((CYGFX_U32)(val) & 0x3UL) << 16U)
#define GFXREG_VRAM_ARBITER_PRIORITY_SET_PRIORITY_RD2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VRAM_ARBITER_PRIORITY_GET_PRIORITY_RD2(val) (((CYGFX_U32)(val) >> 16U) & 0x3UL)
#define GFXREG_VRAM_SETM_PRIORITY_RD2(s,val) ( (s)->arbiter_priority = ((s)->arbiter_priority & ~0x30000UL) | (((CYGFX_U32)(val) << 16U) & 0x30000UL) )
#define GFXREG_VRAM_SET_PRIORITY_RD2(s,val)  ( (s)->arbiter_priority = (((s)->arbiter_priority & ~0x30000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VRAM_GET_PRIORITY_RD2(s) ((((s)->arbiter_priority) >> 16U) & 0x3UL)
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD2_RESET 0U

/* PRIORITY_RD3: Priority for read slave interface 3. */
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD3_FSHIFT 20U
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD3_FMASK 0x3U
#define GFXREG_VRAM_ARBITER_PRIORITY_SETM_PRIORITY_RD3(val) (((CYGFX_U32)(val) & 0x3UL) << 20U)
#define GFXREG_VRAM_ARBITER_PRIORITY_SET_PRIORITY_RD3(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VRAM_ARBITER_PRIORITY_GET_PRIORITY_RD3(val) (((CYGFX_U32)(val) >> 20U) & 0x3UL)
#define GFXREG_VRAM_SETM_PRIORITY_RD3(s,val) ( (s)->arbiter_priority = ((s)->arbiter_priority & ~0x300000UL) | (((CYGFX_U32)(val) << 20U) & 0x300000UL) )
#define GFXREG_VRAM_SET_PRIORITY_RD3(s,val)  ( (s)->arbiter_priority = (((s)->arbiter_priority & ~0x300000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VRAM_GET_PRIORITY_RD3(s) ((((s)->arbiter_priority) >> 20U) & 0x3UL)
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD3_RESET 0U

/* PRIORITY_RD4: Priority for read slave interface 4. */
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD4_FSHIFT 24U
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD4_FMASK 0x3U
#define GFXREG_VRAM_ARBITER_PRIORITY_SETM_PRIORITY_RD4(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_VRAM_ARBITER_PRIORITY_SET_PRIORITY_RD4(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VRAM_ARBITER_PRIORITY_GET_PRIORITY_RD4(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_VRAM_SETM_PRIORITY_RD4(s,val) ( (s)->arbiter_priority = ((s)->arbiter_priority & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_VRAM_SET_PRIORITY_RD4(s,val)  ( (s)->arbiter_priority = (((s)->arbiter_priority & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VRAM_GET_PRIORITY_RD4(s) ((((s)->arbiter_priority) >> 24U) & 0x3UL)
#define GFXREG_VRAM_ARBITER_PRIORITY_PRIORITY_RD4_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_VRAM_REGISTER_H */

