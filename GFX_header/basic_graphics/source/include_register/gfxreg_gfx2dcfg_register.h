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
 * \date        Tue May 26 11:58:42 2020
 * \file        gfxreg_gfx2dcfg_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   gfx2dcfg
 *              Source:   gfx2dcfg.component.xml
 *              Template: component_h.tpl
 * \brief      Iris gfx2dcfg register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_GFX2DCFG_REGISTER_H
#define GFXREG_GFX2DCFG_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* gfx2dcfg registers */
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


/* INTR_GFX2D: Interrupt cause register  */
#define GFXREG_GFX2DCFG_INTR_GFX2D 0x00000020U
/* INTR_GFX2D: Interrupt status vector. A bit is set when the related event occurs or the corresponding bit of INTR_GFX2D_SET is written. By writing 1 the corresponding bit is cleared. */
#define GFXREG_GFX2DCFG_INTR_GFX2D_INTR_GFX2D_FSHIFT 0U
#define GFXREG_GFX2DCFG_INTR_GFX2D_INTR_GFX2D_FMASK 0xffffffU
#define GFXREG_GFX2DCFG_INTR_GFX2D_SETM_INTR_GFX2D(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_GFX2DCFG_INTR_GFX2D_SET_INTR_GFX2D(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_GFX2DCFG_INTR_GFX2D_GET_INTR_GFX2D(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_GFX2DCFG_SETM_INTR_GFX2D(s,val) ( (s)->intr_gfx2d = ((s)->intr_gfx2d & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_GFX2DCFG_SET_INTR_GFX2D(s,val)  ( (s)->intr_gfx2d = (((s)->intr_gfx2d & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_GFX2DCFG_GET_INTR_GFX2D(s) ((((s)->intr_gfx2d) ) & 0xffffffUL)
#define GFXREG_GFX2DCFG_INTR_GFX2D_INTR_GFX2D_RESET 0U

/* INTR_GFX2D_SET: Interrupt set register  */
#define GFXREG_GFX2DCFG_INTR_GFX2D_SET 0x00000024U
/* INTR_GFX2D_SET: Interrupt set vector. Writing a 1 to this field sets the corresponding bit of INTR_GFX2D. */
#define GFXREG_GFX2DCFG_INTR_GFX2D_SET_INTR_GFX2D_SET_FSHIFT 0U
#define GFXREG_GFX2DCFG_INTR_GFX2D_SET_INTR_GFX2D_SET_FMASK 0xffffffU
#define GFXREG_GFX2DCFG_INTR_GFX2D_SET_SETM_INTR_GFX2D_SET(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_GFX2DCFG_INTR_GFX2D_SET_SET_INTR_GFX2D_SET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_GFX2DCFG_SETM_INTR_GFX2D_SET(s,val) ( (s)->intr_gfx2d_set = ((s)->intr_gfx2d_set & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_GFX2DCFG_SET_INTR_GFX2D_SET(s,val)  ( (s)->intr_gfx2d_set = (((s)->intr_gfx2d_set & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_GFX2DCFG_INTR_GFX2D_SET_INTR_GFX2D_SET_RESET 0U

/* INTR_GFX2D_MASK: Interrupt mask register  */
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASK 0x00000028U
/* INTR_GFX2D_MASK: Interrupt mask vector. Please note that this enable vector does not affect the INTR0 register field. It only affects INTR_GFX2D_MASKED. */
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASK_INTR_GFX2D_MASK_FSHIFT 0U
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASK_INTR_GFX2D_MASK_FMASK 0xffffffU
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASK_SETM_INTR_GFX2D_MASK(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASK_SET_INTR_GFX2D_MASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASK_GET_INTR_GFX2D_MASK(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_GFX2DCFG_SETM_INTR_GFX2D_MASK(s,val) ( (s)->intr_gfx2d_mask = ((s)->intr_gfx2d_mask & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_GFX2DCFG_SET_INTR_GFX2D_MASK(s,val)  ( (s)->intr_gfx2d_mask = (((s)->intr_gfx2d_mask & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_GFX2DCFG_GET_INTR_GFX2D_MASK(s) ((((s)->intr_gfx2d_mask) ) & 0xffffffUL)
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASK_INTR_GFX2D_MASK_RESET 0U

/* INTR_GFX2D_MASKED: Interrupt masked register  */
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASKED 0x0000002cU
/* INTR_GFX2D_MASKED: Status vector that generates the interrupt to the CPU if at least one bit of this field is set. This field corresponds to the bit-wise AND between INTR_GFX2D and INTR_GFX2D_MASK fields. */
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASKED_INTR_GFX2D_MASKED_FSHIFT 0U
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASKED_INTR_GFX2D_MASKED_FMASK 0xffffffU
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASKED_GET_INTR_GFX2D_MASKED(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_GFX2DCFG_GET_INTR_GFX2D_MASKED(s) ((((s)->intr_gfx2d_masked) ) & 0xffffffUL)
#define GFXREG_GFX2DCFG_INTR_GFX2D_MASKED_INTR_GFX2D_MASKED_RESET (none)U

/* INTR_CMDSEQ: Interrupt cause register for CmdSeq */
#define GFXREG_GFX2DCFG_INTR_CMDSEQ 0x00000030U
/* INTR_CMDSEQ: Interrupt status vector. A bit is set when the related event occurs or the corresponding bit of INTR_CMDSEQ_SET is written. By writing 1 the corresponding bit is cleared. */
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_INTR_CMDSEQ_FSHIFT 0U
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_INTR_CMDSEQ_FMASK 0x3fffffU
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_SETM_INTR_CMDSEQ(val) (((CYGFX_U32)(val) & 0x3fffffUL) )
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_SET_INTR_CMDSEQ(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffUL, __FILE__, __LINE__))
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_GET_INTR_CMDSEQ(val) (((CYGFX_U32)(val) ) & 0x3fffffUL)
#define GFXREG_GFX2DCFG_SETM_INTR_CMDSEQ(s,val) ( (s)->intr_cmdseq = ((s)->intr_cmdseq & ~0x3fffffUL) | (((CYGFX_U32)(val) ) & 0x3fffffUL) )
#define GFXREG_GFX2DCFG_SET_INTR_CMDSEQ(s,val)  ( (s)->intr_cmdseq = (((s)->intr_cmdseq & ~0x3fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffUL, __FILE__, __LINE__) )
#define GFXREG_GFX2DCFG_GET_INTR_CMDSEQ(s) ((((s)->intr_cmdseq) ) & 0x3fffffUL)
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_INTR_CMDSEQ_RESET 0U

/* INTR_CMDSEQ_SET: Interrupt set register  */
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_SET 0x00000034U
/* INTR_CMDSEQ_SET: Interrupt set vector. Writing a 1 to this field sets the corresponding bit of INTR_CMDSEQ. */
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_SET_INTR_CMDSEQ_SET_FSHIFT 0U
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_SET_INTR_CMDSEQ_SET_FMASK 0x3fffffU
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_SET_SETM_INTR_CMDSEQ_SET(val) (((CYGFX_U32)(val) & 0x3fffffUL) )
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_SET_SET_INTR_CMDSEQ_SET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffUL, __FILE__, __LINE__))
#define GFXREG_GFX2DCFG_SETM_INTR_CMDSEQ_SET(s,val) ( (s)->intr_cmdseq_set = ((s)->intr_cmdseq_set & ~0x3fffffUL) | (((CYGFX_U32)(val) ) & 0x3fffffUL) )
#define GFXREG_GFX2DCFG_SET_INTR_CMDSEQ_SET(s,val)  ( (s)->intr_cmdseq_set = (((s)->intr_cmdseq_set & ~0x3fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffUL, __FILE__, __LINE__) )
#define GFXREG_GFX2DCFG_INTR_CMDSEQ_SET_INTR_CMDSEQ_SET_RESET 0U



/* GENERALPURPOSE: General purpose config memory */
#define GFXREG_GFX2DCFG_GENERALPURPOSE 0x00000040U
/* GENERALPURPOSE: General purpose config memory entry, does not have any function. */
#define GFXREG_GFX2DCFG_GENERALPURPOSE_GENERALPURPOSE_FSHIFT 0U
#define GFXREG_GFX2DCFG_GENERALPURPOSE_GENERALPURPOSE_FMASK 0xffffffffU
#define GFXREG_GFX2DCFG_GENERALPURPOSE_SETM_GENERALPURPOSE(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_GFX2DCFG_GENERALPURPOSE_SET_GENERALPURPOSE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_GFX2DCFG_GENERALPURPOSE_GET_GENERALPURPOSE(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFX2DCFG_SETM_GENERALPURPOSE(s,val) ( (s)->generalpurpose = ((s)->generalpurpose & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_GFX2DCFG_SET_GENERALPURPOSE(s,val)  ( (s)->generalpurpose = (((s)->generalpurpose & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_GFX2DCFG_GET_GENERALPURPOSE(s) ((((s)->generalpurpose) ) & 0xffffffffUL)
#define GFXREG_GFX2DCFG_GENERALPURPOSE_GENERALPURPOSE_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_GFX2DCFG_REGISTER_H */

