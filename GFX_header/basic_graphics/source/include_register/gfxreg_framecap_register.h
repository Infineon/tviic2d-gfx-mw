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
 * \version     2.0
 * \date        Tue May 26 11:58:40 2020
 * \file        gfxreg_framecap_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   framecap
 *              Source:   framecap.component.xml
 *              Template: component_h.tpl
 * \brief      Iris framecap register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_FRAMECAP_REGISTER_H
#define GFXREG_FRAMECAP_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* framecap registers */
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


/* CAPTUREMODE: Capture mode configuration. FrameCap input mode configuration. */
#define GFXREG_FRAMECAP_CAPTUREMODE 0x00000000U
/* CAPTUREMODE: Selects a capture mode. Do not change during operation of FrameCap unit. */
#define GFXREG_FRAMECAP_CAPTUREMODE_CAPTUREMODE_FSHIFT 0U
#define GFXREG_FRAMECAP_CAPTUREMODE_CAPTUREMODE_FMASK 0x3U
#define GFXREG_FRAMECAP_CAPTUREMODE_SETM_CAPTUREMODE(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_FRAMECAP_CAPTUREMODE_SET_CAPTUREMODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_CAPTUREMODE_GET_CAPTUREMODE(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_FRAMECAP_SETM_CAPTUREMODE(s,val) ( (s)->capturemode = ((s)->capturemode & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_FRAMECAP_SET_CAPTUREMODE(s,val)  ( (s)->capturemode = (((s)->capturemode & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_CAPTUREMODE(s) ((((s)->capturemode) ) & 0x3UL)
#define GFXREG_FRAMECAP_CAPTUREMODE_CAPTUREMODE_ENHSVS_32BIT 0x0U /* Capture of 32-bit parallel or MIPI_CSI2 pixel input data with dedicated frame synchronization signals */
#define GFXREG_FRAMECAP_CAPTUREMODE_CAPTUREMODE_ITU656_10BIT 0x1U /* Capture of ITU656 10 bit data */
#define GFXREG_FRAMECAP_CAPTUREMODE_CAPTUREMODE_ITU656_8BIT 0x2U /* Capture of ITU656 8 bit data */
#define GFXREG_FRAMECAP_CAPTUREMODE_CAPTUREMODE_RESET 0U

/* CTR: FrameCap control register for starting the unit */
#define GFXREG_FRAMECAP_CTR 0x00000004U
/* CEN: CaptureEnable=1, enable bit for FrameCap unit. Capture starts with next frame sync signal. */
#define GFXREG_FRAMECAP_CTR_CEN_FSHIFT 0U
#define GFXREG_FRAMECAP_CTR_CEN_FMASK 0x1U
#define GFXREG_FRAMECAP_CTR_SETM_CEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMECAP_CTR_SET_CEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_CTR_GET_CEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_CEN(s,val) ( (s)->ctr = ((s)->ctr & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMECAP_SET_CEN(s,val)  ( (s)->ctr = (((s)->ctr & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_CEN(s) ((((s)->ctr) ) & 0x1UL)
#define GFXREG_FRAMECAP_CTR_CEN_RESET 0U

/* SPR: FrameCap sync signal polarity configuration. */
#define GFXREG_FRAMECAP_SPR 0x00000008U
/* POLEN: Change polarity of video signal de. */
#define GFXREG_FRAMECAP_SPR_POLEN_FSHIFT 0U
#define GFXREG_FRAMECAP_SPR_POLEN_FMASK 0x1U
#define GFXREG_FRAMECAP_SPR_SETM_POLEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMECAP_SPR_SET_POLEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_SPR_GET_POLEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_POLEN(s,val) ( (s)->spr = ((s)->spr & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMECAP_SET_POLEN(s,val)  ( (s)->spr = (((s)->spr & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_POLEN(s) ((((s)->spr) ) & 0x1UL)
#define GFXREG_FRAMECAP_SPR_POLEN_HIGHACT 0x0U /* Signal is active high (default). */
#define GFXREG_FRAMECAP_SPR_POLEN_LOWACT 0x1U /* Signal is active low. */
#define GFXREG_FRAMECAP_SPR_POLEN_RESET 0U

/* POLHS: Change polarity of video signal hsync. */
#define GFXREG_FRAMECAP_SPR_POLHS_FSHIFT 1U
#define GFXREG_FRAMECAP_SPR_POLHS_FMASK 0x1U
#define GFXREG_FRAMECAP_SPR_SETM_POLHS(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_FRAMECAP_SPR_SET_POLHS(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_SPR_GET_POLHS(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_POLHS(s,val) ( (s)->spr = ((s)->spr & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_FRAMECAP_SET_POLHS(s,val)  ( (s)->spr = (((s)->spr & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_POLHS(s) ((((s)->spr) >> 1U) & 0x1UL)
#define GFXREG_FRAMECAP_SPR_POLHS_LOWACT 0x0U /* Signal is active low (default). */
#define GFXREG_FRAMECAP_SPR_POLHS_HIGHACT 0x1U /* Signal is active high. */
#define GFXREG_FRAMECAP_SPR_POLHS_RESET 0U

/* POLVS: Change polarity of video signal vsync. */
#define GFXREG_FRAMECAP_SPR_POLVS_FSHIFT 2U
#define GFXREG_FRAMECAP_SPR_POLVS_FMASK 0x1U
#define GFXREG_FRAMECAP_SPR_SETM_POLVS(val) (((CYGFX_U32)(val) & 0x1UL) << 2U)
#define GFXREG_FRAMECAP_SPR_SET_POLVS(val) (((CYGFX_U32)(val) << 2U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_SPR_GET_POLVS(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_POLVS(s,val) ( (s)->spr = ((s)->spr & ~0x4UL) | (((CYGFX_U32)(val) << 2U) & 0x4UL) )
#define GFXREG_FRAMECAP_SET_POLVS(s,val)  ( (s)->spr = (((s)->spr & ~0x4UL) | ((CYGFX_U32)(val) << 2U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_POLVS(s) ((((s)->spr) >> 2U) & 0x1UL)
#define GFXREG_FRAMECAP_SPR_POLVS_LOWACT 0x0U /* Signal is active low (default). */
#define GFXREG_FRAMECAP_SPR_POLVS_HIGHACT 0x1U /* Signal is active high. */
#define GFXREG_FRAMECAP_SPR_POLVS_RESET 0U

/* MDR: FrameCap control register for starting the mode detection */
#define GFXREG_FRAMECAP_MDR 0x0000000cU
/* MDR_EN: Mdr_en=1, enable bit for FrameCap mode detection and pixel frame rate measurement for the captured frame. Make sure that MdSts0.MdrCmrDone is 1 before starting it again. */
#define GFXREG_FRAMECAP_MDR_MDR_EN_FSHIFT 0U
#define GFXREG_FRAMECAP_MDR_MDR_EN_FMASK 0x1U
#define GFXREG_FRAMECAP_MDR_SETM_MDR_EN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMECAP_MDR_SET_MDR_EN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_MDR_GET_MDR_EN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_MDR_EN(s,val) ( (s)->mdr = ((s)->mdr & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMECAP_SET_MDR_EN(s,val)  ( (s)->mdr = (((s)->mdr & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_MDR_EN(s) ((((s)->mdr) ) & 0x1UL)
#define GFXREG_FRAMECAP_MDR_MDR_EN_RESET 0U

/* FRAMET_OFFSET: Frame size tolerance which will not generate a mode detection size mismatch. Set an offset for frame time duration. */
#define GFXREG_FRAMECAP_MDR_FRAMET_OFFSET_FSHIFT 1U
#define GFXREG_FRAMECAP_MDR_FRAMET_OFFSET_FMASK 0x7fffffffU
#define GFXREG_FRAMECAP_MDR_SETM_FRAMET_OFFSET(val) (((CYGFX_U32)(val) & 0x7fffffffUL) << 1U)
#define GFXREG_FRAMECAP_MDR_SET_FRAMET_OFFSET(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_MDR_GET_FRAMET_OFFSET(val) (((CYGFX_U32)(val) >> 1U) & 0x7fffffffUL)
#define GFXREG_FRAMECAP_SETM_FRAMET_OFFSET(s,val) ( (s)->mdr = ((s)->mdr & ~0xfffffffeUL) | (((CYGFX_U32)(val) << 1U) & 0xfffffffeUL) )
#define GFXREG_FRAMECAP_SET_FRAMET_OFFSET(s,val)  ( (s)->mdr = (((s)->mdr & ~0xfffffffeUL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffffffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_FRAMET_OFFSET(s) ((((s)->mdr) >> 1U) & 0x7fffffffUL)
#define GFXREG_FRAMECAP_MDR_FRAMET_OFFSET_RESET 0U

/* FDR: Frame dimension (progressive frame and field 0). */
#define GFXREG_FRAMECAP_FDR 0x00000010U
/* WIDTH: Expected frame width of video frame (value is Width - 1). It could be configured after mode detection. */
#define GFXREG_FRAMECAP_FDR_WIDTH_FSHIFT 0U
#define GFXREG_FRAMECAP_FDR_WIDTH_FMASK 0x3fffU
#define GFXREG_FRAMECAP_FDR_SETM_WIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMECAP_FDR_SET_WIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_FDR_GET_WIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMECAP_SETM_WIDTH(s,val) ( (s)->fdr = ((s)->fdr & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMECAP_SET_WIDTH(s,val)  ( (s)->fdr = (((s)->fdr & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_WIDTH(s) ((((s)->fdr) ) & 0x3fffUL)
#define GFXREG_FRAMECAP_FDR_WIDTH_RESET 319U

/* HEIGHT: Expected frame height of video frames and fields with id 0 (value is Height - 1). It could be configured after mode detection. */
#define GFXREG_FRAMECAP_FDR_HEIGHT_FSHIFT 16U
#define GFXREG_FRAMECAP_FDR_HEIGHT_FMASK 0x3fffU
#define GFXREG_FRAMECAP_FDR_SETM_HEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMECAP_FDR_SET_HEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_FDR_GET_HEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMECAP_SETM_HEIGHT(s,val) ( (s)->fdr = ((s)->fdr & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMECAP_SET_HEIGHT(s,val)  ( (s)->fdr = (((s)->fdr & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_HEIGHT(s) ((((s)->fdr) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMECAP_FDR_HEIGHT_RESET 239U

/* FDR1: Frame dimension (field 1). */
#define GFXREG_FRAMECAP_FDR1 0x00000014U
/* HEIGHT1: Expected frame height of video fields with id 1 (value is Height - 1). It could be configured after mode detection. */
#define GFXREG_FRAMECAP_FDR1_HEIGHT1_FSHIFT 16U
#define GFXREG_FRAMECAP_FDR1_HEIGHT1_FMASK 0x3fffU
#define GFXREG_FRAMECAP_FDR1_SETM_HEIGHT1(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMECAP_FDR1_SET_HEIGHT1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_FDR1_GET_HEIGHT1(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMECAP_SETM_HEIGHT1(s,val) ( (s)->fdr1 = ((s)->fdr1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMECAP_SET_HEIGHT1(s,val)  ( (s)->fdr1 = (((s)->fdr1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_HEIGHT1(s) ((((s)->fdr1) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMECAP_FDR1_HEIGHT1_RESET 239U

/* KDR: FrameCap kick delay configuration register */
#define GFXREG_FRAMECAP_KDR 0x00000018U
/* KICKDEL: Delay after receiving last active pixel in frame (in video clock cycles) until the kick pulse is generated. */
#define GFXREG_FRAMECAP_KDR_KICKDEL_FSHIFT 0U
#define GFXREG_FRAMECAP_KDR_KICKDEL_FMASK 0xfffffffU
#define GFXREG_FRAMECAP_KDR_SETM_KICKDEL(val) (((CYGFX_U32)(val) & 0xfffffffUL) )
#define GFXREG_FRAMECAP_KDR_SET_KICKDEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffffffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_KDR_GET_KICKDEL(val) (((CYGFX_U32)(val) ) & 0xfffffffUL)
#define GFXREG_FRAMECAP_SETM_KICKDEL(s,val) ( (s)->kdr = ((s)->kdr & ~0xfffffffUL) | (((CYGFX_U32)(val) ) & 0xfffffffUL) )
#define GFXREG_FRAMECAP_SET_KICKDEL(s,val)  ( (s)->kdr = (((s)->kdr & ~0xfffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffffffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_KICKDEL(s) ((((s)->kdr) ) & 0xfffffffUL)
#define GFXREG_FRAMECAP_KDR_KICKDEL_RESET 0U

/* SCR: FrameCap Sync frame number configuration register */
#define GFXREG_FRAMECAP_SCR 0x0000001cU
/* FUS: Number of consecutive frames captured until synchronization state is reached (value of 0 is not allowed). */
#define GFXREG_FRAMECAP_SCR_FUS_FSHIFT 0U
#define GFXREG_FRAMECAP_SCR_FUS_FMASK 0xfU
#define GFXREG_FRAMECAP_SCR_SETM_FUS(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FRAMECAP_SCR_SET_FUS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_SCR_GET_FUS(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FRAMECAP_SETM_FUS(s,val) ( (s)->scr = ((s)->scr & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FRAMECAP_SET_FUS(s,val)  ( (s)->scr = (((s)->scr & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_FUS(s) ((((s)->scr) ) & 0xfUL)
#define GFXREG_FRAMECAP_SCR_FUS_RESET 2U

/* CSVR: Framecap control register for capture clock supervision  */
#define GFXREG_FRAMECAP_CSVR 0x00000020U
/* CSVENABLE: CsvEnable=1, start a capture clock supervision.  */
#define GFXREG_FRAMECAP_CSVR_CSVENABLE_FSHIFT 0U
#define GFXREG_FRAMECAP_CSVR_CSVENABLE_FMASK 0x1U
#define GFXREG_FRAMECAP_CSVR_SETM_CSVENABLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMECAP_CSVR_SET_CSVENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_CSVR_GET_CSVENABLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_CSVENABLE(s,val) ( (s)->csvr = ((s)->csvr & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMECAP_SET_CSVENABLE(s,val)  ( (s)->csvr = (((s)->csvr & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_CSVENABLE(s) ((((s)->csvr) ) & 0x1UL)
#define GFXREG_FRAMECAP_CSVR_CSVENABLE_RESET 0U

/* CSVTIMEOUT: setting a time limitation for waiting the recovery of capture clock. The value should be bigger than 11 or equal to 11, otherwise it reports fake clk_cap loss.  */
#define GFXREG_FRAMECAP_CSVR_CSVTIMEOUT_FSHIFT 1U
#define GFXREG_FRAMECAP_CSVR_CSVTIMEOUT_FMASK 0x3ffU
#define GFXREG_FRAMECAP_CSVR_SETM_CSVTIMEOUT(val) (((CYGFX_U32)(val) & 0x3ffUL) << 1U)
#define GFXREG_FRAMECAP_CSVR_SET_CSVTIMEOUT(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_CSVR_GET_CSVTIMEOUT(val) (((CYGFX_U32)(val) >> 1U) & 0x3ffUL)
#define GFXREG_FRAMECAP_SETM_CSVTIMEOUT(s,val) ( (s)->csvr = ((s)->csvr & ~0x7feUL) | (((CYGFX_U32)(val) << 1U) & 0x7feUL) )
#define GFXREG_FRAMECAP_SET_CSVTIMEOUT(s,val)  ( (s)->csvr = (((s)->csvr & ~0x7feUL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_CSVTIMEOUT(s) ((((s)->csvr) >> 1U) & 0x3ffUL)
#define GFXREG_FRAMECAP_CSVR_CSVTIMEOUT_RESET 0x11U

/* STSCLR: FrameCap status clear register. Clears the status bits of Sts register, Mdr_SizeChange and Csv_lost field.
   This register can only be written if the axi clock is running. */
#define GFXREG_FRAMECAP_STSCLR 0x00000024U
/* STATUSCLEAR: Clears status bits of Sts register. */
#define GFXREG_FRAMECAP_STSCLR_STATUSCLEAR_FSHIFT 0U
#define GFXREG_FRAMECAP_STSCLR_STATUSCLEAR_FMASK 0x1U
#define GFXREG_FRAMECAP_STSCLR_SETM_STATUSCLEAR(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMECAP_STSCLR_SET_STATUSCLEAR(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_SETM_STATUSCLEAR(s,val) ( (s)->stsclr = ((s)->stsclr & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMECAP_SET_STATUSCLEAR(s,val)  ( (s)->stsclr = (((s)->stsclr & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_STSCLR_STATUSCLEAR_RESET 0U

/* STS: FrameCap status register. Current status of the FrameCap module.
   This register can only be read if the axi clock is running. */
#define GFXREG_FRAMECAP_STS 0x00000028U
/* FIFOFULL: Write Access to the full coupling FIFO (bit locked when 1, cleared by writing StatusClear field). */
#define GFXREG_FRAMECAP_STS_FIFOFULL_FSHIFT 0U
#define GFXREG_FRAMECAP_STS_FIFOFULL_FMASK 0x1U
#define GFXREG_FRAMECAP_STS_SETM_FIFOFULL(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMECAP_STS_SET_FIFOFULL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_STS_GET_FIFOFULL(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_FIFOFULL(s,val) ( (s)->sts = ((s)->sts & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMECAP_SET_FIFOFULL(s,val)  ( (s)->sts = (((s)->sts & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_FIFOFULL(s) ((((s)->sts) ) & 0x1UL)
#define GFXREG_FRAMECAP_STS_FIFOFULL_RESET 0U

/* VSLATE: VSYNC is detected too late. The received frame is too big (bit locked when 1, cleared by writing StatusClear field). */
#define GFXREG_FRAMECAP_STS_VSLATE_FSHIFT 1U
#define GFXREG_FRAMECAP_STS_VSLATE_FMASK 0x1U
#define GFXREG_FRAMECAP_STS_SETM_VSLATE(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_FRAMECAP_STS_SET_VSLATE(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_STS_GET_VSLATE(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_VSLATE(s,val) ( (s)->sts = ((s)->sts & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_FRAMECAP_SET_VSLATE(s,val)  ( (s)->sts = (((s)->sts & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_VSLATE(s) ((((s)->sts) >> 1U) & 0x1UL)
#define GFXREG_FRAMECAP_STS_VSLATE_RESET 0U

/* VSEARLY: VSYNC is detected too early. The received frame is too small (bit locked when 1, cleared by writing StatusClear field). */
#define GFXREG_FRAMECAP_STS_VSEARLY_FSHIFT 2U
#define GFXREG_FRAMECAP_STS_VSEARLY_FMASK 0x1U
#define GFXREG_FRAMECAP_STS_SETM_VSEARLY(val) (((CYGFX_U32)(val) & 0x1UL) << 2U)
#define GFXREG_FRAMECAP_STS_SET_VSEARLY(val) (((CYGFX_U32)(val) << 2U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_STS_GET_VSEARLY(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_VSEARLY(s,val) ( (s)->sts = ((s)->sts & ~0x4UL) | (((CYGFX_U32)(val) << 2U) & 0x4UL) )
#define GFXREG_FRAMECAP_SET_VSEARLY(s,val)  ( (s)->sts = (((s)->sts & ~0x4UL) | ((CYGFX_U32)(val) << 2U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_VSEARLY(s) ((((s)->sts) >> 2U) & 0x1UL)
#define GFXREG_FRAMECAP_STS_VSEARLY_RESET 0U

/* CSV_LOST: Csv_Lost=1, capture clock is not available. Csv_Lost=0, capture clock is resumed.(bit locked when 1, cleared by writing StatusClear field). */
#define GFXREG_FRAMECAP_STS_CSV_LOST_FSHIFT 3U
#define GFXREG_FRAMECAP_STS_CSV_LOST_FMASK 0x1U
#define GFXREG_FRAMECAP_STS_SETM_CSV_LOST(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FRAMECAP_STS_SET_CSV_LOST(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_STS_GET_CSV_LOST(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_CSV_LOST(s,val) ( (s)->sts = ((s)->sts & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FRAMECAP_SET_CSV_LOST(s,val)  ( (s)->sts = (((s)->sts & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_CSV_LOST(s) ((((s)->sts) >> 3U) & 0x1UL)
#define GFXREG_FRAMECAP_STS_CSV_LOST_RESET 0U

/* MDR_SIZECHANGE: Mdr_SizeChange=1, frame size of the video frame detected is not consistent. */
#define GFXREG_FRAMECAP_STS_MDR_SIZECHANGE_FSHIFT 4U
#define GFXREG_FRAMECAP_STS_MDR_SIZECHANGE_FMASK 0x1U
#define GFXREG_FRAMECAP_STS_SETM_MDR_SIZECHANGE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FRAMECAP_STS_SET_MDR_SIZECHANGE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_STS_GET_MDR_SIZECHANGE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_MDR_SIZECHANGE(s,val) ( (s)->sts = ((s)->sts & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FRAMECAP_SET_MDR_SIZECHANGE(s,val)  ( (s)->sts = (((s)->sts & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_MDR_SIZECHANGE(s) ((((s)->sts) >> 4U) & 0x1UL)
#define GFXREG_FRAMECAP_STS_MDR_SIZECHANGE_RESET 0U

/* MDRCMRDONE: MdrCmrDone=1 means that the mode detection is completed and pixel clock measurement is done. */
#define GFXREG_FRAMECAP_STS_MDRCMRDONE_FSHIFT 5U
#define GFXREG_FRAMECAP_STS_MDRCMRDONE_FMASK 0x1U
#define GFXREG_FRAMECAP_STS_SETM_MDRCMRDONE(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FRAMECAP_STS_SET_MDRCMRDONE(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_STS_GET_MDRCMRDONE(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_MDRCMRDONE(s,val) ( (s)->sts = ((s)->sts & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FRAMECAP_SET_MDRCMRDONE(s,val)  ( (s)->sts = (((s)->sts & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_MDRCMRDONE(s) ((((s)->sts) >> 5U) & 0x1UL)
#define GFXREG_FRAMECAP_STS_MDRCMRDONE_RESET 0U

/* SYNCSTAT: Indicates the current state of synchronization (0 = out of sync, 1 = in sync). */
#define GFXREG_FRAMECAP_STS_SYNCSTAT_FSHIFT 8U
#define GFXREG_FRAMECAP_STS_SYNCSTAT_FMASK 0x1U
#define GFXREG_FRAMECAP_STS_SETM_SYNCSTAT(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FRAMECAP_STS_SET_SYNCSTAT(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_STS_GET_SYNCSTAT(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_SYNCSTAT(s,val) ( (s)->sts = ((s)->sts & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FRAMECAP_SET_SYNCSTAT(s,val)  ( (s)->sts = (((s)->sts & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_SYNCSTAT(s) ((((s)->sts) >> 8U) & 0x1UL)
#define GFXREG_FRAMECAP_STS_SYNCSTAT_RESET 0U

/* MDSTS0: FrameCap mode detection status register for the active part of the video frames.(bit locked when MdrCmrDone=1). */
#define GFXREG_FRAMECAP_MDSTS0 0x0000002cU
/* ACTIVEWIDTH: Frame width of active part of the video frame detected by the mode detection. The status can be read when MdrCmrDone=1. */
#define GFXREG_FRAMECAP_MDSTS0_ACTIVEWIDTH_FSHIFT 0U
#define GFXREG_FRAMECAP_MDSTS0_ACTIVEWIDTH_FMASK 0x7fffU
#define GFXREG_FRAMECAP_MDSTS0_SETM_ACTIVEWIDTH(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FRAMECAP_MDSTS0_SET_ACTIVEWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_MDSTS0_GET_ACTIVEWIDTH(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FRAMECAP_SETM_ACTIVEWIDTH(s,val) ( (s)->mdsts0 = ((s)->mdsts0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FRAMECAP_SET_ACTIVEWIDTH(s,val)  ( (s)->mdsts0 = (((s)->mdsts0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_ACTIVEWIDTH(s) ((((s)->mdsts0) ) & 0x7fffUL)
#define GFXREG_FRAMECAP_MDSTS0_ACTIVEWIDTH_RESET 0U

/* ACTIVEHEIGHT: Frame height of active part of the video frame detected by the mode detection. The status can be read when MdrCmrDone=1. */
#define GFXREG_FRAMECAP_MDSTS0_ACTIVEHEIGHT_FSHIFT 16U
#define GFXREG_FRAMECAP_MDSTS0_ACTIVEHEIGHT_FMASK 0x7fffU
#define GFXREG_FRAMECAP_MDSTS0_SETM_ACTIVEHEIGHT(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FRAMECAP_MDSTS0_SET_ACTIVEHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_MDSTS0_GET_ACTIVEHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FRAMECAP_SETM_ACTIVEHEIGHT(s,val) ( (s)->mdsts0 = ((s)->mdsts0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FRAMECAP_SET_ACTIVEHEIGHT(s,val)  ( (s)->mdsts0 = (((s)->mdsts0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_ACTIVEHEIGHT(s) ((((s)->mdsts0) >> 16U) & 0x7fffUL)
#define GFXREG_FRAMECAP_MDSTS0_ACTIVEHEIGHT_RESET 0U

/* MDSTS1: FrameCap mode detection status register. The current (x,y) position of the capture stream (with respect to the output). */
#define GFXREG_FRAMECAP_MDSTS1 0x00000030U
/* POSITIONX: the current X position of the capture stream. */
#define GFXREG_FRAMECAP_MDSTS1_POSITIONX_FSHIFT 0U
#define GFXREG_FRAMECAP_MDSTS1_POSITIONX_FMASK 0x7fffU
#define GFXREG_FRAMECAP_MDSTS1_SETM_POSITIONX(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FRAMECAP_MDSTS1_SET_POSITIONX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_MDSTS1_GET_POSITIONX(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FRAMECAP_SETM_POSITIONX(s,val) ( (s)->mdsts1 = ((s)->mdsts1 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FRAMECAP_SET_POSITIONX(s,val)  ( (s)->mdsts1 = (((s)->mdsts1 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_POSITIONX(s) ((((s)->mdsts1) ) & 0x7fffUL)
#define GFXREG_FRAMECAP_MDSTS1_POSITIONX_RESET 0U

/* POSITIONY: the current Y position of the capture stream. */
#define GFXREG_FRAMECAP_MDSTS1_POSITIONY_FSHIFT 16U
#define GFXREG_FRAMECAP_MDSTS1_POSITIONY_FMASK 0x7fffU
#define GFXREG_FRAMECAP_MDSTS1_SETM_POSITIONY(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FRAMECAP_MDSTS1_SET_POSITIONY(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_MDSTS1_GET_POSITIONY(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FRAMECAP_SETM_POSITIONY(s,val) ( (s)->mdsts1 = ((s)->mdsts1 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FRAMECAP_SET_POSITIONY(s,val)  ( (s)->mdsts1 = (((s)->mdsts1 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_POSITIONY(s) ((((s)->mdsts1) >> 16U) & 0x7fffUL)
#define GFXREG_FRAMECAP_MDSTS1_POSITIONY_RESET 0U

/* FRCNT: FrameCap frame counter register indicating the corresponding clk_axi cycles. */
#define GFXREG_FRAMECAP_FRCNT 0x00000034U
/* FRCOUNT: Shows frame counts of video input. It is updated every vsync (for debugging purposes only). */
#define GFXREG_FRAMECAP_FRCNT_FRCOUNT_FSHIFT 0U
#define GFXREG_FRAMECAP_FRCNT_FRCOUNT_FMASK 0xffffffffU
#define GFXREG_FRAMECAP_FRCNT_SETM_FRCOUNT(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FRAMECAP_FRCNT_SET_FRCOUNT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_FRCNT_GET_FRCOUNT(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FRAMECAP_SETM_FRCOUNT(s,val) ( (s)->frcnt = ((s)->frcnt & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FRAMECAP_SET_FRCOUNT(s,val)  ( (s)->frcnt = (((s)->frcnt & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_FRCOUNT(s) ((((s)->frcnt) ) & 0xffffffffUL)
#define GFXREG_FRAMECAP_FRCNT_FRCOUNT_RESET 0U

/* FRLINECOUNT: FrameCap line counter register.
   This register can only be read if the axi clock is running. */
#define GFXREG_FRAMECAP_FRLINECOUNT 0x00000038U
/* FRLINECOUNT: Shows current line number of input timing. Incremented with leading edge of hsync signal, set to 0 with leading edge of vsync signal. */
#define GFXREG_FRAMECAP_FRLINECOUNT_FRLINECOUNT_FSHIFT 0U
#define GFXREG_FRAMECAP_FRLINECOUNT_FRLINECOUNT_FMASK 0x3fffU
#define GFXREG_FRAMECAP_FRLINECOUNT_SETM_FRLINECOUNT(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMECAP_FRLINECOUNT_SET_FRLINECOUNT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_FRLINECOUNT_GET_FRLINECOUNT(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMECAP_SETM_FRLINECOUNT(s,val) ( (s)->frlinecount = ((s)->frlinecount & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMECAP_SET_FRLINECOUNT(s,val)  ( (s)->frlinecount = (((s)->frlinecount & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_FRLINECOUNT(s) ((((s)->frlinecount) ) & 0x3fffUL)
#define GFXREG_FRAMECAP_FRLINECOUNT_FRLINECOUNT_RESET (none)U

/* TOTWIDTHT_MSBS: MSBs of CmSts1.TotWidthT. Bit locked when MdrCmrDone=1. */
#define GFXREG_FRAMECAP_FRLINECOUNT_TOTWIDTHT_MSBS_FSHIFT 16U
#define GFXREG_FRAMECAP_FRLINECOUNT_TOTWIDTHT_MSBS_FMASK 0x1fU
#define GFXREG_FRAMECAP_FRLINECOUNT_SETM_TOTWIDTHT_MSBS(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FRAMECAP_FRLINECOUNT_SET_TOTWIDTHT_MSBS(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_FRLINECOUNT_GET_TOTWIDTHT_MSBS(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FRAMECAP_SETM_TOTWIDTHT_MSBS(s,val) ( (s)->frlinecount = ((s)->frlinecount & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FRAMECAP_SET_TOTWIDTHT_MSBS(s,val)  ( (s)->frlinecount = (((s)->frlinecount & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_TOTWIDTHT_MSBS(s) ((((s)->frlinecount) >> 16U) & 0x1fUL)
#define GFXREG_FRAMECAP_FRLINECOUNT_TOTWIDTHT_MSBS_RESET 0U

/* ACTWIDTHT_MSBS: MSBs of CmSts1.ActWidthT.  Bit locked when MdrCmrDone=1. */
#define GFXREG_FRAMECAP_FRLINECOUNT_ACTWIDTHT_MSBS_FSHIFT 24U
#define GFXREG_FRAMECAP_FRLINECOUNT_ACTWIDTHT_MSBS_FMASK 0x3fU
#define GFXREG_FRAMECAP_FRLINECOUNT_SETM_ACTWIDTHT_MSBS(val) (((CYGFX_U32)(val) & 0x3fUL) << 24U)
#define GFXREG_FRAMECAP_FRLINECOUNT_SET_ACTWIDTHT_MSBS(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_FRLINECOUNT_GET_ACTWIDTHT_MSBS(val) (((CYGFX_U32)(val) >> 24U) & 0x3fUL)
#define GFXREG_FRAMECAP_SETM_ACTWIDTHT_MSBS(s,val) ( (s)->frlinecount = ((s)->frlinecount & ~0x3f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3f000000UL) )
#define GFXREG_FRAMECAP_SET_ACTWIDTHT_MSBS(s,val)  ( (s)->frlinecount = (((s)->frlinecount & ~0x3f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_ACTWIDTHT_MSBS(s) ((((s)->frlinecount) >> 24U) & 0x3fUL)
#define GFXREG_FRAMECAP_FRLINECOUNT_ACTWIDTHT_MSBS_RESET 0U

/* CMSTS1: clk_axi cycle number of a frame. (bit locked when MdrCmrDone=1). */
#define GFXREG_FRAMECAP_CMSTS1 0x0000003cU
/* TOTAL_TIME: clk_axi cycle number of a frame starting from vsync to another vsync.  */
#define GFXREG_FRAMECAP_CMSTS1_TOTAL_TIME_FSHIFT 0U
#define GFXREG_FRAMECAP_CMSTS1_TOTAL_TIME_FMASK 0x3fffffffU
#define GFXREG_FRAMECAP_CMSTS1_SETM_TOTAL_TIME(val) (((CYGFX_U32)(val) & 0x3fffffffUL) )
#define GFXREG_FRAMECAP_CMSTS1_SET_TOTAL_TIME(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_CMSTS1_GET_TOTAL_TIME(val) (((CYGFX_U32)(val) ) & 0x3fffffffUL)
#define GFXREG_FRAMECAP_SETM_TOTAL_TIME(s,val) ( (s)->cmsts1 = ((s)->cmsts1 & ~0x3fffffffUL) | (((CYGFX_U32)(val) ) & 0x3fffffffUL) )
#define GFXREG_FRAMECAP_SET_TOTAL_TIME(s,val)  ( (s)->cmsts1 = (((s)->cmsts1 & ~0x3fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_TOTAL_TIME(s) ((((s)->cmsts1) ) & 0x3fffffffUL)
#define GFXREG_FRAMECAP_CMSTS1_TOTAL_TIME_RESET 0U

/* CMSTS2: clk_axi cycle number of totwidth and actwidth of a frame. (bit locked when MdrCmrDone=1). */
#define GFXREG_FRAMECAP_CMSTS2 0x00000040U
/* TOTWIDTHT: cycle number of the total part of a video frame line for calculating pixel frame rate. LSBs contained in this field, MSBs contained in FRLineCount.TotWidthT_MSBs. */
#define GFXREG_FRAMECAP_CMSTS2_TOTWIDTHT_FSHIFT 0U
#define GFXREG_FRAMECAP_CMSTS2_TOTWIDTHT_FMASK 0x7fffU
#define GFXREG_FRAMECAP_CMSTS2_SETM_TOTWIDTHT(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FRAMECAP_CMSTS2_SET_TOTWIDTHT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_CMSTS2_GET_TOTWIDTHT(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FRAMECAP_SETM_TOTWIDTHT(s,val) ( (s)->cmsts2 = ((s)->cmsts2 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FRAMECAP_SET_TOTWIDTHT(s,val)  ( (s)->cmsts2 = (((s)->cmsts2 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_TOTWIDTHT(s) ((((s)->cmsts2) ) & 0x7fffUL)
#define GFXREG_FRAMECAP_CMSTS2_TOTWIDTHT_RESET 0U

/* ACTWIDTHT: cycle number of the active part of a video frame line for calculating pixel frame rate. LSBs contained in this field, MSBs contained in FRLineCount.ActWidthT_MSBs. */
#define GFXREG_FRAMECAP_CMSTS2_ACTWIDTHT_FSHIFT 15U
#define GFXREG_FRAMECAP_CMSTS2_ACTWIDTHT_FMASK 0x3fffU
#define GFXREG_FRAMECAP_CMSTS2_SETM_ACTWIDTHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 15U)
#define GFXREG_FRAMECAP_CMSTS2_SET_ACTWIDTHT(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_CMSTS2_GET_ACTWIDTHT(val) (((CYGFX_U32)(val) >> 15U) & 0x3fffUL)
#define GFXREG_FRAMECAP_SETM_ACTWIDTHT(s,val) ( (s)->cmsts2 = ((s)->cmsts2 & ~0x1fff8000UL) | (((CYGFX_U32)(val) << 15U) & 0x1fff8000UL) )
#define GFXREG_FRAMECAP_SET_ACTWIDTHT(s,val)  ( (s)->cmsts2 = (((s)->cmsts2 & ~0x1fff8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_ACTWIDTHT(s) ((((s)->cmsts2) >> 15U) & 0x3fffUL)
#define GFXREG_FRAMECAP_CMSTS2_ACTWIDTHT_RESET 0U

/* ITUSTS: ITU error status register. 
   Note that ITU protection does work under the assumption that only 1 or 2 bits are at fault. More fault-bits scenario is not defined.  */
#define GFXREG_FRAMECAP_ITUSTS 0x00000044U
/* ITUPROTECTIONONEBITERROR: Set if a one bit error in the reference code of the ITU capture input 0 is found and corrected. Clear by writing a 1 to this field. */
#define GFXREG_FRAMECAP_ITUSTS_ITUPROTECTIONONEBITERROR_FSHIFT 0U
#define GFXREG_FRAMECAP_ITUSTS_ITUPROTECTIONONEBITERROR_FMASK 0x1U
#define GFXREG_FRAMECAP_ITUSTS_SETM_ITUPROTECTIONONEBITERROR(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMECAP_ITUSTS_SET_ITUPROTECTIONONEBITERROR(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_ITUSTS_GET_ITUPROTECTIONONEBITERROR(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_ITUPROTECTIONONEBITERROR(s,val) ( (s)->itusts = ((s)->itusts & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMECAP_SET_ITUPROTECTIONONEBITERROR(s,val)  ( (s)->itusts = (((s)->itusts & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_ITUPROTECTIONONEBITERROR(s) ((((s)->itusts) ) & 0x1UL)
#define GFXREG_FRAMECAP_ITUSTS_ITUPROTECTIONONEBITERROR_RESET 0U

/* ITUPROTECTIONTWOBITERROR: Set if a two bit error in the reference code of the ITU capture input 0 is found. Two bit errors can only be detected, not corrected. Clear by writing a 1 to this field. */
#define GFXREG_FRAMECAP_ITUSTS_ITUPROTECTIONTWOBITERROR_FSHIFT 1U
#define GFXREG_FRAMECAP_ITUSTS_ITUPROTECTIONTWOBITERROR_FMASK 0x1U
#define GFXREG_FRAMECAP_ITUSTS_SETM_ITUPROTECTIONTWOBITERROR(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_FRAMECAP_ITUSTS_SET_ITUPROTECTIONTWOBITERROR(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMECAP_ITUSTS_GET_ITUPROTECTIONTWOBITERROR(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_FRAMECAP_SETM_ITUPROTECTIONTWOBITERROR(s,val) ( (s)->itusts = ((s)->itusts & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_FRAMECAP_SET_ITUPROTECTIONTWOBITERROR(s,val)  ( (s)->itusts = (((s)->itusts & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMECAP_GET_ITUPROTECTIONTWOBITERROR(s) ((((s)->itusts) >> 1U) & 0x1UL)
#define GFXREG_FRAMECAP_ITUSTS_ITUPROTECTIONTWOBITERROR_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_FRAMECAP_REGISTER_H */

