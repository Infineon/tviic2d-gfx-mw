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
 * \date        Mon Jul 05 13:05:16 2021
 * \file        gfxreg_compengcfg_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   compengcfg
 *              Source:   compengcfg.component.xml
 *              Template: component_h.tpl
 * \brief      Iris compengcfg register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_COMPENGCFG_REGISTER_H
#define GFXREG_COMPENGCFG_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* compengcfg registers */
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


/* PALETTE: Shared Color Palette Memory. */
#define GFXREG_COMPENGCFG_PALETTE 0x00000000U
/* PALETTEENTRY: Shared palette entry with 24-bit. Color format can be defined by Fetch configuration. */
#define GFXREG_COMPENGCFG_PALETTE_PALETTEENTRY_FSHIFT 0U
#define GFXREG_COMPENGCFG_PALETTE_PALETTEENTRY_FMASK 0xffffffU
#define GFXREG_COMPENGCFG_PALETTE_SETM_PALETTEENTRY(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_COMPENGCFG_PALETTE_SET_PALETTEENTRY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_PALETTE_GET_PALETTEENTRY(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_COMPENGCFG_SETM_PALETTEENTRY(s,val) ( (s)->palette = ((s)->palette & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_COMPENGCFG_SET_PALETTEENTRY(s,val)  ( (s)->palette = (((s)->palette & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_PALETTEENTRY(s) ((((s)->palette) ) & 0xffffffUL)
#define GFXREG_COMPENGCFG_PALETTE_PALETTEENTRY_RESET (none)U



/* EXTDST0_SAFETYMASK: Safety mask for extdst0
   Bitmapping of extdst0_SafetyMask field */
#define GFXREG_COMPENGCFG_EXTDST0_SAFETYMASK 0x00001000U
/* EXTDST0_SAFETYMASK: Each bit in this field describes whether the corresponding processing unit is allowed to be configured in a path leading to this endpoint (extdst0). 1 = allowed, 0 = prohibited. */
#define GFXREG_COMPENGCFG_EXTDST0_SAFETYMASK_EXTDST0_SAFETYMASK_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST0_SAFETYMASK_EXTDST0_SAFETYMASK_FMASK 0x1fffffU
#define GFXREG_COMPENGCFG_EXTDST0_SAFETYMASK_SETM_EXTDST0_SAFETYMASK(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_EXTDST0_SAFETYMASK_SET_EXTDST0_SAFETYMASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST0_SAFETYMASK_GET_EXTDST0_SAFETYMASK(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST0_SAFETYMASK(s,val) ( (s)->extdst0_safetymask = ((s)->extdst0_safetymask & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_SAFETYMASK(s,val)  ( (s)->extdst0_safetymask = (((s)->extdst0_safetymask & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST0_SAFETYMASK(s) ((((s)->extdst0_safetymask) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_EXTDST0_SAFETYMASK_EXTDST0_SAFETYMASK_RESET 2097151U

/* EXTDST4_SAFETYMASK: Safety mask for extdst4
   Bitmapping of extdst4_SafetyMask field */
#define GFXREG_COMPENGCFG_EXTDST4_SAFETYMASK 0x00001004U
/* EXTDST4_SAFETYMASK: Each bit in this field describes whether the corresponding processing unit is allowed to be configured in a path leading to this endpoint (extdst4). 1 = allowed, 0 = prohibited. */
#define GFXREG_COMPENGCFG_EXTDST4_SAFETYMASK_EXTDST4_SAFETYMASK_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST4_SAFETYMASK_EXTDST4_SAFETYMASK_FMASK 0x1fffffU
#define GFXREG_COMPENGCFG_EXTDST4_SAFETYMASK_SETM_EXTDST4_SAFETYMASK(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_EXTDST4_SAFETYMASK_SET_EXTDST4_SAFETYMASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST4_SAFETYMASK_GET_EXTDST4_SAFETYMASK(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST4_SAFETYMASK(s,val) ( (s)->extdst4_safetymask = ((s)->extdst4_safetymask & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_SAFETYMASK(s,val)  ( (s)->extdst4_safetymask = (((s)->extdst4_safetymask & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST4_SAFETYMASK(s) ((((s)->extdst4_safetymask) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_EXTDST4_SAFETYMASK_EXTDST4_SAFETYMASK_RESET 2097151U

/* EXTDST1_SAFETYMASK: Safety mask for extdst1
   Bitmapping of extdst1_SafetyMask field */
#define GFXREG_COMPENGCFG_EXTDST1_SAFETYMASK 0x00001008U
/* EXTDST1_SAFETYMASK: Each bit in this field describes whether the corresponding processing unit is allowed to be configured in a path leading to this endpoint (extdst1). 1 = allowed, 0 = prohibited. */
#define GFXREG_COMPENGCFG_EXTDST1_SAFETYMASK_EXTDST1_SAFETYMASK_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST1_SAFETYMASK_EXTDST1_SAFETYMASK_FMASK 0x1fffffU
#define GFXREG_COMPENGCFG_EXTDST1_SAFETYMASK_SETM_EXTDST1_SAFETYMASK(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_EXTDST1_SAFETYMASK_SET_EXTDST1_SAFETYMASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST1_SAFETYMASK_GET_EXTDST1_SAFETYMASK(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST1_SAFETYMASK(s,val) ( (s)->extdst1_safetymask = ((s)->extdst1_safetymask & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_SAFETYMASK(s,val)  ( (s)->extdst1_safetymask = (((s)->extdst1_safetymask & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST1_SAFETYMASK(s) ((((s)->extdst1_safetymask) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_EXTDST1_SAFETYMASK_EXTDST1_SAFETYMASK_RESET 2097151U

/* EXTDST5_SAFETYMASK: Safety mask for extdst5
   Bitmapping of extdst5_SafetyMask field */
#define GFXREG_COMPENGCFG_EXTDST5_SAFETYMASK 0x0000100cU
/* EXTDST5_SAFETYMASK: Each bit in this field describes whether the corresponding processing unit is allowed to be configured in a path leading to this endpoint (extdst5). 1 = allowed, 0 = prohibited. */
#define GFXREG_COMPENGCFG_EXTDST5_SAFETYMASK_EXTDST5_SAFETYMASK_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST5_SAFETYMASK_EXTDST5_SAFETYMASK_FMASK 0x1fffffU
#define GFXREG_COMPENGCFG_EXTDST5_SAFETYMASK_SETM_EXTDST5_SAFETYMASK(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_EXTDST5_SAFETYMASK_SET_EXTDST5_SAFETYMASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST5_SAFETYMASK_GET_EXTDST5_SAFETYMASK(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST5_SAFETYMASK(s,val) ( (s)->extdst5_safetymask = ((s)->extdst5_safetymask & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_SAFETYMASK(s,val)  ( (s)->extdst5_safetymask = (((s)->extdst5_safetymask & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST5_SAFETYMASK(s) ((((s)->extdst5_safetymask) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_EXTDST5_SAFETYMASK_EXTDST5_SAFETYMASK_RESET 2097151U

/* STORE4_SAFETYMASK: Safety mask for store4
   Bitmapping of store4_SafetyMask field */
#define GFXREG_COMPENGCFG_STORE4_SAFETYMASK 0x00001010U
/* STORE4_SAFETYMASK: Each bit in this field describes whether the corresponding processing unit is allowed to be configured in a path leading to this endpoint (store4). 1 = allowed, 0 = prohibited. */
#define GFXREG_COMPENGCFG_STORE4_SAFETYMASK_STORE4_SAFETYMASK_FSHIFT 0U
#define GFXREG_COMPENGCFG_STORE4_SAFETYMASK_STORE4_SAFETYMASK_FMASK 0x1fffffU
#define GFXREG_COMPENGCFG_STORE4_SAFETYMASK_SETM_STORE4_SAFETYMASK(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_STORE4_SAFETYMASK_SET_STORE4_SAFETYMASK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_STORE4_SAFETYMASK_GET_STORE4_SAFETYMASK(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_SETM_STORE4_SAFETYMASK(s,val) ( (s)->store4_safetymask = ((s)->store4_safetymask & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_COMPENGCFG_SET_STORE4_SAFETYMASK(s,val)  ( (s)->store4_safetymask = (((s)->store4_safetymask & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_STORE4_SAFETYMASK(s) ((((s)->store4_safetymask) ) & 0x1fffffUL)
#define GFXREG_COMPENGCFG_STORE4_SAFETYMASK_STORE4_SAFETYMASK_RESET 2097151U



/* CONSTFRAME0_STATUS: Status information for pixel engine configuration of constframe0 */
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS 0x00001020U
/* CONSTFRAME0_SEL: Status of the connection of the constframe0 module */
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_CONSTFRAME0_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_CONSTFRAME0_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_GET_CONSTFRAME0_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_CONSTFRAME0_SEL(s) ((((s)->constframe0_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_CONSTFRAME0_SEL_EXTDST0 1U /* constframe0 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_CONSTFRAME0_SEL_EXTDST4 2U /* constframe0 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_CONSTFRAME0_SEL_EXTDST1 3U /* constframe0 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_CONSTFRAME0_SEL_EXTDST5 4U /* constframe0 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_CONSTFRAME0_SEL_STORE4 5U /* constframe0 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_CONSTFRAME0_SEL_DISABLE 0U /* constframe0 module is not used */
#define GFXREG_COMPENGCFG_CONSTFRAME0_STATUS_CONSTFRAME0_SEL_RESET (none)U



/* EXTDST0_STATIC: Static pixel engine configuration for extdst0
   If powerdown is activated all submodules on the pipeline attached to the endpoint that have their _clken setting set to AUTOMATIC will not receive a clock and setting extdst0_div will not have any effect. Always deactivate the powerdown of an endpoint before using it or any units connected to it. */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC 0x00001040U
/* EXTDST0_SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed) for pixelbus configuration of pipeline with endpoint extdst0. */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SHDEN_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SHDEN_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SETM_EXTDST0_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SET_EXTDST0_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_GET_EXTDST0_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST0_SHDEN(s,val) ( (s)->extdst0_static = ((s)->extdst0_static & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_SHDEN(s,val)  ( (s)->extdst0_static = (((s)->extdst0_static & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST0_SHDEN(s) ((((s)->extdst0_static) ) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SHDEN_RESET 0x0U

/* EXTDST0_POWERDOWN: Set this to 1 to activate powerdown or to 0 to deactivate powerdown for the extdst0 endpoint. */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_POWERDOWN_FSHIFT 4U
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_POWERDOWN_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SETM_EXTDST0_POWERDOWN(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SET_EXTDST0_POWERDOWN(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_GET_EXTDST0_POWERDOWN(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST0_POWERDOWN(s,val) ( (s)->extdst0_static = ((s)->extdst0_static & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_POWERDOWN(s,val)  ( (s)->extdst0_static = (((s)->extdst0_static & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST0_POWERDOWN(s) ((((s)->extdst0_static) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_POWERDOWN_RESET 0x1U

/* EXTDST0_SYNC_MODE: Synchronization mode for extdst0 pipeline endpoint synchronizer */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SYNC_MODE_FSHIFT 8U
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SYNC_MODE_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SETM_EXTDST0_SYNC_MODE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SET_EXTDST0_SYNC_MODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_GET_EXTDST0_SYNC_MODE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST0_SYNC_MODE(s,val) ( (s)->extdst0_static = ((s)->extdst0_static & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_SYNC_MODE(s,val)  ( (s)->extdst0_static = (((s)->extdst0_static & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST0_SYNC_MODE(s) ((((s)->extdst0_static) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SYNC_MODE_SINGLE 0x0U /* Reconfig pipeline after explicit trigger */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SYNC_MODE_AUTO 0x1U /* Reconfig pipeline after every kick when idle */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SYNC_MODE_RESET 0U

/* EXTDST0_SW_RESET: Software reset for extdst0 synchronizer, for debug purposes only */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SW_RESET_FSHIFT 11U
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SW_RESET_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SETM_EXTDST0_SW_RESET(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SET_EXTDST0_SW_RESET(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_GET_EXTDST0_SW_RESET(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST0_SW_RESET(s,val) ( (s)->extdst0_static = ((s)->extdst0_static & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_SW_RESET(s,val)  ( (s)->extdst0_static = (((s)->extdst0_static & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST0_SW_RESET(s) ((((s)->extdst0_static) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SW_RESET_OPERATION 0x0U /* Normal Operation */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SW_RESET_SWRESET 0x1U /* Software Reset */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_SW_RESET_RESET 0U

/* EXTDST0_DIV: extdst0 clock dividing factor (ratio is register_value/128, values above 128 are reserved). If a value smaller than 0x80 is used, than the *_clken registers of all enabled submodules have to be set to AUTOMATIC. The value 0x0 disables the clock while the value 0x80 sets the clock at full speed. */
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_DIV_FSHIFT 16U
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_DIV_FMASK 0xffU
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SETM_EXTDST0_DIV(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_SET_EXTDST0_DIV(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_GET_EXTDST0_DIV(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST0_DIV(s,val) ( (s)->extdst0_static = ((s)->extdst0_static & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_DIV(s,val)  ( (s)->extdst0_static = (((s)->extdst0_static & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST0_DIV(s) ((((s)->extdst0_static) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_EXTDST0_STATIC_EXTDST0_DIV_RESET 0x80U

/* EXTDST0_DYNAMIC: Dynamic pixel engine configuration for extdst0 */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC 0x00001044U
/* EXTDST0_SRC_SEL: Selection of the source for the src input of the extdst0 module */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_SETM_EXTDST0_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_SET_EXTDST0_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_GET_EXTDST0_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST0_SRC_SEL(s,val) ( (s)->extdst0_dynamic = ((s)->extdst0_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_SRC_SEL(s,val)  ( (s)->extdst0_dynamic = (((s)->extdst0_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST0_SRC_SEL(s) ((((s)->extdst0_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_DISABLE 0U /* Unit extdst0 input port src is disabled */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_CONSTFRAME0 1U /* Unit extdst0 input port src is connected to output of unit constframe0 */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_GPSCALER4 20U /* Unit extdst0 input port src is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_EXTSRC4 9U /* Unit extdst0 input port src is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_LAYERBLEND5 26U /* Unit extdst0 input port src is connected to output of unit layerblend5 */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_LAYERBLEND4 25U /* Unit extdst0 input port src is connected to output of unit layerblend4 */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_LAYERBLEND3 24U /* Unit extdst0 input port src is connected to output of unit layerblend3 */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_LAYERBLEND2 23U /* Unit extdst0 input port src is connected to output of unit layerblend2 */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_LAYERBLEND1 22U /* Unit extdst0 input port src is connected to output of unit layerblend1 */
#define GFXREG_COMPENGCFG_EXTDST0_DYNAMIC_EXTDST0_SRC_SEL_RESET 23U

/* EXTDST0_REQUEST: ShadowLoadRequest register for endpoint extdst0
   When the request is set for destination extdst0, the next time the synchronizer is activated the shadow token is triggered to reload the pixelbus configuration leading up to this endpoint. If the request is not set for this endpoint then the shadow token is not triggered for the pixelbus configuration of this endpoint. */
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST 0x00001048U
/* EXTDST0_SEL_SHDLDREQ: Shadow load request flag for destination extdst0. */
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_EXTDST0_SEL_SHDLDREQ_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_EXTDST0_SEL_SHDLDREQ_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_SETM_EXTDST0_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_SET_EXTDST0_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_GET_EXTDST0_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST0_SEL_SHDLDREQ(s,val) ( (s)->extdst0_request = ((s)->extdst0_request & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_SEL_SHDLDREQ(s,val)  ( (s)->extdst0_request = (((s)->extdst0_request & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST0_SEL_SHDLDREQ(s) ((((s)->extdst0_request) ) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_EXTDST0_SEL_SHDLDREQ_RESET 0U

/* EXTDST0_SHDLDREQ: Vector of shadow load request flag of all sources for destination extdst0. Setting a bit has no effect if the source is currently in a different pipeline than the one of destination extdst0. */
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_EXTDST0_SHDLDREQ_FSHIFT 1U
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_EXTDST0_SHDLDREQ_FMASK 0x1fffU
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_SETM_EXTDST0_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1fffUL) << 1U)
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_SET_EXTDST0_SHDLDREQ(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_GET_EXTDST0_SHDLDREQ(val) (((CYGFX_U32)(val) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST0_SHDLDREQ(s,val) ( (s)->extdst0_request = ((s)->extdst0_request & ~0x3ffeUL) | (((CYGFX_U32)(val) << 1U) & 0x3ffeUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_SHDLDREQ(s,val)  ( (s)->extdst0_request = (((s)->extdst0_request & ~0x3ffeUL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST0_SHDLDREQ(s) ((((s)->extdst0_request) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_EXTDST0_REQUEST_EXTDST0_SHDLDREQ_RESET 0U

/* EXTDST0_TRIGGER: Trigger bits for pixel engine configuration of extdst0 */
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER 0x0000104cU
/* EXTDST0_SYNC_TRIGGER: Writing a '1' to this field triggers reconfiguration of the pipeline with endpoint extdst0 */
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_EXTDST0_SYNC_TRIGGER_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_EXTDST0_SYNC_TRIGGER_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_SETM_EXTDST0_SYNC_TRIGGER(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_SET_EXTDST0_SYNC_TRIGGER(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_EXTDST0_SYNC_TRIGGER(s,val) ( (s)->extdst0_trigger = ((s)->extdst0_trigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_SYNC_TRIGGER(s,val)  ( (s)->extdst0_trigger = (((s)->extdst0_trigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_EXTDST0_SYNC_TRIGGER_RESET (none)U

/* EXTDST0_TRIGGER_SEQUENCE_COMPLETE: By writing a '1' to this register field, you can trigger the extdst0 sequence complete interrupt that will occur as soon as the pipeline with the endpoint extdst0 is empty. This interrupt will also occur if the pipeline is already empty when this field is written. The interrupt will not occur if this field is not written. The interrupt will occur exactly as often as this field is written, assuming that this field is not written again until the interrupt has occured after a previous trigger. */
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_EXTDST0_TRIGGER_SEQUENCE_COMPLETE_FSHIFT 4U
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_EXTDST0_TRIGGER_SEQUENCE_COMPLETE_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_SETM_EXTDST0_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_SET_EXTDST0_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_EXTDST0_TRIGGER_SEQUENCE_COMPLETE(s,val) ( (s)->extdst0_trigger = ((s)->extdst0_trigger & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST0_TRIGGER_SEQUENCE_COMPLETE(s,val)  ( (s)->extdst0_trigger = (((s)->extdst0_trigger & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_EXTDST0_TRIGGER_EXTDST0_TRIGGER_SEQUENCE_COMPLETE_RESET (none)U

/* EXTDST0_STATUS: Status information for pixel engine configuration of extdst0 */
#define GFXREG_COMPENGCFG_EXTDST0_STATUS 0x00001050U
/* EXTDST0_PIPELINE_STATUS: Status of pipeline with endpoint extdst0 */
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_PIPELINE_STATUS_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_PIPELINE_STATUS_FMASK 0x3U
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_GET_EXTDST0_PIPELINE_STATUS(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_COMPENGCFG_GET_EXTDST0_PIPELINE_STATUS(s) ((((s)->extdst0_status) ) & 0x3UL)
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_PIPELINE_STATUS_EMPTY 0x0U /* Pipeline with endpoint extdst0 is empty */
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_PIPELINE_STATUS_RUNNING 0x1U /* Pipeline with endpoint extdst0 is currently processing one operation */
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_PIPELINE_STATUS_RUNNING_RETRIGGERED 0x2U /* Pipeline with endpoint extdst0 is currently processing one operation with a second one already kicked to be processed afterwards */
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_PIPELINE_STATUS_RESERVED 0x3U /* reserved */
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_PIPELINE_STATUS_RESET 0U

/* EXTDST0_SYNC_BUSY: Synchronization busy status of extdst0 endpoint */
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_SYNC_BUSY_FSHIFT 8U
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_SYNC_BUSY_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_GET_EXTDST0_SYNC_BUSY(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_GET_EXTDST0_SYNC_BUSY(s) ((((s)->extdst0_status) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_SYNC_BUSY_IDLE 0x0U /* extdst0 synchronizer is idle */
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_SYNC_BUSY_BUSY 0x1U /* extdst0 synchronizer is busy */
#define GFXREG_COMPENGCFG_EXTDST0_STATUS_EXTDST0_SYNC_BUSY_RESET 0U



/* CONSTFRAME4_STATUS: Status information for pixel engine configuration of constframe4 */
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS 0x00001080U
/* CONSTFRAME4_SEL: Status of the connection of the constframe4 module */
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_CONSTFRAME4_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_CONSTFRAME4_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_GET_CONSTFRAME4_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_CONSTFRAME4_SEL(s) ((((s)->constframe4_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_CONSTFRAME4_SEL_EXTDST0 1U /* constframe4 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_CONSTFRAME4_SEL_EXTDST4 2U /* constframe4 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_CONSTFRAME4_SEL_EXTDST1 3U /* constframe4 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_CONSTFRAME4_SEL_EXTDST5 4U /* constframe4 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_CONSTFRAME4_SEL_STORE4 5U /* constframe4 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_CONSTFRAME4_SEL_DISABLE 0U /* constframe4 module is not used */
#define GFXREG_COMPENGCFG_CONSTFRAME4_STATUS_CONSTFRAME4_SEL_RESET (none)U



/* EXTDST4_STATIC: Static pixel engine configuration for extdst4
   If powerdown is activated all submodules on the pipeline attached to the endpoint that have their _clken setting set to AUTOMATIC will not receive a clock and setting extdst4_div will not have any effect. Always deactivate the powerdown of an endpoint before using it or any units connected to it. */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC 0x000010a0U
/* EXTDST4_SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed) for pixelbus configuration of pipeline with endpoint extdst4. */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SHDEN_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SHDEN_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SETM_EXTDST4_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SET_EXTDST4_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_GET_EXTDST4_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST4_SHDEN(s,val) ( (s)->extdst4_static = ((s)->extdst4_static & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_SHDEN(s,val)  ( (s)->extdst4_static = (((s)->extdst4_static & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST4_SHDEN(s) ((((s)->extdst4_static) ) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SHDEN_RESET 0x0U

/* EXTDST4_POWERDOWN: Set this to 1 to activate powerdown or to 0 to deactivate powerdown for the extdst4 endpoint. */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_POWERDOWN_FSHIFT 4U
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_POWERDOWN_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SETM_EXTDST4_POWERDOWN(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SET_EXTDST4_POWERDOWN(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_GET_EXTDST4_POWERDOWN(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST4_POWERDOWN(s,val) ( (s)->extdst4_static = ((s)->extdst4_static & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_POWERDOWN(s,val)  ( (s)->extdst4_static = (((s)->extdst4_static & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST4_POWERDOWN(s) ((((s)->extdst4_static) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_POWERDOWN_RESET 0x1U

/* EXTDST4_SYNC_MODE: Synchronization mode for extdst4 pipeline endpoint synchronizer */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SYNC_MODE_FSHIFT 8U
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SYNC_MODE_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SETM_EXTDST4_SYNC_MODE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SET_EXTDST4_SYNC_MODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_GET_EXTDST4_SYNC_MODE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST4_SYNC_MODE(s,val) ( (s)->extdst4_static = ((s)->extdst4_static & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_SYNC_MODE(s,val)  ( (s)->extdst4_static = (((s)->extdst4_static & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST4_SYNC_MODE(s) ((((s)->extdst4_static) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SYNC_MODE_SINGLE 0x0U /* Reconfig pipeline after explicit trigger */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SYNC_MODE_AUTO 0x1U /* Reconfig pipeline after every kick when idle */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SYNC_MODE_RESET 0U

/* EXTDST4_SW_RESET: Software reset for extdst4 synchronizer, for debug purposes only */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SW_RESET_FSHIFT 11U
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SW_RESET_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SETM_EXTDST4_SW_RESET(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SET_EXTDST4_SW_RESET(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_GET_EXTDST4_SW_RESET(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST4_SW_RESET(s,val) ( (s)->extdst4_static = ((s)->extdst4_static & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_SW_RESET(s,val)  ( (s)->extdst4_static = (((s)->extdst4_static & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST4_SW_RESET(s) ((((s)->extdst4_static) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SW_RESET_OPERATION 0x0U /* Normal Operation */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SW_RESET_SWRESET 0x1U /* Software Reset */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_SW_RESET_RESET 0U

/* EXTDST4_DIV: extdst4 clock dividing factor (ratio is register_value/128, values above 128 are reserved). If a value smaller than 0x80 is used, than the *_clken registers of all enabled submodules have to be set to AUTOMATIC. The value 0x0 disables the clock while the value 0x80 sets the clock at full speed. */
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_DIV_FSHIFT 16U
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_DIV_FMASK 0xffU
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SETM_EXTDST4_DIV(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_SET_EXTDST4_DIV(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_GET_EXTDST4_DIV(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST4_DIV(s,val) ( (s)->extdst4_static = ((s)->extdst4_static & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_DIV(s,val)  ( (s)->extdst4_static = (((s)->extdst4_static & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST4_DIV(s) ((((s)->extdst4_static) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_EXTDST4_STATIC_EXTDST4_DIV_RESET 0x80U

/* EXTDST4_DYNAMIC: Dynamic pixel engine configuration for extdst4 */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC 0x000010a4U
/* EXTDST4_SRC_SEL: Selection of the source for the src input of the extdst4 module */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_SETM_EXTDST4_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_SET_EXTDST4_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_GET_EXTDST4_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST4_SRC_SEL(s,val) ( (s)->extdst4_dynamic = ((s)->extdst4_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_SRC_SEL(s,val)  ( (s)->extdst4_dynamic = (((s)->extdst4_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST4_SRC_SEL(s) ((((s)->extdst4_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_DISABLE 0U /* Unit extdst4 input port src is disabled */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_CONSTFRAME4 3U /* Unit extdst4 input port src is connected to output of unit constframe4 */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_GPSCALER4 20U /* Unit extdst4 input port src is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_EXTSRC4 9U /* Unit extdst4 input port src is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_LAYERBLEND5 26U /* Unit extdst4 input port src is connected to output of unit layerblend5 */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_LAYERBLEND4 25U /* Unit extdst4 input port src is connected to output of unit layerblend4 */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_LAYERBLEND3 24U /* Unit extdst4 input port src is connected to output of unit layerblend3 */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_LAYERBLEND2 23U /* Unit extdst4 input port src is connected to output of unit layerblend2 */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_LAYERBLEND1 22U /* Unit extdst4 input port src is connected to output of unit layerblend1 */
#define GFXREG_COMPENGCFG_EXTDST4_DYNAMIC_EXTDST4_SRC_SEL_RESET 0U

/* EXTDST4_REQUEST: ShadowLoadRequest register for endpoint extdst4
   When the request is set for destination extdst4, the next time the synchronizer is activated the shadow token is triggered to reload the pixelbus configuration leading up to this endpoint. If the request is not set for this endpoint then the shadow token is not triggered for the pixelbus configuration of this endpoint. */
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST 0x000010a8U
/* EXTDST4_SEL_SHDLDREQ: Shadow load request flag for destination extdst4. */
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_EXTDST4_SEL_SHDLDREQ_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_EXTDST4_SEL_SHDLDREQ_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_SETM_EXTDST4_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_SET_EXTDST4_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_GET_EXTDST4_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST4_SEL_SHDLDREQ(s,val) ( (s)->extdst4_request = ((s)->extdst4_request & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_SEL_SHDLDREQ(s,val)  ( (s)->extdst4_request = (((s)->extdst4_request & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST4_SEL_SHDLDREQ(s) ((((s)->extdst4_request) ) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_EXTDST4_SEL_SHDLDREQ_RESET 0U

/* EXTDST4_SHDLDREQ: Vector of shadow load request flag of all sources for destination extdst4. Setting a bit has no effect if the source is currently in a different pipeline than the one of destination extdst4. */
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_EXTDST4_SHDLDREQ_FSHIFT 1U
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_EXTDST4_SHDLDREQ_FMASK 0x1fffU
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_SETM_EXTDST4_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1fffUL) << 1U)
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_SET_EXTDST4_SHDLDREQ(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_GET_EXTDST4_SHDLDREQ(val) (((CYGFX_U32)(val) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST4_SHDLDREQ(s,val) ( (s)->extdst4_request = ((s)->extdst4_request & ~0x3ffeUL) | (((CYGFX_U32)(val) << 1U) & 0x3ffeUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_SHDLDREQ(s,val)  ( (s)->extdst4_request = (((s)->extdst4_request & ~0x3ffeUL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST4_SHDLDREQ(s) ((((s)->extdst4_request) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_EXTDST4_REQUEST_EXTDST4_SHDLDREQ_RESET 0U

/* EXTDST4_TRIGGER: Trigger bits for pixel engine configuration of extdst4 */
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER 0x000010acU
/* EXTDST4_SYNC_TRIGGER: Writing a '1' to this field triggers reconfiguration of the pipeline with endpoint extdst4 */
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_EXTDST4_SYNC_TRIGGER_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_EXTDST4_SYNC_TRIGGER_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_SETM_EXTDST4_SYNC_TRIGGER(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_SET_EXTDST4_SYNC_TRIGGER(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_EXTDST4_SYNC_TRIGGER(s,val) ( (s)->extdst4_trigger = ((s)->extdst4_trigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_SYNC_TRIGGER(s,val)  ( (s)->extdst4_trigger = (((s)->extdst4_trigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_EXTDST4_SYNC_TRIGGER_RESET (none)U

/* EXTDST4_TRIGGER_SEQUENCE_COMPLETE: By writing a '1' to this register field, you can trigger the extdst4 sequence complete interrupt that will occur as soon as the pipeline with the endpoint extdst4 is empty. This interrupt will also occur if the pipeline is already empty when this field is written. The interrupt will not occur if this field is not written. The interrupt will occur exactly as often as this field is written, assuming that this field is not written again until the interrupt has occured after a previous trigger. */
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_EXTDST4_TRIGGER_SEQUENCE_COMPLETE_FSHIFT 4U
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_EXTDST4_TRIGGER_SEQUENCE_COMPLETE_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_SETM_EXTDST4_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_SET_EXTDST4_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_EXTDST4_TRIGGER_SEQUENCE_COMPLETE(s,val) ( (s)->extdst4_trigger = ((s)->extdst4_trigger & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST4_TRIGGER_SEQUENCE_COMPLETE(s,val)  ( (s)->extdst4_trigger = (((s)->extdst4_trigger & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_EXTDST4_TRIGGER_EXTDST4_TRIGGER_SEQUENCE_COMPLETE_RESET (none)U

/* EXTDST4_STATUS: Status information for pixel engine configuration of extdst4 */
#define GFXREG_COMPENGCFG_EXTDST4_STATUS 0x000010b0U
/* EXTDST4_PIPELINE_STATUS: Status of pipeline with endpoint extdst4 */
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_PIPELINE_STATUS_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_PIPELINE_STATUS_FMASK 0x3U
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_GET_EXTDST4_PIPELINE_STATUS(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_COMPENGCFG_GET_EXTDST4_PIPELINE_STATUS(s) ((((s)->extdst4_status) ) & 0x3UL)
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_PIPELINE_STATUS_EMPTY 0x0U /* Pipeline with endpoint extdst4 is empty */
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_PIPELINE_STATUS_RUNNING 0x1U /* Pipeline with endpoint extdst4 is currently processing one operation */
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_PIPELINE_STATUS_RUNNING_RETRIGGERED 0x2U /* Pipeline with endpoint extdst4 is currently processing one operation with a second one already kicked to be processed afterwards */
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_PIPELINE_STATUS_RESERVED 0x3U /* reserved */
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_PIPELINE_STATUS_RESET 0U

/* EXTDST4_SYNC_BUSY: Synchronization busy status of extdst4 endpoint */
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_SYNC_BUSY_FSHIFT 8U
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_SYNC_BUSY_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_GET_EXTDST4_SYNC_BUSY(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_GET_EXTDST4_SYNC_BUSY(s) ((((s)->extdst4_status) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_SYNC_BUSY_IDLE 0x0U /* extdst4 synchronizer is idle */
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_SYNC_BUSY_BUSY 0x1U /* extdst4 synchronizer is busy */
#define GFXREG_COMPENGCFG_EXTDST4_STATUS_EXTDST4_SYNC_BUSY_RESET 0U



/* CONSTFRAME1_STATUS: Status information for pixel engine configuration of constframe1 */
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS 0x000010c0U
/* CONSTFRAME1_SEL: Status of the connection of the constframe1 module */
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_CONSTFRAME1_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_CONSTFRAME1_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_GET_CONSTFRAME1_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_CONSTFRAME1_SEL(s) ((((s)->constframe1_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_CONSTFRAME1_SEL_EXTDST0 1U /* constframe1 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_CONSTFRAME1_SEL_EXTDST4 2U /* constframe1 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_CONSTFRAME1_SEL_EXTDST1 3U /* constframe1 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_CONSTFRAME1_SEL_EXTDST5 4U /* constframe1 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_CONSTFRAME1_SEL_STORE4 5U /* constframe1 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_CONSTFRAME1_SEL_DISABLE 0U /* constframe1 module is not used */
#define GFXREG_COMPENGCFG_CONSTFRAME1_STATUS_CONSTFRAME1_SEL_RESET (none)U



/* EXTDST1_STATIC: Static pixel engine configuration for extdst1
   If powerdown is activated all submodules on the pipeline attached to the endpoint that have their _clken setting set to AUTOMATIC will not receive a clock and setting extdst1_div will not have any effect. Always deactivate the powerdown of an endpoint before using it or any units connected to it. */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC 0x000010e0U
/* EXTDST1_SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed) for pixelbus configuration of pipeline with endpoint extdst1. */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SHDEN_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SHDEN_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SETM_EXTDST1_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SET_EXTDST1_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_GET_EXTDST1_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST1_SHDEN(s,val) ( (s)->extdst1_static = ((s)->extdst1_static & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_SHDEN(s,val)  ( (s)->extdst1_static = (((s)->extdst1_static & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST1_SHDEN(s) ((((s)->extdst1_static) ) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SHDEN_RESET 0x0U

/* EXTDST1_POWERDOWN: Set this to 1 to activate powerdown or to 0 to deactivate powerdown for the extdst1 endpoint. */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_POWERDOWN_FSHIFT 4U
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_POWERDOWN_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SETM_EXTDST1_POWERDOWN(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SET_EXTDST1_POWERDOWN(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_GET_EXTDST1_POWERDOWN(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST1_POWERDOWN(s,val) ( (s)->extdst1_static = ((s)->extdst1_static & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_POWERDOWN(s,val)  ( (s)->extdst1_static = (((s)->extdst1_static & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST1_POWERDOWN(s) ((((s)->extdst1_static) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_POWERDOWN_RESET 0x1U

/* EXTDST1_SYNC_MODE: Synchronization mode for extdst1 pipeline endpoint synchronizer */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SYNC_MODE_FSHIFT 8U
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SYNC_MODE_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SETM_EXTDST1_SYNC_MODE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SET_EXTDST1_SYNC_MODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_GET_EXTDST1_SYNC_MODE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST1_SYNC_MODE(s,val) ( (s)->extdst1_static = ((s)->extdst1_static & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_SYNC_MODE(s,val)  ( (s)->extdst1_static = (((s)->extdst1_static & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST1_SYNC_MODE(s) ((((s)->extdst1_static) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SYNC_MODE_SINGLE 0x0U /* Reconfig pipeline after explicit trigger */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SYNC_MODE_AUTO 0x1U /* Reconfig pipeline after every kick when idle */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SYNC_MODE_RESET 0U

/* EXTDST1_SW_RESET: Software reset for extdst1 synchronizer, for debug purposes only */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SW_RESET_FSHIFT 11U
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SW_RESET_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SETM_EXTDST1_SW_RESET(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SET_EXTDST1_SW_RESET(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_GET_EXTDST1_SW_RESET(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST1_SW_RESET(s,val) ( (s)->extdst1_static = ((s)->extdst1_static & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_SW_RESET(s,val)  ( (s)->extdst1_static = (((s)->extdst1_static & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST1_SW_RESET(s) ((((s)->extdst1_static) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SW_RESET_OPERATION 0x0U /* Normal Operation */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SW_RESET_SWRESET 0x1U /* Software Reset */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_SW_RESET_RESET 0U

/* EXTDST1_DIV: extdst1 clock dividing factor (ratio is register_value/128, values above 128 are reserved). If a value smaller than 0x80 is used, than the *_clken registers of all enabled submodules have to be set to AUTOMATIC. The value 0x0 disables the clock while the value 0x80 sets the clock at full speed. */
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_DIV_FSHIFT 16U
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_DIV_FMASK 0xffU
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SETM_EXTDST1_DIV(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_SET_EXTDST1_DIV(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_GET_EXTDST1_DIV(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST1_DIV(s,val) ( (s)->extdst1_static = ((s)->extdst1_static & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_DIV(s,val)  ( (s)->extdst1_static = (((s)->extdst1_static & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST1_DIV(s) ((((s)->extdst1_static) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_EXTDST1_STATIC_EXTDST1_DIV_RESET 0x80U

/* EXTDST1_DYNAMIC: Dynamic pixel engine configuration for extdst1 */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC 0x000010e4U
/* EXTDST1_SRC_SEL: Selection of the source for the src input of the extdst1 module */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_SETM_EXTDST1_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_SET_EXTDST1_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_GET_EXTDST1_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST1_SRC_SEL(s,val) ( (s)->extdst1_dynamic = ((s)->extdst1_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_SRC_SEL(s,val)  ( (s)->extdst1_dynamic = (((s)->extdst1_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST1_SRC_SEL(s) ((((s)->extdst1_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_DISABLE 0U /* Unit extdst1 input port src is disabled */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_CONSTFRAME1 5U /* Unit extdst1 input port src is connected to output of unit constframe1 */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_GPSCALER4 20U /* Unit extdst1 input port src is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_EXTSRC4 9U /* Unit extdst1 input port src is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_LAYERBLEND5 26U /* Unit extdst1 input port src is connected to output of unit layerblend5 */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_LAYERBLEND4 25U /* Unit extdst1 input port src is connected to output of unit layerblend4 */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_LAYERBLEND3 24U /* Unit extdst1 input port src is connected to output of unit layerblend3 */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_LAYERBLEND2 23U /* Unit extdst1 input port src is connected to output of unit layerblend2 */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_LAYERBLEND1 22U /* Unit extdst1 input port src is connected to output of unit layerblend1 */
#define GFXREG_COMPENGCFG_EXTDST1_DYNAMIC_EXTDST1_SRC_SEL_RESET 24U

/* EXTDST1_REQUEST: ShadowLoadRequest register for endpoint extdst1
   When the request is set for destination extdst1, the next time the synchronizer is activated the shadow token is triggered to reload the pixelbus configuration leading up to this endpoint. If the request is not set for this endpoint then the shadow token is not triggered for the pixelbus configuration of this endpoint. */
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST 0x000010e8U
/* EXTDST1_SEL_SHDLDREQ: Shadow load request flag for destination extdst1. */
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_EXTDST1_SEL_SHDLDREQ_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_EXTDST1_SEL_SHDLDREQ_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_SETM_EXTDST1_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_SET_EXTDST1_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_GET_EXTDST1_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST1_SEL_SHDLDREQ(s,val) ( (s)->extdst1_request = ((s)->extdst1_request & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_SEL_SHDLDREQ(s,val)  ( (s)->extdst1_request = (((s)->extdst1_request & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST1_SEL_SHDLDREQ(s) ((((s)->extdst1_request) ) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_EXTDST1_SEL_SHDLDREQ_RESET 0U

/* EXTDST1_SHDLDREQ: Vector of shadow load request flag of all sources for destination extdst1. Setting a bit has no effect if the source is currently in a different pipeline than the one of destination extdst1. */
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_EXTDST1_SHDLDREQ_FSHIFT 1U
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_EXTDST1_SHDLDREQ_FMASK 0x1fffU
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_SETM_EXTDST1_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1fffUL) << 1U)
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_SET_EXTDST1_SHDLDREQ(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_GET_EXTDST1_SHDLDREQ(val) (((CYGFX_U32)(val) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST1_SHDLDREQ(s,val) ( (s)->extdst1_request = ((s)->extdst1_request & ~0x3ffeUL) | (((CYGFX_U32)(val) << 1U) & 0x3ffeUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_SHDLDREQ(s,val)  ( (s)->extdst1_request = (((s)->extdst1_request & ~0x3ffeUL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST1_SHDLDREQ(s) ((((s)->extdst1_request) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_EXTDST1_REQUEST_EXTDST1_SHDLDREQ_RESET 0U

/* EXTDST1_TRIGGER: Trigger bits for pixel engine configuration of extdst1 */
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER 0x000010ecU
/* EXTDST1_SYNC_TRIGGER: Writing a '1' to this field triggers reconfiguration of the pipeline with endpoint extdst1 */
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_EXTDST1_SYNC_TRIGGER_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_EXTDST1_SYNC_TRIGGER_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_SETM_EXTDST1_SYNC_TRIGGER(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_SET_EXTDST1_SYNC_TRIGGER(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_EXTDST1_SYNC_TRIGGER(s,val) ( (s)->extdst1_trigger = ((s)->extdst1_trigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_SYNC_TRIGGER(s,val)  ( (s)->extdst1_trigger = (((s)->extdst1_trigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_EXTDST1_SYNC_TRIGGER_RESET (none)U

/* EXTDST1_TRIGGER_SEQUENCE_COMPLETE: By writing a '1' to this register field, you can trigger the extdst1 sequence complete interrupt that will occur as soon as the pipeline with the endpoint extdst1 is empty. This interrupt will also occur if the pipeline is already empty when this field is written. The interrupt will not occur if this field is not written. The interrupt will occur exactly as often as this field is written, assuming that this field is not written again until the interrupt has occured after a previous trigger. */
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_EXTDST1_TRIGGER_SEQUENCE_COMPLETE_FSHIFT 4U
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_EXTDST1_TRIGGER_SEQUENCE_COMPLETE_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_SETM_EXTDST1_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_SET_EXTDST1_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_EXTDST1_TRIGGER_SEQUENCE_COMPLETE(s,val) ( (s)->extdst1_trigger = ((s)->extdst1_trigger & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST1_TRIGGER_SEQUENCE_COMPLETE(s,val)  ( (s)->extdst1_trigger = (((s)->extdst1_trigger & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_EXTDST1_TRIGGER_EXTDST1_TRIGGER_SEQUENCE_COMPLETE_RESET (none)U

/* EXTDST1_STATUS: Status information for pixel engine configuration of extdst1 */
#define GFXREG_COMPENGCFG_EXTDST1_STATUS 0x000010f0U
/* EXTDST1_PIPELINE_STATUS: Status of pipeline with endpoint extdst1 */
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_PIPELINE_STATUS_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_PIPELINE_STATUS_FMASK 0x3U
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_GET_EXTDST1_PIPELINE_STATUS(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_COMPENGCFG_GET_EXTDST1_PIPELINE_STATUS(s) ((((s)->extdst1_status) ) & 0x3UL)
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_PIPELINE_STATUS_EMPTY 0x0U /* Pipeline with endpoint extdst1 is empty */
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_PIPELINE_STATUS_RUNNING 0x1U /* Pipeline with endpoint extdst1 is currently processing one operation */
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_PIPELINE_STATUS_RUNNING_RETRIGGERED 0x2U /* Pipeline with endpoint extdst1 is currently processing one operation with a second one already kicked to be processed afterwards */
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_PIPELINE_STATUS_RESERVED 0x3U /* reserved */
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_PIPELINE_STATUS_RESET 0U

/* EXTDST1_SYNC_BUSY: Synchronization busy status of extdst1 endpoint */
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_SYNC_BUSY_FSHIFT 8U
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_SYNC_BUSY_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_GET_EXTDST1_SYNC_BUSY(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_GET_EXTDST1_SYNC_BUSY(s) ((((s)->extdst1_status) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_SYNC_BUSY_IDLE 0x0U /* extdst1 synchronizer is idle */
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_SYNC_BUSY_BUSY 0x1U /* extdst1 synchronizer is busy */
#define GFXREG_COMPENGCFG_EXTDST1_STATUS_EXTDST1_SYNC_BUSY_RESET 0U



/* CONSTFRAME5_STATUS: Status information for pixel engine configuration of constframe5 */
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS 0x00001100U
/* CONSTFRAME5_SEL: Status of the connection of the constframe5 module */
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_CONSTFRAME5_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_CONSTFRAME5_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_GET_CONSTFRAME5_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_CONSTFRAME5_SEL(s) ((((s)->constframe5_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_CONSTFRAME5_SEL_EXTDST0 1U /* constframe5 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_CONSTFRAME5_SEL_EXTDST4 2U /* constframe5 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_CONSTFRAME5_SEL_EXTDST1 3U /* constframe5 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_CONSTFRAME5_SEL_EXTDST5 4U /* constframe5 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_CONSTFRAME5_SEL_STORE4 5U /* constframe5 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_CONSTFRAME5_SEL_DISABLE 0U /* constframe5 module is not used */
#define GFXREG_COMPENGCFG_CONSTFRAME5_STATUS_CONSTFRAME5_SEL_RESET (none)U



/* EXTDST5_STATIC: Static pixel engine configuration for extdst5
   If powerdown is activated all submodules on the pipeline attached to the endpoint that have their _clken setting set to AUTOMATIC will not receive a clock and setting extdst5_div will not have any effect. Always deactivate the powerdown of an endpoint before using it or any units connected to it. */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC 0x00001120U
/* EXTDST5_SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed) for pixelbus configuration of pipeline with endpoint extdst5. */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SHDEN_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SHDEN_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SETM_EXTDST5_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SET_EXTDST5_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_GET_EXTDST5_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST5_SHDEN(s,val) ( (s)->extdst5_static = ((s)->extdst5_static & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_SHDEN(s,val)  ( (s)->extdst5_static = (((s)->extdst5_static & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST5_SHDEN(s) ((((s)->extdst5_static) ) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SHDEN_RESET 0x0U

/* EXTDST5_POWERDOWN: Set this to 1 to activate powerdown or to 0 to deactivate powerdown for the extdst5 endpoint. */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_POWERDOWN_FSHIFT 4U
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_POWERDOWN_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SETM_EXTDST5_POWERDOWN(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SET_EXTDST5_POWERDOWN(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_GET_EXTDST5_POWERDOWN(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST5_POWERDOWN(s,val) ( (s)->extdst5_static = ((s)->extdst5_static & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_POWERDOWN(s,val)  ( (s)->extdst5_static = (((s)->extdst5_static & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST5_POWERDOWN(s) ((((s)->extdst5_static) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_POWERDOWN_RESET 0x1U

/* EXTDST5_SYNC_MODE: Synchronization mode for extdst5 pipeline endpoint synchronizer */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SYNC_MODE_FSHIFT 8U
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SYNC_MODE_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SETM_EXTDST5_SYNC_MODE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SET_EXTDST5_SYNC_MODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_GET_EXTDST5_SYNC_MODE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST5_SYNC_MODE(s,val) ( (s)->extdst5_static = ((s)->extdst5_static & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_SYNC_MODE(s,val)  ( (s)->extdst5_static = (((s)->extdst5_static & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST5_SYNC_MODE(s) ((((s)->extdst5_static) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SYNC_MODE_SINGLE 0x0U /* Reconfig pipeline after explicit trigger */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SYNC_MODE_AUTO 0x1U /* Reconfig pipeline after every kick when idle */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SYNC_MODE_RESET 0U

/* EXTDST5_SW_RESET: Software reset for extdst5 synchronizer, for debug purposes only */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SW_RESET_FSHIFT 11U
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SW_RESET_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SETM_EXTDST5_SW_RESET(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SET_EXTDST5_SW_RESET(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_GET_EXTDST5_SW_RESET(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST5_SW_RESET(s,val) ( (s)->extdst5_static = ((s)->extdst5_static & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_SW_RESET(s,val)  ( (s)->extdst5_static = (((s)->extdst5_static & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST5_SW_RESET(s) ((((s)->extdst5_static) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SW_RESET_OPERATION 0x0U /* Normal Operation */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SW_RESET_SWRESET 0x1U /* Software Reset */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_SW_RESET_RESET 0U

/* EXTDST5_DIV: extdst5 clock dividing factor (ratio is register_value/128, values above 128 are reserved). If a value smaller than 0x80 is used, than the *_clken registers of all enabled submodules have to be set to AUTOMATIC. The value 0x0 disables the clock while the value 0x80 sets the clock at full speed. */
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_DIV_FSHIFT 16U
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_DIV_FMASK 0xffU
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SETM_EXTDST5_DIV(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_SET_EXTDST5_DIV(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_GET_EXTDST5_DIV(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST5_DIV(s,val) ( (s)->extdst5_static = ((s)->extdst5_static & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_DIV(s,val)  ( (s)->extdst5_static = (((s)->extdst5_static & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST5_DIV(s) ((((s)->extdst5_static) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_EXTDST5_STATIC_EXTDST5_DIV_RESET 0x80U

/* EXTDST5_DYNAMIC: Dynamic pixel engine configuration for extdst5 */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC 0x00001124U
/* EXTDST5_SRC_SEL: Selection of the source for the src input of the extdst5 module */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_SETM_EXTDST5_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_SET_EXTDST5_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_GET_EXTDST5_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST5_SRC_SEL(s,val) ( (s)->extdst5_dynamic = ((s)->extdst5_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_SRC_SEL(s,val)  ( (s)->extdst5_dynamic = (((s)->extdst5_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST5_SRC_SEL(s) ((((s)->extdst5_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_DISABLE 0U /* Unit extdst5 input port src is disabled */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_CONSTFRAME5 7U /* Unit extdst5 input port src is connected to output of unit constframe5 */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_GPSCALER4 20U /* Unit extdst5 input port src is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_EXTSRC4 9U /* Unit extdst5 input port src is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_LAYERBLEND5 26U /* Unit extdst5 input port src is connected to output of unit layerblend5 */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_LAYERBLEND4 25U /* Unit extdst5 input port src is connected to output of unit layerblend4 */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_LAYERBLEND3 24U /* Unit extdst5 input port src is connected to output of unit layerblend3 */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_LAYERBLEND2 23U /* Unit extdst5 input port src is connected to output of unit layerblend2 */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_LAYERBLEND1 22U /* Unit extdst5 input port src is connected to output of unit layerblend1 */
#define GFXREG_COMPENGCFG_EXTDST5_DYNAMIC_EXTDST5_SRC_SEL_RESET 0U

/* EXTDST5_REQUEST: ShadowLoadRequest register for endpoint extdst5
   When the request is set for destination extdst5, the next time the synchronizer is activated the shadow token is triggered to reload the pixelbus configuration leading up to this endpoint. If the request is not set for this endpoint then the shadow token is not triggered for the pixelbus configuration of this endpoint. */
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST 0x00001128U
/* EXTDST5_SEL_SHDLDREQ: Shadow load request flag for destination extdst5. */
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_EXTDST5_SEL_SHDLDREQ_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_EXTDST5_SEL_SHDLDREQ_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_SETM_EXTDST5_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_SET_EXTDST5_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_GET_EXTDST5_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_EXTDST5_SEL_SHDLDREQ(s,val) ( (s)->extdst5_request = ((s)->extdst5_request & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_SEL_SHDLDREQ(s,val)  ( (s)->extdst5_request = (((s)->extdst5_request & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST5_SEL_SHDLDREQ(s) ((((s)->extdst5_request) ) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_EXTDST5_SEL_SHDLDREQ_RESET 0U

/* EXTDST5_SHDLDREQ: Vector of shadow load request flag of all sources for destination extdst5. Setting a bit has no effect if the source is currently in a different pipeline than the one of destination extdst5. */
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_EXTDST5_SHDLDREQ_FSHIFT 1U
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_EXTDST5_SHDLDREQ_FMASK 0x1fffU
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_SETM_EXTDST5_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1fffUL) << 1U)
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_SET_EXTDST5_SHDLDREQ(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_GET_EXTDST5_SHDLDREQ(val) (((CYGFX_U32)(val) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_SETM_EXTDST5_SHDLDREQ(s,val) ( (s)->extdst5_request = ((s)->extdst5_request & ~0x3ffeUL) | (((CYGFX_U32)(val) << 1U) & 0x3ffeUL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_SHDLDREQ(s,val)  ( (s)->extdst5_request = (((s)->extdst5_request & ~0x3ffeUL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_EXTDST5_SHDLDREQ(s) ((((s)->extdst5_request) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_EXTDST5_REQUEST_EXTDST5_SHDLDREQ_RESET 0U

/* EXTDST5_TRIGGER: Trigger bits for pixel engine configuration of extdst5 */
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER 0x0000112cU
/* EXTDST5_SYNC_TRIGGER: Writing a '1' to this field triggers reconfiguration of the pipeline with endpoint extdst5 */
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_EXTDST5_SYNC_TRIGGER_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_EXTDST5_SYNC_TRIGGER_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_SETM_EXTDST5_SYNC_TRIGGER(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_SET_EXTDST5_SYNC_TRIGGER(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_EXTDST5_SYNC_TRIGGER(s,val) ( (s)->extdst5_trigger = ((s)->extdst5_trigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_SYNC_TRIGGER(s,val)  ( (s)->extdst5_trigger = (((s)->extdst5_trigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_EXTDST5_SYNC_TRIGGER_RESET (none)U

/* EXTDST5_TRIGGER_SEQUENCE_COMPLETE: By writing a '1' to this register field, you can trigger the extdst5 sequence complete interrupt that will occur as soon as the pipeline with the endpoint extdst5 is empty. This interrupt will also occur if the pipeline is already empty when this field is written. The interrupt will not occur if this field is not written. The interrupt will occur exactly as often as this field is written, assuming that this field is not written again until the interrupt has occured after a previous trigger. */
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_EXTDST5_TRIGGER_SEQUENCE_COMPLETE_FSHIFT 4U
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_EXTDST5_TRIGGER_SEQUENCE_COMPLETE_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_SETM_EXTDST5_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_SET_EXTDST5_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_EXTDST5_TRIGGER_SEQUENCE_COMPLETE(s,val) ( (s)->extdst5_trigger = ((s)->extdst5_trigger & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_EXTDST5_TRIGGER_SEQUENCE_COMPLETE(s,val)  ( (s)->extdst5_trigger = (((s)->extdst5_trigger & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_EXTDST5_TRIGGER_EXTDST5_TRIGGER_SEQUENCE_COMPLETE_RESET (none)U

/* EXTDST5_STATUS: Status information for pixel engine configuration of extdst5 */
#define GFXREG_COMPENGCFG_EXTDST5_STATUS 0x00001130U
/* EXTDST5_PIPELINE_STATUS: Status of pipeline with endpoint extdst5 */
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_PIPELINE_STATUS_FSHIFT 0U
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_PIPELINE_STATUS_FMASK 0x3U
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_GET_EXTDST5_PIPELINE_STATUS(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_COMPENGCFG_GET_EXTDST5_PIPELINE_STATUS(s) ((((s)->extdst5_status) ) & 0x3UL)
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_PIPELINE_STATUS_EMPTY 0x0U /* Pipeline with endpoint extdst5 is empty */
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_PIPELINE_STATUS_RUNNING 0x1U /* Pipeline with endpoint extdst5 is currently processing one operation */
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_PIPELINE_STATUS_RUNNING_RETRIGGERED 0x2U /* Pipeline with endpoint extdst5 is currently processing one operation with a second one already kicked to be processed afterwards */
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_PIPELINE_STATUS_RESERVED 0x3U /* reserved */
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_PIPELINE_STATUS_RESET 0U

/* EXTDST5_SYNC_BUSY: Synchronization busy status of extdst5 endpoint */
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_SYNC_BUSY_FSHIFT 8U
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_SYNC_BUSY_FMASK 0x1U
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_GET_EXTDST5_SYNC_BUSY(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_GET_EXTDST5_SYNC_BUSY(s) ((((s)->extdst5_status) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_SYNC_BUSY_IDLE 0x0U /* extdst5 synchronizer is idle */
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_SYNC_BUSY_BUSY 0x1U /* extdst5 synchronizer is busy */
#define GFXREG_COMPENGCFG_EXTDST5_STATUS_EXTDST5_SYNC_BUSY_RESET 0U



/* EXTSRC4_STATUS: Status information for pixel engine configuration of extsrc4 */
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS 0x00001140U
/* EXTSRC4_SEL: Status of the connection of the extsrc4 module */
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_EXTSRC4_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_EXTSRC4_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_GET_EXTSRC4_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_EXTSRC4_SEL(s) ((((s)->extsrc4_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_EXTSRC4_SEL_EXTDST0 1U /* extsrc4 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_EXTSRC4_SEL_EXTDST4 2U /* extsrc4 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_EXTSRC4_SEL_EXTDST1 3U /* extsrc4 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_EXTSRC4_SEL_EXTDST5 4U /* extsrc4 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_EXTSRC4_SEL_STORE4 5U /* extsrc4 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_EXTSRC4_SEL_DISABLE 0U /* extsrc4 module is not used */
#define GFXREG_COMPENGCFG_EXTSRC4_STATUS_EXTSRC4_SEL_RESET (none)U



/* STORE4_STATIC: Static pixel engine configuration for store4
   If powerdown is activated all submodules on the pipeline attached to the endpoint that have their _clken setting set to AUTOMATIC will not receive a clock and setting store4_div will not have any effect. Always deactivate the powerdown of an endpoint before using it or any units connected to it. */
#define GFXREG_COMPENGCFG_STORE4_STATIC 0x00001160U
/* STORE4_SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed) for pixelbus configuration of pipeline with endpoint store4. */
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SHDEN_FSHIFT 0U
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SHDEN_FMASK 0x1U
#define GFXREG_COMPENGCFG_STORE4_STATIC_SETM_STORE4_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_STORE4_STATIC_SET_STORE4_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_STORE4_STATIC_GET_STORE4_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_STORE4_SHDEN(s,val) ( (s)->store4_static = ((s)->store4_static & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_STORE4_SHDEN(s,val)  ( (s)->store4_static = (((s)->store4_static & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_STORE4_SHDEN(s) ((((s)->store4_static) ) & 0x1UL)
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SHDEN_RESET 0x0U

/* STORE4_POWERDOWN: Set this to 1 to activate powerdown or to 0 to deactivate powerdown for the store4 endpoint. */
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_POWERDOWN_FSHIFT 4U
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_POWERDOWN_FMASK 0x1U
#define GFXREG_COMPENGCFG_STORE4_STATIC_SETM_STORE4_POWERDOWN(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_STORE4_STATIC_SET_STORE4_POWERDOWN(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_STORE4_STATIC_GET_STORE4_POWERDOWN(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_STORE4_POWERDOWN(s,val) ( (s)->store4_static = ((s)->store4_static & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_STORE4_POWERDOWN(s,val)  ( (s)->store4_static = (((s)->store4_static & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_STORE4_POWERDOWN(s) ((((s)->store4_static) >> 4U) & 0x1UL)
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_POWERDOWN_RESET 0x1U

/* STORE4_SYNC_MODE: Synchronization mode for store4 pipeline endpoint synchronizer */
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SYNC_MODE_FSHIFT 8U
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SYNC_MODE_FMASK 0x1U
#define GFXREG_COMPENGCFG_STORE4_STATIC_SETM_STORE4_SYNC_MODE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_COMPENGCFG_STORE4_STATIC_SET_STORE4_SYNC_MODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_STORE4_STATIC_GET_STORE4_SYNC_MODE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_STORE4_SYNC_MODE(s,val) ( (s)->store4_static = ((s)->store4_static & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_COMPENGCFG_SET_STORE4_SYNC_MODE(s,val)  ( (s)->store4_static = (((s)->store4_static & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_STORE4_SYNC_MODE(s) ((((s)->store4_static) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SYNC_MODE_SINGLE 0x0U /* Reconfig pipeline after explicit trigger */
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SYNC_MODE_AUTO 0x1U /* Reconfig pipeline after every kick when idle */
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SYNC_MODE_RESET 0U

/* STORE4_SW_RESET: Software reset for store4 synchronizer, for debug purposes only */
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SW_RESET_FSHIFT 11U
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SW_RESET_FMASK 0x1U
#define GFXREG_COMPENGCFG_STORE4_STATIC_SETM_STORE4_SW_RESET(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_COMPENGCFG_STORE4_STATIC_SET_STORE4_SW_RESET(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_STORE4_STATIC_GET_STORE4_SW_RESET(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_STORE4_SW_RESET(s,val) ( (s)->store4_static = ((s)->store4_static & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_COMPENGCFG_SET_STORE4_SW_RESET(s,val)  ( (s)->store4_static = (((s)->store4_static & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_STORE4_SW_RESET(s) ((((s)->store4_static) >> 11U) & 0x1UL)
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SW_RESET_OPERATION 0x0U /* Normal Operation */
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SW_RESET_SWRESET 0x1U /* Software Reset */
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_SW_RESET_RESET 0U

/* STORE4_DIV: store4 clock dividing factor (ratio is register_value/128, values above 128 are reserved). If a value smaller than 0x80 is used, than the *_clken registers of all enabled submodules have to be set to AUTOMATIC. The value 0x0 disables the clock while the value 0x80 sets the clock at full speed. */
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_DIV_FSHIFT 16U
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_DIV_FMASK 0xffU
#define GFXREG_COMPENGCFG_STORE4_STATIC_SETM_STORE4_DIV(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_COMPENGCFG_STORE4_STATIC_SET_STORE4_DIV(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_STORE4_STATIC_GET_STORE4_DIV(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_SETM_STORE4_DIV(s,val) ( (s)->store4_static = ((s)->store4_static & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_COMPENGCFG_SET_STORE4_DIV(s,val)  ( (s)->store4_static = (((s)->store4_static & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_STORE4_DIV(s) ((((s)->store4_static) >> 16U) & 0xffUL)
#define GFXREG_COMPENGCFG_STORE4_STATIC_STORE4_DIV_RESET 0x80U

/* STORE4_DYNAMIC: Dynamic pixel engine configuration for store4 */
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC 0x00001164U
/* STORE4_SRC_SEL: Selection of the source for the src input of the store4 module */
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_STORE4_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_STORE4_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_SETM_STORE4_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_SET_STORE4_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_GET_STORE4_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_STORE4_SRC_SEL(s,val) ( (s)->store4_dynamic = ((s)->store4_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_STORE4_SRC_SEL(s,val)  ( (s)->store4_dynamic = (((s)->store4_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_STORE4_SRC_SEL(s) ((((s)->store4_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_STORE4_SRC_SEL_DISABLE 0U /* Unit store4 input port src is disabled */
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_STORE4_SRC_SEL_EXTSRC8 27U /* Unit store4 input port src is connected to output of unit extsrc8 */
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_STORE4_SRC_SEL_GPSCALER4 20U /* Unit store4 input port src is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_STORE4_SRC_SEL_EXTSRC4 9U /* Unit store4 input port src is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_STORE4_SRC_SEL_MATRIX4 19U /* Unit store4 input port src is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_STORE4_DYNAMIC_STORE4_SRC_SEL_RESET 9U

/* STORE4_REQUEST: ShadowLoadRequest register for endpoint store4
   When the request is set for destination store4, the next time the synchronizer is activated the shadow token is triggered to reload the pixelbus configuration leading up to this endpoint. If the request is not set for this endpoint then the shadow token is not triggered for the pixelbus configuration of this endpoint. */
#define GFXREG_COMPENGCFG_STORE4_REQUEST 0x00001168U
/* STORE4_SEL_SHDLDREQ: Shadow load request flag for destination store4. */
#define GFXREG_COMPENGCFG_STORE4_REQUEST_STORE4_SEL_SHDLDREQ_FSHIFT 0U
#define GFXREG_COMPENGCFG_STORE4_REQUEST_STORE4_SEL_SHDLDREQ_FMASK 0x1U
#define GFXREG_COMPENGCFG_STORE4_REQUEST_SETM_STORE4_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_STORE4_REQUEST_SET_STORE4_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_STORE4_REQUEST_GET_STORE4_SEL_SHDLDREQ(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_COMPENGCFG_SETM_STORE4_SEL_SHDLDREQ(s,val) ( (s)->store4_request = ((s)->store4_request & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_STORE4_SEL_SHDLDREQ(s,val)  ( (s)->store4_request = (((s)->store4_request & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_STORE4_SEL_SHDLDREQ(s) ((((s)->store4_request) ) & 0x1UL)
#define GFXREG_COMPENGCFG_STORE4_REQUEST_STORE4_SEL_SHDLDREQ_RESET 0U

/* STORE4_SHDLDREQ: Vector of shadow load request flag of all sources for destination store4. Setting a bit has no effect if the source is currently in a different pipeline than the one of destination store4. */
#define GFXREG_COMPENGCFG_STORE4_REQUEST_STORE4_SHDLDREQ_FSHIFT 1U
#define GFXREG_COMPENGCFG_STORE4_REQUEST_STORE4_SHDLDREQ_FMASK 0x1fffU
#define GFXREG_COMPENGCFG_STORE4_REQUEST_SETM_STORE4_SHDLDREQ(val) (((CYGFX_U32)(val) & 0x1fffUL) << 1U)
#define GFXREG_COMPENGCFG_STORE4_REQUEST_SET_STORE4_SHDLDREQ(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_STORE4_REQUEST_GET_STORE4_SHDLDREQ(val) (((CYGFX_U32)(val) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_SETM_STORE4_SHDLDREQ(s,val) ( (s)->store4_request = ((s)->store4_request & ~0x3ffeUL) | (((CYGFX_U32)(val) << 1U) & 0x3ffeUL) )
#define GFXREG_COMPENGCFG_SET_STORE4_SHDLDREQ(s,val)  ( (s)->store4_request = (((s)->store4_request & ~0x3ffeUL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_STORE4_SHDLDREQ(s) ((((s)->store4_request) >> 1U) & 0x1fffUL)
#define GFXREG_COMPENGCFG_STORE4_REQUEST_STORE4_SHDLDREQ_RESET 0U

/* STORE4_TRIGGER: Trigger bits for pixel engine configuration of store4 */
#define GFXREG_COMPENGCFG_STORE4_TRIGGER 0x0000116cU
/* STORE4_SYNC_TRIGGER: Writing a '1' to this field triggers reconfiguration of the pipeline with endpoint store4 */
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_STORE4_SYNC_TRIGGER_FSHIFT 0U
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_STORE4_SYNC_TRIGGER_FMASK 0x1U
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_SETM_STORE4_SYNC_TRIGGER(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_SET_STORE4_SYNC_TRIGGER(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_STORE4_SYNC_TRIGGER(s,val) ( (s)->store4_trigger = ((s)->store4_trigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_COMPENGCFG_SET_STORE4_SYNC_TRIGGER(s,val)  ( (s)->store4_trigger = (((s)->store4_trigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_STORE4_SYNC_TRIGGER_RESET (none)U

/* STORE4_TRIGGER_SEQUENCE_COMPLETE: By writing a '1' to this register field, you can trigger the store4 sequence complete interrupt that will occur as soon as the pipeline with the endpoint store4 is empty. This interrupt will also occur if the pipeline is already empty when this field is written. The interrupt will not occur if this field is not written. The interrupt will occur exactly as often as this field is written, assuming that this field is not written again until the interrupt has occured after a previous trigger. */
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_STORE4_TRIGGER_SEQUENCE_COMPLETE_FSHIFT 4U
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_STORE4_TRIGGER_SEQUENCE_COMPLETE_FMASK 0x1U
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_SETM_STORE4_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_SET_STORE4_TRIGGER_SEQUENCE_COMPLETE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_SETM_STORE4_TRIGGER_SEQUENCE_COMPLETE(s,val) ( (s)->store4_trigger = ((s)->store4_trigger & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_COMPENGCFG_SET_STORE4_TRIGGER_SEQUENCE_COMPLETE(s,val)  ( (s)->store4_trigger = (((s)->store4_trigger & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_STORE4_TRIGGER_STORE4_TRIGGER_SEQUENCE_COMPLETE_RESET (none)U

/* STORE4_STATUS: Status information for pixel engine configuration of store4 */
#define GFXREG_COMPENGCFG_STORE4_STATUS 0x00001170U
/* STORE4_PIPELINE_STATUS: Status of pipeline with endpoint store4 */
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_PIPELINE_STATUS_FSHIFT 0U
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_PIPELINE_STATUS_FMASK 0x3U
#define GFXREG_COMPENGCFG_STORE4_STATUS_GET_STORE4_PIPELINE_STATUS(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_COMPENGCFG_GET_STORE4_PIPELINE_STATUS(s) ((((s)->store4_status) ) & 0x3UL)
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_PIPELINE_STATUS_EMPTY 0x0U /* Pipeline with endpoint store4 is empty */
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_PIPELINE_STATUS_RUNNING 0x1U /* Pipeline with endpoint store4 is currently processing one operation */
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_PIPELINE_STATUS_RUNNING_RETRIGGERED 0x2U /* Pipeline with endpoint store4 is currently processing one operation with a second one already kicked to be processed afterwards */
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_PIPELINE_STATUS_RESERVED 0x3U /* reserved */
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_PIPELINE_STATUS_RESET 0U

/* STORE4_SYNC_BUSY: Synchronization busy status of store4 endpoint */
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_SYNC_BUSY_FSHIFT 8U
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_SYNC_BUSY_FMASK 0x1U
#define GFXREG_COMPENGCFG_STORE4_STATUS_GET_STORE4_SYNC_BUSY(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_GET_STORE4_SYNC_BUSY(s) ((((s)->store4_status) >> 8U) & 0x1UL)
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_SYNC_BUSY_IDLE 0x0U /* store4 synchronizer is idle */
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_SYNC_BUSY_BUSY 0x1U /* store4 synchronizer is busy */
#define GFXREG_COMPENGCFG_STORE4_STATUS_STORE4_SYNC_BUSY_RESET 0U



/* FETCHLAYER0_STATUS: Status information for pixel engine configuration of fetchlayer0 */
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS 0x00001180U
/* FETCHLAYER0_SEL: Status of the connection of the fetchlayer0 module */
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_FETCHLAYER0_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_FETCHLAYER0_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_GET_FETCHLAYER0_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_FETCHLAYER0_SEL(s) ((((s)->fetchlayer0_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_FETCHLAYER0_SEL_EXTDST0 1U /* fetchlayer0 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_FETCHLAYER0_SEL_EXTDST4 2U /* fetchlayer0 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_FETCHLAYER0_SEL_EXTDST1 3U /* fetchlayer0 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_FETCHLAYER0_SEL_EXTDST5 4U /* fetchlayer0 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_FETCHLAYER0_SEL_STORE4 5U /* fetchlayer0 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_FETCHLAYER0_SEL_DISABLE 0U /* fetchlayer0 module is not used */
#define GFXREG_COMPENGCFG_FETCHLAYER0_STATUS_FETCHLAYER0_SEL_RESET (none)U



/* FETCHDECODE4_DYNAMIC: Dynamic pixel engine configuration for fetchdecode4 */
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC 0x000011a0U
/* FETCHDECODE4_SRC_SEL: Selection of the source for the src input of the fetchdecode4 module */
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC_FETCHDECODE4_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC_FETCHDECODE4_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC_SETM_FETCHDECODE4_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC_SET_FETCHDECODE4_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC_GET_FETCHDECODE4_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_FETCHDECODE4_SRC_SEL(s,val) ( (s)->fetchdecode4_dynamic = ((s)->fetchdecode4_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_FETCHDECODE4_SRC_SEL(s,val)  ( (s)->fetchdecode4_dynamic = (((s)->fetchdecode4_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_FETCHDECODE4_SRC_SEL(s) ((((s)->fetchdecode4_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC_FETCHDECODE4_SRC_SEL_DISABLE 0U /* Unit fetchdecode4 input port src is disabled */
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC_FETCHDECODE4_SRC_SEL_FETCHECO4 13U /* Unit fetchdecode4 input port src is connected to output of unit fetcheco4 */
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC_FETCHDECODE4_SRC_SEL_GPSCALER4 20U /* Unit fetchdecode4 input port src is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_FETCHDECODE4_DYNAMIC_FETCHDECODE4_SRC_SEL_RESET 0U

/* FETCHDECODE4_STATUS: Status information for pixel engine configuration of fetchdecode4 */
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS 0x000011a4U
/* FETCHDECODE4_SEL: Status of the connection of the fetchdecode4 module */
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_FETCHDECODE4_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_FETCHDECODE4_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_GET_FETCHDECODE4_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_FETCHDECODE4_SEL(s) ((((s)->fetchdecode4_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_FETCHDECODE4_SEL_EXTDST0 1U /* fetchdecode4 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_FETCHDECODE4_SEL_EXTDST4 2U /* fetchdecode4 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_FETCHDECODE4_SEL_EXTDST1 3U /* fetchdecode4 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_FETCHDECODE4_SEL_EXTDST5 4U /* fetchdecode4 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_FETCHDECODE4_SEL_STORE4 5U /* fetchdecode4 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_FETCHDECODE4_SEL_DISABLE 0U /* fetchdecode4 module is not used */
#define GFXREG_COMPENGCFG_FETCHDECODE4_STATUS_FETCHDECODE4_SEL_RESET (none)U



/* FETCHECO4_STATUS: Status information for pixel engine configuration of fetcheco4 */
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS 0x000011c0U
/* FETCHECO4_SEL: Status of the connection of the fetcheco4 module */
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_FETCHECO4_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_FETCHECO4_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_GET_FETCHECO4_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_FETCHECO4_SEL(s) ((((s)->fetcheco4_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_FETCHECO4_SEL_EXTDST0 1U /* fetcheco4 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_FETCHECO4_SEL_EXTDST4 2U /* fetcheco4 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_FETCHECO4_SEL_EXTDST1 3U /* fetcheco4 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_FETCHECO4_SEL_EXTDST5 4U /* fetcheco4 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_FETCHECO4_SEL_STORE4 5U /* fetcheco4 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_FETCHECO4_SEL_DISABLE 0U /* fetcheco4 module is not used */
#define GFXREG_COMPENGCFG_FETCHECO4_STATUS_FETCHECO4_SEL_RESET (none)U



/* FETCHWARP1_DYNAMIC: Dynamic pixel engine configuration for fetchwarp1 */
#define GFXREG_COMPENGCFG_FETCHWARP1_DYNAMIC 0x00001200U
/* FETCHWARP1_SRC_SEL: Selection of the source for the src input of the fetchwarp1 module */
#define GFXREG_COMPENGCFG_FETCHWARP1_DYNAMIC_FETCHWARP1_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_FETCHWARP1_DYNAMIC_FETCHWARP1_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_FETCHWARP1_DYNAMIC_SETM_FETCHWARP1_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_FETCHWARP1_DYNAMIC_SET_FETCHWARP1_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_FETCHWARP1_DYNAMIC_GET_FETCHWARP1_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_FETCHWARP1_SRC_SEL(s,val) ( (s)->fetchwarp1_dynamic = ((s)->fetchwarp1_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_FETCHWARP1_SRC_SEL(s,val)  ( (s)->fetchwarp1_dynamic = (((s)->fetchwarp1_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_FETCHWARP1_SRC_SEL(s) ((((s)->fetchwarp1_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_FETCHWARP1_DYNAMIC_FETCHWARP1_SRC_SEL_DISABLE 0U /* Unit fetchwarp1 input port src is disabled */
#define GFXREG_COMPENGCFG_FETCHWARP1_DYNAMIC_FETCHWARP1_SRC_SEL_FETCHECO1 15U /* Unit fetchwarp1 input port src is connected to output of unit fetcheco1 */
#define GFXREG_COMPENGCFG_FETCHWARP1_DYNAMIC_FETCHWARP1_SRC_SEL_RESET 0U

/* FETCHWARP1_STATUS: Status information for pixel engine configuration of fetchwarp1 */
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS 0x00001204U
/* FETCHWARP1_SEL: Status of the connection of the fetchwarp1 module */
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_FETCHWARP1_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_FETCHWARP1_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_GET_FETCHWARP1_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_FETCHWARP1_SEL(s) ((((s)->fetchwarp1_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_FETCHWARP1_SEL_EXTDST0 1U /* fetchwarp1 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_FETCHWARP1_SEL_EXTDST4 2U /* fetchwarp1 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_FETCHWARP1_SEL_EXTDST1 3U /* fetchwarp1 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_FETCHWARP1_SEL_EXTDST5 4U /* fetchwarp1 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_FETCHWARP1_SEL_STORE4 5U /* fetchwarp1 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_FETCHWARP1_SEL_DISABLE 0U /* fetchwarp1 module is not used */
#define GFXREG_COMPENGCFG_FETCHWARP1_STATUS_FETCHWARP1_SEL_RESET (none)U



/* FETCHECO1_STATUS: Status information for pixel engine configuration of fetcheco1 */
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS 0x00001208U
/* FETCHECO1_SEL: Status of the connection of the fetcheco1 module */
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_FETCHECO1_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_FETCHECO1_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_GET_FETCHECO1_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_FETCHECO1_SEL(s) ((((s)->fetcheco1_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_FETCHECO1_SEL_EXTDST0 1U /* fetcheco1 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_FETCHECO1_SEL_EXTDST4 2U /* fetcheco1 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_FETCHECO1_SEL_EXTDST1 3U /* fetcheco1 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_FETCHECO1_SEL_EXTDST5 4U /* fetcheco1 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_FETCHECO1_SEL_STORE4 5U /* fetcheco1 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_FETCHECO1_SEL_DISABLE 0U /* fetcheco1 module is not used */
#define GFXREG_COMPENGCFG_FETCHECO1_STATUS_FETCHECO1_SEL_RESET (none)U



/* FETCHLAYER1_STATUS: Status information for pixel engine configuration of fetchlayer1 */
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS 0x00001220U
/* FETCHLAYER1_SEL: Status of the connection of the fetchlayer1 module */
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_FETCHLAYER1_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_FETCHLAYER1_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_GET_FETCHLAYER1_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_FETCHLAYER1_SEL(s) ((((s)->fetchlayer1_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_FETCHLAYER1_SEL_EXTDST0 1U /* fetchlayer1 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_FETCHLAYER1_SEL_EXTDST4 2U /* fetchlayer1 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_FETCHLAYER1_SEL_EXTDST1 3U /* fetchlayer1 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_FETCHLAYER1_SEL_EXTDST5 4U /* fetchlayer1 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_FETCHLAYER1_SEL_STORE4 5U /* fetchlayer1 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_FETCHLAYER1_SEL_DISABLE 0U /* fetchlayer1 module is not used */
#define GFXREG_COMPENGCFG_FETCHLAYER1_STATUS_FETCHLAYER1_SEL_RESET (none)U



/* FETCHDECODE0_DYNAMIC: Dynamic pixel engine configuration for fetchdecode0 */
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC 0x00001240U
/* FETCHDECODE0_SRC_SEL: Selection of the source for the src input of the fetchdecode0 module */
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC_FETCHDECODE0_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC_FETCHDECODE0_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC_SETM_FETCHDECODE0_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC_SET_FETCHDECODE0_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC_GET_FETCHDECODE0_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_FETCHDECODE0_SRC_SEL(s,val) ( (s)->fetchdecode0_dynamic = ((s)->fetchdecode0_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_FETCHDECODE0_SRC_SEL(s,val)  ( (s)->fetchdecode0_dynamic = (((s)->fetchdecode0_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_FETCHDECODE0_SRC_SEL(s) ((((s)->fetchdecode0_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC_FETCHDECODE0_SRC_SEL_DISABLE 0U /* Unit fetchdecode0 input port src is disabled */
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC_FETCHDECODE0_SRC_SEL_FETCHECO1 15U /* Unit fetchdecode0 input port src is connected to output of unit fetcheco1 */
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC_FETCHDECODE0_SRC_SEL_FETCHECO4 13U /* Unit fetchdecode0 input port src is connected to output of unit fetcheco4 */
#define GFXREG_COMPENGCFG_FETCHDECODE0_DYNAMIC_FETCHDECODE0_SRC_SEL_RESET 0U

/* FETCHDECODE0_STATUS: Status information for pixel engine configuration of fetchdecode0 */
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS 0x00001244U
/* FETCHDECODE0_SEL: Status of the connection of the fetchdecode0 module */
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_FETCHDECODE0_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_FETCHDECODE0_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_GET_FETCHDECODE0_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_FETCHDECODE0_SEL(s) ((((s)->fetchdecode0_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_FETCHDECODE0_SEL_EXTDST0 1U /* fetchdecode0 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_FETCHDECODE0_SEL_EXTDST4 2U /* fetchdecode0 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_FETCHDECODE0_SEL_EXTDST1 3U /* fetchdecode0 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_FETCHDECODE0_SEL_EXTDST5 4U /* fetchdecode0 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_FETCHDECODE0_SEL_STORE4 5U /* fetchdecode0 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_FETCHDECODE0_SEL_DISABLE 0U /* fetchdecode0 module is not used */
#define GFXREG_COMPENGCFG_FETCHDECODE0_STATUS_FETCHDECODE0_SEL_RESET (none)U



/* GAMMACOR4_DYNAMIC: Dynamic pixel engine configuration for gammacor4 */
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC 0x00001260U
/* GAMMACOR4_SRC_SEL: Selection of the source for the src input of the gammacor4 module */
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC_GAMMACOR4_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC_GAMMACOR4_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC_SETM_GAMMACOR4_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC_SET_GAMMACOR4_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC_GET_GAMMACOR4_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_GAMMACOR4_SRC_SEL(s,val) ( (s)->gammacor4_dynamic = ((s)->gammacor4_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_GAMMACOR4_SRC_SEL(s,val)  ( (s)->gammacor4_dynamic = (((s)->gammacor4_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_GAMMACOR4_SRC_SEL(s) ((((s)->gammacor4_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC_GAMMACOR4_SRC_SEL_DISABLE 0U /* Unit gammacor4 input port src is disabled */
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC_GAMMACOR4_SRC_SEL_EXTSRC4 9U /* Unit gammacor4 input port src is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC_GAMMACOR4_SRC_SEL_FETCHDECODE4 12U /* Unit gammacor4 input port src is connected to output of unit fetchdecode4 */
#define GFXREG_COMPENGCFG_GAMMACOR4_DYNAMIC_GAMMACOR4_SRC_SEL_RESET 0U

/* GAMMACOR4_STATUS: Status information for pixel engine configuration of gammacor4 */
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS 0x00001264U
/* GAMMACOR4_SEL: Status of the connection of the gammacor4 module */
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GAMMACOR4_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GAMMACOR4_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GET_GAMMACOR4_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_GAMMACOR4_SEL(s) ((((s)->gammacor4_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GAMMACOR4_SEL_EXTDST0 1U /* gammacor4 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GAMMACOR4_SEL_EXTDST4 2U /* gammacor4 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GAMMACOR4_SEL_EXTDST1 3U /* gammacor4 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GAMMACOR4_SEL_EXTDST5 4U /* gammacor4 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GAMMACOR4_SEL_STORE4 5U /* gammacor4 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GAMMACOR4_SEL_DISABLE 0U /* gammacor4 module is not used */
#define GFXREG_COMPENGCFG_GAMMACOR4_STATUS_GAMMACOR4_SEL_RESET (none)U



/* MATRIX4_DYNAMIC: Dynamic pixel engine configuration for matrix4 */
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC 0x00001270U
/* MATRIX4_SRC_SEL: Selection of the source for the src input of the matrix4 module */
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_SETM_MATRIX4_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_SET_MATRIX4_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_GET_MATRIX4_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_MATRIX4_SRC_SEL(s,val) ( (s)->matrix4_dynamic = ((s)->matrix4_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_MATRIX4_SRC_SEL(s,val)  ( (s)->matrix4_dynamic = (((s)->matrix4_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_MATRIX4_SRC_SEL(s) ((((s)->matrix4_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_SRC_SEL_DISABLE 0U /* Unit matrix4 input port src is disabled */
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_SRC_SEL_GAMMACOR4 18U /* Unit matrix4 input port src is connected to output of unit gammacor4 */
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_SRC_SEL_RESET 0U

/* MATRIX4_CLKEN: Enable of matrix4 clock (this setting has to be the same for all modules of one processing pipeline). If a submodule is enabled and FULL is used, then the register [endpoint_name]_clk must be set to 0x80. */
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_CLKEN_FSHIFT 24U
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_CLKEN_FMASK 0x3U
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_SETM_MATRIX4_CLKEN(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_SET_MATRIX4_CLKEN(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_GET_MATRIX4_CLKEN(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_SETM_MATRIX4_CLKEN(s,val) ( (s)->matrix4_dynamic = ((s)->matrix4_dynamic & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_COMPENGCFG_SET_MATRIX4_CLKEN(s,val)  ( (s)->matrix4_dynamic = (((s)->matrix4_dynamic & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_MATRIX4_CLKEN(s) ((((s)->matrix4_dynamic) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_CLKEN_DISABLE 0U /* Clock for matrix4 is disabled */
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_CLKEN_AUTOMATIC 1U /* Clock is enabled if unit is used, frequency is defined by the register setting for this pipeline (see [endpoint_name]_Static register) */
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_CLKEN_FULL 3U /* Clock for matrix4 is without gating */
#define GFXREG_COMPENGCFG_MATRIX4_DYNAMIC_MATRIX4_CLKEN_RESET 0x1U

/* MATRIX4_STATUS: Status information for pixel engine configuration of matrix4 */
#define GFXREG_COMPENGCFG_MATRIX4_STATUS 0x00001274U
/* MATRIX4_SEL: Status of the connection of the matrix4 module */
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_MATRIX4_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_MATRIX4_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_GET_MATRIX4_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_MATRIX4_SEL(s) ((((s)->matrix4_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_MATRIX4_SEL_EXTDST0 1U /* matrix4 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_MATRIX4_SEL_EXTDST4 2U /* matrix4 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_MATRIX4_SEL_EXTDST1 3U /* matrix4 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_MATRIX4_SEL_EXTDST5 4U /* matrix4 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_MATRIX4_SEL_STORE4 5U /* matrix4 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_MATRIX4_SEL_DISABLE 0U /* matrix4 module is not used */
#define GFXREG_COMPENGCFG_MATRIX4_STATUS_MATRIX4_SEL_RESET (none)U



/* GPSCALER4_DYNAMIC: Dynamic pixel engine configuration for gpscaler4 */
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC 0x00001280U
/* GPSCALER4_SRC_SEL: Selection of the source for the src input of the gpscaler4 module */
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_SETM_GPSCALER4_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_SET_GPSCALER4_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GET_GPSCALER4_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_GPSCALER4_SRC_SEL(s,val) ( (s)->gpscaler4_dynamic = ((s)->gpscaler4_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_GPSCALER4_SRC_SEL(s,val)  ( (s)->gpscaler4_dynamic = (((s)->gpscaler4_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_GPSCALER4_SRC_SEL(s) ((((s)->gpscaler4_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_SRC_SEL_DISABLE 0U /* Unit gpscaler4 input port src is disabled */
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_SRC_SEL_MATRIX4 19U /* Unit gpscaler4 input port src is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_SRC_SEL_FETCHECO4 13U /* Unit gpscaler4 input port src is connected to output of unit fetcheco4 */
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_SRC_SEL_RESET 0U

/* GPSCALER4_CLKEN: Enable of gpscaler4 clock (this setting has to be the same for all modules of one processing pipeline). If a submodule is enabled and FULL is used, then the register [endpoint_name]_clk must be set to 0x80. */
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_CLKEN_FSHIFT 24U
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_CLKEN_FMASK 0x3U
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_SETM_GPSCALER4_CLKEN(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_SET_GPSCALER4_CLKEN(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GET_GPSCALER4_CLKEN(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_SETM_GPSCALER4_CLKEN(s,val) ( (s)->gpscaler4_dynamic = ((s)->gpscaler4_dynamic & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_COMPENGCFG_SET_GPSCALER4_CLKEN(s,val)  ( (s)->gpscaler4_dynamic = (((s)->gpscaler4_dynamic & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_GPSCALER4_CLKEN(s) ((((s)->gpscaler4_dynamic) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_CLKEN_DISABLE 0U /* Clock for gpscaler4 is disabled */
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_CLKEN_AUTOMATIC 1U /* Clock is enabled if unit is used, frequency is defined by the register setting for this pipeline (see [endpoint_name]_Static register) */
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_CLKEN_FULL 3U /* Clock for gpscaler4 is without gating */
#define GFXREG_COMPENGCFG_GPSCALER4_DYNAMIC_GPSCALER4_CLKEN_RESET 0x1U

/* GPSCALER4_STATUS: Status information for pixel engine configuration of gpscaler4 */
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS 0x00001284U
/* GPSCALER4_SEL: Status of the connection of the gpscaler4 module */
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GPSCALER4_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GPSCALER4_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GET_GPSCALER4_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_GPSCALER4_SEL(s) ((((s)->gpscaler4_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GPSCALER4_SEL_EXTDST0 1U /* gpscaler4 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GPSCALER4_SEL_EXTDST4 2U /* gpscaler4 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GPSCALER4_SEL_EXTDST1 3U /* gpscaler4 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GPSCALER4_SEL_EXTDST5 4U /* gpscaler4 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GPSCALER4_SEL_STORE4 5U /* gpscaler4 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GPSCALER4_SEL_DISABLE 0U /* gpscaler4 module is not used */
#define GFXREG_COMPENGCFG_GPSCALER4_STATUS_GPSCALER4_SEL_RESET (none)U



/* HISTOGRAM4_DYNAMIC: Dynamic pixel engine configuration for histogram4 */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC 0x00001290U
/* HISTOGRAM4_SRC_SEL: Selection of the source for the src input of the histogram4 module */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_SRC_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_SRC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_SETM_HISTOGRAM4_SRC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_SET_HISTOGRAM4_SRC_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_GET_HISTOGRAM4_SRC_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_HISTOGRAM4_SRC_SEL(s,val) ( (s)->histogram4_dynamic = ((s)->histogram4_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_HISTOGRAM4_SRC_SEL(s,val)  ( (s)->histogram4_dynamic = (((s)->histogram4_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_HISTOGRAM4_SRC_SEL(s) ((((s)->histogram4_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_SRC_SEL_DISABLE 0U /* Unit histogram4 input port src is disabled */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_SRC_SEL_EXTSRC4 9U /* Unit histogram4 input port src is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_SRC_SEL_FETCHDECODE4 12U /* Unit histogram4 input port src is connected to output of unit fetchdecode4 */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_SRC_SEL_GAMMACOR4 18U /* Unit histogram4 input port src is connected to output of unit gammacor4 */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_SRC_SEL_MATRIX4 19U /* Unit histogram4 input port src is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_SRC_SEL_RESET 0U

/* HISTOGRAM4_CLKEN: Enable of histogram4 clock (this setting has to be the same for all modules of one processing pipeline). If a submodule is enabled and FULL is used, then the register [endpoint_name]_clk must be set to 0x80. */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_CLKEN_FSHIFT 24U
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_CLKEN_FMASK 0x3U
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_SETM_HISTOGRAM4_CLKEN(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_SET_HISTOGRAM4_CLKEN(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_GET_HISTOGRAM4_CLKEN(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_SETM_HISTOGRAM4_CLKEN(s,val) ( (s)->histogram4_dynamic = ((s)->histogram4_dynamic & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_COMPENGCFG_SET_HISTOGRAM4_CLKEN(s,val)  ( (s)->histogram4_dynamic = (((s)->histogram4_dynamic & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_HISTOGRAM4_CLKEN(s) ((((s)->histogram4_dynamic) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_CLKEN_DISABLE 0U /* Clock for histogram4 is disabled */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_CLKEN_AUTOMATIC 1U /* Clock is enabled if unit is used, frequency is defined by the register setting for this pipeline (see [endpoint_name]_Static register) */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_CLKEN_FULL 3U /* Clock for histogram4 is without gating */
#define GFXREG_COMPENGCFG_HISTOGRAM4_DYNAMIC_HISTOGRAM4_CLKEN_RESET 0x1U

/* HISTOGRAM4_STATUS: Status information for pixel engine configuration of histogram4 */
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS 0x00001294U
/* HISTOGRAM4_SEL: Status of the connection of the histogram4 module */
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_HISTOGRAM4_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_HISTOGRAM4_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_GET_HISTOGRAM4_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_HISTOGRAM4_SEL(s) ((((s)->histogram4_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_HISTOGRAM4_SEL_EXTDST0 1U /* histogram4 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_HISTOGRAM4_SEL_EXTDST4 2U /* histogram4 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_HISTOGRAM4_SEL_EXTDST1 3U /* histogram4 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_HISTOGRAM4_SEL_EXTDST5 4U /* histogram4 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_HISTOGRAM4_SEL_STORE4 5U /* histogram4 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_HISTOGRAM4_SEL_DISABLE 0U /* histogram4 module is not used */
#define GFXREG_COMPENGCFG_HISTOGRAM4_STATUS_HISTOGRAM4_SEL_RESET (none)U



/* LAYERBLEND1_DYNAMIC: Dynamic pixel engine configuration for layerblend1 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC 0x000012a0U
/* LAYERBLEND1_PRIM_SEL: Selection of the source for the prim input of the layerblend1 module */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_SETM_LAYERBLEND1_PRIM_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_SET_LAYERBLEND1_PRIM_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_GET_LAYERBLEND1_PRIM_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND1_PRIM_SEL(s,val) ( (s)->layerblend1_dynamic = ((s)->layerblend1_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND1_PRIM_SEL(s,val)  ( (s)->layerblend1_dynamic = (((s)->layerblend1_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND1_PRIM_SEL(s) ((((s)->layerblend1_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_DISABLE 0U /* Unit layerblend1 input port prim is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_CONSTFRAME0 1U /* Unit layerblend1 input port prim is connected to output of unit constframe0 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_CONSTFRAME1 5U /* Unit layerblend1 input port prim is connected to output of unit constframe1 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_CONSTFRAME4 3U /* Unit layerblend1 input port prim is connected to output of unit constframe4 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_CONSTFRAME5 7U /* Unit layerblend1 input port prim is connected to output of unit constframe5 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_MATRIX4 19U /* Unit layerblend1 input port prim is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_GPSCALER4 20U /* Unit layerblend1 input port prim is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_EXTSRC4 9U /* Unit layerblend1 input port prim is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_PRIM_SEL_RESET 0U

/* LAYERBLEND1_SEC_SEL: Selection of the source for the sec input of the layerblend1 module */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_FSHIFT 8U
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_SETM_LAYERBLEND1_SEC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_SET_LAYERBLEND1_SEC_SEL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_GET_LAYERBLEND1_SEC_SEL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND1_SEC_SEL(s,val) ( (s)->layerblend1_dynamic = ((s)->layerblend1_dynamic & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND1_SEC_SEL(s,val)  ( (s)->layerblend1_dynamic = (((s)->layerblend1_dynamic & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND1_SEC_SEL(s) ((((s)->layerblend1_dynamic) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_DISABLE 0U /* Unit layerblend1 input port sec is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_FETCHDECODE4 12U /* Unit layerblend1 input port sec is connected to output of unit fetchdecode4 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_FETCHWARP1 14U /* Unit layerblend1 input port sec is connected to output of unit fetchwarp1 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_FETCHDECODE0 17U /* Unit layerblend1 input port sec is connected to output of unit fetchdecode0 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_MATRIX4 19U /* Unit layerblend1 input port sec is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_GPSCALER4 20U /* Unit layerblend1 input port sec is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_FETCHLAYER0 11U /* Unit layerblend1 input port sec is connected to output of unit fetchlayer0 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_FETCHLAYER1 16U /* Unit layerblend1 input port sec is connected to output of unit fetchlayer1 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_SEC_SEL_RESET 0U

/* LAYERBLEND1_CLKEN: Enable of layerblend1 clock (this setting has to be the same for all modules of one processing pipeline). If a submodule is enabled and FULL is used, then the register [endpoint_name]_clk must be set to 0x80. */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_CLKEN_FSHIFT 24U
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_CLKEN_FMASK 0x3U
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_SETM_LAYERBLEND1_CLKEN(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_SET_LAYERBLEND1_CLKEN(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_GET_LAYERBLEND1_CLKEN(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND1_CLKEN(s,val) ( (s)->layerblend1_dynamic = ((s)->layerblend1_dynamic & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND1_CLKEN(s,val)  ( (s)->layerblend1_dynamic = (((s)->layerblend1_dynamic & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND1_CLKEN(s) ((((s)->layerblend1_dynamic) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_CLKEN_DISABLE 0U /* Clock for layerblend1 is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_CLKEN_AUTOMATIC 1U /* Clock is enabled if unit is used, frequency is defined by the register setting for this pipeline (see [endpoint_name]_Static register) */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_CLKEN_FULL 3U /* Clock for layerblend1 is without gating */
#define GFXREG_COMPENGCFG_LAYERBLEND1_DYNAMIC_LAYERBLEND1_CLKEN_RESET 0x1U

/* LAYERBLEND1_STATUS: Status information for pixel engine configuration of layerblend1 */
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS 0x000012a4U
/* LAYERBLEND1_SEL: Status of the connection of the layerblend1 module */
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_LAYERBLEND1_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_LAYERBLEND1_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_GET_LAYERBLEND1_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_LAYERBLEND1_SEL(s) ((((s)->layerblend1_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_LAYERBLEND1_SEL_EXTDST0 1U /* layerblend1 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_LAYERBLEND1_SEL_EXTDST4 2U /* layerblend1 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_LAYERBLEND1_SEL_EXTDST1 3U /* layerblend1 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_LAYERBLEND1_SEL_EXTDST5 4U /* layerblend1 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_LAYERBLEND1_SEL_STORE4 5U /* layerblend1 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_LAYERBLEND1_SEL_DISABLE 0U /* layerblend1 module is not used */
#define GFXREG_COMPENGCFG_LAYERBLEND1_STATUS_LAYERBLEND1_SEL_RESET (none)U



/* LAYERBLEND2_DYNAMIC: Dynamic pixel engine configuration for layerblend2 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC 0x000012c0U
/* LAYERBLEND2_PRIM_SEL: Selection of the source for the prim input of the layerblend2 module */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_SETM_LAYERBLEND2_PRIM_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_SET_LAYERBLEND2_PRIM_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_GET_LAYERBLEND2_PRIM_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND2_PRIM_SEL(s,val) ( (s)->layerblend2_dynamic = ((s)->layerblend2_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND2_PRIM_SEL(s,val)  ( (s)->layerblend2_dynamic = (((s)->layerblend2_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND2_PRIM_SEL(s) ((((s)->layerblend2_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_DISABLE 0U /* Unit layerblend2 input port prim is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_CONSTFRAME0 1U /* Unit layerblend2 input port prim is connected to output of unit constframe0 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_CONSTFRAME1 5U /* Unit layerblend2 input port prim is connected to output of unit constframe1 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_CONSTFRAME4 3U /* Unit layerblend2 input port prim is connected to output of unit constframe4 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_CONSTFRAME5 7U /* Unit layerblend2 input port prim is connected to output of unit constframe5 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_MATRIX4 19U /* Unit layerblend2 input port prim is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_GPSCALER4 20U /* Unit layerblend2 input port prim is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_EXTSRC4 9U /* Unit layerblend2 input port prim is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_LAYERBLEND1 22U /* Unit layerblend2 input port prim is connected to output of unit layerblend1 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_PRIM_SEL_RESET 1U

/* LAYERBLEND2_SEC_SEL: Selection of the source for the sec input of the layerblend2 module */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_FSHIFT 8U
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_SETM_LAYERBLEND2_SEC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_SET_LAYERBLEND2_SEC_SEL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_GET_LAYERBLEND2_SEC_SEL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND2_SEC_SEL(s,val) ( (s)->layerblend2_dynamic = ((s)->layerblend2_dynamic & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND2_SEC_SEL(s,val)  ( (s)->layerblend2_dynamic = (((s)->layerblend2_dynamic & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND2_SEC_SEL(s) ((((s)->layerblend2_dynamic) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_DISABLE 0U /* Unit layerblend2 input port sec is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_FETCHDECODE4 12U /* Unit layerblend2 input port sec is connected to output of unit fetchdecode4 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_FETCHWARP1 14U /* Unit layerblend2 input port sec is connected to output of unit fetchwarp1 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_FETCHDECODE0 17U /* Unit layerblend2 input port sec is connected to output of unit fetchdecode0 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_MATRIX4 19U /* Unit layerblend2 input port sec is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_GPSCALER4 20U /* Unit layerblend2 input port sec is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_FETCHLAYER0 11U /* Unit layerblend2 input port sec is connected to output of unit fetchlayer0 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_FETCHLAYER1 16U /* Unit layerblend2 input port sec is connected to output of unit fetchlayer1 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_SEC_SEL_RESET 11U

/* LAYERBLEND2_CLKEN: Enable of layerblend2 clock (this setting has to be the same for all modules of one processing pipeline). If a submodule is enabled and FULL is used, then the register [endpoint_name]_clk must be set to 0x80. */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_CLKEN_FSHIFT 24U
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_CLKEN_FMASK 0x3U
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_SETM_LAYERBLEND2_CLKEN(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_SET_LAYERBLEND2_CLKEN(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_GET_LAYERBLEND2_CLKEN(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND2_CLKEN(s,val) ( (s)->layerblend2_dynamic = ((s)->layerblend2_dynamic & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND2_CLKEN(s,val)  ( (s)->layerblend2_dynamic = (((s)->layerblend2_dynamic & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND2_CLKEN(s) ((((s)->layerblend2_dynamic) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_CLKEN_DISABLE 0U /* Clock for layerblend2 is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_CLKEN_AUTOMATIC 1U /* Clock is enabled if unit is used, frequency is defined by the register setting for this pipeline (see [endpoint_name]_Static register) */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_CLKEN_FULL 3U /* Clock for layerblend2 is without gating */
#define GFXREG_COMPENGCFG_LAYERBLEND2_DYNAMIC_LAYERBLEND2_CLKEN_RESET 0x1U

/* LAYERBLEND2_STATUS: Status information for pixel engine configuration of layerblend2 */
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS 0x000012c4U
/* LAYERBLEND2_SEL: Status of the connection of the layerblend2 module */
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_LAYERBLEND2_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_LAYERBLEND2_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_GET_LAYERBLEND2_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_LAYERBLEND2_SEL(s) ((((s)->layerblend2_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_LAYERBLEND2_SEL_EXTDST0 1U /* layerblend2 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_LAYERBLEND2_SEL_EXTDST4 2U /* layerblend2 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_LAYERBLEND2_SEL_EXTDST1 3U /* layerblend2 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_LAYERBLEND2_SEL_EXTDST5 4U /* layerblend2 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_LAYERBLEND2_SEL_STORE4 5U /* layerblend2 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_LAYERBLEND2_SEL_DISABLE 0U /* layerblend2 module is not used */
#define GFXREG_COMPENGCFG_LAYERBLEND2_STATUS_LAYERBLEND2_SEL_RESET (none)U



/* LAYERBLEND3_DYNAMIC: Dynamic pixel engine configuration for layerblend3 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC 0x000012e0U
/* LAYERBLEND3_PRIM_SEL: Selection of the source for the prim input of the layerblend3 module */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_SETM_LAYERBLEND3_PRIM_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_SET_LAYERBLEND3_PRIM_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_GET_LAYERBLEND3_PRIM_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND3_PRIM_SEL(s,val) ( (s)->layerblend3_dynamic = ((s)->layerblend3_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND3_PRIM_SEL(s,val)  ( (s)->layerblend3_dynamic = (((s)->layerblend3_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND3_PRIM_SEL(s) ((((s)->layerblend3_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_DISABLE 0U /* Unit layerblend3 input port prim is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_CONSTFRAME0 1U /* Unit layerblend3 input port prim is connected to output of unit constframe0 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_CONSTFRAME1 5U /* Unit layerblend3 input port prim is connected to output of unit constframe1 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_CONSTFRAME4 3U /* Unit layerblend3 input port prim is connected to output of unit constframe4 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_CONSTFRAME5 7U /* Unit layerblend3 input port prim is connected to output of unit constframe5 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_MATRIX4 19U /* Unit layerblend3 input port prim is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_GPSCALER4 20U /* Unit layerblend3 input port prim is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_EXTSRC4 9U /* Unit layerblend3 input port prim is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_LAYERBLEND2 23U /* Unit layerblend3 input port prim is connected to output of unit layerblend2 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_LAYERBLEND1 22U /* Unit layerblend3 input port prim is connected to output of unit layerblend1 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_PRIM_SEL_RESET 5U

/* LAYERBLEND3_SEC_SEL: Selection of the source for the sec input of the layerblend3 module */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_FSHIFT 8U
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_SETM_LAYERBLEND3_SEC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_SET_LAYERBLEND3_SEC_SEL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_GET_LAYERBLEND3_SEC_SEL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND3_SEC_SEL(s,val) ( (s)->layerblend3_dynamic = ((s)->layerblend3_dynamic & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND3_SEC_SEL(s,val)  ( (s)->layerblend3_dynamic = (((s)->layerblend3_dynamic & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND3_SEC_SEL(s) ((((s)->layerblend3_dynamic) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_DISABLE 0U /* Unit layerblend3 input port sec is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_FETCHDECODE4 12U /* Unit layerblend3 input port sec is connected to output of unit fetchdecode4 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_FETCHWARP1 14U /* Unit layerblend3 input port sec is connected to output of unit fetchwarp1 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_FETCHDECODE0 17U /* Unit layerblend3 input port sec is connected to output of unit fetchdecode0 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_MATRIX4 19U /* Unit layerblend3 input port sec is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_GPSCALER4 20U /* Unit layerblend3 input port sec is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_FETCHLAYER0 11U /* Unit layerblend3 input port sec is connected to output of unit fetchlayer0 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_FETCHLAYER1 16U /* Unit layerblend3 input port sec is connected to output of unit fetchlayer1 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_SEC_SEL_RESET 16U

/* LAYERBLEND3_CLKEN: Enable of layerblend3 clock (this setting has to be the same for all modules of one processing pipeline). If a submodule is enabled and FULL is used, then the register [endpoint_name]_clk must be set to 0x80. */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_CLKEN_FSHIFT 24U
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_CLKEN_FMASK 0x3U
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_SETM_LAYERBLEND3_CLKEN(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_SET_LAYERBLEND3_CLKEN(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_GET_LAYERBLEND3_CLKEN(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND3_CLKEN(s,val) ( (s)->layerblend3_dynamic = ((s)->layerblend3_dynamic & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND3_CLKEN(s,val)  ( (s)->layerblend3_dynamic = (((s)->layerblend3_dynamic & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND3_CLKEN(s) ((((s)->layerblend3_dynamic) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_CLKEN_DISABLE 0U /* Clock for layerblend3 is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_CLKEN_AUTOMATIC 1U /* Clock is enabled if unit is used, frequency is defined by the register setting for this pipeline (see [endpoint_name]_Static register) */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_CLKEN_FULL 3U /* Clock for layerblend3 is without gating */
#define GFXREG_COMPENGCFG_LAYERBLEND3_DYNAMIC_LAYERBLEND3_CLKEN_RESET 0x1U

/* LAYERBLEND3_STATUS: Status information for pixel engine configuration of layerblend3 */
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS 0x000012e4U
/* LAYERBLEND3_SEL: Status of the connection of the layerblend3 module */
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_LAYERBLEND3_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_LAYERBLEND3_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_GET_LAYERBLEND3_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_LAYERBLEND3_SEL(s) ((((s)->layerblend3_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_LAYERBLEND3_SEL_EXTDST0 1U /* layerblend3 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_LAYERBLEND3_SEL_EXTDST4 2U /* layerblend3 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_LAYERBLEND3_SEL_EXTDST1 3U /* layerblend3 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_LAYERBLEND3_SEL_EXTDST5 4U /* layerblend3 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_LAYERBLEND3_SEL_STORE4 5U /* layerblend3 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_LAYERBLEND3_SEL_DISABLE 0U /* layerblend3 module is not used */
#define GFXREG_COMPENGCFG_LAYERBLEND3_STATUS_LAYERBLEND3_SEL_RESET (none)U



/* LAYERBLEND4_DYNAMIC: Dynamic pixel engine configuration for layerblend4 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC 0x00001300U
/* LAYERBLEND4_PRIM_SEL: Selection of the source for the prim input of the layerblend4 module */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_SETM_LAYERBLEND4_PRIM_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_SET_LAYERBLEND4_PRIM_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_GET_LAYERBLEND4_PRIM_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND4_PRIM_SEL(s,val) ( (s)->layerblend4_dynamic = ((s)->layerblend4_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND4_PRIM_SEL(s,val)  ( (s)->layerblend4_dynamic = (((s)->layerblend4_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND4_PRIM_SEL(s) ((((s)->layerblend4_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_DISABLE 0U /* Unit layerblend4 input port prim is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_CONSTFRAME0 1U /* Unit layerblend4 input port prim is connected to output of unit constframe0 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_CONSTFRAME1 5U /* Unit layerblend4 input port prim is connected to output of unit constframe1 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_CONSTFRAME4 3U /* Unit layerblend4 input port prim is connected to output of unit constframe4 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_CONSTFRAME5 7U /* Unit layerblend4 input port prim is connected to output of unit constframe5 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_MATRIX4 19U /* Unit layerblend4 input port prim is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_GPSCALER4 20U /* Unit layerblend4 input port prim is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_EXTSRC4 9U /* Unit layerblend4 input port prim is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_LAYERBLEND3 24U /* Unit layerblend4 input port prim is connected to output of unit layerblend3 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_LAYERBLEND2 23U /* Unit layerblend4 input port prim is connected to output of unit layerblend2 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_LAYERBLEND1 22U /* Unit layerblend4 input port prim is connected to output of unit layerblend1 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_PRIM_SEL_RESET 0U

/* LAYERBLEND4_SEC_SEL: Selection of the source for the sec input of the layerblend4 module */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_FSHIFT 8U
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_SETM_LAYERBLEND4_SEC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_SET_LAYERBLEND4_SEC_SEL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_GET_LAYERBLEND4_SEC_SEL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND4_SEC_SEL(s,val) ( (s)->layerblend4_dynamic = ((s)->layerblend4_dynamic & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND4_SEC_SEL(s,val)  ( (s)->layerblend4_dynamic = (((s)->layerblend4_dynamic & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND4_SEC_SEL(s) ((((s)->layerblend4_dynamic) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_DISABLE 0U /* Unit layerblend4 input port sec is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_FETCHDECODE4 12U /* Unit layerblend4 input port sec is connected to output of unit fetchdecode4 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_FETCHWARP1 14U /* Unit layerblend4 input port sec is connected to output of unit fetchwarp1 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_FETCHDECODE0 17U /* Unit layerblend4 input port sec is connected to output of unit fetchdecode0 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_MATRIX4 19U /* Unit layerblend4 input port sec is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_GPSCALER4 20U /* Unit layerblend4 input port sec is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_FETCHLAYER0 11U /* Unit layerblend4 input port sec is connected to output of unit fetchlayer0 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_FETCHLAYER1 16U /* Unit layerblend4 input port sec is connected to output of unit fetchlayer1 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_SEC_SEL_RESET 0U

/* LAYERBLEND4_CLKEN: Enable of layerblend4 clock (this setting has to be the same for all modules of one processing pipeline). If a submodule is enabled and FULL is used, then the register [endpoint_name]_clk must be set to 0x80. */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_CLKEN_FSHIFT 24U
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_CLKEN_FMASK 0x3U
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_SETM_LAYERBLEND4_CLKEN(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_SET_LAYERBLEND4_CLKEN(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_GET_LAYERBLEND4_CLKEN(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND4_CLKEN(s,val) ( (s)->layerblend4_dynamic = ((s)->layerblend4_dynamic & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND4_CLKEN(s,val)  ( (s)->layerblend4_dynamic = (((s)->layerblend4_dynamic & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND4_CLKEN(s) ((((s)->layerblend4_dynamic) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_CLKEN_DISABLE 0U /* Clock for layerblend4 is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_CLKEN_AUTOMATIC 1U /* Clock is enabled if unit is used, frequency is defined by the register setting for this pipeline (see [endpoint_name]_Static register) */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_CLKEN_FULL 3U /* Clock for layerblend4 is without gating */
#define GFXREG_COMPENGCFG_LAYERBLEND4_DYNAMIC_LAYERBLEND4_CLKEN_RESET 0x1U

/* LAYERBLEND4_STATUS: Status information for pixel engine configuration of layerblend4 */
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS 0x00001304U
/* LAYERBLEND4_SEL: Status of the connection of the layerblend4 module */
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_LAYERBLEND4_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_LAYERBLEND4_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_GET_LAYERBLEND4_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_LAYERBLEND4_SEL(s) ((((s)->layerblend4_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_LAYERBLEND4_SEL_EXTDST0 1U /* layerblend4 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_LAYERBLEND4_SEL_EXTDST4 2U /* layerblend4 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_LAYERBLEND4_SEL_EXTDST1 3U /* layerblend4 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_LAYERBLEND4_SEL_EXTDST5 4U /* layerblend4 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_LAYERBLEND4_SEL_STORE4 5U /* layerblend4 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_LAYERBLEND4_SEL_DISABLE 0U /* layerblend4 module is not used */
#define GFXREG_COMPENGCFG_LAYERBLEND4_STATUS_LAYERBLEND4_SEL_RESET (none)U



/* LAYERBLEND5_DYNAMIC: Dynamic pixel engine configuration for layerblend5 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC 0x00001320U
/* LAYERBLEND5_PRIM_SEL: Selection of the source for the prim input of the layerblend5 module */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_FSHIFT 0U
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_SETM_LAYERBLEND5_PRIM_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_SET_LAYERBLEND5_PRIM_SEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_GET_LAYERBLEND5_PRIM_SEL(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND5_PRIM_SEL(s,val) ( (s)->layerblend5_dynamic = ((s)->layerblend5_dynamic & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND5_PRIM_SEL(s,val)  ( (s)->layerblend5_dynamic = (((s)->layerblend5_dynamic & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND5_PRIM_SEL(s) ((((s)->layerblend5_dynamic) ) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_DISABLE 0U /* Unit layerblend5 input port prim is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_CONSTFRAME0 1U /* Unit layerblend5 input port prim is connected to output of unit constframe0 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_CONSTFRAME1 5U /* Unit layerblend5 input port prim is connected to output of unit constframe1 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_CONSTFRAME4 3U /* Unit layerblend5 input port prim is connected to output of unit constframe4 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_CONSTFRAME5 7U /* Unit layerblend5 input port prim is connected to output of unit constframe5 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_MATRIX4 19U /* Unit layerblend5 input port prim is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_GPSCALER4 20U /* Unit layerblend5 input port prim is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_EXTSRC4 9U /* Unit layerblend5 input port prim is connected to output of unit extsrc4 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_LAYERBLEND4 25U /* Unit layerblend5 input port prim is connected to output of unit layerblend4 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_LAYERBLEND3 24U /* Unit layerblend5 input port prim is connected to output of unit layerblend3 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_LAYERBLEND2 23U /* Unit layerblend5 input port prim is connected to output of unit layerblend2 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_LAYERBLEND1 22U /* Unit layerblend5 input port prim is connected to output of unit layerblend1 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_PRIM_SEL_RESET 0U

/* LAYERBLEND5_SEC_SEL: Selection of the source for the sec input of the layerblend5 module */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_FSHIFT 8U
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_FMASK 0x1fU
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_SETM_LAYERBLEND5_SEC_SEL(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_SET_LAYERBLEND5_SEC_SEL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_GET_LAYERBLEND5_SEC_SEL(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND5_SEC_SEL(s,val) ( (s)->layerblend5_dynamic = ((s)->layerblend5_dynamic & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND5_SEC_SEL(s,val)  ( (s)->layerblend5_dynamic = (((s)->layerblend5_dynamic & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND5_SEC_SEL(s) ((((s)->layerblend5_dynamic) >> 8U) & 0x1fUL)
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_DISABLE 0U /* Unit layerblend5 input port sec is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_FETCHDECODE4 12U /* Unit layerblend5 input port sec is connected to output of unit fetchdecode4 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_FETCHWARP1 14U /* Unit layerblend5 input port sec is connected to output of unit fetchwarp1 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_FETCHDECODE0 17U /* Unit layerblend5 input port sec is connected to output of unit fetchdecode0 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_MATRIX4 19U /* Unit layerblend5 input port sec is connected to output of unit matrix4 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_GPSCALER4 20U /* Unit layerblend5 input port sec is connected to output of unit gpscaler4 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_FETCHLAYER0 11U /* Unit layerblend5 input port sec is connected to output of unit fetchlayer0 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_FETCHLAYER1 16U /* Unit layerblend5 input port sec is connected to output of unit fetchlayer1 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_SEC_SEL_RESET 0U

/* LAYERBLEND5_CLKEN: Enable of layerblend5 clock (this setting has to be the same for all modules of one processing pipeline). If a submodule is enabled and FULL is used, then the register [endpoint_name]_clk must be set to 0x80. */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_CLKEN_FSHIFT 24U
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_CLKEN_FMASK 0x3U
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_SETM_LAYERBLEND5_CLKEN(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_SET_LAYERBLEND5_CLKEN(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_GET_LAYERBLEND5_CLKEN(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_SETM_LAYERBLEND5_CLKEN(s,val) ( (s)->layerblend5_dynamic = ((s)->layerblend5_dynamic & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_COMPENGCFG_SET_LAYERBLEND5_CLKEN(s,val)  ( (s)->layerblend5_dynamic = (((s)->layerblend5_dynamic & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_COMPENGCFG_GET_LAYERBLEND5_CLKEN(s) ((((s)->layerblend5_dynamic) >> 24U) & 0x3UL)
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_CLKEN_DISABLE 0U /* Clock for layerblend5 is disabled */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_CLKEN_AUTOMATIC 1U /* Clock is enabled if unit is used, frequency is defined by the register setting for this pipeline (see [endpoint_name]_Static register) */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_CLKEN_FULL 3U /* Clock for layerblend5 is without gating */
#define GFXREG_COMPENGCFG_LAYERBLEND5_DYNAMIC_LAYERBLEND5_CLKEN_RESET 0x1U

/* LAYERBLEND5_STATUS: Status information for pixel engine configuration of layerblend5 */
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS 0x00001324U
/* LAYERBLEND5_SEL: Status of the connection of the layerblend5 module */
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_LAYERBLEND5_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_LAYERBLEND5_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_GET_LAYERBLEND5_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_LAYERBLEND5_SEL(s) ((((s)->layerblend5_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_LAYERBLEND5_SEL_EXTDST0 1U /* layerblend5 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_LAYERBLEND5_SEL_EXTDST4 2U /* layerblend5 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_LAYERBLEND5_SEL_EXTDST1 3U /* layerblend5 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_LAYERBLEND5_SEL_EXTDST5 4U /* layerblend5 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_LAYERBLEND5_SEL_STORE4 5U /* layerblend5 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_LAYERBLEND5_SEL_DISABLE 0U /* layerblend5 module is not used */
#define GFXREG_COMPENGCFG_LAYERBLEND5_STATUS_LAYERBLEND5_SEL_RESET (none)U



/* EXTSRC8_STATUS: Status information for pixel engine configuration of extsrc8 */
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS 0x00001340U
/* EXTSRC8_SEL: Status of the connection of the extsrc8 module */
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_EXTSRC8_SEL_FSHIFT 16U
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_EXTSRC8_SEL_FMASK 0x7U
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_GET_EXTSRC8_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_GET_EXTSRC8_SEL(s) ((((s)->extsrc8_status) >> 16U) & 0x7UL)
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_EXTSRC8_SEL_EXTDST0 1U /* extsrc8 module is used from extdst0 processing path */
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_EXTSRC8_SEL_EXTDST4 2U /* extsrc8 module is used from extdst4 processing path */
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_EXTSRC8_SEL_EXTDST1 3U /* extsrc8 module is used from extdst1 processing path */
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_EXTSRC8_SEL_EXTDST5 4U /* extsrc8 module is used from extdst5 processing path */
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_EXTSRC8_SEL_STORE4 5U /* extsrc8 module is used from store4 processing path */
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_EXTSRC8_SEL_DISABLE 0U /* extsrc8 module is not used */
#define GFXREG_COMPENGCFG_EXTSRC8_STATUS_EXTSRC8_SEL_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_COMPENGCFG_REGISTER_H */

