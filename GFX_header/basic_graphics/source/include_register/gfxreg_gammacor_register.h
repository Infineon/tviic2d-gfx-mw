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
 * \version     1.00
 * \date        Tue May 26 11:58:40 2020
 * \file        gfxreg_gammacor_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   gammacor
 *              Source:   gammacor.component.xml
 *              Template: component_h.tpl
 * \brief      Iris gammacor register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_GAMMACOR_REGISTER_H
#define GFXREG_GAMMACOR_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* gammacor registers */
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
#define GFXREG_GAMMACOR_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_GAMMACOR_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_GAMMACOR_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_GAMMACOR_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_GAMMACOR_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_GAMMACOR_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_GAMMACOR_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_GAMMACOR_STATICCONTROL_SHDEN_RESET 0U

/* BLUEWRITEENABLE: Write enable for the blue color sampling point entries. */
#define GFXREG_GAMMACOR_STATICCONTROL_BLUEWRITEENABLE_FSHIFT 1U
#define GFXREG_GAMMACOR_STATICCONTROL_BLUEWRITEENABLE_FMASK 0x1U
#define GFXREG_GAMMACOR_STATICCONTROL_SETM_BLUEWRITEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_GAMMACOR_STATICCONTROL_SET_BLUEWRITEENABLE(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_STATICCONTROL_GET_BLUEWRITEENABLE(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_GAMMACOR_SETM_BLUEWRITEENABLE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_GAMMACOR_SET_BLUEWRITEENABLE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_BLUEWRITEENABLE(s) ((((s)->staticcontrol) >> 1U) & 0x1UL)
#define GFXREG_GAMMACOR_STATICCONTROL_BLUEWRITEENABLE_RESET 0x1U

/* GREENWRITEENABLE: Write enable for the green color sampling point entries. */
#define GFXREG_GAMMACOR_STATICCONTROL_GREENWRITEENABLE_FSHIFT 2U
#define GFXREG_GAMMACOR_STATICCONTROL_GREENWRITEENABLE_FMASK 0x1U
#define GFXREG_GAMMACOR_STATICCONTROL_SETM_GREENWRITEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 2U)
#define GFXREG_GAMMACOR_STATICCONTROL_SET_GREENWRITEENABLE(val) (((CYGFX_U32)(val) << 2U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_STATICCONTROL_GET_GREENWRITEENABLE(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_GAMMACOR_SETM_GREENWRITEENABLE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x4UL) | (((CYGFX_U32)(val) << 2U) & 0x4UL) )
#define GFXREG_GAMMACOR_SET_GREENWRITEENABLE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x4UL) | ((CYGFX_U32)(val) << 2U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_GREENWRITEENABLE(s) ((((s)->staticcontrol) >> 2U) & 0x1UL)
#define GFXREG_GAMMACOR_STATICCONTROL_GREENWRITEENABLE_RESET 0x1U

/* REDWRITEENABLE: Write enable for the red color sampling point entries. */
#define GFXREG_GAMMACOR_STATICCONTROL_REDWRITEENABLE_FSHIFT 3U
#define GFXREG_GAMMACOR_STATICCONTROL_REDWRITEENABLE_FMASK 0x1U
#define GFXREG_GAMMACOR_STATICCONTROL_SETM_REDWRITEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_GAMMACOR_STATICCONTROL_SET_REDWRITEENABLE(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_STATICCONTROL_GET_REDWRITEENABLE(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_GAMMACOR_SETM_REDWRITEENABLE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_GAMMACOR_SET_REDWRITEENABLE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_REDWRITEENABLE(s) ((((s)->staticcontrol) >> 3U) & 0x1UL)
#define GFXREG_GAMMACOR_STATICCONTROL_REDWRITEENABLE_RESET 0x1U

/* LUTSTART: Start values for look-up table programming.
   To program the 33 sampling points of the gamma correction curve, first this register must be written with a start value.         Then the register LutDeltas must be written 33 times.         This will compute the sample point values internally by incrementing the start value with the delta values written. The internal representation of the sampling points can hold all values between -512 and 1535, do not exceed this range.         1st sample point corresponds to 10-bit input color code 0, 2nd one to 32, ..., last one to 1024.         Although input 1024 is not possible, the last sample point is needed for interpolation of codes 993 to 1023.         The current sample points cannot be read, however, internally they are shadowed and behave like RWS-type fields.        */
#define GFXREG_GAMMACOR_LUTSTART 0x00000004U
/* STARTBLUE: Start value for blue or chroma (V) channel. */
#define GFXREG_GAMMACOR_LUTSTART_STARTBLUE_FSHIFT 0U
#define GFXREG_GAMMACOR_LUTSTART_STARTBLUE_FMASK 0x3ffU
#define GFXREG_GAMMACOR_LUTSTART_SETM_STARTBLUE(val) (((CYGFX_U32)(val) & 0x3ffUL) )
#define GFXREG_GAMMACOR_LUTSTART_SET_STARTBLUE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_LUTSTART_GET_STARTBLUE(val) (((CYGFX_U32)(val) ) & 0x3ffUL)
#define GFXREG_GAMMACOR_SETM_STARTBLUE(s,val) ( (s)->lutstart = ((s)->lutstart & ~0x3ffUL) | (((CYGFX_U32)(val) ) & 0x3ffUL) )
#define GFXREG_GAMMACOR_SET_STARTBLUE(s,val)  ( (s)->lutstart = (((s)->lutstart & ~0x3ffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_STARTBLUE(s) ((((s)->lutstart) ) & 0x3ffUL)
#define GFXREG_GAMMACOR_LUTSTART_STARTBLUE_RESET 0U

/* STARTGREEN: Start value for green or chroma (U) channel. */
#define GFXREG_GAMMACOR_LUTSTART_STARTGREEN_FSHIFT 10U
#define GFXREG_GAMMACOR_LUTSTART_STARTGREEN_FMASK 0x3ffU
#define GFXREG_GAMMACOR_LUTSTART_SETM_STARTGREEN(val) (((CYGFX_U32)(val) & 0x3ffUL) << 10U)
#define GFXREG_GAMMACOR_LUTSTART_SET_STARTGREEN(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_LUTSTART_GET_STARTGREEN(val) (((CYGFX_U32)(val) >> 10U) & 0x3ffUL)
#define GFXREG_GAMMACOR_SETM_STARTGREEN(s,val) ( (s)->lutstart = ((s)->lutstart & ~0xffc00UL) | (((CYGFX_U32)(val) << 10U) & 0xffc00UL) )
#define GFXREG_GAMMACOR_SET_STARTGREEN(s,val)  ( (s)->lutstart = (((s)->lutstart & ~0xffc00UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_STARTGREEN(s) ((((s)->lutstart) >> 10U) & 0x3ffUL)
#define GFXREG_GAMMACOR_LUTSTART_STARTGREEN_RESET 0U

/* STARTRED: Start value for red or luma (Y) channel. */
#define GFXREG_GAMMACOR_LUTSTART_STARTRED_FSHIFT 20U
#define GFXREG_GAMMACOR_LUTSTART_STARTRED_FMASK 0x3ffU
#define GFXREG_GAMMACOR_LUTSTART_SETM_STARTRED(val) (((CYGFX_U32)(val) & 0x3ffUL) << 20U)
#define GFXREG_GAMMACOR_LUTSTART_SET_STARTRED(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_LUTSTART_GET_STARTRED(val) (((CYGFX_U32)(val) >> 20U) & 0x3ffUL)
#define GFXREG_GAMMACOR_SETM_STARTRED(s,val) ( (s)->lutstart = ((s)->lutstart & ~0x3ff00000UL) | (((CYGFX_U32)(val) << 20U) & 0x3ff00000UL) )
#define GFXREG_GAMMACOR_SET_STARTRED(s,val)  ( (s)->lutstart = (((s)->lutstart & ~0x3ff00000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_STARTRED(s) ((((s)->lutstart) >> 20U) & 0x3ffUL)
#define GFXREG_GAMMACOR_LUTSTART_STARTRED_RESET 0U

/* LUTDELTAS: Delta values for look-up table programming. */
#define GFXREG_GAMMACOR_LUTDELTAS 0x00000008U
/* DELTABLUE: Delta value for blue or chroma (V) channel. */
#define GFXREG_GAMMACOR_LUTDELTAS_DELTABLUE_FSHIFT 0U
#define GFXREG_GAMMACOR_LUTDELTAS_DELTABLUE_FMASK 0x3ffU
#define GFXREG_GAMMACOR_LUTDELTAS_SETM_DELTABLUE(val) (((CYGFX_U32)(val) & 0x3ffUL) )
#define GFXREG_GAMMACOR_LUTDELTAS_SET_DELTABLUE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_LUTDELTAS_GET_DELTABLUE(val) (((CYGFX_U32)(val) ) & 0x3ffUL)
#define GFXREG_GAMMACOR_SETM_DELTABLUE(s,val) ( (s)->lutdeltas = ((s)->lutdeltas & ~0x3ffUL) | (((CYGFX_U32)(val) ) & 0x3ffUL) )
#define GFXREG_GAMMACOR_SET_DELTABLUE(s,val)  ( (s)->lutdeltas = (((s)->lutdeltas & ~0x3ffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_DELTABLUE(s) ((((s)->lutdeltas) ) & 0x3ffUL)
#define GFXREG_GAMMACOR_LUTDELTAS_DELTABLUE_RESET (none)U

/* DELTAGREEN: Delta value for green or chroma (U) channel. */
#define GFXREG_GAMMACOR_LUTDELTAS_DELTAGREEN_FSHIFT 10U
#define GFXREG_GAMMACOR_LUTDELTAS_DELTAGREEN_FMASK 0x3ffU
#define GFXREG_GAMMACOR_LUTDELTAS_SETM_DELTAGREEN(val) (((CYGFX_U32)(val) & 0x3ffUL) << 10U)
#define GFXREG_GAMMACOR_LUTDELTAS_SET_DELTAGREEN(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_LUTDELTAS_GET_DELTAGREEN(val) (((CYGFX_U32)(val) >> 10U) & 0x3ffUL)
#define GFXREG_GAMMACOR_SETM_DELTAGREEN(s,val) ( (s)->lutdeltas = ((s)->lutdeltas & ~0xffc00UL) | (((CYGFX_U32)(val) << 10U) & 0xffc00UL) )
#define GFXREG_GAMMACOR_SET_DELTAGREEN(s,val)  ( (s)->lutdeltas = (((s)->lutdeltas & ~0xffc00UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_DELTAGREEN(s) ((((s)->lutdeltas) >> 10U) & 0x3ffUL)
#define GFXREG_GAMMACOR_LUTDELTAS_DELTAGREEN_RESET (none)U

/* DELTARED: Delta value for red or luma (Y) channel. */
#define GFXREG_GAMMACOR_LUTDELTAS_DELTARED_FSHIFT 20U
#define GFXREG_GAMMACOR_LUTDELTAS_DELTARED_FMASK 0x3ffU
#define GFXREG_GAMMACOR_LUTDELTAS_SETM_DELTARED(val) (((CYGFX_U32)(val) & 0x3ffUL) << 20U)
#define GFXREG_GAMMACOR_LUTDELTAS_SET_DELTARED(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_LUTDELTAS_GET_DELTARED(val) (((CYGFX_U32)(val) >> 20U) & 0x3ffUL)
#define GFXREG_GAMMACOR_SETM_DELTARED(s,val) ( (s)->lutdeltas = ((s)->lutdeltas & ~0x3ff00000UL) | (((CYGFX_U32)(val) << 20U) & 0x3ff00000UL) )
#define GFXREG_GAMMACOR_SET_DELTARED(s,val)  ( (s)->lutdeltas = (((s)->lutdeltas & ~0x3ff00000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_DELTARED(s) ((((s)->lutdeltas) >> 20U) & 0x3ffUL)
#define GFXREG_GAMMACOR_LUTDELTAS_DELTARED_RESET (none)U

/* CONTROL: Dynamic control settings. */
#define GFXREG_GAMMACOR_CONTROL 0x0000000cU
/* MODE: Operation mode for gamma correction unit */
#define GFXREG_GAMMACOR_CONTROL_MODE_FSHIFT 0U
#define GFXREG_GAMMACOR_CONTROL_MODE_FMASK 0x1U
#define GFXREG_GAMMACOR_CONTROL_SETM_MODE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_GAMMACOR_CONTROL_SET_MODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_CONTROL_GET_MODE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_GAMMACOR_SETM_MODE(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_GAMMACOR_SET_MODE(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_MODE(s) ((((s)->control) ) & 0x1UL)
#define GFXREG_GAMMACOR_CONTROL_MODE_NEUTRAL 0x0U /* Module in neutral mode, input data is bypassed to the output. */
#define GFXREG_GAMMACOR_CONTROL_MODE_GAMMACOR 0x1U /* Module in gamma correction mode. */
#define GFXREG_GAMMACOR_CONTROL_MODE_RESET 0x0U

/* ALPHAMASK: Value 1 enables the alpha mask mode. In this mode all pixels with an alpha value smaller than 0.5 are by-passed unchanged. */
#define GFXREG_GAMMACOR_CONTROL_ALPHAMASK_FSHIFT 4U
#define GFXREG_GAMMACOR_CONTROL_ALPHAMASK_FMASK 0x1U
#define GFXREG_GAMMACOR_CONTROL_SETM_ALPHAMASK(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_GAMMACOR_CONTROL_SET_ALPHAMASK(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_CONTROL_GET_ALPHAMASK(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_GAMMACOR_SETM_ALPHAMASK(s,val) ( (s)->control = ((s)->control & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_GAMMACOR_SET_ALPHAMASK(s,val)  ( (s)->control = (((s)->control & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_ALPHAMASK(s) ((((s)->control) >> 4U) & 0x1UL)
#define GFXREG_GAMMACOR_CONTROL_ALPHAMASK_RESET 0x0U

/* ALPHAINVERT: Value 1 inverts the effect of the alpha mask mode when enabled (pixels with alpha value greater or equal 0.5 are by-passed). */
#define GFXREG_GAMMACOR_CONTROL_ALPHAINVERT_FSHIFT 5U
#define GFXREG_GAMMACOR_CONTROL_ALPHAINVERT_FMASK 0x1U
#define GFXREG_GAMMACOR_CONTROL_SETM_ALPHAINVERT(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_GAMMACOR_CONTROL_SET_ALPHAINVERT(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_CONTROL_GET_ALPHAINVERT(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_GAMMACOR_SETM_ALPHAINVERT(s,val) ( (s)->control = ((s)->control & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_GAMMACOR_SET_ALPHAINVERT(s,val)  ( (s)->control = (((s)->control & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_ALPHAINVERT(s) ((((s)->control) >> 5U) & 0x1UL)
#define GFXREG_GAMMACOR_CONTROL_ALPHAINVERT_RESET 0x0U

/* STATUS: Internal status bits. */
#define GFXREG_GAMMACOR_STATUS 0x00000010U
/* WRITETIMEOUT: Timeout detected when writing to the sampling point table. */
#define GFXREG_GAMMACOR_STATUS_WRITETIMEOUT_FSHIFT 0U
#define GFXREG_GAMMACOR_STATUS_WRITETIMEOUT_FMASK 0x1U
#define GFXREG_GAMMACOR_STATUS_SETM_WRITETIMEOUT(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_GAMMACOR_STATUS_SET_WRITETIMEOUT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GAMMACOR_STATUS_GET_WRITETIMEOUT(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_GAMMACOR_SETM_WRITETIMEOUT(s,val) ( (s)->status = ((s)->status & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_GAMMACOR_SET_WRITETIMEOUT(s,val)  ( (s)->status = (((s)->status & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GAMMACOR_GET_WRITETIMEOUT(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_GAMMACOR_STATUS_WRITETIMEOUT_RESET 0x0U

/* LASTCONTROLWORD: Value of last received control word. */
#define GFXREG_GAMMACOR_LASTCONTROLWORD 0x00000014U
/* L_VAL: Value of last received control word. For debug purposes only, read when stable only, otherwise read data might be corrupted. */
#define GFXREG_GAMMACOR_LASTCONTROLWORD_L_VAL_FSHIFT 0U
#define GFXREG_GAMMACOR_LASTCONTROLWORD_L_VAL_FMASK 0xffffffffU
#define GFXREG_GAMMACOR_LASTCONTROLWORD_GET_L_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GAMMACOR_GET_L_VAL(s) ((((s)->lastcontrolword) ) & 0xffffffffUL)
#define GFXREG_GAMMACOR_LASTCONTROLWORD_L_VAL_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_GAMMACOR_REGISTER_H */

