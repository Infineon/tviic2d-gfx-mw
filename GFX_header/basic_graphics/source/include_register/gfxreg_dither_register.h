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
 * \version     0.01
 * \date        Tue May 26 11:58:38 2020
 * \file        gfxreg_dither_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   dither
 *              Source:   dither.component.xml
 *              Template: component_h.tpl
 * \brief      Iris dither register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_DITHER_REGISTER_H
#define GFXREG_DITHER_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* dither registers */
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


/* CONTROL: Dither Unit common control.        */
#define GFXREG_DITHER_CONTROL 0x00000000U
/* MODE: Mode which switches Dither Unit on/off.          */
#define GFXREG_DITHER_CONTROL_MODE_FSHIFT 0U
#define GFXREG_DITHER_CONTROL_MODE_FMASK 0x1U
#define GFXREG_DITHER_CONTROL_SETM_MODE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_DITHER_CONTROL_SET_MODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DITHER_CONTROL_GET_MODE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_DITHER_SETM_MODE(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_DITHER_SET_MODE(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DITHER_GET_MODE(s) ((((s)->control) ) & 0x1UL)
#define GFXREG_DITHER_CONTROL_MODE_NEUTRAL 0x0U /* Neutral mode. Pixels by-pass the Dither Unit, all other settings are ignored. */
#define GFXREG_DITHER_CONTROL_MODE_ACTIVE 0x1U /* Dither Unit is active. */
#define GFXREG_DITHER_CONTROL_MODE_RESET 0U

/* DITHERCONTROL: Dither Unit processing control.        */
#define GFXREG_DITHER_DITHERCONTROL 0x00000004U
/* BLUE_RANGE_SELECT: Mode which sets the reduction of component widths.             */
#define GFXREG_DITHER_DITHERCONTROL_BLUE_RANGE_SELECT_FSHIFT 0U
#define GFXREG_DITHER_DITHERCONTROL_BLUE_RANGE_SELECT_FMASK 0x7U
#define GFXREG_DITHER_DITHERCONTROL_SETM_BLUE_RANGE_SELECT(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_DITHER_DITHERCONTROL_SET_BLUE_RANGE_SELECT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_DITHER_DITHERCONTROL_GET_BLUE_RANGE_SELECT(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_DITHER_SETM_BLUE_RANGE_SELECT(s,val) ( (s)->dithercontrol = ((s)->dithercontrol & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_DITHER_SET_BLUE_RANGE_SELECT(s,val)  ( (s)->dithercontrol = (((s)->dithercontrol & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_DITHER_GET_BLUE_RANGE_SELECT(s) ((((s)->dithercontrol) ) & 0x7UL)
#define GFXREG_DITHER_DITHERCONTROL_BLUE_RANGE_SELECT_BLUE_10TO8 0x2U /* Reduces blue component width from 10 bit to 8bit. */
#define GFXREG_DITHER_DITHERCONTROL_BLUE_RANGE_SELECT_BLUE_10TO7 0x3U /* Reduces blue component width from 10 bit to 7bit. */
#define GFXREG_DITHER_DITHERCONTROL_BLUE_RANGE_SELECT_BLUE_10TO6 0x4U /* Reduces blue component width from 10 bit to 6bit. */
#define GFXREG_DITHER_DITHERCONTROL_BLUE_RANGE_SELECT_BLUE_10TO5 0x5U /* Reduces blue component width from 10 bit to 5bit. */
#define GFXREG_DITHER_DITHERCONTROL_BLUE_RANGE_SELECT_RESET 0x2U

/* GREEN_RANGE_SELECT: Mode which sets the reduction of component widths.             */
#define GFXREG_DITHER_DITHERCONTROL_GREEN_RANGE_SELECT_FSHIFT 4U
#define GFXREG_DITHER_DITHERCONTROL_GREEN_RANGE_SELECT_FMASK 0x7U
#define GFXREG_DITHER_DITHERCONTROL_SETM_GREEN_RANGE_SELECT(val) (((CYGFX_U32)(val) & 0x7UL) << 4U)
#define GFXREG_DITHER_DITHERCONTROL_SET_GREEN_RANGE_SELECT(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_DITHER_DITHERCONTROL_GET_GREEN_RANGE_SELECT(val) (((CYGFX_U32)(val) >> 4U) & 0x7UL)
#define GFXREG_DITHER_SETM_GREEN_RANGE_SELECT(s,val) ( (s)->dithercontrol = ((s)->dithercontrol & ~0x70UL) | (((CYGFX_U32)(val) << 4U) & 0x70UL) )
#define GFXREG_DITHER_SET_GREEN_RANGE_SELECT(s,val)  ( (s)->dithercontrol = (((s)->dithercontrol & ~0x70UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_DITHER_GET_GREEN_RANGE_SELECT(s) ((((s)->dithercontrol) >> 4U) & 0x7UL)
#define GFXREG_DITHER_DITHERCONTROL_GREEN_RANGE_SELECT_GREEN_10TO8 0x2U /* Reduces green component width from 10 bit to 8bit. */
#define GFXREG_DITHER_DITHERCONTROL_GREEN_RANGE_SELECT_GREEN_10TO7 0x3U /* Reduces green component width from 10 bit to 7bit. */
#define GFXREG_DITHER_DITHERCONTROL_GREEN_RANGE_SELECT_GREEN_10TO6 0x4U /* Reduces green component width from 10 bit to 6bit. */
#define GFXREG_DITHER_DITHERCONTROL_GREEN_RANGE_SELECT_GREEN_10TO5 0x5U /* Reduces green component width from 10 bit to 5bit. */
#define GFXREG_DITHER_DITHERCONTROL_GREEN_RANGE_SELECT_RESET 0x2U

/* RED_RANGE_SELECT: Mode which sets the reduction of component widths.             */
#define GFXREG_DITHER_DITHERCONTROL_RED_RANGE_SELECT_FSHIFT 8U
#define GFXREG_DITHER_DITHERCONTROL_RED_RANGE_SELECT_FMASK 0x7U
#define GFXREG_DITHER_DITHERCONTROL_SETM_RED_RANGE_SELECT(val) (((CYGFX_U32)(val) & 0x7UL) << 8U)
#define GFXREG_DITHER_DITHERCONTROL_SET_RED_RANGE_SELECT(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_DITHER_DITHERCONTROL_GET_RED_RANGE_SELECT(val) (((CYGFX_U32)(val) >> 8U) & 0x7UL)
#define GFXREG_DITHER_SETM_RED_RANGE_SELECT(s,val) ( (s)->dithercontrol = ((s)->dithercontrol & ~0x700UL) | (((CYGFX_U32)(val) << 8U) & 0x700UL) )
#define GFXREG_DITHER_SET_RED_RANGE_SELECT(s,val)  ( (s)->dithercontrol = (((s)->dithercontrol & ~0x700UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_DITHER_GET_RED_RANGE_SELECT(s) ((((s)->dithercontrol) >> 8U) & 0x7UL)
#define GFXREG_DITHER_DITHERCONTROL_RED_RANGE_SELECT_RED_10TO8 0x2U /* Reduces red component width from 10 bit to 8bit. */
#define GFXREG_DITHER_DITHERCONTROL_RED_RANGE_SELECT_RED_10TO7 0x3U /* Reduces red component width from 10 bit to 7bit. */
#define GFXREG_DITHER_DITHERCONTROL_RED_RANGE_SELECT_RED_10TO6 0x4U /* Reduces red component width from 10 bit to 6bit. */
#define GFXREG_DITHER_DITHERCONTROL_RED_RANGE_SELECT_RED_10TO5 0x5U /* Reduces red component width from 10 bit to 5bit. */
#define GFXREG_DITHER_DITHERCONTROL_RED_RANGE_SELECT_RESET 0x2U

/* OFFSET_SELECT: Selects the method how the dither offset is calculated.          */
#define GFXREG_DITHER_DITHERCONTROL_OFFSET_SELECT_FSHIFT 16U
#define GFXREG_DITHER_DITHERCONTROL_OFFSET_SELECT_FMASK 0x1U
#define GFXREG_DITHER_DITHERCONTROL_SETM_OFFSET_SELECT(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_DITHER_DITHERCONTROL_SET_OFFSET_SELECT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DITHER_DITHERCONTROL_GET_OFFSET_SELECT(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_DITHER_SETM_OFFSET_SELECT(s,val) ( (s)->dithercontrol = ((s)->dithercontrol & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_DITHER_SET_OFFSET_SELECT(s,val)  ( (s)->dithercontrol = (((s)->dithercontrol & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DITHER_GET_OFFSET_SELECT(s) ((((s)->dithercontrol) >> 16U) & 0x1UL)
#define GFXREG_DITHER_DITHERCONTROL_OFFSET_SELECT_OFFS_SPATIAL 0x0U /* Offset is a bayer matrix value, which is selected according to pixel frame position. */
#define GFXREG_DITHER_DITHERCONTROL_OFFSET_SELECT_OFFS_TEMPORAL 0x1U /* Offset is the sum from a bayer matrix value, which is selected according to pixel frame position, and a value from a regular sequence, which changes each frame.  */
#define GFXREG_DITHER_DITHERCONTROL_OFFSET_SELECT_RESET 0x0U

/* ALGO_SELECT: The number of output colors that can virtually be displayed by dithering is slightly lower than the number of physical input colors. This field selects how the mapping is done.          */
#define GFXREG_DITHER_DITHERCONTROL_ALGO_SELECT_FSHIFT 20U
#define GFXREG_DITHER_DITHERCONTROL_ALGO_SELECT_FMASK 0x3U
#define GFXREG_DITHER_DITHERCONTROL_SETM_ALGO_SELECT(val) (((CYGFX_U32)(val) & 0x3UL) << 20U)
#define GFXREG_DITHER_DITHERCONTROL_SET_ALGO_SELECT(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_DITHER_DITHERCONTROL_GET_ALGO_SELECT(val) (((CYGFX_U32)(val) >> 20U) & 0x3UL)
#define GFXREG_DITHER_SETM_ALGO_SELECT(s,val) ( (s)->dithercontrol = ((s)->dithercontrol & ~0x300000UL) | (((CYGFX_U32)(val) << 20U) & 0x300000UL) )
#define GFXREG_DITHER_SET_ALGO_SELECT(s,val)  ( (s)->dithercontrol = (((s)->dithercontrol & ~0x300000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_DITHER_GET_ALGO_SELECT(s) ((((s)->dithercontrol) >> 20U) & 0x3UL)
#define GFXREG_DITHER_DITHERCONTROL_ALGO_SELECT_NO_CORRECTION 0x1U /* Best possible resolution for most dark colors. Adds a diminutive offset to overall image brightness. */
#define GFXREG_DITHER_DITHERCONTROL_ALGO_SELECT_BRIGHTNESS_CORRECTION 0x2U /* Preserves overall image brightness. Cannot resolve most dark and most bright colors. All codes in-between are distributed perfectly smooth. */
#define GFXREG_DITHER_DITHERCONTROL_ALGO_SELECT_CONTRAST_CORRECTION 0x3U /* Preserves overall image brightness. Best possible distribution of color codes over complete range. */
#define GFXREG_DITHER_DITHERCONTROL_ALGO_SELECT_RESET 0x3U

/* ALPHA_MODE: Enables/disables that dithering can be switched by alpha bit.          */
#define GFXREG_DITHER_DITHERCONTROL_ALPHA_MODE_FSHIFT 24U
#define GFXREG_DITHER_DITHERCONTROL_ALPHA_MODE_FMASK 0x3U
#define GFXREG_DITHER_DITHERCONTROL_SETM_ALPHA_MODE(val) (((CYGFX_U32)(val) & 0x3UL) << 24U)
#define GFXREG_DITHER_DITHERCONTROL_SET_ALPHA_MODE(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_DITHER_DITHERCONTROL_GET_ALPHA_MODE(val) (((CYGFX_U32)(val) >> 24U) & 0x3UL)
#define GFXREG_DITHER_SETM_ALPHA_MODE(s,val) ( (s)->dithercontrol = ((s)->dithercontrol & ~0x3000000UL) | (((CYGFX_U32)(val) << 24U) & 0x3000000UL) )
#define GFXREG_DITHER_SET_ALPHA_MODE(s,val)  ( (s)->dithercontrol = (((s)->dithercontrol & ~0x3000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_DITHER_GET_ALPHA_MODE(s) ((((s)->dithercontrol) >> 24U) & 0x3UL)
#define GFXREG_DITHER_DITHERCONTROL_ALPHA_MODE_DISABLE 0x0U /* The alpha bit is not considered. */
#define GFXREG_DITHER_DITHERCONTROL_ALPHA_MODE_ENABLE_BY1 0x1U /* Red, green and blue components are only dithered, if the alpha bit is 1. */
#define GFXREG_DITHER_DITHERCONTROL_ALPHA_MODE_ENABLE_BY0 0x2U /* Red, green and blue components are only dithered, if the alpha bit is 0. */
#define GFXREG_DITHER_DITHERCONTROL_ALPHA_MODE_RESET 0x0U

/* RELEASE: Dither Unit release.        */
#define GFXREG_DITHER_RELEASE 0x00000008U
/* SUBVERSION: Dither Unit subversion.          */
#define GFXREG_DITHER_RELEASE_SUBVERSION_FSHIFT 0U
#define GFXREG_DITHER_RELEASE_SUBVERSION_FMASK 0xffU
#define GFXREG_DITHER_RELEASE_GET_SUBVERSION(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_DITHER_GET_SUBVERSION(s) ((((s)->release) ) & 0xffUL)
#define GFXREG_DITHER_RELEASE_SUBVERSION_RESET 1U

/* VERSION: Dither Unit version.          */
#define GFXREG_DITHER_RELEASE_VERSION_FSHIFT 8U
#define GFXREG_DITHER_RELEASE_VERSION_FMASK 0xffU
#define GFXREG_DITHER_RELEASE_GET_VERSION(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_DITHER_GET_VERSION(s) ((((s)->release) >> 8U) & 0xffUL)
#define GFXREG_DITHER_RELEASE_VERSION_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_DITHER_REGISTER_H */

