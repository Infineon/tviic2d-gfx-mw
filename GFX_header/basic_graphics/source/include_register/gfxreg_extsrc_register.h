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
 * \date        Tue May 26 11:58:39 2020
 * \file        gfxreg_extsrc_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   extsrc
 *              Source:   extsrc.component.xml
 *              Template: component_h.tpl
 * \brief      Iris extsrc register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_EXTSRC_REGISTER_H
#define GFXREG_EXTSRC_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* extsrc registers */
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


/* STATICCONTROL: ExtSrc static control register */
#define GFXREG_EXTSRC_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_EXTSRC_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_EXTSRC_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_EXTSRC_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_EXTSRC_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_EXTSRC_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_EXTSRC_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_EXTSRC_STATICCONTROL_SHDEN_RESET 0U

/* STARTSEL: Start select selects the mode to start processing operations. */
#define GFXREG_EXTSRC_STATICCONTROL_STARTSEL_FSHIFT 8U
#define GFXREG_EXTSRC_STATICCONTROL_STARTSEL_FMASK 0x1U
#define GFXREG_EXTSRC_STATICCONTROL_SETM_STARTSEL(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_EXTSRC_STATICCONTROL_SET_STARTSEL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_STATICCONTROL_GET_STARTSEL(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_STARTSEL(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_EXTSRC_SET_STARTSEL(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_STARTSEL(s) ((((s)->staticcontrol) >> 8U) & 0x1UL)
#define GFXREG_EXTSRC_STATICCONTROL_STARTSEL_INPUT 0U /* Free running mode, use the incoming command word as trigger to start processing. */
#define GFXREG_EXTSRC_STATICCONTROL_STARTSEL_LOCAL 1U /* Keep to local start configuration, use external kick or SW trigger to start processing. The behavior is similar to fetch units. */
#define GFXREG_EXTSRC_STATICCONTROL_STARTSEL_RESET 0U

/* CLIPWINDOWOFFSET: Clip window offset, to generate a clipping of the frame. It has to be within the input frame. */
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET 0x00000004U
/* CLIPWINDOWXOFFSET: Clip window offset in X direction, relative to the frame origin. */
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_CLIPWINDOWXOFFSET_FSHIFT 0U
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_CLIPWINDOWXOFFSET_FMASK 0x3fffU
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_SETM_CLIPWINDOWXOFFSET(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_SET_CLIPWINDOWXOFFSET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_GET_CLIPWINDOWXOFFSET(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_EXTSRC_SETM_CLIPWINDOWXOFFSET(s,val) ( (s)->clipwindowoffset = ((s)->clipwindowoffset & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_EXTSRC_SET_CLIPWINDOWXOFFSET(s,val)  ( (s)->clipwindowoffset = (((s)->clipwindowoffset & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_CLIPWINDOWXOFFSET(s) ((((s)->clipwindowoffset) ) & 0x3fffUL)
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_CLIPWINDOWXOFFSET_RESET 0U

/* CLIPWINDOWYOFFSET: Clip window offset in Y direction, relative to the frame origin. */
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_CLIPWINDOWYOFFSET_FSHIFT 16U
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_CLIPWINDOWYOFFSET_FMASK 0x3fffU
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_SETM_CLIPWINDOWYOFFSET(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_SET_CLIPWINDOWYOFFSET(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_GET_CLIPWINDOWYOFFSET(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_EXTSRC_SETM_CLIPWINDOWYOFFSET(s,val) ( (s)->clipwindowoffset = ((s)->clipwindowoffset & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_EXTSRC_SET_CLIPWINDOWYOFFSET(s,val)  ( (s)->clipwindowoffset = (((s)->clipwindowoffset & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_CLIPWINDOWYOFFSET(s) ((((s)->clipwindowoffset) >> 16U) & 0x3fffUL)
#define GFXREG_EXTSRC_CLIPWINDOWOFFSET_CLIPWINDOWYOFFSET_RESET 0U

/* CLIPWINDOWDIMENSION: Define the clip window dimension. If the clip window feature is enabled this dimension is used for the new frame dimension. Note that the clip window has to be smaller or equal to the original frame dimensions. The new frame has to be within the active area of the original frame. */
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION 0x00000008U
/* CLIPWINDOWWIDTH: Clip window width in pixels minus one. */
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_CLIPWINDOWWIDTH_FSHIFT 0U
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_CLIPWINDOWWIDTH_FMASK 0x3fffU
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_SETM_CLIPWINDOWWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_SET_CLIPWINDOWWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_GET_CLIPWINDOWWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_EXTSRC_SETM_CLIPWINDOWWIDTH(s,val) ( (s)->clipwindowdimension = ((s)->clipwindowdimension & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_EXTSRC_SET_CLIPWINDOWWIDTH(s,val)  ( (s)->clipwindowdimension = (((s)->clipwindowdimension & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_CLIPWINDOWWIDTH(s) ((((s)->clipwindowdimension) ) & 0x3fffUL)
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_CLIPWINDOWWIDTH_RESET 0U

/* CLIPWINDOWHEIGHT: Clip window height in pixels minus one. */
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_CLIPWINDOWHEIGHT_FSHIFT 16U
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_CLIPWINDOWHEIGHT_FMASK 0x3fffU
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_SETM_CLIPWINDOWHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_SET_CLIPWINDOWHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_GET_CLIPWINDOWHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_EXTSRC_SETM_CLIPWINDOWHEIGHT(s,val) ( (s)->clipwindowdimension = ((s)->clipwindowdimension & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_EXTSRC_SET_CLIPWINDOWHEIGHT(s,val)  ( (s)->clipwindowdimension = (((s)->clipwindowdimension & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_CLIPWINDOWHEIGHT(s) ((((s)->clipwindowdimension) >> 16U) & 0x3fffUL)
#define GFXREG_EXTSRC_CLIPWINDOWDIMENSION_CLIPWINDOWHEIGHT_RESET 0U

/* COLORCOMPONENTBITS: Color component size of raw input data. Please note that the width must be equal or lower than the output width. */
#define GFXREG_EXTSRC_COLORCOMPONENTBITS 0x0000000cU
/* COMPONENTBITSALPHA: Component size of alpha channel [0-8]. */
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSALPHA_FSHIFT 0U
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSALPHA_FMASK 0xfU
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SETM_COMPONENTBITSALPHA(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SET_COMPONENTBITSALPHA(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_GET_COMPONENTBITSALPHA(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_EXTSRC_SETM_COMPONENTBITSALPHA(s,val) ( (s)->colorcomponentbits = ((s)->colorcomponentbits & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_EXTSRC_SET_COMPONENTBITSALPHA(s,val)  ( (s)->colorcomponentbits = (((s)->colorcomponentbits & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_COMPONENTBITSALPHA(s) ((((s)->colorcomponentbits) ) & 0xfUL)
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSALPHA_RESET 8U

/* COMPONENTBITSBLUE: Component size of blue channel [0-10]. */
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSBLUE_FSHIFT 8U
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSBLUE_FMASK 0xfU
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SETM_COMPONENTBITSBLUE(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SET_COMPONENTBITSBLUE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_GET_COMPONENTBITSBLUE(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_EXTSRC_SETM_COMPONENTBITSBLUE(s,val) ( (s)->colorcomponentbits = ((s)->colorcomponentbits & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_EXTSRC_SET_COMPONENTBITSBLUE(s,val)  ( (s)->colorcomponentbits = (((s)->colorcomponentbits & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_COMPONENTBITSBLUE(s) ((((s)->colorcomponentbits) >> 8U) & 0xfUL)
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSBLUE_RESET 8U

/* COMPONENTBITSGREEN: Component size of green channel [0-10]. */
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSGREEN_FSHIFT 16U
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSGREEN_FMASK 0xfU
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SETM_COMPONENTBITSGREEN(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SET_COMPONENTBITSGREEN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_GET_COMPONENTBITSGREEN(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_EXTSRC_SETM_COMPONENTBITSGREEN(s,val) ( (s)->colorcomponentbits = ((s)->colorcomponentbits & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_EXTSRC_SET_COMPONENTBITSGREEN(s,val)  ( (s)->colorcomponentbits = (((s)->colorcomponentbits & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_COMPONENTBITSGREEN(s) ((((s)->colorcomponentbits) >> 16U) & 0xfUL)
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSGREEN_RESET 8U

/* COMPONENTBITSRED: Component size of red channel [0-10]. */
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSRED_FSHIFT 24U
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSRED_FMASK 0xfU
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SETM_COMPONENTBITSRED(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SET_COMPONENTBITSRED(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_GET_COMPONENTBITSRED(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_EXTSRC_SETM_COMPONENTBITSRED(s,val) ( (s)->colorcomponentbits = ((s)->colorcomponentbits & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_EXTSRC_SET_COMPONENTBITSRED(s,val)  ( (s)->colorcomponentbits = (((s)->colorcomponentbits & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_COMPONENTBITSRED(s) ((((s)->colorcomponentbits) >> 24U) & 0xfUL)
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_COMPONENTBITSRED_RESET 8U

/* ITUFORMAT: When ComponentBitsRed/Green/Blue is set to 10 and this mode enabled (value 1), then input format is considered 8.2 instead of 10.0 bits (max color is 1020 instead of 1023). This is compliant to ITU 656 standard. */
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_ITUFORMAT_FSHIFT 31U
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_ITUFORMAT_FMASK 0x1U
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SETM_ITUFORMAT(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_SET_ITUFORMAT(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_GET_ITUFORMAT(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_ITUFORMAT(s,val) ( (s)->colorcomponentbits = ((s)->colorcomponentbits & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_EXTSRC_SET_ITUFORMAT(s,val)  ( (s)->colorcomponentbits = (((s)->colorcomponentbits & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_ITUFORMAT(s) ((((s)->colorcomponentbits) >> 31U) & 0x1UL)
#define GFXREG_EXTSRC_COLORCOMPONENTBITS_ITUFORMAT_RESET 0U

/* COLORCOMPONENTSHIFT: Color component offset of raw input data. */
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT 0x00000010U
/* COMPONENTSHIFTALPHA: Offset for alpha component. */
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTALPHA_FSHIFT 0U
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTALPHA_FMASK 0x3fU
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_SETM_COMPONENTSHIFTALPHA(val) (((CYGFX_U32)(val) & 0x3fUL) )
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_SET_COMPONENTSHIFTALPHA(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_GET_COMPONENTSHIFTALPHA(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_EXTSRC_SETM_COMPONENTSHIFTALPHA(s,val) ( (s)->colorcomponentshift = ((s)->colorcomponentshift & ~0x3fUL) | (((CYGFX_U32)(val) ) & 0x3fUL) )
#define GFXREG_EXTSRC_SET_COMPONENTSHIFTALPHA(s,val)  ( (s)->colorcomponentshift = (((s)->colorcomponentshift & ~0x3fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_COMPONENTSHIFTALPHA(s) ((((s)->colorcomponentshift) ) & 0x3fUL)
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTALPHA_RESET 24U

/* COMPONENTSHIFTBLUE: Offset for blue component. */
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTBLUE_FSHIFT 8U
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTBLUE_FMASK 0x3fU
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_SETM_COMPONENTSHIFTBLUE(val) (((CYGFX_U32)(val) & 0x3fUL) << 8U)
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_SET_COMPONENTSHIFTBLUE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_GET_COMPONENTSHIFTBLUE(val) (((CYGFX_U32)(val) >> 8U) & 0x3fUL)
#define GFXREG_EXTSRC_SETM_COMPONENTSHIFTBLUE(s,val) ( (s)->colorcomponentshift = ((s)->colorcomponentshift & ~0x3f00UL) | (((CYGFX_U32)(val) << 8U) & 0x3f00UL) )
#define GFXREG_EXTSRC_SET_COMPONENTSHIFTBLUE(s,val)  ( (s)->colorcomponentshift = (((s)->colorcomponentshift & ~0x3f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_COMPONENTSHIFTBLUE(s) ((((s)->colorcomponentshift) >> 8U) & 0x3fUL)
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTBLUE_RESET 0U

/* COMPONENTSHIFTGREEN: Offset for green component. */
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTGREEN_FSHIFT 16U
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTGREEN_FMASK 0x3fU
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_SETM_COMPONENTSHIFTGREEN(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_SET_COMPONENTSHIFTGREEN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_GET_COMPONENTSHIFTGREEN(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_EXTSRC_SETM_COMPONENTSHIFTGREEN(s,val) ( (s)->colorcomponentshift = ((s)->colorcomponentshift & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_EXTSRC_SET_COMPONENTSHIFTGREEN(s,val)  ( (s)->colorcomponentshift = (((s)->colorcomponentshift & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_COMPONENTSHIFTGREEN(s) ((((s)->colorcomponentshift) >> 16U) & 0x3fUL)
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTGREEN_RESET 8U

/* COMPONENTSHIFTRED: Offset for red component. */
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTRED_FSHIFT 24U
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTRED_FMASK 0x3fU
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_SETM_COMPONENTSHIFTRED(val) (((CYGFX_U32)(val) & 0x3fUL) << 24U)
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_SET_COMPONENTSHIFTRED(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_GET_COMPONENTSHIFTRED(val) (((CYGFX_U32)(val) >> 24U) & 0x3fUL)
#define GFXREG_EXTSRC_SETM_COMPONENTSHIFTRED(s,val) ( (s)->colorcomponentshift = ((s)->colorcomponentshift & ~0x3f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3f000000UL) )
#define GFXREG_EXTSRC_SET_COMPONENTSHIFTRED(s,val)  ( (s)->colorcomponentshift = (((s)->colorcomponentshift & ~0x3f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_COMPONENTSHIFTRED(s) ((((s)->colorcomponentshift) >> 24U) & 0x3fUL)
#define GFXREG_EXTSRC_COLORCOMPONENTSHIFT_COMPONENTSHIFTRED_RESET 16U

/* CONSTANTCOLOR: Constant color register
   Constant color settings used when ComponentBits settings are 0 and for comparison for transparent color feature. */
#define GFXREG_EXTSRC_CONSTANTCOLOR 0x00000014U
/* CONSTANTALPHA: Alpha. */
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTALPHA_FSHIFT 0U
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTALPHA_FMASK 0xffU
#define GFXREG_EXTSRC_CONSTANTCOLOR_SETM_CONSTANTALPHA(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_EXTSRC_CONSTANTCOLOR_SET_CONSTANTALPHA(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONSTANTCOLOR_GET_CONSTANTALPHA(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_EXTSRC_SETM_CONSTANTALPHA(s,val) ( (s)->constantcolor = ((s)->constantcolor & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_EXTSRC_SET_CONSTANTALPHA(s,val)  ( (s)->constantcolor = (((s)->constantcolor & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_CONSTANTALPHA(s) ((((s)->constantcolor) ) & 0xffUL)
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTALPHA_RESET 0U

/* CONSTANTBLUE: Blue or V (chroma). */
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTBLUE_FSHIFT 8U
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTBLUE_FMASK 0xffU
#define GFXREG_EXTSRC_CONSTANTCOLOR_SETM_CONSTANTBLUE(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_EXTSRC_CONSTANTCOLOR_SET_CONSTANTBLUE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONSTANTCOLOR_GET_CONSTANTBLUE(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_EXTSRC_SETM_CONSTANTBLUE(s,val) ( (s)->constantcolor = ((s)->constantcolor & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_EXTSRC_SET_CONSTANTBLUE(s,val)  ( (s)->constantcolor = (((s)->constantcolor & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_CONSTANTBLUE(s) ((((s)->constantcolor) >> 8U) & 0xffUL)
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTBLUE_RESET 0U

/* CONSTANTGREEN: Green or U (chroma). */
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTGREEN_FSHIFT 16U
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTGREEN_FMASK 0xffU
#define GFXREG_EXTSRC_CONSTANTCOLOR_SETM_CONSTANTGREEN(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_EXTSRC_CONSTANTCOLOR_SET_CONSTANTGREEN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONSTANTCOLOR_GET_CONSTANTGREEN(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_EXTSRC_SETM_CONSTANTGREEN(s,val) ( (s)->constantcolor = ((s)->constantcolor & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_EXTSRC_SET_CONSTANTGREEN(s,val)  ( (s)->constantcolor = (((s)->constantcolor & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_CONSTANTGREEN(s) ((((s)->constantcolor) >> 16U) & 0xffUL)
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTGREEN_RESET 0U

/* CONSTANTRED: Red or Y (luma). */
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTRED_FSHIFT 24U
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTRED_FMASK 0xffU
#define GFXREG_EXTSRC_CONSTANTCOLOR_SETM_CONSTANTRED(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_EXTSRC_CONSTANTCOLOR_SET_CONSTANTRED(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONSTANTCOLOR_GET_CONSTANTRED(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_EXTSRC_SETM_CONSTANTRED(s,val) ( (s)->constantcolor = ((s)->constantcolor & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_EXTSRC_SET_CONSTANTRED(s,val)  ( (s)->constantcolor = (((s)->constantcolor & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_CONSTANTRED(s) ((((s)->constantcolor) >> 24U) & 0xffUL)
#define GFXREG_EXTSRC_CONSTANTCOLOR_CONSTANTRED_RESET 0U

/* CONTROL: Common control settings. */
#define GFXREG_EXTSRC_CONTROL 0x00000018U
/* CLIPWINDOWENABLE: Value 1 enables the clip window feature. */
#define GFXREG_EXTSRC_CONTROL_CLIPWINDOWENABLE_FSHIFT 0U
#define GFXREG_EXTSRC_CONTROL_CLIPWINDOWENABLE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_CLIPWINDOWENABLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_EXTSRC_CONTROL_SET_CLIPWINDOWENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_CLIPWINDOWENABLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_EXTSRC_SETM_CLIPWINDOWENABLE(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_EXTSRC_SET_CLIPWINDOWENABLE(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_CLIPWINDOWENABLE(s) ((((s)->control) ) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_CLIPWINDOWENABLE_RESET 0U

/* RASTERMODE: Selects a method how generate output samples from input stream. */
#define GFXREG_EXTSRC_CONTROL_RASTERMODE_FSHIFT 4U
#define GFXREG_EXTSRC_CONTROL_RASTERMODE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_RASTERMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_EXTSRC_CONTROL_SET_RASTERMODE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_RASTERMODE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_RASTERMODE(s,val) ( (s)->control = ((s)->control & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_EXTSRC_SET_RASTERMODE(s,val)  ( (s)->control = (((s)->control & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_RASTERMODE(s) ((((s)->control) >> 4U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_RASTERMODE_NORMAL 0x0U /* Input stream is RGB(A) or YUV 4:4:4. */
#define GFXREG_EXTSRC_CONTROL_RASTERMODE_YUV422 0x1U /* Input stream is packed YUV 4:2:2. */
#define GFXREG_EXTSRC_CONTROL_RASTERMODE_RESET 0x0U

/* YUV422UPSAMPLINGMODE: Selects a method for horizontal up-sampling when RasterMode is YUV422. */
#define GFXREG_EXTSRC_CONTROL_YUV422UPSAMPLINGMODE_FSHIFT 5U
#define GFXREG_EXTSRC_CONTROL_YUV422UPSAMPLINGMODE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_YUV422UPSAMPLINGMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_EXTSRC_CONTROL_SET_YUV422UPSAMPLINGMODE(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_YUV422UPSAMPLINGMODE(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_YUV422UPSAMPLINGMODE(s,val) ( (s)->control = ((s)->control & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_EXTSRC_SET_YUV422UPSAMPLINGMODE(s,val)  ( (s)->control = (((s)->control & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_YUV422UPSAMPLINGMODE(s) ((((s)->control) >> 5U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_YUV422UPSAMPLINGMODE_REPLICATE 0x0U /* Replicate mode for interspersed samples (UV samples between Y samples). */
#define GFXREG_EXTSRC_CONTROL_YUV422UPSAMPLINGMODE_INTERPOLATE 0x1U /* Interpolate mode for coaligned samples (UV samples at Y sample positions). */
#define GFXREG_EXTSRC_CONTROL_YUV422UPSAMPLINGMODE_RESET 0x0U

/* YUVCONVERSIONMODE: Enables different kind of YUV to RGB conversions. */
#define GFXREG_EXTSRC_CONTROL_YUVCONVERSIONMODE_FSHIFT 6U
#define GFXREG_EXTSRC_CONTROL_YUVCONVERSIONMODE_FMASK 0x3U
#define GFXREG_EXTSRC_CONTROL_SETM_YUVCONVERSIONMODE(val) (((CYGFX_U32)(val) & 0x3UL) << 6U)
#define GFXREG_EXTSRC_CONTROL_SET_YUVCONVERSIONMODE(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_YUVCONVERSIONMODE(val) (((CYGFX_U32)(val) >> 6U) & 0x3UL)
#define GFXREG_EXTSRC_SETM_YUVCONVERSIONMODE(s,val) ( (s)->control = ((s)->control & ~0xc0UL) | (((CYGFX_U32)(val) << 6U) & 0xc0UL) )
#define GFXREG_EXTSRC_SET_YUVCONVERSIONMODE(s,val)  ( (s)->control = (((s)->control & ~0xc0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_YUVCONVERSIONMODE(s) ((((s)->control) >> 6U) & 0x3UL)
#define GFXREG_EXTSRC_CONTROL_YUVCONVERSIONMODE_OFF 0x0U /* No conversion. Input data must be RGB. */
#define GFXREG_EXTSRC_CONTROL_YUVCONVERSIONMODE_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_EXTSRC_CONTROL_YUVCONVERSIONMODE_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_EXTSRC_CONTROL_YUVCONVERSIONMODE_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_EXTSRC_CONTROL_YUVCONVERSIONMODE_RESET 0x0U

/* RGBALPHASRCENABLE: Value 1 enables source alpha (extracted from input stream) for RGB pre-multiply. When disabled source alpha is set to 1. */
#define GFXREG_EXTSRC_CONTROL_RGBALPHASRCENABLE_FSHIFT 8U
#define GFXREG_EXTSRC_CONTROL_RGBALPHASRCENABLE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_RGBALPHASRCENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_EXTSRC_CONTROL_SET_RGBALPHASRCENABLE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_RGBALPHASRCENABLE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_RGBALPHASRCENABLE(s,val) ( (s)->control = ((s)->control & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_EXTSRC_SET_RGBALPHASRCENABLE(s,val)  ( (s)->control = (((s)->control & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_RGBALPHASRCENABLE(s) ((((s)->control) >> 8U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_RGBALPHASRCENABLE_RESET 0U

/* RGBALPHACONSTENABLE: Value 1 enables constant alpha (ConstAlpha field) for RGB pre-multiply. When disabled constant alpha is set to 1. */
#define GFXREG_EXTSRC_CONTROL_RGBALPHACONSTENABLE_FSHIFT 9U
#define GFXREG_EXTSRC_CONTROL_RGBALPHACONSTENABLE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_RGBALPHACONSTENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_EXTSRC_CONTROL_SET_RGBALPHACONSTENABLE(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_RGBALPHACONSTENABLE(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_RGBALPHACONSTENABLE(s,val) ( (s)->control = ((s)->control & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_EXTSRC_SET_RGBALPHACONSTENABLE(s,val)  ( (s)->control = (((s)->control & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_RGBALPHACONSTENABLE(s) ((((s)->control) >> 9U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_RGBALPHACONSTENABLE_RESET 0U

/* RGBALPHATRANSENABLE: Value 1 enables transparent alpha (0 or 1 depending on RGB matching ConstantColor setting) for RGB pre-multiply. When disabled transparent alpha is set to 1. */
#define GFXREG_EXTSRC_CONTROL_RGBALPHATRANSENABLE_FSHIFT 10U
#define GFXREG_EXTSRC_CONTROL_RGBALPHATRANSENABLE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_RGBALPHATRANSENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_EXTSRC_CONTROL_SET_RGBALPHATRANSENABLE(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_RGBALPHATRANSENABLE(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_RGBALPHATRANSENABLE(s,val) ( (s)->control = ((s)->control & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_EXTSRC_SET_RGBALPHATRANSENABLE(s,val)  ( (s)->control = (((s)->control & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_RGBALPHATRANSENABLE(s) ((((s)->control) >> 10U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_RGBALPHATRANSENABLE_RESET 0U

/* PREMULCONSTRGB: When enabled (value 1) the values given by ConstantRed/Green/Blue are used instead of alpha for source RGB pre-multiply. Settings RGBAlphaSrc/Const/TransEnable have no effect then. */
#define GFXREG_EXTSRC_CONTROL_PREMULCONSTRGB_FSHIFT 11U
#define GFXREG_EXTSRC_CONTROL_PREMULCONSTRGB_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_PREMULCONSTRGB(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_EXTSRC_CONTROL_SET_PREMULCONSTRGB(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_PREMULCONSTRGB(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_PREMULCONSTRGB(s,val) ( (s)->control = ((s)->control & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_EXTSRC_SET_PREMULCONSTRGB(s,val)  ( (s)->control = (((s)->control & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_PREMULCONSTRGB(s) ((((s)->control) >> 11U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_PREMULCONSTRGB_RESET 0x0U

/* ALPHASRCENABLE: Value 1 enables source alpha for computing the output alpha. When disabled source alpha is set to 1. */
#define GFXREG_EXTSRC_CONTROL_ALPHASRCENABLE_FSHIFT 12U
#define GFXREG_EXTSRC_CONTROL_ALPHASRCENABLE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_ALPHASRCENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_EXTSRC_CONTROL_SET_ALPHASRCENABLE(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_ALPHASRCENABLE(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_ALPHASRCENABLE(s,val) ( (s)->control = ((s)->control & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_EXTSRC_SET_ALPHASRCENABLE(s,val)  ( (s)->control = (((s)->control & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_ALPHASRCENABLE(s) ((((s)->control) >> 12U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_ALPHASRCENABLE_RESET 1U

/* ALPHACONSTENABLE: Value 1 enables constant alpha for computing the output alpha. When disabled constant alpha is set to 1. */
#define GFXREG_EXTSRC_CONTROL_ALPHACONSTENABLE_FSHIFT 13U
#define GFXREG_EXTSRC_CONTROL_ALPHACONSTENABLE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_ALPHACONSTENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 13U)
#define GFXREG_EXTSRC_CONTROL_SET_ALPHACONSTENABLE(val) (((CYGFX_U32)(val) << 13U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_ALPHACONSTENABLE(val) (((CYGFX_U32)(val) >> 13U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_ALPHACONSTENABLE(s,val) ( (s)->control = ((s)->control & ~0x2000UL) | (((CYGFX_U32)(val) << 13U) & 0x2000UL) )
#define GFXREG_EXTSRC_SET_ALPHACONSTENABLE(s,val)  ( (s)->control = (((s)->control & ~0x2000UL) | ((CYGFX_U32)(val) << 13U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_ALPHACONSTENABLE(s) ((((s)->control) >> 13U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_ALPHACONSTENABLE_RESET 0U

/* ALPHATRANSENABLE: Value 1 enables transparent alpha for computing the output alpha. When disabled transparent alpha is set to 1. */
#define GFXREG_EXTSRC_CONTROL_ALPHATRANSENABLE_FSHIFT 14U
#define GFXREG_EXTSRC_CONTROL_ALPHATRANSENABLE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_ALPHATRANSENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_EXTSRC_CONTROL_SET_ALPHATRANSENABLE(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_ALPHATRANSENABLE(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_ALPHATRANSENABLE(s,val) ( (s)->control = ((s)->control & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_EXTSRC_SET_ALPHATRANSENABLE(s,val)  ( (s)->control = (((s)->control & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_ALPHATRANSENABLE(s) ((((s)->control) >> 14U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_ALPHATRANSENABLE_RESET 0U

/* GAMMAREMOVEENABLE: Value 1 enables the stage to remove a gamma from RGB components. */
#define GFXREG_EXTSRC_CONTROL_GAMMAREMOVEENABLE_FSHIFT 16U
#define GFXREG_EXTSRC_CONTROL_GAMMAREMOVEENABLE_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROL_SETM_GAMMAREMOVEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_EXTSRC_CONTROL_SET_GAMMAREMOVEENABLE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_CONTROL_GET_GAMMAREMOVEENABLE(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_EXTSRC_SETM_GAMMAREMOVEENABLE(s,val) ( (s)->control = ((s)->control & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_EXTSRC_SET_GAMMAREMOVEENABLE(s,val)  ( (s)->control = (((s)->control & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_GET_GAMMAREMOVEENABLE(s) ((((s)->control) >> 16U) & 0x1UL)
#define GFXREG_EXTSRC_CONTROL_GAMMAREMOVEENABLE_RESET 0U

/* CONTROLTRIGGER: ExtSrc unit trigger token generation */
#define GFXREG_EXTSRC_CONTROLTRIGGER 0x0000001cU
/* SHDTOKGEN: Write a 1 to this field for the extsrc unit to perform a shadow load with the next start of operation and set the rld bit in the start of frame control word (generate shadow load token for subsequent units). */
#define GFXREG_EXTSRC_CONTROLTRIGGER_SHDTOKGEN_FSHIFT 0U
#define GFXREG_EXTSRC_CONTROLTRIGGER_SHDTOKGEN_FMASK 0x1U
#define GFXREG_EXTSRC_CONTROLTRIGGER_SETM_SHDTOKGEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_EXTSRC_CONTROLTRIGGER_SET_SHDTOKGEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_SETM_SHDTOKGEN(s,val) ( (s)->controltrigger = ((s)->controltrigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_EXTSRC_SET_SHDTOKGEN(s,val)  ( (s)->controltrigger = (((s)->controltrigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_CONTROLTRIGGER_SHDTOKGEN_RESET (none)U

/* START: ExtSrc unit start register */
#define GFXREG_EXTSRC_START 0x00000020U
/* START: Writing a one starts processing, use this only for debug purposes. */
#define GFXREG_EXTSRC_START_START_FSHIFT 0U
#define GFXREG_EXTSRC_START_START_FMASK 0x1U
#define GFXREG_EXTSRC_START_SETM_START(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_EXTSRC_START_SET_START(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTSRC_SETM_START(s,val) ( (s)->start = ((s)->start & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_EXTSRC_SET_START(s,val)  ( (s)->start = (((s)->start & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTSRC_START_START_RESET 0U

/* LASTCOMMANDWORD: Subset of last input command word with the following mapping - val[31-0]={data[37-22], data[19-12], data[9-2]} */
#define GFXREG_EXTSRC_LASTCOMMANDWORD 0x00000024U
/* FRAMEWIDTH: Frame width minus one */
#define GFXREG_EXTSRC_LASTCOMMANDWORD_FRAMEWIDTH_FSHIFT 0U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_FRAMEWIDTH_FMASK 0x3fffU
#define GFXREG_EXTSRC_LASTCOMMANDWORD_GET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_EXTSRC_GET_FRAMEWIDTH(s) ((((s)->lastcommandword) ) & 0x3fffUL)
#define GFXREG_EXTSRC_LASTCOMMANDWORD_FRAMEWIDTH_RESET 0U

/* FLD: Frame field polarity bit */
#define GFXREG_EXTSRC_LASTCOMMANDWORD_FLD_FSHIFT 14U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_FLD_FMASK 0x1U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_GET_FLD(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_EXTSRC_GET_FLD(s) ((((s)->lastcommandword) >> 14U) & 0x1UL)
#define GFXREG_EXTSRC_LASTCOMMANDWORD_FLD_RESET 0U

/* RLD: Shadow register reload enable bit */
#define GFXREG_EXTSRC_LASTCOMMANDWORD_RLD_FSHIFT 15U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_RLD_FMASK 0x1U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_GET_RLD(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_EXTSRC_GET_RLD(s) ((((s)->lastcommandword) >> 15U) & 0x1UL)
#define GFXREG_EXTSRC_LASTCOMMANDWORD_RLD_RESET 0U

/* FRAMEHEIGHT: Frame height minus one */
#define GFXREG_EXTSRC_LASTCOMMANDWORD_FRAMEHEIGHT_FSHIFT 16U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_FRAMEHEIGHT_FMASK 0x3fffU
#define GFXREG_EXTSRC_LASTCOMMANDWORD_GET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_EXTSRC_GET_FRAMEHEIGHT(s) ((((s)->lastcommandword) >> 16U) & 0x3fffUL)
#define GFXREG_EXTSRC_LASTCOMMANDWORD_FRAMEHEIGHT_RESET 0U

/* EX: Bit 36, command extension bit of the command word */
#define GFXREG_EXTSRC_LASTCOMMANDWORD_EX_FSHIFT 30U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_EX_FMASK 0x1U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_GET_EX(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_EXTSRC_GET_EX(s) ((((s)->lastcommandword) >> 30U) & 0x1UL)
#define GFXREG_EXTSRC_LASTCOMMANDWORD_EX_RESET 0U

/* NF: No frame, set for a frame without pixel data */
#define GFXREG_EXTSRC_LASTCOMMANDWORD_NF_FSHIFT 31U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_NF_FMASK 0x1U
#define GFXREG_EXTSRC_LASTCOMMANDWORD_GET_NF(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_EXTSRC_GET_NF(s) ((((s)->lastcommandword) >> 31U) & 0x1UL)
#define GFXREG_EXTSRC_LASTCOMMANDWORD_NF_RESET 0U

/* STATUS: Shows status information */
#define GFXREG_EXTSRC_STATUS 0x00000028U
/* INPUTVALID: Valid input data ready to be read (e.g. FIFO has valid data) */
#define GFXREG_EXTSRC_STATUS_INPUTVALID_FSHIFT 0U
#define GFXREG_EXTSRC_STATUS_INPUTVALID_FMASK 0x1U
#define GFXREG_EXTSRC_STATUS_GET_INPUTVALID(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_EXTSRC_GET_INPUTVALID(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_EXTSRC_STATUS_INPUTVALID_NOTVALID 0x0U /* No valid data at the input interface (e.g. FIFO is empty). */
#define GFXREG_EXTSRC_STATUS_INPUTVALID_VALID 0x1U /* Valid data at the input interface (e.g. FIFO has valid data). */
#define GFXREG_EXTSRC_STATUS_INPUTVALID_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_EXTSRC_REGISTER_H */

