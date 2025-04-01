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
 * \date        Tue May 26 11:58:38 2020
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

/* IPIDENTIFIER: IP and Design Release Identification
   The value of this register is a unique identifier for a certain IP design release.     */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER 0x00000008U
/* IPPLATFORM: Name of SOC Platform */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPLATFORM_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPLATFORM_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPPLATFORM(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_IPPLATFORM(s) ((((s)->ipidentifier) ) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPLATFORM_MXS40_S40E 0U /* MXS40 High Temperature Variant */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPLATFORM_RESET (none)U

/* IPNAME: Name of IP */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_FSHIFT 4U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPNAME(val) (((CYGFX_U32)(val) >> 4U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_GET_IPNAME(s) ((((s)->ipidentifier) >> 4U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_VIDEOSS 0U /* Video and Graphics Subsystem with internal SRAM */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_VIDEOSSDDR 1U /* Video and Graphics Subsystem for external DDR-SDRAM */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_VIDEOSSLITE 2U /* Display Composition Subsystem */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPNAME_RESET (none)U

/* IPVERSION: IP Vault Version */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPVERSION_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPVERSION_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPVERSION(val) (((CYGFX_U32)(val) >> 8U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_GET_IPVERSION(s) ((((s)->ipidentifier) >> 8U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPVERSION_RESET (none)U

/* IPPHASE: IP Vault Phase */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPHASE_FSHIFT 12U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPHASE_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPPHASE(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_GET_IPPHASE(s) ((((s)->ipidentifier) >> 12U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPPHASE_RESET (none)U

/* IPMATURITY: CIC Chip Integration Cycle */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_FSHIFT 16U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_FMASK 0x3U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPMATURITY(val) (((CYGFX_U32)(val) >> 16U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_GET_IPMATURITY(s) ((((s)->ipidentifier) >> 16U) & 0x3UL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_NONE 0U /* Pre Review */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_CPR 1U /* CIC Physical Readiness Review */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_CMR 2U /* CIC Mock Review */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_CFR 3U /* CIC Final Handoff Review */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPMATURITY_RESET (none)U

/* IPRELEASE: Design Release ID */
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPRELEASE_FSHIFT 20U
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPRELEASE_FMASK 0xffU
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_GET_IPRELEASE(val) (((CYGFX_U32)(val) >> 20U) & 0xffUL)
#define GFXREG_VIDEOSSCFG_GET_IPRELEASE(s) ((((s)->ipidentifier) >> 20U) & 0xffUL)
#define GFXREG_VIDEOSSCFG_IPIDENTIFIER_IPRELEASE_RESET (none)U

/* IPCONFIGURATION: IP Design Configuration
   The value of this register is a unique identifier for a certain IP configuration, which is given by SoC product configuration.     */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION 0x0000000cU
/* GFX2D: Graphics 2D Core available (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GFX2D_FSHIFT 0U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GFX2D_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_GFX2D(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_GFX2D(s) ((((s)->ipconfiguration) ) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GFX2D_RESET (none)U

/* MIPICSI: MIPI CSI-2 Video Input Interface available (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_MIPICSI_FSHIFT 1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_MIPICSI_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_MIPICSI(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_MIPICSI(s) ((((s)->ipconfiguration) >> 1U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_MIPICSI_RESET (none)U

/* FPDLINK0: 1st FPDLink Video Output Interface available (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_FPDLINK0_FSHIFT 2U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_FPDLINK0_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_FPDLINK0(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_FPDLINK0(s) ((((s)->ipconfiguration) >> 2U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_FPDLINK0_RESET (none)U

/* FPDLINK1: 2nd FPDLink Video Output Interface available (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_FPDLINK1_FSHIFT 3U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_FPDLINK1_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_FPDLINK1(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_FPDLINK1(s) ((((s)->ipconfiguration) >> 3U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_FPDLINK1_RESET (none)U

/* LCDBUSIF: LCD Bus Output Interface available (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_LCDBUSIF_FSHIFT 4U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_LCDBUSIF_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_LCDBUSIF(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_LCDBUSIF(s) ((((s)->ipconfiguration) >> 4U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_LCDBUSIF_RESET (none)U

/* DISPLAY1: 2nd Display Engine available (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_DISPLAY1_FSHIFT 5U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_DISPLAY1_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_DISPLAY1(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_DISPLAY1(s) ((((s)->ipconfiguration) >> 5U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_DISPLAY1_RESET (none)U

/* CAPTURE0: Capture Engine available (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_CAPTURE0_FSHIFT 6U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_CAPTURE0_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_CAPTURE0(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_CAPTURE0(s) ((((s)->ipconfiguration) >> 6U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_CAPTURE0_RESET (none)U

/* WARPING: Warping Layer available in Composition Engine (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_WARPING_FSHIFT 7U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_WARPING_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_WARPING(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_WARPING(s) ((((s)->ipconfiguration) >> 7U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_WARPING_RESET (none)U

/* TCON: Timing Controller available in Display Engine (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_TCON_FSHIFT 8U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_TCON_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_TCON(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_TCON(s) ((((s)->ipconfiguration) >> 8U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_TCON_RESET (none)U

/* VRAM: Embedded Video RAM available (0 = no, 1 = yes) */
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_VRAM_FSHIFT 9U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_VRAM_FMASK 0x1U
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_GET_VRAM(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_GET_VRAM(s) ((((s)->ipconfiguration) >> 9U) & 0x1UL)
#define GFXREG_VIDEOSSCFG_IPCONFIGURATION_VRAM_RESET (none)U

/* VRAMSIZE: Size of embedded Video RAM if available (in MB). */
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



/*! \endcond Hide for doxygen */

#endif /* GFXREG_VIDEOSSCFG_REGISTER_H */

