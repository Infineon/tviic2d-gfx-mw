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
 * \file        gfxreg_disengcfg_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   disengcfg
 *              Source:   disengcfg.component.xml
 *              Template: component_h.tpl
 * \brief      Iris disengcfg register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_DISENGCFG_REGISTER_H
#define GFXREG_DISENGCFG_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* disengcfg registers */
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


/* CTL: Display engine control register. */
#define GFXREG_DISENGCFG_CTL 0x00000000U
/* DSPCLKDIVIDE: Controls generation of display clock signals for display stream. */
#define GFXREG_DISENGCFG_CTL_DSPCLKDIVIDE_FSHIFT 0U
#define GFXREG_DISENGCFG_CTL_DSPCLKDIVIDE_FMASK 0x1U
#define GFXREG_DISENGCFG_CTL_SETM_DSPCLKDIVIDE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_DISENGCFG_CTL_SET_DSPCLKDIVIDE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DISENGCFG_CTL_GET_DSPCLKDIVIDE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_DISENGCFG_SETM_DSPCLKDIVIDE(s,val) ( (s)->ctl = ((s)->ctl & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_DISENGCFG_SET_DSPCLKDIVIDE(s,val)  ( (s)->ctl = (((s)->ctl & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DISENGCFG_GET_DSPCLKDIVIDE(s) ((((s)->ctl) ) & 0x1UL)
#define GFXREG_DISENGCFG_CTL_DSPCLKDIVIDE_DIV1 0x0U /* External display clock signal has pixel clock frequency. */
#define GFXREG_DISENGCFG_CTL_DSPCLKDIVIDE_DIV2 0x1U /* External display clock signal has twice the pixel clock frequency. */
#define GFXREG_DISENGCFG_CTL_DSPCLKDIVIDE_RESET 1U

/* POLARITYCTRL: Polarity control for TCon input and corresponding top-level output (TCon by-pass port). */
#define GFXREG_DISENGCFG_POLARITYCTRL 0x00000004U
/* POLHS: Polarity of hsync signal. */
#define GFXREG_DISENGCFG_POLARITYCTRL_POLHS_FSHIFT 0U
#define GFXREG_DISENGCFG_POLARITYCTRL_POLHS_FMASK 0x1U
#define GFXREG_DISENGCFG_POLARITYCTRL_SETM_POLHS(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_DISENGCFG_POLARITYCTRL_SET_POLHS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DISENGCFG_POLARITYCTRL_GET_POLHS(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_DISENGCFG_SETM_POLHS(s,val) ( (s)->polarityctrl = ((s)->polarityctrl & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_DISENGCFG_SET_POLHS(s,val)  ( (s)->polarityctrl = (((s)->polarityctrl & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DISENGCFG_GET_POLHS(s) ((((s)->polarityctrl) ) & 0x1UL)
#define GFXREG_DISENGCFG_POLARITYCTRL_POLHS_LOW 0x0U /* Low active */
#define GFXREG_DISENGCFG_POLARITYCTRL_POLHS_HIGH 0x1U /* High active */
#define GFXREG_DISENGCFG_POLARITYCTRL_POLHS_RESET 0U

/* POLVS: Polarity of vsync signal. */
#define GFXREG_DISENGCFG_POLARITYCTRL_POLVS_FSHIFT 1U
#define GFXREG_DISENGCFG_POLARITYCTRL_POLVS_FMASK 0x1U
#define GFXREG_DISENGCFG_POLARITYCTRL_SETM_POLVS(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_DISENGCFG_POLARITYCTRL_SET_POLVS(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DISENGCFG_POLARITYCTRL_GET_POLVS(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_DISENGCFG_SETM_POLVS(s,val) ( (s)->polarityctrl = ((s)->polarityctrl & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_DISENGCFG_SET_POLVS(s,val)  ( (s)->polarityctrl = (((s)->polarityctrl & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DISENGCFG_GET_POLVS(s) ((((s)->polarityctrl) >> 1U) & 0x1UL)
#define GFXREG_DISENGCFG_POLARITYCTRL_POLVS_LOW 0x0U /* Low active */
#define GFXREG_DISENGCFG_POLARITYCTRL_POLVS_HIGH 0x1U /* High active */
#define GFXREG_DISENGCFG_POLARITYCTRL_POLVS_RESET 0U

/* POLEN: Polarity of Data_Enable signal. */
#define GFXREG_DISENGCFG_POLARITYCTRL_POLEN_FSHIFT 2U
#define GFXREG_DISENGCFG_POLARITYCTRL_POLEN_FMASK 0x1U
#define GFXREG_DISENGCFG_POLARITYCTRL_SETM_POLEN(val) (((CYGFX_U32)(val) & 0x1UL) << 2U)
#define GFXREG_DISENGCFG_POLARITYCTRL_SET_POLEN(val) (((CYGFX_U32)(val) << 2U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DISENGCFG_POLARITYCTRL_GET_POLEN(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_DISENGCFG_SETM_POLEN(s,val) ( (s)->polarityctrl = ((s)->polarityctrl & ~0x4UL) | (((CYGFX_U32)(val) << 2U) & 0x4UL) )
#define GFXREG_DISENGCFG_SET_POLEN(s,val)  ( (s)->polarityctrl = (((s)->polarityctrl & ~0x4UL) | ((CYGFX_U32)(val) << 2U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DISENGCFG_GET_POLEN(s) ((((s)->polarityctrl) >> 2U) & 0x1UL)
#define GFXREG_DISENGCFG_POLARITYCTRL_POLEN_LOW 0x0U /* Low active */
#define GFXREG_DISENGCFG_POLARITYCTRL_POLEN_HIGH 0x1U /* High active */
#define GFXREG_DISENGCFG_POLARITYCTRL_POLEN_RESET 1U

/* PIXINV: Inversion of RGB data. */
#define GFXREG_DISENGCFG_POLARITYCTRL_PIXINV_FSHIFT 3U
#define GFXREG_DISENGCFG_POLARITYCTRL_PIXINV_FMASK 0x1U
#define GFXREG_DISENGCFG_POLARITYCTRL_SETM_PIXINV(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_DISENGCFG_POLARITYCTRL_SET_PIXINV(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DISENGCFG_POLARITYCTRL_GET_PIXINV(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_DISENGCFG_SETM_PIXINV(s,val) ( (s)->polarityctrl = ((s)->polarityctrl & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_DISENGCFG_SET_PIXINV(s,val)  ( (s)->polarityctrl = (((s)->polarityctrl & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DISENGCFG_GET_PIXINV(s) ((((s)->polarityctrl) >> 3U) & 0x1UL)
#define GFXREG_DISENGCFG_POLARITYCTRL_PIXINV_NONINV 0x0U /* No inversion of pixel data */
#define GFXREG_DISENGCFG_POLARITYCTRL_PIXINV_INV 0x1U /* Pixel data inverted (1. complement) */
#define GFXREG_DISENGCFG_POLARITYCTRL_PIXINV_RESET 0U



/* SIGSELECT: Tap selection for Signature. */
#define GFXREG_DISENGCFG_SIGSELECT 0x00000010U
/* SIG_SELECT: Selects a source for Sig unit. */
#define GFXREG_DISENGCFG_SIGSELECT_SIG_SELECT_FSHIFT 0U
#define GFXREG_DISENGCFG_SIGSELECT_SIG_SELECT_FMASK 0x3U
#define GFXREG_DISENGCFG_SIGSELECT_SETM_SIG_SELECT(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_DISENGCFG_SIGSELECT_SET_SIG_SELECT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_DISENGCFG_SIGSELECT_GET_SIG_SELECT(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_DISENGCFG_SETM_SIG_SELECT(s,val) ( (s)->sigselect = ((s)->sigselect & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_DISENGCFG_SET_SIG_SELECT(s,val)  ( (s)->sigselect = (((s)->sigselect & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_DISENGCFG_GET_SIG_SELECT(s) ((((s)->sigselect) ) & 0x3UL)
#define GFXREG_DISENGCFG_SIGSELECT_SIG_SELECT_NONE 0x0U /* No source. */
#define GFXREG_DISENGCFG_SIGSELECT_SIG_SELECT_FRAMEGEN 0x1U /* Source is FrameGen output. */
#define GFXREG_DISENGCFG_SIGSELECT_SIG_SELECT_GAMMACOR 0x2U /* Source is GammaCor output. */
#define GFXREG_DISENGCFG_SIGSELECT_SIG_SELECT_DITHER 0x3U /* Source is Dither output. */
#define GFXREG_DISENGCFG_SIGSELECT_SIG_SELECT_RESET 0x0U

/* HISTOGRAMSELECT: Tap selection for Histogram. */
#define GFXREG_DISENGCFG_HISTOGRAMSELECT 0x00000014U
/* HISTOGRAM_SELECT: Selects a source for Histogram unit. */
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_HISTOGRAM_SELECT_FSHIFT 0U
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_HISTOGRAM_SELECT_FMASK 0x3U
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_SETM_HISTOGRAM_SELECT(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_SET_HISTOGRAM_SELECT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_GET_HISTOGRAM_SELECT(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_DISENGCFG_SETM_HISTOGRAM_SELECT(s,val) ( (s)->histogramselect = ((s)->histogramselect & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_DISENGCFG_SET_HISTOGRAM_SELECT(s,val)  ( (s)->histogramselect = (((s)->histogramselect & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_DISENGCFG_GET_HISTOGRAM_SELECT(s) ((((s)->histogramselect) ) & 0x3UL)
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_HISTOGRAM_SELECT_NONE 0x0U /* No source. */
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_HISTOGRAM_SELECT_FRAMEGEN 0x1U /* Source is FrameGen output. */
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_HISTOGRAM_SELECT_GAMMACOR 0x2U /* Source is GammaCor output. */
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_HISTOGRAM_SELECT_DITHER 0x3U /* Source is Dither output. */
#define GFXREG_DISENGCFG_HISTOGRAMSELECT_HISTOGRAM_SELECT_RESET 0x0U



/* DUMPSELECT: Tap selection for Frame Dump. */
#define GFXREG_DISENGCFG_DUMPSELECT 0x00000020U
/* DUMP_SELECT: Selects a source for FrameDump unit. */
#define GFXREG_DISENGCFG_DUMPSELECT_DUMP_SELECT_FSHIFT 8U
#define GFXREG_DISENGCFG_DUMPSELECT_DUMP_SELECT_FMASK 0x3U
#define GFXREG_DISENGCFG_DUMPSELECT_SETM_DUMP_SELECT(val) (((CYGFX_U32)(val) & 0x3UL) << 8U)
#define GFXREG_DISENGCFG_DUMPSELECT_SET_DUMP_SELECT(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_DISENGCFG_DUMPSELECT_GET_DUMP_SELECT(val) (((CYGFX_U32)(val) >> 8U) & 0x3UL)
#define GFXREG_DISENGCFG_SETM_DUMP_SELECT(s,val) ( (s)->dumpselect = ((s)->dumpselect & ~0x300UL) | (((CYGFX_U32)(val) << 8U) & 0x300UL) )
#define GFXREG_DISENGCFG_SET_DUMP_SELECT(s,val)  ( (s)->dumpselect = (((s)->dumpselect & ~0x300UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_DISENGCFG_GET_DUMP_SELECT(s) ((((s)->dumpselect) >> 8U) & 0x3UL)
#define GFXREG_DISENGCFG_DUMPSELECT_DUMP_SELECT_NONE 0x0U /* No source. */
#define GFXREG_DISENGCFG_DUMPSELECT_DUMP_SELECT_FRAMEGEN 0x1U /* Source is FrameGen output. */
#define GFXREG_DISENGCFG_DUMPSELECT_DUMP_SELECT_GAMMACOR 0x2U /* Source is GammaCor output. */
#define GFXREG_DISENGCFG_DUMPSELECT_DUMP_SELECT_DITHER 0x3U /* Source is Dither output. */
#define GFXREG_DISENGCFG_DUMPSELECT_DUMP_SELECT_RESET 0x0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_DISENGCFG_REGISTER_H */

