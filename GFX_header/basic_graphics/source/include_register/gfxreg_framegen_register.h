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
 * \file        gfxreg_framegen_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   framegen
 *              Source:   framegen.component.xml
 *              Template: component_h.tpl
 * \brief      Iris framegen register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_FRAMEGEN_REGISTER_H
#define GFXREG_FRAMEGEN_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* framegen registers */
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


/* FGSTCTRL: FrameGen Static Control Register */
#define GFXREG_FRAMEGEN_FGSTCTRL 0x00000000U
/* SHDEN: Enables shadowing for RWS type configuration fields. */
#define GFXREG_FRAMEGEN_FGSTCTRL_SHDEN_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSTCTRL_SHDEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSTCTRL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEGEN_FGSTCTRL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSTCTRL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SHDEN(s,val) ( (s)->fgstctrl = ((s)->fgstctrl & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEGEN_SET_SHDEN(s,val)  ( (s)->fgstctrl = (((s)->fgstctrl & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SHDEN(s) ((((s)->fgstctrl) ) & 0x1UL)
#define GFXREG_FRAMEGEN_FGSTCTRL_SHDEN_RESET 0U

/* FGSYNCMODE: Determines the operating mode of the framegen unit for side-by-side synchronization. */
#define GFXREG_FRAMEGEN_FGSTCTRL_FGSYNCMODE_FSHIFT 1U
#define GFXREG_FRAMEGEN_FGSTCTRL_FGSYNCMODE_FMASK 0x3U
#define GFXREG_FRAMEGEN_FGSTCTRL_SETM_FGSYNCMODE(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FRAMEGEN_FGSTCTRL_SET_FGSYNCMODE(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSTCTRL_GET_FGSYNCMODE(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FRAMEGEN_SETM_FGSYNCMODE(s,val) ( (s)->fgstctrl = ((s)->fgstctrl & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FRAMEGEN_SET_FGSYNCMODE(s,val)  ( (s)->fgstctrl = (((s)->fgstctrl & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_FGSYNCMODE(s) ((((s)->fgstctrl) >> 1U) & 0x3UL)
#define GFXREG_FRAMEGEN_FGSTCTRL_FGSYNCMODE_OFF 0x0U /* No side-by-side synchronization. */
#define GFXREG_FRAMEGEN_FGSTCTRL_FGSYNCMODE_MASTER 0x1U /* Framegen is master. */
#define GFXREG_FRAMEGEN_FGSTCTRL_FGSYNCMODE_SLAVE_CYC 0x2U /* Framegen is slave. Runs in cyclic synchronization mode. */
#define GFXREG_FRAMEGEN_FGSTCTRL_FGSYNCMODE_SLAVE_ONCE 0x3U /* Framegen is slave. Runs in one time synchronization mode. */
#define GFXREG_FRAMEGEN_FGSTCTRL_FGSYNCMODE_RESET 0U

/* HTCFG1: FrameGen Horizontal Timing Config Register 1 */
#define GFXREG_FRAMEGEN_HTCFG1 0x00000004U
/* HACT: Horizontal size of active display area in pixels. */
#define GFXREG_FRAMEGEN_HTCFG1_HACT_FSHIFT 0U
#define GFXREG_FRAMEGEN_HTCFG1_HACT_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_HTCFG1_SETM_HACT(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_HTCFG1_SET_HACT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_HTCFG1_GET_HACT(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_HACT(s,val) ( (s)->htcfg1 = ((s)->htcfg1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_HACT(s,val)  ( (s)->htcfg1 = (((s)->htcfg1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_HACT(s) ((((s)->htcfg1) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_HTCFG1_HACT_RESET 320U

/* HTOTAL: Total horizontal size of frame in pixels. */
#define GFXREG_FRAMEGEN_HTCFG1_HTOTAL_FSHIFT 16U
#define GFXREG_FRAMEGEN_HTCFG1_HTOTAL_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_HTCFG1_SETM_HTOTAL(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_HTCFG1_SET_HTOTAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_HTCFG1_GET_HTOTAL(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_HTOTAL(s,val) ( (s)->htcfg1 = ((s)->htcfg1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_HTOTAL(s,val)  ( (s)->htcfg1 = (((s)->htcfg1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_HTOTAL(s) ((((s)->htcfg1) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_HTCFG1_HTOTAL_RESET 399U

/* HTCFG2: FrameGen Horizontal Timing Config Register 2 */
#define GFXREG_FRAMEGEN_HTCFG2 0x00000008U
/* HSYNC: Width of HSYNC pulse in pixels. */
#define GFXREG_FRAMEGEN_HTCFG2_HSYNC_FSHIFT 0U
#define GFXREG_FRAMEGEN_HTCFG2_HSYNC_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_HTCFG2_SETM_HSYNC(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_HTCFG2_SET_HSYNC(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_HTCFG2_GET_HSYNC(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_HSYNC(s,val) ( (s)->htcfg2 = ((s)->htcfg2 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_HSYNC(s,val)  ( (s)->htcfg2 = (((s)->htcfg2 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_HSYNC(s) ((((s)->htcfg2) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_HTCFG2_HSYNC_RESET 31U

/* HSBP: Width of HSYNC pulse plus width of horizontal back porch in pixels. */
#define GFXREG_FRAMEGEN_HTCFG2_HSBP_FSHIFT 16U
#define GFXREG_FRAMEGEN_HTCFG2_HSBP_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_HTCFG2_SETM_HSBP(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_HTCFG2_SET_HSBP(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_HTCFG2_GET_HSBP(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_HSBP(s,val) ( (s)->htcfg2 = ((s)->htcfg2 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_HSBP(s,val)  ( (s)->htcfg2 = (((s)->htcfg2 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_HSBP(s) ((((s)->htcfg2) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_HTCFG2_HSBP_RESET 71U

/* HSEN: Enables generation of HSYNC pulse. */
#define GFXREG_FRAMEGEN_HTCFG2_HSEN_FSHIFT 31U
#define GFXREG_FRAMEGEN_HTCFG2_HSEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_HTCFG2_SETM_HSEN(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FRAMEGEN_HTCFG2_SET_HSEN(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_HTCFG2_GET_HSEN(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_HSEN(s,val) ( (s)->htcfg2 = ((s)->htcfg2 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FRAMEGEN_SET_HSEN(s,val)  ( (s)->htcfg2 = (((s)->htcfg2 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_HSEN(s) ((((s)->htcfg2) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_HTCFG2_HSEN_RESET 1U

/* VTCFG1: FrameGen Vertical Timing Config Register 1 */
#define GFXREG_FRAMEGEN_VTCFG1 0x0000000cU
/* VACT: Vertical size of active display area in lines. */
#define GFXREG_FRAMEGEN_VTCFG1_VACT_FSHIFT 0U
#define GFXREG_FRAMEGEN_VTCFG1_VACT_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_VTCFG1_SETM_VACT(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_VTCFG1_SET_VACT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_VTCFG1_GET_VACT(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_VACT(s,val) ( (s)->vtcfg1 = ((s)->vtcfg1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_VACT(s,val)  ( (s)->vtcfg1 = (((s)->vtcfg1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_VACT(s) ((((s)->vtcfg1) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_VTCFG1_VACT_RESET 240U

/* VTOTAL: Total vertical size of frame in lines. */
#define GFXREG_FRAMEGEN_VTCFG1_VTOTAL_FSHIFT 16U
#define GFXREG_FRAMEGEN_VTCFG1_VTOTAL_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_VTCFG1_SETM_VTOTAL(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_VTCFG1_SET_VTOTAL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_VTCFG1_GET_VTOTAL(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_VTOTAL(s,val) ( (s)->vtcfg1 = ((s)->vtcfg1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_VTOTAL(s,val)  ( (s)->vtcfg1 = (((s)->vtcfg1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_VTOTAL(s) ((((s)->vtcfg1) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_VTCFG1_VTOTAL_RESET 252U

/* VTCFG2: FrameGen Vertical Timing Config Register 2 */
#define GFXREG_FRAMEGEN_VTCFG2 0x00000010U
/* VSYNC: Width of VSYNC pulse in lines. */
#define GFXREG_FRAMEGEN_VTCFG2_VSYNC_FSHIFT 0U
#define GFXREG_FRAMEGEN_VTCFG2_VSYNC_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_VTCFG2_SETM_VSYNC(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_VTCFG2_SET_VSYNC(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_VTCFG2_GET_VSYNC(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_VSYNC(s,val) ( (s)->vtcfg2 = ((s)->vtcfg2 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_VSYNC(s,val)  ( (s)->vtcfg2 = (((s)->vtcfg2 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_VSYNC(s) ((((s)->vtcfg2) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_VTCFG2_VSYNC_RESET 3U

/* VSBP: Width of VSYNC pulse plus width of vertical back porch in lines. */
#define GFXREG_FRAMEGEN_VTCFG2_VSBP_FSHIFT 16U
#define GFXREG_FRAMEGEN_VTCFG2_VSBP_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_VTCFG2_SETM_VSBP(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_VTCFG2_SET_VSBP(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_VTCFG2_GET_VSBP(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_VSBP(s,val) ( (s)->vtcfg2 = ((s)->vtcfg2 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_VSBP(s,val)  ( (s)->vtcfg2 = (((s)->vtcfg2 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_VSBP(s) ((((s)->vtcfg2) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_VTCFG2_VSBP_RESET 9U

/* VSEN: Enables generation of VSYNC pulse. */
#define GFXREG_FRAMEGEN_VTCFG2_VSEN_FSHIFT 31U
#define GFXREG_FRAMEGEN_VTCFG2_VSEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_VTCFG2_SETM_VSEN(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FRAMEGEN_VTCFG2_SET_VSEN(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_VTCFG2_GET_VSEN(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_VSEN(s,val) ( (s)->vtcfg2 = ((s)->vtcfg2 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FRAMEGEN_SET_VSEN(s,val)  ( (s)->vtcfg2 = (((s)->vtcfg2 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_VSEN(s) ((((s)->vtcfg2) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_VTCFG2_VSEN_RESET 1U

/* INT0CONFIG: Coordinates of the trigger point for generation of the Int0 interrupt signal
   The fields in this register can be written at any time, even though they are static. They will have an immediate effect, they are not shadowed. Register can only be accessed if display clock is running. */
#define GFXREG_FRAMEGEN_INT0CONFIG 0x00000014U
/* INT0COL: Specifies on which column of the display raster the Int0 signal is triggered (1 .. Int0Col .. HTOTAL). */
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0COL_FSHIFT 0U
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0COL_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_INT0CONFIG_SETM_INT0COL(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_INT0CONFIG_SET_INT0COL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT0CONFIG_GET_INT0COL(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_INT0COL(s,val) ( (s)->int0config = ((s)->int0config & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_INT0COL(s,val)  ( (s)->int0config = (((s)->int0config & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT0COL(s) ((((s)->int0config) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0COL_RESET 0U

/* INT0HSEN: When enabled, Int0Row setting is ignored so that the interrupt occurs every line at position given by Int0Col. */
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0HSEN_FSHIFT 15U
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0HSEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_INT0CONFIG_SETM_INT0HSEN(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_FRAMEGEN_INT0CONFIG_SET_INT0HSEN(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT0CONFIG_GET_INT0HSEN(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_INT0HSEN(s,val) ( (s)->int0config = ((s)->int0config & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_FRAMEGEN_SET_INT0HSEN(s,val)  ( (s)->int0config = (((s)->int0config & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT0HSEN(s) ((((s)->int0config) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0HSEN_RESET 0U

/* INT0ROW: Specifies on which row of the display raster the Int0 signal is triggered (1 .. Int0Row .. VTOTAL). */
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0ROW_FSHIFT 16U
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0ROW_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_INT0CONFIG_SETM_INT0ROW(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_INT0CONFIG_SET_INT0ROW(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT0CONFIG_GET_INT0ROW(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_INT0ROW(s,val) ( (s)->int0config = ((s)->int0config & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_INT0ROW(s,val)  ( (s)->int0config = (((s)->int0config & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT0ROW(s) ((((s)->int0config) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0ROW_RESET 0U

/* INT0EN: Enables Int0. */
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0EN_FSHIFT 31U
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0EN_FMASK 0x1U
#define GFXREG_FRAMEGEN_INT0CONFIG_SETM_INT0EN(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FRAMEGEN_INT0CONFIG_SET_INT0EN(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT0CONFIG_GET_INT0EN(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_INT0EN(s,val) ( (s)->int0config = ((s)->int0config & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FRAMEGEN_SET_INT0EN(s,val)  ( (s)->int0config = (((s)->int0config & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT0EN(s) ((((s)->int0config) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_INT0CONFIG_INT0EN_RESET 0U

/* INT1CONFIG: Coordinates of the trigger point for generation of the Int1 interrupt signal
   The fields in this register can be written at any time, even though they are static. They will have an immediate effect, they are not shadowed. Register can only be accessed if display clock is running. */
#define GFXREG_FRAMEGEN_INT1CONFIG 0x00000018U
/* INT1COL: Specifies on which column of the display raster the Int1 signal is triggered (1 .. Int1Col .. HTOTAL). */
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1COL_FSHIFT 0U
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1COL_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_INT1CONFIG_SETM_INT1COL(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_INT1CONFIG_SET_INT1COL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT1CONFIG_GET_INT1COL(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_INT1COL(s,val) ( (s)->int1config = ((s)->int1config & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_INT1COL(s,val)  ( (s)->int1config = (((s)->int1config & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT1COL(s) ((((s)->int1config) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1COL_RESET 0U

/* INT1HSEN: When enabled, Int1Row setting is ignored so that the interrupt occurs every line at position given by Int1Col. */
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1HSEN_FSHIFT 15U
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1HSEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_INT1CONFIG_SETM_INT1HSEN(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_FRAMEGEN_INT1CONFIG_SET_INT1HSEN(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT1CONFIG_GET_INT1HSEN(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_INT1HSEN(s,val) ( (s)->int1config = ((s)->int1config & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_FRAMEGEN_SET_INT1HSEN(s,val)  ( (s)->int1config = (((s)->int1config & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT1HSEN(s) ((((s)->int1config) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1HSEN_RESET 0U

/* INT1ROW: Specifies on which row of the display raster the Int1 signal is triggered (1 .. Int1Row .. VTOTAL). */
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1ROW_FSHIFT 16U
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1ROW_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_INT1CONFIG_SETM_INT1ROW(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_INT1CONFIG_SET_INT1ROW(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT1CONFIG_GET_INT1ROW(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_INT1ROW(s,val) ( (s)->int1config = ((s)->int1config & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_INT1ROW(s,val)  ( (s)->int1config = (((s)->int1config & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT1ROW(s) ((((s)->int1config) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1ROW_RESET 0U

/* INT1EN: Enables Int1 (irq[1]). */
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1EN_FSHIFT 31U
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1EN_FMASK 0x1U
#define GFXREG_FRAMEGEN_INT1CONFIG_SETM_INT1EN(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FRAMEGEN_INT1CONFIG_SET_INT1EN(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT1CONFIG_GET_INT1EN(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_INT1EN(s,val) ( (s)->int1config = ((s)->int1config & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FRAMEGEN_SET_INT1EN(s,val)  ( (s)->int1config = (((s)->int1config & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT1EN(s) ((((s)->int1config) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_INT1CONFIG_INT1EN_RESET 0U

/* INT2CONFIG: Coordinates of the trigger point for generation of the Int2 interrupt signal
   The fields in this register can be written at any time, even though they are static. They will have an immediate effect, they are not shadowed. Register can only be accessed if display clock is running. */
#define GFXREG_FRAMEGEN_INT2CONFIG 0x0000001cU
/* INT2COL: Specifies on which column of the display raster the Int2 signal is triggered (1 .. Int2Col .. HTOTAL). */
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2COL_FSHIFT 0U
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2COL_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_INT2CONFIG_SETM_INT2COL(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_INT2CONFIG_SET_INT2COL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT2CONFIG_GET_INT2COL(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_INT2COL(s,val) ( (s)->int2config = ((s)->int2config & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_INT2COL(s,val)  ( (s)->int2config = (((s)->int2config & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT2COL(s) ((((s)->int2config) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2COL_RESET 0U

/* INT2HSEN: When enabled, Int2Row setting is ignored so that the interrupt occurs every line at position given by Int2Col. */
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2HSEN_FSHIFT 15U
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2HSEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_INT2CONFIG_SETM_INT2HSEN(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_FRAMEGEN_INT2CONFIG_SET_INT2HSEN(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT2CONFIG_GET_INT2HSEN(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_INT2HSEN(s,val) ( (s)->int2config = ((s)->int2config & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_FRAMEGEN_SET_INT2HSEN(s,val)  ( (s)->int2config = (((s)->int2config & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT2HSEN(s) ((((s)->int2config) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2HSEN_RESET 0U

/* INT2ROW: Specifies on which row of the display raster the Int2 signal is triggered (1 .. Int2Row .. VTOTAL). */
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2ROW_FSHIFT 16U
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2ROW_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_INT2CONFIG_SETM_INT2ROW(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_INT2CONFIG_SET_INT2ROW(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT2CONFIG_GET_INT2ROW(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_INT2ROW(s,val) ( (s)->int2config = ((s)->int2config & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_INT2ROW(s,val)  ( (s)->int2config = (((s)->int2config & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT2ROW(s) ((((s)->int2config) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2ROW_RESET 0U

/* INT2EN: Enables Int2. */
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2EN_FSHIFT 31U
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2EN_FMASK 0x1U
#define GFXREG_FRAMEGEN_INT2CONFIG_SETM_INT2EN(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FRAMEGEN_INT2CONFIG_SET_INT2EN(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT2CONFIG_GET_INT2EN(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_INT2EN(s,val) ( (s)->int2config = ((s)->int2config & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FRAMEGEN_SET_INT2EN(s,val)  ( (s)->int2config = (((s)->int2config & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT2EN(s) ((((s)->int2config) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_INT2CONFIG_INT2EN_RESET 0U

/* INT3CONFIG: Coordinates of the trigger point for generation of the Int3 interrupt signal
   The fields in this register can be written at any time, even though they are static. They will have an immediate effect, they are not shadowed. Register can only be accessed if display clock is running. */
#define GFXREG_FRAMEGEN_INT3CONFIG 0x00000020U
/* INT3COL: Specifies on which column of the display raster the Int3 signal is triggered (1 .. Int3Col .. HTOTAL). */
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3COL_FSHIFT 0U
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3COL_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_INT3CONFIG_SETM_INT3COL(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_INT3CONFIG_SET_INT3COL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT3CONFIG_GET_INT3COL(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_INT3COL(s,val) ( (s)->int3config = ((s)->int3config & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_INT3COL(s,val)  ( (s)->int3config = (((s)->int3config & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT3COL(s) ((((s)->int3config) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3COL_RESET 0U

/* INT3HSEN: When enabled, Int3Row setting is ignored so that the interrupt occurs every line at position given by Int3Col. */
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3HSEN_FSHIFT 15U
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3HSEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_INT3CONFIG_SETM_INT3HSEN(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_FRAMEGEN_INT3CONFIG_SET_INT3HSEN(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT3CONFIG_GET_INT3HSEN(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_INT3HSEN(s,val) ( (s)->int3config = ((s)->int3config & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_FRAMEGEN_SET_INT3HSEN(s,val)  ( (s)->int3config = (((s)->int3config & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT3HSEN(s) ((((s)->int3config) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3HSEN_RESET 0U

/* INT3ROW: Specifies on which row of the display raster the Int3 signal is triggered (1 .. Int3Row .. VTOTAL). */
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3ROW_FSHIFT 16U
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3ROW_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_INT3CONFIG_SETM_INT3ROW(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_INT3CONFIG_SET_INT3ROW(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT3CONFIG_GET_INT3ROW(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_INT3ROW(s,val) ( (s)->int3config = ((s)->int3config & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_INT3ROW(s,val)  ( (s)->int3config = (((s)->int3config & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT3ROW(s) ((((s)->int3config) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3ROW_RESET 0U

/* INT3EN: Enables Int3. */
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3EN_FSHIFT 31U
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3EN_FMASK 0x1U
#define GFXREG_FRAMEGEN_INT3CONFIG_SETM_INT3EN(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FRAMEGEN_INT3CONFIG_SET_INT3EN(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_INT3CONFIG_GET_INT3EN(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_INT3EN(s,val) ( (s)->int3config = ((s)->int3config & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FRAMEGEN_SET_INT3EN(s,val)  ( (s)->int3config = (((s)->int3config & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_INT3EN(s) ((((s)->int3config) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_INT3CONFIG_INT3EN_RESET 0U

/* PKICKCONFIG: Coordinates of the trigger point for generation of the primary kick signal */
#define GFXREG_FRAMEGEN_PKICKCONFIG 0x00000024U
/* PKICKCOL: Specifies on which column of the display raster the pkick signal is triggered (1 .. PKickCol .. HTOTAL). */
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKCOL_FSHIFT 0U
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKCOL_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_PKICKCONFIG_SETM_PKICKCOL(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_PKICKCONFIG_SET_PKICKCOL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_PKICKCONFIG_GET_PKICKCOL(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_PKICKCOL(s,val) ( (s)->pkickconfig = ((s)->pkickconfig & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_PKICKCOL(s,val)  ( (s)->pkickconfig = (((s)->pkickconfig & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_PKICKCOL(s) ((((s)->pkickconfig) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKCOL_RESET 320U

/* PKICKINT0EN: If enabled, maps the primary kick signal (pkick) on the interrupt pin int0. Overrides int0en. */
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKINT0EN_FSHIFT 15U
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKINT0EN_FMASK 0x1U
#define GFXREG_FRAMEGEN_PKICKCONFIG_SETM_PKICKINT0EN(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_FRAMEGEN_PKICKCONFIG_SET_PKICKINT0EN(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_PKICKCONFIG_GET_PKICKINT0EN(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_PKICKINT0EN(s,val) ( (s)->pkickconfig = ((s)->pkickconfig & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_FRAMEGEN_SET_PKICKINT0EN(s,val)  ( (s)->pkickconfig = (((s)->pkickconfig & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_PKICKINT0EN(s) ((((s)->pkickconfig) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKINT0EN_RESET 0U

/* PKICKROW: Specifies on which row of the display raster the pkick signal is triggered (1 .. PKickRow .. VTOTAL). */
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKROW_FSHIFT 16U
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKROW_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_PKICKCONFIG_SETM_PKICKROW(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_PKICKCONFIG_SET_PKICKROW(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_PKICKCONFIG_GET_PKICKROW(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_PKICKROW(s,val) ( (s)->pkickconfig = ((s)->pkickconfig & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_PKICKROW(s,val)  ( (s)->pkickconfig = (((s)->pkickconfig & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_PKICKROW(s) ((((s)->pkickconfig) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKROW_RESET 240U

/* PKICKEN: Enables pkick signal. */
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKEN_FSHIFT 31U
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_PKICKCONFIG_SETM_PKICKEN(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FRAMEGEN_PKICKCONFIG_SET_PKICKEN(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_PKICKCONFIG_GET_PKICKEN(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_PKICKEN(s,val) ( (s)->pkickconfig = ((s)->pkickconfig & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FRAMEGEN_SET_PKICKEN(s,val)  ( (s)->pkickconfig = (((s)->pkickconfig & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_PKICKEN(s) ((((s)->pkickconfig) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_PKICKCONFIG_PKICKEN_RESET 0U

/* SKICKCONFIG: Coordinates of the trigger point for generation of the secondary kick signal */
#define GFXREG_FRAMEGEN_SKICKCONFIG 0x00000028U
/* SKICKCOL: Specifies on which column of the display raster the skick signal is triggered (1 .. SKickCol .. HTOTAL). */
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKCOL_FSHIFT 0U
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKCOL_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_SKICKCONFIG_SETM_SKICKCOL(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SKICKCONFIG_SET_SKICKCOL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SKICKCONFIG_GET_SKICKCOL(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_SKICKCOL(s,val) ( (s)->skickconfig = ((s)->skickconfig & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_SKICKCOL(s,val)  ( (s)->skickconfig = (((s)->skickconfig & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SKICKCOL(s) ((((s)->skickconfig) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKCOL_RESET 320U

/* SKICKINT1EN: If enabled, maps the secondary kick signal (skick) on the interrupt pin int1. Overrides int1en. */
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKINT1EN_FSHIFT 15U
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKINT1EN_FMASK 0x1U
#define GFXREG_FRAMEGEN_SKICKCONFIG_SETM_SKICKINT1EN(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_FRAMEGEN_SKICKCONFIG_SET_SKICKINT1EN(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SKICKCONFIG_GET_SKICKINT1EN(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SKICKINT1EN(s,val) ( (s)->skickconfig = ((s)->skickconfig & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_FRAMEGEN_SET_SKICKINT1EN(s,val)  ( (s)->skickconfig = (((s)->skickconfig & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SKICKINT1EN(s) ((((s)->skickconfig) >> 15U) & 0x1UL)
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKINT1EN_RESET 0U

/* SKICKROW: Specifies on which row of the display raster the skick signal is triggered (1 .. SKickRow .. VTOTAL). */
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKROW_FSHIFT 16U
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKROW_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_SKICKCONFIG_SETM_SKICKROW(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_SKICKCONFIG_SET_SKICKROW(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SKICKCONFIG_GET_SKICKROW(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_SKICKROW(s,val) ( (s)->skickconfig = ((s)->skickconfig & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_SKICKROW(s,val)  ( (s)->skickconfig = (((s)->skickconfig & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SKICKROW(s) ((((s)->skickconfig) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKROW_RESET 240U

/* SKICKTRIG: Select source for skick generation. */
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKTRIG_FSHIFT 30U
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKTRIG_FMASK 0x1U
#define GFXREG_FRAMEGEN_SKICKCONFIG_SETM_SKICKTRIG(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FRAMEGEN_SKICKCONFIG_SET_SKICKTRIG(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SKICKCONFIG_GET_SKICKTRIG(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SKICKTRIG(s,val) ( (s)->skickconfig = ((s)->skickconfig & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FRAMEGEN_SET_SKICKTRIG(s,val)  ( (s)->skickconfig = (((s)->skickconfig & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SKICKTRIG(s) ((((s)->skickconfig) >> 30U) & 0x1UL)
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKTRIG_INTERNAL 0x0U /* Use internal skick signal, trigger point defined by SKickRow and SKickCol. */
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKTRIG_EXTERNAL 0x1U /* Use external skick input as trigger. */
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKTRIG_RESET 0U

/* SKICKEN: Enables generation of internal skick signal. */
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKEN_FSHIFT 31U
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_SKICKCONFIG_SETM_SKICKEN(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FRAMEGEN_SKICKCONFIG_SET_SKICKEN(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SKICKCONFIG_GET_SKICKEN(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SKICKEN(s,val) ( (s)->skickconfig = ((s)->skickconfig & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FRAMEGEN_SET_SKICKEN(s,val)  ( (s)->skickconfig = (((s)->skickconfig & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SKICKEN(s) ((((s)->skickconfig) >> 31U) & 0x1UL)
#define GFXREG_FRAMEGEN_SKICKCONFIG_SKICKEN_RESET 0U

/* SECSTATCONFIG: Configuration register for controlling the behavior of the SecSyncStat field in the FgSecChStat register. */
#define GFXREG_FRAMEGEN_SECSTATCONFIG 0x0000002cU
/* LEVGOODFRAMES: Number of continuous correct frames that must be processed before SecSyncStat field goes 1 (in sync). */
#define GFXREG_FRAMEGEN_SECSTATCONFIG_LEVGOODFRAMES_FSHIFT 0U
#define GFXREG_FRAMEGEN_SECSTATCONFIG_LEVGOODFRAMES_FMASK 0xfU
#define GFXREG_FRAMEGEN_SECSTATCONFIG_SETM_LEVGOODFRAMES(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FRAMEGEN_SECSTATCONFIG_SET_LEVGOODFRAMES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SECSTATCONFIG_GET_LEVGOODFRAMES(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FRAMEGEN_SETM_LEVGOODFRAMES(s,val) ( (s)->secstatconfig = ((s)->secstatconfig & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FRAMEGEN_SET_LEVGOODFRAMES(s,val)  ( (s)->secstatconfig = (((s)->secstatconfig & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_LEVGOODFRAMES(s) ((((s)->secstatconfig) ) & 0xfUL)
#define GFXREG_FRAMEGEN_SECSTATCONFIG_LEVGOODFRAMES_RESET 2U

/* LEVBADFRAMES: Not used. */
#define GFXREG_FRAMEGEN_SECSTATCONFIG_LEVBADFRAMES_FSHIFT 4U
#define GFXREG_FRAMEGEN_SECSTATCONFIG_LEVBADFRAMES_FMASK 0xfU
#define GFXREG_FRAMEGEN_SECSTATCONFIG_SETM_LEVBADFRAMES(val) (((CYGFX_U32)(val) & 0xfUL) << 4U)
#define GFXREG_FRAMEGEN_SECSTATCONFIG_SET_LEVBADFRAMES(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SECSTATCONFIG_GET_LEVBADFRAMES(val) (((CYGFX_U32)(val) >> 4U) & 0xfUL)
#define GFXREG_FRAMEGEN_SETM_LEVBADFRAMES(s,val) ( (s)->secstatconfig = ((s)->secstatconfig & ~0xf0UL) | (((CYGFX_U32)(val) << 4U) & 0xf0UL) )
#define GFXREG_FRAMEGEN_SET_LEVBADFRAMES(s,val)  ( (s)->secstatconfig = (((s)->secstatconfig & ~0xf0UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_LEVBADFRAMES(s) ((((s)->secstatconfig) >> 4U) & 0xfUL)
#define GFXREG_FRAMEGEN_SECSTATCONFIG_LEVBADFRAMES_RESET 1U

/* LEVSKEWINRANGE: Number of continuous frames the measured skew value shall be within the range defined by SyncRangeLow and SyncRangeHigh. */
#define GFXREG_FRAMEGEN_SECSTATCONFIG_LEVSKEWINRANGE_FSHIFT 8U
#define GFXREG_FRAMEGEN_SECSTATCONFIG_LEVSKEWINRANGE_FMASK 0xfU
#define GFXREG_FRAMEGEN_SECSTATCONFIG_SETM_LEVSKEWINRANGE(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FRAMEGEN_SECSTATCONFIG_SET_LEVSKEWINRANGE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SECSTATCONFIG_GET_LEVSKEWINRANGE(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FRAMEGEN_SETM_LEVSKEWINRANGE(s,val) ( (s)->secstatconfig = ((s)->secstatconfig & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FRAMEGEN_SET_LEVSKEWINRANGE(s,val)  ( (s)->secstatconfig = (((s)->secstatconfig & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_LEVSKEWINRANGE(s) ((((s)->secstatconfig) >> 8U) & 0xfUL)
#define GFXREG_FRAMEGEN_SECSTATCONFIG_LEVSKEWINRANGE_RESET 1U

/* FGSRCR1: FrameGen Skew Regulation Control Register 1. */
#define GFXREG_FRAMEGEN_FGSRCR1 0x00000030U
/* SREN: If enabled, skew control for secondary channel is active. */
#define GFXREG_FRAMEGEN_FGSRCR1_SREN_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSRCR1_SREN_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSRCR1_SETM_SREN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEGEN_FGSRCR1_SET_SREN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR1_GET_SREN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SREN(s,val) ( (s)->fgsrcr1 = ((s)->fgsrcr1 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEGEN_SET_SREN(s,val)  ( (s)->fgsrcr1 = (((s)->fgsrcr1 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SREN(s) ((((s)->fgsrcr1) ) & 0x1UL)
#define GFXREG_FRAMEGEN_FGSRCR1_SREN_RESET 0U

/* SRMODE: Skew Control Operating Mode. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRMODE_FSHIFT 1U
#define GFXREG_FRAMEGEN_FGSRCR1_SRMODE_FMASK 0x3U
#define GFXREG_FRAMEGEN_FGSRCR1_SETM_SRMODE(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FRAMEGEN_FGSRCR1_SET_SRMODE(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR1_GET_SRMODE(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FRAMEGEN_SETM_SRMODE(s,val) ( (s)->fgsrcr1 = ((s)->fgsrcr1 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FRAMEGEN_SET_SRMODE(s,val)  ( (s)->fgsrcr1 = (((s)->fgsrcr1 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SRMODE(s) ((((s)->fgsrcr1) >> 1U) & 0x3UL)
#define GFXREG_FRAMEGEN_FGSRCR1_SRMODE_OFF 0x0U /* Skew Regulation is off. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRMODE_HREG 0x1U /* Horizontal regulation enabled. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRMODE_VREG 0x2U /* Vertical regulation enabled. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRMODE_BOTH 0x3U /* Both regulation modes are enabled. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRMODE_RESET 0U

/* SRADJ: Enables line length adjustment for HTOTAL. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRADJ_FSHIFT 3U
#define GFXREG_FRAMEGEN_FGSRCR1_SRADJ_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSRCR1_SETM_SRADJ(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FRAMEGEN_FGSRCR1_SET_SRADJ(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR1_GET_SRADJ(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SRADJ(s,val) ( (s)->fgsrcr1 = ((s)->fgsrcr1 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FRAMEGEN_SET_SRADJ(s,val)  ( (s)->fgsrcr1 = (((s)->fgsrcr1 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SRADJ(s) ((((s)->fgsrcr1) >> 3U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGSRCR1_SRADJ_RESET 0U

/* SREVEN: Total line length HTOTAL is even when SRAdj is enabled. */
#define GFXREG_FRAMEGEN_FGSRCR1_SREVEN_FSHIFT 4U
#define GFXREG_FRAMEGEN_FGSRCR1_SREVEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSRCR1_SETM_SREVEN(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FRAMEGEN_FGSRCR1_SET_SREVEN(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR1_GET_SREVEN(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SREVEN(s,val) ( (s)->fgsrcr1 = ((s)->fgsrcr1 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FRAMEGEN_SET_SREVEN(s,val)  ( (s)->fgsrcr1 = (((s)->fgsrcr1 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SREVEN(s) ((((s)->fgsrcr1) >> 4U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGSRCR1_SREVEN_RESET 0U

/* SRFASTSYNC: Fast Synchronization Mode. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRFASTSYNC_FSHIFT 5U
#define GFXREG_FRAMEGEN_FGSRCR1_SRFASTSYNC_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSRCR1_SETM_SRFASTSYNC(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FRAMEGEN_FGSRCR1_SET_SRFASTSYNC(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR1_GET_SRFASTSYNC(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SRFASTSYNC(s,val) ( (s)->fgsrcr1 = ((s)->fgsrcr1 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FRAMEGEN_SET_SRFASTSYNC(s,val)  ( (s)->fgsrcr1 = (((s)->fgsrcr1 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SRFASTSYNC(s) ((((s)->fgsrcr1) >> 5U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGSRCR1_SRFASTSYNC_RESET 0U

/* SRQALIGN: Enables alignment of HTOTAL to be a multiple of 4. Overrides SREven field. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRQALIGN_FSHIFT 6U
#define GFXREG_FRAMEGEN_FGSRCR1_SRQALIGN_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSRCR1_SETM_SRQALIGN(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FRAMEGEN_FGSRCR1_SET_SRQALIGN(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR1_GET_SRQALIGN(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SRQALIGN(s,val) ( (s)->fgsrcr1 = ((s)->fgsrcr1 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FRAMEGEN_SET_SRQALIGN(s,val)  ( (s)->fgsrcr1 = (((s)->fgsrcr1 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SRQALIGN(s) ((((s)->fgsrcr1) >> 6U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGSRCR1_SRQALIGN_RESET 0U

/* SRQVAL: If SRQAlign is enabled, this field determines the fixed value of the two LSB bits of HTOTAL. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRQVAL_FSHIFT 7U
#define GFXREG_FRAMEGEN_FGSRCR1_SRQVAL_FMASK 0x3U
#define GFXREG_FRAMEGEN_FGSRCR1_SETM_SRQVAL(val) (((CYGFX_U32)(val) & 0x3UL) << 7U)
#define GFXREG_FRAMEGEN_FGSRCR1_SET_SRQVAL(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR1_GET_SRQVAL(val) (((CYGFX_U32)(val) >> 7U) & 0x3UL)
#define GFXREG_FRAMEGEN_SETM_SRQVAL(s,val) ( (s)->fgsrcr1 = ((s)->fgsrcr1 & ~0x180UL) | (((CYGFX_U32)(val) << 7U) & 0x180UL) )
#define GFXREG_FRAMEGEN_SET_SRQVAL(s,val)  ( (s)->fgsrcr1 = (((s)->fgsrcr1 & ~0x180UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SRQVAL(s) ((((s)->fgsrcr1) >> 7U) & 0x3UL)
#define GFXREG_FRAMEGEN_FGSRCR1_SRQVAL_ZERO 0x0U /* Fixed two LSB values of HTOTAL are 0b00. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRQVAL_ONE 0x1U /* Fixed two LSB values of HTOTAL are 0b01. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRQVAL_TWO 0x2U /* Fixed two LSB values of HTOTAL are 0b10. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRQVAL_THREE 0x3U /* Fixed two LSB values of HTOTAL are 0b11. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRQVAL_RESET 0U

/* SRDBGDISP: If enabled, the pixels are displayed that are read from FIFO when secondary channel is not in sync yet. */
#define GFXREG_FRAMEGEN_FGSRCR1_SRDBGDISP_FSHIFT 16U
#define GFXREG_FRAMEGEN_FGSRCR1_SRDBGDISP_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSRCR1_SETM_SRDBGDISP(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_FRAMEGEN_FGSRCR1_SET_SRDBGDISP(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR1_GET_SRDBGDISP(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SRDBGDISP(s,val) ( (s)->fgsrcr1 = ((s)->fgsrcr1 & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_FRAMEGEN_SET_SRDBGDISP(s,val)  ( (s)->fgsrcr1 = (((s)->fgsrcr1 & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SRDBGDISP(s) ((((s)->fgsrcr1) >> 16U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGSRCR1_SRDBGDISP_RESET 0U

/* SREPOFF: Disables the skew Extrapolation in blanking. */
#define GFXREG_FRAMEGEN_FGSRCR1_SREPOFF_FSHIFT 17U
#define GFXREG_FRAMEGEN_FGSRCR1_SREPOFF_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSRCR1_SETM_SREPOFF(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_FRAMEGEN_FGSRCR1_SET_SREPOFF(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR1_GET_SREPOFF(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_SREPOFF(s,val) ( (s)->fgsrcr1 = ((s)->fgsrcr1 & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_FRAMEGEN_SET_SREPOFF(s,val)  ( (s)->fgsrcr1 = (((s)->fgsrcr1 & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SREPOFF(s) ((((s)->fgsrcr1) >> 17U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGSRCR1_SREPOFF_RESET 0U

/* FGSRCR2: FrameGen Skew Regulation Control Register 2 */
#define GFXREG_FRAMEGEN_FGSRCR2 0x00000034U
/* HTOTALMIN: Minimum value of htotal when horizontal regulation is enabled. */
#define GFXREG_FRAMEGEN_FGSRCR2_HTOTALMIN_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSRCR2_HTOTALMIN_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_FGSRCR2_SETM_HTOTALMIN(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_FGSRCR2_SET_HTOTALMIN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR2_GET_HTOTALMIN(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_HTOTALMIN(s,val) ( (s)->fgsrcr2 = ((s)->fgsrcr2 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_HTOTALMIN(s,val)  ( (s)->fgsrcr2 = (((s)->fgsrcr2 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_HTOTALMIN(s) ((((s)->fgsrcr2) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_FGSRCR2_HTOTALMIN_RESET 392U

/* HTOTALMAX: Maximum value of htotal when horizontal regulation is enabled. */
#define GFXREG_FRAMEGEN_FGSRCR2_HTOTALMAX_FSHIFT 16U
#define GFXREG_FRAMEGEN_FGSRCR2_HTOTALMAX_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_FGSRCR2_SETM_HTOTALMAX(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_FGSRCR2_SET_HTOTALMAX(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR2_GET_HTOTALMAX(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_HTOTALMAX(s,val) ( (s)->fgsrcr2 = ((s)->fgsrcr2 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_HTOTALMAX(s,val)  ( (s)->fgsrcr2 = (((s)->fgsrcr2 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_HTOTALMAX(s) ((((s)->fgsrcr2) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_FGSRCR2_HTOTALMAX_RESET 439U

/* FGSRCR3: FrameGen Skew Regulation Control Register 3 */
#define GFXREG_FRAMEGEN_FGSRCR3 0x00000038U
/* VTOTALMIN: Minimum value of vtotal when vertical regulation is enabled. */
#define GFXREG_FRAMEGEN_FGSRCR3_VTOTALMIN_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSRCR3_VTOTALMIN_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_FGSRCR3_SETM_VTOTALMIN(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_FGSRCR3_SET_VTOTALMIN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR3_GET_VTOTALMIN(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_VTOTALMIN(s,val) ( (s)->fgsrcr3 = ((s)->fgsrcr3 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_VTOTALMIN(s,val)  ( (s)->fgsrcr3 = (((s)->fgsrcr3 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_VTOTALMIN(s) ((((s)->fgsrcr3) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_FGSRCR3_VTOTALMIN_RESET 251U

/* VTOTALMAX: Maximum value of vtotal when vertical regulation is enabled. */
#define GFXREG_FRAMEGEN_FGSRCR3_VTOTALMAX_FSHIFT 16U
#define GFXREG_FRAMEGEN_FGSRCR3_VTOTALMAX_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_FGSRCR3_SETM_VTOTALMAX(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_FGSRCR3_SET_VTOTALMAX(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR3_GET_VTOTALMAX(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_VTOTALMAX(s,val) ( (s)->fgsrcr3 = ((s)->fgsrcr3 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_VTOTALMAX(s,val)  ( (s)->fgsrcr3 = (((s)->fgsrcr3 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_VTOTALMAX(s) ((((s)->fgsrcr3) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_FGSRCR3_VTOTALMAX_RESET 277U

/* FGSRCR4: FrameGen Skew Regulation Control Register 4 */
#define GFXREG_FRAMEGEN_FGSRCR4 0x0000003cU
/* TARGETSKEW: Horizontal target skew value for horizontal and vertical skew regulation (signed value). */
#define GFXREG_FRAMEGEN_FGSRCR4_TARGETSKEW_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSRCR4_TARGETSKEW_FMASK 0x1fffffffU
#define GFXREG_FRAMEGEN_FGSRCR4_SETM_TARGETSKEW(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_FRAMEGEN_FGSRCR4_SET_TARGETSKEW(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR4_GET_TARGETSKEW(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_SETM_TARGETSKEW(s,val) ( (s)->fgsrcr4 = ((s)->fgsrcr4 & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_FRAMEGEN_SET_TARGETSKEW(s,val)  ( (s)->fgsrcr4 = (((s)->fgsrcr4 & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_TARGETSKEW(s) ((((s)->fgsrcr4) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_FGSRCR4_TARGETSKEW_RESET 200U

/* FGSRCR5: FrameGen Skew Regulation Control Register 5 */
#define GFXREG_FRAMEGEN_FGSRCR5 0x00000040U
/* SYNCRANGELOW: Sync range of horizontal and vertical skew regulation. Lower value (signed value). */
#define GFXREG_FRAMEGEN_FGSRCR5_SYNCRANGELOW_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSRCR5_SYNCRANGELOW_FMASK 0x1fffffffU
#define GFXREG_FRAMEGEN_FGSRCR5_SETM_SYNCRANGELOW(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_FRAMEGEN_FGSRCR5_SET_SYNCRANGELOW(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR5_GET_SYNCRANGELOW(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_SETM_SYNCRANGELOW(s,val) ( (s)->fgsrcr5 = ((s)->fgsrcr5 & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_FRAMEGEN_SET_SYNCRANGELOW(s,val)  ( (s)->fgsrcr5 = (((s)->fgsrcr5 & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SYNCRANGELOW(s) ((((s)->fgsrcr5) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_FGSRCR5_SYNCRANGELOW_RESET 0U

/* FGSRCR6: FrameGen Skew Regulation Control Register 6 */
#define GFXREG_FRAMEGEN_FGSRCR6 0x00000044U
/* SYNCRANGEHIGH: Sync range of horizontal and vertical skew regulation. Upper value (signed value). */
#define GFXREG_FRAMEGEN_FGSRCR6_SYNCRANGEHIGH_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSRCR6_SYNCRANGEHIGH_FMASK 0x1fffffffU
#define GFXREG_FRAMEGEN_FGSRCR6_SETM_SYNCRANGEHIGH(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_FRAMEGEN_FGSRCR6_SET_SYNCRANGEHIGH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGSRCR6_GET_SYNCRANGEHIGH(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_SETM_SYNCRANGEHIGH(s,val) ( (s)->fgsrcr6 = ((s)->fgsrcr6 & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_FRAMEGEN_SET_SYNCRANGEHIGH(s,val)  ( (s)->fgsrcr6 = (((s)->fgsrcr6 & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SYNCRANGEHIGH(s) ((((s)->fgsrcr6) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_FGSRCR6_SYNCRANGEHIGH_RESET 400U

/* FGKSDR: FrameGen Kick System Debug Register */
#define GFXREG_FRAMEGEN_FGKSDR 0x00000048U
/* PCNTCPLMAX: Maximum Value for ppendcnt_cpl_s complementary primary kick counter. Do not change! */
#define GFXREG_FRAMEGEN_FGKSDR_PCNTCPLMAX_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGKSDR_PCNTCPLMAX_FMASK 0x7U
#define GFXREG_FRAMEGEN_FGKSDR_SETM_PCNTCPLMAX(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_FRAMEGEN_FGKSDR_SET_PCNTCPLMAX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGKSDR_GET_PCNTCPLMAX(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_FRAMEGEN_SETM_PCNTCPLMAX(s,val) ( (s)->fgksdr = ((s)->fgksdr & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_FRAMEGEN_SET_PCNTCPLMAX(s,val)  ( (s)->fgksdr = (((s)->fgksdr & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_PCNTCPLMAX(s) ((((s)->fgksdr) ) & 0x7UL)
#define GFXREG_FRAMEGEN_FGKSDR_PCNTCPLMAX_RESET 2U

/* SCNTCPLMAX: Maximum Value for spendcnt_cpl_s complementary secondary kick counter. Do not change! */
#define GFXREG_FRAMEGEN_FGKSDR_SCNTCPLMAX_FSHIFT 16U
#define GFXREG_FRAMEGEN_FGKSDR_SCNTCPLMAX_FMASK 0x7U
#define GFXREG_FRAMEGEN_FGKSDR_SETM_SCNTCPLMAX(val) (((CYGFX_U32)(val) & 0x7UL) << 16U)
#define GFXREG_FRAMEGEN_FGKSDR_SET_SCNTCPLMAX(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGKSDR_GET_SCNTCPLMAX(val) (((CYGFX_U32)(val) >> 16U) & 0x7UL)
#define GFXREG_FRAMEGEN_SETM_SCNTCPLMAX(s,val) ( (s)->fgksdr = ((s)->fgksdr & ~0x70000UL) | (((CYGFX_U32)(val) << 16U) & 0x70000UL) )
#define GFXREG_FRAMEGEN_SET_SCNTCPLMAX(s,val)  ( (s)->fgksdr = (((s)->fgksdr & ~0x70000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SCNTCPLMAX(s) ((((s)->fgksdr) >> 16U) & 0x7UL)
#define GFXREG_FRAMEGEN_FGKSDR_SCNTCPLMAX_RESET 2U

/* PACFG: FrameGen Primary Area Config Register 1 (shadowed) */
#define GFXREG_FRAMEGEN_PACFG 0x0000004cU
/* PSTARTX: Primary screen upper left corner, x component. Counts from 1. Pstartx = 0 is not allowed. */
#define GFXREG_FRAMEGEN_PACFG_PSTARTX_FSHIFT 0U
#define GFXREG_FRAMEGEN_PACFG_PSTARTX_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_PACFG_SETM_PSTARTX(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_PACFG_SET_PSTARTX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_PACFG_GET_PSTARTX(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_PSTARTX(s,val) ( (s)->pacfg = ((s)->pacfg & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_PSTARTX(s,val)  ( (s)->pacfg = (((s)->pacfg & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_PSTARTX(s) ((((s)->pacfg) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_PACFG_PSTARTX_RESET 1U

/* PSTARTY: Primary screen upper left corner, y component. Counts from 1. Pstarty = 0 is not allowed. */
#define GFXREG_FRAMEGEN_PACFG_PSTARTY_FSHIFT 16U
#define GFXREG_FRAMEGEN_PACFG_PSTARTY_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_PACFG_SETM_PSTARTY(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_PACFG_SET_PSTARTY(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_PACFG_GET_PSTARTY(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_PSTARTY(s,val) ( (s)->pacfg = ((s)->pacfg & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_PSTARTY(s,val)  ( (s)->pacfg = (((s)->pacfg & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_PSTARTY(s) ((((s)->pacfg) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_PACFG_PSTARTY_RESET 1U

/* SACFG: FrameGen Secondary Area Config Register 1 (shadowed) */
#define GFXREG_FRAMEGEN_SACFG 0x00000050U
/* SSTARTX: Secondary screen upper left corner, x component. Counts from 1 . Sstartx = 0 is not allowed. */
#define GFXREG_FRAMEGEN_SACFG_SSTARTX_FSHIFT 0U
#define GFXREG_FRAMEGEN_SACFG_SSTARTX_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_SACFG_SETM_SSTARTX(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SACFG_SET_SSTARTX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SACFG_GET_SSTARTX(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_SSTARTX(s,val) ( (s)->sacfg = ((s)->sacfg & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEGEN_SET_SSTARTX(s,val)  ( (s)->sacfg = (((s)->sacfg & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SSTARTX(s) ((((s)->sacfg) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SACFG_SSTARTX_RESET 1U

/* SSTARTY: Secondary screen upper left corner, y component. Counts from 1 . Sstarty = 0 is not allowed. */
#define GFXREG_FRAMEGEN_SACFG_SSTARTY_FSHIFT 16U
#define GFXREG_FRAMEGEN_SACFG_SSTARTY_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_SACFG_SETM_SSTARTY(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEGEN_SACFG_SET_SSTARTY(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SACFG_GET_SSTARTY(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SETM_SSTARTY(s,val) ( (s)->sacfg = ((s)->sacfg & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEGEN_SET_SSTARTY(s,val)  ( (s)->sacfg = (((s)->sacfg & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SSTARTY(s) ((((s)->sacfg) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_SACFG_SSTARTY_RESET 1U

/* FGINCTRL: FrameGen Input Control Register (shadowed) */
#define GFXREG_FRAMEGEN_FGINCTRL 0x00000054U
/* FGDM: Frame Generator Display Mode. */
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_FMASK 0x7U
#define GFXREG_FRAMEGEN_FGINCTRL_SETM_FGDM(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_FRAMEGEN_FGINCTRL_SET_FGDM(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGINCTRL_GET_FGDM(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_FRAMEGEN_SETM_FGDM(s,val) ( (s)->fginctrl = ((s)->fginctrl & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_FRAMEGEN_SET_FGDM(s,val)  ( (s)->fginctrl = (((s)->fginctrl & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_FGDM(s) ((((s)->fginctrl) ) & 0x7UL)
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_BLACK 0x0U /* Black color background is shown on the whole screen area. */
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_CONSTCOL 0x1U /* Programmable constant color is shown in the active area and black color in the blanking area. */
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_PRIM 0x2U /* Primary input only is shown. */
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_SEC 0x3U /* Secondary input only is shown. */
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_PRIM_ON_TOP 0x4U /* Both inputs overlaid with primary on top. */
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_SEC_ON_TOP 0x5U /* Both inputs overlaid with secondary on top. */
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_TEST 0x6U /* White color background with test pattern is shown in the active area and black color in the blanking area. */
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_BLEND 0x7U /* Blending of the mode PRIM with the mode SEC. */
#define GFXREG_FRAMEGEN_FGINCTRL_FGDM_RESET 6U

/* ENPRIMALPHA: When enabled, alpha plane of primary channel is considered for screen composition. */
#define GFXREG_FRAMEGEN_FGINCTRL_ENPRIMALPHA_FSHIFT 3U
#define GFXREG_FRAMEGEN_FGINCTRL_ENPRIMALPHA_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGINCTRL_SETM_ENPRIMALPHA(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FRAMEGEN_FGINCTRL_SET_ENPRIMALPHA(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGINCTRL_GET_ENPRIMALPHA(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_ENPRIMALPHA(s,val) ( (s)->fginctrl = ((s)->fginctrl & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FRAMEGEN_SET_ENPRIMALPHA(s,val)  ( (s)->fginctrl = (((s)->fginctrl & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_ENPRIMALPHA(s) ((((s)->fginctrl) >> 3U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGINCTRL_ENPRIMALPHA_RESET 0U

/* ENSECALPHA: When enabled, alpha plane of secondary channel is considered for screen composition. */
#define GFXREG_FRAMEGEN_FGINCTRL_ENSECALPHA_FSHIFT 4U
#define GFXREG_FRAMEGEN_FGINCTRL_ENSECALPHA_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGINCTRL_SETM_ENSECALPHA(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FRAMEGEN_FGINCTRL_SET_ENSECALPHA(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGINCTRL_GET_ENSECALPHA(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_ENSECALPHA(s,val) ( (s)->fginctrl = ((s)->fginctrl & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FRAMEGEN_SET_ENSECALPHA(s,val)  ( (s)->fginctrl = (((s)->fginctrl & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_ENSECALPHA(s) ((((s)->fginctrl) >> 4U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGINCTRL_ENSECALPHA_RESET 0U

/* FGINCTRLPANIC: FrameGen Input Control Panic Register (shadowed) */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC 0x00000058U
/* FGDMPANIC: Frame Generator Display Mode. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_FMASK 0x7U
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_SETM_FGDMPANIC(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_SET_FGDMPANIC(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_GET_FGDMPANIC(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_FRAMEGEN_SETM_FGDMPANIC(s,val) ( (s)->fginctrlpanic = ((s)->fginctrlpanic & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_FRAMEGEN_SET_FGDMPANIC(s,val)  ( (s)->fginctrlpanic = (((s)->fginctrlpanic & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_FGDMPANIC(s) ((((s)->fginctrlpanic) ) & 0x7UL)
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_BLACK 0x0U /* Black color background is shown on the whole screen area. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_CONSTCOL 0x1U /* Programmable constant color is shown in the active area and black color in the blanking area. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_PRIM 0x2U /* Primary input only is shown. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_SEC 0x3U /* Secondary input only is shown. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_PRIM_ON_TOP 0x4U /* Both inputs overlaid with primary on top. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_SEC_ON_TOP 0x5U /* Both inputs overlaid with secondary on top. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_TEST 0x6U /* White color background with test pattern is shown in the active area and black color in the blanking area. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_BLEND 0x7U /* Blending of the mode PRIM with the mode SEC. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_FGDMPANIC_RESET 6U

/* ENPRIMALPHAPANIC: When enabled, alpha plane of primary channel is considered for screen composition. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_ENPRIMALPHAPANIC_FSHIFT 3U
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_ENPRIMALPHAPANIC_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_SETM_ENPRIMALPHAPANIC(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_SET_ENPRIMALPHAPANIC(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_GET_ENPRIMALPHAPANIC(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_ENPRIMALPHAPANIC(s,val) ( (s)->fginctrlpanic = ((s)->fginctrlpanic & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FRAMEGEN_SET_ENPRIMALPHAPANIC(s,val)  ( (s)->fginctrlpanic = (((s)->fginctrlpanic & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_ENPRIMALPHAPANIC(s) ((((s)->fginctrlpanic) >> 3U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_ENPRIMALPHAPANIC_RESET 0U

/* ENSECALPHAPANIC: When enabled, alpha plane of secondary channel is considered for screen composition. */
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_ENSECALPHAPANIC_FSHIFT 4U
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_ENSECALPHAPANIC_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_SETM_ENSECALPHAPANIC(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_SET_ENSECALPHAPANIC(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_GET_ENSECALPHAPANIC(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_ENSECALPHAPANIC(s,val) ( (s)->fginctrlpanic = ((s)->fginctrlpanic & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FRAMEGEN_SET_ENSECALPHAPANIC(s,val)  ( (s)->fginctrlpanic = (((s)->fginctrlpanic & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_ENSECALPHAPANIC(s) ((((s)->fginctrlpanic) >> 4U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGINCTRLPANIC_ENSECALPHAPANIC_RESET 0U

/* FGCCR: FrameGen Constant Color Register (shadowed) */
#define GFXREG_FRAMEGEN_FGCCR 0x0000005cU
/* CCBLUE: Constant color - blue component. */
#define GFXREG_FRAMEGEN_FGCCR_CCBLUE_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGCCR_CCBLUE_FMASK 0xffU
#define GFXREG_FRAMEGEN_FGCCR_SETM_CCBLUE(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FRAMEGEN_FGCCR_SET_CCBLUE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGCCR_GET_CCBLUE(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FRAMEGEN_SETM_CCBLUE(s,val) ( (s)->fgccr = ((s)->fgccr & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FRAMEGEN_SET_CCBLUE(s,val)  ( (s)->fgccr = (((s)->fgccr & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_CCBLUE(s) ((((s)->fgccr) ) & 0xffUL)
#define GFXREG_FRAMEGEN_FGCCR_CCBLUE_RESET 255U

/* CCGREEN: Constant color - green component. */
#define GFXREG_FRAMEGEN_FGCCR_CCGREEN_FSHIFT 8U
#define GFXREG_FRAMEGEN_FGCCR_CCGREEN_FMASK 0xffU
#define GFXREG_FRAMEGEN_FGCCR_SETM_CCGREEN(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FRAMEGEN_FGCCR_SET_CCGREEN(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGCCR_GET_CCGREEN(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FRAMEGEN_SETM_CCGREEN(s,val) ( (s)->fgccr = ((s)->fgccr & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FRAMEGEN_SET_CCGREEN(s,val)  ( (s)->fgccr = (((s)->fgccr & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_CCGREEN(s) ((((s)->fgccr) >> 8U) & 0xffUL)
#define GFXREG_FRAMEGEN_FGCCR_CCGREEN_RESET 255U

/* CCRED: Constant color - red component. */
#define GFXREG_FRAMEGEN_FGCCR_CCRED_FSHIFT 16U
#define GFXREG_FRAMEGEN_FGCCR_CCRED_FMASK 0xffU
#define GFXREG_FRAMEGEN_FGCCR_SETM_CCRED(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FRAMEGEN_FGCCR_SET_CCRED(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGCCR_GET_CCRED(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FRAMEGEN_SETM_CCRED(s,val) ( (s)->fgccr = ((s)->fgccr & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FRAMEGEN_SET_CCRED(s,val)  ( (s)->fgccr = (((s)->fgccr & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_CCRED(s) ((((s)->fgccr) >> 16U) & 0xffUL)
#define GFXREG_FRAMEGEN_FGCCR_CCRED_RESET 255U

/* CCALPHA: Constant color - alpha value. In case of blending the value of 1 will be extended to 0xff. */
#define GFXREG_FRAMEGEN_FGCCR_CCALPHA_FSHIFT 24U
#define GFXREG_FRAMEGEN_FGCCR_CCALPHA_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGCCR_SETM_CCALPHA(val) (((CYGFX_U32)(val) & 0x1UL) << 24U)
#define GFXREG_FRAMEGEN_FGCCR_SET_CCALPHA(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGCCR_GET_CCALPHA(val) (((CYGFX_U32)(val) >> 24U) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_CCALPHA(s,val) ( (s)->fgccr = ((s)->fgccr & ~0x1000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1000000UL) )
#define GFXREG_FRAMEGEN_SET_CCALPHA(s,val)  ( (s)->fgccr = (((s)->fgccr & ~0x1000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_CCALPHA(s) ((((s)->fgccr) >> 24U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGCCR_CCALPHA_RESET 1U

/* BLENDCONTROL: Options for blend operations. (shadowed) */
#define GFXREG_FRAMEGEN_BLENDCONTROL 0x00000060U
/* PRIM_C_BLD_FUNC: Primary (background) input color blending function */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_FSHIFT 0U
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_FMASK 0x7U
#define GFXREG_FRAMEGEN_BLENDCONTROL_SETM_PRIM_C_BLD_FUNC(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_FRAMEGEN_BLENDCONTROL_SET_PRIM_C_BLD_FUNC(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_BLENDCONTROL_GET_PRIM_C_BLD_FUNC(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_FRAMEGEN_SETM_PRIM_C_BLD_FUNC(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_FRAMEGEN_SET_PRIM_C_BLD_FUNC(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_PRIM_C_BLD_FUNC(s) ((((s)->blendcontrol) ) & 0x7UL)
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_ZERO 0x0U /* Cout = Cin * 0 */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_ONE 0x1U /* Cout = Cin * 1 */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_PRIM_ALPHA 0x2U /* Cout = Cin * ALPHA_prim */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_ONE_MINUS_PRIM_ALPHA 0x3U /* Cout = Cin * (1 - ALPHA_prim) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_SEC_ALPHA 0x4U /* Cout = Cin * ALPHA_sec */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_ONE_MINUS_SEC_ALPHA 0x5U /* Cout = Cin * (1 - ALPHA_sec) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_CONST_ALPHA 0x6U /* Cout = Cin * ALPHA_const */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_ONE_MINUS_CONST_ALPHA 0x7U /* Cout = Cin * (1 - ALPHA_const) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_C_BLD_FUNC_RESET 0x0U

/* SEC_C_BLD_FUNC: Secondary (overlay) input color blending function */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_FSHIFT 4U
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_FMASK 0x7U
#define GFXREG_FRAMEGEN_BLENDCONTROL_SETM_SEC_C_BLD_FUNC(val) (((CYGFX_U32)(val) & 0x7UL) << 4U)
#define GFXREG_FRAMEGEN_BLENDCONTROL_SET_SEC_C_BLD_FUNC(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_BLENDCONTROL_GET_SEC_C_BLD_FUNC(val) (((CYGFX_U32)(val) >> 4U) & 0x7UL)
#define GFXREG_FRAMEGEN_SETM_SEC_C_BLD_FUNC(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0x70UL) | (((CYGFX_U32)(val) << 4U) & 0x70UL) )
#define GFXREG_FRAMEGEN_SET_SEC_C_BLD_FUNC(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0x70UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SEC_C_BLD_FUNC(s) ((((s)->blendcontrol) >> 4U) & 0x7UL)
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_ZERO 0x0U /* Cout = Cin * 0 */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_ONE 0x1U /* Cout = Cin * 1 */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_PRIM_ALPHA 0x2U /* Cout = Cin * ALPHA_prim */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_ONE_MINUS_PRIM_ALPHA 0x3U /* Cout = Cin * (1 - ALPHA_prim) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_SEC_ALPHA 0x4U /* Cout = Cin * ALPHA_sec */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_ONE_MINUS_SEC_ALPHA 0x5U /* Cout = Cin * (1 - ALPHA_sec) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_CONST_ALPHA 0x6U /* Cout = Cin * ALPHA_const */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_ONE_MINUS_CONST_ALPHA 0x7U /* Cout = Cin * (1 - ALPHA_const) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_C_BLD_FUNC_RESET 0x1U

/* PRIM_A_BLD_FUNC: Primary (background) input alpha blending function */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_FSHIFT 8U
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_FMASK 0x7U
#define GFXREG_FRAMEGEN_BLENDCONTROL_SETM_PRIM_A_BLD_FUNC(val) (((CYGFX_U32)(val) & 0x7UL) << 8U)
#define GFXREG_FRAMEGEN_BLENDCONTROL_SET_PRIM_A_BLD_FUNC(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_BLENDCONTROL_GET_PRIM_A_BLD_FUNC(val) (((CYGFX_U32)(val) >> 8U) & 0x7UL)
#define GFXREG_FRAMEGEN_SETM_PRIM_A_BLD_FUNC(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0x700UL) | (((CYGFX_U32)(val) << 8U) & 0x700UL) )
#define GFXREG_FRAMEGEN_SET_PRIM_A_BLD_FUNC(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0x700UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_PRIM_A_BLD_FUNC(s) ((((s)->blendcontrol) >> 8U) & 0x7UL)
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_ZERO 0x0U /* Aout = Ain * 0 */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_ONE 0x1U /* Aout = Ain * 1 */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_PRIM_ALPHA 0x2U /* Aout = Ain * ALPHA_prim */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_ONE_MINUS_PRIM_ALPHA 0x3U /* Aout = Ain * (1 - ALPHA_prim) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_SEC_ALPHA 0x4U /* Aout = Ain * ALPHA_sec */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_ONE_MINUS_SEC_ALPHA 0x5U /* Aout = Ain * (1 - ALPHA_sec) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_CONST_ALPHA 0x6U /* Aout = Ain * ALPHA_const */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_ONE_MINUS_CONST_ALPHA 0x7U /* Aout = Ain * (1 - ALPHA_const) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_PRIM_A_BLD_FUNC_RESET 0x0U

/* SEC_A_BLD_FUNC: Secondary (overlay) input alpha blending function */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_FSHIFT 12U
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_FMASK 0x7U
#define GFXREG_FRAMEGEN_BLENDCONTROL_SETM_SEC_A_BLD_FUNC(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_FRAMEGEN_BLENDCONTROL_SET_SEC_A_BLD_FUNC(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_BLENDCONTROL_GET_SEC_A_BLD_FUNC(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_FRAMEGEN_SETM_SEC_A_BLD_FUNC(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_FRAMEGEN_SET_SEC_A_BLD_FUNC(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_SEC_A_BLD_FUNC(s) ((((s)->blendcontrol) >> 12U) & 0x7UL)
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_ZERO 0x0U /* Aout = Ain * 0 */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_ONE 0x1U /* Aout = Ain * 1 */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_PRIM_ALPHA 0x2U /* Aout = Ain * ALPHA_prim */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_ONE_MINUS_PRIM_ALPHA 0x3U /* Aout = Ain * (1 - ALPHA_prim) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_SEC_ALPHA 0x4U /* Aout = Ain * ALPHA_sec */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_ONE_MINUS_SEC_ALPHA 0x5U /* Aout = Ain * (1 - ALPHA_sec) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_CONST_ALPHA 0x6U /* Aout = Ain * ALPHA_const */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_ONE_MINUS_CONST_ALPHA 0x7U /* Aout = Ain * (1 - ALPHA_const) */
#define GFXREG_FRAMEGEN_BLENDCONTROL_SEC_A_BLD_FUNC_RESET 0x1U

/* BLENDALPHA: Constant alpha value, used for constant alpha blending */
#define GFXREG_FRAMEGEN_BLENDCONTROL_BLENDALPHA_FSHIFT 16U
#define GFXREG_FRAMEGEN_BLENDCONTROL_BLENDALPHA_FMASK 0xffU
#define GFXREG_FRAMEGEN_BLENDCONTROL_SETM_BLENDALPHA(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FRAMEGEN_BLENDCONTROL_SET_BLENDALPHA(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_BLENDCONTROL_GET_BLENDALPHA(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FRAMEGEN_SETM_BLENDALPHA(s,val) ( (s)->blendcontrol = ((s)->blendcontrol & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FRAMEGEN_SET_BLENDALPHA(s,val)  ( (s)->blendcontrol = (((s)->blendcontrol & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_BLENDALPHA(s) ((((s)->blendcontrol) >> 16U) & 0xffUL)
#define GFXREG_FRAMEGEN_BLENDCONTROL_BLENDALPHA_RESET 0x0U

/* FGENABLE: FrameGen Enable Register */
#define GFXREG_FRAMEGEN_FGENABLE 0x00000064U
/* FGEN: Frame Generator Enable. */
#define GFXREG_FRAMEGEN_FGENABLE_FGEN_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGENABLE_FGEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGENABLE_SETM_FGEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEGEN_FGENABLE_SET_FGEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_FGENABLE_GET_FGEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMEGEN_SETM_FGEN(s,val) ( (s)->fgenable = ((s)->fgenable & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEGEN_SET_FGEN(s,val)  ( (s)->fgenable = (((s)->fgenable & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_GET_FGEN(s) ((((s)->fgenable) ) & 0x1UL)
#define GFXREG_FRAMEGEN_FGENABLE_FGEN_RESET 0U

/* FGSLR: FrameGen Shadow Load Register */
#define GFXREG_FRAMEGEN_FGSLR 0x00000068U
/* SHDTOKGEN: Generate shadow load token. */
#define GFXREG_FRAMEGEN_FGSLR_SHDTOKGEN_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSLR_SHDTOKGEN_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSLR_SETM_SHDTOKGEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEGEN_FGSLR_SET_SHDTOKGEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SETM_SHDTOKGEN(s,val) ( (s)->fgslr = ((s)->fgslr & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEGEN_SET_SHDTOKGEN(s,val)  ( (s)->fgslr = (((s)->fgslr & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_FGSLR_SHDTOKGEN_RESET 0U

/* FGENSTS: FrameGen Enable Status Register */
#define GFXREG_FRAMEGEN_FGENSTS 0x0000006cU
/* ENSTS: Indicates the current operating mode of the frame generator. */
#define GFXREG_FRAMEGEN_FGENSTS_ENSTS_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGENSTS_ENSTS_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGENSTS_GET_ENSTS(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMEGEN_GET_ENSTS(s) ((((s)->fgensts) ) & 0x1UL)
#define GFXREG_FRAMEGEN_FGENSTS_ENSTS_RESET 0U

/* PANICSTAT: Current status of panic mode (0=normal operation mode, 1=panic mode; not locked). */
#define GFXREG_FRAMEGEN_FGENSTS_PANICSTAT_FSHIFT 1U
#define GFXREG_FRAMEGEN_FGENSTS_PANICSTAT_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGENSTS_GET_PANICSTAT(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_FRAMEGEN_GET_PANICSTAT(s) ((((s)->fgensts) >> 1U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGENSTS_PANICSTAT_RESET 0U

/* FGTIMESTAMP: Time stamp status. */
#define GFXREG_FRAMEGEN_FGTIMESTAMP 0x00000070U
/* LINEINDEX: Index of the output line that is currently generated (starts with 0 for first active output line). */
#define GFXREG_FRAMEGEN_FGTIMESTAMP_LINEINDEX_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGTIMESTAMP_LINEINDEX_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_FGTIMESTAMP_GET_LINEINDEX(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_GET_LINEINDEX(s) ((((s)->fgtimestamp) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_FGTIMESTAMP_LINEINDEX_RESET 0U

/* FRAMEINDEX: Index of the output frame that is currently generated (starts with 0 after reset for first output frame). */
#define GFXREG_FRAMEGEN_FGTIMESTAMP_FRAMEINDEX_FSHIFT 14U
#define GFXREG_FRAMEGEN_FGTIMESTAMP_FRAMEINDEX_FMASK 0x3ffffU
#define GFXREG_FRAMEGEN_FGTIMESTAMP_GET_FRAMEINDEX(val) (((CYGFX_U32)(val) >> 14U) & 0x3ffffUL)
#define GFXREG_FRAMEGEN_GET_FRAMEINDEX(s) ((((s)->fgtimestamp) >> 14U) & 0x3ffffUL)
#define GFXREG_FRAMEGEN_FGTIMESTAMP_FRAMEINDEX_RESET 0U

/* FGCHSTAT: FrameGen Channel Status Register */
#define GFXREG_FRAMEGEN_FGCHSTAT 0x00000074U
/* PFIFOEMPTY: Read request to empty primary pixel FIFO detected. (Bit locked when 1, clear by using ClrPrimStat). */
#define GFXREG_FRAMEGEN_FGCHSTAT_PFIFOEMPTY_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGCHSTAT_PFIFOEMPTY_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGCHSTAT_GET_PFIFOEMPTY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMEGEN_GET_PFIFOEMPTY(s) ((((s)->fgchstat) ) & 0x1UL)
#define GFXREG_FRAMEGEN_FGCHSTAT_PFIFOEMPTY_RESET 0U

/* PRIMSYNCSTAT: Current status primary channel synchronization (0 = out of sync (frame tearing), 1 = in sync (normal operation); not locked). */
#define GFXREG_FRAMEGEN_FGCHSTAT_PRIMSYNCSTAT_FSHIFT 8U
#define GFXREG_FRAMEGEN_FGCHSTAT_PRIMSYNCSTAT_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGCHSTAT_GET_PRIMSYNCSTAT(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FRAMEGEN_GET_PRIMSYNCSTAT(s) ((((s)->fgchstat) >> 8U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGCHSTAT_PRIMSYNCSTAT_RESET 0U

/* SFIFOEMPTY: Read request to empty secondary pixel FIFO detected. (bit locked when 1, clear by using ClrSecStat). */
#define GFXREG_FRAMEGEN_FGCHSTAT_SFIFOEMPTY_FSHIFT 16U
#define GFXREG_FRAMEGEN_FGCHSTAT_SFIFOEMPTY_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGCHSTAT_GET_SFIFOEMPTY(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_FRAMEGEN_GET_SFIFOEMPTY(s) ((((s)->fgchstat) >> 16U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGCHSTAT_SFIFOEMPTY_RESET 0U

/* SKEWRANGEERR: The secondary channel skew value has run out of the limit defined by SyncRangeLow and SyncRangeHigh. (bit locked when 1, clear by using ClrSecStat). */
#define GFXREG_FRAMEGEN_FGCHSTAT_SKEWRANGEERR_FSHIFT 17U
#define GFXREG_FRAMEGEN_FGCHSTAT_SKEWRANGEERR_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGCHSTAT_GET_SKEWRANGEERR(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_FRAMEGEN_GET_SKEWRANGEERR(s) ((((s)->fgchstat) >> 17U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGCHSTAT_SKEWRANGEERR_RESET 0U

/* SECSYNCSTAT: Current status secondary channel synchronization (0 = out of sync, 1 = in sync; not locked). */
#define GFXREG_FRAMEGEN_FGCHSTAT_SECSYNCSTAT_FSHIFT 24U
#define GFXREG_FRAMEGEN_FGCHSTAT_SECSYNCSTAT_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGCHSTAT_GET_SECSYNCSTAT(val) (((CYGFX_U32)(val) >> 24U) & 0x1UL)
#define GFXREG_FRAMEGEN_GET_SECSYNCSTAT(s) ((((s)->fgchstat) >> 24U) & 0x1UL)
#define GFXREG_FRAMEGEN_FGCHSTAT_SECSYNCSTAT_RESET 0U

/* FGCHSTATCLR: FrameGen Channel Status Clear Register */
#define GFXREG_FRAMEGEN_FGCHSTATCLR 0x00000078U
/* CLRPRIMSTAT: Clears PFifoEmpty in FgChStat register. */
#define GFXREG_FRAMEGEN_FGCHSTATCLR_CLRPRIMSTAT_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGCHSTATCLR_CLRPRIMSTAT_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGCHSTATCLR_SETM_CLRPRIMSTAT(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEGEN_FGCHSTATCLR_SET_CLRPRIMSTAT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SETM_CLRPRIMSTAT(s,val) ( (s)->fgchstatclr = ((s)->fgchstatclr & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEGEN_SET_CLRPRIMSTAT(s,val)  ( (s)->fgchstatclr = (((s)->fgchstatclr & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_FGCHSTATCLR_CLRPRIMSTAT_RESET 0U

/* CLRSECSTAT: Clears SFifoEmpty and SkewRangeErr in FgChStat register. */
#define GFXREG_FRAMEGEN_FGCHSTATCLR_CLRSECSTAT_FSHIFT 16U
#define GFXREG_FRAMEGEN_FGCHSTATCLR_CLRSECSTAT_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGCHSTATCLR_SETM_CLRSECSTAT(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_FRAMEGEN_FGCHSTATCLR_SET_CLRSECSTAT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SETM_CLRSECSTAT(s,val) ( (s)->fgchstatclr = ((s)->fgchstatclr & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_FRAMEGEN_SET_CLRSECSTAT(s,val)  ( (s)->fgchstatclr = (((s)->fgchstatclr & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_FGCHSTATCLR_CLRSECSTAT_RESET 0U

/* FGSKEWMON: FrameGen Skew Monitor Register for Secondary Channel Skew Control */
#define GFXREG_FRAMEGEN_FGSKEWMON 0x0000007cU
/* SKEWMON: Current skew value monitor for secondary channel skew control. Updated with hlast. */
#define GFXREG_FRAMEGEN_FGSKEWMON_SKEWMON_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSKEWMON_SKEWMON_FMASK 0x1fffffffU
#define GFXREG_FRAMEGEN_FGSKEWMON_GET_SKEWMON(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_GET_SKEWMON(s) ((((s)->fgskewmon) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_FGSKEWMON_SKEWMON_RESET 0U

/* FGSFIFOMIN: FrameGen Secondary FIFO Min Fill Register */
#define GFXREG_FRAMEGEN_FGSFIFOMIN 0x00000080U
/* SFIFOMIN: Shows the minimal fill level of the secondary channel pixel FIFO. */
#define GFXREG_FRAMEGEN_FGSFIFOMIN_SFIFOMIN_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSFIFOMIN_SFIFOMIN_FMASK 0x7ffU
#define GFXREG_FRAMEGEN_FGSFIFOMIN_GET_SFIFOMIN(val) (((CYGFX_U32)(val) ) & 0x7ffUL)
#define GFXREG_FRAMEGEN_GET_SFIFOMIN(s) ((((s)->fgsfifomin) ) & 0x7ffUL)
#define GFXREG_FRAMEGEN_FGSFIFOMIN_SFIFOMIN_RESET (none)U

/* FGSFIFOMAX: FrameGen Secondary FIFO Max Fill Register */
#define GFXREG_FRAMEGEN_FGSFIFOMAX 0x00000084U
/* SFIFOMAX: Shows the maximal fill level of the secondary channel pixel FIFO. */
#define GFXREG_FRAMEGEN_FGSFIFOMAX_SFIFOMAX_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSFIFOMAX_SFIFOMAX_FMASK 0x7ffU
#define GFXREG_FRAMEGEN_FGSFIFOMAX_GET_SFIFOMAX(val) (((CYGFX_U32)(val) ) & 0x7ffUL)
#define GFXREG_FRAMEGEN_GET_SFIFOMAX(s) ((((s)->fgsfifomax) ) & 0x7ffUL)
#define GFXREG_FRAMEGEN_FGSFIFOMAX_SFIFOMAX_RESET (none)U

/* FGSFIFOFILLCLR: FrameGen Secondary FIFO Fill Clear Register */
#define GFXREG_FRAMEGEN_FGSFIFOFILLCLR 0x00000088U
/* SFIFOFILLCLR: Write for clearing register FgSFifoMin and FgSFifoMax. */
#define GFXREG_FRAMEGEN_FGSFIFOFILLCLR_SFIFOFILLCLR_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSFIFOFILLCLR_SFIFOFILLCLR_FMASK 0x1U
#define GFXREG_FRAMEGEN_FGSFIFOFILLCLR_SETM_SFIFOFILLCLR(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEGEN_FGSFIFOFILLCLR_SET_SFIFOFILLCLR(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEGEN_SETM_SFIFOFILLCLR(s,val) ( (s)->fgsfifofillclr = ((s)->fgsfifofillclr & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEGEN_SET_SFIFOFILLCLR(s,val)  ( (s)->fgsfifofillclr = (((s)->fgsfifofillclr & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEGEN_FGSFIFOFILLCLR_SFIFOFILLCLR_RESET 0U

/* FGSREPD: FrameGen Skew Regulation ExtraPolation Debug Register */
#define GFXREG_FRAMEGEN_FGSREPD 0x0000008cU
/* EPVAL: Calculated value for line skew extrapolation in blanking. */
#define GFXREG_FRAMEGEN_FGSREPD_EPVAL_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSREPD_EPVAL_FMASK 0x1fffffffU
#define GFXREG_FRAMEGEN_FGSREPD_GET_EPVAL(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_GET_EPVAL(s) ((((s)->fgsrepd) ) & 0x1fffffffUL)
#define GFXREG_FRAMEGEN_FGSREPD_EPVAL_RESET 0U

/* FGSRFTD: FrameGen Skew Regulation Frame Total Debug Register */
#define GFXREG_FRAMEGEN_FGSRFTD 0x00000090U
/* FRTOT: Measured value for frame total measured in display clock cycles. */
#define GFXREG_FRAMEGEN_FGSRFTD_FRTOT_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGSRFTD_FRTOT_FMASK 0xfffffffU
#define GFXREG_FRAMEGEN_FGSRFTD_GET_FRTOT(val) (((CYGFX_U32)(val) ) & 0xfffffffUL)
#define GFXREG_FRAMEGEN_GET_FRTOT(s) ((((s)->fgsrftd) ) & 0xfffffffUL)
#define GFXREG_FRAMEGEN_FGSRFTD_FRTOT_RESET 0U

/* FGTGPOSITION: Current (x,y) positions of the timing generator Register in FrameGen timing generator. Please don't use it due to lack of verification. */
#define GFXREG_FRAMEGEN_FGTGPOSITION 0x00000094U
/* FRTGX: Coordinated pixel position starting from HACT inside a total line generated in timing generator in display clock cycles. */
#define GFXREG_FRAMEGEN_FGTGPOSITION_FRTGX_FSHIFT 0U
#define GFXREG_FRAMEGEN_FGTGPOSITION_FRTGX_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_FGTGPOSITION_GET_FRTGX(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_GET_FRTGX(s) ((((s)->fgtgposition) ) & 0x3fffUL)
#define GFXREG_FRAMEGEN_FGTGPOSITION_FRTGX_RESET 0U

/* FRTGY: Coordinated line position starting from VACT inside a total frame generated in timing generator in display clock cycles. */
#define GFXREG_FRAMEGEN_FGTGPOSITION_FRTGY_FSHIFT 14U
#define GFXREG_FRAMEGEN_FGTGPOSITION_FRTGY_FMASK 0x3fffU
#define GFXREG_FRAMEGEN_FGTGPOSITION_GET_FRTGY(val) (((CYGFX_U32)(val) >> 14U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_GET_FRTGY(s) ((((s)->fgtgposition) >> 14U) & 0x3fffUL)
#define GFXREG_FRAMEGEN_FGTGPOSITION_FRTGY_RESET 252U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_FRAMEGEN_REGISTER_H */

