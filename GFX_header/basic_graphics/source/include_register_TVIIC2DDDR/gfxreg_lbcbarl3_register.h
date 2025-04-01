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
 * \date        Mon Jul 05 13:05:16 2021
 * \file        gfxreg_lbcbarl3_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   lbcbarl3
 *              Source:   lbcbarl3.component.xml
 *              Template: component_h.tpl
 * \brief      Iris lbcbarl3 register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_LBCBARL3_REGISTER_H
#define GFXREG_LBCBARL3_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* lbcbarl3 registers */
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


/* STATIC_CTL: Static control settings.
   Register must not be changed during operation, while AXI transactions are pending. */
#define GFXREG_LBCBARL3_STATIC_CTL 0x00000000U
/* MODE: Operating mode. */
#define GFXREG_LBCBARL3_STATIC_CTL_MODE_FSHIFT 0U
#define GFXREG_LBCBARL3_STATIC_CTL_MODE_FMASK 0x1U
#define GFXREG_LBCBARL3_STATIC_CTL_SETM_MODE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_LBCBARL3_STATIC_CTL_SET_MODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_LBCBARL3_STATIC_CTL_GET_MODE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_LBCBARL3_SETM_MODE(s,val) ( (s)->static_ctl = ((s)->static_ctl & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_LBCBARL3_SET_MODE(s,val)  ( (s)->static_ctl = (((s)->static_ctl & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_LBCBARL3_GET_MODE(s) ((((s)->static_ctl) ) & 0x1UL)
#define GFXREG_LBCBARL3_STATIC_CTL_MODE_NEUTRAL 0U /* The crossbar is deactivated; all slave are directly connected to master ports. */
#define GFXREG_LBCBARL3_STATIC_CTL_MODE_STATIC 1U /* Static mapping between slave and master ports. */
#define GFXREG_LBCBARL3_STATIC_CTL_MODE_RESET 0U



/* STATIC_MODE_CFG: Configuration for static arbitration mode.
   Register can be changed during operation and will have immediate effect. */
#define GFXREG_LBCBARL3_STATIC_MODE_CFG 0x00000010U
/* SLV0_MST: Destination for requests received on slave port 0; value is a master port ID. */
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SLV0_MST_FSHIFT 0U
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SLV0_MST_FMASK 0x3U
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SETM_SLV0_MST(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SET_SLV0_MST(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_GET_SLV0_MST(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_LBCBARL3_SETM_SLV0_MST(s,val) ( (s)->static_mode_cfg = ((s)->static_mode_cfg & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_LBCBARL3_SET_SLV0_MST(s,val)  ( (s)->static_mode_cfg = (((s)->static_mode_cfg & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_LBCBARL3_GET_SLV0_MST(s) ((((s)->static_mode_cfg) ) & 0x3UL)
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SLV0_MST_RESET 0U

/* SLV1_MST: Destination for requests received on slave port 1; value is a master port ID. */
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SLV1_MST_FSHIFT 4U
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SLV1_MST_FMASK 0x3U
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SETM_SLV1_MST(val) (((CYGFX_U32)(val) & 0x3UL) << 4U)
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SET_SLV1_MST(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_GET_SLV1_MST(val) (((CYGFX_U32)(val) >> 4U) & 0x3UL)
#define GFXREG_LBCBARL3_SETM_SLV1_MST(s,val) ( (s)->static_mode_cfg = ((s)->static_mode_cfg & ~0x30UL) | (((CYGFX_U32)(val) << 4U) & 0x30UL) )
#define GFXREG_LBCBARL3_SET_SLV1_MST(s,val)  ( (s)->static_mode_cfg = (((s)->static_mode_cfg & ~0x30UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_LBCBARL3_GET_SLV1_MST(s) ((((s)->static_mode_cfg) >> 4U) & 0x3UL)
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SLV1_MST_RESET 1U

/* SLV2_MST: Destination for requests received on slave port 2; value is a master port ID. */
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SLV2_MST_FSHIFT 8U
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SLV2_MST_FMASK 0x3U
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SETM_SLV2_MST(val) (((CYGFX_U32)(val) & 0x3UL) << 8U)
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SET_SLV2_MST(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_GET_SLV2_MST(val) (((CYGFX_U32)(val) >> 8U) & 0x3UL)
#define GFXREG_LBCBARL3_SETM_SLV2_MST(s,val) ( (s)->static_mode_cfg = ((s)->static_mode_cfg & ~0x300UL) | (((CYGFX_U32)(val) << 8U) & 0x300UL) )
#define GFXREG_LBCBARL3_SET_SLV2_MST(s,val)  ( (s)->static_mode_cfg = (((s)->static_mode_cfg & ~0x300UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_LBCBARL3_GET_SLV2_MST(s) ((((s)->static_mode_cfg) >> 8U) & 0x3UL)
#define GFXREG_LBCBARL3_STATIC_MODE_CFG_SLV2_MST_RESET 2U



/* STATUS: Common status information. */
#define GFXREG_LBCBARL3_STATUS 0x00000020U
/* BUSY: When bit is 0, the module is idle and no AXI transactions are pending. It is always 0 in NEUTRAL mode. */
#define GFXREG_LBCBARL3_STATUS_BUSY_FSHIFT 0U
#define GFXREG_LBCBARL3_STATUS_BUSY_FMASK 0x1U
#define GFXREG_LBCBARL3_STATUS_GET_BUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_LBCBARL3_GET_BUSY(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_LBCBARL3_STATUS_BUSY_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_LBCBARL3_REGISTER_H */

