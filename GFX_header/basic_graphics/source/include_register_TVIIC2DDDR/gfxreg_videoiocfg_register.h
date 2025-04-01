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
 * \version     1.0
 * \date        Mon Jul 05 13:05:16 2021
 * \file        gfxreg_videoiocfg_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   videoiocfg
 *              Source:   videoiocfg.component.xml
 *              Template: component_h.tpl
 * \brief      Iris videoiocfg register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_VIDEOIOCFG_REGISTER_H
#define GFXREG_VIDEOIOCFG_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* videoiocfg registers */
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


/* INTR_VIDEOIO0: Interrupt status register 0 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0 0x00000000U
/* INTR_VIDEOIO0: Interrupt status vector. A bit is set when the related event occurs or the corresponding bit of INTR_VIDEOIO0_SET is written. By writing 1 the corresponding bit is cleared. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_INTR_VIDEOIO0_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_INTR_VIDEOIO0_FMASK 0xffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SETM_INTR_VIDEOIO0(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SET_INTR_VIDEOIO0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_GET_INTR_VIDEOIO0(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO0(s,val) ( (s)->intr_videoio0 = ((s)->intr_videoio0 & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO0(s,val)  ( (s)->intr_videoio0 = (((s)->intr_videoio0 & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO0(s) ((((s)->intr_videoio0) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_INTR_VIDEOIO0_RESET 0U

/* INTR_VIDEOIO1: Interrupt Status register 1 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1 0x00000004U
/* INTR_VIDEOIO1: Interrupt status vector. A bit is set when the related event occurs or the corresponding bit of INTR_VIDEOIO0_SET is written. By writing 1 the corresponding bit is cleared. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_INTR_VIDEOIO1_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_INTR_VIDEOIO1_FMASK 0xffffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SETM_INTR_VIDEOIO1(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SET_INTR_VIDEOIO1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_GET_INTR_VIDEOIO1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO1(s,val) ( (s)->intr_videoio1 = ((s)->intr_videoio1 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO1(s,val)  ( (s)->intr_videoio1 = (((s)->intr_videoio1 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO1(s) ((((s)->intr_videoio1) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_INTR_VIDEOIO1_RESET 0U

/* INTR_VIDEOIO0_SET: Interrupt set register 0 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SET 0x00000008U
/* INTR_VIDEOIO0_SET: Interrupt set vector. Writing a 1 to this fields sets status in INTR_VIDEOIO0. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SET_INTR_VIDEOIO0_SET_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SET_INTR_VIDEOIO0_SET_FMASK 0xffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SET_SETM_INTR_VIDEOIO0_SET(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SET_SET_INTR_VIDEOIO0_SET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO0_SET(s,val) ( (s)->intr_videoio0_set = ((s)->intr_videoio0_set & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO0_SET(s,val)  ( (s)->intr_videoio0_set = (((s)->intr_videoio0_set & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SET_INTR_VIDEOIO0_SET_RESET (none)U

/* INTR_VIDEOIO1_SET: Interrupt set register 1 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SET 0x0000000cU
/* INTR_VIDEOIO1_SET: Interrupt set vector. Writing a 1 to this fields sets status in INTR_VIDEOIO1. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SET_INTR_VIDEOIO1_SET_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SET_INTR_VIDEOIO1_SET_FMASK 0xffffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SET_SETM_INTR_VIDEOIO1_SET(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SET_SET_INTR_VIDEOIO1_SET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO1_SET(s,val) ( (s)->intr_videoio1_set = ((s)->intr_videoio1_set & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO1_SET(s,val)  ( (s)->intr_videoio1_set = (((s)->intr_videoio1_set & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SET_INTR_VIDEOIO1_SET_RESET (none)U

/* INTR_VIDEOIO0_MASK: Interrupt mask register 0 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASK 0x00000010U
/* INTR_VIDEOIO0_MASK: Interrupt mask vector. When a bit is set in this field, the related INTR_VIDEOIO0 status activates the interrupt signal. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASK_INTR_VIDEOIO0_MASK_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASK_INTR_VIDEOIO0_MASK_FMASK 0xffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASK_SETM_INTR_VIDEOIO0_MASK(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASK_SET_INTR_VIDEOIO0_MASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASK_GET_INTR_VIDEOIO0_MASK(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO0_MASK(s,val) ( (s)->intr_videoio0_mask = ((s)->intr_videoio0_mask & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO0_MASK(s,val)  ( (s)->intr_videoio0_mask = (((s)->intr_videoio0_mask & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO0_MASK(s) ((((s)->intr_videoio0_mask) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASK_INTR_VIDEOIO0_MASK_RESET 0U

/* INTR_VIDEOIO1_MASK: Interrupt mask register 1 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASK 0x00000014U
/* INTR_VIDEOIO1_MASK: Interrupt mask vector. When a bit is set in this field, the related INTR_VIDEOIO1 status activates the interrupt signal. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASK_INTR_VIDEOIO1_MASK_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASK_INTR_VIDEOIO1_MASK_FMASK 0xffffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASK_SETM_INTR_VIDEOIO1_MASK(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASK_SET_INTR_VIDEOIO1_MASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASK_GET_INTR_VIDEOIO1_MASK(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO1_MASK(s,val) ( (s)->intr_videoio1_mask = ((s)->intr_videoio1_mask & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO1_MASK(s,val)  ( (s)->intr_videoio1_mask = (((s)->intr_videoio1_mask & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO1_MASK(s) ((((s)->intr_videoio1_mask) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASK_INTR_VIDEOIO1_MASK_RESET 0U

/* INTR_VIDEOIO0_MASKED: Interrupt masked register 0 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASKED 0x00000018U
/* INTR_VIDEOIO0_MASKED: Status vector INTR_VIDEOIO0 masked with INTR_VIDEOIO0_MASK. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASKED_INTR_VIDEOIO0_MASKED_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASKED_INTR_VIDEOIO0_MASKED_FMASK 0xffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASKED_GET_INTR_VIDEOIO0_MASKED(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO0_MASKED(s) ((((s)->intr_videoio0_masked) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_MASKED_INTR_VIDEOIO0_MASKED_RESET (none)U

/* INTR_VIDEOIO1_MASKED: Interrupt masked register 1 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASKED 0x0000001cU
/* INTR_VIDEOIO1_MASKED: Status vector INTR_VIDEOIO1 masked with INTR_VIDEOIO1_MASK. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASKED_INTR_VIDEOIO1_MASKED_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASKED_INTR_VIDEOIO1_MASKED_FMASK 0xffffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASKED_GET_INTR_VIDEOIO1_MASKED(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO1_MASKED(s) ((((s)->intr_videoio1_masked) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_MASKED_INTR_VIDEOIO1_MASKED_RESET (none)U



/* INTR_VIDEOIO0_SAFETY: Interrupt Status register 0 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY 0x00000020U
/* INTR_VIDEOIO0_SAFETY: Interrupt status vector. A bit is set when the related event occurs or the corresponding bit of INTR_VIDEOIO0_SET is written. By writing 1 the corresponding bit is cleared. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_INTR_VIDEOIO0_SAFETY_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_INTR_VIDEOIO0_SAFETY_FMASK 0xffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_SETM_INTR_VIDEOIO0_SAFETY(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_SET_INTR_VIDEOIO0_SAFETY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_GET_INTR_VIDEOIO0_SAFETY(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO0_SAFETY(s,val) ( (s)->intr_videoio0_safety = ((s)->intr_videoio0_safety & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO0_SAFETY(s,val)  ( (s)->intr_videoio0_safety = (((s)->intr_videoio0_safety & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO0_SAFETY(s) ((((s)->intr_videoio0_safety) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_INTR_VIDEOIO0_SAFETY_RESET 0U

/* INTR_VIDEOIO1_SAFETY: Interrupt Status register 1 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY 0x00000024U
/* INTR_VIDEOIO1_SAFETY: Interrupt status vector. A bit is set when the related event occurs or the corresponding bit of INTR_VIDEOIO0_SET is written. By writing 1 the corresponding bit is cleared. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_INTR_VIDEOIO1_SAFETY_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_INTR_VIDEOIO1_SAFETY_FMASK 0xffffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_SETM_INTR_VIDEOIO1_SAFETY(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_SET_INTR_VIDEOIO1_SAFETY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_GET_INTR_VIDEOIO1_SAFETY(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO1_SAFETY(s,val) ( (s)->intr_videoio1_safety = ((s)->intr_videoio1_safety & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO1_SAFETY(s,val)  ( (s)->intr_videoio1_safety = (((s)->intr_videoio1_safety & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO1_SAFETY(s) ((((s)->intr_videoio1_safety) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_INTR_VIDEOIO1_SAFETY_RESET 0U

/* INTR_VIDEOIO0_SAFETY_SET: Interrupt set register 0 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_SET 0x00000028U
/* INTR_VIDEOIO0_SAFETY_SET: Interrupt set vector. Writing a 1 to this fields sets status in INTR_VIDEOIO0_SAFETY. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_SET_INTR_VIDEOIO0_SAFETY_SET_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_SET_INTR_VIDEOIO0_SAFETY_SET_FMASK 0xffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_SET_SETM_INTR_VIDEOIO0_SAFETY_SET(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_SET_SET_INTR_VIDEOIO0_SAFETY_SET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO0_SAFETY_SET(s,val) ( (s)->intr_videoio0_safety_set = ((s)->intr_videoio0_safety_set & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO0_SAFETY_SET(s,val)  ( (s)->intr_videoio0_safety_set = (((s)->intr_videoio0_safety_set & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_SET_INTR_VIDEOIO0_SAFETY_SET_RESET (none)U

/* INTR_VIDEOIO1_SAFETY_SET: Interrupt set register 1 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_SET 0x0000002cU
/* INTR_VIDEOIO1_SAFETY_SET: Interrupt set vector. Writing a 1 to this fields sets status in INTR_VIDEOIO1_SAFETY. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_SET_INTR_VIDEOIO1_SAFETY_SET_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_SET_INTR_VIDEOIO1_SAFETY_SET_FMASK 0xffffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_SET_SETM_INTR_VIDEOIO1_SAFETY_SET(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_SET_SET_INTR_VIDEOIO1_SAFETY_SET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO1_SAFETY_SET(s,val) ( (s)->intr_videoio1_safety_set = ((s)->intr_videoio1_safety_set & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO1_SAFETY_SET(s,val)  ( (s)->intr_videoio1_safety_set = (((s)->intr_videoio1_safety_set & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_SET_INTR_VIDEOIO1_SAFETY_SET_RESET (none)U

/* INTR_VIDEOIO0_SAFETY_MASK: Interrupt mask register 0 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASK 0x00000030U
/* INTR_VIDEOIO0_SAFETY_MASK: Interrupt mask vector. When a bit is set in this field, the related INTR_VIDEOIO0_SAFETY status activates the interrupt_safety signal. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASK_INTR_VIDEOIO0_SAFETY_MASK_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASK_INTR_VIDEOIO0_SAFETY_MASK_FMASK 0xffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASK_SETM_INTR_VIDEOIO0_SAFETY_MASK(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASK_SET_INTR_VIDEOIO0_SAFETY_MASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASK_GET_INTR_VIDEOIO0_SAFETY_MASK(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO0_SAFETY_MASK(s,val) ( (s)->intr_videoio0_safety_mask = ((s)->intr_videoio0_safety_mask & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO0_SAFETY_MASK(s,val)  ( (s)->intr_videoio0_safety_mask = (((s)->intr_videoio0_safety_mask & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO0_SAFETY_MASK(s) ((((s)->intr_videoio0_safety_mask) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASK_INTR_VIDEOIO0_SAFETY_MASK_RESET 0U

/* INTR_VIDEOIO1_SAFETY_MASK: Interrupt mask register 1 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASK 0x00000034U
/* INTR_VIDEOIO1_SAFETY_MASK: Interrupt mask vector. When a bit is set in this field, the related INTR_VIDEOIO1_SAFETY status activates the interrupt_safety signal. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASK_INTR_VIDEOIO1_SAFETY_MASK_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASK_INTR_VIDEOIO1_SAFETY_MASK_FMASK 0xffffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASK_SETM_INTR_VIDEOIO1_SAFETY_MASK(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASK_SET_INTR_VIDEOIO1_SAFETY_MASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASK_GET_INTR_VIDEOIO1_SAFETY_MASK(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_SETM_INTR_VIDEOIO1_SAFETY_MASK(s,val) ( (s)->intr_videoio1_safety_mask = ((s)->intr_videoio1_safety_mask & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_VIDEOIOCFG_SET_INTR_VIDEOIO1_SAFETY_MASK(s,val)  ( (s)->intr_videoio1_safety_mask = (((s)->intr_videoio1_safety_mask & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO1_SAFETY_MASK(s) ((((s)->intr_videoio1_safety_mask) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASK_INTR_VIDEOIO1_SAFETY_MASK_RESET 0U

/* INTR_VIDEOIO0_SAFETY_MASKED: Interrupt masked register 0 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASKED 0x00000038U
/* INTR_VIDEOIO0_SAFETY_MASKED: Status vector INTR_VIDEOIO0_SAFETY masked with INTR_MASK_SAFETY0. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASKED_INTR_VIDEOIO0_SAFETY_MASKED_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASKED_INTR_VIDEOIO0_SAFETY_MASKED_FMASK 0xffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASKED_GET_INTR_VIDEOIO0_SAFETY_MASKED(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO0_SAFETY_MASKED(s) ((((s)->intr_videoio0_safety_masked) ) & 0xffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO0_SAFETY_MASKED_INTR_VIDEOIO0_SAFETY_MASKED_RESET (none)U

/* INTR_VIDEOIO1_SAFETY_MASKED: Interrupt masked register 1 */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASKED 0x0000003cU
/* INTR_VIDEOIO1_SAFETY_MASKED: Status vector INTR_VIDEOIO1_SAFETY masked with INTR_MASK_SAFETY1. */
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASKED_INTR_VIDEOIO1_SAFETY_MASKED_FSHIFT 0U
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASKED_INTR_VIDEOIO1_SAFETY_MASKED_FMASK 0xffffffffU
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASKED_GET_INTR_VIDEOIO1_SAFETY_MASKED(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_GET_INTR_VIDEOIO1_SAFETY_MASKED(s) ((((s)->intr_videoio1_safety_masked) ) & 0xffffffffUL)
#define GFXREG_VIDEOIOCFG_INTR_VIDEOIO1_SAFETY_MASKED_INTR_VIDEOIO1_SAFETY_MASKED_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_VIDEOIOCFG_REGISTER_H */

