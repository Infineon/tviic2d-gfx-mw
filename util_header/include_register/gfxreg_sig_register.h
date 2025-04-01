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
 * \version     2.00
 * \date        Thu Sep 24 07:57:03 2020
 * \file        gfxreg_sig_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   sig
 *              Source:   sig.component.xml
 *              Template: component_h.tpl
 * \brief      Iris sig register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_SIG_REGISTER_H
#define GFXREG_SIG_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* sig registers */
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


/* STATICCONTROL: Global configuration shared by all evaluation windows. */
#define GFXREG_SIG_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadow registers for RWS type fields (0 = write through, 1 = shadowed). */
#define GFXREG_SIG_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_SIG_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_SIG_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_SIG_STATICCONTROL_SHDEN_RESET 0U

/* SHDLDSEL: Source select for events that will load shadow registers into the active configuration. */
#define GFXREG_SIG_STATICCONTROL_SHDLDSEL_FSHIFT 4U
#define GFXREG_SIG_STATICCONTROL_SHDLDSEL_FMASK 0x1U
#define GFXREG_SIG_STATICCONTROL_SETM_SHDLDSEL(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_SIG_STATICCONTROL_SET_SHDLDSEL(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_STATICCONTROL_GET_SHDLDSEL(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_SIG_SETM_SHDLDSEL(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_SIG_SET_SHDLDSEL(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SHDLDSEL(s) ((((s)->staticcontrol) >> 4U) & 0x1UL)
#define GFXREG_SIG_STATICCONTROL_SHDLDSEL_LOCAL 0x0U /* Shadows are loaded at start of frame for each evaluation window for which ShdLdReq has been set. */
#define GFXREG_SIG_STATICCONTROL_SHDLDSEL_GLOBAL 0x1U /* Shadows of all evaluation windows are loaded synchronous to the display stream (shadow load token received on frame input port). */
#define GFXREG_SIG_STATICCONTROL_SHDLDSEL_RESET 0U

/* ERRTHRES: Number of frames with signature violation before StsSigError is set for an evaluation window. */
#define GFXREG_SIG_STATICCONTROL_ERRTHRES_FSHIFT 16U
#define GFXREG_SIG_STATICCONTROL_ERRTHRES_FMASK 0xffU
#define GFXREG_SIG_STATICCONTROL_SETM_ERRTHRES(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_SIG_STATICCONTROL_SET_ERRTHRES(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_SIG_STATICCONTROL_GET_ERRTHRES(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_SIG_SETM_ERRTHRES(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_SIG_SET_ERRTHRES(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ERRTHRES(s) ((((s)->staticcontrol) >> 16U) & 0xffUL)
#define GFXREG_SIG_STATICCONTROL_ERRTHRES_RESET 0U

/* ERRTHRESRESET: ErrThresReset must be programmed to value less than 255. */
#define GFXREG_SIG_STATICCONTROL_ERRTHRESRESET_FSHIFT 24U
#define GFXREG_SIG_STATICCONTROL_ERRTHRESRESET_FMASK 0xffU
#define GFXREG_SIG_STATICCONTROL_SETM_ERRTHRESRESET(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_SIG_STATICCONTROL_SET_ERRTHRESRESET(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_SIG_STATICCONTROL_GET_ERRTHRESRESET(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_SIG_SETM_ERRTHRESRESET(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_SIG_SET_ERRTHRESRESET(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ERRTHRESRESET(s) ((((s)->staticcontrol) >> 24U) & 0xffUL)
#define GFXREG_SIG_STATICCONTROL_ERRTHRESRESET_RESET 8U

/* PANICCOLOR: Overlay color for evaluation windows in panic mode.
   This constant color replaces the color of pixels that lie inside of an evaluation window for which local panic is enabled and the error status active. */
#define GFXREG_SIG_PANICCOLOR 0x00000004U
/* PANICALPHA: Alpha mask bit. */
#define GFXREG_SIG_PANICCOLOR_PANICALPHA_FSHIFT 7U
#define GFXREG_SIG_PANICCOLOR_PANICALPHA_FMASK 0x1U
#define GFXREG_SIG_PANICCOLOR_SETM_PANICALPHA(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_SIG_PANICCOLOR_SET_PANICALPHA(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_PANICCOLOR_GET_PANICALPHA(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_SIG_SETM_PANICALPHA(s,val) ( (s)->paniccolor = ((s)->paniccolor & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_SIG_SET_PANICALPHA(s,val)  ( (s)->paniccolor = (((s)->paniccolor & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_PANICALPHA(s) ((((s)->paniccolor) >> 7U) & 0x1UL)
#define GFXREG_SIG_PANICCOLOR_PANICALPHA_RESET 0x0U

/* PANICBLUE: Blue color component. */
#define GFXREG_SIG_PANICCOLOR_PANICBLUE_FSHIFT 8U
#define GFXREG_SIG_PANICCOLOR_PANICBLUE_FMASK 0xffU
#define GFXREG_SIG_PANICCOLOR_SETM_PANICBLUE(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_SIG_PANICCOLOR_SET_PANICBLUE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_SIG_PANICCOLOR_GET_PANICBLUE(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_SIG_SETM_PANICBLUE(s,val) ( (s)->paniccolor = ((s)->paniccolor & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_SIG_SET_PANICBLUE(s,val)  ( (s)->paniccolor = (((s)->paniccolor & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_PANICBLUE(s) ((((s)->paniccolor) >> 8U) & 0xffUL)
#define GFXREG_SIG_PANICCOLOR_PANICBLUE_RESET 0x0U

/* PANICGREEN: Green color component. */
#define GFXREG_SIG_PANICCOLOR_PANICGREEN_FSHIFT 16U
#define GFXREG_SIG_PANICCOLOR_PANICGREEN_FMASK 0xffU
#define GFXREG_SIG_PANICCOLOR_SETM_PANICGREEN(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_SIG_PANICCOLOR_SET_PANICGREEN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_SIG_PANICCOLOR_GET_PANICGREEN(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_SIG_SETM_PANICGREEN(s,val) ( (s)->paniccolor = ((s)->paniccolor & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_SIG_SET_PANICGREEN(s,val)  ( (s)->paniccolor = (((s)->paniccolor & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_PANICGREEN(s) ((((s)->paniccolor) >> 16U) & 0xffUL)
#define GFXREG_SIG_PANICCOLOR_PANICGREEN_RESET 0x0U

/* PANICRED: Red color component. */
#define GFXREG_SIG_PANICCOLOR_PANICRED_FSHIFT 24U
#define GFXREG_SIG_PANICCOLOR_PANICRED_FMASK 0xffU
#define GFXREG_SIG_PANICCOLOR_SETM_PANICRED(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_SIG_PANICCOLOR_SET_PANICRED(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_SIG_PANICCOLOR_GET_PANICRED(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_SIG_SETM_PANICRED(s,val) ( (s)->paniccolor = ((s)->paniccolor & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_SIG_SET_PANICRED(s,val)  ( (s)->paniccolor = (((s)->paniccolor & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_PANICRED(s) ((((s)->paniccolor) >> 24U) & 0xffUL)
#define GFXREG_SIG_PANICCOLOR_PANICRED_RESET 0x0U

/* EVALCONTROL0: Control settings for evaluation window 0.
   In case of overlapping evaluation windows, a pixel contributes to the window with highest index (0 = bottom most, 7 = top most). */
#define GFXREG_SIG_EVALCONTROL0 0x00000008U
/* ENEVALWIN0: When enabled (value 1) a CRC signature is computed for all pixels inside this evaluation window (SigCRC). */
#define GFXREG_SIG_EVALCONTROL0_ENEVALWIN0_FSHIFT 0U
#define GFXREG_SIG_EVALCONTROL0_ENEVALWIN0_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL0_SETM_ENEVALWIN0(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_EVALCONTROL0_SET_ENEVALWIN0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL0_GET_ENEVALWIN0(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_ENEVALWIN0(s,val) ( (s)->evalcontrol0 = ((s)->evalcontrol0 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_ENEVALWIN0(s,val)  ( (s)->evalcontrol0 = (((s)->evalcontrol0 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENEVALWIN0(s) ((((s)->evalcontrol0) ) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL0_ENEVALWIN0_RESET 0U

/* ENCRC0: When enabled (value 1) the measured signature is checked against a reference value (SigCRCRef). */
#define GFXREG_SIG_EVALCONTROL0_ENCRC0_FSHIFT 1U
#define GFXREG_SIG_EVALCONTROL0_ENCRC0_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL0_SETM_ENCRC0(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_SIG_EVALCONTROL0_SET_ENCRC0(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL0_GET_ENCRC0(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_SIG_SETM_ENCRC0(s,val) ( (s)->evalcontrol0 = ((s)->evalcontrol0 & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_SIG_SET_ENCRC0(s,val)  ( (s)->evalcontrol0 = (((s)->evalcontrol0 & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENCRC0(s) ((((s)->evalcontrol0) >> 1U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL0_ENCRC0_RESET 0U

/* ALPHAMASK0: When enabled (value 1) pixels with alpha bit = 0 are ignored for signature computation. */
#define GFXREG_SIG_EVALCONTROL0_ALPHAMASK0_FSHIFT 8U
#define GFXREG_SIG_EVALCONTROL0_ALPHAMASK0_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL0_SETM_ALPHAMASK0(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_SIG_EVALCONTROL0_SET_ALPHAMASK0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL0_GET_ALPHAMASK0(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAMASK0(s,val) ( (s)->evalcontrol0 = ((s)->evalcontrol0 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_SIG_SET_ALPHAMASK0(s,val)  ( (s)->evalcontrol0 = (((s)->evalcontrol0 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAMASK0(s) ((((s)->evalcontrol0) >> 8U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL0_ALPHAMASK0_RESET 0U

/* ALPHAINV0: When enabled (value 1) the effect of AlphaMask is inverted (pixels with alpha bit = 1 are ignored then). */
#define GFXREG_SIG_EVALCONTROL0_ALPHAINV0_FSHIFT 9U
#define GFXREG_SIG_EVALCONTROL0_ALPHAINV0_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL0_SETM_ALPHAINV0(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_SIG_EVALCONTROL0_SET_ALPHAINV0(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL0_GET_ALPHAINV0(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAINV0(s,val) ( (s)->evalcontrol0 = ((s)->evalcontrol0 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_SIG_SET_ALPHAINV0(s,val)  ( (s)->evalcontrol0 = (((s)->evalcontrol0 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAINV0(s) ((((s)->evalcontrol0) >> 9U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL0_ALPHAINV0_RESET 0U

/* ENLOCALPANIC0: When enabled (value 1) the error status this window (StsSigError) will replace all pixels inside the window by a constant color on the display. Skip regions due to other evaluation windows on top are not modified. AlphaMask, when enabled, is not considered for this replacement. */
#define GFXREG_SIG_EVALCONTROL0_ENLOCALPANIC0_FSHIFT 16U
#define GFXREG_SIG_EVALCONTROL0_ENLOCALPANIC0_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL0_SETM_ENLOCALPANIC0(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_SIG_EVALCONTROL0_SET_ENLOCALPANIC0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL0_GET_ENLOCALPANIC0(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_SIG_SETM_ENLOCALPANIC0(s,val) ( (s)->evalcontrol0 = ((s)->evalcontrol0 & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_SIG_SET_ENLOCALPANIC0(s,val)  ( (s)->evalcontrol0 = (((s)->evalcontrol0 & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENLOCALPANIC0(s) ((((s)->evalcontrol0) >> 16U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL0_ENLOCALPANIC0_RESET 0U

/* ENGLOBALPANIC0: When enabled (value 1) the error status of this window (StsSigError) will activate the panic mode of the display stream's Frame Generator, which can switch to another display mode in response. */
#define GFXREG_SIG_EVALCONTROL0_ENGLOBALPANIC0_FSHIFT 17U
#define GFXREG_SIG_EVALCONTROL0_ENGLOBALPANIC0_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL0_SETM_ENGLOBALPANIC0(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_SIG_EVALCONTROL0_SET_ENGLOBALPANIC0(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL0_GET_ENGLOBALPANIC0(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_SIG_SETM_ENGLOBALPANIC0(s,val) ( (s)->evalcontrol0 = ((s)->evalcontrol0 & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_SIG_SET_ENGLOBALPANIC0(s,val)  ( (s)->evalcontrol0 = (((s)->evalcontrol0 & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENGLOBALPANIC0(s) ((((s)->evalcontrol0) >> 17U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL0_ENGLOBALPANIC0_RESET 0U

/* EVALUPPERLEFT0: Upper left corner of evaluation window 0.
   Coordinates are relative to active display area (origin at top-left corner). */
#define GFXREG_SIG_EVALUPPERLEFT0 0x0000000cU
/* XEVALUPPERLEFT0: X coordinate. */
#define GFXREG_SIG_EVALUPPERLEFT0_XEVALUPPERLEFT0_FSHIFT 0U
#define GFXREG_SIG_EVALUPPERLEFT0_XEVALUPPERLEFT0_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT0_SETM_XEVALUPPERLEFT0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALUPPERLEFT0_SET_XEVALUPPERLEFT0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT0_GET_XEVALUPPERLEFT0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALUPPERLEFT0(s,val) ( (s)->evalupperleft0 = ((s)->evalupperleft0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALUPPERLEFT0(s,val)  ( (s)->evalupperleft0 = (((s)->evalupperleft0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALUPPERLEFT0(s) ((((s)->evalupperleft0) ) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT0_XEVALUPPERLEFT0_RESET 0U

/* YEVALUPPERLEFT0: Y coordinate. */
#define GFXREG_SIG_EVALUPPERLEFT0_YEVALUPPERLEFT0_FSHIFT 16U
#define GFXREG_SIG_EVALUPPERLEFT0_YEVALUPPERLEFT0_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT0_SETM_YEVALUPPERLEFT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALUPPERLEFT0_SET_YEVALUPPERLEFT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT0_GET_YEVALUPPERLEFT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALUPPERLEFT0(s,val) ( (s)->evalupperleft0 = ((s)->evalupperleft0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALUPPERLEFT0(s,val)  ( (s)->evalupperleft0 = (((s)->evalupperleft0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALUPPERLEFT0(s) ((((s)->evalupperleft0) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT0_YEVALUPPERLEFT0_RESET 0U

/* EVALLOWERRIGHT0: Lower right corner of evaluation window 0.
   Coordinates are relative to active display area (origin at top-left corner). */
#define GFXREG_SIG_EVALLOWERRIGHT0 0x00000010U
/* XEVALLOWERRIGHT0: X coordinate. */
#define GFXREG_SIG_EVALLOWERRIGHT0_XEVALLOWERRIGHT0_FSHIFT 0U
#define GFXREG_SIG_EVALLOWERRIGHT0_XEVALLOWERRIGHT0_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT0_SETM_XEVALLOWERRIGHT0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALLOWERRIGHT0_SET_XEVALLOWERRIGHT0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT0_GET_XEVALLOWERRIGHT0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALLOWERRIGHT0(s,val) ( (s)->evallowerright0 = ((s)->evallowerright0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALLOWERRIGHT0(s,val)  ( (s)->evallowerright0 = (((s)->evallowerright0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALLOWERRIGHT0(s) ((((s)->evallowerright0) ) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT0_XEVALLOWERRIGHT0_RESET 0U

/* YEVALLOWERRIGHT0: Y coordinate. */
#define GFXREG_SIG_EVALLOWERRIGHT0_YEVALLOWERRIGHT0_FSHIFT 16U
#define GFXREG_SIG_EVALLOWERRIGHT0_YEVALLOWERRIGHT0_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT0_SETM_YEVALLOWERRIGHT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALLOWERRIGHT0_SET_YEVALLOWERRIGHT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT0_GET_YEVALLOWERRIGHT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALLOWERRIGHT0(s,val) ( (s)->evallowerright0 = ((s)->evallowerright0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALLOWERRIGHT0(s,val)  ( (s)->evallowerright0 = (((s)->evallowerright0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALLOWERRIGHT0(s) ((((s)->evallowerright0) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT0_YEVALLOWERRIGHT0_RESET 0U

/* SIGCRCREDREF0: Reference signature of red channel for evaluation window 0. */
#define GFXREG_SIG_SIGCRCREDREF0 0x00000014U
/* SIGCRCREDREF0: Reference value that is compared against measured SigCRCRed value. */
#define GFXREG_SIG_SIGCRCREDREF0_SIGCRCREDREF0_FSHIFT 0U
#define GFXREG_SIG_SIGCRCREDREF0_SIGCRCREDREF0_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCREDREF0_SETM_SIGCRCREDREF0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCREDREF0_SET_SIGCRCREDREF0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCREDREF0_GET_SIGCRCREDREF0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCREDREF0(s,val) ( (s)->sigcrcredref0 = ((s)->sigcrcredref0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCREDREF0(s,val)  ( (s)->sigcrcredref0 = (((s)->sigcrcredref0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCREDREF0(s) ((((s)->sigcrcredref0) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCREDREF0_SIGCRCREDREF0_RESET 4294967295U

/* SIGCRCGREENREF0: Reference signature of green channel for evaluation window 0. */
#define GFXREG_SIG_SIGCRCGREENREF0 0x00000018U
/* SIGCRCGREENREF0: Reference value that is compared against measured SigCRCGreen value. */
#define GFXREG_SIG_SIGCRCGREENREF0_SIGCRCGREENREF0_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREENREF0_SIGCRCGREENREF0_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREENREF0_SETM_SIGCRCGREENREF0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCGREENREF0_SET_SIGCRCGREENREF0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCGREENREF0_GET_SIGCRCGREENREF0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCGREENREF0(s,val) ( (s)->sigcrcgreenref0 = ((s)->sigcrcgreenref0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCGREENREF0(s,val)  ( (s)->sigcrcgreenref0 = (((s)->sigcrcgreenref0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCGREENREF0(s) ((((s)->sigcrcgreenref0) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREENREF0_SIGCRCGREENREF0_RESET 4294967295U

/* SIGCRCBLUEREF0: Reference signature of blue channel for evaluation window 0. */
#define GFXREG_SIG_SIGCRCBLUEREF0 0x0000001cU
/* SIGCRCBLUEREF0: Reference value that is compared against measured SigCRCBlue value. */
#define GFXREG_SIG_SIGCRCBLUEREF0_SIGCRCBLUEREF0_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUEREF0_SIGCRCBLUEREF0_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUEREF0_SETM_SIGCRCBLUEREF0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCBLUEREF0_SET_SIGCRCBLUEREF0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCBLUEREF0_GET_SIGCRCBLUEREF0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCBLUEREF0(s,val) ( (s)->sigcrcblueref0 = ((s)->sigcrcblueref0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCBLUEREF0(s,val)  ( (s)->sigcrcblueref0 = (((s)->sigcrcblueref0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCBLUEREF0(s) ((((s)->sigcrcblueref0) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUEREF0_SIGCRCBLUEREF0_RESET 4294967295U

/* SIGCRCRED0: Measured signature of red channel for evaluation window 0. */
#define GFXREG_SIG_SIGCRCRED0 0x00000020U
/* SIGCRCRED0: CRC values from red channel. */
#define GFXREG_SIG_SIGCRCRED0_SIGCRCRED0_FSHIFT 0U
#define GFXREG_SIG_SIGCRCRED0_SIGCRCRED0_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCRED0_GET_SIGCRCRED0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCRED0(s) ((((s)->sigcrcred0) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCRED0_SIGCRCRED0_RESET 4294967295U

/* SIGCRCGREEN0: Measured signature of green channel for evaluation window 0. */
#define GFXREG_SIG_SIGCRCGREEN0 0x00000024U
/* SIGCRCGREEN0: CRC values from green channel. */
#define GFXREG_SIG_SIGCRCGREEN0_SIGCRCGREEN0_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREEN0_SIGCRCGREEN0_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREEN0_GET_SIGCRCGREEN0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCGREEN0(s) ((((s)->sigcrcgreen0) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREEN0_SIGCRCGREEN0_RESET 4294967295U

/* SIGCRCBLUE0: Measured signature of blue channel for evaluation window 0. */
#define GFXREG_SIG_SIGCRCBLUE0 0x00000028U
/* SIGCRCBLUE0: CRC values from blue channel. */
#define GFXREG_SIG_SIGCRCBLUE0_SIGCRCBLUE0_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUE0_SIGCRCBLUE0_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUE0_GET_SIGCRCBLUE0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCBLUE0(s) ((((s)->sigcrcblue0) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUE0_SIGCRCBLUE0_RESET 4294967295U

/* EVALCONTROL1: Control settings for evaluation window 1. */
#define GFXREG_SIG_EVALCONTROL1 0x0000002cU
/* ENEVALWIN1: See EnEvalWin0. */
#define GFXREG_SIG_EVALCONTROL1_ENEVALWIN1_FSHIFT 0U
#define GFXREG_SIG_EVALCONTROL1_ENEVALWIN1_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL1_SETM_ENEVALWIN1(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_EVALCONTROL1_SET_ENEVALWIN1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL1_GET_ENEVALWIN1(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_ENEVALWIN1(s,val) ( (s)->evalcontrol1 = ((s)->evalcontrol1 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_ENEVALWIN1(s,val)  ( (s)->evalcontrol1 = (((s)->evalcontrol1 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENEVALWIN1(s) ((((s)->evalcontrol1) ) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL1_ENEVALWIN1_RESET 0U

/* ENCRC1: See EnCRC0. */
#define GFXREG_SIG_EVALCONTROL1_ENCRC1_FSHIFT 1U
#define GFXREG_SIG_EVALCONTROL1_ENCRC1_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL1_SETM_ENCRC1(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_SIG_EVALCONTROL1_SET_ENCRC1(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL1_GET_ENCRC1(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_SIG_SETM_ENCRC1(s,val) ( (s)->evalcontrol1 = ((s)->evalcontrol1 & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_SIG_SET_ENCRC1(s,val)  ( (s)->evalcontrol1 = (((s)->evalcontrol1 & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENCRC1(s) ((((s)->evalcontrol1) >> 1U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL1_ENCRC1_RESET 0U

/* ALPHAMASK1: See AlphaMask0. */
#define GFXREG_SIG_EVALCONTROL1_ALPHAMASK1_FSHIFT 8U
#define GFXREG_SIG_EVALCONTROL1_ALPHAMASK1_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL1_SETM_ALPHAMASK1(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_SIG_EVALCONTROL1_SET_ALPHAMASK1(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL1_GET_ALPHAMASK1(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAMASK1(s,val) ( (s)->evalcontrol1 = ((s)->evalcontrol1 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_SIG_SET_ALPHAMASK1(s,val)  ( (s)->evalcontrol1 = (((s)->evalcontrol1 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAMASK1(s) ((((s)->evalcontrol1) >> 8U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL1_ALPHAMASK1_RESET 0U

/* ALPHAINV1: See AlphaInv0. */
#define GFXREG_SIG_EVALCONTROL1_ALPHAINV1_FSHIFT 9U
#define GFXREG_SIG_EVALCONTROL1_ALPHAINV1_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL1_SETM_ALPHAINV1(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_SIG_EVALCONTROL1_SET_ALPHAINV1(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL1_GET_ALPHAINV1(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAINV1(s,val) ( (s)->evalcontrol1 = ((s)->evalcontrol1 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_SIG_SET_ALPHAINV1(s,val)  ( (s)->evalcontrol1 = (((s)->evalcontrol1 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAINV1(s) ((((s)->evalcontrol1) >> 9U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL1_ALPHAINV1_RESET 0U

/* ENLOCALPANIC1: See EnLocalPanic0. */
#define GFXREG_SIG_EVALCONTROL1_ENLOCALPANIC1_FSHIFT 16U
#define GFXREG_SIG_EVALCONTROL1_ENLOCALPANIC1_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL1_SETM_ENLOCALPANIC1(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_SIG_EVALCONTROL1_SET_ENLOCALPANIC1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL1_GET_ENLOCALPANIC1(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_SIG_SETM_ENLOCALPANIC1(s,val) ( (s)->evalcontrol1 = ((s)->evalcontrol1 & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_SIG_SET_ENLOCALPANIC1(s,val)  ( (s)->evalcontrol1 = (((s)->evalcontrol1 & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENLOCALPANIC1(s) ((((s)->evalcontrol1) >> 16U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL1_ENLOCALPANIC1_RESET 0U

/* ENGLOBALPANIC1: See EnGlobalPanic0. */
#define GFXREG_SIG_EVALCONTROL1_ENGLOBALPANIC1_FSHIFT 17U
#define GFXREG_SIG_EVALCONTROL1_ENGLOBALPANIC1_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL1_SETM_ENGLOBALPANIC1(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_SIG_EVALCONTROL1_SET_ENGLOBALPANIC1(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL1_GET_ENGLOBALPANIC1(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_SIG_SETM_ENGLOBALPANIC1(s,val) ( (s)->evalcontrol1 = ((s)->evalcontrol1 & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_SIG_SET_ENGLOBALPANIC1(s,val)  ( (s)->evalcontrol1 = (((s)->evalcontrol1 & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENGLOBALPANIC1(s) ((((s)->evalcontrol1) >> 17U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL1_ENGLOBALPANIC1_RESET 0U

/* EVALUPPERLEFT1: Upper left corner of evaluation window 1. */
#define GFXREG_SIG_EVALUPPERLEFT1 0x00000030U
/* XEVALUPPERLEFT1: See XEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT1_XEVALUPPERLEFT1_FSHIFT 0U
#define GFXREG_SIG_EVALUPPERLEFT1_XEVALUPPERLEFT1_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT1_SETM_XEVALUPPERLEFT1(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALUPPERLEFT1_SET_XEVALUPPERLEFT1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT1_GET_XEVALUPPERLEFT1(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALUPPERLEFT1(s,val) ( (s)->evalupperleft1 = ((s)->evalupperleft1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALUPPERLEFT1(s,val)  ( (s)->evalupperleft1 = (((s)->evalupperleft1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALUPPERLEFT1(s) ((((s)->evalupperleft1) ) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT1_XEVALUPPERLEFT1_RESET 0U

/* YEVALUPPERLEFT1: See YEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT1_YEVALUPPERLEFT1_FSHIFT 16U
#define GFXREG_SIG_EVALUPPERLEFT1_YEVALUPPERLEFT1_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT1_SETM_YEVALUPPERLEFT1(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALUPPERLEFT1_SET_YEVALUPPERLEFT1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT1_GET_YEVALUPPERLEFT1(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALUPPERLEFT1(s,val) ( (s)->evalupperleft1 = ((s)->evalupperleft1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALUPPERLEFT1(s,val)  ( (s)->evalupperleft1 = (((s)->evalupperleft1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALUPPERLEFT1(s) ((((s)->evalupperleft1) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT1_YEVALUPPERLEFT1_RESET 0U

/* EVALLOWERRIGHT1: Lower right corner of evaluation window 1. */
#define GFXREG_SIG_EVALLOWERRIGHT1 0x00000034U
/* XEVALLOWERRIGHT1: See XEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT1_XEVALLOWERRIGHT1_FSHIFT 0U
#define GFXREG_SIG_EVALLOWERRIGHT1_XEVALLOWERRIGHT1_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT1_SETM_XEVALLOWERRIGHT1(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALLOWERRIGHT1_SET_XEVALLOWERRIGHT1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT1_GET_XEVALLOWERRIGHT1(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALLOWERRIGHT1(s,val) ( (s)->evallowerright1 = ((s)->evallowerright1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALLOWERRIGHT1(s,val)  ( (s)->evallowerright1 = (((s)->evallowerright1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALLOWERRIGHT1(s) ((((s)->evallowerright1) ) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT1_XEVALLOWERRIGHT1_RESET 0U

/* YEVALLOWERRIGHT1: See YEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT1_YEVALLOWERRIGHT1_FSHIFT 16U
#define GFXREG_SIG_EVALLOWERRIGHT1_YEVALLOWERRIGHT1_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT1_SETM_YEVALLOWERRIGHT1(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALLOWERRIGHT1_SET_YEVALLOWERRIGHT1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT1_GET_YEVALLOWERRIGHT1(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALLOWERRIGHT1(s,val) ( (s)->evallowerright1 = ((s)->evallowerright1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALLOWERRIGHT1(s,val)  ( (s)->evallowerright1 = (((s)->evallowerright1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALLOWERRIGHT1(s) ((((s)->evallowerright1) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT1_YEVALLOWERRIGHT1_RESET 0U

/* SIGCRCREDREF1: Reference signature of red channel for evaluation window 1. */
#define GFXREG_SIG_SIGCRCREDREF1 0x00000038U
/* SIGCRCREDREF1: See SigCRCRedRef0. */
#define GFXREG_SIG_SIGCRCREDREF1_SIGCRCREDREF1_FSHIFT 0U
#define GFXREG_SIG_SIGCRCREDREF1_SIGCRCREDREF1_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCREDREF1_SETM_SIGCRCREDREF1(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCREDREF1_SET_SIGCRCREDREF1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCREDREF1_GET_SIGCRCREDREF1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCREDREF1(s,val) ( (s)->sigcrcredref1 = ((s)->sigcrcredref1 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCREDREF1(s,val)  ( (s)->sigcrcredref1 = (((s)->sigcrcredref1 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCREDREF1(s) ((((s)->sigcrcredref1) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCREDREF1_SIGCRCREDREF1_RESET 4294967295U

/* SIGCRCGREENREF1: Reference signature of green channel for evaluation window 1. */
#define GFXREG_SIG_SIGCRCGREENREF1 0x0000003cU
/* SIGCRCGREENREF1: See SigCRCGreenRef0. */
#define GFXREG_SIG_SIGCRCGREENREF1_SIGCRCGREENREF1_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREENREF1_SIGCRCGREENREF1_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREENREF1_SETM_SIGCRCGREENREF1(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCGREENREF1_SET_SIGCRCGREENREF1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCGREENREF1_GET_SIGCRCGREENREF1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCGREENREF1(s,val) ( (s)->sigcrcgreenref1 = ((s)->sigcrcgreenref1 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCGREENREF1(s,val)  ( (s)->sigcrcgreenref1 = (((s)->sigcrcgreenref1 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCGREENREF1(s) ((((s)->sigcrcgreenref1) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREENREF1_SIGCRCGREENREF1_RESET 4294967295U

/* SIGCRCBLUEREF1: Reference signature of blue channel for evaluation window 1. */
#define GFXREG_SIG_SIGCRCBLUEREF1 0x00000040U
/* SIGCRCBLUEREF1: See SigCRCBlueRef0. */
#define GFXREG_SIG_SIGCRCBLUEREF1_SIGCRCBLUEREF1_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUEREF1_SIGCRCBLUEREF1_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUEREF1_SETM_SIGCRCBLUEREF1(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCBLUEREF1_SET_SIGCRCBLUEREF1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCBLUEREF1_GET_SIGCRCBLUEREF1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCBLUEREF1(s,val) ( (s)->sigcrcblueref1 = ((s)->sigcrcblueref1 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCBLUEREF1(s,val)  ( (s)->sigcrcblueref1 = (((s)->sigcrcblueref1 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCBLUEREF1(s) ((((s)->sigcrcblueref1) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUEREF1_SIGCRCBLUEREF1_RESET 4294967295U

/* SIGCRCRED1: Measured signature of red channel for evaluation window 1. */
#define GFXREG_SIG_SIGCRCRED1 0x00000044U
/* SIGCRCRED1: See SigCRCRed0. */
#define GFXREG_SIG_SIGCRCRED1_SIGCRCRED1_FSHIFT 0U
#define GFXREG_SIG_SIGCRCRED1_SIGCRCRED1_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCRED1_GET_SIGCRCRED1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCRED1(s) ((((s)->sigcrcred1) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCRED1_SIGCRCRED1_RESET 4294967295U

/* SIGCRCGREEN1: Measured signature of green channel for evaluation window 1. */
#define GFXREG_SIG_SIGCRCGREEN1 0x00000048U
/* SIGCRCGREEN1: See SigCRCGreen0. */
#define GFXREG_SIG_SIGCRCGREEN1_SIGCRCGREEN1_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREEN1_SIGCRCGREEN1_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREEN1_GET_SIGCRCGREEN1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCGREEN1(s) ((((s)->sigcrcgreen1) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREEN1_SIGCRCGREEN1_RESET 4294967295U

/* SIGCRCBLUE1: Measured signature of blue channel for evaluation window 1. */
#define GFXREG_SIG_SIGCRCBLUE1 0x0000004cU
/* SIGCRCBLUE1: See SigCRCBlue0. */
#define GFXREG_SIG_SIGCRCBLUE1_SIGCRCBLUE1_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUE1_SIGCRCBLUE1_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUE1_GET_SIGCRCBLUE1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCBLUE1(s) ((((s)->sigcrcblue1) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUE1_SIGCRCBLUE1_RESET 4294967295U

/* EVALCONTROL2: Control settings for evaluation window 2. */
#define GFXREG_SIG_EVALCONTROL2 0x00000050U
/* ENEVALWIN2: See EnEvalWin0. */
#define GFXREG_SIG_EVALCONTROL2_ENEVALWIN2_FSHIFT 0U
#define GFXREG_SIG_EVALCONTROL2_ENEVALWIN2_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL2_SETM_ENEVALWIN2(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_EVALCONTROL2_SET_ENEVALWIN2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL2_GET_ENEVALWIN2(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_ENEVALWIN2(s,val) ( (s)->evalcontrol2 = ((s)->evalcontrol2 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_ENEVALWIN2(s,val)  ( (s)->evalcontrol2 = (((s)->evalcontrol2 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENEVALWIN2(s) ((((s)->evalcontrol2) ) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL2_ENEVALWIN2_RESET 0U

/* ENCRC2: See EnCRC0. */
#define GFXREG_SIG_EVALCONTROL2_ENCRC2_FSHIFT 1U
#define GFXREG_SIG_EVALCONTROL2_ENCRC2_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL2_SETM_ENCRC2(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_SIG_EVALCONTROL2_SET_ENCRC2(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL2_GET_ENCRC2(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_SIG_SETM_ENCRC2(s,val) ( (s)->evalcontrol2 = ((s)->evalcontrol2 & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_SIG_SET_ENCRC2(s,val)  ( (s)->evalcontrol2 = (((s)->evalcontrol2 & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENCRC2(s) ((((s)->evalcontrol2) >> 1U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL2_ENCRC2_RESET 0U

/* ALPHAMASK2: See AlphaMask0. */
#define GFXREG_SIG_EVALCONTROL2_ALPHAMASK2_FSHIFT 8U
#define GFXREG_SIG_EVALCONTROL2_ALPHAMASK2_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL2_SETM_ALPHAMASK2(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_SIG_EVALCONTROL2_SET_ALPHAMASK2(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL2_GET_ALPHAMASK2(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAMASK2(s,val) ( (s)->evalcontrol2 = ((s)->evalcontrol2 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_SIG_SET_ALPHAMASK2(s,val)  ( (s)->evalcontrol2 = (((s)->evalcontrol2 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAMASK2(s) ((((s)->evalcontrol2) >> 8U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL2_ALPHAMASK2_RESET 0U

/* ALPHAINV2: See AlphaInv0. */
#define GFXREG_SIG_EVALCONTROL2_ALPHAINV2_FSHIFT 9U
#define GFXREG_SIG_EVALCONTROL2_ALPHAINV2_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL2_SETM_ALPHAINV2(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_SIG_EVALCONTROL2_SET_ALPHAINV2(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL2_GET_ALPHAINV2(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAINV2(s,val) ( (s)->evalcontrol2 = ((s)->evalcontrol2 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_SIG_SET_ALPHAINV2(s,val)  ( (s)->evalcontrol2 = (((s)->evalcontrol2 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAINV2(s) ((((s)->evalcontrol2) >> 9U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL2_ALPHAINV2_RESET 0U

/* ENLOCALPANIC2: See EnLocalPanic0. */
#define GFXREG_SIG_EVALCONTROL2_ENLOCALPANIC2_FSHIFT 16U
#define GFXREG_SIG_EVALCONTROL2_ENLOCALPANIC2_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL2_SETM_ENLOCALPANIC2(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_SIG_EVALCONTROL2_SET_ENLOCALPANIC2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL2_GET_ENLOCALPANIC2(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_SIG_SETM_ENLOCALPANIC2(s,val) ( (s)->evalcontrol2 = ((s)->evalcontrol2 & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_SIG_SET_ENLOCALPANIC2(s,val)  ( (s)->evalcontrol2 = (((s)->evalcontrol2 & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENLOCALPANIC2(s) ((((s)->evalcontrol2) >> 16U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL2_ENLOCALPANIC2_RESET 0U

/* ENGLOBALPANIC2: See EnGlobalPanic0. */
#define GFXREG_SIG_EVALCONTROL2_ENGLOBALPANIC2_FSHIFT 17U
#define GFXREG_SIG_EVALCONTROL2_ENGLOBALPANIC2_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL2_SETM_ENGLOBALPANIC2(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_SIG_EVALCONTROL2_SET_ENGLOBALPANIC2(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL2_GET_ENGLOBALPANIC2(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_SIG_SETM_ENGLOBALPANIC2(s,val) ( (s)->evalcontrol2 = ((s)->evalcontrol2 & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_SIG_SET_ENGLOBALPANIC2(s,val)  ( (s)->evalcontrol2 = (((s)->evalcontrol2 & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENGLOBALPANIC2(s) ((((s)->evalcontrol2) >> 17U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL2_ENGLOBALPANIC2_RESET 0U

/* EVALUPPERLEFT2: Upper left corner of evaluation window 2. */
#define GFXREG_SIG_EVALUPPERLEFT2 0x00000054U
/* XEVALUPPERLEFT2: See XEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT2_XEVALUPPERLEFT2_FSHIFT 0U
#define GFXREG_SIG_EVALUPPERLEFT2_XEVALUPPERLEFT2_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT2_SETM_XEVALUPPERLEFT2(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALUPPERLEFT2_SET_XEVALUPPERLEFT2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT2_GET_XEVALUPPERLEFT2(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALUPPERLEFT2(s,val) ( (s)->evalupperleft2 = ((s)->evalupperleft2 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALUPPERLEFT2(s,val)  ( (s)->evalupperleft2 = (((s)->evalupperleft2 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALUPPERLEFT2(s) ((((s)->evalupperleft2) ) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT2_XEVALUPPERLEFT2_RESET 0U

/* YEVALUPPERLEFT2: See YEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT2_YEVALUPPERLEFT2_FSHIFT 16U
#define GFXREG_SIG_EVALUPPERLEFT2_YEVALUPPERLEFT2_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT2_SETM_YEVALUPPERLEFT2(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALUPPERLEFT2_SET_YEVALUPPERLEFT2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT2_GET_YEVALUPPERLEFT2(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALUPPERLEFT2(s,val) ( (s)->evalupperleft2 = ((s)->evalupperleft2 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALUPPERLEFT2(s,val)  ( (s)->evalupperleft2 = (((s)->evalupperleft2 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALUPPERLEFT2(s) ((((s)->evalupperleft2) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT2_YEVALUPPERLEFT2_RESET 0U

/* EVALLOWERRIGHT2: Lower right corner of evaluation window 2. */
#define GFXREG_SIG_EVALLOWERRIGHT2 0x00000058U
/* XEVALLOWERRIGHT2: See XEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT2_XEVALLOWERRIGHT2_FSHIFT 0U
#define GFXREG_SIG_EVALLOWERRIGHT2_XEVALLOWERRIGHT2_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT2_SETM_XEVALLOWERRIGHT2(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALLOWERRIGHT2_SET_XEVALLOWERRIGHT2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT2_GET_XEVALLOWERRIGHT2(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALLOWERRIGHT2(s,val) ( (s)->evallowerright2 = ((s)->evallowerright2 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALLOWERRIGHT2(s,val)  ( (s)->evallowerright2 = (((s)->evallowerright2 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALLOWERRIGHT2(s) ((((s)->evallowerright2) ) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT2_XEVALLOWERRIGHT2_RESET 0U

/* YEVALLOWERRIGHT2: See YEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT2_YEVALLOWERRIGHT2_FSHIFT 16U
#define GFXREG_SIG_EVALLOWERRIGHT2_YEVALLOWERRIGHT2_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT2_SETM_YEVALLOWERRIGHT2(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALLOWERRIGHT2_SET_YEVALLOWERRIGHT2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT2_GET_YEVALLOWERRIGHT2(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALLOWERRIGHT2(s,val) ( (s)->evallowerright2 = ((s)->evallowerright2 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALLOWERRIGHT2(s,val)  ( (s)->evallowerright2 = (((s)->evallowerright2 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALLOWERRIGHT2(s) ((((s)->evallowerright2) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT2_YEVALLOWERRIGHT2_RESET 0U

/* SIGCRCREDREF2: Reference signature of red channel for evaluation window 2. */
#define GFXREG_SIG_SIGCRCREDREF2 0x0000005cU
/* SIGCRCREDREF2: See SigCRCRedRef0. */
#define GFXREG_SIG_SIGCRCREDREF2_SIGCRCREDREF2_FSHIFT 0U
#define GFXREG_SIG_SIGCRCREDREF2_SIGCRCREDREF2_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCREDREF2_SETM_SIGCRCREDREF2(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCREDREF2_SET_SIGCRCREDREF2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCREDREF2_GET_SIGCRCREDREF2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCREDREF2(s,val) ( (s)->sigcrcredref2 = ((s)->sigcrcredref2 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCREDREF2(s,val)  ( (s)->sigcrcredref2 = (((s)->sigcrcredref2 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCREDREF2(s) ((((s)->sigcrcredref2) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCREDREF2_SIGCRCREDREF2_RESET 4294967295U

/* SIGCRCGREENREF2: Reference signature of green channel for evaluation window 2. */
#define GFXREG_SIG_SIGCRCGREENREF2 0x00000060U
/* SIGCRCGREENREF2: See SigCRCGreenRef0. */
#define GFXREG_SIG_SIGCRCGREENREF2_SIGCRCGREENREF2_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREENREF2_SIGCRCGREENREF2_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREENREF2_SETM_SIGCRCGREENREF2(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCGREENREF2_SET_SIGCRCGREENREF2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCGREENREF2_GET_SIGCRCGREENREF2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCGREENREF2(s,val) ( (s)->sigcrcgreenref2 = ((s)->sigcrcgreenref2 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCGREENREF2(s,val)  ( (s)->sigcrcgreenref2 = (((s)->sigcrcgreenref2 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCGREENREF2(s) ((((s)->sigcrcgreenref2) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREENREF2_SIGCRCGREENREF2_RESET 4294967295U

/* SIGCRCBLUEREF2: Reference signature of blue channel for evaluation window 2. */
#define GFXREG_SIG_SIGCRCBLUEREF2 0x00000064U
/* SIGCRCBLUEREF2: See SigCRCBlueRef0. */
#define GFXREG_SIG_SIGCRCBLUEREF2_SIGCRCBLUEREF2_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUEREF2_SIGCRCBLUEREF2_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUEREF2_SETM_SIGCRCBLUEREF2(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCBLUEREF2_SET_SIGCRCBLUEREF2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCBLUEREF2_GET_SIGCRCBLUEREF2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCBLUEREF2(s,val) ( (s)->sigcrcblueref2 = ((s)->sigcrcblueref2 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCBLUEREF2(s,val)  ( (s)->sigcrcblueref2 = (((s)->sigcrcblueref2 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCBLUEREF2(s) ((((s)->sigcrcblueref2) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUEREF2_SIGCRCBLUEREF2_RESET 4294967295U

/* SIGCRCRED2: Measured signature of red channel for evaluation window 2. */
#define GFXREG_SIG_SIGCRCRED2 0x00000068U
/* SIGCRCRED2: See SigCRCRed0. */
#define GFXREG_SIG_SIGCRCRED2_SIGCRCRED2_FSHIFT 0U
#define GFXREG_SIG_SIGCRCRED2_SIGCRCRED2_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCRED2_GET_SIGCRCRED2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCRED2(s) ((((s)->sigcrcred2) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCRED2_SIGCRCRED2_RESET 4294967295U

/* SIGCRCGREEN2: Measured signature of green channel for evaluation window 2. */
#define GFXREG_SIG_SIGCRCGREEN2 0x0000006cU
/* SIGCRCGREEN2: See SigCRCGreen0. */
#define GFXREG_SIG_SIGCRCGREEN2_SIGCRCGREEN2_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREEN2_SIGCRCGREEN2_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREEN2_GET_SIGCRCGREEN2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCGREEN2(s) ((((s)->sigcrcgreen2) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREEN2_SIGCRCGREEN2_RESET 4294967295U

/* SIGCRCBLUE2: Measured signature of blue channel for evaluation window 2. */
#define GFXREG_SIG_SIGCRCBLUE2 0x00000070U
/* SIGCRCBLUE2: See SigCRCBlue0. */
#define GFXREG_SIG_SIGCRCBLUE2_SIGCRCBLUE2_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUE2_SIGCRCBLUE2_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUE2_GET_SIGCRCBLUE2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCBLUE2(s) ((((s)->sigcrcblue2) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUE2_SIGCRCBLUE2_RESET 4294967295U

/* EVALCONTROL3: Control settings for evaluation window 3. */
#define GFXREG_SIG_EVALCONTROL3 0x00000074U
/* ENEVALWIN3: See EnEvalWin0. */
#define GFXREG_SIG_EVALCONTROL3_ENEVALWIN3_FSHIFT 0U
#define GFXREG_SIG_EVALCONTROL3_ENEVALWIN3_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL3_SETM_ENEVALWIN3(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_EVALCONTROL3_SET_ENEVALWIN3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL3_GET_ENEVALWIN3(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_ENEVALWIN3(s,val) ( (s)->evalcontrol3 = ((s)->evalcontrol3 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_ENEVALWIN3(s,val)  ( (s)->evalcontrol3 = (((s)->evalcontrol3 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENEVALWIN3(s) ((((s)->evalcontrol3) ) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL3_ENEVALWIN3_RESET 0U

/* ENCRC3: See EnCRC0. */
#define GFXREG_SIG_EVALCONTROL3_ENCRC3_FSHIFT 1U
#define GFXREG_SIG_EVALCONTROL3_ENCRC3_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL3_SETM_ENCRC3(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_SIG_EVALCONTROL3_SET_ENCRC3(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL3_GET_ENCRC3(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_SIG_SETM_ENCRC3(s,val) ( (s)->evalcontrol3 = ((s)->evalcontrol3 & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_SIG_SET_ENCRC3(s,val)  ( (s)->evalcontrol3 = (((s)->evalcontrol3 & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENCRC3(s) ((((s)->evalcontrol3) >> 1U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL3_ENCRC3_RESET 0U

/* ALPHAMASK3: See AlphaMask0. */
#define GFXREG_SIG_EVALCONTROL3_ALPHAMASK3_FSHIFT 8U
#define GFXREG_SIG_EVALCONTROL3_ALPHAMASK3_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL3_SETM_ALPHAMASK3(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_SIG_EVALCONTROL3_SET_ALPHAMASK3(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL3_GET_ALPHAMASK3(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAMASK3(s,val) ( (s)->evalcontrol3 = ((s)->evalcontrol3 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_SIG_SET_ALPHAMASK3(s,val)  ( (s)->evalcontrol3 = (((s)->evalcontrol3 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAMASK3(s) ((((s)->evalcontrol3) >> 8U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL3_ALPHAMASK3_RESET 0U

/* ALPHAINV3: See AlphaInv0. */
#define GFXREG_SIG_EVALCONTROL3_ALPHAINV3_FSHIFT 9U
#define GFXREG_SIG_EVALCONTROL3_ALPHAINV3_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL3_SETM_ALPHAINV3(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_SIG_EVALCONTROL3_SET_ALPHAINV3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL3_GET_ALPHAINV3(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAINV3(s,val) ( (s)->evalcontrol3 = ((s)->evalcontrol3 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_SIG_SET_ALPHAINV3(s,val)  ( (s)->evalcontrol3 = (((s)->evalcontrol3 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAINV3(s) ((((s)->evalcontrol3) >> 9U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL3_ALPHAINV3_RESET 0U

/* ENLOCALPANIC3: See EnLocalPanic0. */
#define GFXREG_SIG_EVALCONTROL3_ENLOCALPANIC3_FSHIFT 16U
#define GFXREG_SIG_EVALCONTROL3_ENLOCALPANIC3_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL3_SETM_ENLOCALPANIC3(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_SIG_EVALCONTROL3_SET_ENLOCALPANIC3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL3_GET_ENLOCALPANIC3(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_SIG_SETM_ENLOCALPANIC3(s,val) ( (s)->evalcontrol3 = ((s)->evalcontrol3 & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_SIG_SET_ENLOCALPANIC3(s,val)  ( (s)->evalcontrol3 = (((s)->evalcontrol3 & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENLOCALPANIC3(s) ((((s)->evalcontrol3) >> 16U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL3_ENLOCALPANIC3_RESET 0U

/* ENGLOBALPANIC3: See EnGlobalPanic0. */
#define GFXREG_SIG_EVALCONTROL3_ENGLOBALPANIC3_FSHIFT 17U
#define GFXREG_SIG_EVALCONTROL3_ENGLOBALPANIC3_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL3_SETM_ENGLOBALPANIC3(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_SIG_EVALCONTROL3_SET_ENGLOBALPANIC3(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL3_GET_ENGLOBALPANIC3(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_SIG_SETM_ENGLOBALPANIC3(s,val) ( (s)->evalcontrol3 = ((s)->evalcontrol3 & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_SIG_SET_ENGLOBALPANIC3(s,val)  ( (s)->evalcontrol3 = (((s)->evalcontrol3 & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENGLOBALPANIC3(s) ((((s)->evalcontrol3) >> 17U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL3_ENGLOBALPANIC3_RESET 0U

/* EVALUPPERLEFT3: Upper left corner of evaluation window 3. */
#define GFXREG_SIG_EVALUPPERLEFT3 0x00000078U
/* XEVALUPPERLEFT3: See XEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT3_XEVALUPPERLEFT3_FSHIFT 0U
#define GFXREG_SIG_EVALUPPERLEFT3_XEVALUPPERLEFT3_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT3_SETM_XEVALUPPERLEFT3(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALUPPERLEFT3_SET_XEVALUPPERLEFT3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT3_GET_XEVALUPPERLEFT3(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALUPPERLEFT3(s,val) ( (s)->evalupperleft3 = ((s)->evalupperleft3 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALUPPERLEFT3(s,val)  ( (s)->evalupperleft3 = (((s)->evalupperleft3 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALUPPERLEFT3(s) ((((s)->evalupperleft3) ) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT3_XEVALUPPERLEFT3_RESET 0U

/* YEVALUPPERLEFT3: See YEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT3_YEVALUPPERLEFT3_FSHIFT 16U
#define GFXREG_SIG_EVALUPPERLEFT3_YEVALUPPERLEFT3_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT3_SETM_YEVALUPPERLEFT3(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALUPPERLEFT3_SET_YEVALUPPERLEFT3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT3_GET_YEVALUPPERLEFT3(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALUPPERLEFT3(s,val) ( (s)->evalupperleft3 = ((s)->evalupperleft3 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALUPPERLEFT3(s,val)  ( (s)->evalupperleft3 = (((s)->evalupperleft3 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALUPPERLEFT3(s) ((((s)->evalupperleft3) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT3_YEVALUPPERLEFT3_RESET 0U

/* EVALLOWERRIGHT3: Lower right corner of evaluation window 3. */
#define GFXREG_SIG_EVALLOWERRIGHT3 0x0000007cU
/* XEVALLOWERRIGHT3: See XEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT3_XEVALLOWERRIGHT3_FSHIFT 0U
#define GFXREG_SIG_EVALLOWERRIGHT3_XEVALLOWERRIGHT3_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT3_SETM_XEVALLOWERRIGHT3(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALLOWERRIGHT3_SET_XEVALLOWERRIGHT3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT3_GET_XEVALLOWERRIGHT3(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALLOWERRIGHT3(s,val) ( (s)->evallowerright3 = ((s)->evallowerright3 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALLOWERRIGHT3(s,val)  ( (s)->evallowerright3 = (((s)->evallowerright3 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALLOWERRIGHT3(s) ((((s)->evallowerright3) ) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT3_XEVALLOWERRIGHT3_RESET 0U

/* YEVALLOWERRIGHT3: See YEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT3_YEVALLOWERRIGHT3_FSHIFT 16U
#define GFXREG_SIG_EVALLOWERRIGHT3_YEVALLOWERRIGHT3_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT3_SETM_YEVALLOWERRIGHT3(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALLOWERRIGHT3_SET_YEVALLOWERRIGHT3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT3_GET_YEVALLOWERRIGHT3(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALLOWERRIGHT3(s,val) ( (s)->evallowerright3 = ((s)->evallowerright3 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALLOWERRIGHT3(s,val)  ( (s)->evallowerright3 = (((s)->evallowerright3 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALLOWERRIGHT3(s) ((((s)->evallowerright3) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT3_YEVALLOWERRIGHT3_RESET 0U

/* SIGCRCREDREF3: Reference signature of red channel for evaluation window 3. */
#define GFXREG_SIG_SIGCRCREDREF3 0x00000080U
/* SIGCRCREDREF3: See SigCRCRedRef0. */
#define GFXREG_SIG_SIGCRCREDREF3_SIGCRCREDREF3_FSHIFT 0U
#define GFXREG_SIG_SIGCRCREDREF3_SIGCRCREDREF3_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCREDREF3_SETM_SIGCRCREDREF3(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCREDREF3_SET_SIGCRCREDREF3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCREDREF3_GET_SIGCRCREDREF3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCREDREF3(s,val) ( (s)->sigcrcredref3 = ((s)->sigcrcredref3 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCREDREF3(s,val)  ( (s)->sigcrcredref3 = (((s)->sigcrcredref3 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCREDREF3(s) ((((s)->sigcrcredref3) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCREDREF3_SIGCRCREDREF3_RESET 4294967295U

/* SIGCRCGREENREF3: Reference signature of green channel for evaluation window 3. */
#define GFXREG_SIG_SIGCRCGREENREF3 0x00000084U
/* SIGCRCGREENREF3: See SigCRCGreenRef0. */
#define GFXREG_SIG_SIGCRCGREENREF3_SIGCRCGREENREF3_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREENREF3_SIGCRCGREENREF3_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREENREF3_SETM_SIGCRCGREENREF3(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCGREENREF3_SET_SIGCRCGREENREF3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCGREENREF3_GET_SIGCRCGREENREF3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCGREENREF3(s,val) ( (s)->sigcrcgreenref3 = ((s)->sigcrcgreenref3 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCGREENREF3(s,val)  ( (s)->sigcrcgreenref3 = (((s)->sigcrcgreenref3 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCGREENREF3(s) ((((s)->sigcrcgreenref3) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREENREF3_SIGCRCGREENREF3_RESET 4294967295U

/* SIGCRCBLUEREF3: Reference signature of blue channel for evaluation window 3. */
#define GFXREG_SIG_SIGCRCBLUEREF3 0x00000088U
/* SIGCRCBLUEREF3: See SigCRCBlueRef0. */
#define GFXREG_SIG_SIGCRCBLUEREF3_SIGCRCBLUEREF3_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUEREF3_SIGCRCBLUEREF3_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUEREF3_SETM_SIGCRCBLUEREF3(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCBLUEREF3_SET_SIGCRCBLUEREF3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCBLUEREF3_GET_SIGCRCBLUEREF3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCBLUEREF3(s,val) ( (s)->sigcrcblueref3 = ((s)->sigcrcblueref3 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCBLUEREF3(s,val)  ( (s)->sigcrcblueref3 = (((s)->sigcrcblueref3 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCBLUEREF3(s) ((((s)->sigcrcblueref3) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUEREF3_SIGCRCBLUEREF3_RESET 4294967295U

/* SIGCRCRED3: Measured signature of red channel for evaluation window 3. */
#define GFXREG_SIG_SIGCRCRED3 0x0000008cU
/* SIGCRCRED3: See SigCRCRed0. */
#define GFXREG_SIG_SIGCRCRED3_SIGCRCRED3_FSHIFT 0U
#define GFXREG_SIG_SIGCRCRED3_SIGCRCRED3_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCRED3_GET_SIGCRCRED3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCRED3(s) ((((s)->sigcrcred3) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCRED3_SIGCRCRED3_RESET 4294967295U

/* SIGCRCGREEN3: Measured signature of green channel for evaluation window 3. */
#define GFXREG_SIG_SIGCRCGREEN3 0x00000090U
/* SIGCRCGREEN3: See SigCRCGreen0. */
#define GFXREG_SIG_SIGCRCGREEN3_SIGCRCGREEN3_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREEN3_SIGCRCGREEN3_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREEN3_GET_SIGCRCGREEN3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCGREEN3(s) ((((s)->sigcrcgreen3) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREEN3_SIGCRCGREEN3_RESET 4294967295U

/* SIGCRCBLUE3: Measured signature of blue channel for evaluation window 3. */
#define GFXREG_SIG_SIGCRCBLUE3 0x00000094U
/* SIGCRCBLUE3: See SigCRCBlue0. */
#define GFXREG_SIG_SIGCRCBLUE3_SIGCRCBLUE3_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUE3_SIGCRCBLUE3_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUE3_GET_SIGCRCBLUE3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCBLUE3(s) ((((s)->sigcrcblue3) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUE3_SIGCRCBLUE3_RESET 4294967295U

/* EVALCONTROL4: Control settings for evaluation window 4. */
#define GFXREG_SIG_EVALCONTROL4 0x00000098U
/* ENEVALWIN4: See EnEvalWin0. */
#define GFXREG_SIG_EVALCONTROL4_ENEVALWIN4_FSHIFT 0U
#define GFXREG_SIG_EVALCONTROL4_ENEVALWIN4_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL4_SETM_ENEVALWIN4(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_EVALCONTROL4_SET_ENEVALWIN4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL4_GET_ENEVALWIN4(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_ENEVALWIN4(s,val) ( (s)->evalcontrol4 = ((s)->evalcontrol4 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_ENEVALWIN4(s,val)  ( (s)->evalcontrol4 = (((s)->evalcontrol4 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENEVALWIN4(s) ((((s)->evalcontrol4) ) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL4_ENEVALWIN4_RESET 0U

/* ENCRC4: See EnCRC0. */
#define GFXREG_SIG_EVALCONTROL4_ENCRC4_FSHIFT 1U
#define GFXREG_SIG_EVALCONTROL4_ENCRC4_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL4_SETM_ENCRC4(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_SIG_EVALCONTROL4_SET_ENCRC4(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL4_GET_ENCRC4(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_SIG_SETM_ENCRC4(s,val) ( (s)->evalcontrol4 = ((s)->evalcontrol4 & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_SIG_SET_ENCRC4(s,val)  ( (s)->evalcontrol4 = (((s)->evalcontrol4 & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENCRC4(s) ((((s)->evalcontrol4) >> 1U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL4_ENCRC4_RESET 0U

/* ALPHAMASK4: See AlphaMask0. */
#define GFXREG_SIG_EVALCONTROL4_ALPHAMASK4_FSHIFT 8U
#define GFXREG_SIG_EVALCONTROL4_ALPHAMASK4_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL4_SETM_ALPHAMASK4(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_SIG_EVALCONTROL4_SET_ALPHAMASK4(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL4_GET_ALPHAMASK4(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAMASK4(s,val) ( (s)->evalcontrol4 = ((s)->evalcontrol4 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_SIG_SET_ALPHAMASK4(s,val)  ( (s)->evalcontrol4 = (((s)->evalcontrol4 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAMASK4(s) ((((s)->evalcontrol4) >> 8U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL4_ALPHAMASK4_RESET 0U

/* ALPHAINV4: See AlphaInv0. */
#define GFXREG_SIG_EVALCONTROL4_ALPHAINV4_FSHIFT 9U
#define GFXREG_SIG_EVALCONTROL4_ALPHAINV4_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL4_SETM_ALPHAINV4(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_SIG_EVALCONTROL4_SET_ALPHAINV4(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL4_GET_ALPHAINV4(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAINV4(s,val) ( (s)->evalcontrol4 = ((s)->evalcontrol4 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_SIG_SET_ALPHAINV4(s,val)  ( (s)->evalcontrol4 = (((s)->evalcontrol4 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAINV4(s) ((((s)->evalcontrol4) >> 9U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL4_ALPHAINV4_RESET 0U

/* ENLOCALPANIC4: See EnLocalPanic0. */
#define GFXREG_SIG_EVALCONTROL4_ENLOCALPANIC4_FSHIFT 16U
#define GFXREG_SIG_EVALCONTROL4_ENLOCALPANIC4_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL4_SETM_ENLOCALPANIC4(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_SIG_EVALCONTROL4_SET_ENLOCALPANIC4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL4_GET_ENLOCALPANIC4(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_SIG_SETM_ENLOCALPANIC4(s,val) ( (s)->evalcontrol4 = ((s)->evalcontrol4 & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_SIG_SET_ENLOCALPANIC4(s,val)  ( (s)->evalcontrol4 = (((s)->evalcontrol4 & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENLOCALPANIC4(s) ((((s)->evalcontrol4) >> 16U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL4_ENLOCALPANIC4_RESET 0U

/* ENGLOBALPANIC4: See EnGlobalPanic0. */
#define GFXREG_SIG_EVALCONTROL4_ENGLOBALPANIC4_FSHIFT 17U
#define GFXREG_SIG_EVALCONTROL4_ENGLOBALPANIC4_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL4_SETM_ENGLOBALPANIC4(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_SIG_EVALCONTROL4_SET_ENGLOBALPANIC4(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL4_GET_ENGLOBALPANIC4(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_SIG_SETM_ENGLOBALPANIC4(s,val) ( (s)->evalcontrol4 = ((s)->evalcontrol4 & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_SIG_SET_ENGLOBALPANIC4(s,val)  ( (s)->evalcontrol4 = (((s)->evalcontrol4 & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENGLOBALPANIC4(s) ((((s)->evalcontrol4) >> 17U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL4_ENGLOBALPANIC4_RESET 0U

/* EVALUPPERLEFT4: Upper left corner of evaluation window 4. */
#define GFXREG_SIG_EVALUPPERLEFT4 0x0000009cU
/* XEVALUPPERLEFT4: See XEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT4_XEVALUPPERLEFT4_FSHIFT 0U
#define GFXREG_SIG_EVALUPPERLEFT4_XEVALUPPERLEFT4_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT4_SETM_XEVALUPPERLEFT4(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALUPPERLEFT4_SET_XEVALUPPERLEFT4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT4_GET_XEVALUPPERLEFT4(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALUPPERLEFT4(s,val) ( (s)->evalupperleft4 = ((s)->evalupperleft4 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALUPPERLEFT4(s,val)  ( (s)->evalupperleft4 = (((s)->evalupperleft4 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALUPPERLEFT4(s) ((((s)->evalupperleft4) ) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT4_XEVALUPPERLEFT4_RESET 0U

/* YEVALUPPERLEFT4: See YEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT4_YEVALUPPERLEFT4_FSHIFT 16U
#define GFXREG_SIG_EVALUPPERLEFT4_YEVALUPPERLEFT4_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT4_SETM_YEVALUPPERLEFT4(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALUPPERLEFT4_SET_YEVALUPPERLEFT4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT4_GET_YEVALUPPERLEFT4(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALUPPERLEFT4(s,val) ( (s)->evalupperleft4 = ((s)->evalupperleft4 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALUPPERLEFT4(s,val)  ( (s)->evalupperleft4 = (((s)->evalupperleft4 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALUPPERLEFT4(s) ((((s)->evalupperleft4) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT4_YEVALUPPERLEFT4_RESET 0U

/* EVALLOWERRIGHT4: Lower right corner of evaluation window 4. */
#define GFXREG_SIG_EVALLOWERRIGHT4 0x000000a0U
/* XEVALLOWERRIGHT4: See XEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT4_XEVALLOWERRIGHT4_FSHIFT 0U
#define GFXREG_SIG_EVALLOWERRIGHT4_XEVALLOWERRIGHT4_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT4_SETM_XEVALLOWERRIGHT4(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALLOWERRIGHT4_SET_XEVALLOWERRIGHT4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT4_GET_XEVALLOWERRIGHT4(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALLOWERRIGHT4(s,val) ( (s)->evallowerright4 = ((s)->evallowerright4 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALLOWERRIGHT4(s,val)  ( (s)->evallowerright4 = (((s)->evallowerright4 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALLOWERRIGHT4(s) ((((s)->evallowerright4) ) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT4_XEVALLOWERRIGHT4_RESET 0U

/* YEVALLOWERRIGHT4: See YEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT4_YEVALLOWERRIGHT4_FSHIFT 16U
#define GFXREG_SIG_EVALLOWERRIGHT4_YEVALLOWERRIGHT4_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT4_SETM_YEVALLOWERRIGHT4(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALLOWERRIGHT4_SET_YEVALLOWERRIGHT4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT4_GET_YEVALLOWERRIGHT4(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALLOWERRIGHT4(s,val) ( (s)->evallowerright4 = ((s)->evallowerright4 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALLOWERRIGHT4(s,val)  ( (s)->evallowerright4 = (((s)->evallowerright4 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALLOWERRIGHT4(s) ((((s)->evallowerright4) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT4_YEVALLOWERRIGHT4_RESET 0U

/* SIGCRCREDREF4: Reference signature of red channel for evaluation window 4. */
#define GFXREG_SIG_SIGCRCREDREF4 0x000000a4U
/* SIGCRCREDREF4: See SigCRCRedRef0. */
#define GFXREG_SIG_SIGCRCREDREF4_SIGCRCREDREF4_FSHIFT 0U
#define GFXREG_SIG_SIGCRCREDREF4_SIGCRCREDREF4_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCREDREF4_SETM_SIGCRCREDREF4(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCREDREF4_SET_SIGCRCREDREF4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCREDREF4_GET_SIGCRCREDREF4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCREDREF4(s,val) ( (s)->sigcrcredref4 = ((s)->sigcrcredref4 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCREDREF4(s,val)  ( (s)->sigcrcredref4 = (((s)->sigcrcredref4 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCREDREF4(s) ((((s)->sigcrcredref4) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCREDREF4_SIGCRCREDREF4_RESET 4294967295U

/* SIGCRCGREENREF4: Reference signature of green channel for evaluation window 4. */
#define GFXREG_SIG_SIGCRCGREENREF4 0x000000a8U
/* SIGCRCGREENREF4: See SigCRCGreenRef0. */
#define GFXREG_SIG_SIGCRCGREENREF4_SIGCRCGREENREF4_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREENREF4_SIGCRCGREENREF4_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREENREF4_SETM_SIGCRCGREENREF4(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCGREENREF4_SET_SIGCRCGREENREF4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCGREENREF4_GET_SIGCRCGREENREF4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCGREENREF4(s,val) ( (s)->sigcrcgreenref4 = ((s)->sigcrcgreenref4 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCGREENREF4(s,val)  ( (s)->sigcrcgreenref4 = (((s)->sigcrcgreenref4 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCGREENREF4(s) ((((s)->sigcrcgreenref4) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREENREF4_SIGCRCGREENREF4_RESET 4294967295U

/* SIGCRCBLUEREF4: Reference signature of blue channel for evaluation window 4. */
#define GFXREG_SIG_SIGCRCBLUEREF4 0x000000acU
/* SIGCRCBLUEREF4: See SigCRCBlueRef0. */
#define GFXREG_SIG_SIGCRCBLUEREF4_SIGCRCBLUEREF4_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUEREF4_SIGCRCBLUEREF4_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUEREF4_SETM_SIGCRCBLUEREF4(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCBLUEREF4_SET_SIGCRCBLUEREF4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCBLUEREF4_GET_SIGCRCBLUEREF4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCBLUEREF4(s,val) ( (s)->sigcrcblueref4 = ((s)->sigcrcblueref4 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCBLUEREF4(s,val)  ( (s)->sigcrcblueref4 = (((s)->sigcrcblueref4 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCBLUEREF4(s) ((((s)->sigcrcblueref4) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUEREF4_SIGCRCBLUEREF4_RESET 4294967295U

/* SIGCRCRED4: Measured signature of red channel for evaluation window 4. */
#define GFXREG_SIG_SIGCRCRED4 0x000000b0U
/* SIGCRCRED4: See SigCRCRed0. */
#define GFXREG_SIG_SIGCRCRED4_SIGCRCRED4_FSHIFT 0U
#define GFXREG_SIG_SIGCRCRED4_SIGCRCRED4_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCRED4_GET_SIGCRCRED4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCRED4(s) ((((s)->sigcrcred4) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCRED4_SIGCRCRED4_RESET 4294967295U

/* SIGCRCGREEN4: Measured signature of green channel for evaluation window 4. */
#define GFXREG_SIG_SIGCRCGREEN4 0x000000b4U
/* SIGCRCGREEN4: See SigCRCGreen0. */
#define GFXREG_SIG_SIGCRCGREEN4_SIGCRCGREEN4_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREEN4_SIGCRCGREEN4_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREEN4_GET_SIGCRCGREEN4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCGREEN4(s) ((((s)->sigcrcgreen4) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREEN4_SIGCRCGREEN4_RESET 4294967295U

/* SIGCRCBLUE4: Measured signature of blue channel for evaluation window 4. */
#define GFXREG_SIG_SIGCRCBLUE4 0x000000b8U
/* SIGCRCBLUE4: See SigCRCBlue0. */
#define GFXREG_SIG_SIGCRCBLUE4_SIGCRCBLUE4_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUE4_SIGCRCBLUE4_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUE4_GET_SIGCRCBLUE4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCBLUE4(s) ((((s)->sigcrcblue4) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUE4_SIGCRCBLUE4_RESET 4294967295U

/* EVALCONTROL5: Control settings for evaluation window 5. */
#define GFXREG_SIG_EVALCONTROL5 0x000000bcU
/* ENEVALWIN5: See EnEvalWin0. */
#define GFXREG_SIG_EVALCONTROL5_ENEVALWIN5_FSHIFT 0U
#define GFXREG_SIG_EVALCONTROL5_ENEVALWIN5_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL5_SETM_ENEVALWIN5(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_EVALCONTROL5_SET_ENEVALWIN5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL5_GET_ENEVALWIN5(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_ENEVALWIN5(s,val) ( (s)->evalcontrol5 = ((s)->evalcontrol5 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_ENEVALWIN5(s,val)  ( (s)->evalcontrol5 = (((s)->evalcontrol5 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENEVALWIN5(s) ((((s)->evalcontrol5) ) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL5_ENEVALWIN5_RESET 0U

/* ENCRC5: See EnCRC0. */
#define GFXREG_SIG_EVALCONTROL5_ENCRC5_FSHIFT 1U
#define GFXREG_SIG_EVALCONTROL5_ENCRC5_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL5_SETM_ENCRC5(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_SIG_EVALCONTROL5_SET_ENCRC5(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL5_GET_ENCRC5(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_SIG_SETM_ENCRC5(s,val) ( (s)->evalcontrol5 = ((s)->evalcontrol5 & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_SIG_SET_ENCRC5(s,val)  ( (s)->evalcontrol5 = (((s)->evalcontrol5 & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENCRC5(s) ((((s)->evalcontrol5) >> 1U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL5_ENCRC5_RESET 0U

/* ALPHAMASK5: See AlphaMask0. */
#define GFXREG_SIG_EVALCONTROL5_ALPHAMASK5_FSHIFT 8U
#define GFXREG_SIG_EVALCONTROL5_ALPHAMASK5_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL5_SETM_ALPHAMASK5(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_SIG_EVALCONTROL5_SET_ALPHAMASK5(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL5_GET_ALPHAMASK5(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAMASK5(s,val) ( (s)->evalcontrol5 = ((s)->evalcontrol5 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_SIG_SET_ALPHAMASK5(s,val)  ( (s)->evalcontrol5 = (((s)->evalcontrol5 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAMASK5(s) ((((s)->evalcontrol5) >> 8U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL5_ALPHAMASK5_RESET 0U

/* ALPHAINV5: See AlphaInv0. */
#define GFXREG_SIG_EVALCONTROL5_ALPHAINV5_FSHIFT 9U
#define GFXREG_SIG_EVALCONTROL5_ALPHAINV5_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL5_SETM_ALPHAINV5(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_SIG_EVALCONTROL5_SET_ALPHAINV5(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL5_GET_ALPHAINV5(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAINV5(s,val) ( (s)->evalcontrol5 = ((s)->evalcontrol5 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_SIG_SET_ALPHAINV5(s,val)  ( (s)->evalcontrol5 = (((s)->evalcontrol5 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAINV5(s) ((((s)->evalcontrol5) >> 9U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL5_ALPHAINV5_RESET 0U

/* ENLOCALPANIC5: See EnLocalPanic0. */
#define GFXREG_SIG_EVALCONTROL5_ENLOCALPANIC5_FSHIFT 16U
#define GFXREG_SIG_EVALCONTROL5_ENLOCALPANIC5_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL5_SETM_ENLOCALPANIC5(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_SIG_EVALCONTROL5_SET_ENLOCALPANIC5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL5_GET_ENLOCALPANIC5(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_SIG_SETM_ENLOCALPANIC5(s,val) ( (s)->evalcontrol5 = ((s)->evalcontrol5 & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_SIG_SET_ENLOCALPANIC5(s,val)  ( (s)->evalcontrol5 = (((s)->evalcontrol5 & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENLOCALPANIC5(s) ((((s)->evalcontrol5) >> 16U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL5_ENLOCALPANIC5_RESET 0U

/* ENGLOBALPANIC5: See EnGlobalPanic0. */
#define GFXREG_SIG_EVALCONTROL5_ENGLOBALPANIC5_FSHIFT 17U
#define GFXREG_SIG_EVALCONTROL5_ENGLOBALPANIC5_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL5_SETM_ENGLOBALPANIC5(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_SIG_EVALCONTROL5_SET_ENGLOBALPANIC5(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL5_GET_ENGLOBALPANIC5(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_SIG_SETM_ENGLOBALPANIC5(s,val) ( (s)->evalcontrol5 = ((s)->evalcontrol5 & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_SIG_SET_ENGLOBALPANIC5(s,val)  ( (s)->evalcontrol5 = (((s)->evalcontrol5 & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENGLOBALPANIC5(s) ((((s)->evalcontrol5) >> 17U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL5_ENGLOBALPANIC5_RESET 0U

/* EVALUPPERLEFT5: Upper left corner of evaluation window 5. */
#define GFXREG_SIG_EVALUPPERLEFT5 0x000000c0U
/* XEVALUPPERLEFT5: See XEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT5_XEVALUPPERLEFT5_FSHIFT 0U
#define GFXREG_SIG_EVALUPPERLEFT5_XEVALUPPERLEFT5_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT5_SETM_XEVALUPPERLEFT5(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALUPPERLEFT5_SET_XEVALUPPERLEFT5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT5_GET_XEVALUPPERLEFT5(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALUPPERLEFT5(s,val) ( (s)->evalupperleft5 = ((s)->evalupperleft5 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALUPPERLEFT5(s,val)  ( (s)->evalupperleft5 = (((s)->evalupperleft5 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALUPPERLEFT5(s) ((((s)->evalupperleft5) ) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT5_XEVALUPPERLEFT5_RESET 0U

/* YEVALUPPERLEFT5: See YEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT5_YEVALUPPERLEFT5_FSHIFT 16U
#define GFXREG_SIG_EVALUPPERLEFT5_YEVALUPPERLEFT5_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT5_SETM_YEVALUPPERLEFT5(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALUPPERLEFT5_SET_YEVALUPPERLEFT5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT5_GET_YEVALUPPERLEFT5(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALUPPERLEFT5(s,val) ( (s)->evalupperleft5 = ((s)->evalupperleft5 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALUPPERLEFT5(s,val)  ( (s)->evalupperleft5 = (((s)->evalupperleft5 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALUPPERLEFT5(s) ((((s)->evalupperleft5) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT5_YEVALUPPERLEFT5_RESET 0U

/* EVALLOWERRIGHT5: Lower right corner of evaluation window 5. */
#define GFXREG_SIG_EVALLOWERRIGHT5 0x000000c4U
/* XEVALLOWERRIGHT5: See XEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT5_XEVALLOWERRIGHT5_FSHIFT 0U
#define GFXREG_SIG_EVALLOWERRIGHT5_XEVALLOWERRIGHT5_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT5_SETM_XEVALLOWERRIGHT5(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALLOWERRIGHT5_SET_XEVALLOWERRIGHT5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT5_GET_XEVALLOWERRIGHT5(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALLOWERRIGHT5(s,val) ( (s)->evallowerright5 = ((s)->evallowerright5 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALLOWERRIGHT5(s,val)  ( (s)->evallowerright5 = (((s)->evallowerright5 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALLOWERRIGHT5(s) ((((s)->evallowerright5) ) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT5_XEVALLOWERRIGHT5_RESET 0U

/* YEVALLOWERRIGHT5: See YEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT5_YEVALLOWERRIGHT5_FSHIFT 16U
#define GFXREG_SIG_EVALLOWERRIGHT5_YEVALLOWERRIGHT5_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT5_SETM_YEVALLOWERRIGHT5(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALLOWERRIGHT5_SET_YEVALLOWERRIGHT5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT5_GET_YEVALLOWERRIGHT5(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALLOWERRIGHT5(s,val) ( (s)->evallowerright5 = ((s)->evallowerright5 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALLOWERRIGHT5(s,val)  ( (s)->evallowerright5 = (((s)->evallowerright5 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALLOWERRIGHT5(s) ((((s)->evallowerright5) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT5_YEVALLOWERRIGHT5_RESET 0U

/* SIGCRCREDREF5: Reference signature of red channel for evaluation window 5. */
#define GFXREG_SIG_SIGCRCREDREF5 0x000000c8U
/* SIGCRCREDREF5: See SigCRCRedRef0. */
#define GFXREG_SIG_SIGCRCREDREF5_SIGCRCREDREF5_FSHIFT 0U
#define GFXREG_SIG_SIGCRCREDREF5_SIGCRCREDREF5_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCREDREF5_SETM_SIGCRCREDREF5(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCREDREF5_SET_SIGCRCREDREF5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCREDREF5_GET_SIGCRCREDREF5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCREDREF5(s,val) ( (s)->sigcrcredref5 = ((s)->sigcrcredref5 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCREDREF5(s,val)  ( (s)->sigcrcredref5 = (((s)->sigcrcredref5 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCREDREF5(s) ((((s)->sigcrcredref5) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCREDREF5_SIGCRCREDREF5_RESET 4294967295U

/* SIGCRCGREENREF5: Reference signature of green channel for evaluation window 5. */
#define GFXREG_SIG_SIGCRCGREENREF5 0x000000ccU
/* SIGCRCGREENREF5: See SigCRCGreenRef0. */
#define GFXREG_SIG_SIGCRCGREENREF5_SIGCRCGREENREF5_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREENREF5_SIGCRCGREENREF5_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREENREF5_SETM_SIGCRCGREENREF5(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCGREENREF5_SET_SIGCRCGREENREF5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCGREENREF5_GET_SIGCRCGREENREF5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCGREENREF5(s,val) ( (s)->sigcrcgreenref5 = ((s)->sigcrcgreenref5 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCGREENREF5(s,val)  ( (s)->sigcrcgreenref5 = (((s)->sigcrcgreenref5 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCGREENREF5(s) ((((s)->sigcrcgreenref5) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREENREF5_SIGCRCGREENREF5_RESET 4294967295U

/* SIGCRCBLUEREF5: Reference signature of blue channel for evaluation window 5. */
#define GFXREG_SIG_SIGCRCBLUEREF5 0x000000d0U
/* SIGCRCBLUEREF5: See SigCRCBlueRef0. */
#define GFXREG_SIG_SIGCRCBLUEREF5_SIGCRCBLUEREF5_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUEREF5_SIGCRCBLUEREF5_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUEREF5_SETM_SIGCRCBLUEREF5(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCBLUEREF5_SET_SIGCRCBLUEREF5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCBLUEREF5_GET_SIGCRCBLUEREF5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCBLUEREF5(s,val) ( (s)->sigcrcblueref5 = ((s)->sigcrcblueref5 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCBLUEREF5(s,val)  ( (s)->sigcrcblueref5 = (((s)->sigcrcblueref5 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCBLUEREF5(s) ((((s)->sigcrcblueref5) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUEREF5_SIGCRCBLUEREF5_RESET 4294967295U

/* SIGCRCRED5: Measured signature of red channel for evaluation window 5. */
#define GFXREG_SIG_SIGCRCRED5 0x000000d4U
/* SIGCRCRED5: See SigCRCRed0. */
#define GFXREG_SIG_SIGCRCRED5_SIGCRCRED5_FSHIFT 0U
#define GFXREG_SIG_SIGCRCRED5_SIGCRCRED5_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCRED5_GET_SIGCRCRED5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCRED5(s) ((((s)->sigcrcred5) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCRED5_SIGCRCRED5_RESET 4294967295U

/* SIGCRCGREEN5: Measured signature of green channel for evaluation window 5. */
#define GFXREG_SIG_SIGCRCGREEN5 0x000000d8U
/* SIGCRCGREEN5: See SigCRCGreen0. */
#define GFXREG_SIG_SIGCRCGREEN5_SIGCRCGREEN5_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREEN5_SIGCRCGREEN5_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREEN5_GET_SIGCRCGREEN5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCGREEN5(s) ((((s)->sigcrcgreen5) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREEN5_SIGCRCGREEN5_RESET 4294967295U

/* SIGCRCBLUE5: Measured signature of blue channel for evaluation window 5. */
#define GFXREG_SIG_SIGCRCBLUE5 0x000000dcU
/* SIGCRCBLUE5: See SigCRCBlue0. */
#define GFXREG_SIG_SIGCRCBLUE5_SIGCRCBLUE5_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUE5_SIGCRCBLUE5_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUE5_GET_SIGCRCBLUE5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCBLUE5(s) ((((s)->sigcrcblue5) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUE5_SIGCRCBLUE5_RESET 4294967295U

/* EVALCONTROL6: Control settings for evaluation window 6. */
#define GFXREG_SIG_EVALCONTROL6 0x000000e0U
/* ENEVALWIN6: See EnEvalWin0. */
#define GFXREG_SIG_EVALCONTROL6_ENEVALWIN6_FSHIFT 0U
#define GFXREG_SIG_EVALCONTROL6_ENEVALWIN6_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL6_SETM_ENEVALWIN6(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_EVALCONTROL6_SET_ENEVALWIN6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL6_GET_ENEVALWIN6(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_ENEVALWIN6(s,val) ( (s)->evalcontrol6 = ((s)->evalcontrol6 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_ENEVALWIN6(s,val)  ( (s)->evalcontrol6 = (((s)->evalcontrol6 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENEVALWIN6(s) ((((s)->evalcontrol6) ) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL6_ENEVALWIN6_RESET 0U

/* ENCRC6: See EnCRC0. */
#define GFXREG_SIG_EVALCONTROL6_ENCRC6_FSHIFT 1U
#define GFXREG_SIG_EVALCONTROL6_ENCRC6_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL6_SETM_ENCRC6(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_SIG_EVALCONTROL6_SET_ENCRC6(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL6_GET_ENCRC6(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_SIG_SETM_ENCRC6(s,val) ( (s)->evalcontrol6 = ((s)->evalcontrol6 & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_SIG_SET_ENCRC6(s,val)  ( (s)->evalcontrol6 = (((s)->evalcontrol6 & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENCRC6(s) ((((s)->evalcontrol6) >> 1U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL6_ENCRC6_RESET 0U

/* ALPHAMASK6: See AlphaMask0. */
#define GFXREG_SIG_EVALCONTROL6_ALPHAMASK6_FSHIFT 8U
#define GFXREG_SIG_EVALCONTROL6_ALPHAMASK6_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL6_SETM_ALPHAMASK6(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_SIG_EVALCONTROL6_SET_ALPHAMASK6(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL6_GET_ALPHAMASK6(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAMASK6(s,val) ( (s)->evalcontrol6 = ((s)->evalcontrol6 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_SIG_SET_ALPHAMASK6(s,val)  ( (s)->evalcontrol6 = (((s)->evalcontrol6 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAMASK6(s) ((((s)->evalcontrol6) >> 8U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL6_ALPHAMASK6_RESET 0U

/* ALPHAINV6: See AlphaInv0. */
#define GFXREG_SIG_EVALCONTROL6_ALPHAINV6_FSHIFT 9U
#define GFXREG_SIG_EVALCONTROL6_ALPHAINV6_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL6_SETM_ALPHAINV6(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_SIG_EVALCONTROL6_SET_ALPHAINV6(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL6_GET_ALPHAINV6(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAINV6(s,val) ( (s)->evalcontrol6 = ((s)->evalcontrol6 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_SIG_SET_ALPHAINV6(s,val)  ( (s)->evalcontrol6 = (((s)->evalcontrol6 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAINV6(s) ((((s)->evalcontrol6) >> 9U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL6_ALPHAINV6_RESET 0U

/* ENLOCALPANIC6: See EnLocalPanic0. */
#define GFXREG_SIG_EVALCONTROL6_ENLOCALPANIC6_FSHIFT 16U
#define GFXREG_SIG_EVALCONTROL6_ENLOCALPANIC6_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL6_SETM_ENLOCALPANIC6(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_SIG_EVALCONTROL6_SET_ENLOCALPANIC6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL6_GET_ENLOCALPANIC6(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_SIG_SETM_ENLOCALPANIC6(s,val) ( (s)->evalcontrol6 = ((s)->evalcontrol6 & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_SIG_SET_ENLOCALPANIC6(s,val)  ( (s)->evalcontrol6 = (((s)->evalcontrol6 & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENLOCALPANIC6(s) ((((s)->evalcontrol6) >> 16U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL6_ENLOCALPANIC6_RESET 0U

/* ENGLOBALPANIC6: See EnGlobalPanic0. */
#define GFXREG_SIG_EVALCONTROL6_ENGLOBALPANIC6_FSHIFT 17U
#define GFXREG_SIG_EVALCONTROL6_ENGLOBALPANIC6_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL6_SETM_ENGLOBALPANIC6(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_SIG_EVALCONTROL6_SET_ENGLOBALPANIC6(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL6_GET_ENGLOBALPANIC6(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_SIG_SETM_ENGLOBALPANIC6(s,val) ( (s)->evalcontrol6 = ((s)->evalcontrol6 & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_SIG_SET_ENGLOBALPANIC6(s,val)  ( (s)->evalcontrol6 = (((s)->evalcontrol6 & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENGLOBALPANIC6(s) ((((s)->evalcontrol6) >> 17U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL6_ENGLOBALPANIC6_RESET 0U

/* EVALUPPERLEFT6: Upper left corner of evaluation window 6. */
#define GFXREG_SIG_EVALUPPERLEFT6 0x000000e4U
/* XEVALUPPERLEFT6: See XEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT6_XEVALUPPERLEFT6_FSHIFT 0U
#define GFXREG_SIG_EVALUPPERLEFT6_XEVALUPPERLEFT6_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT6_SETM_XEVALUPPERLEFT6(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALUPPERLEFT6_SET_XEVALUPPERLEFT6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT6_GET_XEVALUPPERLEFT6(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALUPPERLEFT6(s,val) ( (s)->evalupperleft6 = ((s)->evalupperleft6 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALUPPERLEFT6(s,val)  ( (s)->evalupperleft6 = (((s)->evalupperleft6 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALUPPERLEFT6(s) ((((s)->evalupperleft6) ) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT6_XEVALUPPERLEFT6_RESET 0U

/* YEVALUPPERLEFT6: See YEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT6_YEVALUPPERLEFT6_FSHIFT 16U
#define GFXREG_SIG_EVALUPPERLEFT6_YEVALUPPERLEFT6_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT6_SETM_YEVALUPPERLEFT6(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALUPPERLEFT6_SET_YEVALUPPERLEFT6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT6_GET_YEVALUPPERLEFT6(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALUPPERLEFT6(s,val) ( (s)->evalupperleft6 = ((s)->evalupperleft6 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALUPPERLEFT6(s,val)  ( (s)->evalupperleft6 = (((s)->evalupperleft6 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALUPPERLEFT6(s) ((((s)->evalupperleft6) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT6_YEVALUPPERLEFT6_RESET 0U

/* EVALLOWERRIGHT6: Lower right corner of evaluation window 6. */
#define GFXREG_SIG_EVALLOWERRIGHT6 0x000000e8U
/* XEVALLOWERRIGHT6: See XEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT6_XEVALLOWERRIGHT6_FSHIFT 0U
#define GFXREG_SIG_EVALLOWERRIGHT6_XEVALLOWERRIGHT6_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT6_SETM_XEVALLOWERRIGHT6(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALLOWERRIGHT6_SET_XEVALLOWERRIGHT6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT6_GET_XEVALLOWERRIGHT6(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALLOWERRIGHT6(s,val) ( (s)->evallowerright6 = ((s)->evallowerright6 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALLOWERRIGHT6(s,val)  ( (s)->evallowerright6 = (((s)->evallowerright6 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALLOWERRIGHT6(s) ((((s)->evallowerright6) ) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT6_XEVALLOWERRIGHT6_RESET 0U

/* YEVALLOWERRIGHT6: See YEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT6_YEVALLOWERRIGHT6_FSHIFT 16U
#define GFXREG_SIG_EVALLOWERRIGHT6_YEVALLOWERRIGHT6_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT6_SETM_YEVALLOWERRIGHT6(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALLOWERRIGHT6_SET_YEVALLOWERRIGHT6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT6_GET_YEVALLOWERRIGHT6(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALLOWERRIGHT6(s,val) ( (s)->evallowerright6 = ((s)->evallowerright6 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALLOWERRIGHT6(s,val)  ( (s)->evallowerright6 = (((s)->evallowerright6 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALLOWERRIGHT6(s) ((((s)->evallowerright6) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT6_YEVALLOWERRIGHT6_RESET 0U

/* SIGCRCREDREF6: Reference signature of red channel for evaluation window 6. */
#define GFXREG_SIG_SIGCRCREDREF6 0x000000ecU
/* SIGCRCREDREF6: See SigCRCRedRef0. */
#define GFXREG_SIG_SIGCRCREDREF6_SIGCRCREDREF6_FSHIFT 0U
#define GFXREG_SIG_SIGCRCREDREF6_SIGCRCREDREF6_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCREDREF6_SETM_SIGCRCREDREF6(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCREDREF6_SET_SIGCRCREDREF6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCREDREF6_GET_SIGCRCREDREF6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCREDREF6(s,val) ( (s)->sigcrcredref6 = ((s)->sigcrcredref6 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCREDREF6(s,val)  ( (s)->sigcrcredref6 = (((s)->sigcrcredref6 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCREDREF6(s) ((((s)->sigcrcredref6) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCREDREF6_SIGCRCREDREF6_RESET 4294967295U

/* SIGCRCGREENREF6: Reference signature of green channel for evaluation window 6. */
#define GFXREG_SIG_SIGCRCGREENREF6 0x000000f0U
/* SIGCRCGREENREF6: See SigCRCGreenRef0. */
#define GFXREG_SIG_SIGCRCGREENREF6_SIGCRCGREENREF6_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREENREF6_SIGCRCGREENREF6_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREENREF6_SETM_SIGCRCGREENREF6(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCGREENREF6_SET_SIGCRCGREENREF6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCGREENREF6_GET_SIGCRCGREENREF6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCGREENREF6(s,val) ( (s)->sigcrcgreenref6 = ((s)->sigcrcgreenref6 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCGREENREF6(s,val)  ( (s)->sigcrcgreenref6 = (((s)->sigcrcgreenref6 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCGREENREF6(s) ((((s)->sigcrcgreenref6) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREENREF6_SIGCRCGREENREF6_RESET 4294967295U

/* SIGCRCBLUEREF6: Reference signature of blue channel for evaluation window 6. */
#define GFXREG_SIG_SIGCRCBLUEREF6 0x000000f4U
/* SIGCRCBLUEREF6: See SigCRCBlueRef0. */
#define GFXREG_SIG_SIGCRCBLUEREF6_SIGCRCBLUEREF6_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUEREF6_SIGCRCBLUEREF6_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUEREF6_SETM_SIGCRCBLUEREF6(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCBLUEREF6_SET_SIGCRCBLUEREF6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCBLUEREF6_GET_SIGCRCBLUEREF6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCBLUEREF6(s,val) ( (s)->sigcrcblueref6 = ((s)->sigcrcblueref6 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCBLUEREF6(s,val)  ( (s)->sigcrcblueref6 = (((s)->sigcrcblueref6 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCBLUEREF6(s) ((((s)->sigcrcblueref6) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUEREF6_SIGCRCBLUEREF6_RESET 4294967295U

/* SIGCRCRED6: Measured signature of red channel for evaluation window 6. */
#define GFXREG_SIG_SIGCRCRED6 0x000000f8U
/* SIGCRCRED6: See SigCRCRed0. */
#define GFXREG_SIG_SIGCRCRED6_SIGCRCRED6_FSHIFT 0U
#define GFXREG_SIG_SIGCRCRED6_SIGCRCRED6_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCRED6_GET_SIGCRCRED6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCRED6(s) ((((s)->sigcrcred6) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCRED6_SIGCRCRED6_RESET 4294967295U

/* SIGCRCGREEN6: Measured signature of green channel for evaluation window 6. */
#define GFXREG_SIG_SIGCRCGREEN6 0x000000fcU
/* SIGCRCGREEN6: See SigCRCGreen0. */
#define GFXREG_SIG_SIGCRCGREEN6_SIGCRCGREEN6_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREEN6_SIGCRCGREEN6_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREEN6_GET_SIGCRCGREEN6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCGREEN6(s) ((((s)->sigcrcgreen6) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREEN6_SIGCRCGREEN6_RESET 4294967295U

/* SIGCRCBLUE6: Measured signature of blue channel for evaluation window 6. */
#define GFXREG_SIG_SIGCRCBLUE6 0x00000100U
/* SIGCRCBLUE6: See SigCRCBlue0. */
#define GFXREG_SIG_SIGCRCBLUE6_SIGCRCBLUE6_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUE6_SIGCRCBLUE6_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUE6_GET_SIGCRCBLUE6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCBLUE6(s) ((((s)->sigcrcblue6) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUE6_SIGCRCBLUE6_RESET 4294967295U

/* EVALCONTROL7: Control settings for evaluation window 7. */
#define GFXREG_SIG_EVALCONTROL7 0x00000104U
/* ENEVALWIN7: See EnEvalWin0. */
#define GFXREG_SIG_EVALCONTROL7_ENEVALWIN7_FSHIFT 0U
#define GFXREG_SIG_EVALCONTROL7_ENEVALWIN7_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL7_SETM_ENEVALWIN7(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_EVALCONTROL7_SET_ENEVALWIN7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL7_GET_ENEVALWIN7(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_ENEVALWIN7(s,val) ( (s)->evalcontrol7 = ((s)->evalcontrol7 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_ENEVALWIN7(s,val)  ( (s)->evalcontrol7 = (((s)->evalcontrol7 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENEVALWIN7(s) ((((s)->evalcontrol7) ) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL7_ENEVALWIN7_RESET 0U

/* ENCRC7: See EnCRC0. */
#define GFXREG_SIG_EVALCONTROL7_ENCRC7_FSHIFT 1U
#define GFXREG_SIG_EVALCONTROL7_ENCRC7_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL7_SETM_ENCRC7(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_SIG_EVALCONTROL7_SET_ENCRC7(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL7_GET_ENCRC7(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_SIG_SETM_ENCRC7(s,val) ( (s)->evalcontrol7 = ((s)->evalcontrol7 & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_SIG_SET_ENCRC7(s,val)  ( (s)->evalcontrol7 = (((s)->evalcontrol7 & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENCRC7(s) ((((s)->evalcontrol7) >> 1U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL7_ENCRC7_RESET 0U

/* ALPHAMASK7: See AlphaMask0. */
#define GFXREG_SIG_EVALCONTROL7_ALPHAMASK7_FSHIFT 8U
#define GFXREG_SIG_EVALCONTROL7_ALPHAMASK7_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL7_SETM_ALPHAMASK7(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_SIG_EVALCONTROL7_SET_ALPHAMASK7(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL7_GET_ALPHAMASK7(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAMASK7(s,val) ( (s)->evalcontrol7 = ((s)->evalcontrol7 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_SIG_SET_ALPHAMASK7(s,val)  ( (s)->evalcontrol7 = (((s)->evalcontrol7 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAMASK7(s) ((((s)->evalcontrol7) >> 8U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL7_ALPHAMASK7_RESET 0U

/* ALPHAINV7: See AlphaInv0. */
#define GFXREG_SIG_EVALCONTROL7_ALPHAINV7_FSHIFT 9U
#define GFXREG_SIG_EVALCONTROL7_ALPHAINV7_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL7_SETM_ALPHAINV7(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_SIG_EVALCONTROL7_SET_ALPHAINV7(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL7_GET_ALPHAINV7(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_SIG_SETM_ALPHAINV7(s,val) ( (s)->evalcontrol7 = ((s)->evalcontrol7 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_SIG_SET_ALPHAINV7(s,val)  ( (s)->evalcontrol7 = (((s)->evalcontrol7 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ALPHAINV7(s) ((((s)->evalcontrol7) >> 9U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL7_ALPHAINV7_RESET 0U

/* ENLOCALPANIC7: See EnLocalPanic0. */
#define GFXREG_SIG_EVALCONTROL7_ENLOCALPANIC7_FSHIFT 16U
#define GFXREG_SIG_EVALCONTROL7_ENLOCALPANIC7_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL7_SETM_ENLOCALPANIC7(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_SIG_EVALCONTROL7_SET_ENLOCALPANIC7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL7_GET_ENLOCALPANIC7(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_SIG_SETM_ENLOCALPANIC7(s,val) ( (s)->evalcontrol7 = ((s)->evalcontrol7 & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_SIG_SET_ENLOCALPANIC7(s,val)  ( (s)->evalcontrol7 = (((s)->evalcontrol7 & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENLOCALPANIC7(s) ((((s)->evalcontrol7) >> 16U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL7_ENLOCALPANIC7_RESET 0U

/* ENGLOBALPANIC7: See EnGlobalPanic0. */
#define GFXREG_SIG_EVALCONTROL7_ENGLOBALPANIC7_FSHIFT 17U
#define GFXREG_SIG_EVALCONTROL7_ENGLOBALPANIC7_FMASK 0x1U
#define GFXREG_SIG_EVALCONTROL7_SETM_ENGLOBALPANIC7(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_SIG_EVALCONTROL7_SET_ENGLOBALPANIC7(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALCONTROL7_GET_ENGLOBALPANIC7(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_SIG_SETM_ENGLOBALPANIC7(s,val) ( (s)->evalcontrol7 = ((s)->evalcontrol7 & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_SIG_SET_ENGLOBALPANIC7(s,val)  ( (s)->evalcontrol7 = (((s)->evalcontrol7 & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENGLOBALPANIC7(s) ((((s)->evalcontrol7) >> 17U) & 0x1UL)
#define GFXREG_SIG_EVALCONTROL7_ENGLOBALPANIC7_RESET 0U

/* EVALUPPERLEFT7: Upper left corner of evaluation window 7. */
#define GFXREG_SIG_EVALUPPERLEFT7 0x00000108U
/* XEVALUPPERLEFT7: See XEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT7_XEVALUPPERLEFT7_FSHIFT 0U
#define GFXREG_SIG_EVALUPPERLEFT7_XEVALUPPERLEFT7_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT7_SETM_XEVALUPPERLEFT7(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALUPPERLEFT7_SET_XEVALUPPERLEFT7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT7_GET_XEVALUPPERLEFT7(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALUPPERLEFT7(s,val) ( (s)->evalupperleft7 = ((s)->evalupperleft7 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALUPPERLEFT7(s,val)  ( (s)->evalupperleft7 = (((s)->evalupperleft7 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALUPPERLEFT7(s) ((((s)->evalupperleft7) ) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT7_XEVALUPPERLEFT7_RESET 0U

/* YEVALUPPERLEFT7: See YEvalUpperLeft0. */
#define GFXREG_SIG_EVALUPPERLEFT7_YEVALUPPERLEFT7_FSHIFT 16U
#define GFXREG_SIG_EVALUPPERLEFT7_YEVALUPPERLEFT7_FMASK 0x3fffU
#define GFXREG_SIG_EVALUPPERLEFT7_SETM_YEVALUPPERLEFT7(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALUPPERLEFT7_SET_YEVALUPPERLEFT7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALUPPERLEFT7_GET_YEVALUPPERLEFT7(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALUPPERLEFT7(s,val) ( (s)->evalupperleft7 = ((s)->evalupperleft7 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALUPPERLEFT7(s,val)  ( (s)->evalupperleft7 = (((s)->evalupperleft7 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALUPPERLEFT7(s) ((((s)->evalupperleft7) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALUPPERLEFT7_YEVALUPPERLEFT7_RESET 0U

/* EVALLOWERRIGHT7: Lower right corner of evaluation window 7. */
#define GFXREG_SIG_EVALLOWERRIGHT7 0x0000010cU
/* XEVALLOWERRIGHT7: See XEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT7_XEVALLOWERRIGHT7_FSHIFT 0U
#define GFXREG_SIG_EVALLOWERRIGHT7_XEVALLOWERRIGHT7_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT7_SETM_XEVALLOWERRIGHT7(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_SIG_EVALLOWERRIGHT7_SET_XEVALLOWERRIGHT7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT7_GET_XEVALLOWERRIGHT7(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_SIG_SETM_XEVALLOWERRIGHT7(s,val) ( (s)->evallowerright7 = ((s)->evallowerright7 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_SIG_SET_XEVALLOWERRIGHT7(s,val)  ( (s)->evallowerright7 = (((s)->evallowerright7 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_XEVALLOWERRIGHT7(s) ((((s)->evallowerright7) ) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT7_XEVALLOWERRIGHT7_RESET 0U

/* YEVALLOWERRIGHT7: See YEvalLowerRight0. */
#define GFXREG_SIG_EVALLOWERRIGHT7_YEVALLOWERRIGHT7_FSHIFT 16U
#define GFXREG_SIG_EVALLOWERRIGHT7_YEVALLOWERRIGHT7_FMASK 0x3fffU
#define GFXREG_SIG_EVALLOWERRIGHT7_SETM_YEVALLOWERRIGHT7(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_SIG_EVALLOWERRIGHT7_SET_YEVALLOWERRIGHT7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_SIG_EVALLOWERRIGHT7_GET_YEVALLOWERRIGHT7(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_SETM_YEVALLOWERRIGHT7(s,val) ( (s)->evallowerright7 = ((s)->evallowerright7 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_SIG_SET_YEVALLOWERRIGHT7(s,val)  ( (s)->evallowerright7 = (((s)->evallowerright7 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_YEVALLOWERRIGHT7(s) ((((s)->evallowerright7) >> 16U) & 0x3fffUL)
#define GFXREG_SIG_EVALLOWERRIGHT7_YEVALLOWERRIGHT7_RESET 0U

/* SIGCRCREDREF7: Reference signature of red channel for evaluation window 7. */
#define GFXREG_SIG_SIGCRCREDREF7 0x00000110U
/* SIGCRCREDREF7: See SigCRCRedRef0. */
#define GFXREG_SIG_SIGCRCREDREF7_SIGCRCREDREF7_FSHIFT 0U
#define GFXREG_SIG_SIGCRCREDREF7_SIGCRCREDREF7_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCREDREF7_SETM_SIGCRCREDREF7(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCREDREF7_SET_SIGCRCREDREF7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCREDREF7_GET_SIGCRCREDREF7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCREDREF7(s,val) ( (s)->sigcrcredref7 = ((s)->sigcrcredref7 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCREDREF7(s,val)  ( (s)->sigcrcredref7 = (((s)->sigcrcredref7 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCREDREF7(s) ((((s)->sigcrcredref7) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCREDREF7_SIGCRCREDREF7_RESET 4294967295U

/* SIGCRCGREENREF7: Reference signature of green channel for evaluation window 7. */
#define GFXREG_SIG_SIGCRCGREENREF7 0x00000114U
/* SIGCRCGREENREF7: See SigCRCGreenRef0. */
#define GFXREG_SIG_SIGCRCGREENREF7_SIGCRCGREENREF7_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREENREF7_SIGCRCGREENREF7_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREENREF7_SETM_SIGCRCGREENREF7(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCGREENREF7_SET_SIGCRCGREENREF7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCGREENREF7_GET_SIGCRCGREENREF7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCGREENREF7(s,val) ( (s)->sigcrcgreenref7 = ((s)->sigcrcgreenref7 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCGREENREF7(s,val)  ( (s)->sigcrcgreenref7 = (((s)->sigcrcgreenref7 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCGREENREF7(s) ((((s)->sigcrcgreenref7) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREENREF7_SIGCRCGREENREF7_RESET 4294967295U

/* SIGCRCBLUEREF7: Reference signature of blue channel for evaluation window 7. */
#define GFXREG_SIG_SIGCRCBLUEREF7 0x00000118U
/* SIGCRCBLUEREF7: See SigCRCBlueRef0. */
#define GFXREG_SIG_SIGCRCBLUEREF7_SIGCRCBLUEREF7_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUEREF7_SIGCRCBLUEREF7_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUEREF7_SETM_SIGCRCBLUEREF7(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_SIG_SIGCRCBLUEREF7_SET_SIGCRCBLUEREF7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SIGCRCBLUEREF7_GET_SIGCRCBLUEREF7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_SETM_SIGCRCBLUEREF7(s,val) ( (s)->sigcrcblueref7 = ((s)->sigcrcblueref7 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_SIG_SET_SIGCRCBLUEREF7(s,val)  ( (s)->sigcrcblueref7 = (((s)->sigcrcblueref7 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SIGCRCBLUEREF7(s) ((((s)->sigcrcblueref7) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUEREF7_SIGCRCBLUEREF7_RESET 4294967295U

/* SIGCRCRED7: Measured signature of red channel for evaluation window 7. */
#define GFXREG_SIG_SIGCRCRED7 0x0000011cU
/* SIGCRCRED7: See SigCRCRed0. */
#define GFXREG_SIG_SIGCRCRED7_SIGCRCRED7_FSHIFT 0U
#define GFXREG_SIG_SIGCRCRED7_SIGCRCRED7_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCRED7_GET_SIGCRCRED7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCRED7(s) ((((s)->sigcrcred7) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCRED7_SIGCRCRED7_RESET 4294967295U

/* SIGCRCGREEN7: Measured signature of green channel for evaluation window 7. */
#define GFXREG_SIG_SIGCRCGREEN7 0x00000120U
/* SIGCRCGREEN7: See SigCRCGreen0. */
#define GFXREG_SIG_SIGCRCGREEN7_SIGCRCGREEN7_FSHIFT 0U
#define GFXREG_SIG_SIGCRCGREEN7_SIGCRCGREEN7_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCGREEN7_GET_SIGCRCGREEN7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCGREEN7(s) ((((s)->sigcrcgreen7) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCGREEN7_SIGCRCGREEN7_RESET 4294967295U

/* SIGCRCBLUE7: Measured signature of blue channel for evaluation window 7. */
#define GFXREG_SIG_SIGCRCBLUE7 0x00000124U
/* SIGCRCBLUE7: See SigCRCBlue0. */
#define GFXREG_SIG_SIGCRCBLUE7_SIGCRCBLUE7_FSHIFT 0U
#define GFXREG_SIG_SIGCRCBLUE7_SIGCRCBLUE7_FMASK 0xffffffffU
#define GFXREG_SIG_SIGCRCBLUE7_GET_SIGCRCBLUE7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_SIG_GET_SIGCRCBLUE7(s) ((((s)->sigcrcblue7) ) & 0xffffffffUL)
#define GFXREG_SIG_SIGCRCBLUE7_SIGCRCBLUE7_RESET 4294967295U

/* SHADOWLOAD: Shadow load control register. */
#define GFXREG_SIG_SHADOWLOAD 0x00000128U
/* SHDLDREQ: Shadow load request for each evaluation window (bit index = window index). */
#define GFXREG_SIG_SHADOWLOAD_SHDLDREQ_FSHIFT 0U
#define GFXREG_SIG_SHADOWLOAD_SHDLDREQ_FMASK 0xffU
#define GFXREG_SIG_SHADOWLOAD_SETM_SHDLDREQ(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_SIG_SHADOWLOAD_SET_SHDLDREQ(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_SIG_SHADOWLOAD_GET_SHDLDREQ(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_SIG_SETM_SHDLDREQ(s,val) ( (s)->shadowload = ((s)->shadowload & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_SIG_SET_SHDLDREQ(s,val)  ( (s)->shadowload = (((s)->shadowload & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_SHDLDREQ(s) ((((s)->shadowload) ) & 0xffUL)
#define GFXREG_SIG_SHADOWLOAD_SHDLDREQ_RESET 0U

/* CONTINUOUSMODE: Signature operation mode control. */
#define GFXREG_SIG_CONTINUOUSMODE 0x0000012cU
/* ENCONT: EnCont = 0: disables continuous mode. */
#define GFXREG_SIG_CONTINUOUSMODE_ENCONT_FSHIFT 0U
#define GFXREG_SIG_CONTINUOUSMODE_ENCONT_FMASK 0x1U
#define GFXREG_SIG_CONTINUOUSMODE_SETM_ENCONT(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_CONTINUOUSMODE_SET_ENCONT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_CONTINUOUSMODE_GET_ENCONT(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_SIG_SETM_ENCONT(s,val) ( (s)->continuousmode = ((s)->continuousmode & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_ENCONT(s,val)  ( (s)->continuousmode = (((s)->continuousmode & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_GET_ENCONT(s) ((((s)->continuousmode) ) & 0x1UL)
#define GFXREG_SIG_CONTINUOUSMODE_ENCONT_RESET 0U

/* SOFTWAREKICK: Signature measurement trigger. */
#define GFXREG_SIG_SOFTWAREKICK 0x00000130U
/* KICK: ContinueMode.EnCont=0: Write '1' to this field in order to start signature computation with next frame. */
#define GFXREG_SIG_SOFTWAREKICK_KICK_FSHIFT 0U
#define GFXREG_SIG_SOFTWAREKICK_KICK_FMASK 0x1U
#define GFXREG_SIG_SOFTWAREKICK_SETM_KICK(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_SIG_SOFTWAREKICK_SET_KICK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_SIG_SETM_KICK(s,val) ( (s)->softwarekick = ((s)->softwarekick & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_SIG_SET_KICK(s,val)  ( (s)->softwarekick = (((s)->softwarekick & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_SIG_SOFTWAREKICK_KICK_RESET 0U

/* STATUS: Module status. */
#define GFXREG_SIG_STATUS 0x00000134U
/* STSSIGERROR: Error status bits for all evaluation windows (bit index = window index). */
#define GFXREG_SIG_STATUS_STSSIGERROR_FSHIFT 0U
#define GFXREG_SIG_STATUS_STSSIGERROR_FMASK 0xffU
#define GFXREG_SIG_STATUS_GET_STSSIGERROR(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_SIG_GET_STSSIGERROR(s) ((((s)->status) ) & 0xffUL)
#define GFXREG_SIG_STATUS_STSSIGERROR_RESET 0U

/* STSSIGVALID: Measured signature values are valid. */
#define GFXREG_SIG_STATUS_STSSIGVALID_FSHIFT 16U
#define GFXREG_SIG_STATUS_STSSIGVALID_FMASK 0x1U
#define GFXREG_SIG_STATUS_GET_STSSIGVALID(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_SIG_GET_STSSIGVALID(s) ((((s)->status) >> 16U) & 0x1UL)
#define GFXREG_SIG_STATUS_STSSIGVALID_RESET 0U

/* STSSIGIDLE: StsSigIdle = 1: Signature is in Idle state. */
#define GFXREG_SIG_STATUS_STSSIGIDLE_FSHIFT 20U
#define GFXREG_SIG_STATUS_STSSIGIDLE_FMASK 0x1U
#define GFXREG_SIG_STATUS_GET_STSSIGIDLE(val) (((CYGFX_U32)(val) >> 20U) & 0x1UL)
#define GFXREG_SIG_GET_STSSIGIDLE(s) ((((s)->status) >> 20U) & 0x1UL)
#define GFXREG_SIG_STATUS_STSSIGIDLE_RESET 1U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_SIG_REGISTER_H */

