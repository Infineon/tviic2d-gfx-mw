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
 * \version     0.0
 * \date        Thu Sep 24 07:57:03 2020
 * \file        gfxreg_fpdlink_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   fpdlink
 *              Source:   fpdlink.component.xml
 *              Template: component_h.tpl
 * \brief      Iris fpdlink register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_FPDLINK_REGISTER_H
#define GFXREG_FPDLINK_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* fpdlink registers */
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


/* CTL: IP Control register for FPDLink */
#define GFXREG_FPDLINK_CTL 0x00000000U
/* PD_TX: Power down bit, when high all blocks inside the FPDLink block shall be powered down */
#define GFXREG_FPDLINK_CTL_PD_TX_FSHIFT 0U
#define GFXREG_FPDLINK_CTL_PD_TX_FMASK 0x1U
#define GFXREG_FPDLINK_CTL_SETM_PD_TX(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FPDLINK_CTL_SET_PD_TX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CTL_GET_PD_TX(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FPDLINK_SETM_PD_TX(s,val) ( (s)->ctl = ((s)->ctl & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FPDLINK_SET_PD_TX(s,val)  ( (s)->ctl = (((s)->ctl & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_PD_TX(s) ((((s)->ctl) ) & 0x1UL)
#define GFXREG_FPDLINK_CTL_PD_TX_FPDLINK_POWER_DOWN 1U /* Power down FPDLink, this is the default reset value */
#define GFXREG_FPDLINK_CTL_PD_TX_FPDLINK_POWER_UP 0U /* Power up FPDLink */
#define GFXREG_FPDLINK_CTL_PD_TX_RESET 1U

/* ENABLED: Enable bit for FPDLink */
#define GFXREG_FPDLINK_CTL_ENABLED_FSHIFT 31U
#define GFXREG_FPDLINK_CTL_ENABLED_FMASK 0x1U
#define GFXREG_FPDLINK_CTL_SETM_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FPDLINK_CTL_SET_ENABLED(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CTL_GET_ENABLED(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FPDLINK_SETM_ENABLED(s,val) ( (s)->ctl = ((s)->ctl & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FPDLINK_SET_ENABLED(s,val)  ( (s)->ctl = (((s)->ctl & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_ENABLED(s) ((((s)->ctl) >> 31U) & 0x1UL)
#define GFXREG_FPDLINK_CTL_ENABLED_DIS 0U /* Disable the entire mxvideoss_fpdlink */
#define GFXREG_FPDLINK_CTL_ENABLED_EN 1U /* Enable FPDLink */
#define GFXREG_FPDLINK_CTL_ENABLED_RESET 0U

/* CMD: IP Command register for FPDLink */
#define GFXREG_FPDLINK_CMD 0x00000004U
/* LVDS_TX_EN: Enable the serializers and TX drivers for all lanes of FPDLink */
#define GFXREG_FPDLINK_CMD_LVDS_TX_EN_FSHIFT 0U
#define GFXREG_FPDLINK_CMD_LVDS_TX_EN_FMASK 0x1U
#define GFXREG_FPDLINK_CMD_SETM_LVDS_TX_EN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FPDLINK_CMD_SET_LVDS_TX_EN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CMD_GET_LVDS_TX_EN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FPDLINK_SETM_LVDS_TX_EN(s,val) ( (s)->cmd = ((s)->cmd & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FPDLINK_SET_LVDS_TX_EN(s,val)  ( (s)->cmd = (((s)->cmd & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_LVDS_TX_EN(s) ((((s)->cmd) ) & 0x1UL)
#define GFXREG_FPDLINK_CMD_LVDS_TX_EN_FPDLINK_TX_DRIVER_DISABLED 0U /* Disable FPDLink TX operation */
#define GFXREG_FPDLINK_CMD_LVDS_TX_EN_FPDLINK_TX_DRIVER_ENABLED 1U /* Enable FPDLink TX operation */
#define GFXREG_FPDLINK_CMD_LVDS_TX_EN_RESET 0U

/* CLK_GEN_CMD: Control register for CLK_GEN */
#define GFXREG_FPDLINK_CLK_GEN_CMD 0x00000008U
/* MODE8: Enable Dual-Pixel (8-Lane Mode) */
#define GFXREG_FPDLINK_CLK_GEN_CMD_MODE8_FSHIFT 0U
#define GFXREG_FPDLINK_CLK_GEN_CMD_MODE8_FMASK 0x1U
#define GFXREG_FPDLINK_CLK_GEN_CMD_SETM_MODE8(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FPDLINK_CLK_GEN_CMD_SET_MODE8(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CLK_GEN_CMD_GET_MODE8(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FPDLINK_SETM_MODE8(s,val) ( (s)->clk_gen_cmd = ((s)->clk_gen_cmd & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FPDLINK_SET_MODE8(s,val)  ( (s)->clk_gen_cmd = (((s)->clk_gen_cmd & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_MODE8(s) ((((s)->clk_gen_cmd) ) & 0x1UL)
#define GFXREG_FPDLINK_CLK_GEN_CMD_MODE8_MODE4 0U /* 4 Lane LVDS mode */
#define GFXREG_FPDLINK_CLK_GEN_CMD_MODE8_MODE8 1U /* 8 lane LVDS mode */
#define GFXREG_FPDLINK_CLK_GEN_CMD_MODE8_RESET 0U

/* CLK_GEN_CTL: Configuration register for CKGEN  */
#define GFXREG_FPDLINK_CLK_GEN_CTL 0x0000000cU
/* FRANGE: Control Output frequency divider, connects to the port CO on the hardIP */
#define GFXREG_FPDLINK_CLK_GEN_CTL_FRANGE_FSHIFT 0U
#define GFXREG_FPDLINK_CLK_GEN_CTL_FRANGE_FMASK 0x3U
#define GFXREG_FPDLINK_CLK_GEN_CTL_SETM_FRANGE(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_FPDLINK_CLK_GEN_CTL_SET_FRANGE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CLK_GEN_CTL_GET_FRANGE(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_FPDLINK_SETM_FRANGE(s,val) ( (s)->clk_gen_ctl = ((s)->clk_gen_ctl & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_FPDLINK_SET_FRANGE(s,val)  ( (s)->clk_gen_ctl = (((s)->clk_gen_ctl & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_FRANGE(s) ((((s)->clk_gen_ctl) ) & 0x3UL)
#define GFXREG_FPDLINK_CLK_GEN_CTL_FRANGE_DIV1 0x0U /* Internal PLL output divider programmed to 1 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_FRANGE_DIV2 0x1U /* Internal PLL output divider programmed to 2 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_FRANGE_DIV4 0x2U /* Internal PLL output divider programmed to 4 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_FRANGE_DIV8 0x3U /* Internal PLL output divider programmed to 8 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_FRANGE_RESET 0U

/* LFCTRL: Loop filter resistance selection used for low bandwidth feature */
#define GFXREG_FPDLINK_CLK_GEN_CTL_LFCTRL_FSHIFT 4U
#define GFXREG_FPDLINK_CLK_GEN_CTL_LFCTRL_FMASK 0x3U
#define GFXREG_FPDLINK_CLK_GEN_CTL_SETM_LFCTRL(val) (((CYGFX_U32)(val) & 0x3UL) << 4U)
#define GFXREG_FPDLINK_CLK_GEN_CTL_SET_LFCTRL(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CLK_GEN_CTL_GET_LFCTRL(val) (((CYGFX_U32)(val) >> 4U) & 0x3UL)
#define GFXREG_FPDLINK_SETM_LFCTRL(s,val) ( (s)->clk_gen_ctl = ((s)->clk_gen_ctl & ~0x30UL) | (((CYGFX_U32)(val) << 4U) & 0x30UL) )
#define GFXREG_FPDLINK_SET_LFCTRL(s,val)  ( (s)->clk_gen_ctl = (((s)->clk_gen_ctl & ~0x30UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_LFCTRL(s) ((((s)->clk_gen_ctl) >> 4U) & 0x3UL)
#define GFXREG_FPDLINK_CLK_GEN_CTL_LFCTRL_DIV1 0x0U /* Default bandwidth as per specification */
#define GFXREG_FPDLINK_CLK_GEN_CTL_LFCTRL_DIV2 0x1U /* Intermediate bandwidth setting lower than default bandwidth (higher than 0x2 setting) */
#define GFXREG_FPDLINK_CLK_GEN_CTL_LFCTRL_DIV4 0x2U /* Intermediate bandwidth setting higher than 800kHz (lower than 0x01 setting) */
#define GFXREG_FPDLINK_CLK_GEN_CTL_LFCTRL_DIV8 0x3U /* Less than 800kHz */
#define GFXREG_FPDLINK_CLK_GEN_CTL_LFCTRL_RESET 0U

/* CA: Driver output current control bits */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_FSHIFT 8U
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_FMASK 0x7U
#define GFXREG_FPDLINK_CLK_GEN_CTL_SETM_CA(val) (((CYGFX_U32)(val) & 0x7UL) << 8U)
#define GFXREG_FPDLINK_CLK_GEN_CTL_SET_CA(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CLK_GEN_CTL_GET_CA(val) (((CYGFX_U32)(val) >> 8U) & 0x7UL)
#define GFXREG_FPDLINK_SETM_CA(s,val) ( (s)->clk_gen_ctl = ((s)->clk_gen_ctl & ~0x700UL) | (((CYGFX_U32)(val) << 8U) & 0x700UL) )
#define GFXREG_FPDLINK_SET_CA(s,val)  ( (s)->clk_gen_ctl = (((s)->clk_gen_ctl & ~0x700UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_CA(s) ((((s)->clk_gen_ctl) >> 8U) & 0x7UL)
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_2P4MA 0x0U /* Driver output current is 2.4mA */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_2P72MA 0x1U /* Driver output current is 2.72mA */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_2P88MA 0x2U /* Driver output current is 2.88mA */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_3P2MA 0x3U /* Driver output current is 3.2mA */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_3P36MA 0x4U /* Driver output current is 3.36ma, this is the default value to be programmed */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_3P68MA 0x5U /* Driver output current is 3.68mA */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_3P84MA 0x6U /* Driver output current is 3.84mA */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_4P32MA 0x7U /* Driver output current is 4.32mA */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CA_RESET 0U

/* CCM: Common mode voltage control bits. */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_FSHIFT 12U
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_FMASK 0x7U
#define GFXREG_FPDLINK_CLK_GEN_CTL_SETM_CCM(val) (((CYGFX_U32)(val) & 0x7UL) << 12U)
#define GFXREG_FPDLINK_CLK_GEN_CTL_SET_CCM(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CLK_GEN_CTL_GET_CCM(val) (((CYGFX_U32)(val) >> 12U) & 0x7UL)
#define GFXREG_FPDLINK_SETM_CCM(s,val) ( (s)->clk_gen_ctl = ((s)->clk_gen_ctl & ~0x7000UL) | (((CYGFX_U32)(val) << 12U) & 0x7000UL) )
#define GFXREG_FPDLINK_SET_CCM(s,val)  ( (s)->clk_gen_ctl = (((s)->clk_gen_ctl & ~0x7000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_CCM(s) ((((s)->clk_gen_ctl) >> 12U) & 0x7UL)
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_1P05 0x0U /* Common mode voltage set to 1.05 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_1P10 0x1U /* Common mode voltage set to 1.10 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_1P15 0x2U /* Common mode voltage set to 1.15 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_1P20 0x3U /* Common mode voltage set to 1.20 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_1P25 0x4U /* Common mode voltage set to 1.25, this is the default value to be programmed */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_1P30 0x5U /* Common mode voltage set to 1.30 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_1P35 0x6U /* Common mode voltage set to 1.35 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_1P40 0x7U /* Common mode voltage set to 1.40 */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CCM_RESET 0U

/* CN: Control N divider used for low bandwidth feature */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CN_FSHIFT 16U
#define GFXREG_FPDLINK_CLK_GEN_CTL_CN_FMASK 0x3U
#define GFXREG_FPDLINK_CLK_GEN_CTL_SETM_CN(val) (((CYGFX_U32)(val) & 0x3UL) << 16U)
#define GFXREG_FPDLINK_CLK_GEN_CTL_SET_CN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CLK_GEN_CTL_GET_CN(val) (((CYGFX_U32)(val) >> 16U) & 0x3UL)
#define GFXREG_FPDLINK_SETM_CN(s,val) ( (s)->clk_gen_ctl = ((s)->clk_gen_ctl & ~0x30000UL) | (((CYGFX_U32)(val) << 16U) & 0x30000UL) )
#define GFXREG_FPDLINK_SET_CN(s,val)  ( (s)->clk_gen_ctl = (((s)->clk_gen_ctl & ~0x30000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_CN(s) ((((s)->clk_gen_ctl) >> 16U) & 0x3UL)
#define GFXREG_FPDLINK_CLK_GEN_CTL_CN_DIV1 0x0U /* Default bandwidth as per specification */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CN_DIV2 0x1U /* Intermediate bandwidth setting lower than default bandwidth (higher than 0x2 setting) */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CN_DIV4 0x2U /* Intermediate bandwidth setting higher than 800kHz (lower than 0x01 setting) */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CN_DIV8 0x3U /* Less than 800kHz */
#define GFXREG_FPDLINK_CLK_GEN_CTL_CN_RESET 0U

/* LOCK_SEL: Select internal or external PLL lock */
#define GFXREG_FPDLINK_CLK_GEN_CTL_LOCK_SEL_FSHIFT 20U
#define GFXREG_FPDLINK_CLK_GEN_CTL_LOCK_SEL_FMASK 0x1U
#define GFXREG_FPDLINK_CLK_GEN_CTL_SETM_LOCK_SEL(val) (((CYGFX_U32)(val) & 0x1UL) << 20U)
#define GFXREG_FPDLINK_CLK_GEN_CTL_SET_LOCK_SEL(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CLK_GEN_CTL_GET_LOCK_SEL(val) (((CYGFX_U32)(val) >> 20U) & 0x1UL)
#define GFXREG_FPDLINK_SETM_LOCK_SEL(s,val) ( (s)->clk_gen_ctl = ((s)->clk_gen_ctl & ~0x100000UL) | (((CYGFX_U32)(val) << 20U) & 0x100000UL) )
#define GFXREG_FPDLINK_SET_LOCK_SEL(s,val)  ( (s)->clk_gen_ctl = (((s)->clk_gen_ctl & ~0x100000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_LOCK_SEL(s) ((((s)->clk_gen_ctl) >> 20U) & 0x1UL)
#define GFXREG_FPDLINK_CLK_GEN_CTL_LOCK_SEL_INT 0U /* Select Internal Lock. This is the default value */
#define GFXREG_FPDLINK_CLK_GEN_CTL_LOCK_SEL_EXT 1U /* Select External Lock */
#define GFXREG_FPDLINK_CLK_GEN_CTL_LOCK_SEL_RESET 0U

/* MSB_FIRST: Controls parallel to serial transmission order of input 7-bit word */
#define GFXREG_FPDLINK_CLK_GEN_CTL_MSB_FIRST_FSHIFT 24U
#define GFXREG_FPDLINK_CLK_GEN_CTL_MSB_FIRST_FMASK 0x1U
#define GFXREG_FPDLINK_CLK_GEN_CTL_SETM_MSB_FIRST(val) (((CYGFX_U32)(val) & 0x1UL) << 24U)
#define GFXREG_FPDLINK_CLK_GEN_CTL_SET_MSB_FIRST(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_CLK_GEN_CTL_GET_MSB_FIRST(val) (((CYGFX_U32)(val) >> 24U) & 0x1UL)
#define GFXREG_FPDLINK_SETM_MSB_FIRST(s,val) ( (s)->clk_gen_ctl = ((s)->clk_gen_ctl & ~0x1000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1000000UL) )
#define GFXREG_FPDLINK_SET_MSB_FIRST(s,val)  ( (s)->clk_gen_ctl = (((s)->clk_gen_ctl & ~0x1000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_MSB_FIRST(s) ((((s)->clk_gen_ctl) >> 24U) & 0x1UL)
#define GFXREG_FPDLINK_CLK_GEN_CTL_MSB_FIRST_LSB 0U /* LSB bit is sent first */
#define GFXREG_FPDLINK_CLK_GEN_CTL_MSB_FIRST_MSB 1U /* MSB bit is sent first. This is the default value */
#define GFXREG_FPDLINK_CLK_GEN_CTL_MSB_FIRST_RESET 0U

/* CLK_GEN_STATUS: Status register for CKGEN */
#define GFXREG_FPDLINK_CLK_GEN_STATUS 0x00000010U
/* PLL_LOCK: Lock Detect output. Asserted when the PLL has achieved frequency lock */
#define GFXREG_FPDLINK_CLK_GEN_STATUS_PLL_LOCK_FSHIFT 0U
#define GFXREG_FPDLINK_CLK_GEN_STATUS_PLL_LOCK_FMASK 0x1U
#define GFXREG_FPDLINK_CLK_GEN_STATUS_GET_PLL_LOCK(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FPDLINK_GET_PLL_LOCK(s) ((((s)->clk_gen_status) ) & 0x1UL)
#define GFXREG_FPDLINK_CLK_GEN_STATUS_PLL_LOCK_RESET 0U

/* DFT_CMD: DFT control register for FPDLink  */
#define GFXREG_FPDLINK_DFT_CMD 0x00000014U
/* ADFT_EN: Enable analog dft (analog test bus) */
#define GFXREG_FPDLINK_DFT_CMD_ADFT_EN_FSHIFT 0U
#define GFXREG_FPDLINK_DFT_CMD_ADFT_EN_FMASK 0x1U
#define GFXREG_FPDLINK_DFT_CMD_SETM_ADFT_EN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FPDLINK_DFT_CMD_SET_ADFT_EN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DFT_CMD_GET_ADFT_EN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FPDLINK_SETM_ADFT_EN(s,val) ( (s)->dft_cmd = ((s)->dft_cmd & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FPDLINK_SET_ADFT_EN(s,val)  ( (s)->dft_cmd = (((s)->dft_cmd & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_ADFT_EN(s) ((((s)->dft_cmd) ) & 0x1UL)
#define GFXREG_FPDLINK_DFT_CMD_ADFT_EN_RESET 0U

/* BYPASS_PLL: BYPASS_PLL, use external clock */
#define GFXREG_FPDLINK_DFT_CMD_BYPASS_PLL_FSHIFT 4U
#define GFXREG_FPDLINK_DFT_CMD_BYPASS_PLL_FMASK 0x1U
#define GFXREG_FPDLINK_DFT_CMD_SETM_BYPASS_PLL(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FPDLINK_DFT_CMD_SET_BYPASS_PLL(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DFT_CMD_GET_BYPASS_PLL(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FPDLINK_SETM_BYPASS_PLL(s,val) ( (s)->dft_cmd = ((s)->dft_cmd & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FPDLINK_SET_BYPASS_PLL(s,val)  ( (s)->dft_cmd = (((s)->dft_cmd & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_BYPASS_PLL(s) ((((s)->dft_cmd) >> 4U) & 0x1UL)
#define GFXREG_FPDLINK_DFT_CMD_BYPASS_PLL_BYPASS_DISABLED 0U /* CLKOUT is the output of internal PLL */
#define GFXREG_FPDLINK_DFT_CMD_BYPASS_PLL_BYPASS_ENABLED 1U /* CLKOUT equals CLKEXT */
#define GFXREG_FPDLINK_DFT_CMD_BYPASS_PLL_RESET 0U

/* CONST_TXCLK_EN: Enable Constant value driven on TX CLK - determined by register CONST_TXCLK_VAL */
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXCLK_EN_FSHIFT 8U
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXCLK_EN_FMASK 0x1U
#define GFXREG_FPDLINK_DFT_CMD_SETM_CONST_TXCLK_EN(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FPDLINK_DFT_CMD_SET_CONST_TXCLK_EN(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DFT_CMD_GET_CONST_TXCLK_EN(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FPDLINK_SETM_CONST_TXCLK_EN(s,val) ( (s)->dft_cmd = ((s)->dft_cmd & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FPDLINK_SET_CONST_TXCLK_EN(s,val)  ( (s)->dft_cmd = (((s)->dft_cmd & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_CONST_TXCLK_EN(s) ((((s)->dft_cmd) >> 8U) & 0x1UL)
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXCLK_EN_RESET 0U

/* CONST_TXCLK_VAL: Constant value to be driven on TX_CLK */
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXCLK_VAL_FSHIFT 12U
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXCLK_VAL_FMASK 0x1U
#define GFXREG_FPDLINK_DFT_CMD_SETM_CONST_TXCLK_VAL(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_FPDLINK_DFT_CMD_SET_CONST_TXCLK_VAL(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DFT_CMD_GET_CONST_TXCLK_VAL(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_FPDLINK_SETM_CONST_TXCLK_VAL(s,val) ( (s)->dft_cmd = ((s)->dft_cmd & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_FPDLINK_SET_CONST_TXCLK_VAL(s,val)  ( (s)->dft_cmd = (((s)->dft_cmd & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_CONST_TXCLK_VAL(s) ((((s)->dft_cmd) >> 12U) & 0x1UL)
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXCLK_VAL_RESET 0U

/* CONST_TXDATA_EN: Enable Constant value driven on all TX Data Lines - determined by register CONST_TXDATA_VAL */
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXDATA_EN_FSHIFT 16U
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXDATA_EN_FMASK 0x1U
#define GFXREG_FPDLINK_DFT_CMD_SETM_CONST_TXDATA_EN(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_FPDLINK_DFT_CMD_SET_CONST_TXDATA_EN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DFT_CMD_GET_CONST_TXDATA_EN(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_FPDLINK_SETM_CONST_TXDATA_EN(s,val) ( (s)->dft_cmd = ((s)->dft_cmd & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_FPDLINK_SET_CONST_TXDATA_EN(s,val)  ( (s)->dft_cmd = (((s)->dft_cmd & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_CONST_TXDATA_EN(s) ((((s)->dft_cmd) >> 16U) & 0x1UL)
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXDATA_EN_RESET 0U

/* CONST_TXDATA_VAL: Constant value to be driven on all TX Data Lines */
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXDATA_VAL_FSHIFT 20U
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXDATA_VAL_FMASK 0x1U
#define GFXREG_FPDLINK_DFT_CMD_SETM_CONST_TXDATA_VAL(val) (((CYGFX_U32)(val) & 0x1UL) << 20U)
#define GFXREG_FPDLINK_DFT_CMD_SET_CONST_TXDATA_VAL(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DFT_CMD_GET_CONST_TXDATA_VAL(val) (((CYGFX_U32)(val) >> 20U) & 0x1UL)
#define GFXREG_FPDLINK_SETM_CONST_TXDATA_VAL(s,val) ( (s)->dft_cmd = ((s)->dft_cmd & ~0x100000UL) | (((CYGFX_U32)(val) << 20U) & 0x100000UL) )
#define GFXREG_FPDLINK_SET_CONST_TXDATA_VAL(s,val)  ( (s)->dft_cmd = (((s)->dft_cmd & ~0x100000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_CONST_TXDATA_VAL(s) ((((s)->dft_cmd) >> 20U) & 0x1UL)
#define GFXREG_FPDLINK_DFT_CMD_CONST_TXDATA_VAL_RESET 0U

/* DFT_CTL: DFT configuration register for FPDLink  */
#define GFXREG_FPDLINK_DFT_CTL 0x00000018U
/* TEST_ATB: Analog Test bus select bits used to choose an analog parameter to test */
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_FSHIFT 0U
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_FMASK 0x7U
#define GFXREG_FPDLINK_DFT_CTL_SETM_TEST_ATB(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_FPDLINK_DFT_CTL_SET_TEST_ATB(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DFT_CTL_GET_TEST_ATB(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_FPDLINK_SETM_TEST_ATB(s,val) ( (s)->dft_ctl = ((s)->dft_ctl & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_FPDLINK_SET_TEST_ATB(s,val)  ( (s)->dft_ctl = (((s)->dft_ctl & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_TEST_ATB(s) ((((s)->dft_ctl) ) & 0x7UL)
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_NO_TESTING 0x0U /* Not Testing */
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_BANDGAP_CURRENT 0x1U /* Testing Bandgap Current */
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_COMMON_MODE_VOLTAGE 0x2U /* Testing Common Mode Voltage */
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_CHARGE_PUMP_UP_CURRENT 0x3U /* Testing Charge Pump Up Current */
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_CHARGE_PUMP_DOWN_CURRENT 0x4U /* Testing Charge Pump Down Current */
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_CHARGE_PUMP_MISMATCH_CURRENT 0x5U /* Testing Charge Pump Mismatch Current */
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_LOOP_FILTER_LEAKAGE 0x6U /* Testing Loop Filter Leakage */
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_VCO_VOLTAGE 0x7U /* Testing VCO Voltage */
#define GFXREG_FPDLINK_DFT_CTL_TEST_ATB_RESET 0U

/* PLLTEST: PLL Charge Pump current control, connected to port TST of LVDS wrapper */
#define GFXREG_FPDLINK_DFT_CTL_PLLTEST_FSHIFT 4U
#define GFXREG_FPDLINK_DFT_CTL_PLLTEST_FMASK 0xfU
#define GFXREG_FPDLINK_DFT_CTL_SETM_PLLTEST(val) (((CYGFX_U32)(val) & 0xfUL) << 4U)
#define GFXREG_FPDLINK_DFT_CTL_SET_PLLTEST(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DFT_CTL_GET_PLLTEST(val) (((CYGFX_U32)(val) >> 4U) & 0xfUL)
#define GFXREG_FPDLINK_SETM_PLLTEST(s,val) ( (s)->dft_ctl = ((s)->dft_ctl & ~0xf0UL) | (((CYGFX_U32)(val) << 4U) & 0xf0UL) )
#define GFXREG_FPDLINK_SET_PLLTEST(s,val)  ( (s)->dft_ctl = (((s)->dft_ctl & ~0xf0UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_PLLTEST(s) ((((s)->dft_ctl) >> 4U) & 0xfUL)
#define GFXREG_FPDLINK_DFT_CTL_PLLTEST_DEFAULT 0x9U /* Default value to be programmed */
#define GFXREG_FPDLINK_DFT_CTL_PLLTEST_RESET 0U

/* CLKREF_SEL: Select line of the mux used for selecting reference clock for the internal PLL */
#define GFXREG_FPDLINK_DFT_CTL_CLKREF_SEL_FSHIFT 8U
#define GFXREG_FPDLINK_DFT_CTL_CLKREF_SEL_FMASK 0x3U
#define GFXREG_FPDLINK_DFT_CTL_SETM_CLKREF_SEL(val) (((CYGFX_U32)(val) & 0x3UL) << 8U)
#define GFXREG_FPDLINK_DFT_CTL_SET_CLKREF_SEL(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DFT_CTL_GET_CLKREF_SEL(val) (((CYGFX_U32)(val) >> 8U) & 0x3UL)
#define GFXREG_FPDLINK_SETM_CLKREF_SEL(s,val) ( (s)->dft_ctl = ((s)->dft_ctl & ~0x300UL) | (((CYGFX_U32)(val) << 8U) & 0x300UL) )
#define GFXREG_FPDLINK_SET_CLKREF_SEL(s,val)  ( (s)->dft_ctl = (((s)->dft_ctl & ~0x300UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_CLKREF_SEL(s) ((((s)->dft_ctl) >> 8U) & 0x3UL)
#define GFXREG_FPDLINK_DFT_CTL_CLKREF_SEL_SRSSPLL_OUTPUT_W_DIV2 0x00U /* Output of SRSSPLL passed through an internal DIV/2 divider and then used as a reference clock for the internal PLL */
#define GFXREG_FPDLINK_DFT_CTL_CLKREF_SEL_SRSSPLL_INPUT_WO_DIV2 0x01U /* Output of SRSSPLL directly used as a reference clock for the internal PLL, without passing it through the internal DIV/2 divider */
#define GFXREG_FPDLINK_DFT_CTL_CLKREF_SEL_EXT_GPIO 0x02U /* Use external clock from the GPIO directly as a reference clock for the internal PLL (test purposes only) */
#define GFXREG_FPDLINK_DFT_CTL_CLKREF_SEL_RESERVED 0x03U /* Reserved */
#define GFXREG_FPDLINK_DFT_CTL_CLKREF_SEL_RESET 0U

/* DDFT_CTL: Digital DFT control register (select signals for Muxes used for analog signal checking purposes) */
#define GFXREG_FPDLINK_DDFT_CTL 0x0000001cU
/* DDFT_SEL0: Spare DDFT_SEL bits to be used for analog signal checking, by default ddft_out port is kept at constant 0 */
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL0_FSHIFT 0U
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL0_FMASK 0xfU
#define GFXREG_FPDLINK_DDFT_CTL_SETM_DDFT_SEL0(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FPDLINK_DDFT_CTL_SET_DDFT_SEL0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DDFT_CTL_GET_DDFT_SEL0(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FPDLINK_SETM_DDFT_SEL0(s,val) ( (s)->ddft_ctl = ((s)->ddft_ctl & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FPDLINK_SET_DDFT_SEL0(s,val)  ( (s)->ddft_ctl = (((s)->ddft_ctl & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_DDFT_SEL0(s) ((((s)->ddft_ctl) ) & 0xfUL)
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL0_DEFAULT 0x0U /* By default ddft_out port is kept at constant 0 */
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL0_ROUTE_DDFT_OUT 0x1U /* ROUTE the output ddft_out of the hardIP to the DDFT_OUT port of our wrapper */
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL0_ROUTE_PLL_LOCK 0x2U /* ROUTE the PLL_LOCK output of the hardIP to the DDFT_OUT port of our wrapper */
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL0_ROUTE_HS_PXL_CLKS 0x3U /* ROUTE the HS_PXL_CLKS output of the hardIP to the DDFT_OUT port of our wrapper */
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL0_RESET 0U

/* DDFT_SEL1: Spare DDFT_SEL bits to be used later for analog signal checking */
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL1_FSHIFT 4U
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL1_FMASK 0xfU
#define GFXREG_FPDLINK_DDFT_CTL_SETM_DDFT_SEL1(val) (((CYGFX_U32)(val) & 0xfUL) << 4U)
#define GFXREG_FPDLINK_DDFT_CTL_SET_DDFT_SEL1(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_DDFT_CTL_GET_DDFT_SEL1(val) (((CYGFX_U32)(val) >> 4U) & 0xfUL)
#define GFXREG_FPDLINK_SETM_DDFT_SEL1(s,val) ( (s)->ddft_ctl = ((s)->ddft_ctl & ~0xf0UL) | (((CYGFX_U32)(val) << 4U) & 0xf0UL) )
#define GFXREG_FPDLINK_SET_DDFT_SEL1(s,val)  ( (s)->ddft_ctl = (((s)->ddft_ctl & ~0xf0UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_DDFT_SEL1(s) ((((s)->ddft_ctl) >> 4U) & 0xfUL)
#define GFXREG_FPDLINK_DDFT_CTL_DDFT_SEL1_RESET 0U

/* BIST_CTL: BIST control register */
#define GFXREG_FPDLINK_BIST_CTL 0x00000020U
/* TEST_ENABLE: Enable BIST in the desired configuration and choose the channel to test */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_FSHIFT 0U
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_FMASK 0x1fU
#define GFXREG_FPDLINK_BIST_CTL_SETM_TEST_ENABLE(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FPDLINK_BIST_CTL_SET_TEST_ENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_BIST_CTL_GET_TEST_ENABLE(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FPDLINK_SETM_TEST_ENABLE(s,val) ( (s)->bist_ctl = ((s)->bist_ctl & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FPDLINK_SET_TEST_ENABLE(s,val)  ( (s)->bist_ctl = (((s)->bist_ctl & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_TEST_ENABLE(s) ((((s)->bist_ctl) ) & 0x1fUL)
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_TEST_DISABLED 0x0U /* Functional mode. All tests disabled */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_A_SER_DES 0x1U /* Channel A TX-serializer is enabled and TX data is looped back to the RX de-serializer. The TX serializer sends the test data according to TEST_PATTERN bus. The pattern matcher will receive the HS data and compares it with the programmed TEST_PATTERN bus. The error counter is enabled to check word error rate. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_B_SER_DES 0x2U /* This test is the same as TEST_ENBL #00001. Channel B is tested in this test */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_C_SER_DES 0x3U /* This test is the same as TEST_ENBL #00001. Channel C is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_D_SER_DES 0x4U /* This test is the same as TEST_ENBL #00001. Channel D is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_CLK_SER_DES 0x5U /* This test is the same as TEST_ENBL #00001. Channel CLK is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_A_SER_DES_2PH 0x11U /* Channel A TX-serializer is enabled and TX data is looped back to the RX de-serializer. The TX serializer sends the test data according to TEST_PATTERN bus. The pattern matcher will receive the HS data and compares it with the programmed TEST_PATTERN bus. The error counter is enabled to check word error rate. This test will run in a two-phase fashion: Phase1: DESER_POL is set to 1'b0 (Default) Phase2: DESER_POL is set to 1'b1 */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_B_SER_DES_2PH 0x12U /* This test is the same as TEST_ENBL #10001. Channel B is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_C_SER_DES_2PH 0x13U /* This test is the same as TEST_ENBL #10001. Channel C is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_D_SER_DES_2PH 0x14U /* This test is the same as TEST_ENBL #10001. Channel D is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_CLK_SER_DES_2PH 0x15U /* This test is the same as TEST_ENBL #10001. Channel CLK is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_A_SER_TX_RX_DES 0x6U /* Channel A TX is enabled, and TX data is looped back from HSTX to HSRX. The TX sends the test data according to TEST_PATTERN bus. The pattern matcher will receive the HS data and compares it with the programmed TEST_PATTERN bus. The error counter is enabled to check word error rate. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_B_TX_RX_SER_DES 0x7U /* This test is the same as TEST_ENBL #00110. Channel B is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_C_TX_RX_SER_DES 0x8U /* This test is the same as TEST_ENBL #00110. Channel C is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_D_TX_RX_SER_DES 0x9U /* This test is the same as TEST_ENBL #00110. Channel D is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_CLK_SER_TX_RX_DES 0xAU /* This test is the same as TEST_ENBL #00110. Channel CLK is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_A_SER_TX_RX_DES_2PH 0x16U /* Channel A TX is enabled, and TX data is looped back from HSTX to HSRX. The TX sends the test data according to TEST_PATTERN bus. The pattern matcher will receive the HS data and compare it with the programmed TEST_PATTERN bus. The error counter is enabled to check word error rate. This test will run in a two-phase fashion: Phase1: DESER_POL is set to 1'b0 (Default)Phase2: DESER_POL is set to 1'b1 */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_B_SER_TX_RX_DES_2PH 0x17U /* This test is the same as TEST_ENBL #10110. Channel B is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_C_SER_TX_RX_DES_2PH 0x18U /* This test is the same as TEST_ENBL #10110. Channel C is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_D_SER_TX_RX_DES_2PH 0x19U /* This test is the same as TEST_ENBL #10110. Channel D is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_CH_CLK_SER_TX_RX_DES_2PH 0x1AU /* This test is the same as TEST_ENBL #10110. Channel CLK is tested in this test. */
#define GFXREG_FPDLINK_BIST_CTL_TEST_ENABLE_RESET 0U

/* BIST_DATA: BIST control register */
#define GFXREG_FPDLINK_BIST_DATA 0x00000024U
/* TEST_PATTERN: This is the programmable test pattern used by BIST pattern generator and pattern matcher. The TEST_PATTERN bus value will be used as the payload data during the test. It should be set based on the expected BIST pattern to be sent or received. */
#define GFXREG_FPDLINK_BIST_DATA_TEST_PATTERN_FSHIFT 0U
#define GFXREG_FPDLINK_BIST_DATA_TEST_PATTERN_FMASK 0xfffffffU
#define GFXREG_FPDLINK_BIST_DATA_SETM_TEST_PATTERN(val) (((CYGFX_U32)(val) & 0xfffffffUL) )
#define GFXREG_FPDLINK_BIST_DATA_SET_TEST_PATTERN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffffffUL, __FILE__, __LINE__))
#define GFXREG_FPDLINK_BIST_DATA_GET_TEST_PATTERN(val) (((CYGFX_U32)(val) ) & 0xfffffffUL)
#define GFXREG_FPDLINK_SETM_TEST_PATTERN(s,val) ( (s)->bist_data = ((s)->bist_data & ~0xfffffffUL) | (((CYGFX_U32)(val) ) & 0xfffffffUL) )
#define GFXREG_FPDLINK_SET_TEST_PATTERN(s,val)  ( (s)->bist_data = (((s)->bist_data & ~0xfffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffffffUL, __FILE__, __LINE__) )
#define GFXREG_FPDLINK_GET_TEST_PATTERN(s) ((((s)->bist_data) ) & 0xfffffffUL)
#define GFXREG_FPDLINK_BIST_DATA_TEST_PATTERN_RESET 0U

/* BIST_LB_STATUS: BIST Loopback status register */
#define GFXREG_FPDLINK_BIST_LB_STATUS 0x00000028U
/* D_INT_LB_PASS: Status bit showing the pass/fail result of the test */
#define GFXREG_FPDLINK_BIST_LB_STATUS_D_INT_LB_PASS_FSHIFT 0U
#define GFXREG_FPDLINK_BIST_LB_STATUS_D_INT_LB_PASS_FMASK 0x1U
#define GFXREG_FPDLINK_BIST_LB_STATUS_GET_D_INT_LB_PASS(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FPDLINK_GET_D_INT_LB_PASS(s) ((((s)->bist_lb_status) ) & 0x1UL)
#define GFXREG_FPDLINK_BIST_LB_STATUS_D_INT_LB_PASS_RESET 0U

/* D_LB_ACTIVE: Status bit showing that the BIST loopback test is active and running */
#define GFXREG_FPDLINK_BIST_LB_STATUS_D_LB_ACTIVE_FSHIFT 4U
#define GFXREG_FPDLINK_BIST_LB_STATUS_D_LB_ACTIVE_FMASK 0x1U
#define GFXREG_FPDLINK_BIST_LB_STATUS_GET_D_LB_ACTIVE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FPDLINK_GET_D_LB_ACTIVE(s) ((((s)->bist_lb_status) >> 4U) & 0x1UL)
#define GFXREG_FPDLINK_BIST_LB_STATUS_D_LB_ACTIVE_RESET 0U

/* BIST_CNT_STATUS: BIST loopback count status register */
#define GFXREG_FPDLINK_BIST_CNT_STATUS 0x0000002cU
/* D_INT_LB_ERR_CNT: Ten-bit status field that showing the number of failing bytes in case of a test failure. */
#define GFXREG_FPDLINK_BIST_CNT_STATUS_D_INT_LB_ERR_CNT_FSHIFT 0U
#define GFXREG_FPDLINK_BIST_CNT_STATUS_D_INT_LB_ERR_CNT_FMASK 0x3ffU
#define GFXREG_FPDLINK_BIST_CNT_STATUS_GET_D_INT_LB_ERR_CNT(val) (((CYGFX_U32)(val) ) & 0x3ffUL)
#define GFXREG_FPDLINK_GET_D_INT_LB_ERR_CNT(s) ((((s)->bist_cnt_status) ) & 0x3ffUL)
#define GFXREG_FPDLINK_BIST_CNT_STATUS_D_INT_LB_ERR_CNT_RESET 0U

/* D_INT_LB_BYTE_FLAG: Status bit indicating that the LVDS RX received 1024 words and the test is over */
#define GFXREG_FPDLINK_BIST_CNT_STATUS_D_INT_LB_BYTE_FLAG_FSHIFT 16U
#define GFXREG_FPDLINK_BIST_CNT_STATUS_D_INT_LB_BYTE_FLAG_FMASK 0x1U
#define GFXREG_FPDLINK_BIST_CNT_STATUS_GET_D_INT_LB_BYTE_FLAG(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_FPDLINK_GET_D_INT_LB_BYTE_FLAG(s) ((((s)->bist_cnt_status) >> 16U) & 0x1UL)
#define GFXREG_FPDLINK_BIST_CNT_STATUS_D_INT_LB_BYTE_FLAG_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_FPDLINK_REGISTER_H */

