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
 * \date        Tue May 26 11:58:38 2020
 * \file        gfxreg_clut_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   clut
 *              Source:   clut.component.xml
 *              Template: component_h.tpl
 * \brief      Iris clut register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_CLUT_REGISTER_H
#define GFXREG_CLUT_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* clut registers */
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


/* STATICCONTROL: CLUT static control register */
#define GFXREG_CLUT_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_CLUT_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_CLUT_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_CLUT_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_CLUT_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CLUT_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_CLUT_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_CLUT_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_CLUT_STATICCONTROL_SHDEN_RESET 0U

/* UNSHADOWEDCONTROL: CLUT unshadowed control register */
#define GFXREG_CLUT_UNSHADOWEDCONTROL 0x00000004U
/* B_EN: Write enable for writing the blue color LUT entry from the host (allows writing a single color entry without a read-modify-write cycle) */
#define GFXREG_CLUT_UNSHADOWEDCONTROL_B_EN_FSHIFT 0U
#define GFXREG_CLUT_UNSHADOWEDCONTROL_B_EN_FMASK 0x1U
#define GFXREG_CLUT_UNSHADOWEDCONTROL_SETM_B_EN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_CLUT_UNSHADOWEDCONTROL_SET_B_EN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CLUT_UNSHADOWEDCONTROL_GET_B_EN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_CLUT_SETM_B_EN(s,val) ( (s)->unshadowedcontrol = ((s)->unshadowedcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_CLUT_SET_B_EN(s,val)  ( (s)->unshadowedcontrol = (((s)->unshadowedcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_B_EN(s) ((((s)->unshadowedcontrol) ) & 0x1UL)
#define GFXREG_CLUT_UNSHADOWEDCONTROL_B_EN_DISABLE 0x0U /* disable */
#define GFXREG_CLUT_UNSHADOWEDCONTROL_B_EN_ENABLE 0x1U /* enable */
#define GFXREG_CLUT_UNSHADOWEDCONTROL_B_EN_RESET 0x0U

/* G_EN: Write enable for writing the green color LUT entry from the host (allows writing a single color entry without a read-modify-write cycle) */
#define GFXREG_CLUT_UNSHADOWEDCONTROL_G_EN_FSHIFT 1U
#define GFXREG_CLUT_UNSHADOWEDCONTROL_G_EN_FMASK 0x1U
#define GFXREG_CLUT_UNSHADOWEDCONTROL_SETM_G_EN(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_CLUT_UNSHADOWEDCONTROL_SET_G_EN(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CLUT_UNSHADOWEDCONTROL_GET_G_EN(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_CLUT_SETM_G_EN(s,val) ( (s)->unshadowedcontrol = ((s)->unshadowedcontrol & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_CLUT_SET_G_EN(s,val)  ( (s)->unshadowedcontrol = (((s)->unshadowedcontrol & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_G_EN(s) ((((s)->unshadowedcontrol) >> 1U) & 0x1UL)
#define GFXREG_CLUT_UNSHADOWEDCONTROL_G_EN_DISABLE 0x0U /* disable */
#define GFXREG_CLUT_UNSHADOWEDCONTROL_G_EN_ENABLE 0x1U /* enable */
#define GFXREG_CLUT_UNSHADOWEDCONTROL_G_EN_RESET 0x0U

/* R_EN: Write enable for writing the red color LUT entry from the host (allows writing a single color entry without a read-modify-write cycle) */
#define GFXREG_CLUT_UNSHADOWEDCONTROL_R_EN_FSHIFT 2U
#define GFXREG_CLUT_UNSHADOWEDCONTROL_R_EN_FMASK 0x1U
#define GFXREG_CLUT_UNSHADOWEDCONTROL_SETM_R_EN(val) (((CYGFX_U32)(val) & 0x1UL) << 2U)
#define GFXREG_CLUT_UNSHADOWEDCONTROL_SET_R_EN(val) (((CYGFX_U32)(val) << 2U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CLUT_UNSHADOWEDCONTROL_GET_R_EN(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_CLUT_SETM_R_EN(s,val) ( (s)->unshadowedcontrol = ((s)->unshadowedcontrol & ~0x4UL) | (((CYGFX_U32)(val) << 2U) & 0x4UL) )
#define GFXREG_CLUT_SET_R_EN(s,val)  ( (s)->unshadowedcontrol = (((s)->unshadowedcontrol & ~0x4UL) | ((CYGFX_U32)(val) << 2U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_R_EN(s) ((((s)->unshadowedcontrol) >> 2U) & 0x1UL)
#define GFXREG_CLUT_UNSHADOWEDCONTROL_R_EN_DISABLE 0x0U /* disable */
#define GFXREG_CLUT_UNSHADOWEDCONTROL_R_EN_ENABLE 0x1U /* enable */
#define GFXREG_CLUT_UNSHADOWEDCONTROL_R_EN_RESET 0x0U

/* CONTROL: CLUT control register */
#define GFXREG_CLUT_CONTROL 0x00000008U
/* MODE: Operation mode for color lookup table */
#define GFXREG_CLUT_CONTROL_MODE_FSHIFT 0U
#define GFXREG_CLUT_CONTROL_MODE_FMASK 0x3U
#define GFXREG_CLUT_CONTROL_SETM_MODE(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_CLUT_CONTROL_SET_MODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_CLUT_CONTROL_GET_MODE(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_CLUT_SETM_MODE(s,val) ( (s)->control = ((s)->control & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_CLUT_SET_MODE(s,val)  ( (s)->control = (((s)->control & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_MODE(s) ((((s)->control) ) & 0x3UL)
#define GFXREG_CLUT_CONTROL_MODE_NEUTRAL 0x0U /* module in neutral mode, input data is bypassed to the output */
#define GFXREG_CLUT_CONTROL_MODE_LUT 0x1U /* module in color lookup mode (LUT holds a 10bit color value lookup value for each input color) */
#define GFXREG_CLUT_CONTROL_MODE_INDEX_10BIT 0x2U /* module in 10bit color index table mode (LUT holds a 3x10bit color value, indexed with the red input color) */
#define GFXREG_CLUT_CONTROL_MODE_INDEX_RGBA 0x3U /* module in RGBA color index table mode (LUT holds a 3x8bit color value and a 6bit alpha value, indexed with the red input color) */
#define GFXREG_CLUT_CONTROL_MODE_RESET 0x0U

/* COL_8BIT: Color (red, green, blue) output bitwidth select */
#define GFXREG_CLUT_CONTROL_COL_8BIT_FSHIFT 4U
#define GFXREG_CLUT_CONTROL_COL_8BIT_FMASK 0x1U
#define GFXREG_CLUT_CONTROL_SETM_COL_8BIT(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_CLUT_CONTROL_SET_COL_8BIT(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CLUT_CONTROL_GET_COL_8BIT(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_CLUT_SETM_COL_8BIT(s,val) ( (s)->control = ((s)->control & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_CLUT_SET_COL_8BIT(s,val)  ( (s)->control = (((s)->control & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_COL_8BIT(s) ((((s)->control) >> 4U) & 0x1UL)
#define GFXREG_CLUT_CONTROL_COL_8BIT_DISABLE 0x0U /* color is 10bit output */
#define GFXREG_CLUT_CONTROL_COL_8BIT_ENABLE 0x1U /* color is 8bit output (dithering of internal 10bit value) */
#define GFXREG_CLUT_CONTROL_COL_8BIT_RESET 0x0U

/* ALPHAMASK: Enables the alpha mask mode. This mode disables lookup for all pixels with an alpha component smaller or greater/equal than 128. They are bypassed unchanged. */
#define GFXREG_CLUT_CONTROL_ALPHAMASK_FSHIFT 5U
#define GFXREG_CLUT_CONTROL_ALPHAMASK_FMASK 0x1U
#define GFXREG_CLUT_CONTROL_SETM_ALPHAMASK(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_CLUT_CONTROL_SET_ALPHAMASK(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CLUT_CONTROL_GET_ALPHAMASK(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_CLUT_SETM_ALPHAMASK(s,val) ( (s)->control = ((s)->control & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_CLUT_SET_ALPHAMASK(s,val)  ( (s)->control = (((s)->control & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_ALPHAMASK(s) ((((s)->control) >> 5U) & 0x1UL)
#define GFXREG_CLUT_CONTROL_ALPHAMASK_DISABLE 0x0U /* Alpha mask mode disabled */
#define GFXREG_CLUT_CONTROL_ALPHAMASK_ENABLE 0x1U /* Alpha mask mode enabled */
#define GFXREG_CLUT_CONTROL_ALPHAMASK_RESET 0x0U

/* ALPHAINVERT: Chooses whether to disable lookup for alpha components smaller or greater/equal than 128. For this field to have an effect AlphaMask must be set to ENABLE. */
#define GFXREG_CLUT_CONTROL_ALPHAINVERT_FSHIFT 6U
#define GFXREG_CLUT_CONTROL_ALPHAINVERT_FMASK 0x1U
#define GFXREG_CLUT_CONTROL_SETM_ALPHAINVERT(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_CLUT_CONTROL_SET_ALPHAINVERT(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CLUT_CONTROL_GET_ALPHAINVERT(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_CLUT_SETM_ALPHAINVERT(s,val) ( (s)->control = ((s)->control & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_CLUT_SET_ALPHAINVERT(s,val)  ( (s)->control = (((s)->control & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_ALPHAINVERT(s) ((((s)->control) >> 6U) & 0x1UL)
#define GFXREG_CLUT_CONTROL_ALPHAINVERT_NORMAL 0x0U /* Disable computation for alpha smaller than 128 */
#define GFXREG_CLUT_CONTROL_ALPHAINVERT_INVERT 0x1U /* Disable computation for alpha greater than or equal to 128 */
#define GFXREG_CLUT_CONTROL_ALPHAINVERT_RESET 0x0U

/* IDX_BITS: Number of msb bits of the red color input used for the LUT index input */
#define GFXREG_CLUT_CONTROL_IDX_BITS_FSHIFT 8U
#define GFXREG_CLUT_CONTROL_IDX_BITS_FMASK 0xfU
#define GFXREG_CLUT_CONTROL_SETM_IDX_BITS(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_CLUT_CONTROL_SET_IDX_BITS(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_CLUT_CONTROL_GET_IDX_BITS(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_CLUT_SETM_IDX_BITS(s,val) ( (s)->control = ((s)->control & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_CLUT_SET_IDX_BITS(s,val)  ( (s)->control = (((s)->control & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_IDX_BITS(s) ((((s)->control) >> 8U) & 0xfUL)
#define GFXREG_CLUT_CONTROL_IDX_BITS_RESET 0x8U

/* STATUS: CLUT status register */
#define GFXREG_CLUT_STATUS 0x0000000cU
/* WRITE_TIMEOUT: Timeout detected when writing to the LUT */
#define GFXREG_CLUT_STATUS_WRITE_TIMEOUT_FSHIFT 0U
#define GFXREG_CLUT_STATUS_WRITE_TIMEOUT_FMASK 0x1U
#define GFXREG_CLUT_STATUS_SETM_WRITE_TIMEOUT(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_CLUT_STATUS_SET_WRITE_TIMEOUT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CLUT_STATUS_GET_WRITE_TIMEOUT(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_CLUT_SETM_WRITE_TIMEOUT(s,val) ( (s)->status = ((s)->status & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_CLUT_SET_WRITE_TIMEOUT(s,val)  ( (s)->status = (((s)->status & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_WRITE_TIMEOUT(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_CLUT_STATUS_WRITE_TIMEOUT_RESET 0x0U

/* READ_TIMEOUT: Timeout detected when reading from the LUT */
#define GFXREG_CLUT_STATUS_READ_TIMEOUT_FSHIFT 4U
#define GFXREG_CLUT_STATUS_READ_TIMEOUT_FMASK 0x1U
#define GFXREG_CLUT_STATUS_SETM_READ_TIMEOUT(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_CLUT_STATUS_SET_READ_TIMEOUT(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CLUT_STATUS_GET_READ_TIMEOUT(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_CLUT_SETM_READ_TIMEOUT(s,val) ( (s)->status = ((s)->status & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_CLUT_SET_READ_TIMEOUT(s,val)  ( (s)->status = (((s)->status & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_READ_TIMEOUT(s) ((((s)->status) >> 4U) & 0x1UL)
#define GFXREG_CLUT_STATUS_READ_TIMEOUT_RESET 0x0U

/* LASTCONTROLWORD: Value of last received control word, for debugging */
#define GFXREG_CLUT_LASTCONTROLWORD 0x00000010U
/* L_VAL: Value of last received control word. For debug purposes only, read when stable only, otherwise read data might be corrupted. */
#define GFXREG_CLUT_LASTCONTROLWORD_L_VAL_FSHIFT 0U
#define GFXREG_CLUT_LASTCONTROLWORD_L_VAL_FMASK 0xffffffffU
#define GFXREG_CLUT_LASTCONTROLWORD_GET_L_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_CLUT_GET_L_VAL(s) ((((s)->lastcontrolword) ) & 0xffffffffUL)
#define GFXREG_CLUT_LASTCONTROLWORD_L_VAL_RESET (none)U



/* LUT: Look Up Table */
#define GFXREG_CLUT_LUT 0x00000400U
/* BLUE: Blue component */
#define GFXREG_CLUT_LUT_BLUE_FSHIFT 0U
#define GFXREG_CLUT_LUT_BLUE_FMASK 0x3ffU
#define GFXREG_CLUT_LUT_SETM_BLUE(val) (((CYGFX_U32)(val) & 0x3ffUL) )
#define GFXREG_CLUT_LUT_SET_BLUE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_CLUT_LUT_GET_BLUE(val) (((CYGFX_U32)(val) ) & 0x3ffUL)
#define GFXREG_CLUT_SETM_BLUE(s,val) ( (s)->lut = ((s)->lut & ~0x3ffUL) | (((CYGFX_U32)(val) ) & 0x3ffUL) )
#define GFXREG_CLUT_SET_BLUE(s,val)  ( (s)->lut = (((s)->lut & ~0x3ffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_BLUE(s) ((((s)->lut) ) & 0x3ffUL)
#define GFXREG_CLUT_LUT_BLUE_RESET (none)U

/* GREEN: Green component */
#define GFXREG_CLUT_LUT_GREEN_FSHIFT 10U
#define GFXREG_CLUT_LUT_GREEN_FMASK 0x3ffU
#define GFXREG_CLUT_LUT_SETM_GREEN(val) (((CYGFX_U32)(val) & 0x3ffUL) << 10U)
#define GFXREG_CLUT_LUT_SET_GREEN(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_CLUT_LUT_GET_GREEN(val) (((CYGFX_U32)(val) >> 10U) & 0x3ffUL)
#define GFXREG_CLUT_SETM_GREEN(s,val) ( (s)->lut = ((s)->lut & ~0xffc00UL) | (((CYGFX_U32)(val) << 10U) & 0xffc00UL) )
#define GFXREG_CLUT_SET_GREEN(s,val)  ( (s)->lut = (((s)->lut & ~0xffc00UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_GREEN(s) ((((s)->lut) >> 10U) & 0x3ffUL)
#define GFXREG_CLUT_LUT_GREEN_RESET (none)U

/* RED: Red component */
#define GFXREG_CLUT_LUT_RED_FSHIFT 20U
#define GFXREG_CLUT_LUT_RED_FMASK 0x3ffU
#define GFXREG_CLUT_LUT_SETM_RED(val) (((CYGFX_U32)(val) & 0x3ffUL) << 20U)
#define GFXREG_CLUT_LUT_SET_RED(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_CLUT_LUT_GET_RED(val) (((CYGFX_U32)(val) >> 20U) & 0x3ffUL)
#define GFXREG_CLUT_SETM_RED(s,val) ( (s)->lut = ((s)->lut & ~0x3ff00000UL) | (((CYGFX_U32)(val) << 20U) & 0x3ff00000UL) )
#define GFXREG_CLUT_SET_RED(s,val)  ( (s)->lut = (((s)->lut & ~0x3ff00000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_CLUT_GET_RED(s) ((((s)->lut) >> 20U) & 0x3ffUL)
#define GFXREG_CLUT_LUT_RED_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_CLUT_REGISTER_H */

