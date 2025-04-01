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
 * \file        gfxreg_layerblend_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   layerblend
 *              Source:   layerblend.component.xml
 *              Template: component_h.tpl
 * \brief      Iris layerblend register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_LAYERBLEND_REGISTER_H
#define GFXREG_LAYERBLEND_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* layerblend registers */
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


/* STATICCONTROL: Static control settings. */
#define GFXREG_LAYERBLEND_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type fields of this unit (0 = write through, 1 = shadowed). */
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_LAYERBLEND_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_LAYERBLEND_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_LAYERBLEND_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_LAYERBLEND_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDEN_RESET 0U

/* SHDLDSEL: Controls when shadow fields of this unit are loaded into the active configuration in case that ShdEn is enabled. */
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDLDSEL_FSHIFT 1U
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDLDSEL_FMASK 0x3U
#define GFXREG_LAYERBLEND_STATICCONTROL_SETM_SHDLDSEL(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_LAYERBLEND_STATICCONTROL_SET_SHDLDSEL(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_STATICCONTROL_GET_SHDLDSEL(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_LAYERBLEND_SETM_SHDLDSEL(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_LAYERBLEND_SET_SHDLDSEL(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SHDLDSEL(s) ((((s)->staticcontrol) >> 1U) & 0x3UL)
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDLDSEL_PRIMARY 0U /* Load shadows with shadow load token on primary input (background plane). */
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDLDSEL_SECONDARY 1U /* Load shadows with shadow load token on secondary input (foreground plane). */
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDLDSEL_BOTH 2U /* Load shadows with shadow load token on any input. */
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDLDSEL_RESET 2U

/* SHDTOKSEL: Controls when a shadow load token is generated on the output port, which controls shadow load in subsequent processing units. */
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDTOKSEL_FSHIFT 3U
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDTOKSEL_FMASK 0x3U
#define GFXREG_LAYERBLEND_STATICCONTROL_SETM_SHDTOKSEL(val) (((CYGFX_U32)(val) & 0x3UL) << 3U)
#define GFXREG_LAYERBLEND_STATICCONTROL_SET_SHDTOKSEL(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_STATICCONTROL_GET_SHDTOKSEL(val) (((CYGFX_U32)(val) >> 3U) & 0x3UL)
#define GFXREG_LAYERBLEND_SETM_SHDTOKSEL(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x18UL) | (((CYGFX_U32)(val) << 3U) & 0x18UL) )
#define GFXREG_LAYERBLEND_SET_SHDTOKSEL(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x18UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SHDTOKSEL(s) ((((s)->staticcontrol) >> 3U) & 0x3UL)
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDTOKSEL_PRIMARY 0U /* When a token was received on the primary input (background plane). */
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDTOKSEL_SECONDARY 1U /* When a token was received on the secondary input (foreground plane). */
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDTOKSEL_BOTH 2U /* When a token was received on any input. */
#define GFXREG_LAYERBLEND_STATICCONTROL_SHDTOKSEL_RESET 2U

/* CONTROL: Common control settings.
   In case of dual view or dual screen output mode, the secondary input can be blended onto one or both views/screens by using the Sec***Row***ColDis settings.         Odd/even row/column index refers to the position inside the output frame where the secondary pixel is overlaid.         When channels are disabled, the corresponding component from the primary input is by-passed then unchanged (blending stage is deactivated).        */
#define GFXREG_LAYERBLEND_CONTROL 0x00000004U
/* MODE: Operation mode. */
#define GFXREG_LAYERBLEND_CONTROL_MODE_FSHIFT 0U
#define GFXREG_LAYERBLEND_CONTROL_MODE_FMASK 0x1U
#define GFXREG_LAYERBLEND_CONTROL_SETM_MODE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_LAYERBLEND_CONTROL_SET_MODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_CONTROL_GET_MODE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_LAYERBLEND_SETM_MODE(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_LAYERBLEND_SET_MODE(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_MODE(s) ((((s)->control) ) & 0x1UL)
#define GFXREG_LAYERBLEND_CONTROL_MODE_NEUTRAL 0x0U /* Module is in neutral mode. Output is same as primary input. */
#define GFXREG_LAYERBLEND_CONTROL_MODE_BLEND 0x1U /* Module is in blending mode. */
#define GFXREG_LAYERBLEND_CONTROL_MODE_RESET 0x1U

/* ALPHAMASKENABLE: Enables Alpha Mask feature. This will limit possible output alpha values to 0 and 255. Generation of this alpha value will depend on the AlphaMaskMode field. */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKENABLE_FSHIFT 2U
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKENABLE_FMASK 0x1U
#define GFXREG_LAYERBLEND_CONTROL_SETM_ALPHAMASKENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 2U)
#define GFXREG_LAYERBLEND_CONTROL_SET_ALPHAMASKENABLE(val) (((CYGFX_U32)(val) << 2U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_CONTROL_GET_ALPHAMASKENABLE(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_LAYERBLEND_SETM_ALPHAMASKENABLE(s,val) ( (s)->control = ((s)->control & ~0x4UL) | (((CYGFX_U32)(val) << 2U) & 0x4UL) )
#define GFXREG_LAYERBLEND_SET_ALPHAMASKENABLE(s,val)  ( (s)->control = (((s)->control & ~0x4UL) | ((CYGFX_U32)(val) << 2U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_ALPHAMASKENABLE(s) ((((s)->control) >> 2U) & 0x1UL)
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKENABLE_DISABLE 0x0U /* AlphaMask feature disabled */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKENABLE_ENABLE 0x1U /* AlphaMask feature enabled */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKENABLE_RESET 0x0U

/* ALPHAMASKMODE: AlphaMaskMode determines how the output alpha is generated when AlphaMaskEnable is set to ENABLE */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_FSHIFT 4U
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_FMASK 0x7U
#define GFXREG_LAYERBLEND_CONTROL_SETM_ALPHAMASKMODE(val) (((CYGFX_U32)(val) & 0x7UL) << 4U)
#define GFXREG_LAYERBLEND_CONTROL_SET_ALPHAMASKMODE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_CONTROL_GET_ALPHAMASKMODE(val) (((CYGFX_U32)(val) >> 4U) & 0x7UL)
#define GFXREG_LAYERBLEND_SETM_ALPHAMASKMODE(s,val) ( (s)->control = ((s)->control & ~0x70UL) | (((CYGFX_U32)(val) << 4U) & 0x70UL) )
#define GFXREG_LAYERBLEND_SET_ALPHAMASKMODE(s,val)  ( (s)->control = (((s)->control & ~0x70UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_ALPHAMASKMODE(s) ((((s)->control) >> 4U) & 0x7UL)
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_PRIM 0x0U /* Areas with primary input alpha > 128 will be mapped to 255 and the rest will have an alpha value of 0 */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_SEC 0x1U /* The area of the secondary input will get an alpha value of 255 and the rest will be 0 */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_PRIM_OR_SEC 0x2U /* Behaves as if the output of modes PRIM and SEC would be ORed together */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_PRIM_AND_SEC 0x3U /* Behaves as if the output of modes PRIM and SEC would be ANDed together */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_PRIM_INV 0x4U /* Behaves as if the output of mode PRIM would be inverted */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_SEC_INV 0x5U /* Behaves as if the output of mode SEC would be inverted */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_PRIM_OR_SEC_INV 0x6U /* Behaves as if the output of modes PRIM and SEC_INV would be ORed together */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_PRIM_AND_SEC_INV 0x7U /* Behaves as if the output of modes PRIM and SEC_INV would be ANDed together */
#define GFXREG_LAYERBLEND_CONTROL_ALPHAMASKMODE_RESET 0x0U

/* SECLOWPASSEN: Enables a horizontal low-pass filter for the secondary input port. Should be used for dual view and dual display mode when the secondary input frame has twice the resolution of one view (= full resolution of the panel interface). Every 2nd pixel only is sampled then. */
#define GFXREG_LAYERBLEND_CONTROL_SECLOWPASSEN_FSHIFT 8U
#define GFXREG_LAYERBLEND_CONTROL_SECLOWPASSEN_FMASK 0x1U
#define GFXREG_LAYERBLEND_CONTROL_SETM_SECLOWPASSEN(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_LAYERBLEND_CONTROL_SET_SECLOWPASSEN(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_CONTROL_GET_SECLOWPASSEN(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_LAYERBLEND_SETM_SECLOWPASSEN(s,val) ( (s)->control = ((s)->control & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_LAYERBLEND_SET_SECLOWPASSEN(s,val)  ( (s)->control = (((s)->control & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SECLOWPASSEN(s) ((((s)->control) >> 8U) & 0x1UL)
#define GFXREG_LAYERBLEND_CONTROL_SECLOWPASSEN_RESET 0U

/* SECREPLICATEEN: Enables horizontal replication of pixels by factor 2 on secondary input port. Must be used for dual display mode when the secondary input frame has the resolution of one display (= half the resolution of the panel interface). */
#define GFXREG_LAYERBLEND_CONTROL_SECREPLICATEEN_FSHIFT 9U
#define GFXREG_LAYERBLEND_CONTROL_SECREPLICATEEN_FMASK 0x1U
#define GFXREG_LAYERBLEND_CONTROL_SETM_SECREPLICATEEN(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_LAYERBLEND_CONTROL_SET_SECREPLICATEEN(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_CONTROL_GET_SECREPLICATEEN(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_LAYERBLEND_SETM_SECREPLICATEEN(s,val) ( (s)->control = ((s)->control & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_LAYERBLEND_SET_SECREPLICATEEN(s,val)  ( (s)->control = (((s)->control & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SECREPLICATEEN(s) ((((s)->control) >> 9U) & 0x1UL)
#define GFXREG_LAYERBLEND_CONTROL_SECREPLICATEEN_RESET 0U

/* SECEVENROWEVENCOLDIS: Disable bits for R/Y, G/U, B/V and A channels of secondary input when row and column index is even. R/Y is MSBit, A is LSBit. */
#define GFXREG_LAYERBLEND_CONTROL_SECEVENROWEVENCOLDIS_FSHIFT 10U
#define GFXREG_LAYERBLEND_CONTROL_SECEVENROWEVENCOLDIS_FMASK 0xfU
#define GFXREG_LAYERBLEND_CONTROL_SETM_SECEVENROWEVENCOLDIS(val) (((CYGFX_U32)(val) & 0xfUL) << 10U)
#define GFXREG_LAYERBLEND_CONTROL_SET_SECEVENROWEVENCOLDIS(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_CONTROL_GET_SECEVENROWEVENCOLDIS(val) (((CYGFX_U32)(val) >> 10U) & 0xfUL)
#define GFXREG_LAYERBLEND_SETM_SECEVENROWEVENCOLDIS(s,val) ( (s)->control = ((s)->control & ~0x3c00UL) | (((CYGFX_U32)(val) << 10U) & 0x3c00UL) )
#define GFXREG_LAYERBLEND_SET_SECEVENROWEVENCOLDIS(s,val)  ( (s)->control = (((s)->control & ~0x3c00UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SECEVENROWEVENCOLDIS(s) ((((s)->control) >> 10U) & 0xfUL)
#define GFXREG_LAYERBLEND_CONTROL_SECEVENROWEVENCOLDIS_RESET 0U

/* SECEVENROWODDCOLDIS: Disable bits for R/Y, G/U, B/V and A channels of secondary input when row index is even and column index is odd. R/Y is MSBit, A is LSBit. */
#define GFXREG_LAYERBLEND_CONTROL_SECEVENROWODDCOLDIS_FSHIFT 14U
#define GFXREG_LAYERBLEND_CONTROL_SECEVENROWODDCOLDIS_FMASK 0xfU
#define GFXREG_LAYERBLEND_CONTROL_SETM_SECEVENROWODDCOLDIS(val) (((CYGFX_U32)(val) & 0xfUL) << 14U)
#define GFXREG_LAYERBLEND_CONTROL_SET_SECEVENROWODDCOLDIS(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_CONTROL_GET_SECEVENROWODDCOLDIS(val) (((CYGFX_U32)(val) >> 14U) & 0xfUL)
#define GFXREG_LAYERBLEND_SETM_SECEVENROWODDCOLDIS(s,val) ( (s)->control = ((s)->control & ~0x3c000UL) | (((CYGFX_U32)(val) << 14U) & 0x3c000UL) )
#define GFXREG_LAYERBLEND_SET_SECEVENROWODDCOLDIS(s,val)  ( (s)->control = (((s)->control & ~0x3c000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SECEVENROWODDCOLDIS(s) ((((s)->control) >> 14U) & 0xfUL)
#define GFXREG_LAYERBLEND_CONTROL_SECEVENROWODDCOLDIS_RESET 0U

/* SECODDROWEVENCOLDIS: Disable bits for R/Y, G/U, B/V and A channels of secondary input when row index is odd and column index is even. R/Y is MSBit, A is LSBit. */
#define GFXREG_LAYERBLEND_CONTROL_SECODDROWEVENCOLDIS_FSHIFT 18U
#define GFXREG_LAYERBLEND_CONTROL_SECODDROWEVENCOLDIS_FMASK 0xfU
#define GFXREG_LAYERBLEND_CONTROL_SETM_SECODDROWEVENCOLDIS(val) (((CYGFX_U32)(val) & 0xfUL) << 18U)
#define GFXREG_LAYERBLEND_CONTROL_SET_SECODDROWEVENCOLDIS(val) (((CYGFX_U32)(val) << 18U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_CONTROL_GET_SECODDROWEVENCOLDIS(val) (((CYGFX_U32)(val) >> 18U) & 0xfUL)
#define GFXREG_LAYERBLEND_SETM_SECODDROWEVENCOLDIS(s,val) ( (s)->control = ((s)->control & ~0x3c0000UL) | (((CYGFX_U32)(val) << 18U) & 0x3c0000UL) )
#define GFXREG_LAYERBLEND_SET_SECODDROWEVENCOLDIS(s,val)  ( (s)->control = (((s)->control & ~0x3c0000UL) | ((CYGFX_U32)(val) << 18U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SECODDROWEVENCOLDIS(s) ((((s)->control) >> 18U) & 0xfUL)
#define GFXREG_LAYERBLEND_CONTROL_SECODDROWEVENCOLDIS_RESET 0U

/* SECODDROWODDCOLDIS: Disable bits for R/Y, G/U, B/V and A channels of secondary input when row and column index is odd. R/Y is MSBit, A is LSBit. */
#define GFXREG_LAYERBLEND_CONTROL_SECODDROWODDCOLDIS_FSHIFT 22U
#define GFXREG_LAYERBLEND_CONTROL_SECODDROWODDCOLDIS_FMASK 0xfU
#define GFXREG_LAYERBLEND_CONTROL_SETM_SECODDROWODDCOLDIS(val) (((CYGFX_U32)(val) & 0xfUL) << 22U)
#define GFXREG_LAYERBLEND_CONTROL_SET_SECODDROWODDCOLDIS(val) (((CYGFX_U32)(val) << 22U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_CONTROL_GET_SECODDROWODDCOLDIS(val) (((CYGFX_U32)(val) >> 22U) & 0xfUL)
#define GFXREG_LAYERBLEND_SETM_SECODDROWODDCOLDIS(s,val) ( (s)->control = ((s)->control & ~0x3c00000UL) | (((CYGFX_U32)(val) << 22U) & 0x3c00000UL) )
#define GFXREG_LAYERBLEND_SET_SECODDROWODDCOLDIS(s,val)  ( (s)->control = (((s)->control & ~0x3c00000UL) | ((CYGFX_U32)(val) << 22U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SECODDROWODDCOLDIS(s) ((((s)->control) >> 22U) & 0xfUL)
#define GFXREG_LAYERBLEND_CONTROL_SECODDROWODDCOLDIS_RESET 0U

/* BLENDCONTROL: Options for blend operations */
#define GFXREG_LAYERBLEND_BLENDCONTROL 0x00000008U
/* PRIM_C_BLD_FUNC: Primary (background) input color blending function */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_FSHIFT 0U
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_FMASK 0x7U
#define GFXREG_LAYERBLEND_BLENDCONTROL_SETM_PRIM_C_BLD_FUNC(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_LAYERBLEND_BLENDCONTROL_SET_PRIM_C_BLD_FUNC(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_BLENDCONTROL_GET_PRIM_C_BLD_FUNC(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_LAYERBLEND_SETM_PRIM_C_BLD_FUNC(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_LAYERBLEND_SET_PRIM_C_BLD_FUNC(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_PRIM_C_BLD_FUNC(s) ((((s)->blendcontrol) ) & 0x7UL)
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_ZERO 0x0U /* Cout = Cin * 0 */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_ONE 0x1U /* Cout = Cin * 1 */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_PRIM_ALPHA 0x2U /* Cout = Cin * ALPHA_prim */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_ONE_MINUS_PRIM_ALPHA 0x3U /* Cout = Cin * (1 - ALPHA_prim) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_SEC_ALPHA 0x4U /* Cout = Cin * ALPHA_sec */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_ONE_MINUS_SEC_ALPHA 0x5U /* Cout = Cin * (1 - ALPHA_sec) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_CONST_ALPHA 0x6U /* Cout = Cin * ALPHA_const */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_ONE_MINUS_CONST_ALPHA 0x7U /* Cout = Cin * (1 - ALPHA_const) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_C_BLD_FUNC_RESET 0x0U

/* SEC_C_BLD_FUNC: Secondary (overlay) input color blending function */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_FSHIFT 4U
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_FMASK 0x7U
#define GFXREG_LAYERBLEND_BLENDCONTROL_SETM_SEC_C_BLD_FUNC(val) (((CYGFX_U32)(val) & 0x7UL) << 4U)
#define GFXREG_LAYERBLEND_BLENDCONTROL_SET_SEC_C_BLD_FUNC(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_BLENDCONTROL_GET_SEC_C_BLD_FUNC(val) (((CYGFX_U32)(val) >> 4U) & 0x7UL)
#define GFXREG_LAYERBLEND_SETM_SEC_C_BLD_FUNC(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0x70UL) | (((CYGFX_U32)(val) << 4U) & 0x70UL) )
#define GFXREG_LAYERBLEND_SET_SEC_C_BLD_FUNC(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0x70UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SEC_C_BLD_FUNC(s) ((((s)->blendcontrol) >> 4U) & 0x7UL)
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_ZERO 0x0U /* Cout = Cin * 0 */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_ONE 0x1U /* Cout = Cin * 1 */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_PRIM_ALPHA 0x2U /* Cout = Cin * ALPHA_prim */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_ONE_MINUS_PRIM_ALPHA 0x3U /* Cout = Cin * (1 - ALPHA_prim) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_SEC_ALPHA 0x4U /* Cout = Cin * ALPHA_sec */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_ONE_MINUS_SEC_ALPHA 0x5U /* Cout = Cin * (1 - ALPHA_sec) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_CONST_ALPHA 0x6U /* Cout = Cin * ALPHA_const */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_ONE_MINUS_CONST_ALPHA 0x7U /* Cout = Cin * (1 - ALPHA_const) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_C_BLD_FUNC_RESET 0x1U

/* PRIM_A_BLD_FUNC: Primary (background) input alpha blending function */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_FSHIFT 8U
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_FMASK 0x7U
#define GFXREG_LAYERBLEND_BLENDCONTROL_SETM_PRIM_A_BLD_FUNC(val) (((CYGFX_U32)(val) & 0x7UL) << 8U)
#define GFXREG_LAYERBLEND_BLENDCONTROL_SET_PRIM_A_BLD_FUNC(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_BLENDCONTROL_GET_PRIM_A_BLD_FUNC(val) (((CYGFX_U32)(val) >> 8U) & 0x7UL)
#define GFXREG_LAYERBLEND_SETM_PRIM_A_BLD_FUNC(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0x700UL) | (((CYGFX_U32)(val) << 8U) & 0x700UL) )
#define GFXREG_LAYERBLEND_SET_PRIM_A_BLD_FUNC(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0x700UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_PRIM_A_BLD_FUNC(s) ((((s)->blendcontrol) >> 8U) & 0x7UL)
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_ZERO 0x0U /* Aout = Ain * 0 */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_ONE 0x1U /* Aout = Ain * 1 */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_PRIM_ALPHA 0x2U /* Aout = Ain * ALPHA_prim */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_ONE_MINUS_PRIM_ALPHA 0x3U /* Aout = Ain * (1 - ALPHA_prim) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_SEC_ALPHA 0x4U /* Aout = Ain * ALPHA_sec */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_ONE_MINUS_SEC_ALPHA 0x5U /* Aout = Ain * (1 - ALPHA_sec) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_CONST_ALPHA 0x6U /* Aout = Ain * ALPHA_const */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_ONE_MINUS_CONST_ALPHA 0x7U /* Aout = Ain * (1 - ALPHA_const) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_PRIM_A_BLD_FUNC_RESET 0x0U

/* SEC_A_BLD_FUNC: Secondary (overlay) input alpha blending function */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_FSHIFT 12U
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_FMASK 0x7U
#define GFXREG_LAYERBLEND_BLENDCONTROL_SETM_SEC_A_BLD_FUNC(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_LAYERBLEND_BLENDCONTROL_SET_SEC_A_BLD_FUNC(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_BLENDCONTROL_GET_SEC_A_BLD_FUNC(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_LAYERBLEND_SETM_SEC_A_BLD_FUNC(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_LAYERBLEND_SET_SEC_A_BLD_FUNC(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_SEC_A_BLD_FUNC(s) ((((s)->blendcontrol) >> 12U) & 0x7UL)
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_ZERO 0x0U /* Aout = Ain * 0 */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_ONE 0x1U /* Aout = Ain * 1 */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_PRIM_ALPHA 0x2U /* Aout = Ain * ALPHA_prim */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_ONE_MINUS_PRIM_ALPHA 0x3U /* Aout = Ain * (1 - ALPHA_prim) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_SEC_ALPHA 0x4U /* Aout = Ain * ALPHA_sec */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_ONE_MINUS_SEC_ALPHA 0x5U /* Aout = Ain * (1 - ALPHA_sec) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_CONST_ALPHA 0x6U /* Aout = Ain * ALPHA_const */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_ONE_MINUS_CONST_ALPHA 0x7U /* Aout = Ain * (1 - ALPHA_const) */
#define GFXREG_LAYERBLEND_BLENDCONTROL_SEC_A_BLD_FUNC_RESET 0x1U

/* BLENDALPHA: Constant alpha value, used for constant alpha blending */
#define GFXREG_LAYERBLEND_BLENDCONTROL_BLENDALPHA_FSHIFT 16U
#define GFXREG_LAYERBLEND_BLENDCONTROL_BLENDALPHA_FMASK 0xffU
#define GFXREG_LAYERBLEND_BLENDCONTROL_SETM_BLENDALPHA(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_LAYERBLEND_BLENDCONTROL_SET_BLENDALPHA(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_BLENDCONTROL_GET_BLENDALPHA(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_LAYERBLEND_SETM_BLENDALPHA(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_LAYERBLEND_SET_BLENDALPHA(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_BLENDALPHA(s) ((((s)->blendcontrol) >> 16U) & 0xffUL)
#define GFXREG_LAYERBLEND_BLENDCONTROL_BLENDALPHA_RESET 0x0U

/* POSITION: Position of secondary (overlay) input frame */
#define GFXREG_LAYERBLEND_POSITION 0x0000000cU
/* XPOS: horizontal position, first pixel is at 0, format s15 (twos complement) */
#define GFXREG_LAYERBLEND_POSITION_XPOS_FSHIFT 0U
#define GFXREG_LAYERBLEND_POSITION_XPOS_FMASK 0xffffU
#define GFXREG_LAYERBLEND_POSITION_SETM_XPOS(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_LAYERBLEND_POSITION_SET_XPOS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_POSITION_GET_XPOS(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_LAYERBLEND_SETM_XPOS(s,val) ( (s)->position = ((s)->position & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_LAYERBLEND_SET_XPOS(s,val)  ( (s)->position = (((s)->position & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_XPOS(s) ((((s)->position) ) & 0xffffUL)
#define GFXREG_LAYERBLEND_POSITION_XPOS_RESET 0x0U

/* YPOS: vertical position, first pixel is at 0, format s15 (twos complement) */
#define GFXREG_LAYERBLEND_POSITION_YPOS_FSHIFT 16U
#define GFXREG_LAYERBLEND_POSITION_YPOS_FMASK 0xffffU
#define GFXREG_LAYERBLEND_POSITION_SETM_YPOS(val) (((CYGFX_U32)(val) & 0xffffUL) << 16U)
#define GFXREG_LAYERBLEND_POSITION_SET_YPOS(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_LAYERBLEND_POSITION_GET_YPOS(val) (((CYGFX_U32)(val) >> 16U) & 0xffffUL)
#define GFXREG_LAYERBLEND_SETM_YPOS(s,val) ( (s)->position = ((s)->position & ~0xffff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xffff0000UL) )
#define GFXREG_LAYERBLEND_SET_YPOS(s,val)  ( (s)->position = (((s)->position & ~0xffff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_LAYERBLEND_GET_YPOS(s) ((((s)->position) >> 16U) & 0xffffUL)
#define GFXREG_LAYERBLEND_POSITION_YPOS_RESET 0x0U

/* PRIMCONTROLWORD: Value of last received primary (background) control word, for debugging */
#define GFXREG_LAYERBLEND_PRIMCONTROLWORD 0x00000010U
/* P_VAL: Value of last received control word */
#define GFXREG_LAYERBLEND_PRIMCONTROLWORD_P_VAL_FSHIFT 0U
#define GFXREG_LAYERBLEND_PRIMCONTROLWORD_P_VAL_FMASK 0xffffffffU
#define GFXREG_LAYERBLEND_PRIMCONTROLWORD_GET_P_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_LAYERBLEND_GET_P_VAL(s) ((((s)->primcontrolword) ) & 0xffffffffUL)
#define GFXREG_LAYERBLEND_PRIMCONTROLWORD_P_VAL_RESET (none)U

/* SECCONTROLWORD: Value of last received secondary (overlay) control word, for debugging */
#define GFXREG_LAYERBLEND_SECCONTROLWORD 0x00000014U
/* S_VAL: Value of last received control word */
#define GFXREG_LAYERBLEND_SECCONTROLWORD_S_VAL_FSHIFT 0U
#define GFXREG_LAYERBLEND_SECCONTROLWORD_S_VAL_FMASK 0xffffffffU
#define GFXREG_LAYERBLEND_SECCONTROLWORD_GET_S_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_LAYERBLEND_GET_S_VAL(s) ((((s)->seccontrolword) ) & 0xffffffffUL)
#define GFXREG_LAYERBLEND_SECCONTROLWORD_S_VAL_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_LAYERBLEND_REGISTER_H */

