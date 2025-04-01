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
 * \date        Mon Jul 05 13:05:15 2021
 * \file        gfxreg_rop_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   rop
 *              Source:   rop.component.xml
 *              Template: component_h.tpl
 * \brief      Iris rop register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_ROP_REGISTER_H
#define GFXREG_ROP_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* rop registers */
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


/* STATICCONTROL: Raster Operation static control register */
#define GFXREG_ROP_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_ROP_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_ROP_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_ROP_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_ROP_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_ROP_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_ROP_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_ROP_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_ROP_STATICCONTROL_SHDEN_RESET 0U

/* CONTROL: Raster Operation control register */
#define GFXREG_ROP_CONTROL 0x00000004U
/* MODE: Operation mode for rop */
#define GFXREG_ROP_CONTROL_MODE_FSHIFT 0U
#define GFXREG_ROP_CONTROL_MODE_FMASK 0x1U
#define GFXREG_ROP_CONTROL_SETM_MODE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_ROP_CONTROL_SET_MODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_ROP_CONTROL_GET_MODE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_ROP_SETM_MODE(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_ROP_SET_MODE(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_MODE(s) ((((s)->control) ) & 0x1UL)
#define GFXREG_ROP_CONTROL_MODE_NEUTRAL 0x0U /* Neutral mode */
#define GFXREG_ROP_CONTROL_MODE_OPERATION 0x1U /* Normal Operation */
#define GFXREG_ROP_CONTROL_MODE_RESET 0x0U

/* ALPHAMODE: Selects the mode for the alpha component channel, has no effect in NEUTRAL mode */
#define GFXREG_ROP_CONTROL_ALPHAMODE_FSHIFT 4U
#define GFXREG_ROP_CONTROL_ALPHAMODE_FMASK 0x1U
#define GFXREG_ROP_CONTROL_SETM_ALPHAMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_ROP_CONTROL_SET_ALPHAMODE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_ROP_CONTROL_GET_ALPHAMODE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_ROP_SETM_ALPHAMODE(s,val) ( (s)->control = ((s)->control & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_ROP_SET_ALPHAMODE(s,val)  ( (s)->control = (((s)->control & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_ALPHAMODE(s) ((((s)->control) >> 4U) & 0x1UL)
#define GFXREG_ROP_CONTROL_ALPHAMODE_ROP 0x0U /* Normal raster operation mode, using the operation index */
#define GFXREG_ROP_CONTROL_ALPHAMODE_ADD 0x1U /* Add mode, adds this component from all enabled inputs, clamps to 1 */
#define GFXREG_ROP_CONTROL_ALPHAMODE_RESET 0U

/* BLUEMODE: Selects the mode for the blue component channel, has no effect in NEUTRAL mode */
#define GFXREG_ROP_CONTROL_BLUEMODE_FSHIFT 5U
#define GFXREG_ROP_CONTROL_BLUEMODE_FMASK 0x1U
#define GFXREG_ROP_CONTROL_SETM_BLUEMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_ROP_CONTROL_SET_BLUEMODE(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_ROP_CONTROL_GET_BLUEMODE(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_ROP_SETM_BLUEMODE(s,val) ( (s)->control = ((s)->control & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_ROP_SET_BLUEMODE(s,val)  ( (s)->control = (((s)->control & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_BLUEMODE(s) ((((s)->control) >> 5U) & 0x1UL)
#define GFXREG_ROP_CONTROL_BLUEMODE_ROP 0x0U /* Normal raster operation mode, using the operation index */
#define GFXREG_ROP_CONTROL_BLUEMODE_ADD 0x1U /* Add mode, adds this component from all enabled inputs, clamps to 1 */
#define GFXREG_ROP_CONTROL_BLUEMODE_RESET 0U

/* GREENMODE: Selects the mode for the green component channel, has no effect in NEUTRAL mode */
#define GFXREG_ROP_CONTROL_GREENMODE_FSHIFT 6U
#define GFXREG_ROP_CONTROL_GREENMODE_FMASK 0x1U
#define GFXREG_ROP_CONTROL_SETM_GREENMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_ROP_CONTROL_SET_GREENMODE(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_ROP_CONTROL_GET_GREENMODE(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_ROP_SETM_GREENMODE(s,val) ( (s)->control = ((s)->control & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_ROP_SET_GREENMODE(s,val)  ( (s)->control = (((s)->control & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_GREENMODE(s) ((((s)->control) >> 6U) & 0x1UL)
#define GFXREG_ROP_CONTROL_GREENMODE_ROP 0x0U /* Normal raster operation mode, using the operation index */
#define GFXREG_ROP_CONTROL_GREENMODE_ADD 0x1U /* Add mode, adds this component from all enabled inputs, clamps to 1 */
#define GFXREG_ROP_CONTROL_GREENMODE_RESET 0U

/* REDMODE: Selects the mode for the red component channel, has no effect in NEUTRAL mode */
#define GFXREG_ROP_CONTROL_REDMODE_FSHIFT 7U
#define GFXREG_ROP_CONTROL_REDMODE_FMASK 0x1U
#define GFXREG_ROP_CONTROL_SETM_REDMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_ROP_CONTROL_SET_REDMODE(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_ROP_CONTROL_GET_REDMODE(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_ROP_SETM_REDMODE(s,val) ( (s)->control = ((s)->control & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_ROP_SET_REDMODE(s,val)  ( (s)->control = (((s)->control & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_REDMODE(s) ((((s)->control) >> 7U) & 0x1UL)
#define GFXREG_ROP_CONTROL_REDMODE_ROP 0x0U /* Normal raster operation mode, using the operation index */
#define GFXREG_ROP_CONTROL_REDMODE_ADD 0x1U /* Add mode, adds this component from all enabled inputs, clamps to 1 */
#define GFXREG_ROP_CONTROL_REDMODE_RESET 0U

/* PRIMDIV2: Selects whether to divide the primary input color components by two or not for ADD mode. This field has no effect on a color component in ROP mode. */
#define GFXREG_ROP_CONTROL_PRIMDIV2_FSHIFT 8U
#define GFXREG_ROP_CONTROL_PRIMDIV2_FMASK 0x1U
#define GFXREG_ROP_CONTROL_SETM_PRIMDIV2(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_ROP_CONTROL_SET_PRIMDIV2(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_ROP_CONTROL_GET_PRIMDIV2(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_ROP_SETM_PRIMDIV2(s,val) ( (s)->control = ((s)->control & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_ROP_SET_PRIMDIV2(s,val)  ( (s)->control = (((s)->control & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_PRIMDIV2(s) ((((s)->control) >> 8U) & 0x1UL)
#define GFXREG_ROP_CONTROL_PRIMDIV2_BYPASS 0x0U /* No change to input */
#define GFXREG_ROP_CONTROL_PRIMDIV2_DIVIDEBY2 0x1U /* Input is divided by two/shift to the right by one */
#define GFXREG_ROP_CONTROL_PRIMDIV2_RESET 0U

/* SECDIV2: Selects whether to divide the secondary input color components by two or not for ADD mode. This field has no effect on a color component in ROP mode. */
#define GFXREG_ROP_CONTROL_SECDIV2_FSHIFT 9U
#define GFXREG_ROP_CONTROL_SECDIV2_FMASK 0x1U
#define GFXREG_ROP_CONTROL_SETM_SECDIV2(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_ROP_CONTROL_SET_SECDIV2(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_ROP_CONTROL_GET_SECDIV2(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_ROP_SETM_SECDIV2(s,val) ( (s)->control = ((s)->control & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_ROP_SET_SECDIV2(s,val)  ( (s)->control = (((s)->control & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_SECDIV2(s) ((((s)->control) >> 9U) & 0x1UL)
#define GFXREG_ROP_CONTROL_SECDIV2_BYPASS 0x0U /* No change to input */
#define GFXREG_ROP_CONTROL_SECDIV2_DIVIDEBY2 0x1U /* Input is divided by two/shift to the right by one */
#define GFXREG_ROP_CONTROL_SECDIV2_RESET 0U

/* TERTDIV2: Selects whether to divide the tertiary input color components by two or not for ADD mode. This field has no effect on a color component in ROP mode. */
#define GFXREG_ROP_CONTROL_TERTDIV2_FSHIFT 10U
#define GFXREG_ROP_CONTROL_TERTDIV2_FMASK 0x1U
#define GFXREG_ROP_CONTROL_SETM_TERTDIV2(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_ROP_CONTROL_SET_TERTDIV2(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_ROP_CONTROL_GET_TERTDIV2(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_ROP_SETM_TERTDIV2(s,val) ( (s)->control = ((s)->control & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_ROP_SET_TERTDIV2(s,val)  ( (s)->control = (((s)->control & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_TERTDIV2(s) ((((s)->control) >> 10U) & 0x1UL)
#define GFXREG_ROP_CONTROL_TERTDIV2_BYPASS 0x0U /* No change to input */
#define GFXREG_ROP_CONTROL_TERTDIV2_DIVIDEBY2 0x1U /* Input is divided by two/shift to the right by one */
#define GFXREG_ROP_CONTROL_TERTDIV2_RESET 0U

/* RASTEROPERATIONINDICES: ROP operation indices */
#define GFXREG_ROP_RASTEROPERATIONINDICES 0x00000008U
/* OPINDEXALPHA: Alpha operation index */
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXALPHA_FSHIFT 0U
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXALPHA_FMASK 0xffU
#define GFXREG_ROP_RASTEROPERATIONINDICES_SETM_OPINDEXALPHA(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_ROP_RASTEROPERATIONINDICES_SET_OPINDEXALPHA(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_ROP_RASTEROPERATIONINDICES_GET_OPINDEXALPHA(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_ROP_SETM_OPINDEXALPHA(s,val) ( (s)->rasteroperationindices = ((s)->rasteroperationindices & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_ROP_SET_OPINDEXALPHA(s,val)  ( (s)->rasteroperationindices = (((s)->rasteroperationindices & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_OPINDEXALPHA(s) ((((s)->rasteroperationindices) ) & 0xffUL)
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXALPHA_RESET 0U

/* OPINDEXBLUE: Blue operation index */
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXBLUE_FSHIFT 8U
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXBLUE_FMASK 0xffU
#define GFXREG_ROP_RASTEROPERATIONINDICES_SETM_OPINDEXBLUE(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_ROP_RASTEROPERATIONINDICES_SET_OPINDEXBLUE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_ROP_RASTEROPERATIONINDICES_GET_OPINDEXBLUE(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_ROP_SETM_OPINDEXBLUE(s,val) ( (s)->rasteroperationindices = ((s)->rasteroperationindices & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_ROP_SET_OPINDEXBLUE(s,val)  ( (s)->rasteroperationindices = (((s)->rasteroperationindices & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_OPINDEXBLUE(s) ((((s)->rasteroperationindices) >> 8U) & 0xffUL)
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXBLUE_RESET 0U

/* OPINDEXGREEN: Green operation index */
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXGREEN_FSHIFT 16U
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXGREEN_FMASK 0xffU
#define GFXREG_ROP_RASTEROPERATIONINDICES_SETM_OPINDEXGREEN(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_ROP_RASTEROPERATIONINDICES_SET_OPINDEXGREEN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_ROP_RASTEROPERATIONINDICES_GET_OPINDEXGREEN(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_ROP_SETM_OPINDEXGREEN(s,val) ( (s)->rasteroperationindices = ((s)->rasteroperationindices & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_ROP_SET_OPINDEXGREEN(s,val)  ( (s)->rasteroperationindices = (((s)->rasteroperationindices & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_OPINDEXGREEN(s) ((((s)->rasteroperationindices) >> 16U) & 0xffUL)
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXGREEN_RESET 0U

/* OPINDEXRED: Red operation index */
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXRED_FSHIFT 24U
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXRED_FMASK 0xffU
#define GFXREG_ROP_RASTEROPERATIONINDICES_SETM_OPINDEXRED(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_ROP_RASTEROPERATIONINDICES_SET_OPINDEXRED(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_ROP_RASTEROPERATIONINDICES_GET_OPINDEXRED(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_ROP_SETM_OPINDEXRED(s,val) ( (s)->rasteroperationindices = ((s)->rasteroperationindices & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_ROP_SET_OPINDEXRED(s,val)  ( (s)->rasteroperationindices = (((s)->rasteroperationindices & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_ROP_GET_OPINDEXRED(s) ((((s)->rasteroperationindices) >> 24U) & 0xffUL)
#define GFXREG_ROP_RASTEROPERATIONINDICES_OPINDEXRED_RESET 0U

/* PRIMCONTROLWORD: Value of last received primary control word */
#define GFXREG_ROP_PRIMCONTROLWORD 0x0000000cU
/* P_VAL: Value of last received control word on the primary input. If a 39 bit pixel channel is connected, the mapping is as follows: p_val[31:0] = { data[37:22], data[19:12], data[9:2] }. For debug purposes only, read when stable only, otherwise read data might be corrupted. */
#define GFXREG_ROP_PRIMCONTROLWORD_P_VAL_FSHIFT 0U
#define GFXREG_ROP_PRIMCONTROLWORD_P_VAL_FMASK 0xffffffffU
#define GFXREG_ROP_PRIMCONTROLWORD_GET_P_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_ROP_GET_P_VAL(s) ((((s)->primcontrolword) ) & 0xffffffffUL)
#define GFXREG_ROP_PRIMCONTROLWORD_P_VAL_RESET (none)U

/* SECCONTROLWORD: Value of last received secondary control word */
#define GFXREG_ROP_SECCONTROLWORD 0x00000010U
/* S_VAL: Value of last received control word on the secondary input. If a 39 bit pixel channel is connected, the mapping is as follows: s_val[31:0] = { data[37:22], data[19:12], data[9:2] }. For debug purposes only, read when stable only, otherwise read data might be corrupted. */
#define GFXREG_ROP_SECCONTROLWORD_S_VAL_FSHIFT 0U
#define GFXREG_ROP_SECCONTROLWORD_S_VAL_FMASK 0xffffffffU
#define GFXREG_ROP_SECCONTROLWORD_GET_S_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_ROP_GET_S_VAL(s) ((((s)->seccontrolword) ) & 0xffffffffUL)
#define GFXREG_ROP_SECCONTROLWORD_S_VAL_RESET (none)U

/* TERTCONTROLWORD: Value of last received tertiary control word */
#define GFXREG_ROP_TERTCONTROLWORD 0x00000014U
/* T_VAL: Value of last received control word on the tertiary input. If a 39 bit pixel channel is connected, the mapping is as follows: t_val[31:0] = { data[37:22], data[19:12], data[9:2] }. For debug purposes only, read when stable only, otherwise read data might be corrupted. */
#define GFXREG_ROP_TERTCONTROLWORD_T_VAL_FSHIFT 0U
#define GFXREG_ROP_TERTCONTROLWORD_T_VAL_FMASK 0xffffffffU
#define GFXREG_ROP_TERTCONTROLWORD_GET_T_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_ROP_GET_T_VAL(s) ((((s)->tertcontrolword) ) & 0xffffffffUL)
#define GFXREG_ROP_TERTCONTROLWORD_T_VAL_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_ROP_REGISTER_H */

