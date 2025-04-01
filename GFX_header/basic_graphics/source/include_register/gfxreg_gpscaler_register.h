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
 * \date        Tue May 26 11:58:40 2020
 * \file        gfxreg_gpscaler_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   gpscaler
 *              Source:   gpscaler.component.xml
 *              Template: component_h.tpl
 * \brief      Iris gpscaler register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_GPSCALER_REGISTER_H
#define GFXREG_GPSCALER_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* gpscaler registers */
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


/* STATICCONTROL: Static control settings that must typically be setup once only. */
#define GFXREG_GPSCALER_STATICCONTROL 0x00000000U
/* SHDEN: If ShdEn==1 shadow registers are loaded when indicated by hardware signal ( a command signal in the data stream at frame start ). If ShdEn==0 shadow registers are loaded each frame start. */
#define GFXREG_GPSCALER_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_GPSCALER_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_GPSCALER_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_GPSCALER_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_GPSCALER_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_GPSCALER_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_GPSCALER_STATICCONTROL_SHDEN_RESET 0U

/* CONTROL: Global operation control. */
#define GFXREG_GPSCALER_CONTROL 0x00000004U
/* MODE: Controls the sequence of horizontal and vertical operation for all operation modes. */
#define GFXREG_GPSCALER_CONTROL_MODE_FSHIFT 0U
#define GFXREG_GPSCALER_CONTROL_MODE_FMASK 0xfU
#define GFXREG_GPSCALER_CONTROL_SETM_MODE(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_GPSCALER_CONTROL_SET_MODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_CONTROL_GET_MODE(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_GPSCALER_SETM_MODE(s,val) ( (s)->control = ((s)->control & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_GPSCALER_SET_MODE(s,val)  ( (s)->control = (((s)->control & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_MODE(s) ((((s)->control) ) & 0xfUL)
#define GFXREG_GPSCALER_CONTROL_MODE_NEUTRAL 0x00U /* Neutral mode. Pixels are by-passed unchanged, all other settings are ignored. */
#define GFXREG_GPSCALER_CONTROL_MODE_ACTIVE_AUTO 0x0EU /* Automatic mode. Behaves like ACTIVE_VER_FIRST when operation_mode=SCALE and scale_mode_h=UPSCALE, like ACTIVE_HOR_FIRST otherwise. */
#define GFXREG_GPSCALER_CONTROL_MODE_ACTIVE_HOR_FIRST 0x0CU /* Horizontal is done before vertical operation. */
#define GFXREG_GPSCALER_CONTROL_MODE_ACTIVE_VER_FIRST 0x0DU /* Vertical is done before horizontal operation. */
#define GFXREG_GPSCALER_CONTROL_MODE_ACTIVE_HOR_ONLY 0x08U /* Only horizontal operation is done. */
#define GFXREG_GPSCALER_CONTROL_MODE_ACTIVE_VER_ONLY 0x05U /* Only vertical operation is done. */
#define GFXREG_GPSCALER_CONTROL_MODE_RESET 0U

/* OPERATION_MODE: Selects the kind of operation to execute. */
#define GFXREG_GPSCALER_CONTROL_OPERATION_MODE_FSHIFT 8U
#define GFXREG_GPSCALER_CONTROL_OPERATION_MODE_FMASK 0x1U
#define GFXREG_GPSCALER_CONTROL_SETM_OPERATION_MODE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_GPSCALER_CONTROL_SET_OPERATION_MODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_CONTROL_GET_OPERATION_MODE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_OPERATION_MODE(s,val) ( (s)->control = ((s)->control & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_GPSCALER_SET_OPERATION_MODE(s,val)  ( (s)->control = (((s)->control & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_OPERATION_MODE(s) ((((s)->control) >> 8U) & 0x1UL)
#define GFXREG_GPSCALER_CONTROL_OPERATION_MODE_SCALE 0x0U /* Scaler is active with the corresponding settings from scaler registers; filter registers are ignored. */
#define GFXREG_GPSCALER_CONTROL_OPERATION_MODE_FIR 0x1U /* FIR-Filter is active with the corresponding settings from filter registers; scaler registers are ignored. */
#define GFXREG_GPSCALER_CONTROL_OPERATION_MODE_RESET 0U

/* OUTPUTDIMENSION: Dimensions of the output frame or fame slice. This values are required for both FIR filter and scaler, since their output may have other dimension than input. The dimension of scaler's output is defined by the scale factor. The dimension of FIR filter's output depends on the tiling at the begin and the end of the slice. */
#define GFXREG_GPSCALER_OUTPUTDIMENSION 0x00000008U
/* OUTPUT_WIDTH: Number of output pixel per input line. This number is equal to the width of the output frame minus one. */
#define GFXREG_GPSCALER_OUTPUTDIMENSION_OUTPUT_WIDTH_FSHIFT 0U
#define GFXREG_GPSCALER_OUTPUTDIMENSION_OUTPUT_WIDTH_FMASK 0x3fffU
#define GFXREG_GPSCALER_OUTPUTDIMENSION_SETM_OUTPUT_WIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_GPSCALER_OUTPUTDIMENSION_SET_OUTPUT_WIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_OUTPUTDIMENSION_GET_OUTPUT_WIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_GPSCALER_SETM_OUTPUT_WIDTH(s,val) ( (s)->outputdimension = ((s)->outputdimension & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_GPSCALER_SET_OUTPUT_WIDTH(s,val)  ( (s)->outputdimension = (((s)->outputdimension & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_OUTPUT_WIDTH(s) ((((s)->outputdimension) ) & 0x3fffUL)
#define GFXREG_GPSCALER_OUTPUTDIMENSION_OUTPUT_WIDTH_RESET 0U

/* OUTPUT_HEIGHT: Number of output lines per input frame or slice. This number is equal to the height of the output frame minus one. */
#define GFXREG_GPSCALER_OUTPUTDIMENSION_OUTPUT_HEIGHT_FSHIFT 16U
#define GFXREG_GPSCALER_OUTPUTDIMENSION_OUTPUT_HEIGHT_FMASK 0x3fffU
#define GFXREG_GPSCALER_OUTPUTDIMENSION_SETM_OUTPUT_HEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_GPSCALER_OUTPUTDIMENSION_SET_OUTPUT_HEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_OUTPUTDIMENSION_GET_OUTPUT_HEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_GPSCALER_SETM_OUTPUT_HEIGHT(s,val) ( (s)->outputdimension = ((s)->outputdimension & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_GPSCALER_SET_OUTPUT_HEIGHT(s,val)  ( (s)->outputdimension = (((s)->outputdimension & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_OUTPUT_HEIGHT(s) ((((s)->outputdimension) >> 16U) & 0x3fffUL)
#define GFXREG_GPSCALER_OUTPUTDIMENSION_OUTPUT_HEIGHT_RESET 0U

/* SCALERCONTROL: Scaler operation control. */
#define GFXREG_GPSCALER_SCALERCONTROL 0x0000000cU
/* SCALE_MODE_H: Scale mode for horizontal scaling. */
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_H_FSHIFT 0U
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_H_FMASK 0x1U
#define GFXREG_GPSCALER_SCALERCONTROL_SETM_SCALE_MODE_H(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_GPSCALER_SCALERCONTROL_SET_SCALE_MODE_H(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERCONTROL_GET_SCALE_MODE_H(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_GPSCALER_SETM_SCALE_MODE_H(s,val) ( (s)->scalercontrol = ((s)->scalercontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_GPSCALER_SET_SCALE_MODE_H(s,val)  ( (s)->scalercontrol = (((s)->scalercontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_SCALE_MODE_H(s) ((((s)->scalercontrol) ) & 0x1UL)
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_H_DOWNSCALE 0x0U /* Down-scaling (output width is less or equal input width). */
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_H_UPSCALE 0x1U /* Up-scaling (output width greater or equal input width) */
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_H_RESET 0U

/* SCALE_MODE_V: Scale mode for vertical scaling. */
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_V_FSHIFT 4U
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_V_FMASK 0x1U
#define GFXREG_GPSCALER_SCALERCONTROL_SETM_SCALE_MODE_V(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_GPSCALER_SCALERCONTROL_SET_SCALE_MODE_V(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERCONTROL_GET_SCALE_MODE_V(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_SCALE_MODE_V(s,val) ( (s)->scalercontrol = ((s)->scalercontrol & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_GPSCALER_SET_SCALE_MODE_V(s,val)  ( (s)->scalercontrol = (((s)->scalercontrol & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_SCALE_MODE_V(s) ((((s)->scalercontrol) >> 4U) & 0x1UL)
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_V_DOWNSCALE 0x0U /* Down-scaling (output height less or equal input height). */
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_V_UPSCALE 0x1U /* Up-scaling (output height greater or equal input height) */
#define GFXREG_GPSCALER_SCALERCONTROL_SCALE_MODE_V_RESET 0U

/* FILTER_MODE_H: Selects sampling algorithm for horizontal scaling. */
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_H_FSHIFT 8U
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_H_FMASK 0x1U
#define GFXREG_GPSCALER_SCALERCONTROL_SETM_FILTER_MODE_H(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_GPSCALER_SCALERCONTROL_SET_FILTER_MODE_H(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERCONTROL_GET_FILTER_MODE_H(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_FILTER_MODE_H(s,val) ( (s)->scalercontrol = ((s)->scalercontrol & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_GPSCALER_SET_FILTER_MODE_H(s,val)  ( (s)->scalercontrol = (((s)->scalercontrol & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_FILTER_MODE_H(s) ((((s)->scalercontrol) >> 8U) & 0x1UL)
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_H_NEAREST 0x0U /* Nearest filter (point-sampling) */
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_H_LINEAR 0x1U /* Box filter (linear) */
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_H_RESET 0U

/* FILTER_MODE_V: Selects sampling algorithm for vertical scaling. */
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_V_FSHIFT 12U
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_V_FMASK 0x1U
#define GFXREG_GPSCALER_SCALERCONTROL_SETM_FILTER_MODE_V(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_GPSCALER_SCALERCONTROL_SET_FILTER_MODE_V(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERCONTROL_GET_FILTER_MODE_V(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_FILTER_MODE_V(s,val) ( (s)->scalercontrol = ((s)->scalercontrol & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_GPSCALER_SET_FILTER_MODE_V(s,val)  ( (s)->scalercontrol = (((s)->scalercontrol & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_FILTER_MODE_V(s) ((((s)->scalercontrol) >> 12U) & 0x1UL)
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_V_NEAREST 0x0U /* Nearest filter (point-sampling) */
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_V_LINEAR 0x1U /* Box filter (linear) */
#define GFXREG_GPSCALER_SCALERCONTROL_FILTER_MODE_V_RESET 0U

/* FIELD_MODE: Controls generation of output field polarity for vertical scaling. */
#define GFXREG_GPSCALER_SCALERCONTROL_FIELD_MODE_FSHIFT 16U
#define GFXREG_GPSCALER_SCALERCONTROL_FIELD_MODE_FMASK 0x3U
#define GFXREG_GPSCALER_SCALERCONTROL_SETM_FIELD_MODE(val) (((CYGFX_U32)(val) & 0x3UL) << 16U)
#define GFXREG_GPSCALER_SCALERCONTROL_SET_FIELD_MODE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERCONTROL_GET_FIELD_MODE(val) (((CYGFX_U32)(val) >> 16U) & 0x3UL)
#define GFXREG_GPSCALER_SETM_FIELD_MODE(s,val) ( (s)->scalercontrol = ((s)->scalercontrol & ~0x30000UL) | (((CYGFX_U32)(val) << 16U) & 0x30000UL) )
#define GFXREG_GPSCALER_SET_FIELD_MODE(s,val)  ( (s)->scalercontrol = (((s)->scalercontrol & ~0x30000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_FIELD_MODE(s) ((((s)->scalercontrol) >> 16U) & 0x3UL)
#define GFXREG_GPSCALER_SCALERCONTROL_FIELD_MODE_ALWAYS0 0x0U /* Constant 0 indicates frame or top field. */
#define GFXREG_GPSCALER_SCALERCONTROL_FIELD_MODE_ALWAYS1 0x1U /* Constant 1 indicates bottom field. */
#define GFXREG_GPSCALER_SCALERCONTROL_FIELD_MODE_INPUT 0x2U /* Output field polarity is taken from input field polarity. */
#define GFXREG_GPSCALER_SCALERCONTROL_FIELD_MODE_TOGGLE 0x3U /* Output field polarity toggles, starting with 0 after reset. */
#define GFXREG_GPSCALER_SCALERCONTROL_FIELD_MODE_RESET 2U

/* ALPHA_VALUE: When 'mode' field is not 'NEUTRAL', then input alpha values are ignore and output alpha set to this constant value for all pixels. This restriction applies to GPScalerL derivative only. */
#define GFXREG_GPSCALER_SCALERCONTROL_ALPHA_VALUE_FSHIFT 20U
#define GFXREG_GPSCALER_SCALERCONTROL_ALPHA_VALUE_FMASK 0xffU
#define GFXREG_GPSCALER_SCALERCONTROL_SETM_ALPHA_VALUE(val) (((CYGFX_U32)(val) & 0xffUL) << 20U)
#define GFXREG_GPSCALER_SCALERCONTROL_SET_ALPHA_VALUE(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERCONTROL_GET_ALPHA_VALUE(val) (((CYGFX_U32)(val) >> 20U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_ALPHA_VALUE(s,val) ( (s)->scalercontrol = ((s)->scalercontrol & ~0xff00000UL) | (((CYGFX_U32)(val) << 20U) & 0xff00000UL) )
#define GFXREG_GPSCALER_SET_ALPHA_VALUE(s,val)  ( (s)->scalercontrol = (((s)->scalercontrol & ~0xff00000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_ALPHA_VALUE(s) ((((s)->scalercontrol) >> 20U) & 0xffUL)
#define GFXREG_GPSCALER_SCALERCONTROL_ALPHA_VALUE_RESET 0U

/* SCALERSETUPH0: Phase interpolator setup. */
#define GFXREG_GPSCALER_SCALERSETUPH0 0x00000010U
/* SCALE_FACTOR_H: Scale factor has to be greater than 0.0 and less than or equal to 1.0. If scale_mode is UPSCALE then the inverse scale factor has to be programmed. */
#define GFXREG_GPSCALER_SCALERSETUPH0_SCALE_FACTOR_H_FSHIFT 0U
#define GFXREG_GPSCALER_SCALERSETUPH0_SCALE_FACTOR_H_FMASK 0xfffffU
#define GFXREG_GPSCALER_SCALERSETUPH0_SETM_SCALE_FACTOR_H(val) (((CYGFX_U32)(val) & 0xfffffUL) )
#define GFXREG_GPSCALER_SCALERSETUPH0_SET_SCALE_FACTOR_H(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERSETUPH0_GET_SCALE_FACTOR_H(val) (((CYGFX_U32)(val) ) & 0xfffffUL)
#define GFXREG_GPSCALER_SETM_SCALE_FACTOR_H(s,val) ( (s)->scalersetuph0 = ((s)->scalersetuph0 & ~0xfffffUL) | (((CYGFX_U32)(val) ) & 0xfffffUL) )
#define GFXREG_GPSCALER_SET_SCALE_FACTOR_H(s,val)  ( (s)->scalersetuph0 = (((s)->scalersetuph0 & ~0xfffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_SCALE_FACTOR_H(s) ((((s)->scalersetuph0) ) & 0xfffffUL)
#define GFXREG_GPSCALER_SCALERSETUPH0_SCALE_FACTOR_H_RESET 0x80000U

/* SCALERSETUPH1: Phase interpolator setup. */
#define GFXREG_GPSCALER_SCALERSETUPH1 0x00000014U
/* PHASE_OFFSET_H: Phase offset has to be larger than -2 and smaller than +2. Depending on scale_mode this value is relative to input (UPSCALE) or output pixel (DOWNSCALE). A negative value shifts the image to the right, a positive one to the left. */
#define GFXREG_GPSCALER_SCALERSETUPH1_PHASE_OFFSET_H_FSHIFT 0U
#define GFXREG_GPSCALER_SCALERSETUPH1_PHASE_OFFSET_H_FMASK 0x1fffffU
#define GFXREG_GPSCALER_SCALERSETUPH1_SETM_PHASE_OFFSET_H(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SCALERSETUPH1_SET_PHASE_OFFSET_H(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERSETUPH1_GET_PHASE_OFFSET_H(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SETM_PHASE_OFFSET_H(s,val) ( (s)->scalersetuph1 = ((s)->scalersetuph1 & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SET_PHASE_OFFSET_H(s,val)  ( (s)->scalersetuph1 = (((s)->scalersetuph1 & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_PHASE_OFFSET_H(s) ((((s)->scalersetuph1) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SCALERSETUPH1_PHASE_OFFSET_H_IWIDTH 2
#define GFXREG_GPSCALER_SCALERSETUPH1_PHASE_OFFSET_H_FWIDTH 19
#define GFXREG_GPSCALER_SCALERSETUPH1_PHASE_OFFSET_H_RESET 0U

/* SCALERSETUPV0: Phase interpolator setup. */
#define GFXREG_GPSCALER_SCALERSETUPV0 0x00000018U
/* SCALE_FACTOR_V: Scale factor is greater than 0.0 and less than or equal to 1.0. If scale_mode is UPSCALE then the inverse scale factor have to be programmed. */
#define GFXREG_GPSCALER_SCALERSETUPV0_SCALE_FACTOR_V_FSHIFT 0U
#define GFXREG_GPSCALER_SCALERSETUPV0_SCALE_FACTOR_V_FMASK 0xfffffU
#define GFXREG_GPSCALER_SCALERSETUPV0_SETM_SCALE_FACTOR_V(val) (((CYGFX_U32)(val) & 0xfffffUL) )
#define GFXREG_GPSCALER_SCALERSETUPV0_SET_SCALE_FACTOR_V(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERSETUPV0_GET_SCALE_FACTOR_V(val) (((CYGFX_U32)(val) ) & 0xfffffUL)
#define GFXREG_GPSCALER_SETM_SCALE_FACTOR_V(s,val) ( (s)->scalersetupv0 = ((s)->scalersetupv0 & ~0xfffffUL) | (((CYGFX_U32)(val) ) & 0xfffffUL) )
#define GFXREG_GPSCALER_SET_SCALE_FACTOR_V(s,val)  ( (s)->scalersetupv0 = (((s)->scalersetupv0 & ~0xfffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfffffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_SCALE_FACTOR_V(s) ((((s)->scalersetupv0) ) & 0xfffffUL)
#define GFXREG_GPSCALER_SCALERSETUPV0_SCALE_FACTOR_V_RESET 0x80000U

/* SCALERSETUPV1: Phase interpolator setup, selected if input and output field polarity is 0. */
#define GFXREG_GPSCALER_SCALERSETUPV1 0x0000001cU
/* PHASE_OFFSET_V: Phase offset has to be larger than -2 and smaller than +2. Depending on scale_mode this value is relative to input (UPSCALE) or output pixel (DOWNSCALE). A negative value shifts the image to the bottom, a positive one to the top. */
#define GFXREG_GPSCALER_SCALERSETUPV1_PHASE_OFFSET_V_FSHIFT 0U
#define GFXREG_GPSCALER_SCALERSETUPV1_PHASE_OFFSET_V_FMASK 0x1fffffU
#define GFXREG_GPSCALER_SCALERSETUPV1_SETM_PHASE_OFFSET_V(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SCALERSETUPV1_SET_PHASE_OFFSET_V(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERSETUPV1_GET_PHASE_OFFSET_V(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SETM_PHASE_OFFSET_V(s,val) ( (s)->scalersetupv1 = ((s)->scalersetupv1 & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SET_PHASE_OFFSET_V(s,val)  ( (s)->scalersetupv1 = (((s)->scalersetupv1 & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_PHASE_OFFSET_V(s) ((((s)->scalersetupv1) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SCALERSETUPV1_PHASE_OFFSET_V_IWIDTH 2
#define GFXREG_GPSCALER_SCALERSETUPV1_PHASE_OFFSET_V_FWIDTH 19
#define GFXREG_GPSCALER_SCALERSETUPV1_PHASE_OFFSET_V_RESET 0U

/* SCALERSETUPV2: Phase interpolator setup, selected if input field polarity is 1 and output field polarity is 0. */
#define GFXREG_GPSCALER_SCALERSETUPV2 0x00000020U
/* PHASE_OFFSET_V1: Phase offset has to be larger than -2 and smaller than +2. Depending on scale_mode this value is relative to input (UPSCALE) or output pixel (DOWNSCALE). A negative value shifts the image to the bottom, a positive one to the top. */
#define GFXREG_GPSCALER_SCALERSETUPV2_PHASE_OFFSET_V1_FSHIFT 0U
#define GFXREG_GPSCALER_SCALERSETUPV2_PHASE_OFFSET_V1_FMASK 0x1fffffU
#define GFXREG_GPSCALER_SCALERSETUPV2_SETM_PHASE_OFFSET_V1(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SCALERSETUPV2_SET_PHASE_OFFSET_V1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERSETUPV2_GET_PHASE_OFFSET_V1(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SETM_PHASE_OFFSET_V1(s,val) ( (s)->scalersetupv2 = ((s)->scalersetupv2 & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SET_PHASE_OFFSET_V1(s,val)  ( (s)->scalersetupv2 = (((s)->scalersetupv2 & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_PHASE_OFFSET_V1(s) ((((s)->scalersetupv2) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SCALERSETUPV2_PHASE_OFFSET_V1_IWIDTH 2
#define GFXREG_GPSCALER_SCALERSETUPV2_PHASE_OFFSET_V1_FWIDTH 19
#define GFXREG_GPSCALER_SCALERSETUPV2_PHASE_OFFSET_V1_RESET 0U

/* SCALERSETUPV3: Phase interpolator setup, selected if input field polarity is 0 and output field polarity is 1. */
#define GFXREG_GPSCALER_SCALERSETUPV3 0x00000024U
/* PHASE_OFFSET_V2: Phase offset has to be larger than -2 and smaller than +2. Depending on scale_mode this value is relative to input (UPSCALE) or output pixel (DOWNSCALE). A negative value shifts the image to the bottom, a positive one to the top. */
#define GFXREG_GPSCALER_SCALERSETUPV3_PHASE_OFFSET_V2_FSHIFT 0U
#define GFXREG_GPSCALER_SCALERSETUPV3_PHASE_OFFSET_V2_FMASK 0x1fffffU
#define GFXREG_GPSCALER_SCALERSETUPV3_SETM_PHASE_OFFSET_V2(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SCALERSETUPV3_SET_PHASE_OFFSET_V2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERSETUPV3_GET_PHASE_OFFSET_V2(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SETM_PHASE_OFFSET_V2(s,val) ( (s)->scalersetupv3 = ((s)->scalersetupv3 & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SET_PHASE_OFFSET_V2(s,val)  ( (s)->scalersetupv3 = (((s)->scalersetupv3 & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_PHASE_OFFSET_V2(s) ((((s)->scalersetupv3) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SCALERSETUPV3_PHASE_OFFSET_V2_IWIDTH 2
#define GFXREG_GPSCALER_SCALERSETUPV3_PHASE_OFFSET_V2_FWIDTH 19
#define GFXREG_GPSCALER_SCALERSETUPV3_PHASE_OFFSET_V2_RESET 0U

/* SCALERSETUPV4: Phase interpolator setup, selected if input and output field polarity is 1. */
#define GFXREG_GPSCALER_SCALERSETUPV4 0x00000028U
/* PHASE_OFFSET_V3: Phase offset has to be larger than -2 and smaller than +2. Depending on scale_mode this value is relative to input (UPSCALE) or output pixel (DOWNSCALE). A negative value shifts the image to the bottom, a positive one to the top. */
#define GFXREG_GPSCALER_SCALERSETUPV4_PHASE_OFFSET_V3_FSHIFT 0U
#define GFXREG_GPSCALER_SCALERSETUPV4_PHASE_OFFSET_V3_FMASK 0x1fffffU
#define GFXREG_GPSCALER_SCALERSETUPV4_SETM_PHASE_OFFSET_V3(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SCALERSETUPV4_SET_PHASE_OFFSET_V3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_SCALERSETUPV4_GET_PHASE_OFFSET_V3(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SETM_PHASE_OFFSET_V3(s,val) ( (s)->scalersetupv4 = ((s)->scalersetupv4 & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_GPSCALER_SET_PHASE_OFFSET_V3(s,val)  ( (s)->scalersetupv4 = (((s)->scalersetupv4 & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_PHASE_OFFSET_V3(s) ((((s)->scalersetupv4) ) & 0x1fffffUL)
#define GFXREG_GPSCALER_SCALERSETUPV4_PHASE_OFFSET_V3_IWIDTH 2
#define GFXREG_GPSCALER_SCALERSETUPV4_PHASE_OFFSET_V3_FWIDTH 19
#define GFXREG_GPSCALER_SCALERSETUPV4_PHASE_OFFSET_V3_RESET 0U

/* FILTERCONTROL: Filter operation control. */
#define GFXREG_GPSCALER_FILTERCONTROL 0x0000002cU
/* TAPS_H: Defines the horizontal size of the FIR filter between 1 and 15 with increment of 2. Only odd filter width is supported. To program this field following formula has to be used: (filter width - 1)/2 */
#define GFXREG_GPSCALER_FILTERCONTROL_TAPS_H_FSHIFT 0U
#define GFXREG_GPSCALER_FILTERCONTROL_TAPS_H_FMASK 0x7U
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_TAPS_H(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_GPSCALER_FILTERCONTROL_SET_TAPS_H(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_TAPS_H(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_GPSCALER_SETM_TAPS_H(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_GPSCALER_SET_TAPS_H(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_TAPS_H(s) ((((s)->filtercontrol) ) & 0x7UL)
#define GFXREG_GPSCALER_FILTERCONTROL_TAPS_H_RESET 0U

/* TAPS_V: Defines the vertical size of the FIR filter between 1 and 15 with increment of 2. Only odd filter width is supported. To program this field following formula has to be used: (filter height - 1)/2 */
#define GFXREG_GPSCALER_FILTERCONTROL_TAPS_V_FSHIFT 4U
#define GFXREG_GPSCALER_FILTERCONTROL_TAPS_V_FMASK 0x7U
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_TAPS_V(val) (((CYGFX_U32)(val) & 0x7UL) << 4U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_TAPS_V(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_TAPS_V(val) (((CYGFX_U32)(val) >> 4U) & 0x7UL)
#define GFXREG_GPSCALER_SETM_TAPS_V(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0x70UL) | (((CYGFX_U32)(val) << 4U) & 0x70UL) )
#define GFXREG_GPSCALER_SET_TAPS_V(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0x70UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_TAPS_V(s) ((((s)->filtercontrol) >> 4U) & 0x7UL)
#define GFXREG_GPSCALER_FILTERCONTROL_TAPS_V_RESET 0U

/* BYPASS_MODE_R: Bypass configuration for red color components of every pixel. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_R_FSHIFT 8U
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_R_FMASK 0x1U
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_BYPASS_MODE_R(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_BYPASS_MODE_R(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_BYPASS_MODE_R(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_BYPASS_MODE_R(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_GPSCALER_SET_BYPASS_MODE_R(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_BYPASS_MODE_R(s) ((((s)->filtercontrol) >> 8U) & 0x1UL)
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_R_NEUTRAL 0x0U /* Red color is filtered. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_R_ACTIVE 0x1U /* Red color is not filtered, but is written to the line buffer. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_R_RESET 0U

/* BYPASS_MODE_G: Bypass configuration for green color components of every pixel. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_G_FSHIFT 9U
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_G_FMASK 0x1U
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_BYPASS_MODE_G(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_BYPASS_MODE_G(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_BYPASS_MODE_G(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_BYPASS_MODE_G(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_GPSCALER_SET_BYPASS_MODE_G(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_BYPASS_MODE_G(s) ((((s)->filtercontrol) >> 9U) & 0x1UL)
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_G_NEUTRAL 0x0U /* Green color is filtered. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_G_ACTIVE 0x1U /* Green color is not filtered, but is written to the line buffer. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_G_RESET 0U

/* BYPASS_MODE_B: Bypass configuration for blue color components of every pixel. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_B_FSHIFT 10U
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_B_FMASK 0x1U
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_BYPASS_MODE_B(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_BYPASS_MODE_B(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_BYPASS_MODE_B(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_BYPASS_MODE_B(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_GPSCALER_SET_BYPASS_MODE_B(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_BYPASS_MODE_B(s) ((((s)->filtercontrol) >> 10U) & 0x1UL)
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_B_NEUTRAL 0x0U /* Blue color is filtered. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_B_ACTIVE 0x1U /* Blue color is not filtered, but is written to the line buffer. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_B_RESET 0U

/* BYPASS_MODE_A: Bypass configuration for alpha components of every pixel. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_A_FSHIFT 11U
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_A_FMASK 0x1U
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_BYPASS_MODE_A(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_BYPASS_MODE_A(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_BYPASS_MODE_A(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_BYPASS_MODE_A(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_GPSCALER_SET_BYPASS_MODE_A(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_BYPASS_MODE_A(s) ((((s)->filtercontrol) >> 11U) & 0x1UL)
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_A_NEUTRAL 0x0U /* Alpha is filtered. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_A_ACTIVE 0x1U /* Alpha is not filtered, but is written to the line buffer. */
#define GFXREG_GPSCALER_FILTERCONTROL_BYPASS_MODE_A_RESET 0U

/* EXPONENT_FIR: FIR product sum is divided by 2**FIR_exponent and rounded. */
#define GFXREG_GPSCALER_FILTERCONTROL_EXPONENT_FIR_FSHIFT 12U
#define GFXREG_GPSCALER_FILTERCONTROL_EXPONENT_FIR_FMASK 0xfU
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_EXPONENT_FIR(val) (((CYGFX_U32)(val) & 0xfUL) << 12U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_EXPONENT_FIR(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_EXPONENT_FIR(val) (((CYGFX_U32)(val) >> 12U) & 0xfUL)
#define GFXREG_GPSCALER_SETM_EXPONENT_FIR(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0xf000UL) | (((CYGFX_U32)(val) << 12U) & 0xf000UL) )
#define GFXREG_GPSCALER_SET_EXPONENT_FIR(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0xf000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_EXPONENT_FIR(s) ((((s)->filtercontrol) >> 12U) & 0xfUL)
#define GFXREG_GPSCALER_FILTERCONTROL_EXPONENT_FIR_RESET 0x0U

/* TILE_MODE: Selects the tile mode for pixels outside the source frame. In order to enable tiling tiling_at_begin_h or tiling_at_begin_v and the corresponding output frame dimension have to be set. */
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_MODE_FSHIFT 16U
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_MODE_FMASK 0x3U
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_TILE_MODE(val) (((CYGFX_U32)(val) & 0x3UL) << 16U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_TILE_MODE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_TILE_MODE(val) (((CYGFX_U32)(val) >> 16U) & 0x3UL)
#define GFXREG_GPSCALER_SETM_TILE_MODE(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0x30000UL) | (((CYGFX_U32)(val) << 16U) & 0x30000UL) )
#define GFXREG_GPSCALER_SET_TILE_MODE(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0x30000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_TILE_MODE(s) ((((s)->filtercontrol) >> 16U) & 0x3UL)
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_MODE_TILE_FILL_ZERO 0x0U /* Use zero value. */
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_MODE_TILE_FILL_CONSTANT 0x1U /* Use constant color value from the field tile_color. */
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_MODE_TILE_PAD 0x2U /* Use closest pixel from source frame. */
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_MODE_TILE_PAD_ZERO 0x3U /* Use closest pixel from source buffer but zero for alpha component. */
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_MODE_RESET 0x0U

/* TILING_AT_BEGIN_H: If set to true, this bit enables tiling at the begin of the slice for horizontal direction. Tiling at the end occurs automatically by setting the corresponding output size. */
#define GFXREG_GPSCALER_FILTERCONTROL_TILING_AT_BEGIN_H_FSHIFT 20U
#define GFXREG_GPSCALER_FILTERCONTROL_TILING_AT_BEGIN_H_FMASK 0x1U
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_TILING_AT_BEGIN_H(val) (((CYGFX_U32)(val) & 0x1UL) << 20U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_TILING_AT_BEGIN_H(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_TILING_AT_BEGIN_H(val) (((CYGFX_U32)(val) >> 20U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_TILING_AT_BEGIN_H(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0x100000UL) | (((CYGFX_U32)(val) << 20U) & 0x100000UL) )
#define GFXREG_GPSCALER_SET_TILING_AT_BEGIN_H(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0x100000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_TILING_AT_BEGIN_H(s) ((((s)->filtercontrol) >> 20U) & 0x1UL)
#define GFXREG_GPSCALER_FILTERCONTROL_TILING_AT_BEGIN_H_RESET 0x0U

/* TILING_AT_BEGIN_V: If set to true, this bit enables tiling at the begin of the slice for vertical direction. Tiling at the end occurs automatically by setting the corresponding output size. */
#define GFXREG_GPSCALER_FILTERCONTROL_TILING_AT_BEGIN_V_FSHIFT 21U
#define GFXREG_GPSCALER_FILTERCONTROL_TILING_AT_BEGIN_V_FMASK 0x1U
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_TILING_AT_BEGIN_V(val) (((CYGFX_U32)(val) & 0x1UL) << 21U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_TILING_AT_BEGIN_V(val) (((CYGFX_U32)(val) << 21U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_TILING_AT_BEGIN_V(val) (((CYGFX_U32)(val) >> 21U) & 0x1UL)
#define GFXREG_GPSCALER_SETM_TILING_AT_BEGIN_V(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0x200000UL) | (((CYGFX_U32)(val) << 21U) & 0x200000UL) )
#define GFXREG_GPSCALER_SET_TILING_AT_BEGIN_V(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0x200000UL) | ((CYGFX_U32)(val) << 21U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_TILING_AT_BEGIN_V(s) ((((s)->filtercontrol) >> 21U) & 0x1UL)
#define GFXREG_GPSCALER_FILTERCONTROL_TILING_AT_BEGIN_V_RESET 0x0U

/* TILE_COLOR_ALPHA: Sets the alpha value for pixels outside of the slice. */
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_COLOR_ALPHA_FSHIFT 24U
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_COLOR_ALPHA_FMASK 0xffU
#define GFXREG_GPSCALER_FILTERCONTROL_SETM_TILE_COLOR_ALPHA(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_GPSCALER_FILTERCONTROL_SET_TILE_COLOR_ALPHA(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_FILTERCONTROL_GET_TILE_COLOR_ALPHA(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_TILE_COLOR_ALPHA(s,val) ( (s)->filtercontrol = ((s)->filtercontrol & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_GPSCALER_SET_TILE_COLOR_ALPHA(s,val)  ( (s)->filtercontrol = (((s)->filtercontrol & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_TILE_COLOR_ALPHA(s) ((((s)->filtercontrol) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_FILTERCONTROL_TILE_COLOR_ALPHA_RESET 0x0U

/* TILECOLORRGB: Color for outside of the slice. */
#define GFXREG_GPSCALER_TILECOLORRGB 0x00000030U
/* TILE_COLOR_RED: Sets the red color value for pixels outside of the slice. */
#define GFXREG_GPSCALER_TILECOLORRGB_TILE_COLOR_RED_FSHIFT 0U
#define GFXREG_GPSCALER_TILECOLORRGB_TILE_COLOR_RED_FMASK 0x3ffU
#define GFXREG_GPSCALER_TILECOLORRGB_SETM_TILE_COLOR_RED(val) (((CYGFX_U32)(val) & 0x3ffUL) )
#define GFXREG_GPSCALER_TILECOLORRGB_SET_TILE_COLOR_RED(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_TILECOLORRGB_GET_TILE_COLOR_RED(val) (((CYGFX_U32)(val) ) & 0x3ffUL)
#define GFXREG_GPSCALER_SETM_TILE_COLOR_RED(s,val) ( (s)->tilecolorrgb = ((s)->tilecolorrgb & ~0x3ffUL) | (((CYGFX_U32)(val) ) & 0x3ffUL) )
#define GFXREG_GPSCALER_SET_TILE_COLOR_RED(s,val)  ( (s)->tilecolorrgb = (((s)->tilecolorrgb & ~0x3ffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_TILE_COLOR_RED(s) ((((s)->tilecolorrgb) ) & 0x3ffUL)
#define GFXREG_GPSCALER_TILECOLORRGB_TILE_COLOR_RED_RESET 0x0U

/* TILE_COLOR_GREEN: Sets the green color value for pixels outside of the slice. */
#define GFXREG_GPSCALER_TILECOLORRGB_TILE_COLOR_GREEN_FSHIFT 10U
#define GFXREG_GPSCALER_TILECOLORRGB_TILE_COLOR_GREEN_FMASK 0x3ffU
#define GFXREG_GPSCALER_TILECOLORRGB_SETM_TILE_COLOR_GREEN(val) (((CYGFX_U32)(val) & 0x3ffUL) << 10U)
#define GFXREG_GPSCALER_TILECOLORRGB_SET_TILE_COLOR_GREEN(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_TILECOLORRGB_GET_TILE_COLOR_GREEN(val) (((CYGFX_U32)(val) >> 10U) & 0x3ffUL)
#define GFXREG_GPSCALER_SETM_TILE_COLOR_GREEN(s,val) ( (s)->tilecolorrgb = ((s)->tilecolorrgb & ~0xffc00UL) | (((CYGFX_U32)(val) << 10U) & 0xffc00UL) )
#define GFXREG_GPSCALER_SET_TILE_COLOR_GREEN(s,val)  ( (s)->tilecolorrgb = (((s)->tilecolorrgb & ~0xffc00UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_TILE_COLOR_GREEN(s) ((((s)->tilecolorrgb) >> 10U) & 0x3ffUL)
#define GFXREG_GPSCALER_TILECOLORRGB_TILE_COLOR_GREEN_RESET 0x0U

/* TILE_COLOR_BLUE: Sets the blue color value for pixels outside of the slice. */
#define GFXREG_GPSCALER_TILECOLORRGB_TILE_COLOR_BLUE_FSHIFT 20U
#define GFXREG_GPSCALER_TILECOLORRGB_TILE_COLOR_BLUE_FMASK 0x3ffU
#define GFXREG_GPSCALER_TILECOLORRGB_SETM_TILE_COLOR_BLUE(val) (((CYGFX_U32)(val) & 0x3ffUL) << 20U)
#define GFXREG_GPSCALER_TILECOLORRGB_SET_TILE_COLOR_BLUE(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_TILECOLORRGB_GET_TILE_COLOR_BLUE(val) (((CYGFX_U32)(val) >> 20U) & 0x3ffUL)
#define GFXREG_GPSCALER_SETM_TILE_COLOR_BLUE(s,val) ( (s)->tilecolorrgb = ((s)->tilecolorrgb & ~0x3ff00000UL) | (((CYGFX_U32)(val) << 20U) & 0x3ff00000UL) )
#define GFXREG_GPSCALER_SET_TILE_COLOR_BLUE(s,val)  ( (s)->tilecolorrgb = (((s)->tilecolorrgb & ~0x3ff00000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_TILE_COLOR_BLUE(s) ((((s)->tilecolorrgb) >> 20U) & 0x3ffUL)
#define GFXREG_GPSCALER_TILECOLORRGB_TILE_COLOR_BLUE_RESET 0x0U

/* COEFFICIENTSH0: Horizontal coefficients for filter_mode FIR. */
#define GFXREG_GPSCALER_COEFFICIENTSH0 0x00000034U
/* COEFF_H0: Horizontal coefficient 0. */
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H0_FSHIFT 24U
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H0_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH0_SETM_COEFF_H0(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_GPSCALER_COEFFICIENTSH0_SET_COEFF_H0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH0_GET_COEFF_H0(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H0(s,val) ( (s)->coefficientsh0 = ((s)->coefficientsh0 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_GPSCALER_SET_COEFF_H0(s,val)  ( (s)->coefficientsh0 = (((s)->coefficientsh0 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H0(s) ((((s)->coefficientsh0) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H0_RESET 0U

/* COEFF_H1: Horizontal coefficient 1. */
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H1_FSHIFT 16U
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H1_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH0_SETM_COEFF_H1(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_GPSCALER_COEFFICIENTSH0_SET_COEFF_H1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH0_GET_COEFF_H1(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H1(s,val) ( (s)->coefficientsh0 = ((s)->coefficientsh0 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_GPSCALER_SET_COEFF_H1(s,val)  ( (s)->coefficientsh0 = (((s)->coefficientsh0 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H1(s) ((((s)->coefficientsh0) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H1_RESET 0U

/* COEFF_H2: Horizontal coefficient 2. */
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H2_FSHIFT 8U
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H2_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH0_SETM_COEFF_H2(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_GPSCALER_COEFFICIENTSH0_SET_COEFF_H2(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH0_GET_COEFF_H2(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H2(s,val) ( (s)->coefficientsh0 = ((s)->coefficientsh0 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_GPSCALER_SET_COEFF_H2(s,val)  ( (s)->coefficientsh0 = (((s)->coefficientsh0 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H2(s) ((((s)->coefficientsh0) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H2_RESET 0U

/* COEFF_H3: Horizontal coefficient 3. */
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H3_FSHIFT 0U
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H3_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH0_SETM_COEFF_H3(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_GPSCALER_COEFFICIENTSH0_SET_COEFF_H3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH0_GET_COEFF_H3(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H3(s,val) ( (s)->coefficientsh0 = ((s)->coefficientsh0 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_GPSCALER_SET_COEFF_H3(s,val)  ( (s)->coefficientsh0 = (((s)->coefficientsh0 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H3(s) ((((s)->coefficientsh0) ) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH0_COEFF_H3_RESET 0U

/* COEFFICIENTSH1: Horizontal coefficients for filter_mode FIR. */
#define GFXREG_GPSCALER_COEFFICIENTSH1 0x00000038U
/* COEFF_H4: Horizontal coefficient 4. */
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H4_FSHIFT 24U
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H4_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH1_SETM_COEFF_H4(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_GPSCALER_COEFFICIENTSH1_SET_COEFF_H4(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH1_GET_COEFF_H4(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H4(s,val) ( (s)->coefficientsh1 = ((s)->coefficientsh1 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_GPSCALER_SET_COEFF_H4(s,val)  ( (s)->coefficientsh1 = (((s)->coefficientsh1 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H4(s) ((((s)->coefficientsh1) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H4_RESET 0U

/* COEFF_H5: Horizontal coefficient 5. */
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H5_FSHIFT 16U
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H5_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH1_SETM_COEFF_H5(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_GPSCALER_COEFFICIENTSH1_SET_COEFF_H5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH1_GET_COEFF_H5(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H5(s,val) ( (s)->coefficientsh1 = ((s)->coefficientsh1 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_GPSCALER_SET_COEFF_H5(s,val)  ( (s)->coefficientsh1 = (((s)->coefficientsh1 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H5(s) ((((s)->coefficientsh1) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H5_RESET 0U

/* COEFF_H6: Horizontal coefficient 6. */
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H6_FSHIFT 8U
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H6_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH1_SETM_COEFF_H6(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_GPSCALER_COEFFICIENTSH1_SET_COEFF_H6(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH1_GET_COEFF_H6(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H6(s,val) ( (s)->coefficientsh1 = ((s)->coefficientsh1 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_GPSCALER_SET_COEFF_H6(s,val)  ( (s)->coefficientsh1 = (((s)->coefficientsh1 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H6(s) ((((s)->coefficientsh1) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H6_RESET 0U

/* COEFF_H7: Horizontal coefficient 7. */
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H7_FSHIFT 0U
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H7_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH1_SETM_COEFF_H7(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_GPSCALER_COEFFICIENTSH1_SET_COEFF_H7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH1_GET_COEFF_H7(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H7(s,val) ( (s)->coefficientsh1 = ((s)->coefficientsh1 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_GPSCALER_SET_COEFF_H7(s,val)  ( (s)->coefficientsh1 = (((s)->coefficientsh1 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H7(s) ((((s)->coefficientsh1) ) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH1_COEFF_H7_RESET 0U

/* COEFFICIENTSH2: Horizontal coefficients for filter_mode FIR. */
#define GFXREG_GPSCALER_COEFFICIENTSH2 0x0000003cU
/* COEFF_H8: Horizontal coefficient 8. */
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H8_FSHIFT 24U
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H8_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH2_SETM_COEFF_H8(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_GPSCALER_COEFFICIENTSH2_SET_COEFF_H8(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH2_GET_COEFF_H8(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H8(s,val) ( (s)->coefficientsh2 = ((s)->coefficientsh2 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_GPSCALER_SET_COEFF_H8(s,val)  ( (s)->coefficientsh2 = (((s)->coefficientsh2 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H8(s) ((((s)->coefficientsh2) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H8_RESET 0U

/* COEFF_H9: Horizontal coefficient 9. */
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H9_FSHIFT 16U
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H9_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH2_SETM_COEFF_H9(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_GPSCALER_COEFFICIENTSH2_SET_COEFF_H9(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH2_GET_COEFF_H9(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H9(s,val) ( (s)->coefficientsh2 = ((s)->coefficientsh2 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_GPSCALER_SET_COEFF_H9(s,val)  ( (s)->coefficientsh2 = (((s)->coefficientsh2 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H9(s) ((((s)->coefficientsh2) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H9_RESET 0U

/* COEFF_H10: Horizontal coefficient 10. */
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H10_FSHIFT 8U
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H10_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH2_SETM_COEFF_H10(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_GPSCALER_COEFFICIENTSH2_SET_COEFF_H10(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH2_GET_COEFF_H10(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H10(s,val) ( (s)->coefficientsh2 = ((s)->coefficientsh2 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_GPSCALER_SET_COEFF_H10(s,val)  ( (s)->coefficientsh2 = (((s)->coefficientsh2 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H10(s) ((((s)->coefficientsh2) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H10_RESET 0U

/* COEFF_H11: Horizontal coefficient 11. */
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H11_FSHIFT 0U
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H11_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH2_SETM_COEFF_H11(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_GPSCALER_COEFFICIENTSH2_SET_COEFF_H11(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH2_GET_COEFF_H11(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H11(s,val) ( (s)->coefficientsh2 = ((s)->coefficientsh2 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_GPSCALER_SET_COEFF_H11(s,val)  ( (s)->coefficientsh2 = (((s)->coefficientsh2 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H11(s) ((((s)->coefficientsh2) ) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH2_COEFF_H11_RESET 0U

/* COEFFICIENTSH3: Horizontal coefficients for filter_mode FIR. */
#define GFXREG_GPSCALER_COEFFICIENTSH3 0x00000040U
/* COEFF_H12: Horizontal coefficient 12. */
#define GFXREG_GPSCALER_COEFFICIENTSH3_COEFF_H12_FSHIFT 24U
#define GFXREG_GPSCALER_COEFFICIENTSH3_COEFF_H12_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH3_SETM_COEFF_H12(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_GPSCALER_COEFFICIENTSH3_SET_COEFF_H12(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH3_GET_COEFF_H12(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H12(s,val) ( (s)->coefficientsh3 = ((s)->coefficientsh3 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_GPSCALER_SET_COEFF_H12(s,val)  ( (s)->coefficientsh3 = (((s)->coefficientsh3 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H12(s) ((((s)->coefficientsh3) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH3_COEFF_H12_RESET 0U

/* COEFF_H13: Horizontal coefficient 13. */
#define GFXREG_GPSCALER_COEFFICIENTSH3_COEFF_H13_FSHIFT 16U
#define GFXREG_GPSCALER_COEFFICIENTSH3_COEFF_H13_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH3_SETM_COEFF_H13(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_GPSCALER_COEFFICIENTSH3_SET_COEFF_H13(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH3_GET_COEFF_H13(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H13(s,val) ( (s)->coefficientsh3 = ((s)->coefficientsh3 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_GPSCALER_SET_COEFF_H13(s,val)  ( (s)->coefficientsh3 = (((s)->coefficientsh3 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H13(s) ((((s)->coefficientsh3) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH3_COEFF_H13_RESET 0U

/* COEFF_H14: Horizontal coefficient 14. The rightmost coefficient regardless of the filter width. In contrast to the coeff_h0 this coefficient has to be always programmed. */
#define GFXREG_GPSCALER_COEFFICIENTSH3_COEFF_H14_FSHIFT 8U
#define GFXREG_GPSCALER_COEFFICIENTSH3_COEFF_H14_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSH3_SETM_COEFF_H14(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_GPSCALER_COEFFICIENTSH3_SET_COEFF_H14(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSH3_GET_COEFF_H14(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_H14(s,val) ( (s)->coefficientsh3 = ((s)->coefficientsh3 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_GPSCALER_SET_COEFF_H14(s,val)  ( (s)->coefficientsh3 = (((s)->coefficientsh3 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_H14(s) ((((s)->coefficientsh3) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSH3_COEFF_H14_RESET 0U

/* COEFFICIENTSV0: Vertical coefficients for filter_mode FIR. */
#define GFXREG_GPSCALER_COEFFICIENTSV0 0x00000044U
/* COEFF_V0: Vertical coefficient 0. */
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V0_FSHIFT 24U
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V0_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV0_SETM_COEFF_V0(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_GPSCALER_COEFFICIENTSV0_SET_COEFF_V0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV0_GET_COEFF_V0(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V0(s,val) ( (s)->coefficientsv0 = ((s)->coefficientsv0 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_GPSCALER_SET_COEFF_V0(s,val)  ( (s)->coefficientsv0 = (((s)->coefficientsv0 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V0(s) ((((s)->coefficientsv0) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V0_RESET 0U

/* COEFF_V1: Vertical coefficient 1. */
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V1_FSHIFT 16U
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V1_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV0_SETM_COEFF_V1(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_GPSCALER_COEFFICIENTSV0_SET_COEFF_V1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV0_GET_COEFF_V1(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V1(s,val) ( (s)->coefficientsv0 = ((s)->coefficientsv0 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_GPSCALER_SET_COEFF_V1(s,val)  ( (s)->coefficientsv0 = (((s)->coefficientsv0 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V1(s) ((((s)->coefficientsv0) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V1_RESET 0U

/* COEFF_V2: Vertical coefficient 2. */
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V2_FSHIFT 8U
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V2_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV0_SETM_COEFF_V2(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_GPSCALER_COEFFICIENTSV0_SET_COEFF_V2(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV0_GET_COEFF_V2(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V2(s,val) ( (s)->coefficientsv0 = ((s)->coefficientsv0 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_GPSCALER_SET_COEFF_V2(s,val)  ( (s)->coefficientsv0 = (((s)->coefficientsv0 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V2(s) ((((s)->coefficientsv0) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V2_RESET 0U

/* COEFF_V3: Vertical coefficient 3. */
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V3_FSHIFT 0U
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V3_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV0_SETM_COEFF_V3(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_GPSCALER_COEFFICIENTSV0_SET_COEFF_V3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV0_GET_COEFF_V3(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V3(s,val) ( (s)->coefficientsv0 = ((s)->coefficientsv0 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_GPSCALER_SET_COEFF_V3(s,val)  ( (s)->coefficientsv0 = (((s)->coefficientsv0 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V3(s) ((((s)->coefficientsv0) ) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV0_COEFF_V3_RESET 0U

/* COEFFICIENTSV1: Vertical coefficients for filter_mode FIR. */
#define GFXREG_GPSCALER_COEFFICIENTSV1 0x00000048U
/* COEFF_V4: Vertical coefficient 4. */
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V4_FSHIFT 24U
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V4_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV1_SETM_COEFF_V4(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_GPSCALER_COEFFICIENTSV1_SET_COEFF_V4(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV1_GET_COEFF_V4(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V4(s,val) ( (s)->coefficientsv1 = ((s)->coefficientsv1 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_GPSCALER_SET_COEFF_V4(s,val)  ( (s)->coefficientsv1 = (((s)->coefficientsv1 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V4(s) ((((s)->coefficientsv1) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V4_RESET 0U

/* COEFF_V5: Vertical coefficient 5. */
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V5_FSHIFT 16U
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V5_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV1_SETM_COEFF_V5(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_GPSCALER_COEFFICIENTSV1_SET_COEFF_V5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV1_GET_COEFF_V5(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V5(s,val) ( (s)->coefficientsv1 = ((s)->coefficientsv1 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_GPSCALER_SET_COEFF_V5(s,val)  ( (s)->coefficientsv1 = (((s)->coefficientsv1 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V5(s) ((((s)->coefficientsv1) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V5_RESET 0U

/* COEFF_V6: Vertical coefficient 6. */
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V6_FSHIFT 8U
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V6_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV1_SETM_COEFF_V6(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_GPSCALER_COEFFICIENTSV1_SET_COEFF_V6(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV1_GET_COEFF_V6(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V6(s,val) ( (s)->coefficientsv1 = ((s)->coefficientsv1 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_GPSCALER_SET_COEFF_V6(s,val)  ( (s)->coefficientsv1 = (((s)->coefficientsv1 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V6(s) ((((s)->coefficientsv1) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V6_RESET 0U

/* COEFF_V7: Vertical coefficient 7. */
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V7_FSHIFT 0U
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V7_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV1_SETM_COEFF_V7(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_GPSCALER_COEFFICIENTSV1_SET_COEFF_V7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV1_GET_COEFF_V7(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V7(s,val) ( (s)->coefficientsv1 = ((s)->coefficientsv1 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_GPSCALER_SET_COEFF_V7(s,val)  ( (s)->coefficientsv1 = (((s)->coefficientsv1 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V7(s) ((((s)->coefficientsv1) ) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV1_COEFF_V7_RESET 0U

/* COEFFICIENTSV2: Vertical coefficients for filter_mode FIR. */
#define GFXREG_GPSCALER_COEFFICIENTSV2 0x0000004cU
/* COEFF_V8: Vertical coefficient 8. */
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V8_FSHIFT 24U
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V8_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV2_SETM_COEFF_V8(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_GPSCALER_COEFFICIENTSV2_SET_COEFF_V8(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV2_GET_COEFF_V8(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V8(s,val) ( (s)->coefficientsv2 = ((s)->coefficientsv2 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_GPSCALER_SET_COEFF_V8(s,val)  ( (s)->coefficientsv2 = (((s)->coefficientsv2 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V8(s) ((((s)->coefficientsv2) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V8_RESET 0U

/* COEFF_V9: Vertical coefficient 9. */
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V9_FSHIFT 16U
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V9_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV2_SETM_COEFF_V9(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_GPSCALER_COEFFICIENTSV2_SET_COEFF_V9(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV2_GET_COEFF_V9(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V9(s,val) ( (s)->coefficientsv2 = ((s)->coefficientsv2 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_GPSCALER_SET_COEFF_V9(s,val)  ( (s)->coefficientsv2 = (((s)->coefficientsv2 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V9(s) ((((s)->coefficientsv2) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V9_RESET 0U

/* COEFF_V10: Vertical coefficient 10. */
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V10_FSHIFT 8U
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V10_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV2_SETM_COEFF_V10(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_GPSCALER_COEFFICIENTSV2_SET_COEFF_V10(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV2_GET_COEFF_V10(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V10(s,val) ( (s)->coefficientsv2 = ((s)->coefficientsv2 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_GPSCALER_SET_COEFF_V10(s,val)  ( (s)->coefficientsv2 = (((s)->coefficientsv2 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V10(s) ((((s)->coefficientsv2) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V10_RESET 0U

/* COEFF_V11: Vertical coefficient 11. */
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V11_FSHIFT 0U
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V11_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV2_SETM_COEFF_V11(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_GPSCALER_COEFFICIENTSV2_SET_COEFF_V11(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV2_GET_COEFF_V11(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V11(s,val) ( (s)->coefficientsv2 = ((s)->coefficientsv2 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_GPSCALER_SET_COEFF_V11(s,val)  ( (s)->coefficientsv2 = (((s)->coefficientsv2 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V11(s) ((((s)->coefficientsv2) ) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV2_COEFF_V11_RESET 0U

/* COEFFICIENTSV3: Vertical coefficients for filter_mode FIR. */
#define GFXREG_GPSCALER_COEFFICIENTSV3 0x00000050U
/* COEFF_V12: Vertical coefficient 12. */
#define GFXREG_GPSCALER_COEFFICIENTSV3_COEFF_V12_FSHIFT 24U
#define GFXREG_GPSCALER_COEFFICIENTSV3_COEFF_V12_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV3_SETM_COEFF_V12(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_GPSCALER_COEFFICIENTSV3_SET_COEFF_V12(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV3_GET_COEFF_V12(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V12(s,val) ( (s)->coefficientsv3 = ((s)->coefficientsv3 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_GPSCALER_SET_COEFF_V12(s,val)  ( (s)->coefficientsv3 = (((s)->coefficientsv3 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V12(s) ((((s)->coefficientsv3) >> 24U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV3_COEFF_V12_RESET 0U

/* COEFF_V13: Vertical coefficient 13. */
#define GFXREG_GPSCALER_COEFFICIENTSV3_COEFF_V13_FSHIFT 16U
#define GFXREG_GPSCALER_COEFFICIENTSV3_COEFF_V13_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV3_SETM_COEFF_V13(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_GPSCALER_COEFFICIENTSV3_SET_COEFF_V13(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV3_GET_COEFF_V13(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V13(s,val) ( (s)->coefficientsv3 = ((s)->coefficientsv3 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_GPSCALER_SET_COEFF_V13(s,val)  ( (s)->coefficientsv3 = (((s)->coefficientsv3 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V13(s) ((((s)->coefficientsv3) >> 16U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV3_COEFF_V13_RESET 0U

/* COEFF_V14: Vertical coefficient 14. The bottommost coefficient regardless of the filter height. In contrast to the coeff_v0 this coefficient has to be always programmed. */
#define GFXREG_GPSCALER_COEFFICIENTSV3_COEFF_V14_FSHIFT 8U
#define GFXREG_GPSCALER_COEFFICIENTSV3_COEFF_V14_FMASK 0xffU
#define GFXREG_GPSCALER_COEFFICIENTSV3_SETM_COEFF_V14(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_GPSCALER_COEFFICIENTSV3_SET_COEFF_V14(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_GPSCALER_COEFFICIENTSV3_GET_COEFF_V14(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_SETM_COEFF_V14(s,val) ( (s)->coefficientsv3 = ((s)->coefficientsv3 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_GPSCALER_SET_COEFF_V14(s,val)  ( (s)->coefficientsv3 = (((s)->coefficientsv3 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_GPSCALER_GET_COEFF_V14(s) ((((s)->coefficientsv3) >> 8U) & 0xffUL)
#define GFXREG_GPSCALER_COEFFICIENTSV3_COEFF_V14_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_GPSCALER_REGISTER_H */

