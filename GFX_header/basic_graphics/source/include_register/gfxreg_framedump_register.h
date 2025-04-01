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
 * \date        Tue May 26 11:58:40 2020
 * \file        gfxreg_framedump_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   framedump
 *              Source:   framedump.component.xml
 *              Template: component_h.tpl
 * \brief      Iris framedump register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_FRAMEDUMP_REGISTER_H
#define GFXREG_FRAMEDUMP_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* framedump registers */
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


/* CONTROL: Control settings. */
#define GFXREG_FRAMEDUMP_CONTROL 0x00000000U
/* INPUTSELECT: Index of display stream that is dumped. */
#define GFXREG_FRAMEDUMP_CONTROL_INPUTSELECT_FSHIFT 0U
#define GFXREG_FRAMEDUMP_CONTROL_INPUTSELECT_FMASK 0x1U
#define GFXREG_FRAMEDUMP_CONTROL_SETM_INPUTSELECT(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEDUMP_CONTROL_SET_INPUTSELECT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_CONTROL_GET_INPUTSELECT(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMEDUMP_SETM_INPUTSELECT(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEDUMP_SET_INPUTSELECT(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_INPUTSELECT(s) ((((s)->control) ) & 0x1UL)
#define GFXREG_FRAMEDUMP_CONTROL_INPUTSELECT_RESET 0U

/* SETFIELD: The field property of the generated frame is set to this value. If field toggle is used, this is the start value. */
#define GFXREG_FRAMEDUMP_CONTROL_SETFIELD_FSHIFT 24U
#define GFXREG_FRAMEDUMP_CONTROL_SETFIELD_FMASK 0x1U
#define GFXREG_FRAMEDUMP_CONTROL_SETM_SETFIELD(val) (((CYGFX_U32)(val) & 0x1UL) << 24U)
#define GFXREG_FRAMEDUMP_CONTROL_SET_SETFIELD(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_CONTROL_GET_SETFIELD(val) (((CYGFX_U32)(val) >> 24U) & 0x1UL)
#define GFXREG_FRAMEDUMP_SETM_SETFIELD(s,val) ( (s)->control = ((s)->control & ~0x1000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1000000UL) )
#define GFXREG_FRAMEDUMP_SET_SETFIELD(s,val)  ( (s)->control = (((s)->control & ~0x1000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_SETFIELD(s) ((((s)->control) >> 24U) & 0x1UL)
#define GFXREG_FRAMEDUMP_CONTROL_SETFIELD_RESET 0U

/* TOGGLEFIELD: Enable toggling of the field property from frame to frame. Set to '1' to enable. */
#define GFXREG_FRAMEDUMP_CONTROL_TOGGLEFIELD_FSHIFT 25U
#define GFXREG_FRAMEDUMP_CONTROL_TOGGLEFIELD_FMASK 0x1U
#define GFXREG_FRAMEDUMP_CONTROL_SETM_TOGGLEFIELD(val) (((CYGFX_U32)(val) & 0x1UL) << 25U)
#define GFXREG_FRAMEDUMP_CONTROL_SET_TOGGLEFIELD(val) (((CYGFX_U32)(val) << 25U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_CONTROL_GET_TOGGLEFIELD(val) (((CYGFX_U32)(val) >> 25U) & 0x1UL)
#define GFXREG_FRAMEDUMP_SETM_TOGGLEFIELD(s,val) ( (s)->control = ((s)->control & ~0x2000000UL) | (((CYGFX_U32)(val) << 25U) & 0x2000000UL) )
#define GFXREG_FRAMEDUMP_SET_TOGGLEFIELD(s,val)  ( (s)->control = (((s)->control & ~0x2000000UL) | ((CYGFX_U32)(val) << 25U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_TOGGLEFIELD(s) ((((s)->control) >> 25U) & 0x1UL)
#define GFXREG_FRAMEDUMP_CONTROL_TOGGLEFIELD_RESET 0U

/* FRAMESIZE: Dump window size. */
#define GFXREG_FRAMEDUMP_FRAMESIZE 0x00000004U
/* FRAMEWIDTH: Width of output frame of framedump, given minus one. Do not change during operation. */
#define GFXREG_FRAMEDUMP_FRAMESIZE_FRAMEWIDTH_FSHIFT 0U
#define GFXREG_FRAMEDUMP_FRAMESIZE_FRAMEWIDTH_FMASK 0x3fffU
#define GFXREG_FRAMEDUMP_FRAMESIZE_SETM_FRAMEWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEDUMP_FRAMESIZE_SET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_FRAMESIZE_GET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEDUMP_SETM_FRAMEWIDTH(s,val) ( (s)->framesize = ((s)->framesize & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEDUMP_SET_FRAMEWIDTH(s,val)  ( (s)->framesize = (((s)->framesize & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_FRAMEWIDTH(s) ((((s)->framesize) ) & 0x3fffUL)
#define GFXREG_FRAMEDUMP_FRAMESIZE_FRAMEWIDTH_RESET 319U

/* FRAMEHEIGHT: Height of output frame of framedump, given minus one. Do not change during operation. */
#define GFXREG_FRAMEDUMP_FRAMESIZE_FRAMEHEIGHT_FSHIFT 16U
#define GFXREG_FRAMEDUMP_FRAMESIZE_FRAMEHEIGHT_FMASK 0x3fffU
#define GFXREG_FRAMEDUMP_FRAMESIZE_SETM_FRAMEHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEDUMP_FRAMESIZE_SET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_FRAMESIZE_GET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEDUMP_SETM_FRAMEHEIGHT(s,val) ( (s)->framesize = ((s)->framesize & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEDUMP_SET_FRAMEHEIGHT(s,val)  ( (s)->framesize = (((s)->framesize & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_FRAMEHEIGHT(s) ((((s)->framesize) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEDUMP_FRAMESIZE_FRAMEHEIGHT_RESET 239U

/* INPUTSETUP: Dump window position. */
#define GFXREG_FRAMEDUMP_INPUTSETUP 0x00000008U
/* INPUTCAPTUREXOFFSET: X offset of capture area. Note that capture windows must not overlap the last column of the input frame. Do not change during operation. */
#define GFXREG_FRAMEDUMP_INPUTSETUP_INPUTCAPTUREXOFFSET_FSHIFT 0U
#define GFXREG_FRAMEDUMP_INPUTSETUP_INPUTCAPTUREXOFFSET_FMASK 0x3fffU
#define GFXREG_FRAMEDUMP_INPUTSETUP_SETM_INPUTCAPTUREXOFFSET(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FRAMEDUMP_INPUTSETUP_SET_INPUTCAPTUREXOFFSET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_INPUTSETUP_GET_INPUTCAPTUREXOFFSET(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FRAMEDUMP_SETM_INPUTCAPTUREXOFFSET(s,val) ( (s)->inputsetup = ((s)->inputsetup & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FRAMEDUMP_SET_INPUTCAPTUREXOFFSET(s,val)  ( (s)->inputsetup = (((s)->inputsetup & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_INPUTCAPTUREXOFFSET(s) ((((s)->inputsetup) ) & 0x3fffUL)
#define GFXREG_FRAMEDUMP_INPUTSETUP_INPUTCAPTUREXOFFSET_RESET 0U

/* INPUTCAPTUREYOFFSET: Y offset of capture area. Note that capture windows must not overlap the last row of the input frame. Do not change during operation. */
#define GFXREG_FRAMEDUMP_INPUTSETUP_INPUTCAPTUREYOFFSET_FSHIFT 16U
#define GFXREG_FRAMEDUMP_INPUTSETUP_INPUTCAPTUREYOFFSET_FMASK 0x3fffU
#define GFXREG_FRAMEDUMP_INPUTSETUP_SETM_INPUTCAPTUREYOFFSET(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FRAMEDUMP_INPUTSETUP_SET_INPUTCAPTUREYOFFSET(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_INPUTSETUP_GET_INPUTCAPTUREYOFFSET(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEDUMP_SETM_INPUTCAPTUREYOFFSET(s,val) ( (s)->inputsetup = ((s)->inputsetup & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FRAMEDUMP_SET_INPUTCAPTUREYOFFSET(s,val)  ( (s)->inputsetup = (((s)->inputsetup & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_INPUTCAPTUREYOFFSET(s) ((((s)->inputsetup) >> 16U) & 0x3fffUL)
#define GFXREG_FRAMEDUMP_INPUTSETUP_INPUTCAPTUREYOFFSET_RESET 0U

/* ENABLE: Enable register. */
#define GFXREG_FRAMEDUMP_ENABLE 0x0000000cU
/* DUMPEN: If this is set to 1, the framedump unit will continuously dump all input frames. If set to 0, DumpReq is the other option of triggering the dumping of an input frame. */
#define GFXREG_FRAMEDUMP_ENABLE_DUMPEN_FSHIFT 0U
#define GFXREG_FRAMEDUMP_ENABLE_DUMPEN_FMASK 0x1U
#define GFXREG_FRAMEDUMP_ENABLE_SETM_DUMPEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEDUMP_ENABLE_SET_DUMPEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_ENABLE_GET_DUMPEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMEDUMP_SETM_DUMPEN(s,val) ( (s)->enable = ((s)->enable & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEDUMP_SET_DUMPEN(s,val)  ( (s)->enable = (((s)->enable & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_DUMPEN(s) ((((s)->enable) ) & 0x1UL)
#define GFXREG_FRAMEDUMP_ENABLE_DUMPEN_RESET 0U

/* TRIGGER: Trigger bits. */
#define GFXREG_FRAMEDUMP_TRIGGER 0x00000010U
/* DUMPREQ: Next frame is dumped when this field is set. It is reset by HW once dumping of frame data has started. It cannot be reset by SW. */
#define GFXREG_FRAMEDUMP_TRIGGER_DUMPREQ_FSHIFT 0U
#define GFXREG_FRAMEDUMP_TRIGGER_DUMPREQ_FMASK 0x1U
#define GFXREG_FRAMEDUMP_TRIGGER_SETM_DUMPREQ(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEDUMP_TRIGGER_SET_DUMPREQ(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_TRIGGER_GET_DUMPREQ(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMEDUMP_SETM_DUMPREQ(s,val) ( (s)->trigger = ((s)->trigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEDUMP_SET_DUMPREQ(s,val)  ( (s)->trigger = (((s)->trigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_DUMPREQ(s) ((((s)->trigger) ) & 0x1UL)
#define GFXREG_FRAMEDUMP_TRIGGER_DUMPREQ_RESET 0U

/* STATUS: Status register. */
#define GFXREG_FRAMEDUMP_STATUS 0x00000014U
/* DUMPIDLE: If read as '1', the framedump unit is currently not dumping any frames. If read as '0' the framedump unit is currently dumping frames. */
#define GFXREG_FRAMEDUMP_STATUS_DUMPIDLE_FSHIFT 0U
#define GFXREG_FRAMEDUMP_STATUS_DUMPIDLE_FMASK 0x1U
#define GFXREG_FRAMEDUMP_STATUS_SETM_DUMPIDLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FRAMEDUMP_STATUS_SET_DUMPIDLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FRAMEDUMP_STATUS_GET_DUMPIDLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FRAMEDUMP_SETM_DUMPIDLE(s,val) ( (s)->status = ((s)->status & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FRAMEDUMP_SET_DUMPIDLE(s,val)  ( (s)->status = (((s)->status & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FRAMEDUMP_GET_DUMPIDLE(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_FRAMEDUMP_STATUS_DUMPIDLE_RESET 1U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_FRAMEDUMP_REGISTER_H */

