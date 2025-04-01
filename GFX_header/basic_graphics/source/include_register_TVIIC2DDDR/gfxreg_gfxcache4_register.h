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
 * \file        gfxreg_gfxcache4_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   gfxcache4
 *              Source:   gfxcache4.component.xml
 *              Template: component_h.tpl
 * \brief      Iris gfxcache4 register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_GFXCACHE4_REGISTER_H
#define GFXREG_GFXCACHE4_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* gfxcache4 registers */
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


/* STATIC_CONTROL: Static control register.
   This register must be only changed before any operation starts or after the following steps are preceeded.         1. The gfxcache module is idle (not requests at all)         2. Status BUSY returns 0          3. CONTROL.INVALIDATE is set        */
#define GFXREG_GFXCACHE4_STATIC_CONTROL 0x00000000U
/* CH0_ENABLED: Enable bit for channel 0 */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_ENABLED_FSHIFT 0U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_ENABLED_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_CH0_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_CH0_ENABLED(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_CH0_ENABLED(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_CH0_ENABLED(s,val) ( (s)->static_control = ((s)->static_control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_GFXCACHE4_SET_CH0_ENABLED(s,val)  ( (s)->static_control = (((s)->static_control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_CH0_ENABLED(s) ((((s)->static_control) ) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_ENABLED_DIS 0x0U /* Disable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_ENABLED_EN 0x1U /* Enable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_ENABLED_RESET 0U

/* CH1_ENABLED: Enable bit for channel 1 */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_ENABLED_FSHIFT 1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_ENABLED_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_CH1_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_CH1_ENABLED(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_CH1_ENABLED(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_CH1_ENABLED(s,val) ( (s)->static_control = ((s)->static_control & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_GFXCACHE4_SET_CH1_ENABLED(s,val)  ( (s)->static_control = (((s)->static_control & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_CH1_ENABLED(s) ((((s)->static_control) >> 1U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_ENABLED_DIS 0x0U /* Disable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_ENABLED_EN 0x1U /* Enable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_ENABLED_RESET 0U

/* CH2_ENABLED: Enable bit for channel 2 */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_ENABLED_FSHIFT 2U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_ENABLED_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_CH2_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) << 2U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_CH2_ENABLED(val) (((CYGFX_U32)(val) << 2U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_CH2_ENABLED(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_CH2_ENABLED(s,val) ( (s)->static_control = ((s)->static_control & ~0x4UL) | (((CYGFX_U32)(val) << 2U) & 0x4UL) )
#define GFXREG_GFXCACHE4_SET_CH2_ENABLED(s,val)  ( (s)->static_control = (((s)->static_control & ~0x4UL) | ((CYGFX_U32)(val) << 2U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_CH2_ENABLED(s) ((((s)->static_control) >> 2U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_ENABLED_DIS 0x0U /* Disable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_ENABLED_EN 0x1U /* Enable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_ENABLED_RESET 0U

/* CH3_ENABLED: Enable bit for channel 3 */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_ENABLED_FSHIFT 3U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_ENABLED_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_CH3_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_CH3_ENABLED(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_CH3_ENABLED(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_CH3_ENABLED(s,val) ( (s)->static_control = ((s)->static_control & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_GFXCACHE4_SET_CH3_ENABLED(s,val)  ( (s)->static_control = (((s)->static_control & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_CH3_ENABLED(s) ((((s)->static_control) >> 3U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_ENABLED_DIS 0x0U /* Disable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_ENABLED_EN 0x1U /* Enable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_ENABLED_RESET 0U

/* MEASUREMENT_EN: Enable measurement of gfxcache. Corresponding fields are CHX_BYPASS, CHX_MISS and CHX_HIT, OVERFLOW and SAVE_AND_RESET_MEASUREMENTS. */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_MEASUREMENT_EN_FSHIFT 8U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_MEASUREMENT_EN_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_MEASUREMENT_EN(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_MEASUREMENT_EN(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_MEASUREMENT_EN(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_MEASUREMENT_EN(s,val) ( (s)->static_control = ((s)->static_control & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_GFXCACHE4_SET_MEASUREMENT_EN(s,val)  ( (s)->static_control = (((s)->static_control & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_MEASUREMENT_EN(s) ((((s)->static_control) >> 8U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_MEASUREMENT_EN_DIS 0x0U /* Disable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_MEASUREMENT_EN_EN 0x1U /* Enable */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_MEASUREMENT_EN_RESET 0U

/* PARTITION_EN: Partition cache ways to two regions */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_EN_FSHIFT 12U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_EN_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_PARTITION_EN(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_PARTITION_EN(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_PARTITION_EN(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_PARTITION_EN(s,val) ( (s)->static_control = ((s)->static_control & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_GFXCACHE4_SET_PARTITION_EN(s,val)  ( (s)->static_control = (((s)->static_control & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_PARTITION_EN(s) ((((s)->static_control) >> 12U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_EN_DIS 0x0U /* Disable partition. Whole cache is one region */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_EN_EN 0x1U /* Enable partition. Two regions. */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_EN_RESET 0U

/* PARTITION_MD: Cache ways partition mode */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_MD_FSHIFT 13U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_MD_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_PARTITION_MD(val) (((CYGFX_U32)(val) & 0x1UL) << 13U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_PARTITION_MD(val) (((CYGFX_U32)(val) << 13U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_PARTITION_MD(val) (((CYGFX_U32)(val) >> 13U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_PARTITION_MD(s,val) ( (s)->static_control = ((s)->static_control & ~0x2000UL) | (((CYGFX_U32)(val) << 13U) & 0x2000UL) )
#define GFXREG_GFXCACHE4_SET_PARTITION_MD(s,val)  ( (s)->static_control = (((s)->static_control & ~0x2000UL) | ((CYGFX_U32)(val) << 13U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_PARTITION_MD(s) ((((s)->static_control) >> 13U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_MD_MODE11 0x0U /* Region1st:Region2nd = 1:1 */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_MD_MODE31 0x1U /* Region1st:Region2nd = 3:1 */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_PARTITION_MD_RESET 0U

/* CH0_REGION_SEL: Allocate the cache region for channel 0 (only effective when PARTITION_EN=1) */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_REGION_SEL_FSHIFT 16U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_REGION_SEL_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_CH0_REGION_SEL(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_CH0_REGION_SEL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_CH0_REGION_SEL(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_CH0_REGION_SEL(s,val) ( (s)->static_control = ((s)->static_control & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_GFXCACHE4_SET_CH0_REGION_SEL(s,val)  ( (s)->static_control = (((s)->static_control & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_CH0_REGION_SEL(s) ((((s)->static_control) >> 16U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_REGION_SEL_REGION1ST 0x0U /* The first region */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_REGION_SEL_REGION2ND 0x1U /* The second region */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH0_REGION_SEL_RESET 0U

/* CH1_REGION_SEL: Allocate the cache region for channel 1 (only effective when PARTITION_EN=1) */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_REGION_SEL_FSHIFT 17U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_REGION_SEL_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_CH1_REGION_SEL(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_CH1_REGION_SEL(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_CH1_REGION_SEL(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_CH1_REGION_SEL(s,val) ( (s)->static_control = ((s)->static_control & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_GFXCACHE4_SET_CH1_REGION_SEL(s,val)  ( (s)->static_control = (((s)->static_control & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_CH1_REGION_SEL(s) ((((s)->static_control) >> 17U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_REGION_SEL_REGION1ST 0x0U /* The first region */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_REGION_SEL_REGION2ND 0x1U /* The second region */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH1_REGION_SEL_RESET 0U

/* CH2_REGION_SEL: Allocate the cache region for channel 2 (only effective when PARTITION_EN=1) */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_REGION_SEL_FSHIFT 18U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_REGION_SEL_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_CH2_REGION_SEL(val) (((CYGFX_U32)(val) & 0x1UL) << 18U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_CH2_REGION_SEL(val) (((CYGFX_U32)(val) << 18U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_CH2_REGION_SEL(val) (((CYGFX_U32)(val) >> 18U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_CH2_REGION_SEL(s,val) ( (s)->static_control = ((s)->static_control & ~0x40000UL) | (((CYGFX_U32)(val) << 18U) & 0x40000UL) )
#define GFXREG_GFXCACHE4_SET_CH2_REGION_SEL(s,val)  ( (s)->static_control = (((s)->static_control & ~0x40000UL) | ((CYGFX_U32)(val) << 18U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_CH2_REGION_SEL(s) ((((s)->static_control) >> 18U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_REGION_SEL_REGION1ST 0x0U /* The first region */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_REGION_SEL_REGION2ND 0x1U /* The second region */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH2_REGION_SEL_RESET 0U

/* CH3_REGION_SEL: Allocate the cache region for channel 3 (only effective when PARTITION_EN=1) */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_REGION_SEL_FSHIFT 19U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_REGION_SEL_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SETM_CH3_REGION_SEL(val) (((CYGFX_U32)(val) & 0x1UL) << 19U)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_SET_CH3_REGION_SEL(val) (((CYGFX_U32)(val) << 19U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_STATIC_CONTROL_GET_CH3_REGION_SEL(val) (((CYGFX_U32)(val) >> 19U) & 0x1UL)
#define GFXREG_GFXCACHE4_SETM_CH3_REGION_SEL(s,val) ( (s)->static_control = ((s)->static_control & ~0x80000UL) | (((CYGFX_U32)(val) << 19U) & 0x80000UL) )
#define GFXREG_GFXCACHE4_SET_CH3_REGION_SEL(s,val)  ( (s)->static_control = (((s)->static_control & ~0x80000UL) | ((CYGFX_U32)(val) << 19U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_GET_CH3_REGION_SEL(s) ((((s)->static_control) >> 19U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_REGION_SEL_REGION1ST 0x0U /* The first region */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_REGION_SEL_REGION2ND 0x1U /* The second region */
#define GFXREG_GFXCACHE4_STATIC_CONTROL_CH3_REGION_SEL_RESET 0U



/* CONTROL: Control of the GfxCache. */
#define GFXREG_GFXCACHE4_CONTROL 0x00000020U
/* INVALIDATE: Triggers invalidation of the cache. */
#define GFXREG_GFXCACHE4_CONTROL_INVALIDATE_FSHIFT 0U
#define GFXREG_GFXCACHE4_CONTROL_INVALIDATE_FMASK 0x1U
#define GFXREG_GFXCACHE4_CONTROL_SETM_INVALIDATE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_GFXCACHE4_CONTROL_SET_INVALIDATE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_SETM_INVALIDATE(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_GFXCACHE4_SET_INVALIDATE(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_CONTROL_INVALIDATE_RESET (none)U

/* SAVE_AND_RESET_MEASUREMENTS: All performance and utilization counters are implemented internally. Writing one to this field provides all measured values to corresponding configurations registers and resets the internal counters. */
#define GFXREG_GFXCACHE4_CONTROL_SAVE_AND_RESET_MEASUREMENTS_FSHIFT 1U
#define GFXREG_GFXCACHE4_CONTROL_SAVE_AND_RESET_MEASUREMENTS_FMASK 0x1U
#define GFXREG_GFXCACHE4_CONTROL_SETM_SAVE_AND_RESET_MEASUREMENTS(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_GFXCACHE4_CONTROL_SET_SAVE_AND_RESET_MEASUREMENTS(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_SETM_SAVE_AND_RESET_MEASUREMENTS(s,val) ( (s)->control = ((s)->control & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_GFXCACHE4_SET_SAVE_AND_RESET_MEASUREMENTS(s,val)  ( (s)->control = (((s)->control & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_CONTROL_SAVE_AND_RESET_MEASUREMENTS_RESET (none)U

/* CH0_INVALIDATE: Triggers invalidation of the cache for channel 0 if CH0_ENABLED is enabled. */
#define GFXREG_GFXCACHE4_CONTROL_CH0_INVALIDATE_FSHIFT 8U
#define GFXREG_GFXCACHE4_CONTROL_CH0_INVALIDATE_FMASK 0x1U
#define GFXREG_GFXCACHE4_CONTROL_SETM_CH0_INVALIDATE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_GFXCACHE4_CONTROL_SET_CH0_INVALIDATE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_SETM_CH0_INVALIDATE(s,val) ( (s)->control = ((s)->control & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_GFXCACHE4_SET_CH0_INVALIDATE(s,val)  ( (s)->control = (((s)->control & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_CONTROL_CH0_INVALIDATE_RESET (none)U

/* CH1_INVALIDATE: Triggers invalidation of the cache for channel 1 if CH1_ENABLED is enabled. */
#define GFXREG_GFXCACHE4_CONTROL_CH1_INVALIDATE_FSHIFT 9U
#define GFXREG_GFXCACHE4_CONTROL_CH1_INVALIDATE_FMASK 0x1U
#define GFXREG_GFXCACHE4_CONTROL_SETM_CH1_INVALIDATE(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_GFXCACHE4_CONTROL_SET_CH1_INVALIDATE(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_SETM_CH1_INVALIDATE(s,val) ( (s)->control = ((s)->control & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_GFXCACHE4_SET_CH1_INVALIDATE(s,val)  ( (s)->control = (((s)->control & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_CONTROL_CH1_INVALIDATE_RESET (none)U

/* CH2_INVALIDATE: Triggers invalidation of the cache for channel 2 if CH2_ENABLED is enabled. */
#define GFXREG_GFXCACHE4_CONTROL_CH2_INVALIDATE_FSHIFT 10U
#define GFXREG_GFXCACHE4_CONTROL_CH2_INVALIDATE_FMASK 0x1U
#define GFXREG_GFXCACHE4_CONTROL_SETM_CH2_INVALIDATE(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_GFXCACHE4_CONTROL_SET_CH2_INVALIDATE(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_SETM_CH2_INVALIDATE(s,val) ( (s)->control = ((s)->control & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_GFXCACHE4_SET_CH2_INVALIDATE(s,val)  ( (s)->control = (((s)->control & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_CONTROL_CH2_INVALIDATE_RESET (none)U

/* CH3_INVALIDATE: Triggers invalidation of the cache for channel 3 if CH3_ENABLED is enabled. */
#define GFXREG_GFXCACHE4_CONTROL_CH3_INVALIDATE_FSHIFT 11U
#define GFXREG_GFXCACHE4_CONTROL_CH3_INVALIDATE_FMASK 0x1U
#define GFXREG_GFXCACHE4_CONTROL_SETM_CH3_INVALIDATE(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_GFXCACHE4_CONTROL_SET_CH3_INVALIDATE(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE4_SETM_CH3_INVALIDATE(s,val) ( (s)->control = ((s)->control & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_GFXCACHE4_SET_CH3_INVALIDATE(s,val)  ( (s)->control = (((s)->control & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE4_CONTROL_CH3_INVALIDATE_RESET (none)U



/* STATUS: Status information */
#define GFXREG_GFXCACHE4_STATUS 0x00000040U
/* BUSY: Status of all channels. 1 indicates incomplete transfer. */
#define GFXREG_GFXCACHE4_STATUS_BUSY_FSHIFT 0U
#define GFXREG_GFXCACHE4_STATUS_BUSY_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATUS_GET_BUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_GFXCACHE4_GET_BUSY(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_GFXCACHE4_STATUS_BUSY_RESET (none)U

/* OVERFLOW: This bit is set with any counter overflow (equal 0xffffffff). The counter will remain on the overflow value in this case. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. */
#define GFXREG_GFXCACHE4_STATUS_OVERFLOW_FSHIFT 1U
#define GFXREG_GFXCACHE4_STATUS_OVERFLOW_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATUS_GET_OVERFLOW(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_GFXCACHE4_GET_OVERFLOW(s) ((((s)->status) >> 1U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATUS_OVERFLOW_RESET (none)U

/* CH0_BUSY: Status of all channels. 0 indicates incomplete transfer. */
#define GFXREG_GFXCACHE4_STATUS_CH0_BUSY_FSHIFT 8U
#define GFXREG_GFXCACHE4_STATUS_CH0_BUSY_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATUS_GET_CH0_BUSY(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_GFXCACHE4_GET_CH0_BUSY(s) ((((s)->status) >> 8U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATUS_CH0_BUSY_RESET (none)U

/* CH1_BUSY: Status of all channels. 1 indicates incomplete transfer. */
#define GFXREG_GFXCACHE4_STATUS_CH1_BUSY_FSHIFT 9U
#define GFXREG_GFXCACHE4_STATUS_CH1_BUSY_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATUS_GET_CH1_BUSY(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_GFXCACHE4_GET_CH1_BUSY(s) ((((s)->status) >> 9U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATUS_CH1_BUSY_RESET (none)U

/* CH2_BUSY: Status of all channels. 2 indicates incomplete transfer. */
#define GFXREG_GFXCACHE4_STATUS_CH2_BUSY_FSHIFT 10U
#define GFXREG_GFXCACHE4_STATUS_CH2_BUSY_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATUS_GET_CH2_BUSY(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_GFXCACHE4_GET_CH2_BUSY(s) ((((s)->status) >> 10U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATUS_CH2_BUSY_RESET (none)U

/* CH3_BUSY: Status of all channels. 3 indicates incomplete transfer. */
#define GFXREG_GFXCACHE4_STATUS_CH3_BUSY_FSHIFT 11U
#define GFXREG_GFXCACHE4_STATUS_CH3_BUSY_FMASK 0x1U
#define GFXREG_GFXCACHE4_STATUS_GET_CH3_BUSY(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_GFXCACHE4_GET_CH3_BUSY(s) ((((s)->status) >> 11U) & 0x1UL)
#define GFXREG_GFXCACHE4_STATUS_CH3_BUSY_RESET (none)U



/* CH0_BYPASS: Cache bypass counter. */
#define GFXREG_GFXCACHE4_CH0_BYPASS 0x00000080U
/* CH0_BYPASS: Count all channel 0 AXI requests trigged to bypass the cache. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH0_BYPASS_CH0_BYPASS_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH0_BYPASS_CH0_BYPASS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH0_BYPASS_GET_CH0_BYPASS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH0_BYPASS(s) ((((s)->ch0_bypass) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH0_BYPASS_CH0_BYPASS_RESET (none)U

/* CH0_MISS: Cache miss counter. */
#define GFXREG_GFXCACHE4_CH0_MISS 0x00000084U
/* CH0_MISS: Count all channel 0 AXI requests passing the cache but request a AXI request to memory. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH0_MISS_CH0_MISS_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH0_MISS_CH0_MISS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH0_MISS_GET_CH0_MISS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH0_MISS(s) ((((s)->ch0_miss) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH0_MISS_CH0_MISS_RESET (none)U

/* CH0_HIT: Cache hit counter. */
#define GFXREG_GFXCACHE4_CH0_HIT 0x00000088U
/* CH0_HIT: Count all channel 0 AXI requests resulting in a cache hit. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH0_HIT_CH0_HIT_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH0_HIT_CH0_HIT_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH0_HIT_GET_CH0_HIT(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH0_HIT(s) ((((s)->ch0_hit) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH0_HIT_CH0_HIT_RESET (none)U

/* CH1_BYPASS: Cache bypass counter. */
#define GFXREG_GFXCACHE4_CH1_BYPASS 0x0000008cU
/* CH1_BYPASS: Count all channel 1 AXI requests trigged to bypass the cache. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH1_BYPASS_CH1_BYPASS_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH1_BYPASS_CH1_BYPASS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH1_BYPASS_GET_CH1_BYPASS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH1_BYPASS(s) ((((s)->ch1_bypass) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH1_BYPASS_CH1_BYPASS_RESET (none)U

/* CH1_MISS: Cache miss counter. */
#define GFXREG_GFXCACHE4_CH1_MISS 0x00000090U
/* CH1_MISS: Count all channel 1 AXI requests passing the cache but request a AXI request to memory. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH1_MISS_CH1_MISS_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH1_MISS_CH1_MISS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH1_MISS_GET_CH1_MISS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH1_MISS(s) ((((s)->ch1_miss) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH1_MISS_CH1_MISS_RESET (none)U

/* CH1_HIT: Cache hit counter. */
#define GFXREG_GFXCACHE4_CH1_HIT 0x00000094U
/* CH1_HIT: Count all channel 1 AXI requests resulting in a cache hit. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH1_HIT_CH1_HIT_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH1_HIT_CH1_HIT_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH1_HIT_GET_CH1_HIT(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH1_HIT(s) ((((s)->ch1_hit) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH1_HIT_CH1_HIT_RESET (none)U

/* CH2_BYPASS: Cache bypass counter. */
#define GFXREG_GFXCACHE4_CH2_BYPASS 0x00000098U
/* CH2_BYPASS: Count all channel 2 AXI requests trigged to bypass the cache. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH2_BYPASS_CH2_BYPASS_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH2_BYPASS_CH2_BYPASS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH2_BYPASS_GET_CH2_BYPASS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH2_BYPASS(s) ((((s)->ch2_bypass) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH2_BYPASS_CH2_BYPASS_RESET (none)U

/* CH2_MISS: Cache miss counter. */
#define GFXREG_GFXCACHE4_CH2_MISS 0x0000009cU
/* CH2_MISS: Count all channel 2 AXI requests passing the cache but request a AXI request to memory. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH2_MISS_CH2_MISS_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH2_MISS_CH2_MISS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH2_MISS_GET_CH2_MISS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH2_MISS(s) ((((s)->ch2_miss) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH2_MISS_CH2_MISS_RESET (none)U

/* CH2_HIT: Cache hit counter. */
#define GFXREG_GFXCACHE4_CH2_HIT 0x000000a0U
/* CH2_HIT: Count all channel 2 AXI requests resulting in a cache hit. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH2_HIT_CH2_HIT_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH2_HIT_CH2_HIT_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH2_HIT_GET_CH2_HIT(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH2_HIT(s) ((((s)->ch2_hit) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH2_HIT_CH2_HIT_RESET (none)U

/* CH3_BYPASS: Cache bypass counter. */
#define GFXREG_GFXCACHE4_CH3_BYPASS 0x000000a4U
/* CH3_BYPASS: Count all channel 3 AXI requests trigged to bypass the cache. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH3_BYPASS_CH3_BYPASS_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH3_BYPASS_CH3_BYPASS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH3_BYPASS_GET_CH3_BYPASS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH3_BYPASS(s) ((((s)->ch3_bypass) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH3_BYPASS_CH3_BYPASS_RESET (none)U

/* CH3_MISS: Cache miss counter. */
#define GFXREG_GFXCACHE4_CH3_MISS 0x000000a8U
/* CH3_MISS: Count all channel 3 AXI requests passing the cache but request a AXI request to memory. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH3_MISS_CH3_MISS_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH3_MISS_CH3_MISS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH3_MISS_GET_CH3_MISS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH3_MISS(s) ((((s)->ch3_miss) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH3_MISS_CH3_MISS_RESET (none)U

/* CH3_HIT: Cache hit counter. */
#define GFXREG_GFXCACHE4_CH3_HIT 0x000000acU
/* CH3_HIT: Count all channel 3 AXI requests resulting in a cache hit. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE4_CH3_HIT_CH3_HIT_FSHIFT 0U
#define GFXREG_GFXCACHE4_CH3_HIT_CH3_HIT_FMASK 0xffffffffU
#define GFXREG_GFXCACHE4_CH3_HIT_GET_CH3_HIT(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_GET_CH3_HIT(s) ((((s)->ch3_hit) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE4_CH3_HIT_CH3_HIT_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_GFXCACHE4_REGISTER_H */

