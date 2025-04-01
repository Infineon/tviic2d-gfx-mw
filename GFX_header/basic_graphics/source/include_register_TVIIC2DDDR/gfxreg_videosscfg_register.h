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
 * \version     1.0
 * \date        Mon Jul 05 13:05:13 2021
 * \file        gfxreg_videosscfg_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   videosscfg
 *              Source:   videosscfg.component.xml
 *              Template: component_h.tpl
 * \brief      Iris videosscfg register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_VIDEOSSCFG_REGISTER_H
#define GFXREG_VIDEOSSCFG_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* videosscfg registers */
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


/* CTL: IP Control Register
   This is the core control register, which will be set by software to enable/disable VIDEOSS. This register, and the bit offset of the enable/disable bit, are required as       define in the MXS40 SAS. Note that disabling the IP results in the generation of a system wide reset signal. After the IP is re-enabled, all registers required for proper system operation must be        re-programmed (NO data is retained when the IP is disabled). */
#define GFXREG_VIDEOSSCFG_CTL 0x00000000U
/* ENABLED: VIDEOSS enable/disable bit.  */
#define GFXREG_VIDEOSSCFG_CTL_ENABLED_FSHIFT 31U
#define GFXREG_VIDEOSSCFG_CTL_ENABLED_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_CTL_SETM_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_VIDEOSSCFG_CTL_SET_ENABLED(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_CTL_GET_ENABLED(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_SETM_ENABLED(s,val) ( (s)->ctl = ((s)->ctl & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_VIDEOSSCFG_SET_ENABLED(s,val)  ( (s)->ctl = (((s)->ctl & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_ENABLED(s) ((((s)->ctl) >> 31U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_CTL_ENABLED_DIS 0U /* Disable the entire VIDEOSS. System will be held in reset until re-enabled (with the exception of the AHB interface and this register) */
#define GFXREG_VIDEOSSCFG_CTL_ENABLED_EN 1U /* Enable VIDEOSS */
#define GFXREG_VIDEOSSCFG_CTL_ENABLED_RESET 0U

/* GFX2D_CTL: IP Control Register for Graphics 2D Core */
#define GFXREG_VIDEOSSCFG_GFX2D_CTL 0x00000004U
/* GFX2D_ENABLED: If disabled, the Graphics 2D Core is put on reset and its clock input gated. */
#define GFXREG_VIDEOSSCFG_GFX2D_CTL_GFX2D_ENABLED_FSHIFT 31U
#define GFXREG_VIDEOSSCFG_GFX2D_CTL_GFX2D_ENABLED_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_GFX2D_CTL_SETM_GFX2D_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_VIDEOSSCFG_GFX2D_CTL_SET_GFX2D_ENABLED(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_GFX2D_CTL_GET_GFX2D_ENABLED(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_SETM_GFX2D_ENABLED(s,val) ( (s)->gfx2d_ctl = ((s)->gfx2d_ctl & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_VIDEOSSCFG_SET_GFX2D_ENABLED(s,val)  ( (s)->gfx2d_ctl = (((s)->gfx2d_ctl & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_GFX2D_ENABLED(s) ((((s)->gfx2d_ctl) >> 31U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GFX2D_CTL_GFX2D_ENABLED_RESET 1U

/* IPIDENTIFIER: IP and Design Release Identification */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER 0x00000008U
/* IPPLATFORM: Name of SOC Platform. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPLATFORM_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPLATFORM_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPPLATFORM(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_IPPLATFORM(s) ((((s)->ipidentifier) ) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPLATFORM_MXS40_S40E 0U /* MXS40 High Temperature Variant. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPLATFORM_RESET (none)U

/* IPNAME: Name of IP family. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_FSHIFT 4U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPNAME(val) (((CYGFX_U32)(val) >> 4U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_GET_IPNAME(s) ((((s)->ipidentifier) >> 4U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_VIDEOSS 0U /* Video and Graphics Subsystem with internal SRAM. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_VIDEOSSDDR 1U /* Video and Graphics Subsystem for external DDR-SDRAM. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_VIDEOSSLITE 2U /* Display Composition Subsystem. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_RESET (none)U

/* IPVERSION: IP Version Number. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPVERSION_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPVERSION_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPVERSION(val) (((CYGFX_U32)(val) >> 8U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_GET_IPVERSION(s) ((((s)->ipidentifier) >> 8U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPVERSION_RESET (none)U

/* IPPHASE: IP Phase Number. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPHASE_FSHIFT 12U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPHASE_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPPHASE(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_GET_IPPHASE(s) ((((s)->ipidentifier) >> 12U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPHASE_RESET (none)U

/* IPMATURITY: IP Maturity Status with Chip Integration Cycle targets (CIC). */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPMATURITY(val) (((CYGFX_U32)(val) >> 16U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_GET_IPMATURITY(s) ((((s)->ipidentifier) >> 16U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_NONE 0U /* Undefined */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_CPR 1U /* Implementation incomplete (for CIC Physical Readiness Review). */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_CMR 2U /* Implementation complete (for CIC Mock Review). */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_CFR 3U /* Verification complete (for CIC Final Handoff Review). */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_RESET (none)U

/* IPRELEASE: Release ID. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPRELEASE_FSHIFT 20U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPRELEASE_FMASK 0xffU
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPRELEASE(val) (((CYGFX_U32)(val) >> 20U) & 0xffUL)
#define GFXREG_VIDEOSSCFG_GET_IPRELEASE(s) ((((s)->ipidentifier) >> 20U) & 0xffUL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPRELEASE_RESET (none)U

/* IPIMPLEMENTATION: Implementation type. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPIMPLEMENTATION_FSHIFT 28U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPIMPLEMENTATION_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPIMPLEMENTATION(val) (((CYGFX_U32)(val) >> 28U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_GET_IPIMPLEMENTATION(s) ((((s)->ipidentifier) >> 28U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPIMPLEMENTATION_RTL 0U /* Logic design for FPGA and ASIC synthesis. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPIMPLEMENTATION_TLM 1U /* Bit-true and un-timed reference model. */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPIMPLEMENTATION_RESET (none)U

/* IPCONFIGURATION: IP Design Configuration
   The value of this register is a unique identifier for a certain IP configuration, which is given by SoC product configuration.     */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION 0x0000000cU
/* FPDLINK1: 2nd FPDLink Video Output Interface available (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_FPDLINK1_FSHIFT 3U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_FPDLINK1_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_FPDLINK1(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_FPDLINK1(s) ((((s)->ipconfiguration) >> 3U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_FPDLINK1_RESET (none)U

/* CLKSPEED: Allowed maximum for core and AXI bus clock frequency. */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_CLKSPEED_FSHIFT 12U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_CLKSPEED_FMASK 0xfU
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_CLKSPEED(val) (((CYGFX_U32)(val) >> 12U) & 0xfUL)
#define GFXREG_VIDEOSSCFG_GET_CLKSPEED(s) ((((s)->ipconfiguration) >> 12U) & 0xfUL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_CLKSPEED_MHZ_200 0U /* 200 MHz */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_CLKSPEED_MHZ_250 1U /* 250 MHz */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_CLKSPEED_MHZ_266 2U /* 266 MHz */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_CLKSPEED_RESET (none)U

/* VRAMSIZE: Size of embedded Video RAM in MB. Is 0 if none available. */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_VRAMSIZE_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_VRAMSIZE_FMASK 0xfU
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_VRAMSIZE(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_VIDEOSSCFG_GET_VRAMSIZE(s) ((((s)->ipconfiguration) >> 16U) & 0xfUL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_VRAMSIZE_RESET (none)U

/* CLKDSP0CFG: Display 0 Clock Configuration Register */
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG 0x00000010U
/* DIVVAL0: Clock Divider Setting (KDIV) */
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_DIVVAL0_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_DIVVAL0_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_SETM_DIVVAL0(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_SET_DIVVAL0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_GET_DIVVAL0(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_VIDEOSSCFG_SETM_DIVVAL0(s,val) ( (s)->clkdsp0cfg = ((s)->clkdsp0cfg & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_VIDEOSSCFG_SET_DIVVAL0(s,val)  ( (s)->clkdsp0cfg = (((s)->clkdsp0cfg & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_DIVVAL0(s) ((((s)->clkdsp0cfg) ) & 0x3UL)
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_DIVVAL0_DIV1 0U /* No division */
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_DIVVAL0_DIV2 1U /* Divide by 2 */
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_DIVVAL0_DIV4 2U /* Divide by 4 */
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_DIVVAL0_DIV8 3U /* Divide by 8 */
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_DIVVAL0_RESET 0U

/* TTLCLKINV0: Enable bit for pixel clock inversion on TTL display output interface 0. If enabled, pixel data changes with falling instead of rising clock edge (180 deg phase shift). */
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_TTLCLKINV0_FSHIFT 4U
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_TTLCLKINV0_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_SETM_TTLCLKINV0(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_SET_TTLCLKINV0(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_GET_TTLCLKINV0(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_SETM_TTLCLKINV0(s,val) ( (s)->clkdsp0cfg = ((s)->clkdsp0cfg & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_VIDEOSSCFG_SET_TTLCLKINV0(s,val)  ( (s)->clkdsp0cfg = (((s)->clkdsp0cfg & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTLCLKINV0(s) ((((s)->clkdsp0cfg) >> 4U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_CLKDSP0CFG_TTLCLKINV0_RESET 1U

/* CLKDSP1CFG: Display 1 Clock Configuration Register */
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG 0x00000014U
/* DIVVAL1: Clock Divider Setting (KDIV) */
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_DIVVAL1_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_DIVVAL1_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_SETM_DIVVAL1(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_SET_DIVVAL1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_GET_DIVVAL1(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_VIDEOSSCFG_SETM_DIVVAL1(s,val) ( (s)->clkdsp1cfg = ((s)->clkdsp1cfg & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_VIDEOSSCFG_SET_DIVVAL1(s,val)  ( (s)->clkdsp1cfg = (((s)->clkdsp1cfg & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_DIVVAL1(s) ((((s)->clkdsp1cfg) ) & 0x3UL)
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_DIVVAL1_DIV1 0U /* No division */
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_DIVVAL1_DIV2 1U /* Divide by 2 */
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_DIVVAL1_DIV4 2U /* Divide by 4 */
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_DIVVAL1_DIV8 3U /* Divide by 8 */
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_DIVVAL1_RESET 0U

/* TTLCLKINV1: Enable bit for pixel clock inversion on TTL display output interface 1. If enabled, pixel data changes with falling instead of rising clock edge (180 deg phase shift). */
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_TTLCLKINV1_FSHIFT 4U
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_TTLCLKINV1_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_SETM_TTLCLKINV1(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_SET_TTLCLKINV1(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_GET_TTLCLKINV1(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_SETM_TTLCLKINV1(s,val) ( (s)->clkdsp1cfg = ((s)->clkdsp1cfg & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_VIDEOSSCFG_SET_TTLCLKINV1(s,val)  ( (s)->clkdsp1cfg = (((s)->clkdsp1cfg & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTLCLKINV1(s) ((((s)->clkdsp1cfg) >> 4U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_CLKDSP1CFG_TTLCLKINV1_RESET 1U

/* CAP0CFG: Capture 0 Configuration
   This register controls which interface is selected as a capture source. This field may NOT be re-programmed once the system is running. Unpredictable hardware behavior will result.  */
#define GFXREG_VIDEOSSCFG_CAP0CFG 0x00000018U
/* CAP0SRC: Capture Source Selection */
#define GFXREG_VIDEOSSCFG_CAP0CFG_CAP0SRC_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_CAP0CFG_CAP0SRC_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_CAP0CFG_SETM_CAP0SRC(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_VIDEOSSCFG_CAP0CFG_SET_CAP0SRC(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_CAP0CFG_GET_CAP0SRC(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_VIDEOSSCFG_SETM_CAP0SRC(s,val) ( (s)->cap0cfg = ((s)->cap0cfg & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_VIDEOSSCFG_SET_CAP0SRC(s,val)  ( (s)->cap0cfg = (((s)->cap0cfg & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_CAP0SRC(s) ((((s)->cap0cfg) ) & 0x3UL)
#define GFXREG_VIDEOSSCFG_CAP0CFG_CAP0SRC_TTL 0U /* TTL0 interface selected */
#define GFXREG_VIDEOSSCFG_CAP0CFG_CAP0SRC_CSI 1U /* CSI-2 (DPHY) Interface Selected */
#define GFXREG_VIDEOSSCFG_CAP0CFG_CAP0SRC_DSP0 2U /* Reserved, do not use */
#define GFXREG_VIDEOSSCFG_CAP0CFG_CAP0SRC_DSP1 3U /* Reserved, do not use */
#define GFXREG_VIDEOSSCFG_CAP0CFG_CAP0SRC_RESET 0U

/* FPDLINKCFG: FPDLink Configuration */
#define GFXREG_VIDEOSSCFG_FPDLINKCFG 0x0000001cU
/* FPDLINKSEL: Selects the channel mode for the two FPDlink interfaces. */
#define GFXREG_VIDEOSSCFG_FPDLINKCFG_FPDLINKSEL_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_FPDLINKCFG_FPDLINKSEL_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_FPDLINKCFG_SETM_FPDLINKSEL(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_VIDEOSSCFG_FPDLINKCFG_SET_FPDLINKSEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_FPDLINKCFG_GET_FPDLINKSEL(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_VIDEOSSCFG_SETM_FPDLINKSEL(s,val) ( (s)->fpdlinkcfg = ((s)->fpdlinkcfg & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_VIDEOSSCFG_SET_FPDLINKSEL(s,val)  ( (s)->fpdlinkcfg = (((s)->fpdlinkcfg & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_FPDLINKSEL(s) ((((s)->fpdlinkcfg) ) & 0x1UL)
#define GFXREG_VIDEOSSCFG_FPDLINKCFG_FPDLINKSEL_SINGLE 0U /* FPDlink 0 and 1 are operating independently, driven by the two Display Engine 0 and 1. */
#define GFXREG_VIDEOSSCFG_FPDLINKCFG_FPDLINKSEL_DUAL 1U /* FPDlink 0 and 1 are operating synchronously, both driven by Display Engine 0. */
#define GFXREG_VIDEOSSCFG_FPDLINKCFG_FPDLINKSEL_RESET 0U

/* DSP0_CTL: Enable for Display Engine 0 */
#define GFXREG_VIDEOSSCFG_DSP0_CTL 0x00000020U
/* DSP0_ENABLED: This field, along with CTL.ENABLED above which enables the whole videoss IP, controls the clock and reset release of the DSP0 clock domain. */
#define GFXREG_VIDEOSSCFG_DSP0_CTL_DSP0_ENABLED_FSHIFT 31U
#define GFXREG_VIDEOSSCFG_DSP0_CTL_DSP0_ENABLED_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_DSP0_CTL_SETM_DSP0_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_VIDEOSSCFG_DSP0_CTL_SET_DSP0_ENABLED(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_DSP0_CTL_GET_DSP0_ENABLED(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_SETM_DSP0_ENABLED(s,val) ( (s)->dsp0_ctl = ((s)->dsp0_ctl & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_VIDEOSSCFG_SET_DSP0_ENABLED(s,val)  ( (s)->dsp0_ctl = (((s)->dsp0_ctl & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_DSP0_ENABLED(s) ((((s)->dsp0_ctl) >> 31U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_DSP0_CTL_DSP0_ENABLED_RESET 0U

/* DSP1_CTL: Enable for Display Engine 1 */
#define GFXREG_VIDEOSSCFG_DSP1_CTL 0x00000024U
/* DSP1_ENABLED: This field, along with CTL.ENABLED above which enables the whole videoss IP, controls the clock and reset release of the DSP1 clock domain. */
#define GFXREG_VIDEOSSCFG_DSP1_CTL_DSP1_ENABLED_FSHIFT 31U
#define GFXREG_VIDEOSSCFG_DSP1_CTL_DSP1_ENABLED_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_DSP1_CTL_SETM_DSP1_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_VIDEOSSCFG_DSP1_CTL_SET_DSP1_ENABLED(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_DSP1_CTL_GET_DSP1_ENABLED(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_SETM_DSP1_ENABLED(s,val) ( (s)->dsp1_ctl = ((s)->dsp1_ctl & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_VIDEOSSCFG_SET_DSP1_ENABLED(s,val)  ( (s)->dsp1_ctl = (((s)->dsp1_ctl & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_DSP1_ENABLED(s) ((((s)->dsp1_ctl) >> 31U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_DSP1_CTL_DSP1_ENABLED_RESET 0U

/* TTL0_MUX0: Pin multiplexer for capture input from TTL.
   Valid pin ID values are 0 to 26. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX0 0x00000028U
/* TTL0_COL0: Pin ID for color bit 0 or ITU656 data bit 0 (10-bit mode only). */
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL0_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL0_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_SETM_TTL0_COL0(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_SET_TTL0_COL0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_GET_TTL0_COL0(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL0(s,val) ( (s)->ttl0_mux0 = ((s)->ttl0_mux0 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL0(s,val)  ( (s)->ttl0_mux0 = (((s)->ttl0_mux0 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL0(s) ((((s)->ttl0_mux0) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL0_RESET 0U

/* TTL0_COL1: Pin ID for color bit 1 or ITU656 data bit 1 (10-bit mode only). */
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL1_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL1_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_SETM_TTL0_COL1(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_SET_TTL0_COL1(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_GET_TTL0_COL1(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL1(s,val) ( (s)->ttl0_mux0 = ((s)->ttl0_mux0 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL1(s,val)  ( (s)->ttl0_mux0 = (((s)->ttl0_mux0 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL1(s) ((((s)->ttl0_mux0) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL1_RESET 1U

/* TTL0_COL2: Pin ID for color bit 2 or ITU656 data bit 2. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL2_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL2_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_SETM_TTL0_COL2(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_SET_TTL0_COL2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_GET_TTL0_COL2(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL2(s,val) ( (s)->ttl0_mux0 = ((s)->ttl0_mux0 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL2(s,val)  ( (s)->ttl0_mux0 = (((s)->ttl0_mux0 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL2(s) ((((s)->ttl0_mux0) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL2_RESET 2U

/* TTL0_COL3: Pin ID for color bit 3 or ITU656 data bit 3. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL3_FSHIFT 24U
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL3_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_SETM_TTL0_COL3(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_SET_TTL0_COL3(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_GET_TTL0_COL3(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL3(s,val) ( (s)->ttl0_mux0 = ((s)->ttl0_mux0 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL3(s,val)  ( (s)->ttl0_mux0 = (((s)->ttl0_mux0 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL3(s) ((((s)->ttl0_mux0) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX0_TTL0_COL3_RESET 3U

/* TTL0_MUX1: Pin multiplexer for capture input from TTL.
   Valid pin ID values are 0 to 26. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX1 0x0000002cU
/* TTL0_COL4: Pin ID for color bit 4 or ITU656 data bit 4. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL4_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL4_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_SETM_TTL0_COL4(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_SET_TTL0_COL4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_GET_TTL0_COL4(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL4(s,val) ( (s)->ttl0_mux1 = ((s)->ttl0_mux1 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL4(s,val)  ( (s)->ttl0_mux1 = (((s)->ttl0_mux1 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL4(s) ((((s)->ttl0_mux1) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL4_RESET 4U

/* TTL0_COL5: Pin ID for color bit 5 or ITU656 data bit 5. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL5_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL5_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_SETM_TTL0_COL5(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_SET_TTL0_COL5(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_GET_TTL0_COL5(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL5(s,val) ( (s)->ttl0_mux1 = ((s)->ttl0_mux1 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL5(s,val)  ( (s)->ttl0_mux1 = (((s)->ttl0_mux1 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL5(s) ((((s)->ttl0_mux1) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL5_RESET 5U

/* TTL0_COL6: Pin ID for color bit 6 or ITU656 data bit 6. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL6_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL6_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_SETM_TTL0_COL6(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_SET_TTL0_COL6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_GET_TTL0_COL6(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL6(s,val) ( (s)->ttl0_mux1 = ((s)->ttl0_mux1 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL6(s,val)  ( (s)->ttl0_mux1 = (((s)->ttl0_mux1 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL6(s) ((((s)->ttl0_mux1) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL6_RESET 6U

/* TTL0_COL7: Pin ID for color bit 7 or ITU656 data bit 7. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL7_FSHIFT 24U
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL7_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_SETM_TTL0_COL7(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_SET_TTL0_COL7(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_GET_TTL0_COL7(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL7(s,val) ( (s)->ttl0_mux1 = ((s)->ttl0_mux1 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL7(s,val)  ( (s)->ttl0_mux1 = (((s)->ttl0_mux1 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL7(s) ((((s)->ttl0_mux1) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX1_TTL0_COL7_RESET 7U

/* TTL0_MUX2: Pin multiplexer for capture input from TTL.
   Valid pin ID values are 0 to 26. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX2 0x00000030U
/* TTL0_COL8: Pin ID for color bit 8 or ITU656 data bit 8. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL8_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL8_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_SETM_TTL0_COL8(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_SET_TTL0_COL8(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_GET_TTL0_COL8(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL8(s,val) ( (s)->ttl0_mux2 = ((s)->ttl0_mux2 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL8(s,val)  ( (s)->ttl0_mux2 = (((s)->ttl0_mux2 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL8(s) ((((s)->ttl0_mux2) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL8_RESET 8U

/* TTL0_COL9: Pin ID for color bit 9 or ITU656 data bit 9. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL9_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL9_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_SETM_TTL0_COL9(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_SET_TTL0_COL9(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_GET_TTL0_COL9(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL9(s,val) ( (s)->ttl0_mux2 = ((s)->ttl0_mux2 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL9(s,val)  ( (s)->ttl0_mux2 = (((s)->ttl0_mux2 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL9(s) ((((s)->ttl0_mux2) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL9_RESET 9U

/* TTL0_COL10: Pin ID for color bit 10. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL10_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL10_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_SETM_TTL0_COL10(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_SET_TTL0_COL10(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_GET_TTL0_COL10(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL10(s,val) ( (s)->ttl0_mux2 = ((s)->ttl0_mux2 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL10(s,val)  ( (s)->ttl0_mux2 = (((s)->ttl0_mux2 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL10(s) ((((s)->ttl0_mux2) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL10_RESET 10U

/* TTL0_COL11: Pin ID for color bit 11. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL11_FSHIFT 24U
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL11_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_SETM_TTL0_COL11(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_SET_TTL0_COL11(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_GET_TTL0_COL11(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL11(s,val) ( (s)->ttl0_mux2 = ((s)->ttl0_mux2 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL11(s,val)  ( (s)->ttl0_mux2 = (((s)->ttl0_mux2 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL11(s) ((((s)->ttl0_mux2) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX2_TTL0_COL11_RESET 11U

/* TTL0_MUX3: Pin multiplexer for capture input from TTL.
   Valid pin ID values are 0 to 26. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX3 0x00000034U
/* TTL0_COL12: Pin ID for color bit 12. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL12_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL12_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_SETM_TTL0_COL12(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_SET_TTL0_COL12(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_GET_TTL0_COL12(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL12(s,val) ( (s)->ttl0_mux3 = ((s)->ttl0_mux3 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL12(s,val)  ( (s)->ttl0_mux3 = (((s)->ttl0_mux3 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL12(s) ((((s)->ttl0_mux3) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL12_RESET 12U

/* TTL0_COL13: Pin ID for color bit 13. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL13_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL13_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_SETM_TTL0_COL13(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_SET_TTL0_COL13(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_GET_TTL0_COL13(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL13(s,val) ( (s)->ttl0_mux3 = ((s)->ttl0_mux3 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL13(s,val)  ( (s)->ttl0_mux3 = (((s)->ttl0_mux3 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL13(s) ((((s)->ttl0_mux3) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL13_RESET 13U

/* TTL0_COL14: Pin ID for color bit 14. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL14_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL14_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_SETM_TTL0_COL14(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_SET_TTL0_COL14(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_GET_TTL0_COL14(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL14(s,val) ( (s)->ttl0_mux3 = ((s)->ttl0_mux3 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL14(s,val)  ( (s)->ttl0_mux3 = (((s)->ttl0_mux3 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL14(s) ((((s)->ttl0_mux3) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL14_RESET 14U

/* TTL0_COL15: Pin ID for color bit 15. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL15_FSHIFT 24U
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL15_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_SETM_TTL0_COL15(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_SET_TTL0_COL15(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_GET_TTL0_COL15(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL15(s,val) ( (s)->ttl0_mux3 = ((s)->ttl0_mux3 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL15(s,val)  ( (s)->ttl0_mux3 = (((s)->ttl0_mux3 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL15(s) ((((s)->ttl0_mux3) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX3_TTL0_COL15_RESET 15U

/* TTL0_MUX4: Pin multiplexer for capture input from TTL.
   Valid pin ID values are 0 to 26. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX4 0x00000038U
/* TTL0_COL16: Pin ID for color bit 16. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL16_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL16_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_SETM_TTL0_COL16(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_SET_TTL0_COL16(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_GET_TTL0_COL16(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL16(s,val) ( (s)->ttl0_mux4 = ((s)->ttl0_mux4 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL16(s,val)  ( (s)->ttl0_mux4 = (((s)->ttl0_mux4 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL16(s) ((((s)->ttl0_mux4) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL16_RESET 16U

/* TTL0_COL17: Pin ID for color bit 17. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL17_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL17_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_SETM_TTL0_COL17(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_SET_TTL0_COL17(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_GET_TTL0_COL17(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL17(s,val) ( (s)->ttl0_mux4 = ((s)->ttl0_mux4 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL17(s,val)  ( (s)->ttl0_mux4 = (((s)->ttl0_mux4 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL17(s) ((((s)->ttl0_mux4) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL17_RESET 17U

/* TTL0_COL18: Pin ID for color bit 18. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL18_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL18_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_SETM_TTL0_COL18(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_SET_TTL0_COL18(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_GET_TTL0_COL18(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL18(s,val) ( (s)->ttl0_mux4 = ((s)->ttl0_mux4 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL18(s,val)  ( (s)->ttl0_mux4 = (((s)->ttl0_mux4 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL18(s) ((((s)->ttl0_mux4) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL18_RESET 18U

/* TTL0_COL19: Pin ID for color bit 19. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL19_FSHIFT 24U
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL19_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_SETM_TTL0_COL19(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_SET_TTL0_COL19(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_GET_TTL0_COL19(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL19(s,val) ( (s)->ttl0_mux4 = ((s)->ttl0_mux4 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL19(s,val)  ( (s)->ttl0_mux4 = (((s)->ttl0_mux4 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL19(s) ((((s)->ttl0_mux4) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX4_TTL0_COL19_RESET 19U

/* TTL0_MUX5: Pin multiplexer for capture input from TTL.
   Valid pin ID values are 0 to 26. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX5 0x0000003cU
/* TTL0_COL20: Pin ID for color bit 20. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL20_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL20_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_SETM_TTL0_COL20(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_SET_TTL0_COL20(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_GET_TTL0_COL20(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL20(s,val) ( (s)->ttl0_mux5 = ((s)->ttl0_mux5 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL20(s,val)  ( (s)->ttl0_mux5 = (((s)->ttl0_mux5 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL20(s) ((((s)->ttl0_mux5) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL20_RESET 20U

/* TTL0_COL21: Pin ID for color bit 21. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL21_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL21_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_SETM_TTL0_COL21(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_SET_TTL0_COL21(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_GET_TTL0_COL21(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL21(s,val) ( (s)->ttl0_mux5 = ((s)->ttl0_mux5 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL21(s,val)  ( (s)->ttl0_mux5 = (((s)->ttl0_mux5 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL21(s) ((((s)->ttl0_mux5) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL21_RESET 21U

/* TTL0_COL22: Pin ID for color bit 22. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL22_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL22_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_SETM_TTL0_COL22(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_SET_TTL0_COL22(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_GET_TTL0_COL22(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL22(s,val) ( (s)->ttl0_mux5 = ((s)->ttl0_mux5 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL22(s,val)  ( (s)->ttl0_mux5 = (((s)->ttl0_mux5 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL22(s) ((((s)->ttl0_mux5) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL22_RESET 22U

/* TTL0_COL23: Pin ID for color bit 23. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL23_FSHIFT 24U
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL23_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_SETM_TTL0_COL23(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_SET_TTL0_COL23(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_GET_TTL0_COL23(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_COL23(s,val) ( (s)->ttl0_mux5 = ((s)->ttl0_mux5 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_COL23(s,val)  ( (s)->ttl0_mux5 = (((s)->ttl0_mux5 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_COL23(s) ((((s)->ttl0_mux5) >> 24U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX5_TTL0_COL23_RESET 23U

/* TTL0_MUX6: Pin multiplexer for capture input from TTL.
   Valid pin ID values are 0 to 26. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX6 0x00000040U
/* TTL0_HSYNC: Pin ID for horizontal sync signal. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_TTL0_HSYNC_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_TTL0_HSYNC_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_SETM_TTL0_HSYNC(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_SET_TTL0_HSYNC(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_GET_TTL0_HSYNC(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_HSYNC(s,val) ( (s)->ttl0_mux6 = ((s)->ttl0_mux6 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_HSYNC(s,val)  ( (s)->ttl0_mux6 = (((s)->ttl0_mux6 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_HSYNC(s) ((((s)->ttl0_mux6) ) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_TTL0_HSYNC_RESET 24U

/* TTL0_VSYNC: Pin ID for vertical sync signal. */
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_TTL0_VSYNC_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_TTL0_VSYNC_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_SETM_TTL0_VSYNC(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_SET_TTL0_VSYNC(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_GET_TTL0_VSYNC(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_VSYNC(s,val) ( (s)->ttl0_mux6 = ((s)->ttl0_mux6 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_VSYNC(s,val)  ( (s)->ttl0_mux6 = (((s)->ttl0_mux6 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_VSYNC(s) ((((s)->ttl0_mux6) >> 8U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_TTL0_VSYNC_RESET 25U

/* TTL0_EN: Pin ID for enable signal (active pixels). */
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_TTL0_EN_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_TTL0_EN_FMASK 0x1fU
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_SETM_TTL0_EN(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_SET_TTL0_EN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_GET_TTL0_EN(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_SETM_TTL0_EN(s,val) ( (s)->ttl0_mux6 = ((s)->ttl0_mux6 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_VIDEOSSCFG_SET_TTL0_EN(s,val)  ( (s)->ttl0_mux6 = (((s)->ttl0_mux6 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_VIDEOSSCFG_GET_TTL0_EN(s) ((((s)->ttl0_mux6) >> 16U) & 0x1fUL)
#define GFXREG_VIDEOSSCFG_TTL0_MUX6_TTL0_EN_RESET 26U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_VIDEOSSCFG_REGISTER_H */

