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
 * \version     3.00
 * \date        Tue May 26 11:58:41 2020
 * \file        gfxreg_matrix_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   matrix
 *              Source:   matrix.component.xml
 *              Template: component_h.tpl
 * \brief      Iris matrix register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_MATRIX_REGISTER_H
#define GFXREG_MATRIX_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* matrix registers */
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


/* STATICCONTROL: Color Matrix static control register */
#define GFXREG_MATRIX_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_MATRIX_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_MATRIX_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_MATRIX_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_MATRIX_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_MATRIX_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_MATRIX_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_MATRIX_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_MATRIX_STATICCONTROL_SHDEN_RESET 0U

/* CONTROL: Color Matrix control register */
#define GFXREG_MATRIX_CONTROL 0x00000004U
/* MODE: Operation mode for color matrix  */
#define GFXREG_MATRIX_CONTROL_MODE_FSHIFT 0U
#define GFXREG_MATRIX_CONTROL_MODE_FMASK 0x3U
#define GFXREG_MATRIX_CONTROL_SETM_MODE(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_MATRIX_CONTROL_SET_MODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_MATRIX_CONTROL_GET_MODE(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_MATRIX_SETM_MODE(s,val) ( (s)->control = ((s)->control & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_MATRIX_SET_MODE(s,val)  ( (s)->control = (((s)->control & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_MODE(s) ((((s)->control) ) & 0x3UL)
#define GFXREG_MATRIX_CONTROL_MODE_NEUTRAL 0x0U /* Module in neutral mode, input data is bypassed */
#define GFXREG_MATRIX_CONTROL_MODE_MATRIX 0x1U /* Module in matrix mode, input data is multiplied with matrix values */
#define GFXREG_MATRIX_CONTROL_MODE_PREMUL 0x2U /* Module in alpha pre-multiplication mode, input color is multiplied with input alpha */
#define GFXREG_MATRIX_CONTROL_MODE_RSVD 0x3U /* Reserved, do not use */
#define GFXREG_MATRIX_CONTROL_MODE_RESET 0x0U

/* ALPHAMASK: Value 1 enables the alpha mask mode. In this mode all pixels with an alpha value smaller than 0.5 are by-passed unchanged. */
#define GFXREG_MATRIX_CONTROL_ALPHAMASK_FSHIFT 4U
#define GFXREG_MATRIX_CONTROL_ALPHAMASK_FMASK 0x1U
#define GFXREG_MATRIX_CONTROL_SETM_ALPHAMASK(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_MATRIX_CONTROL_SET_ALPHAMASK(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_MATRIX_CONTROL_GET_ALPHAMASK(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_MATRIX_SETM_ALPHAMASK(s,val) ( (s)->control = ((s)->control & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_MATRIX_SET_ALPHAMASK(s,val)  ( (s)->control = (((s)->control & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_ALPHAMASK(s) ((((s)->control) >> 4U) & 0x1UL)
#define GFXREG_MATRIX_CONTROL_ALPHAMASK_RESET 0x0U

/* ALPHAINVERT: Value 1 inverts the effect of the alpha mask mode when enabled (pixels with alpha value greater or equal 0.5 are by-passed). */
#define GFXREG_MATRIX_CONTROL_ALPHAINVERT_FSHIFT 5U
#define GFXREG_MATRIX_CONTROL_ALPHAINVERT_FMASK 0x1U
#define GFXREG_MATRIX_CONTROL_SETM_ALPHAINVERT(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_MATRIX_CONTROL_SET_ALPHAINVERT(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_MATRIX_CONTROL_GET_ALPHAINVERT(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_MATRIX_SETM_ALPHAINVERT(s,val) ( (s)->control = ((s)->control & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_MATRIX_SET_ALPHAINVERT(s,val)  ( (s)->control = (((s)->control & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_ALPHAINVERT(s) ((((s)->control) >> 5U) & 0x1UL)
#define GFXREG_MATRIX_CONTROL_ALPHAINVERT_RESET 0x0U

/* RED0: Matrix values for calculation of the red output value. */
#define GFXREG_MATRIX_RED0 0x00000008U
/* A11: Value for red input. */
#define GFXREG_MATRIX_RED0_A11_FSHIFT 0U
#define GFXREG_MATRIX_RED0_A11_FMASK 0x1fffU
#define GFXREG_MATRIX_RED0_SETM_A11(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_RED0_SET_A11(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_RED0_GET_A11(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A11(s,val) ( (s)->red0 = ((s)->red0 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_A11(s,val)  ( (s)->red0 = (((s)->red0 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A11(s) ((((s)->red0) ) & 0x1fffUL)
#define GFXREG_MATRIX_RED0_A11_IWIDTH 3
#define GFXREG_MATRIX_RED0_A11_FWIDTH 10
#define GFXREG_MATRIX_RED0_A11_RESET 0x400U

/* A12: Value for green input. */
#define GFXREG_MATRIX_RED0_A12_FSHIFT 16U
#define GFXREG_MATRIX_RED0_A12_FMASK 0x1fffU
#define GFXREG_MATRIX_RED0_SETM_A12(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_RED0_SET_A12(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_RED0_GET_A12(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A12(s,val) ( (s)->red0 = ((s)->red0 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_A12(s,val)  ( (s)->red0 = (((s)->red0 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A12(s) ((((s)->red0) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_RED0_A12_IWIDTH 3
#define GFXREG_MATRIX_RED0_A12_FWIDTH 10
#define GFXREG_MATRIX_RED0_A12_RESET 0x0U

/* RED1: Matrix values for calculation of the red output value. */
#define GFXREG_MATRIX_RED1 0x0000000cU
/* A13: Value for blue input. */
#define GFXREG_MATRIX_RED1_A13_FSHIFT 0U
#define GFXREG_MATRIX_RED1_A13_FMASK 0x1fffU
#define GFXREG_MATRIX_RED1_SETM_A13(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_RED1_SET_A13(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_RED1_GET_A13(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A13(s,val) ( (s)->red1 = ((s)->red1 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_A13(s,val)  ( (s)->red1 = (((s)->red1 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A13(s) ((((s)->red1) ) & 0x1fffUL)
#define GFXREG_MATRIX_RED1_A13_IWIDTH 3
#define GFXREG_MATRIX_RED1_A13_FWIDTH 10
#define GFXREG_MATRIX_RED1_A13_RESET 0x0U

/* A14: Value for alpha input. */
#define GFXREG_MATRIX_RED1_A14_FSHIFT 16U
#define GFXREG_MATRIX_RED1_A14_FMASK 0x1fffU
#define GFXREG_MATRIX_RED1_SETM_A14(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_RED1_SET_A14(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_RED1_GET_A14(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A14(s,val) ( (s)->red1 = ((s)->red1 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_A14(s,val)  ( (s)->red1 = (((s)->red1 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A14(s) ((((s)->red1) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_RED1_A14_IWIDTH 3
#define GFXREG_MATRIX_RED1_A14_FWIDTH 10
#define GFXREG_MATRIX_RED1_A14_RESET 0x0U

/* GREEN0: Matrix values for calculation of the green output value. */
#define GFXREG_MATRIX_GREEN0 0x00000010U
/* A21: Value for red input. */
#define GFXREG_MATRIX_GREEN0_A21_FSHIFT 0U
#define GFXREG_MATRIX_GREEN0_A21_FMASK 0x1fffU
#define GFXREG_MATRIX_GREEN0_SETM_A21(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_GREEN0_SET_A21(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_GREEN0_GET_A21(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A21(s,val) ( (s)->green0 = ((s)->green0 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_A21(s,val)  ( (s)->green0 = (((s)->green0 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A21(s) ((((s)->green0) ) & 0x1fffUL)
#define GFXREG_MATRIX_GREEN0_A21_IWIDTH 3
#define GFXREG_MATRIX_GREEN0_A21_FWIDTH 10
#define GFXREG_MATRIX_GREEN0_A21_RESET 0x0U

/* A22: Value for green input. */
#define GFXREG_MATRIX_GREEN0_A22_FSHIFT 16U
#define GFXREG_MATRIX_GREEN0_A22_FMASK 0x1fffU
#define GFXREG_MATRIX_GREEN0_SETM_A22(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_GREEN0_SET_A22(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_GREEN0_GET_A22(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A22(s,val) ( (s)->green0 = ((s)->green0 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_A22(s,val)  ( (s)->green0 = (((s)->green0 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A22(s) ((((s)->green0) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_GREEN0_A22_IWIDTH 3
#define GFXREG_MATRIX_GREEN0_A22_FWIDTH 10
#define GFXREG_MATRIX_GREEN0_A22_RESET 0x400U

/* GREEN1: Matrix values for calculation of the green output value. */
#define GFXREG_MATRIX_GREEN1 0x00000014U
/* A23: Value for blue input. */
#define GFXREG_MATRIX_GREEN1_A23_FSHIFT 0U
#define GFXREG_MATRIX_GREEN1_A23_FMASK 0x1fffU
#define GFXREG_MATRIX_GREEN1_SETM_A23(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_GREEN1_SET_A23(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_GREEN1_GET_A23(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A23(s,val) ( (s)->green1 = ((s)->green1 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_A23(s,val)  ( (s)->green1 = (((s)->green1 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A23(s) ((((s)->green1) ) & 0x1fffUL)
#define GFXREG_MATRIX_GREEN1_A23_IWIDTH 3
#define GFXREG_MATRIX_GREEN1_A23_FWIDTH 10
#define GFXREG_MATRIX_GREEN1_A23_RESET 0x0U

/* A24: Value for alpha input. */
#define GFXREG_MATRIX_GREEN1_A24_FSHIFT 16U
#define GFXREG_MATRIX_GREEN1_A24_FMASK 0x1fffU
#define GFXREG_MATRIX_GREEN1_SETM_A24(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_GREEN1_SET_A24(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_GREEN1_GET_A24(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A24(s,val) ( (s)->green1 = ((s)->green1 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_A24(s,val)  ( (s)->green1 = (((s)->green1 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A24(s) ((((s)->green1) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_GREEN1_A24_IWIDTH 3
#define GFXREG_MATRIX_GREEN1_A24_FWIDTH 10
#define GFXREG_MATRIX_GREEN1_A24_RESET 0x0U

/* BLUE0: Matrix values for calculation of the blue output value. */
#define GFXREG_MATRIX_BLUE0 0x00000018U
/* A31: Value for red input. */
#define GFXREG_MATRIX_BLUE0_A31_FSHIFT 0U
#define GFXREG_MATRIX_BLUE0_A31_FMASK 0x1fffU
#define GFXREG_MATRIX_BLUE0_SETM_A31(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_BLUE0_SET_A31(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_BLUE0_GET_A31(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A31(s,val) ( (s)->blue0 = ((s)->blue0 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_A31(s,val)  ( (s)->blue0 = (((s)->blue0 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A31(s) ((((s)->blue0) ) & 0x1fffUL)
#define GFXREG_MATRIX_BLUE0_A31_IWIDTH 3
#define GFXREG_MATRIX_BLUE0_A31_FWIDTH 10
#define GFXREG_MATRIX_BLUE0_A31_RESET 0x0U

/* A32: Value for green input. */
#define GFXREG_MATRIX_BLUE0_A32_FSHIFT 16U
#define GFXREG_MATRIX_BLUE0_A32_FMASK 0x1fffU
#define GFXREG_MATRIX_BLUE0_SETM_A32(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_BLUE0_SET_A32(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_BLUE0_GET_A32(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A32(s,val) ( (s)->blue0 = ((s)->blue0 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_A32(s,val)  ( (s)->blue0 = (((s)->blue0 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A32(s) ((((s)->blue0) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_BLUE0_A32_IWIDTH 3
#define GFXREG_MATRIX_BLUE0_A32_FWIDTH 10
#define GFXREG_MATRIX_BLUE0_A32_RESET 0x0U

/* BLUE1: Matrix values for calculation of the blue output value. */
#define GFXREG_MATRIX_BLUE1 0x0000001cU
/* A33: Value for blue input. */
#define GFXREG_MATRIX_BLUE1_A33_FSHIFT 0U
#define GFXREG_MATRIX_BLUE1_A33_FMASK 0x1fffU
#define GFXREG_MATRIX_BLUE1_SETM_A33(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_BLUE1_SET_A33(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_BLUE1_GET_A33(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A33(s,val) ( (s)->blue1 = ((s)->blue1 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_A33(s,val)  ( (s)->blue1 = (((s)->blue1 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A33(s) ((((s)->blue1) ) & 0x1fffUL)
#define GFXREG_MATRIX_BLUE1_A33_IWIDTH 3
#define GFXREG_MATRIX_BLUE1_A33_FWIDTH 10
#define GFXREG_MATRIX_BLUE1_A33_RESET 0x400U

/* A34: Value for alpha input. */
#define GFXREG_MATRIX_BLUE1_A34_FSHIFT 16U
#define GFXREG_MATRIX_BLUE1_A34_FMASK 0x1fffU
#define GFXREG_MATRIX_BLUE1_SETM_A34(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_BLUE1_SET_A34(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_BLUE1_GET_A34(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A34(s,val) ( (s)->blue1 = ((s)->blue1 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_A34(s,val)  ( (s)->blue1 = (((s)->blue1 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A34(s) ((((s)->blue1) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_BLUE1_A34_IWIDTH 3
#define GFXREG_MATRIX_BLUE1_A34_FWIDTH 10
#define GFXREG_MATRIX_BLUE1_A34_RESET 0x0U

/* ALPHA0: Matrix values for calculation of the alpha output value. */
#define GFXREG_MATRIX_ALPHA0 0x00000020U
/* A41: Value for red input. */
#define GFXREG_MATRIX_ALPHA0_A41_FSHIFT 0U
#define GFXREG_MATRIX_ALPHA0_A41_FMASK 0x1fffU
#define GFXREG_MATRIX_ALPHA0_SETM_A41(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_ALPHA0_SET_A41(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_ALPHA0_GET_A41(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A41(s,val) ( (s)->alpha0 = ((s)->alpha0 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_A41(s,val)  ( (s)->alpha0 = (((s)->alpha0 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A41(s) ((((s)->alpha0) ) & 0x1fffUL)
#define GFXREG_MATRIX_ALPHA0_A41_IWIDTH 3
#define GFXREG_MATRIX_ALPHA0_A41_FWIDTH 10
#define GFXREG_MATRIX_ALPHA0_A41_RESET 0x0U

/* A42: Value for green input. */
#define GFXREG_MATRIX_ALPHA0_A42_FSHIFT 16U
#define GFXREG_MATRIX_ALPHA0_A42_FMASK 0x1fffU
#define GFXREG_MATRIX_ALPHA0_SETM_A42(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_ALPHA0_SET_A42(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_ALPHA0_GET_A42(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A42(s,val) ( (s)->alpha0 = ((s)->alpha0 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_A42(s,val)  ( (s)->alpha0 = (((s)->alpha0 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A42(s) ((((s)->alpha0) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_ALPHA0_A42_IWIDTH 3
#define GFXREG_MATRIX_ALPHA0_A42_FWIDTH 10
#define GFXREG_MATRIX_ALPHA0_A42_RESET 0x0U

/* ALPHA1: Matrix values for calculation of the alpha output value. */
#define GFXREG_MATRIX_ALPHA1 0x00000024U
/* A43: Value for blue input. */
#define GFXREG_MATRIX_ALPHA1_A43_FSHIFT 0U
#define GFXREG_MATRIX_ALPHA1_A43_FMASK 0x1fffU
#define GFXREG_MATRIX_ALPHA1_SETM_A43(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_ALPHA1_SET_A43(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_ALPHA1_GET_A43(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A43(s,val) ( (s)->alpha1 = ((s)->alpha1 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_A43(s,val)  ( (s)->alpha1 = (((s)->alpha1 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A43(s) ((((s)->alpha1) ) & 0x1fffUL)
#define GFXREG_MATRIX_ALPHA1_A43_IWIDTH 3
#define GFXREG_MATRIX_ALPHA1_A43_FWIDTH 10
#define GFXREG_MATRIX_ALPHA1_A43_RESET 0x0U

/* A44: Value for alpha input. */
#define GFXREG_MATRIX_ALPHA1_A44_FSHIFT 16U
#define GFXREG_MATRIX_ALPHA1_A44_FMASK 0x1fffU
#define GFXREG_MATRIX_ALPHA1_SETM_A44(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_ALPHA1_SET_A44(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_ALPHA1_GET_A44(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_A44(s,val) ( (s)->alpha1 = ((s)->alpha1 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_A44(s,val)  ( (s)->alpha1 = (((s)->alpha1 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_A44(s) ((((s)->alpha1) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_ALPHA1_A44_IWIDTH 3
#define GFXREG_MATRIX_ALPHA1_A44_FWIDTH 10
#define GFXREG_MATRIX_ALPHA1_A44_RESET 0x400U

/* OFFSETVECTOR0: Offset vectors for red and green output. */
#define GFXREG_MATRIX_OFFSETVECTOR0 0x00000028U
/* C1: Red output offset. */
#define GFXREG_MATRIX_OFFSETVECTOR0_C1_FSHIFT 0U
#define GFXREG_MATRIX_OFFSETVECTOR0_C1_FMASK 0x1fffU
#define GFXREG_MATRIX_OFFSETVECTOR0_SETM_C1(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_OFFSETVECTOR0_SET_C1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_OFFSETVECTOR0_GET_C1(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_C1(s,val) ( (s)->offsetvector0 = ((s)->offsetvector0 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_C1(s,val)  ( (s)->offsetvector0 = (((s)->offsetvector0 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_C1(s) ((((s)->offsetvector0) ) & 0x1fffUL)
#define GFXREG_MATRIX_OFFSETVECTOR0_C1_RESET 0x0U

/* C2: Green output offset. */
#define GFXREG_MATRIX_OFFSETVECTOR0_C2_FSHIFT 16U
#define GFXREG_MATRIX_OFFSETVECTOR0_C2_FMASK 0x1fffU
#define GFXREG_MATRIX_OFFSETVECTOR0_SETM_C2(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_OFFSETVECTOR0_SET_C2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_OFFSETVECTOR0_GET_C2(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_C2(s,val) ( (s)->offsetvector0 = ((s)->offsetvector0 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_C2(s,val)  ( (s)->offsetvector0 = (((s)->offsetvector0 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_C2(s) ((((s)->offsetvector0) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_OFFSETVECTOR0_C2_RESET 0x0U

/* OFFSETVECTOR1: Offset vectors for blue and alpha output. */
#define GFXREG_MATRIX_OFFSETVECTOR1 0x0000002cU
/* C3: Blue output offset. */
#define GFXREG_MATRIX_OFFSETVECTOR1_C3_FSHIFT 0U
#define GFXREG_MATRIX_OFFSETVECTOR1_C3_FMASK 0x1fffU
#define GFXREG_MATRIX_OFFSETVECTOR1_SETM_C3(val) (((CYGFX_U32)(val) & 0x1fffUL) )
#define GFXREG_MATRIX_OFFSETVECTOR1_SET_C3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_OFFSETVECTOR1_GET_C3(val) (((CYGFX_U32)(val) ) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_C3(s,val) ( (s)->offsetvector1 = ((s)->offsetvector1 & ~0x1fffUL) | (((CYGFX_U32)(val) ) & 0x1fffUL) )
#define GFXREG_MATRIX_SET_C3(s,val)  ( (s)->offsetvector1 = (((s)->offsetvector1 & ~0x1fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_C3(s) ((((s)->offsetvector1) ) & 0x1fffUL)
#define GFXREG_MATRIX_OFFSETVECTOR1_C3_RESET 0x0U

/* C4: Alpha output offset. Note that the 8-bit alpha input is up-scaled to 10-bit, before the matrix and this offset is applied, and down-scaled to 8-bit for output afterwards. */
#define GFXREG_MATRIX_OFFSETVECTOR1_C4_FSHIFT 16U
#define GFXREG_MATRIX_OFFSETVECTOR1_C4_FMASK 0x1fffU
#define GFXREG_MATRIX_OFFSETVECTOR1_SETM_C4(val) (((CYGFX_U32)(val) & 0x1fffUL) << 16U)
#define GFXREG_MATRIX_OFFSETVECTOR1_SET_C4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_MATRIX_OFFSETVECTOR1_GET_C4(val) (((CYGFX_U32)(val) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_SETM_C4(s,val) ( (s)->offsetvector1 = ((s)->offsetvector1 & ~0x1fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1fff0000UL) )
#define GFXREG_MATRIX_SET_C4(s,val)  ( (s)->offsetvector1 = (((s)->offsetvector1 & ~0x1fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_MATRIX_GET_C4(s) ((((s)->offsetvector1) >> 16U) & 0x1fffUL)
#define GFXREG_MATRIX_OFFSETVECTOR1_C4_RESET 0x0U

/* LASTCONTROLWORD: Value of last received control word, for debugging. */
#define GFXREG_MATRIX_LASTCONTROLWORD 0x00000030U
/* L_VAL: Value of last received control word. For debug purposes only, read when stable only, otherwise read data might be corrupted. */
#define GFXREG_MATRIX_LASTCONTROLWORD_L_VAL_FSHIFT 0U
#define GFXREG_MATRIX_LASTCONTROLWORD_L_VAL_FMASK 0xffffffffU
#define GFXREG_MATRIX_LASTCONTROLWORD_GET_L_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_MATRIX_GET_L_VAL(s) ((((s)->lastcontrolword) ) & 0xffffffffUL)
#define GFXREG_MATRIX_LASTCONTROLWORD_L_VAL_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_MATRIX_REGISTER_H */

