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
 * \version     1.03
 * \date        Mon Jul 05 13:05:15 2021
 * \file        gfxreg_histogram_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   histogram
 *              Source:   histogram.component.xml
 *              Template: component_h.tpl
 * \brief      Iris histogram register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_HISTOGRAM_REGISTER_H
#define GFXREG_HISTOGRAM_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* histogram registers */
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


/* CONTROL: Controls some settings concerning input components and alpha mask. */
#define GFXREG_HISTOGRAM_CONTROL 0x00000000U
/* CLIP_EN: Switch for clip window. If enabled all pixels outside the clip window are not taken into account. */
#define GFXREG_HISTOGRAM_CONTROL_CLIP_EN_FSHIFT 0U
#define GFXREG_HISTOGRAM_CONTROL_CLIP_EN_FMASK 0x1U
#define GFXREG_HISTOGRAM_CONTROL_SETM_CLIP_EN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_HISTOGRAM_CONTROL_SET_CLIP_EN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_CONTROL_GET_CLIP_EN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_HISTOGRAM_SETM_CLIP_EN(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_HISTOGRAM_SET_CLIP_EN(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_CLIP_EN(s) ((((s)->control) ) & 0x1UL)
#define GFXREG_HISTOGRAM_CONTROL_CLIP_EN_DISABLE 0x0U /* Clip window is switched off. */
#define GFXREG_HISTOGRAM_CONTROL_CLIP_EN_ENABLE 0x1U /* Clip window is switched on. */
#define GFXREG_HISTOGRAM_CONTROL_CLIP_EN_RESET 0x0U

/* COLOR_SPACE_MODE: Assuming that YUV(YCrCb) color components according to BT.601 or BT.709 are provided at histogram input the appropriate conversion to RGB components in [0,255] range can be selected here. */
#define GFXREG_HISTOGRAM_CONTROL_COLOR_SPACE_MODE_FSHIFT 4U
#define GFXREG_HISTOGRAM_CONTROL_COLOR_SPACE_MODE_FMASK 0x3U
#define GFXREG_HISTOGRAM_CONTROL_SETM_COLOR_SPACE_MODE(val) (((CYGFX_U32)(val) & 0x3UL) << 4U)
#define GFXREG_HISTOGRAM_CONTROL_SET_COLOR_SPACE_MODE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_CONTROL_GET_COLOR_SPACE_MODE(val) (((CYGFX_U32)(val) >> 4U) & 0x3UL)
#define GFXREG_HISTOGRAM_SETM_COLOR_SPACE_MODE(s,val) ( (s)->control = ((s)->control & ~0x30UL) | (((CYGFX_U32)(val) << 4U) & 0x30UL) )
#define GFXREG_HISTOGRAM_SET_COLOR_SPACE_MODE(s,val)  ( (s)->control = (((s)->control & ~0x30UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_COLOR_SPACE_MODE(s) ((((s)->control) >> 4U) & 0x3UL)
#define GFXREG_HISTOGRAM_CONTROL_COLOR_SPACE_MODE_NO_CONV 0x0U /* No color space conversion of input components is applied. */
#define GFXREG_HISTOGRAM_CONTROL_COLOR_SPACE_MODE_YUV2RGB_BT601 0x1U /* YUV input components as described in BT.601 are converted to RGB in [0,255] range. */
#define GFXREG_HISTOGRAM_CONTROL_COLOR_SPACE_MODE_YUV2RGB_BT709 0x2U /* YUV input components as described in BT.709 are converted to RGB in [0,255] range. */
#define GFXREG_HISTOGRAM_CONTROL_COLOR_SPACE_MODE_RESET 0x0U

/* LUM_MODE: If a histogram for luma or luminance is required, the conversion formula for luma (Y component according to BT.601) or luminance (Y component according to BT.709) can be selected here. Luma or luminance calculation should only be applied if RGB components in range [0..255] are delivered directly at histogram input or when YCrCb components are converted to RGB by the appropriate setting of register field color_space_mode. Luma or luminance counting is delivered in first (component0) histogram. */
#define GFXREG_HISTOGRAM_CONTROL_LUM_MODE_FSHIFT 8U
#define GFXREG_HISTOGRAM_CONTROL_LUM_MODE_FMASK 0x3U
#define GFXREG_HISTOGRAM_CONTROL_SETM_LUM_MODE(val) (((CYGFX_U32)(val) & 0x3UL) << 8U)
#define GFXREG_HISTOGRAM_CONTROL_SET_LUM_MODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_CONTROL_GET_LUM_MODE(val) (((CYGFX_U32)(val) >> 8U) & 0x3UL)
#define GFXREG_HISTOGRAM_SETM_LUM_MODE(s,val) ( (s)->control = ((s)->control & ~0x300UL) | (((CYGFX_U32)(val) << 8U) & 0x300UL) )
#define GFXREG_HISTOGRAM_SET_LUM_MODE(s,val)  ( (s)->control = (((s)->control & ~0x300UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_LUM_MODE(s) ((((s)->control) >> 8U) & 0x3UL)
#define GFXREG_HISTOGRAM_CONTROL_LUM_MODE_NO_CONV 0x0U /* Component0 for first histogram is counted as it is. */
#define GFXREG_HISTOGRAM_CONTROL_LUM_MODE_LUMA 0x1U /* Component0 for first histogram is replaced by luma, which is calculated from RGB input components according to BT.601. */
#define GFXREG_HISTOGRAM_CONTROL_LUM_MODE_LUMINANCE 0x2U /* Component0 for first histogram is replaced by luminance, which is calculated from RGB input components according to BT.709. */
#define GFXREG_HISTOGRAM_CONTROL_LUM_MODE_RESET 0x0U

/* ALPHAMASK: Value 1 enables the alpha mask mode. In this mode only pixels with an alpha value larger than 0.5 are affecting the histogram bins. */
#define GFXREG_HISTOGRAM_CONTROL_ALPHAMASK_FSHIFT 12U
#define GFXREG_HISTOGRAM_CONTROL_ALPHAMASK_FMASK 0x1U
#define GFXREG_HISTOGRAM_CONTROL_SETM_ALPHAMASK(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_HISTOGRAM_CONTROL_SET_ALPHAMASK(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_CONTROL_GET_ALPHAMASK(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_HISTOGRAM_SETM_ALPHAMASK(s,val) ( (s)->control = ((s)->control & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_HISTOGRAM_SET_ALPHAMASK(s,val)  ( (s)->control = (((s)->control & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_ALPHAMASK(s) ((((s)->control) >> 12U) & 0x1UL)
#define GFXREG_HISTOGRAM_CONTROL_ALPHAMASK_RESET 0x0U

/* ALPHAINVERT: Value 1 inverts the effect of the alpha mask mode when enabled (pixels with alpha value smaller or equal 0.5 are affecting the histogram bins). */
#define GFXREG_HISTOGRAM_CONTROL_ALPHAINVERT_FSHIFT 13U
#define GFXREG_HISTOGRAM_CONTROL_ALPHAINVERT_FMASK 0x1U
#define GFXREG_HISTOGRAM_CONTROL_SETM_ALPHAINVERT(val) (((CYGFX_U32)(val) & 0x1UL) << 13U)
#define GFXREG_HISTOGRAM_CONTROL_SET_ALPHAINVERT(val) (((CYGFX_U32)(val) << 13U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_CONTROL_GET_ALPHAINVERT(val) (((CYGFX_U32)(val) >> 13U) & 0x1UL)
#define GFXREG_HISTOGRAM_SETM_ALPHAINVERT(s,val) ( (s)->control = ((s)->control & ~0x2000UL) | (((CYGFX_U32)(val) << 13U) & 0x2000UL) )
#define GFXREG_HISTOGRAM_SET_ALPHAINVERT(s,val)  ( (s)->control = (((s)->control & ~0x2000UL) | ((CYGFX_U32)(val) << 13U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_ALPHAINVERT(s) ((((s)->control) >> 13U) & 0x1UL)
#define GFXREG_HISTOGRAM_CONTROL_ALPHAINVERT_RESET 0x0U

/* BINPROPERTIES: Configures the histogram bins. */
#define GFXREG_HISTOGRAM_BINPROPERTIES 0x00000004U
/* BINNUM_WIDTH: 2**binnum_width is the number of bins in a histogram. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINNUM_WIDTH_FSHIFT 0U
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINNUM_WIDTH_FMASK 0x7U
#define GFXREG_HISTOGRAM_BINPROPERTIES_SETM_BINNUM_WIDTH(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_HISTOGRAM_BINPROPERTIES_SET_BINNUM_WIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_BINPROPERTIES_GET_BINNUM_WIDTH(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_HISTOGRAM_SETM_BINNUM_WIDTH(s,val) ( (s)->binproperties = ((s)->binproperties & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_HISTOGRAM_SET_BINNUM_WIDTH(s,val)  ( (s)->binproperties = (((s)->binproperties & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_BINNUM_WIDTH(s) ((((s)->binproperties) ) & 0x7UL)
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINNUM_WIDTH_BINS_8 0x3U /* There are  8 bins, addressable with 3bit. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINNUM_WIDTH_BINS_16 0x4U /* There are 16 bins, addressable with 4bit. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINNUM_WIDTH_BINS_32 0x5U /* There are 32 bins, addressable with 5bit. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINNUM_WIDTH_BINS_64 0x6U /* There are 64 bins, addressable with 6bit. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINNUM_WIDTH_RESET 0x3U

/* CNT_MODE: Counter mode, which controls the way the bin values are accumulated. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_CNT_MODE_FSHIFT 4U
#define GFXREG_HISTOGRAM_BINPROPERTIES_CNT_MODE_FMASK 0x1U
#define GFXREG_HISTOGRAM_BINPROPERTIES_SETM_CNT_MODE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_HISTOGRAM_BINPROPERTIES_SET_CNT_MODE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_BINPROPERTIES_GET_CNT_MODE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_HISTOGRAM_SETM_CNT_MODE(s,val) ( (s)->binproperties = ((s)->binproperties & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_HISTOGRAM_SET_CNT_MODE(s,val)  ( (s)->binproperties = (((s)->binproperties & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_CNT_MODE(s) ((((s)->binproperties) >> 4U) & 0x1UL)
#define GFXREG_HISTOGRAM_BINPROPERTIES_CNT_MODE_NEAREST 0x0U /* Counter of nearest bin is incremented. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_CNT_MODE_LINEAR 0x1U /* Counters of the 2 nearest bins are increased by one minus the distance to bin center (normalized between 0 and 1), it works only for first (component0) histogram, reading of component1/2 histogram results in undefined data. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_CNT_MODE_RESET 0U

/* BINCNT_RD_MODE: The field controls if the actual bin count or the sum of all bin counts up to actual bin count is provided in registers RsltComp0Bincnt, RsltComp1Bincnt and RsltComp2Bincnt. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINCNT_RD_MODE_FSHIFT 8U
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINCNT_RD_MODE_FMASK 0x1U
#define GFXREG_HISTOGRAM_BINPROPERTIES_SETM_BINCNT_RD_MODE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_HISTOGRAM_BINPROPERTIES_SET_BINCNT_RD_MODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_BINPROPERTIES_GET_BINCNT_RD_MODE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_HISTOGRAM_SETM_BINCNT_RD_MODE(s,val) ( (s)->binproperties = ((s)->binproperties & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_HISTOGRAM_SET_BINCNT_RD_MODE(s,val)  ( (s)->binproperties = (((s)->binproperties & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_BINCNT_RD_MODE(s) ((((s)->binproperties) >> 8U) & 0x1UL)
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINCNT_RD_MODE_BINCNT 0x0U /* Actual bin cnt is provided. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINCNT_RD_MODE_BINCNT_ACCU 0x1U /* Bin count sum is provided. */
#define GFXREG_HISTOGRAM_BINPROPERTIES_BINCNT_RD_MODE_RESET 0x0U

/* BINCNTTHRESH: Bin counter threshold value. */
#define GFXREG_HISTOGRAM_BINCNTTHRESH 0x00000008U
/* BINCNT_THRESH: Bin counters below this threshold will be reported as 0. This threshold value will also affect the BINCNT_ACCU mode where 0 will be added for all bin counters below the threshold. */
#define GFXREG_HISTOGRAM_BINCNTTHRESH_BINCNT_THRESH_FSHIFT 0U
#define GFXREG_HISTOGRAM_BINCNTTHRESH_BINCNT_THRESH_FMASK 0x1fffffffU
#define GFXREG_HISTOGRAM_BINCNTTHRESH_SETM_BINCNT_THRESH(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_HISTOGRAM_BINCNTTHRESH_SET_BINCNT_THRESH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_BINCNTTHRESH_GET_BINCNT_THRESH(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_HISTOGRAM_SETM_BINCNT_THRESH(s,val) ( (s)->bincntthresh = ((s)->bincntthresh & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_HISTOGRAM_SET_BINCNT_THRESH(s,val)  ( (s)->bincntthresh = (((s)->bincntthresh & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_BINCNT_THRESH(s) ((((s)->bincntthresh) ) & 0x1fffffffUL)
#define GFXREG_HISTOGRAM_BINCNTTHRESH_BINCNT_THRESH_RESET 0x0U

/* CLIPWINUPPERLEFT: Coordinates of upper left corner of clip window. */
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT 0x0000000cU
/* CLIP_X: X coordinate of upper left corner of clip window. */
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_CLIP_X_FSHIFT 0U
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_CLIP_X_FMASK 0x3fffU
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_SETM_CLIP_X(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_SET_CLIP_X(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_GET_CLIP_X(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_HISTOGRAM_SETM_CLIP_X(s,val) ( (s)->clipwinupperleft = ((s)->clipwinupperleft & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_HISTOGRAM_SET_CLIP_X(s,val)  ( (s)->clipwinupperleft = (((s)->clipwinupperleft & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_CLIP_X(s) ((((s)->clipwinupperleft) ) & 0x3fffUL)
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_CLIP_X_RESET 0x0U

/* CLIP_Y: Y coordinate of upper left corner of clip window. */
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_CLIP_Y_FSHIFT 16U
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_CLIP_Y_FMASK 0x3fffU
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_SETM_CLIP_Y(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_SET_CLIP_Y(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_GET_CLIP_Y(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_HISTOGRAM_SETM_CLIP_Y(s,val) ( (s)->clipwinupperleft = ((s)->clipwinupperleft & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_HISTOGRAM_SET_CLIP_Y(s,val)  ( (s)->clipwinupperleft = (((s)->clipwinupperleft & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_CLIP_Y(s) ((((s)->clipwinupperleft) >> 16U) & 0x3fffUL)
#define GFXREG_HISTOGRAM_CLIPWINUPPERLEFT_CLIP_Y_RESET 0x0U

/* CLIPWINSIZE: Dimensions of clip window. */
#define GFXREG_HISTOGRAM_CLIPWINSIZE 0x00000010U
/* CLIP_WIDTH: Width of clip window, given minus one. */
#define GFXREG_HISTOGRAM_CLIPWINSIZE_CLIP_WIDTH_FSHIFT 0U
#define GFXREG_HISTOGRAM_CLIPWINSIZE_CLIP_WIDTH_FMASK 0x3fffU
#define GFXREG_HISTOGRAM_CLIPWINSIZE_SETM_CLIP_WIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_HISTOGRAM_CLIPWINSIZE_SET_CLIP_WIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_CLIPWINSIZE_GET_CLIP_WIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_HISTOGRAM_SETM_CLIP_WIDTH(s,val) ( (s)->clipwinsize = ((s)->clipwinsize & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_HISTOGRAM_SET_CLIP_WIDTH(s,val)  ( (s)->clipwinsize = (((s)->clipwinsize & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_CLIP_WIDTH(s) ((((s)->clipwinsize) ) & 0x3fffUL)
#define GFXREG_HISTOGRAM_CLIPWINSIZE_CLIP_WIDTH_RESET 0x0U

/* CLIP_HEIGHT: Height of clip window, given minus one. */
#define GFXREG_HISTOGRAM_CLIPWINSIZE_CLIP_HEIGHT_FSHIFT 16U
#define GFXREG_HISTOGRAM_CLIPWINSIZE_CLIP_HEIGHT_FMASK 0x3fffU
#define GFXREG_HISTOGRAM_CLIPWINSIZE_SETM_CLIP_HEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_HISTOGRAM_CLIPWINSIZE_SET_CLIP_HEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_CLIPWINSIZE_GET_CLIP_HEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_HISTOGRAM_SETM_CLIP_HEIGHT(s,val) ( (s)->clipwinsize = ((s)->clipwinsize & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_HISTOGRAM_SET_CLIP_HEIGHT(s,val)  ( (s)->clipwinsize = (((s)->clipwinsize & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_CLIP_HEIGHT(s) ((((s)->clipwinsize) >> 16U) & 0x3fffUL)
#define GFXREG_HISTOGRAM_CLIPWINSIZE_CLIP_HEIGHT_RESET 0x0U

/* RSLTRDY: Measurement result status. */
#define GFXREG_HISTOGRAM_RSLTRDY 0x00000014U
/* RSLT_RDY: A one indicates that measurement results (in registers Rslt...) are valid and can be read. */
#define GFXREG_HISTOGRAM_RSLTRDY_RSLT_RDY_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTRDY_RSLT_RDY_FMASK 0x1U
#define GFXREG_HISTOGRAM_RSLTRDY_GET_RSLT_RDY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_HISTOGRAM_GET_RSLT_RDY(s) ((((s)->rsltrdy) ) & 0x1UL)
#define GFXREG_HISTOGRAM_RSLTRDY_RSLT_RDY_RESET 0U

/* RSLTFRMINF: Additional information on the measurement results. */
#define GFXREG_HISTOGRAM_RSLTFRMINF 0x00000018U
/* FRM_IDX: Each frame passing the histogram unit gets an index, which is the value of a wrapped around counter, which counts the frames independent from how the histogram unit is configured. The index of the frame of the ongoing readout can be read here. In display stream context, if the display operation ends (framegen is switched off and sequence complete occurs) this frame index is reset to 0. */
#define GFXREG_HISTOGRAM_RSLTFRMINF_FRM_IDX_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTFRMINF_FRM_IDX_FMASK 0xffU
#define GFXREG_HISTOGRAM_RSLTFRMINF_GET_FRM_IDX(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_HISTOGRAM_GET_FRM_IDX(s) ((((s)->rsltfrminf) ) & 0xffUL)
#define GFXREG_HISTOGRAM_RSLTFRMINF_FRM_IDX_RESET 0x0U

/* FLD_POLARITY: Returns field polarity of the measured frame. This read value of this field is undefined in display stream context; use in storage, content or safety stream context only. */
#define GFXREG_HISTOGRAM_RSLTFRMINF_FLD_POLARITY_FSHIFT 16U
#define GFXREG_HISTOGRAM_RSLTFRMINF_FLD_POLARITY_FMASK 0x1U
#define GFXREG_HISTOGRAM_RSLTFRMINF_GET_FLD_POLARITY(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_HISTOGRAM_GET_FLD_POLARITY(s) ((((s)->rsltfrminf) >> 16U) & 0x1UL)
#define GFXREG_HISTOGRAM_RSLTFRMINF_FLD_POLARITY_RESET 0x0U

/* RSLTCOMP0BINIDX: Results of frame measurement for component 0.
   For first histogram, the index of the bin, which contains the highest counter value, which were read for the histogram until now and the index of the bin, that will be next accessed by register RsltComp0Bincnt. This register is only valid when indicated by register RsltRdy (field rslt_rdy). */
#define GFXREG_HISTOGRAM_RSLTCOMP0BINIDX 0x0000001cU
/* COMP0_BINIDX_MAXCNT: The index of the bin of the component 0 histogram, which contains the highest counter value, which were read until now for the ongoing readout. In the case of RGB pixels, component 0 means the red value, in the case of YUV pixels, component0 means the Y value. If luma/luminance calculation is switched on by field lum_mode component0 is the calculated luma/luminance. */
#define GFXREG_HISTOGRAM_RSLTCOMP0BINIDX_COMP0_BINIDX_MAXCNT_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTCOMP0BINIDX_COMP0_BINIDX_MAXCNT_FMASK 0x3fU
#define GFXREG_HISTOGRAM_RSLTCOMP0BINIDX_GET_COMP0_BINIDX_MAXCNT(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_HISTOGRAM_GET_COMP0_BINIDX_MAXCNT(s) ((((s)->rsltcomp0binidx) ) & 0x3fUL)
#define GFXREG_HISTOGRAM_RSLTCOMP0BINIDX_COMP0_BINIDX_MAXCNT_RESET 0x0U

/* COMP0_BINIDX_NXT: Do not use this filed. The index of the bin, that will be next accessed by register RsltComp0Bincnt. In the case of RGB pixels, component0 means the red value, in the case of YUV pixels, component 0 means the Y value. If luma/luminance calculation is switched on by field lum_mode component0 is the calculated luma/luminance. */
#define GFXREG_HISTOGRAM_RSLTCOMP0BINIDX_COMP0_BINIDX_NXT_FSHIFT 16U
#define GFXREG_HISTOGRAM_RSLTCOMP0BINIDX_COMP0_BINIDX_NXT_FMASK 0x3fU
#define GFXREG_HISTOGRAM_RSLTCOMP0BINIDX_GET_COMP0_BINIDX_NXT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_HISTOGRAM_GET_COMP0_BINIDX_NXT(s) ((((s)->rsltcomp0binidx) >> 16U) & 0x3fUL)
#define GFXREG_HISTOGRAM_RSLTCOMP0BINIDX_COMP0_BINIDX_NXT_RESET 0x0U

/* RSLTCOMP1BINIDX: Results of frame measurement for component 1.
   For second histogram, the index of the bin, which contains the highest counter value, which were read for the histogram until now and the index of the bin, that will be next accessed by register RsltComp1Bincnt. This register is only valid when indicated by register RsltRdy (field rslt_rdy). */
#define GFXREG_HISTOGRAM_RSLTCOMP1BINIDX 0x00000020U
/* COMP1_BINIDX_MAXCNT: The index of the bin of the component 1 histogram, which contains the highest counter value, which were read until now for the ongoing readout. In the case of RGB pixels, component 1 means the green value. In the case of YUV pixels, component 1 means the Cb value. */
#define GFXREG_HISTOGRAM_RSLTCOMP1BINIDX_COMP1_BINIDX_MAXCNT_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTCOMP1BINIDX_COMP1_BINIDX_MAXCNT_FMASK 0x3fU
#define GFXREG_HISTOGRAM_RSLTCOMP1BINIDX_GET_COMP1_BINIDX_MAXCNT(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_HISTOGRAM_GET_COMP1_BINIDX_MAXCNT(s) ((((s)->rsltcomp1binidx) ) & 0x3fUL)
#define GFXREG_HISTOGRAM_RSLTCOMP1BINIDX_COMP1_BINIDX_MAXCNT_RESET 0x0U

/* COMP1_BINIDX_NXT: The index of the bin, that will be next accessed by register RsltComp1Bincnt. In the case of RGB pixels, component 1 means the green value. In the case of YUV pixels, component 1 means the Cb value. */
#define GFXREG_HISTOGRAM_RSLTCOMP1BINIDX_COMP1_BINIDX_NXT_FSHIFT 16U
#define GFXREG_HISTOGRAM_RSLTCOMP1BINIDX_COMP1_BINIDX_NXT_FMASK 0x3fU
#define GFXREG_HISTOGRAM_RSLTCOMP1BINIDX_GET_COMP1_BINIDX_NXT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_HISTOGRAM_GET_COMP1_BINIDX_NXT(s) ((((s)->rsltcomp1binidx) >> 16U) & 0x3fUL)
#define GFXREG_HISTOGRAM_RSLTCOMP1BINIDX_COMP1_BINIDX_NXT_RESET 0x0U

/* RSLTCOMP2BINIDX: Results of frame measurement for component 2.
   For third histogram, the index of the bin, which contains the highest counter value, which were read for the histogram until now and the index of the bin, that will be next accessed by register RsltComp2Bincnt. This register is only valid when indicated by register RsltRdy (field rslt_rdy). */
#define GFXREG_HISTOGRAM_RSLTCOMP2BINIDX 0x00000024U
/* COMP2_BINIDX_MAXCNT: The index of the bin of the component 2 histogram, which contains the highest counter value, which were read until now for the ongoing readout. In the case of RGB pixels, component 2 means the blue value. In the case of YUV pixels, component 2 means the Cr value. */
#define GFXREG_HISTOGRAM_RSLTCOMP2BINIDX_COMP2_BINIDX_MAXCNT_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTCOMP2BINIDX_COMP2_BINIDX_MAXCNT_FMASK 0x3fU
#define GFXREG_HISTOGRAM_RSLTCOMP2BINIDX_GET_COMP2_BINIDX_MAXCNT(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_HISTOGRAM_GET_COMP2_BINIDX_MAXCNT(s) ((((s)->rsltcomp2binidx) ) & 0x3fUL)
#define GFXREG_HISTOGRAM_RSLTCOMP2BINIDX_COMP2_BINIDX_MAXCNT_RESET 0x0U

/* COMP2_BINIDX_NXT: The index of the bin, that will be next accessed by register RsltComp2Bincnt. In the case of RGB pixels, component 2 means the blue value. In the case of YUV pixels, component 2 means the Cr value. */
#define GFXREG_HISTOGRAM_RSLTCOMP2BINIDX_COMP2_BINIDX_NXT_FSHIFT 16U
#define GFXREG_HISTOGRAM_RSLTCOMP2BINIDX_COMP2_BINIDX_NXT_FMASK 0x3fU
#define GFXREG_HISTOGRAM_RSLTCOMP2BINIDX_GET_COMP2_BINIDX_NXT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_HISTOGRAM_GET_COMP2_BINIDX_NXT(s) ((((s)->rsltcomp2binidx) >> 16U) & 0x3fUL)
#define GFXREG_HISTOGRAM_RSLTCOMP2BINIDX_COMP2_BINIDX_NXT_RESET 0x0U

/* RSLTCOMP0SUM: Sum of all component 0 values.
   This register is only valid when indicated by register RsltRdy (field rslt_rdy). */
#define GFXREG_HISTOGRAM_RSLTCOMP0SUM 0x00000028U
/* COMP0_SUM: Sum of all component 0 values. In the case of RGB pixels, component 0 means the red value, in the case of YUV pixels, component 0 means the Y value. If luma/luminance calculation is switched on by field lum_mode, component 0 is the calculated luma/luminance. If the read value is 0xFFFFFFFF a counter overflow has occurred and the read value should not be used (this can only happen for frame dimensions beyond 2^12 * 2^12). */
#define GFXREG_HISTOGRAM_RSLTCOMP0SUM_COMP0_SUM_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTCOMP0SUM_COMP0_SUM_FMASK 0xffffffffU
#define GFXREG_HISTOGRAM_RSLTCOMP0SUM_GET_COMP0_SUM(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_HISTOGRAM_GET_COMP0_SUM(s) ((((s)->rsltcomp0sum) ) & 0xffffffffUL)
#define GFXREG_HISTOGRAM_RSLTCOMP0SUM_COMP0_SUM_RESET 0x0U

/* RSLTCOMP1SUM: Sum of all component 1 values.
   This register is only valid when indicated by register RsltRdy (field rslt_rdy). */
#define GFXREG_HISTOGRAM_RSLTCOMP1SUM 0x0000002cU
/* COMP1_SUM: Sum of all component 1 values. In the case of RGB pixels, component 1 means the green value. In the case of YUV pixels, component 1 means the Cb value. If the read value is 0xFFFFFFFF a counter overflow has occurred and the read value should not be used (this can only happen for frame dimensions beyond 2^12 * 2^12). */
#define GFXREG_HISTOGRAM_RSLTCOMP1SUM_COMP1_SUM_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTCOMP1SUM_COMP1_SUM_FMASK 0xffffffffU
#define GFXREG_HISTOGRAM_RSLTCOMP1SUM_GET_COMP1_SUM(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_HISTOGRAM_GET_COMP1_SUM(s) ((((s)->rsltcomp1sum) ) & 0xffffffffUL)
#define GFXREG_HISTOGRAM_RSLTCOMP1SUM_COMP1_SUM_RESET 0x0U

/* RSLTCOMP2SUM: Sum of all component 2 values.
   This register is only valid when indicated by register RsltRdy (field rslt_rdy). */
#define GFXREG_HISTOGRAM_RSLTCOMP2SUM 0x00000030U
/* COMP2_SUM: Sum of all component 2 values. In the case of RGB pixels, component 2 means the blue value. In the case of YUV pixels, component 2 means the Cr value. If the read value is 0xFFFFFFFF a counter overflow has occurred and the read value should not be used (this can only happen for frame dimensions beyond 2^12 * 2^12). */
#define GFXREG_HISTOGRAM_RSLTCOMP2SUM_COMP2_SUM_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTCOMP2SUM_COMP2_SUM_FMASK 0xffffffffU
#define GFXREG_HISTOGRAM_RSLTCOMP2SUM_GET_COMP2_SUM(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_HISTOGRAM_GET_COMP2_SUM(s) ((((s)->rsltcomp2sum) ) & 0xffffffffUL)
#define GFXREG_HISTOGRAM_RSLTCOMP2SUM_COMP2_SUM_RESET 0x0U

/* RSLTCOMP0BINCNT: Bin counters of component 0 histogram. This register do NOT support debugger access followed by software access (they clear on read)
   Reading this register first time for the current frame measurement delivers counter of bin index 0. The bin number is automatically incremented after each read and wrapped around when last bin is reached (as it was configured in BinNumWidth Register when the measurement was ongoing). If register field bincnt_rd_mode is set to BINCNT_ACCU the read value is the sum of all bin counts read until now. This register is only valid when indicated by register RsltRdy (field rslt_rdy). */
#define GFXREG_HISTOGRAM_RSLTCOMP0BINCNT 0x00000034U
/* COMP0_BINCNT: Counter of current bin number in component 0 histogram. In the case of RGB pixels, component 0 means the red value, in the case of YUV pixels, component 0 means the Y value. */
#define GFXREG_HISTOGRAM_RSLTCOMP0BINCNT_COMP0_BINCNT_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTCOMP0BINCNT_COMP0_BINCNT_FMASK 0x1fffffffU
#define GFXREG_HISTOGRAM_RSLTCOMP0BINCNT_SETM_COMP0_BINCNT(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_HISTOGRAM_RSLTCOMP0BINCNT_SET_COMP0_BINCNT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_RSLTCOMP0BINCNT_GET_COMP0_BINCNT(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_HISTOGRAM_SETM_COMP0_BINCNT(s,val) ( (s)->rsltcomp0bincnt = ((s)->rsltcomp0bincnt & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_HISTOGRAM_SET_COMP0_BINCNT(s,val)  ( (s)->rsltcomp0bincnt = (((s)->rsltcomp0bincnt & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_COMP0_BINCNT(s) ((((s)->rsltcomp0bincnt) ) & 0x1fffffffUL)
#define GFXREG_HISTOGRAM_RSLTCOMP0BINCNT_COMP0_BINCNT_RESET 0x0U

/* RSLTCOMP1BINCNT: Bin counters of component 1 histogram. This register do NOT support debugger access followed by software access (they clear on read)
   Reading this register first time for the current frame measurement delivers counter of bin index 0. The bin number is automatically incremented after each read and wrapped around when last bin is reached (as it was configured in BinNumWidth Register when the measurement was ongoing). If register field bincnt_rd_mode is set to BINCNT_ACCU the read value is the sum of all bin counts read until now. This register is only valid when indicated by register RsltRdy (field rslt_rdy) and if cnt_mode is set to NEAREST. */
#define GFXREG_HISTOGRAM_RSLTCOMP1BINCNT 0x00000038U
/* COMP1_BINCNT: Counter of current bin number in component 1 histogram. In the case of RGB pixels, component 1 means the green value. In the case of YUV pixels, component 1 means the Cb value. */
#define GFXREG_HISTOGRAM_RSLTCOMP1BINCNT_COMP1_BINCNT_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTCOMP1BINCNT_COMP1_BINCNT_FMASK 0x1fffffffU
#define GFXREG_HISTOGRAM_RSLTCOMP1BINCNT_SETM_COMP1_BINCNT(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_HISTOGRAM_RSLTCOMP1BINCNT_SET_COMP1_BINCNT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_RSLTCOMP1BINCNT_GET_COMP1_BINCNT(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_HISTOGRAM_SETM_COMP1_BINCNT(s,val) ( (s)->rsltcomp1bincnt = ((s)->rsltcomp1bincnt & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_HISTOGRAM_SET_COMP1_BINCNT(s,val)  ( (s)->rsltcomp1bincnt = (((s)->rsltcomp1bincnt & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_COMP1_BINCNT(s) ((((s)->rsltcomp1bincnt) ) & 0x1fffffffUL)
#define GFXREG_HISTOGRAM_RSLTCOMP1BINCNT_COMP1_BINCNT_RESET 0x0U

/* RSLTCOMP2BINCNT: Bin counters of component 2 histogram. This register do NOT support debugger access followed by software access (they clear on read)
   Reading this register first time for the current frame measurement delivers counter of bin index 0. The bin index is automatically incremented after each read and wrapped around when last bin is reached (as it was configured in BinNumWidth Register when the measurement was ongoing). If register field bincnt_rd_mode is set to BINCNT_ACCU the read value is the sum of all bin counts read until now. This register is only valid when indicated by register RsltRdy (field rslt_rdy) and if cnt_mode is set to NEAREST. */
#define GFXREG_HISTOGRAM_RSLTCOMP2BINCNT 0x0000003cU
/* COMP2_BINCNT: Counter of current bin index in component 2 histogram. In the case of RGB pixels, component 2 means the blue value. In the case of YUV pixels, component 2 means the Cb value. */
#define GFXREG_HISTOGRAM_RSLTCOMP2BINCNT_COMP2_BINCNT_FSHIFT 0U
#define GFXREG_HISTOGRAM_RSLTCOMP2BINCNT_COMP2_BINCNT_FMASK 0x1fffffffU
#define GFXREG_HISTOGRAM_RSLTCOMP2BINCNT_SETM_COMP2_BINCNT(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_HISTOGRAM_RSLTCOMP2BINCNT_SET_COMP2_BINCNT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_RSLTCOMP2BINCNT_GET_COMP2_BINCNT(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_HISTOGRAM_SETM_COMP2_BINCNT(s,val) ( (s)->rsltcomp2bincnt = ((s)->rsltcomp2bincnt & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_HISTOGRAM_SET_COMP2_BINCNT(s,val)  ( (s)->rsltcomp2bincnt = (((s)->rsltcomp2bincnt & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_GET_COMP2_BINCNT(s) ((((s)->rsltcomp2bincnt) ) & 0x1fffffffUL)
#define GFXREG_HISTOGRAM_RSLTCOMP2BINCNT_COMP2_BINCNT_RESET 0x0U

/* FRMSTRTTRIG: Triggers for loading shadow registers and starting measurement with next input frame. */
#define GFXREG_HISTOGRAM_FRMSTRTTRIG 0x00000040U
/* MSRMNT_STRT_TRIG: Writing value 1 into this field initiates the measurement of the next frame. */
#define GFXREG_HISTOGRAM_FRMSTRTTRIG_MSRMNT_STRT_TRIG_FSHIFT 0U
#define GFXREG_HISTOGRAM_FRMSTRTTRIG_MSRMNT_STRT_TRIG_FMASK 0x1U
#define GFXREG_HISTOGRAM_FRMSTRTTRIG_SETM_MSRMNT_STRT_TRIG(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_HISTOGRAM_FRMSTRTTRIG_SET_MSRMNT_STRT_TRIG(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_HISTOGRAM_SETM_MSRMNT_STRT_TRIG(s,val) ( (s)->frmstrttrig = ((s)->frmstrttrig & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_HISTOGRAM_SET_MSRMNT_STRT_TRIG(s,val)  ( (s)->frmstrttrig = (((s)->frmstrttrig & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_HISTOGRAM_FRMSTRTTRIG_MSRMNT_STRT_TRIG_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_HISTOGRAM_REGISTER_H */

