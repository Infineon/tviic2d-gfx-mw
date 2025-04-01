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
 * \file        gfxreg_gfxcache1_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   gfxcache1
 *              Source:   gfxcache1.component.xml
 *              Template: component_h.tpl
 * \brief      Iris gfxcache1 register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_GFXCACHE1_REGISTER_H
#define GFXREG_GFXCACHE1_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* gfxcache1 registers */
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


/* STATIC_CONTROL: Static control register. */
#define GFXREG_GFXCACHE1_STATIC_CONTROL 0x00000000U
/* CH0_ENABLED: Enable bit for channel 0 */
#define GFXREG_GFXCACHE1_STATIC_CONTROL_CH0_ENABLED_FSHIFT 0U
#define GFXREG_GFXCACHE1_STATIC_CONTROL_CH0_ENABLED_FMASK 0x1U
#define GFXREG_GFXCACHE1_STATIC_CONTROL_SETM_CH0_ENABLED(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_GFXCACHE1_STATIC_CONTROL_SET_CH0_ENABLED(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE1_STATIC_CONTROL_GET_CH0_ENABLED(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_GFXCACHE1_SETM_CH0_ENABLED(s,val) ( (s)->static_control = ((s)->static_control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_GFXCACHE1_SET_CH0_ENABLED(s,val)  ( (s)->static_control = (((s)->static_control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE1_GET_CH0_ENABLED(s) ((((s)->static_control) ) & 0x1UL)
#define GFXREG_GFXCACHE1_STATIC_CONTROL_CH0_ENABLED_DIS 0x0U /* Disable */
#define GFXREG_GFXCACHE1_STATIC_CONTROL_CH0_ENABLED_EN 0x1U /* Enable */
#define GFXREG_GFXCACHE1_STATIC_CONTROL_CH0_ENABLED_RESET 0U

/* MEASUREMENT_EN: Enable measurement of gfxcache. Corresponding fields are CHX_BYPASS, CHX_MISS and CHX_HIT, OVERFLOW and SAVE_AND_RESET_MEASUREMENTS. */
#define GFXREG_GFXCACHE1_STATIC_CONTROL_MEASUREMENT_EN_FSHIFT 8U
#define GFXREG_GFXCACHE1_STATIC_CONTROL_MEASUREMENT_EN_FMASK 0x1U
#define GFXREG_GFXCACHE1_STATIC_CONTROL_SETM_MEASUREMENT_EN(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_GFXCACHE1_STATIC_CONTROL_SET_MEASUREMENT_EN(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE1_STATIC_CONTROL_GET_MEASUREMENT_EN(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_GFXCACHE1_SETM_MEASUREMENT_EN(s,val) ( (s)->static_control = ((s)->static_control & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_GFXCACHE1_SET_MEASUREMENT_EN(s,val)  ( (s)->static_control = (((s)->static_control & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE1_GET_MEASUREMENT_EN(s) ((((s)->static_control) >> 8U) & 0x1UL)
#define GFXREG_GFXCACHE1_STATIC_CONTROL_MEASUREMENT_EN_DIS 0x0U /* Disable */
#define GFXREG_GFXCACHE1_STATIC_CONTROL_MEASUREMENT_EN_EN 0x1U /* Enable */
#define GFXREG_GFXCACHE1_STATIC_CONTROL_MEASUREMENT_EN_RESET 0U



/* CONTROL: Control of the GfxCache. */
#define GFXREG_GFXCACHE1_CONTROL 0x00000020U
/* INVALIDATE: Triggers invalidation of the cache. */
#define GFXREG_GFXCACHE1_CONTROL_INVALIDATE_FSHIFT 0U
#define GFXREG_GFXCACHE1_CONTROL_INVALIDATE_FMASK 0x1U
#define GFXREG_GFXCACHE1_CONTROL_SETM_INVALIDATE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_GFXCACHE1_CONTROL_SET_INVALIDATE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE1_SETM_INVALIDATE(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_GFXCACHE1_SET_INVALIDATE(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE1_CONTROL_INVALIDATE_RESET (none)U

/* SAVE_AND_RESET_MEASUREMENTS: All performance and utilization counters are implemented internally. Writing one to this field provides all measured values to corresponding configurations registers and resets the internal counters. */
#define GFXREG_GFXCACHE1_CONTROL_SAVE_AND_RESET_MEASUREMENTS_FSHIFT 1U
#define GFXREG_GFXCACHE1_CONTROL_SAVE_AND_RESET_MEASUREMENTS_FMASK 0x1U
#define GFXREG_GFXCACHE1_CONTROL_SETM_SAVE_AND_RESET_MEASUREMENTS(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_GFXCACHE1_CONTROL_SET_SAVE_AND_RESET_MEASUREMENTS(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE1_SETM_SAVE_AND_RESET_MEASUREMENTS(s,val) ( (s)->control = ((s)->control & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_GFXCACHE1_SET_SAVE_AND_RESET_MEASUREMENTS(s,val)  ( (s)->control = (((s)->control & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE1_CONTROL_SAVE_AND_RESET_MEASUREMENTS_RESET (none)U

/* CH0_INVALIDATE: Triggers invalidation of the cache for channel 0. */
#define GFXREG_GFXCACHE1_CONTROL_CH0_INVALIDATE_FSHIFT 8U
#define GFXREG_GFXCACHE1_CONTROL_CH0_INVALIDATE_FMASK 0x1U
#define GFXREG_GFXCACHE1_CONTROL_SETM_CH0_INVALIDATE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_GFXCACHE1_CONTROL_SET_CH0_INVALIDATE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GFXCACHE1_SETM_CH0_INVALIDATE(s,val) ( (s)->control = ((s)->control & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_GFXCACHE1_SET_CH0_INVALIDATE(s,val)  ( (s)->control = (((s)->control & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GFXCACHE1_CONTROL_CH0_INVALIDATE_RESET (none)U



/* STATUS: Status information */
#define GFXREG_GFXCACHE1_STATUS 0x00000040U
/* BUSY: Status of all channels. 1 indicates incomplete transfer. */
#define GFXREG_GFXCACHE1_STATUS_BUSY_FSHIFT 0U
#define GFXREG_GFXCACHE1_STATUS_BUSY_FMASK 0x1U
#define GFXREG_GFXCACHE1_STATUS_GET_BUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_GFXCACHE1_GET_BUSY(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_GFXCACHE1_STATUS_BUSY_RESET (none)U

/* OVERFLOW: This bit is set with any counter overflow (equal 0xffffffff). The counter will remain on the overflow value in this case. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. */
#define GFXREG_GFXCACHE1_STATUS_OVERFLOW_FSHIFT 1U
#define GFXREG_GFXCACHE1_STATUS_OVERFLOW_FMASK 0x1U
#define GFXREG_GFXCACHE1_STATUS_GET_OVERFLOW(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_GFXCACHE1_GET_OVERFLOW(s) ((((s)->status) >> 1U) & 0x1UL)
#define GFXREG_GFXCACHE1_STATUS_OVERFLOW_RESET (none)U

/* CH0_BUSY: Status of all channels. 0 indicates incomplete transfer. */
#define GFXREG_GFXCACHE1_STATUS_CH0_BUSY_FSHIFT 8U
#define GFXREG_GFXCACHE1_STATUS_CH0_BUSY_FMASK 0x1U
#define GFXREG_GFXCACHE1_STATUS_GET_CH0_BUSY(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_GFXCACHE1_GET_CH0_BUSY(s) ((((s)->status) >> 8U) & 0x1UL)
#define GFXREG_GFXCACHE1_STATUS_CH0_BUSY_RESET (none)U



/* CH0_BYPASS: Cache bypass counter. */
#define GFXREG_GFXCACHE1_CH0_BYPASS 0x00000080U
/* CH0_BYPASS: Count all channel 0 AXI requests trigged to bypass the cache. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE1_CH0_BYPASS_CH0_BYPASS_FSHIFT 0U
#define GFXREG_GFXCACHE1_CH0_BYPASS_CH0_BYPASS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE1_CH0_BYPASS_GET_CH0_BYPASS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE1_GET_CH0_BYPASS(s) ((((s)->ch0_bypass) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE1_CH0_BYPASS_CH0_BYPASS_RESET (none)U

/* CH0_MISS: Cache miss counter. */
#define GFXREG_GFXCACHE1_CH0_MISS 0x00000084U
/* CH0_MISS: Count all channel 0 AXI requests passing the cache but request a AXI request to memory. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE1_CH0_MISS_CH0_MISS_FSHIFT 0U
#define GFXREG_GFXCACHE1_CH0_MISS_CH0_MISS_FMASK 0xffffffffU
#define GFXREG_GFXCACHE1_CH0_MISS_GET_CH0_MISS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE1_GET_CH0_MISS(s) ((((s)->ch0_miss) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE1_CH0_MISS_CH0_MISS_RESET (none)U

/* CH0_HIT: Cache hit counter. */
#define GFXREG_GFXCACHE1_CH0_HIT 0x00000088U
/* CH0_HIT: Count all channel 0 AXI requests resulting in a cache hit. This field is updated with SAVE_AND_RESET_MEASUREMENTS pulse. See also OVERFLOW bit. */
#define GFXREG_GFXCACHE1_CH0_HIT_CH0_HIT_FSHIFT 0U
#define GFXREG_GFXCACHE1_CH0_HIT_CH0_HIT_FMASK 0xffffffffU
#define GFXREG_GFXCACHE1_CH0_HIT_GET_CH0_HIT(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE1_GET_CH0_HIT(s) ((((s)->ch0_hit) ) & 0xffffffffUL)
#define GFXREG_GFXCACHE1_CH0_HIT_CH0_HIT_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_GFXCACHE1_REGISTER_H */

