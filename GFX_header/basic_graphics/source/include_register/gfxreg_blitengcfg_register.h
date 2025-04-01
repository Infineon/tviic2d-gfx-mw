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
 * \date        Tue May 26 11:58:41 2020
 * \file        gfxreg_blitengcfg_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   blitengcfg
 *              Source:   blitengcfg.component.xml
 *              Template: component_h.tpl
 * \brief      Iris blitengcfg register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_BLITENGCFG_REGISTER_H
#define GFXREG_BLITENGCFG_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* blitengcfg registers */
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


/* STATICCONTROL: Static control register.
   See additionally PerformanceMeasurementControl register. */
#define GFXREG_BLITENGCFG_STATICCONTROL 0x00000000U
/* SHDEN: Enable shadowing of all RWS type registers (0=write_through, 1=shadowed). For LBO this ShdEn and ShdEn fields of all modules inside Bliteng have to be 1.  */
#define GFXREG_BLITENGCFG_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_BLITENGCFG_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_BLITENGCFG_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_BLITENGCFG_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_BLITENGCFG_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_BLITENGCFG_STATICCONTROL_SHDEN_RESET 0U

/* LRSTATUSSELECT: Select pipeline from which to access status register information in line-rendering mode. */
#define GFXREG_BLITENGCFG_STATICCONTROL_LRSTATUSSELECT_FSHIFT 4U
#define GFXREG_BLITENGCFG_STATICCONTROL_LRSTATUSSELECT_FMASK 0x3U
#define GFXREG_BLITENGCFG_STATICCONTROL_SETM_LRSTATUSSELECT(val) (((CYGFX_U32)(val) & 0x3UL) << 4U)
#define GFXREG_BLITENGCFG_STATICCONTROL_SET_LRSTATUSSELECT(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_STATICCONTROL_GET_LRSTATUSSELECT(val) (((CYGFX_U32)(val) >> 4U) & 0x3UL)
#define GFXREG_BLITENGCFG_SETM_LRSTATUSSELECT(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x30UL) | (((CYGFX_U32)(val) << 4U) & 0x30UL) )
#define GFXREG_BLITENGCFG_SET_LRSTATUSSELECT(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x30UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LRSTATUSSELECT(s) ((((s)->staticcontrol) >> 4U) & 0x3UL)
#define GFXREG_BLITENGCFG_STATICCONTROL_LRSTATUSSELECT_RESET 0U

/* BLITENGUTILIZATIONMEASUREMENTEN: Enable utilization measurement of LBO render mode. Corresponding registers are IBOCounter and LBOCounter. */
#define GFXREG_BLITENGCFG_STATICCONTROL_BLITENGUTILIZATIONMEASUREMENTEN_FSHIFT 8U
#define GFXREG_BLITENGCFG_STATICCONTROL_BLITENGUTILIZATIONMEASUREMENTEN_FMASK 0x1U
#define GFXREG_BLITENGCFG_STATICCONTROL_SETM_BLITENGUTILIZATIONMEASUREMENTEN(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_BLITENGCFG_STATICCONTROL_SET_BLITENGUTILIZATIONMEASUREMENTEN(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_STATICCONTROL_GET_BLITENGUTILIZATIONMEASUREMENTEN(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_BLITENGUTILIZATIONMEASUREMENTEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_BLITENGCFG_SET_BLITENGUTILIZATIONMEASUREMENTEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_BLITENGUTILIZATIONMEASUREMENTEN(s) ((((s)->staticcontrol) >> 8U) & 0x1UL)
#define GFXREG_BLITENGCFG_STATICCONTROL_BLITENGUTILIZATIONMEASUREMENTEN_RESET 0U

/* LBOUTILIZATIONMEASUREMENTEN: Enable utilization measurement of LBO render mode. Corresponding registers are LBOAllFetchesActiveCounter and LBOWaitBlitEngRessourcesCounter. */
#define GFXREG_BLITENGCFG_STATICCONTROL_LBOUTILIZATIONMEASUREMENTEN_FSHIFT 9U
#define GFXREG_BLITENGCFG_STATICCONTROL_LBOUTILIZATIONMEASUREMENTEN_FMASK 0x1U
#define GFXREG_BLITENGCFG_STATICCONTROL_SETM_LBOUTILIZATIONMEASUREMENTEN(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_BLITENGCFG_STATICCONTROL_SET_LBOUTILIZATIONMEASUREMENTEN(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_STATICCONTROL_GET_LBOUTILIZATIONMEASUREMENTEN(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBOUTILIZATIONMEASUREMENTEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_BLITENGCFG_SET_LBOUTILIZATIONMEASUREMENTEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBOUTILIZATIONMEASUREMENTEN(s) ((((s)->staticcontrol) >> 9U) & 0x1UL)
#define GFXREG_BLITENGCFG_STATICCONTROL_LBOUTILIZATIONMEASUREMENTEN_RESET 0U

/* TBUTILIZATIONMEASUREMENTEN: Enable utilization measurement of CmdSeq task buffers (active time for each TB). Corresponding registers are TB[x]UtilizationCounter. */
#define GFXREG_BLITENGCFG_STATICCONTROL_TBUTILIZATIONMEASUREMENTEN_FSHIFT 10U
#define GFXREG_BLITENGCFG_STATICCONTROL_TBUTILIZATIONMEASUREMENTEN_FMASK 0x1U
#define GFXREG_BLITENGCFG_STATICCONTROL_SETM_TBUTILIZATIONMEASUREMENTEN(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_BLITENGCFG_STATICCONTROL_SET_TBUTILIZATIONMEASUREMENTEN(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_STATICCONTROL_GET_TBUTILIZATIONMEASUREMENTEN(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_TBUTILIZATIONMEASUREMENTEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_BLITENGCFG_SET_TBUTILIZATIONMEASUREMENTEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_TBUTILIZATIONMEASUREMENTEN(s) ((((s)->staticcontrol) >> 10U) & 0x1UL)
#define GFXREG_BLITENGCFG_STATICCONTROL_TBUTILIZATIONMEASUREMENTEN_RESET 0U

/* LBOSOURCEPIXELMEASUREMENTEN: Enable source pixel counting for LBO. Corresponding registers are LBOSourcePixelRGBACounter and LBOSourcePixelAlphaCounter. */
#define GFXREG_BLITENGCFG_STATICCONTROL_LBOSOURCEPIXELMEASUREMENTEN_FSHIFT 11U
#define GFXREG_BLITENGCFG_STATICCONTROL_LBOSOURCEPIXELMEASUREMENTEN_FMASK 0x1U
#define GFXREG_BLITENGCFG_STATICCONTROL_SETM_LBOSOURCEPIXELMEASUREMENTEN(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_BLITENGCFG_STATICCONTROL_SET_LBOSOURCEPIXELMEASUREMENTEN(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_STATICCONTROL_GET_LBOSOURCEPIXELMEASUREMENTEN(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBOSOURCEPIXELMEASUREMENTEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_BLITENGCFG_SET_LBOSOURCEPIXELMEASUREMENTEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBOSOURCEPIXELMEASUREMENTEN(s) ((((s)->staticcontrol) >> 11U) & 0x1UL)
#define GFXREG_BLITENGCFG_STATICCONTROL_LBOSOURCEPIXELMEASUREMENTEN_RESET 0U

/* DESTINATIONPIXELMEASUREMENTEN: Enable destination pixel counting for LBO and LBO. Corresponding registers are LBODestinationPixelCounter and IBODestinationPixelCounter. */
#define GFXREG_BLITENGCFG_STATICCONTROL_DESTINATIONPIXELMEASUREMENTEN_FSHIFT 12U
#define GFXREG_BLITENGCFG_STATICCONTROL_DESTINATIONPIXELMEASUREMENTEN_FMASK 0x1U
#define GFXREG_BLITENGCFG_STATICCONTROL_SETM_DESTINATIONPIXELMEASUREMENTEN(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_BLITENGCFG_STATICCONTROL_SET_DESTINATIONPIXELMEASUREMENTEN(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_STATICCONTROL_GET_DESTINATIONPIXELMEASUREMENTEN(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_DESTINATIONPIXELMEASUREMENTEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_BLITENGCFG_SET_DESTINATIONPIXELMEASUREMENTEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_DESTINATIONPIXELMEASUREMENTEN(s) ((((s)->staticcontrol) >> 12U) & 0x1UL)
#define GFXREG_BLITENGCFG_STATICCONTROL_DESTINATIONPIXELMEASUREMENTEN_RESET 0U

/* TASKSETUP: Task configuration register. */
#define GFXREG_BLITENGCFG_TASKSETUP 0x00000004U
/* TASKSELECT: Select task bank for operation status registers (ypos, ...). */
#define GFXREG_BLITENGCFG_TASKSETUP_TASKSELECT_FSHIFT 0U
#define GFXREG_BLITENGCFG_TASKSETUP_TASKSELECT_FMASK 0x7U
#define GFXREG_BLITENGCFG_TASKSETUP_SETM_TASKSELECT(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_BLITENGCFG_TASKSETUP_SET_TASKSELECT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_TASKSETUP_GET_TASKSELECT(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_BLITENGCFG_SETM_TASKSELECT(s,val) ( (s)->tasksetup = ((s)->tasksetup & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_BLITENGCFG_SET_TASKSELECT(s,val)  ( (s)->tasksetup = (((s)->tasksetup & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_TASKSELECT(s) ((((s)->tasksetup) ) & 0x7UL)
#define GFXREG_BLITENGCFG_TASKSETUP_TASKSELECT_RESET 0U

/* RENDERMODE: Blit engine operation mode. */
#define GFXREG_BLITENGCFG_TASKSETUP_RENDERMODE_FSHIFT 4U
#define GFXREG_BLITENGCFG_TASKSETUP_RENDERMODE_FMASK 0x1U
#define GFXREG_BLITENGCFG_TASKSETUP_SETM_RENDERMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_BLITENGCFG_TASKSETUP_SET_RENDERMODE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_TASKSETUP_GET_RENDERMODE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_RENDERMODE(s,val) ( (s)->tasksetup = ((s)->tasksetup & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_BLITENGCFG_SET_RENDERMODE(s,val)  ( (s)->tasksetup = (((s)->tasksetup & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_RENDERMODE(s) ((((s)->tasksetup) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_TASKSETUP_RENDERMODE_FRAMERENDERING 0U /* Frame rendering mode (framebuffer). */
#define GFXREG_BLITENGCFG_TASKSETUP_RENDERMODE_LINERENDERING 1U /* Line rendering mode (linebuffer). */
#define GFXREG_BLITENGCFG_TASKSETUP_RENDERMODE_RESET 0U

/* PROXYSELECT: Proxy to use for the next operation */
#define GFXREG_BLITENGCFG_TASKSETUP_PROXYSELECT_FSHIFT 8U
#define GFXREG_BLITENGCFG_TASKSETUP_PROXYSELECT_FMASK 0x7U
#define GFXREG_BLITENGCFG_TASKSETUP_SETM_PROXYSELECT(val) (((CYGFX_U32)(val) & 0x7UL) << 8U)
#define GFXREG_BLITENGCFG_TASKSETUP_SET_PROXYSELECT(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_TASKSETUP_GET_PROXYSELECT(val) (((CYGFX_U32)(val) >> 8U) & 0x7UL)
#define GFXREG_BLITENGCFG_SETM_PROXYSELECT(s,val) ( (s)->tasksetup = ((s)->tasksetup & ~0x700UL) | (((CYGFX_U32)(val) << 8U) & 0x700UL) )
#define GFXREG_BLITENGCFG_SET_PROXYSELECT(s,val)  ( (s)->tasksetup = (((s)->tasksetup & ~0x700UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_PROXYSELECT(s) ((((s)->tasksetup) >> 8U) & 0x7UL)
#define GFXREG_BLITENGCFG_TASKSETUP_PROXYSELECT_OFF 0U /* Proxy disabled. */
#define GFXREG_BLITENGCFG_TASKSETUP_PROXYSELECT_FETCHLBH0 1U /* Proxy connected to FETCHLBH0. */
#define GFXREG_BLITENGCFG_TASKSETUP_PROXYSELECT_FETCHLBH1 2U /* Proxy connected to FETCHLBH1. */
#define GFXREG_BLITENGCFG_TASKSETUP_PROXYSELECT_FETCHLBH2 3U /* Proxy connected to FETCHLBH2. */
#define GFXREG_BLITENGCFG_TASKSETUP_PROXYSELECT_FETCHLBH3 4U /* Proxy connected to FETCHLBH3. */
#define GFXREG_BLITENGCFG_TASKSETUP_PROXYSELECT_FETCHLBH4 5U /* Proxy connected to FETCHLBH4. */
#define GFXREG_BLITENGCFG_TASKSETUP_PROXYSELECT_RESET 0U

/* LRFRAMEDIMENSION: Dimension of final frame in memory.
   Only required for line rendering mode. */
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION 0x00000008U
/* TOTALWIDTH: Frame width (programmed with -1). */
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_TOTALWIDTH_FSHIFT 0U
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_TOTALWIDTH_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_SETM_TOTALWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_SET_TOTALWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_GET_TOTALWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_TOTALWIDTH(s,val) ( (s)->lrframedimension = ((s)->lrframedimension & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_SET_TOTALWIDTH(s,val)  ( (s)->lrframedimension = (((s)->lrframedimension & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_TOTALWIDTH(s) ((((s)->lrframedimension) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_TOTALWIDTH_RESET 320U

/* TOTALHEIGHT: Frame height (programmed with -1). */
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_TOTALHEIGHT_FSHIFT 16U
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_TOTALHEIGHT_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_SETM_TOTALHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_SET_TOTALHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_GET_TOTALHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_TOTALHEIGHT(s,val) ( (s)->lrframedimension = ((s)->lrframedimension & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_BLITENGCFG_SET_TOTALHEIGHT(s,val)  ( (s)->lrframedimension = (((s)->lrframedimension & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_TOTALHEIGHT(s) ((((s)->lrframedimension) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LRFRAMEDIMENSION_TOTALHEIGHT_RESET 240U

/* OPERATIONSETUP: Setup for rendering operation. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP 0x0000000cU
/* DESTINATIONSELECT: Select operation for destination buffer. In IBO the buffer is provided via the FETCHDST in LBO the buffer is provided via internal RGBA slice buffer.  */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_DESTINATIONSELECT_FSHIFT 0U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_DESTINATIONSELECT_FMASK 0x3U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_DESTINATIONSELECT(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_DESTINATIONSELECT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_DESTINATIONSELECT(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_BLITENGCFG_SETM_DESTINATIONSELECT(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_BLITENGCFG_SET_DESTINATIONSELECT(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_DESTINATIONSELECT(s) ((((s)->operationsetup) ) & 0x3UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_DESTINATIONSELECT_OFF 0U /* Destination buffer is not read, used for FILL or COPY operations. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_DESTINATIONSELECT_ROP 1U /* Destination is connected to raster operation block (tertary). Only possible in IBO mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_DESTINATIONSELECT_BLEND 2U /* Destination is connected to blend operation block. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_DESTINATIONSELECT_FETCHMASK 3U /* Destination fetch is connected to the external input of the fetch MASK, for planar YUV. Only possible in IBO mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_DESTINATIONSELECT_RESET 0U

/* MASKSELECT: Select operation for mask buffer. In IBO the buffer is provided via the FETCHMASK; in LBO the buffer is provided via internal ALPHA slice buffer. If the value of both fields this and DestinationSelect is BLEND, OFF is used for this field. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_MASKSELECT_FSHIFT 4U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_MASKSELECT_FMASK 0x3U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_MASKSELECT(val) (((CYGFX_U32)(val) & 0x3UL) << 4U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_MASKSELECT(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_MASKSELECT(val) (((CYGFX_U32)(val) >> 4U) & 0x3UL)
#define GFXREG_BLITENGCFG_SETM_MASKSELECT(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x30UL) | (((CYGFX_U32)(val) << 4U) & 0x30UL) )
#define GFXREG_BLITENGCFG_SET_MASKSELECT(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x30UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_MASKSELECT(s) ((((s)->operationsetup) >> 4U) & 0x3UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_MASKSELECT_OFF 0U /* Mask buffer is not read. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_MASKSELECT_ROP 1U /* Mask is connected to raster operation block (secondary). Only possible in IBO mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_MASKSELECT_BLEND 2U /* Mask is connected to blend operation block. Only possible in LBO mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_MASKSELECT_FETCHSRC 3U /* Mask is connected to the fetch SRC. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_MASKSELECT_RESET 0U

/* BUFFERSELECT: Line buffer to render into. This field is ignored for IBO render mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_BUFFERSELECT_FSHIFT 8U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_BUFFERSELECT_FMASK 0x1U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_BUFFERSELECT(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_BUFFERSELECT(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_BUFFERSELECT(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_BUFFERSELECT(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_BLITENGCFG_SET_BUFFERSELECT(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_BUFFERSELECT(s) ((((s)->operationsetup) >> 8U) & 0x1UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_BUFFERSELECT_RGBA 0U /* RGBA buffer. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_BUFFERSELECT_MASK 1U /* MASK buffer. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_BUFFERSELECT_RESET 0U

/* ENABLEROP: Set 1 to enable ROP module. This field is ignored for LBO render mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEROP_FSHIFT 9U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEROP_FMASK 0x1U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_ENABLEROP(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_ENABLEROP(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_ENABLEROP(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_ENABLEROP(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_BLITENGCFG_SET_ENABLEROP(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_ENABLEROP(s) ((((s)->operationsetup) >> 9U) & 0x1UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEROP_RESET 0U

/* ENABLECLUT: Set 1 to enable CLUT. This field is ignored for LBO render mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLECLUT_FSHIFT 10U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLECLUT_FMASK 0x1U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_ENABLECLUT(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_ENABLECLUT(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_ENABLECLUT(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_ENABLECLUT(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_BLITENGCFG_SET_ENABLECLUT(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_ENABLECLUT(s) ((((s)->operationsetup) >> 10U) & 0x1UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLECLUT_RESET 0U

/* ENABLEMATRIX: Set 1 to enable matrix. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEMATRIX_FSHIFT 11U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEMATRIX_FMASK 0x1U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_ENABLEMATRIX(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_ENABLEMATRIX(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_ENABLEMATRIX(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_ENABLEMATRIX(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_BLITENGCFG_SET_ENABLEMATRIX(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_ENABLEMATRIX(s) ((((s)->operationsetup) >> 11U) & 0x1UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEMATRIX_RESET 0U

/* ENABLEGPSCALER: Set 1 enable GPScaler. This field is ignored for LBO render mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEGPSCALER_FSHIFT 12U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEGPSCALER_FMASK 0x1U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_ENABLEGPSCALER(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_ENABLEGPSCALER(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_ENABLEGPSCALER(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_ENABLEGPSCALER(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_BLITENGCFG_SET_ENABLEGPSCALER(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_ENABLEGPSCALER(s) ((((s)->operationsetup) >> 12U) & 0x1UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEGPSCALER_RESET 0U

/* ENABLEBLITBLEND: Set 1 enable the BlitBlend module. If this field is set  */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEBLITBLEND_FSHIFT 13U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEBLITBLEND_FMASK 0x1U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_ENABLEBLITBLEND(val) (((CYGFX_U32)(val) & 0x1UL) << 13U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_ENABLEBLITBLEND(val) (((CYGFX_U32)(val) << 13U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_ENABLEBLITBLEND(val) (((CYGFX_U32)(val) >> 13U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_ENABLEBLITBLEND(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x2000UL) | (((CYGFX_U32)(val) << 13U) & 0x2000UL) )
#define GFXREG_BLITENGCFG_SET_ENABLEBLITBLEND(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x2000UL) | ((CYGFX_U32)(val) << 13U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_ENABLEBLITBLEND(s) ((((s)->operationsetup) >> 13U) & 0x1UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_ENABLEBLITBLEND_RESET 0U

/* CONSTANTCOLORFILL: If this field is set, the selected destination (BufferSelect) will be filled with constant color (ConstantColorRed, ConstantColorGreen, ConstantColorBlue, ConstantAlpha) not using any fetch pipeline. Only possible in LBO mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_CONSTANTCOLORFILL_FSHIFT 14U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_CONSTANTCOLORFILL_FMASK 0x1U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_CONSTANTCOLORFILL(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_CONSTANTCOLORFILL(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_CONSTANTCOLORFILL(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_CONSTANTCOLORFILL(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_BLITENGCFG_SET_CONSTANTCOLORFILL(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_CONSTANTCOLORFILL(s) ((((s)->operationsetup) >> 14U) & 0x1UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_CONSTANTCOLORFILL_RESET 0U

/* USECOPS: Cops are used for the next fetch operation. If the value is zero, CopsAddress is not evaluated. Only possible in LBO mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_USECOPS_FSHIFT 15U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_USECOPS_FMASK 0x1U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_USECOPS(val) (((CYGFX_U32)(val) & 0x1UL) << 15U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_USECOPS(val) (((CYGFX_U32)(val) << 15U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_USECOPS(val) (((CYGFX_U32)(val) >> 15U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_USECOPS(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0x8000UL) | (((CYGFX_U32)(val) << 15U) & 0x8000UL) )
#define GFXREG_BLITENGCFG_SET_USECOPS(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0x8000UL) | ((CYGFX_U32)(val) << 15U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_USECOPS(s) ((((s)->operationsetup) >> 15U) & 0x1UL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_USECOPS_RESET 0U

/* COPSADDRESS: Address to use in Current Object Processing State (COPS) memory (required for decode operations). Only possible in LBO mode. */
#define GFXREG_BLITENGCFG_OPERATIONSETUP_COPSADDRESS_FSHIFT 16U
#define GFXREG_BLITENGCFG_OPERATIONSETUP_COPSADDRESS_FMASK 0xffU
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SETM_COPSADDRESS(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_SET_COPSADDRESS(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_OPERATIONSETUP_GET_COPSADDRESS(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_BLITENGCFG_SETM_COPSADDRESS(s,val) ( (s)->operationsetup = ((s)->operationsetup & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_BLITENGCFG_SET_COPSADDRESS(s,val)  ( (s)->operationsetup = (((s)->operationsetup & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_COPSADDRESS(s) ((((s)->operationsetup) >> 16U) & 0xffUL)
#define GFXREG_BLITENGCFG_OPERATIONSETUP_COPSADDRESS_RESET 0U

/* LROBJECTDIMENSION: Dimension of object. Only possible in LBO mode */
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION 0x00000010U
/* OBJECTWIDTH: Object width (programmed with -1). */
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_OBJECTWIDTH_FSHIFT 0U
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_OBJECTWIDTH_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_SETM_OBJECTWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_SET_OBJECTWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_GET_OBJECTWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_OBJECTWIDTH(s,val) ( (s)->lrobjectdimension = ((s)->lrobjectdimension & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_SET_OBJECTWIDTH(s,val)  ( (s)->lrobjectdimension = (((s)->lrobjectdimension & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_OBJECTWIDTH(s) ((((s)->lrobjectdimension) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_OBJECTWIDTH_RESET 320U

/* OBJECTHEIGHT: Object height (programmed with -1). */
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_OBJECTHEIGHT_FSHIFT 16U
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_OBJECTHEIGHT_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_SETM_OBJECTHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_SET_OBJECTHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_GET_OBJECTHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_OBJECTHEIGHT(s,val) ( (s)->lrobjectdimension = ((s)->lrobjectdimension & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_BLITENGCFG_SET_OBJECTHEIGHT(s,val)  ( (s)->lrobjectdimension = (((s)->lrobjectdimension & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_OBJECTHEIGHT(s) ((((s)->lrobjectdimension) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LROBJECTDIMENSION_OBJECTHEIGHT_RESET 240U

/* LROBJECTPOSITION: Position of current object in frame coordinate system. Only possible in LBO mode */
#define GFXREG_BLITENGCFG_LROBJECTPOSITION 0x00000014U
/* OBJECTOFFSETX: Object position in x direction (start at 0). */
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_OBJECTOFFSETX_FSHIFT 0U
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_OBJECTOFFSETX_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_SETM_OBJECTOFFSETX(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_SET_OBJECTOFFSETX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_GET_OBJECTOFFSETX(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_OBJECTOFFSETX(s,val) ( (s)->lrobjectposition = ((s)->lrobjectposition & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_SET_OBJECTOFFSETX(s,val)  ( (s)->lrobjectposition = (((s)->lrobjectposition & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_OBJECTOFFSETX(s) ((((s)->lrobjectposition) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_OBJECTOFFSETX_RESET 0U

/* OBJECTOFFSETY: Object position in y direction (start at 0). */
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_OBJECTOFFSETY_FSHIFT 16U
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_OBJECTOFFSETY_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_SETM_OBJECTOFFSETY(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_SET_OBJECTOFFSETY(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_GET_OBJECTOFFSETY(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_OBJECTOFFSETY(s,val) ( (s)->lrobjectposition = ((s)->lrobjectposition & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_BLITENGCFG_SET_OBJECTOFFSETY(s,val)  ( (s)->lrobjectposition = (((s)->lrobjectposition & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_OBJECTOFFSETY(s) ((((s)->lrobjectposition) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LROBJECTPOSITION_OBJECTOFFSETY_RESET 0U

/* LRCONSTALPHA: Constant alpha used to fill buffer w/o fetch unit. Has affect only if ConstantColorFill is set. Only possible in LBO mode. */
#define GFXREG_BLITENGCFG_LRCONSTALPHA 0x00000018U
/* CONSTANTALPHA: Alpha to be filled to RGBA or Alpha buffer. */
#define GFXREG_BLITENGCFG_LRCONSTALPHA_CONSTANTALPHA_FSHIFT 0U
#define GFXREG_BLITENGCFG_LRCONSTALPHA_CONSTANTALPHA_FMASK 0xffU
#define GFXREG_BLITENGCFG_LRCONSTALPHA_SETM_CONSTANTALPHA(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_BLITENGCFG_LRCONSTALPHA_SET_CONSTANTALPHA(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LRCONSTALPHA_GET_CONSTANTALPHA(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_BLITENGCFG_SETM_CONSTANTALPHA(s,val) ( (s)->lrconstalpha = ((s)->lrconstalpha & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_BLITENGCFG_SET_CONSTANTALPHA(s,val)  ( (s)->lrconstalpha = (((s)->lrconstalpha & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_CONSTANTALPHA(s) ((((s)->lrconstalpha) ) & 0xffUL)
#define GFXREG_BLITENGCFG_LRCONSTALPHA_CONSTANTALPHA_RESET 0U

/* LRCONSTRGB: Constant color used to fill buffer w/o fetch unit. Has affect only if ConstantColorFill is set and BufferSelect==RGBA. Only possible in LBO mode */
#define GFXREG_BLITENGCFG_LRCONSTRGB 0x0000001cU
/* CONSTANTCOLORRED: Constant red color to be filled into RGBA buffer. */
#define GFXREG_BLITENGCFG_LRCONSTRGB_CONSTANTCOLORRED_FSHIFT 0U
#define GFXREG_BLITENGCFG_LRCONSTRGB_CONSTANTCOLORRED_FMASK 0x3ffU
#define GFXREG_BLITENGCFG_LRCONSTRGB_SETM_CONSTANTCOLORRED(val) (((CYGFX_U32)(val) & 0x3ffUL) )
#define GFXREG_BLITENGCFG_LRCONSTRGB_SET_CONSTANTCOLORRED(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LRCONSTRGB_GET_CONSTANTCOLORRED(val) (((CYGFX_U32)(val) ) & 0x3ffUL)
#define GFXREG_BLITENGCFG_SETM_CONSTANTCOLORRED(s,val) ( (s)->lrconstrgb = ((s)->lrconstrgb & ~0x3ffUL) | (((CYGFX_U32)(val) ) & 0x3ffUL) )
#define GFXREG_BLITENGCFG_SET_CONSTANTCOLORRED(s,val)  ( (s)->lrconstrgb = (((s)->lrconstrgb & ~0x3ffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_CONSTANTCOLORRED(s) ((((s)->lrconstrgb) ) & 0x3ffUL)
#define GFXREG_BLITENGCFG_LRCONSTRGB_CONSTANTCOLORRED_RESET 0U

/* CONSTANTCOLORGREEN: Constant green color to be filled into RGBA buffer. */
#define GFXREG_BLITENGCFG_LRCONSTRGB_CONSTANTCOLORGREEN_FSHIFT 10U
#define GFXREG_BLITENGCFG_LRCONSTRGB_CONSTANTCOLORGREEN_FMASK 0x3ffU
#define GFXREG_BLITENGCFG_LRCONSTRGB_SETM_CONSTANTCOLORGREEN(val) (((CYGFX_U32)(val) & 0x3ffUL) << 10U)
#define GFXREG_BLITENGCFG_LRCONSTRGB_SET_CONSTANTCOLORGREEN(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LRCONSTRGB_GET_CONSTANTCOLORGREEN(val) (((CYGFX_U32)(val) >> 10U) & 0x3ffUL)
#define GFXREG_BLITENGCFG_SETM_CONSTANTCOLORGREEN(s,val) ( (s)->lrconstrgb = ((s)->lrconstrgb & ~0xffc00UL) | (((CYGFX_U32)(val) << 10U) & 0xffc00UL) )
#define GFXREG_BLITENGCFG_SET_CONSTANTCOLORGREEN(s,val)  ( (s)->lrconstrgb = (((s)->lrconstrgb & ~0xffc00UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_CONSTANTCOLORGREEN(s) ((((s)->lrconstrgb) >> 10U) & 0x3ffUL)
#define GFXREG_BLITENGCFG_LRCONSTRGB_CONSTANTCOLORGREEN_RESET 0U

/* CONSTANTCOLORBLUE: Constant blue color to be filled into RGBA buffer. */
#define GFXREG_BLITENGCFG_LRCONSTRGB_CONSTANTCOLORBLUE_FSHIFT 20U
#define GFXREG_BLITENGCFG_LRCONSTRGB_CONSTANTCOLORBLUE_FMASK 0x3ffU
#define GFXREG_BLITENGCFG_LRCONSTRGB_SETM_CONSTANTCOLORBLUE(val) (((CYGFX_U32)(val) & 0x3ffUL) << 20U)
#define GFXREG_BLITENGCFG_LRCONSTRGB_SET_CONSTANTCOLORBLUE(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LRCONSTRGB_GET_CONSTANTCOLORBLUE(val) (((CYGFX_U32)(val) >> 20U) & 0x3ffUL)
#define GFXREG_BLITENGCFG_SETM_CONSTANTCOLORBLUE(s,val) ( (s)->lrconstrgb = ((s)->lrconstrgb & ~0x3ff00000UL) | (((CYGFX_U32)(val) << 20U) & 0x3ff00000UL) )
#define GFXREG_BLITENGCFG_SET_CONSTANTCOLORBLUE(s,val)  ( (s)->lrconstrgb = (((s)->lrconstrgb & ~0x3ff00000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3ffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_CONSTANTCOLORBLUE(s) ((((s)->lrconstrgb) >> 20U) & 0x3ffUL)
#define GFXREG_BLITENGCFG_LRCONSTRGB_CONSTANTCOLORBLUE_RESET 0U

/* SYNCIDREQUEST0: Sync ID request register. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST0 0x00000020U
/* SYNCIDREQUEST0: Sync ID requested by SW. Will be loaded into SyncIdStatus0 if SyncIdTrigger[0] is set and if/once store operation is done. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST0_SYNCIDREQUEST0_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDREQUEST0_SYNCIDREQUEST0_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDREQUEST0_SETM_SYNCIDREQUEST0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_BLITENGCFG_SYNCIDREQUEST0_SET_SYNCIDREQUEST0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SYNCIDREQUEST0_GET_SYNCIDREQUEST0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SETM_SYNCIDREQUEST0(s,val) ( (s)->syncidrequest0 = ((s)->syncidrequest0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_BLITENGCFG_SET_SYNCIDREQUEST0(s,val)  ( (s)->syncidrequest0 = (((s)->syncidrequest0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_SYNCIDREQUEST0(s) ((((s)->syncidrequest0) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDREQUEST0_SYNCIDREQUEST0_RESET 0U

/* SYNCIDREQUEST1: Sync ID request register. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST1 0x00000024U
/* SYNCIDREQUEST1: Sync ID requested by SW. Will be loaded into SyncIdStatus1 if SyncIdTrigger[1] is set and if/once store operation is done. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST1_SYNCIDREQUEST1_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDREQUEST1_SYNCIDREQUEST1_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDREQUEST1_SETM_SYNCIDREQUEST1(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_BLITENGCFG_SYNCIDREQUEST1_SET_SYNCIDREQUEST1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SYNCIDREQUEST1_GET_SYNCIDREQUEST1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SETM_SYNCIDREQUEST1(s,val) ( (s)->syncidrequest1 = ((s)->syncidrequest1 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_BLITENGCFG_SET_SYNCIDREQUEST1(s,val)  ( (s)->syncidrequest1 = (((s)->syncidrequest1 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_SYNCIDREQUEST1(s) ((((s)->syncidrequest1) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDREQUEST1_SYNCIDREQUEST1_RESET 0U

/* SYNCIDREQUEST2: Sync ID request register. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST2 0x00000028U
/* SYNCIDREQUEST2: Sync ID requested by SW. Will be loaded into SyncIdStatus2 if SyncIdTrigger[2] is set and if/once store operation is done. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST2_SYNCIDREQUEST2_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDREQUEST2_SYNCIDREQUEST2_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDREQUEST2_SETM_SYNCIDREQUEST2(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_BLITENGCFG_SYNCIDREQUEST2_SET_SYNCIDREQUEST2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SYNCIDREQUEST2_GET_SYNCIDREQUEST2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SETM_SYNCIDREQUEST2(s,val) ( (s)->syncidrequest2 = ((s)->syncidrequest2 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_BLITENGCFG_SET_SYNCIDREQUEST2(s,val)  ( (s)->syncidrequest2 = (((s)->syncidrequest2 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_SYNCIDREQUEST2(s) ((((s)->syncidrequest2) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDREQUEST2_SYNCIDREQUEST2_RESET 0U

/* SYNCIDREQUEST3: Sync ID request register. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST3 0x0000002cU
/* SYNCIDREQUEST3: Sync ID requested by SW. Will be loaded into SyncIdStatus3 if SyncIdTrigger[3] is set and if/once store operation is done. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST3_SYNCIDREQUEST3_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDREQUEST3_SYNCIDREQUEST3_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDREQUEST3_SETM_SYNCIDREQUEST3(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_BLITENGCFG_SYNCIDREQUEST3_SET_SYNCIDREQUEST3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SYNCIDREQUEST3_GET_SYNCIDREQUEST3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SETM_SYNCIDREQUEST3(s,val) ( (s)->syncidrequest3 = ((s)->syncidrequest3 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_BLITENGCFG_SET_SYNCIDREQUEST3(s,val)  ( (s)->syncidrequest3 = (((s)->syncidrequest3 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_SYNCIDREQUEST3(s) ((((s)->syncidrequest3) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDREQUEST3_SYNCIDREQUEST3_RESET 0U

/* SYNCIDREQUEST4: Sync ID request register. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST4 0x00000030U
/* SYNCIDREQUEST4: Sync ID requested by SW. Will be loaded into SyncIdStatus4 if SyncIdTrigger[4] is set and if/once store operation is done. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST4_SYNCIDREQUEST4_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDREQUEST4_SYNCIDREQUEST4_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDREQUEST4_SETM_SYNCIDREQUEST4(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_BLITENGCFG_SYNCIDREQUEST4_SET_SYNCIDREQUEST4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SYNCIDREQUEST4_GET_SYNCIDREQUEST4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SETM_SYNCIDREQUEST4(s,val) ( (s)->syncidrequest4 = ((s)->syncidrequest4 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_BLITENGCFG_SET_SYNCIDREQUEST4(s,val)  ( (s)->syncidrequest4 = (((s)->syncidrequest4 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_SYNCIDREQUEST4(s) ((((s)->syncidrequest4) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDREQUEST4_SYNCIDREQUEST4_RESET 0U

/* SYNCIDREQUEST5: Sync ID request register. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST5 0x00000034U
/* SYNCIDREQUEST5: Sync ID requested by SW. Will be loaded into SyncIdStatus5 if SyncIdTrigger[5] is set and if/once store operation is done. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST5_SYNCIDREQUEST5_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDREQUEST5_SYNCIDREQUEST5_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDREQUEST5_SETM_SYNCIDREQUEST5(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_BLITENGCFG_SYNCIDREQUEST5_SET_SYNCIDREQUEST5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SYNCIDREQUEST5_GET_SYNCIDREQUEST5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SETM_SYNCIDREQUEST5(s,val) ( (s)->syncidrequest5 = ((s)->syncidrequest5 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_BLITENGCFG_SET_SYNCIDREQUEST5(s,val)  ( (s)->syncidrequest5 = (((s)->syncidrequest5 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_SYNCIDREQUEST5(s) ((((s)->syncidrequest5) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDREQUEST5_SYNCIDREQUEST5_RESET 0U

/* SYNCIDREQUEST6: Sync ID request register. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST6 0x00000038U
/* SYNCIDREQUEST6: Sync ID requested by SW. Will be loaded into SyncIdStatus6 if SyncIdTrigger[6] is set and if/once store operation is done. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST6_SYNCIDREQUEST6_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDREQUEST6_SYNCIDREQUEST6_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDREQUEST6_SETM_SYNCIDREQUEST6(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_BLITENGCFG_SYNCIDREQUEST6_SET_SYNCIDREQUEST6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SYNCIDREQUEST6_GET_SYNCIDREQUEST6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SETM_SYNCIDREQUEST6(s,val) ( (s)->syncidrequest6 = ((s)->syncidrequest6 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_BLITENGCFG_SET_SYNCIDREQUEST6(s,val)  ( (s)->syncidrequest6 = (((s)->syncidrequest6 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_SYNCIDREQUEST6(s) ((((s)->syncidrequest6) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDREQUEST6_SYNCIDREQUEST6_RESET 0U

/* SYNCIDREQUEST7: Sync ID request register. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST7 0x0000003cU
/* SYNCIDREQUEST7: Sync ID requested by SW. Will be loaded into SyncIdStatus7 if SyncIdTrigger[7] is set and if/once store operation is done. */
#define GFXREG_BLITENGCFG_SYNCIDREQUEST7_SYNCIDREQUEST7_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDREQUEST7_SYNCIDREQUEST7_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDREQUEST7_SETM_SYNCIDREQUEST7(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_BLITENGCFG_SYNCIDREQUEST7_SET_SYNCIDREQUEST7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SYNCIDREQUEST7_GET_SYNCIDREQUEST7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SETM_SYNCIDREQUEST7(s,val) ( (s)->syncidrequest7 = ((s)->syncidrequest7 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_BLITENGCFG_SET_SYNCIDREQUEST7(s,val)  ( (s)->syncidrequest7 = (((s)->syncidrequest7 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_SYNCIDREQUEST7(s) ((((s)->syncidrequest7) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDREQUEST7_SYNCIDREQUEST7_RESET 0U

/* SYNCCONTROL: Triggers interrupts for sequence complete of specific TB of global sequence complete interrupt. */
#define GFXREG_BLITENGCFG_SYNCCONTROL 0x00000040U
/* SYNCIDTRIGGER: Trigger SyncIdComplete[0:7] and load SyncIdRequest[0:7] into SyncIdStatus[0:7]. Is executed after store operation is completed or no operation is active on the corresponding TB. */
#define GFXREG_BLITENGCFG_SYNCCONTROL_SYNCIDTRIGGER_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCCONTROL_SYNCIDTRIGGER_FMASK 0xffU
#define GFXREG_BLITENGCFG_SYNCCONTROL_SETM_SYNCIDTRIGGER(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_BLITENGCFG_SYNCCONTROL_SET_SYNCIDTRIGGER(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SETM_SYNCIDTRIGGER(s,val) ( (s)->synccontrol = ((s)->synccontrol & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_BLITENGCFG_SET_SYNCIDTRIGGER(s,val)  ( (s)->synccontrol = (((s)->synccontrol & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_SYNCCONTROL_SYNCIDTRIGGER_RESET 0U

/* SEQUENCECOMPLETE: Trigger SeqComplete interrupt if BlitEng is idle or the last operation has been completed. */
#define GFXREG_BLITENGCFG_SYNCCONTROL_SEQUENCECOMPLETE_FSHIFT 8U
#define GFXREG_BLITENGCFG_SYNCCONTROL_SEQUENCECOMPLETE_FMASK 0x1U
#define GFXREG_BLITENGCFG_SYNCCONTROL_SETM_SEQUENCECOMPLETE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_BLITENGCFG_SYNCCONTROL_SET_SEQUENCECOMPLETE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SETM_SEQUENCECOMPLETE(s,val) ( (s)->synccontrol = ((s)->synccontrol & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_BLITENGCFG_SET_SEQUENCECOMPLETE(s,val)  ( (s)->synccontrol = (((s)->synccontrol & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_SYNCCONTROL_SEQUENCECOMPLETE_RESET 0U

/* LINERENDERINGCONTROL: Line rendering operation control register. */
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL 0x00000044U
/* LRSTART: Start next source to linebuffer operation. */
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_LRSTART_FSHIFT 0U
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_LRSTART_FMASK 0x1U
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_SETM_LRSTART(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_SET_LRSTART(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SETM_LRSTART(s,val) ( (s)->linerenderingcontrol = ((s)->linerenderingcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_BLITENGCFG_SET_LRSTART(s,val)  ( (s)->linerenderingcontrol = (((s)->linerenderingcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_LRSTART_RESET (none)U

/* CLEARTASK: Clear related registers (ypos, perf) of corresponding TB. Each bit corresponds to one TB. */
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_CLEARTASK_FSHIFT 8U
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_CLEARTASK_FMASK 0xffU
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_SETM_CLEARTASK(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_SET_CLEARTASK(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SETM_CLEARTASK(s,val) ( (s)->linerenderingcontrol = ((s)->linerenderingcontrol & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_BLITENGCFG_SET_CLEARTASK(s,val)  ( (s)->linerenderingcontrol = (((s)->linerenderingcontrol & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_LINERENDERINGCONTROL_CLEARTASK_RESET (none)U

/* PERFORMANCEMEASUREMENTCONTROL: Control of the performance and utilitzation measurements. */
#define GFXREG_BLITENGCFG_PERFORMANCEMEASUREMENTCONTROL 0x00000048U
/* SAVEANDRESETMEASUREMENTS: All performance and utilization counters are implemented internally. Writing one to this field provides all measured values to corresponding configurations registers and resets the internal counters. */
#define GFXREG_BLITENGCFG_PERFORMANCEMEASUREMENTCONTROL_SAVEANDRESETMEASUREMENTS_FSHIFT 0U
#define GFXREG_BLITENGCFG_PERFORMANCEMEASUREMENTCONTROL_SAVEANDRESETMEASUREMENTS_FMASK 0x1U
#define GFXREG_BLITENGCFG_PERFORMANCEMEASUREMENTCONTROL_SETM_SAVEANDRESETMEASUREMENTS(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_BLITENGCFG_PERFORMANCEMEASUREMENTCONTROL_SET_SAVEANDRESETMEASUREMENTS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_SETM_SAVEANDRESETMEASUREMENTS(s,val) ( (s)->performancemeasurementcontrol = ((s)->performancemeasurementcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_BLITENGCFG_SET_SAVEANDRESETMEASUREMENTS(s,val)  ( (s)->performancemeasurementcontrol = (((s)->performancemeasurementcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_PERFORMANCEMEASUREMENTCONTROL_SAVEANDRESETMEASUREMENTS_RESET (none)U

/* SYNCIDSTATUS0: Sync ID Status register for task 0. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS0 0x0000004cU
/* SYNCIDCOMPLETE0: Latest ID completed as requested by SyncIdRequest and SyncIdTrigger with TaskSelect = 0. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS0_SYNCIDCOMPLETE0_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDSTATUS0_SYNCIDCOMPLETE0_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDSTATUS0_GET_SYNCIDCOMPLETE0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_SYNCIDCOMPLETE0(s) ((((s)->syncidstatus0) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDSTATUS0_SYNCIDCOMPLETE0_RESET (none)U

/* SYNCIDSTATUS1: Sync ID Status register for task 1. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS1 0x00000050U
/* SYNCIDCOMPLETE1: Latest ID completed as requested by SyncIdRequest and SyncIdTrigger with TaskSelect = 1. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS1_SYNCIDCOMPLETE1_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDSTATUS1_SYNCIDCOMPLETE1_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDSTATUS1_GET_SYNCIDCOMPLETE1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_SYNCIDCOMPLETE1(s) ((((s)->syncidstatus1) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDSTATUS1_SYNCIDCOMPLETE1_RESET (none)U

/* SYNCIDSTATUS2: Sync ID Status register for task 2. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS2 0x00000054U
/* SYNCIDCOMPLETE2: Latest ID completed as requested by SyncIdRequest and SyncIdTrigger with TaskSelect = 2. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS2_SYNCIDCOMPLETE2_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDSTATUS2_SYNCIDCOMPLETE2_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDSTATUS2_GET_SYNCIDCOMPLETE2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_SYNCIDCOMPLETE2(s) ((((s)->syncidstatus2) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDSTATUS2_SYNCIDCOMPLETE2_RESET (none)U

/* SYNCIDSTATUS3: Sync ID Status register for task 3. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS3 0x00000058U
/* SYNCIDCOMPLETE3: Latest ID completed as requested by SyncIdRequest and SyncIdTrigger with TaskSelect = 3. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS3_SYNCIDCOMPLETE3_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDSTATUS3_SYNCIDCOMPLETE3_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDSTATUS3_GET_SYNCIDCOMPLETE3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_SYNCIDCOMPLETE3(s) ((((s)->syncidstatus3) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDSTATUS3_SYNCIDCOMPLETE3_RESET (none)U

/* SYNCIDSTATUS4: Sync ID Status register for task 4. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS4 0x0000005cU
/* SYNCIDCOMPLETE4: Latest ID completed as requested by SyncIdRequest and SyncIdTrigger with TaskSelect = 4. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS4_SYNCIDCOMPLETE4_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDSTATUS4_SYNCIDCOMPLETE4_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDSTATUS4_GET_SYNCIDCOMPLETE4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_SYNCIDCOMPLETE4(s) ((((s)->syncidstatus4) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDSTATUS4_SYNCIDCOMPLETE4_RESET (none)U

/* SYNCIDSTATUS5: Sync ID Status register for task 5. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS5 0x00000060U
/* SYNCIDCOMPLETE5: Latest ID completed as requested by SyncIdRequest and SyncIdTrigger with TaskSelect = 5. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS5_SYNCIDCOMPLETE5_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDSTATUS5_SYNCIDCOMPLETE5_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDSTATUS5_GET_SYNCIDCOMPLETE5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_SYNCIDCOMPLETE5(s) ((((s)->syncidstatus5) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDSTATUS5_SYNCIDCOMPLETE5_RESET (none)U

/* SYNCIDSTATUS6: Sync ID Status register for task 6. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS6 0x00000064U
/* SYNCIDCOMPLETE6: Latest ID completed as requested by SyncIdRequest and SyncIdTrigger with TaskSelect = 6. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS6_SYNCIDCOMPLETE6_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDSTATUS6_SYNCIDCOMPLETE6_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDSTATUS6_GET_SYNCIDCOMPLETE6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_SYNCIDCOMPLETE6(s) ((((s)->syncidstatus6) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDSTATUS6_SYNCIDCOMPLETE6_RESET (none)U

/* SYNCIDSTATUS7: Sync ID Status register for task 7. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS7 0x00000068U
/* SYNCIDCOMPLETE7: Latest ID completed as requested by SyncIdRequest and SyncIdTrigger with TaskSelect = 7. */
#define GFXREG_BLITENGCFG_SYNCIDSTATUS7_SYNCIDCOMPLETE7_FSHIFT 0U
#define GFXREG_BLITENGCFG_SYNCIDSTATUS7_SYNCIDCOMPLETE7_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_SYNCIDSTATUS7_GET_SYNCIDCOMPLETE7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_SYNCIDCOMPLETE7(s) ((((s)->syncidstatus7) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_SYNCIDSTATUS7_SYNCIDCOMPLETE7_RESET (none)U

/* DESIGNATTRIBUTES0: This register contains attributes of Bliteng. They are not parameters since they cannot be easily changed, however here we still have them to provide some static status on design. */
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0 0x0000006cU
/* SLICEHEIGHT: Returns the slice height mode minus one. */
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_SLICEHEIGHT_FSHIFT 0U
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_SLICEHEIGHT_FMASK 0xfU
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_GET_SLICEHEIGHT(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_BLITENGCFG_GET_SLICEHEIGHT(s) ((((s)->designattributes0) ) & 0xfUL)
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_SLICEHEIGHT_RESET 0x7U

/* PROCESSINGPIPELINES: Returns the maximum number of pixel processing pipelines LBO mode minus one. */
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_PROCESSINGPIPELINES_FSHIFT 8U
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_PROCESSINGPIPELINES_FMASK 0x7U
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_GET_PROCESSINGPIPELINES(val) (((CYGFX_U32)(val) >> 8U) & 0x7UL)
#define GFXREG_BLITENGCFG_GET_PROCESSINGPIPELINES(s) ((((s)->designattributes0) >> 8U) & 0x7UL)
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_PROCESSINGPIPELINES_RESET 0x2U

/* SLICEWIDTH: Returns the maximum width that can be rendered in LBO mode minus one. */
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_SLICEWIDTH_FSHIFT 16U
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_SLICEWIDTH_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_GET_SLICEWIDTH(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_SLICEWIDTH(s) ((((s)->designattributes0) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES0_SLICEWIDTH_RESET 1599U

/* DESIGNATTRIBUTES1: This register contains attributes of Bliteng. They are not parameters since they cannot be easily changed, however here we still have them to provide some static status on design. */
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES1 0x00000070U
/* GPSCALERWIDTH: Returns the maximum width that can be rendered in LBO mode minus one. */
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES1_GPSCALERWIDTH_FSHIFT 0U
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES1_GPSCALERWIDTH_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES1_GET_GPSCALERWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_GPSCALERWIDTH(s) ((((s)->designattributes1) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_DESIGNATTRIBUTES1_GPSCALERWIDTH_RESET 1599U

/* CLOCKCOUNTER: One of Clock Counter registers. */
#define GFXREG_BLITENGCFG_CLOCKCOUNTER 0x00000074U
/* CLOCKCOUNTER: The internal clock counter is incremented with each 16th clock cycle if any of the measurements are activated. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_CLOCKCOUNTER_CLOCKCOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_CLOCKCOUNTER_CLOCKCOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_CLOCKCOUNTER_GET_CLOCKCOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_CLOCKCOUNTER(s) ((((s)->clockcounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_CLOCKCOUNTER_CLOCKCOUNTER_RESET (none)U

/* CLOCKCOUNTEROVERFLOW: One of Clock Counter registers. */
#define GFXREG_BLITENGCFG_CLOCKCOUNTEROVERFLOW 0x00000078U
/* CLOCKCOUNTEROVERFLOW: This bit is set if ClockCounter overflows. */
#define GFXREG_BLITENGCFG_CLOCKCOUNTEROVERFLOW_CLOCKCOUNTEROVERFLOW_FSHIFT 0U
#define GFXREG_BLITENGCFG_CLOCKCOUNTEROVERFLOW_CLOCKCOUNTEROVERFLOW_FMASK 0x1U
#define GFXREG_BLITENGCFG_CLOCKCOUNTEROVERFLOW_GET_CLOCKCOUNTEROVERFLOW(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_CLOCKCOUNTEROVERFLOW(s) ((((s)->clockcounteroverflow) ) & 0x1UL)
#define GFXREG_BLITENGCFG_CLOCKCOUNTEROVERFLOW_CLOCKCOUNTEROVERFLOW_RESET (none)U

/* IBOACTIVECOUNTER: One of BlitEng Utilization Measurement registers. */
#define GFXREG_BLITENGCFG_IBOACTIVECOUNTER 0x0000007cU
/* IBOACTIVECOUNTER: The internal LBO counter is incremented with each 16th clock cycle when BlitEng is executing IBO operation and when BlitEngUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_IBOACTIVECOUNTER_IBOACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_IBOACTIVECOUNTER_IBOACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_IBOACTIVECOUNTER_GET_IBOACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_IBOACTIVECOUNTER(s) ((((s)->iboactivecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_IBOACTIVECOUNTER_IBOACTIVECOUNTER_RESET (none)U

/* LBOACTIVECOUNTER: One of BlitEng Utilization Measurement registers. */
#define GFXREG_BLITENGCFG_LBOACTIVECOUNTER 0x00000080U
/* LBOACTIVECOUNTER: The internal LBO counter is incremented with each 16th clock cycle when BlitEng is executing LBO operation and when BlitEngUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_LBOACTIVECOUNTER_LBOACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBOACTIVECOUNTER_LBOACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_LBOACTIVECOUNTER_GET_LBOACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_LBOACTIVECOUNTER(s) ((((s)->lboactivecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_LBOACTIVECOUNTER_LBOACTIVECOUNTER_RESET (none)U

/* LBOALLFETCHESACTIVECOUNTER: One of the LBO utilization measurement registers. */
#define GFXREG_BLITENGCFG_LBOALLFETCHESACTIVECOUNTER 0x00000084U
/* LBOALLFETCHESACTIVECOUNTER: The internal counter is incremented with each 16th clock when all source fetch pipelines are active. Only active in LBO and when LBOUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_LBOALLFETCHESACTIVECOUNTER_LBOALLFETCHESACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBOALLFETCHESACTIVECOUNTER_LBOALLFETCHESACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_LBOALLFETCHESACTIVECOUNTER_GET_LBOALLFETCHESACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_LBOALLFETCHESACTIVECOUNTER(s) ((((s)->lboallfetchesactivecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_LBOALLFETCHESACTIVECOUNTER_LBOALLFETCHESACTIVECOUNTER_RESET (none)U

/* LBOWAITBLITENGRESSOURCESCOUNTER: One of the LBO utilization measurement registers. */
#define GFXREG_BLITENGCFG_LBOWAITBLITENGRESSOURCESCOUNTER 0x00000088U
/* LBOWAITBLITENGRESSOURCESCOUNTER: The internal counter is incremented with each 16th clock when the operation has been triggered but is waiting for BlitEng ressources. Only active in LBO and when LBOUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_LBOWAITBLITENGRESSOURCESCOUNTER_LBOWAITBLITENGRESSOURCESCOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBOWAITBLITENGRESSOURCESCOUNTER_LBOWAITBLITENGRESSOURCESCOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_LBOWAITBLITENGRESSOURCESCOUNTER_GET_LBOWAITBLITENGRESSOURCESCOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_LBOWAITBLITENGRESSOURCESCOUNTER(s) ((((s)->lbowaitblitengressourcescounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_LBOWAITBLITENGRESSOURCESCOUNTER_LBOWAITBLITENGRESSOURCESCOUNTER_RESET (none)U

/* TB0ACTIVECOUNTER: One of the TB utilization measurement registers. Since TB operations may be overlapping the sum of all TB utilization measurement registers may be higher than clock counter */
#define GFXREG_BLITENGCFG_TB0ACTIVECOUNTER 0x0000008cU
/* TB0ACTIVECOUNTER: The internal counter is incremented with each 16th clock when there is any ongoing blit operation programmed via TB0. Only active when TBUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_TB0ACTIVECOUNTER_TB0ACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_TB0ACTIVECOUNTER_TB0ACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_TB0ACTIVECOUNTER_GET_TB0ACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_TB0ACTIVECOUNTER(s) ((((s)->tb0activecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_TB0ACTIVECOUNTER_TB0ACTIVECOUNTER_RESET (none)U

/* TB1ACTIVECOUNTER: One of the TB utilization measurement registers. Since TB operations may be overlapping the sum of all TB utilization measurement registers may be higher than clock counter */
#define GFXREG_BLITENGCFG_TB1ACTIVECOUNTER 0x00000090U
/* TB1ACTIVECOUNTER: The internal counter is incremented with each 16th clock when there is any ongoing blit operation programmed via TB1. Only active when TBUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_TB1ACTIVECOUNTER_TB1ACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_TB1ACTIVECOUNTER_TB1ACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_TB1ACTIVECOUNTER_GET_TB1ACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_TB1ACTIVECOUNTER(s) ((((s)->tb1activecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_TB1ACTIVECOUNTER_TB1ACTIVECOUNTER_RESET (none)U

/* TB2ACTIVECOUNTER: One of the TB utilization measurement registers. Since TB operations may be overlapping the sum of all TB utilization measurement registers may be higher than clock counter */
#define GFXREG_BLITENGCFG_TB2ACTIVECOUNTER 0x00000094U
/* TB2ACTIVECOUNTER: The internal counter is incremented with each 16th clock when there is any ongoing blit operation programmed via TB2. Only active when TBUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_TB2ACTIVECOUNTER_TB2ACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_TB2ACTIVECOUNTER_TB2ACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_TB2ACTIVECOUNTER_GET_TB2ACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_TB2ACTIVECOUNTER(s) ((((s)->tb2activecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_TB2ACTIVECOUNTER_TB2ACTIVECOUNTER_RESET (none)U

/* TB3ACTIVECOUNTER: One of the TB utilization measurement registers. Since TB operations may be overlapping the sum of all TB utilization measurement registers may be higher than clock counter */
#define GFXREG_BLITENGCFG_TB3ACTIVECOUNTER 0x00000098U
/* TB3ACTIVECOUNTER: The internal counter is incremented with each 16th clock when there is any ongoing blit operation programmed via TB3. Only active when TBUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_TB3ACTIVECOUNTER_TB3ACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_TB3ACTIVECOUNTER_TB3ACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_TB3ACTIVECOUNTER_GET_TB3ACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_TB3ACTIVECOUNTER(s) ((((s)->tb3activecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_TB3ACTIVECOUNTER_TB3ACTIVECOUNTER_RESET (none)U

/* TB4ACTIVECOUNTER: One of the TB utilization measurement registers. Since TB operations may be overlapping the sum of all TB utilization measurement registers may be higher than clock counter */
#define GFXREG_BLITENGCFG_TB4ACTIVECOUNTER 0x0000009cU
/* TB4ACTIVECOUNTER: The internal counter is incremented with each 16th clock when there is any ongoing blit operation programmed via TB4. Only active when TBUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_TB4ACTIVECOUNTER_TB4ACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_TB4ACTIVECOUNTER_TB4ACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_TB4ACTIVECOUNTER_GET_TB4ACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_TB4ACTIVECOUNTER(s) ((((s)->tb4activecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_TB4ACTIVECOUNTER_TB4ACTIVECOUNTER_RESET (none)U

/* TB5ACTIVECOUNTER: One of the TB utilization measurement registers. Since TB operations may be overlapping the sum of all TB utilization measurement registers may be higher than clock counter */
#define GFXREG_BLITENGCFG_TB5ACTIVECOUNTER 0x000000a0U
/* TB5ACTIVECOUNTER: The internal counter is incremented with each 16th clock when there is any ongoing blit operation programmed via TB5. Only active when TBUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_TB5ACTIVECOUNTER_TB5ACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_TB5ACTIVECOUNTER_TB5ACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_TB5ACTIVECOUNTER_GET_TB5ACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_TB5ACTIVECOUNTER(s) ((((s)->tb5activecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_TB5ACTIVECOUNTER_TB5ACTIVECOUNTER_RESET (none)U

/* TB6ACTIVECOUNTER: One of the TB utilization measurement registers. Since TB operations may be overlapping the sum of all TB utilization measurement registers may be higher than clock counter */
#define GFXREG_BLITENGCFG_TB6ACTIVECOUNTER 0x000000a4U
/* TB6ACTIVECOUNTER: The internal counter is incremented with each 16th clock when there is any ongoing blit operation programmed via TB6. Only active when TBUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_TB6ACTIVECOUNTER_TB6ACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_TB6ACTIVECOUNTER_TB6ACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_TB6ACTIVECOUNTER_GET_TB6ACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_TB6ACTIVECOUNTER(s) ((((s)->tb6activecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_TB6ACTIVECOUNTER_TB6ACTIVECOUNTER_RESET (none)U

/* TB7ACTIVECOUNTER: One of the TB utilization measurement registers. Since TB operations may be overlapping the sum of all TB utilization measurement registers may be higher than clock counter */
#define GFXREG_BLITENGCFG_TB7ACTIVECOUNTER 0x000000a8U
/* TB7ACTIVECOUNTER: The internal counter is incremented with each 16th clock when there is any ongoing blit operation programmed via TB7. Only active when TBUtilizationMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_TB7ACTIVECOUNTER_TB7ACTIVECOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_TB7ACTIVECOUNTER_TB7ACTIVECOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_TB7ACTIVECOUNTER_GET_TB7ACTIVECOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_TB7ACTIVECOUNTER(s) ((((s)->tb7activecounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_TB7ACTIVECOUNTER_TB7ACTIVECOUNTER_RESET (none)U

/* LBOSOURCEPIXELRGBACOUNTER: RGBA source pixel counter for LBO mode */
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELRGBACOUNTER 0x000000acU
/* LBOSOURCEPIXELRGBACOUNTER: Provides the number of processed source RGBA pixels which should be multiplied by 256. Only active in LBO and when LBOSourcePixelMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELRGBACOUNTER_LBOSOURCEPIXELRGBACOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELRGBACOUNTER_LBOSOURCEPIXELRGBACOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELRGBACOUNTER_GET_LBOSOURCEPIXELRGBACOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_LBOSOURCEPIXELRGBACOUNTER(s) ((((s)->lbosourcepixelrgbacounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELRGBACOUNTER_LBOSOURCEPIXELRGBACOUNTER_RESET (none)U

/* LBOSOURCEPIXELALPHACOUNTER: Alpha source pixel counter for LBO mode */
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELALPHACOUNTER 0x000000b0U
/* LBOSOURCEPIXELALPHACOUNTER: Provides the number of processed source alpha pixels which should be multiplied by 256. Only active in LBO and when LBOSourcePixelMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELALPHACOUNTER_LBOSOURCEPIXELALPHACOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELALPHACOUNTER_LBOSOURCEPIXELALPHACOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELALPHACOUNTER_GET_LBOSOURCEPIXELALPHACOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_LBOSOURCEPIXELALPHACOUNTER(s) ((((s)->lbosourcepixelalphacounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_LBOSOURCEPIXELALPHACOUNTER_LBOSOURCEPIXELALPHACOUNTER_RESET (none)U

/* LBODESTINATIONPIXELCOUNTER: Destination pixel counter for LBO mode */
#define GFXREG_BLITENGCFG_LBODESTINATIONPIXELCOUNTER 0x000000b4U
/* LBODESTINATIONPIXELCOUNTER: Provides the number of processed destination pixels which should be multiplied by 32. In the case of odd width this counter counts one more pixel per line compared to the actual number of pixels. Only active in LBO and when DestinationPixelMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_LBODESTINATIONPIXELCOUNTER_LBODESTINATIONPIXELCOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBODESTINATIONPIXELCOUNTER_LBODESTINATIONPIXELCOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_LBODESTINATIONPIXELCOUNTER_GET_LBODESTINATIONPIXELCOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_LBODESTINATIONPIXELCOUNTER(s) ((((s)->lbodestinationpixelcounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_LBODESTINATIONPIXELCOUNTER_LBODESTINATIONPIXELCOUNTER_RESET (none)U

/* IBODESTINATIONPIXELCOUNTER: Destination pixel counter for IBO mode */
#define GFXREG_BLITENGCFG_IBODESTINATIONPIXELCOUNTER 0x000000b8U
/* IBODESTINATIONPIXELCOUNTER: Provides the number of processed destination pixels which should be multiplied by 16. Only active in IBO and when DestinationPixelMeasurementEn is set. This field is updated with SaveAndResetMeasurements pulse and internal counter is reset. */
#define GFXREG_BLITENGCFG_IBODESTINATIONPIXELCOUNTER_IBODESTINATIONPIXELCOUNTER_FSHIFT 0U
#define GFXREG_BLITENGCFG_IBODESTINATIONPIXELCOUNTER_IBODESTINATIONPIXELCOUNTER_FMASK 0xffffffffU
#define GFXREG_BLITENGCFG_IBODESTINATIONPIXELCOUNTER_GET_IBODESTINATIONPIXELCOUNTER(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_GET_IBODESTINATIONPIXELCOUNTER(s) ((((s)->ibodestinationpixelcounter) ) & 0xffffffffUL)
#define GFXREG_BLITENGCFG_IBODESTINATIONPIXELCOUNTER_IBODESTINATIONPIXELCOUNTER_RESET (none)U



/* LBHLINK0BUFFERCONFIG0: Line buffer configuration register 0. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0 0x00000200U
/* LBHLINK0ENABLE: Activates the line-buffer handshake, i.e. will stall the store or the display fetch upon respective condition. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_LBHLINK0ENABLE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_LBHLINK0ENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_SETM_LBHLINK0ENABLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_SET_LBHLINK0ENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_GET_LBHLINK0ENABLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK0ENABLE(s,val) ( (s)->lbhlink0bufferconfig0 = ((s)->lbhlink0bufferconfig0 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK0ENABLE(s,val)  ( (s)->lbhlink0bufferconfig0 = (((s)->lbhlink0bufferconfig0 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK0ENABLE(s) ((((s)->lbhlink0bufferconfig0) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_LBHLINK0ENABLE_RESET 0U

/* LBHLINK0SIZEENABLE: Activates the ring buffer usage. This signal will be provided to the fetch and the store. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_LBHLINK0SIZEENABLE_FSHIFT 4U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_LBHLINK0SIZEENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_SETM_LBHLINK0SIZEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_SET_LBHLINK0SIZEENABLE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_GET_LBHLINK0SIZEENABLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK0SIZEENABLE(s,val) ( (s)->lbhlink0bufferconfig0 = ((s)->lbhlink0bufferconfig0 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK0SIZEENABLE(s,val)  ( (s)->lbhlink0bufferconfig0 = (((s)->lbhlink0bufferconfig0 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK0SIZEENABLE(s) ((((s)->lbhlink0bufferconfig0) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_LBHLINK0SIZEENABLE_RESET 0U

/* LBHLINK0BUFLINES: The number of lines in the line buffer in power of two. Max supported number of lines in ringbuffer is 16384 (14pow2=16384). Programming 15 results also in 16384 lines. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_LBHLINK0BUFLINES_FSHIFT 8U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_LBHLINK0BUFLINES_FMASK 0xfU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_SETM_LBHLINK0BUFLINES(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_SET_LBHLINK0BUFLINES(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_GET_LBHLINK0BUFLINES(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK0BUFLINES(s,val) ( (s)->lbhlink0bufferconfig0 = ((s)->lbhlink0bufferconfig0 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK0BUFLINES(s,val)  ( (s)->lbhlink0bufferconfig0 = (((s)->lbhlink0bufferconfig0 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK0BUFLINES(s) ((((s)->lbhlink0bufferconfig0) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG0_LBHLINK0BUFLINES_RESET 0U

/* LBHLINK0BUFFERCONFIG1: Line buffer configuration register 1. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1 0x00000204U
/* LBHLINK0FRAMELINES: Height of the frame (programmed with -1). This setting must be identical to the display fetch and BlitEng value. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_LBHLINK0FRAMELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_LBHLINK0FRAMELINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_SETM_LBHLINK0FRAMELINES(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_SET_LBHLINK0FRAMELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_GET_LBHLINK0FRAMELINES(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK0FRAMELINES(s,val) ( (s)->lbhlink0bufferconfig1 = ((s)->lbhlink0bufferconfig1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK0FRAMELINES(s,val)  ( (s)->lbhlink0bufferconfig1 = (((s)->lbhlink0bufferconfig1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK0FRAMELINES(s) ((((s)->lbhlink0bufferconfig1) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_LBHLINK0FRAMELINES_RESET 0U

/* LBHLINK0KEEPLINES: Number of lines to keep in the line buffer even if the display fetch is already beyond this line. Required for re-sampling operations that span over several input lines. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_LBHLINK0KEEPLINES_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_LBHLINK0KEEPLINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_SETM_LBHLINK0KEEPLINES(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_SET_LBHLINK0KEEPLINES(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_GET_LBHLINK0KEEPLINES(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK0KEEPLINES(s,val) ( (s)->lbhlink0bufferconfig1 = ((s)->lbhlink0bufferconfig1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK0KEEPLINES(s,val)  ( (s)->lbhlink0bufferconfig1 = (((s)->lbhlink0bufferconfig1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK0KEEPLINES(s) ((((s)->lbhlink0bufferconfig1) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERCONFIG1_LBHLINK0KEEPLINES_RESET 0U

/* LBHLINK0BUFFERSTATUS0: Buffer status register 0 for the line buffer handshake. Writing to this register has no effect, reading provides the value and simultaneously resets the internal register. The value provided after the first read or if LBH is inactive is not valid. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0 0x00000208U
/* LBHLINK0MAXFREELINES: The maximal number of free lines in the line buffer that can be scheduled by CmdSeq. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_LBHLINK0MAXFREELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_LBHLINK0MAXFREELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_SETM_LBHLINK0MAXFREELINES(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_SET_LBHLINK0MAXFREELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_GET_LBHLINK0MAXFREELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK0MAXFREELINES(s,val) ( (s)->lbhlink0bufferstatus0 = ((s)->lbhlink0bufferstatus0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK0MAXFREELINES(s,val)  ( (s)->lbhlink0bufferstatus0 = (((s)->lbhlink0bufferstatus0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK0MAXFREELINES(s) ((((s)->lbhlink0bufferstatus0) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_LBHLINK0MAXFREELINES_RESET 0U

/* LBHLINK0MAXFREELINESSTORE: The maximal number of free lines in the line buffer that can be written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_LBHLINK0MAXFREELINESSTORE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_LBHLINK0MAXFREELINESSTORE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_SETM_LBHLINK0MAXFREELINESSTORE(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_SET_LBHLINK0MAXFREELINESSTORE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_GET_LBHLINK0MAXFREELINESSTORE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK0MAXFREELINESSTORE(s,val) ( (s)->lbhlink0bufferstatus0 = ((s)->lbhlink0bufferstatus0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK0MAXFREELINESSTORE(s,val)  ( (s)->lbhlink0bufferstatus0 = (((s)->lbhlink0bufferstatus0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK0MAXFREELINESSTORE(s) ((((s)->lbhlink0bufferstatus0) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS0_LBHLINK0MAXFREELINESSTORE_RESET 0U

/* LBHLINK0BUFFERSTATUS1: Buffer status register 1 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS1 0x0000020cU
/* LBHLINK0AVAILABLELINES: The number of lines in the line buffer that the store can write. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS1_LBHLINK0AVAILABLELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS1_LBHLINK0AVAILABLELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS1_GET_LBHLINK0AVAILABLELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK0AVAILABLELINES(s) ((((s)->lbhlink0bufferstatus1) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS1_LBHLINK0AVAILABLELINES_RESET 1U

/* LBHLINK0SAMEFRAME: This status bit indicates if the fetch and the store are processing the same frame. If this bit is zero the store has already switched to the next frame */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS1_LBHLINK0SAMEFRAME_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS1_LBHLINK0SAMEFRAME_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS1_GET_LBHLINK0SAMEFRAME(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK0SAMEFRAME(s) ((((s)->lbhlink0bufferstatus1) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS1_LBHLINK0SAMEFRAME_RESET 1U

/* LBHLINK0BUFFERSTATUS2: reserved not to switch address map. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS2 0x00000210U
/* LBHLINK0BUFFERREADYCYCLES: no functionality */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS2_LBHLINK0BUFFERREADYCYCLES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS2_LBHLINK0BUFFERREADYCYCLES_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS2_GET_LBHLINK0BUFFERREADYCYCLES(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK0BUFFERREADYCYCLES(s) ((((s)->lbhlink0bufferstatus2) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS2_LBHLINK0BUFFERREADYCYCLES_RESET (none)U

/* LBHLINK0BUFFERSTATUS3: Buffer status register 3 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS3 0x00000214U
/* LBHLINK0FETCHLINE: This field describes the line currently read by the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS3_LBHLINK0FETCHLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS3_LBHLINK0FETCHLINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS3_GET_LBHLINK0FETCHLINE(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK0FETCHLINE(s) ((((s)->lbhlink0bufferstatus3) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS3_LBHLINK0FETCHLINE_RESET (none)U

/* LBHLINK0STORELINE: This field describes the line currently written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS3_LBHLINK0STORELINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS3_LBHLINK0STORELINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS3_GET_LBHLINK0STORELINE(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK0STORELINE(s) ((((s)->lbhlink0bufferstatus3) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS3_LBHLINK0STORELINE_RESET (none)U

/* LBHLINK0BUFFERSTATUS4: Buffer status register 4 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS4 0x00000218U
/* LBHLINK0FETCHSTOPLINE: This field describes the stopline of the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS4_LBHLINK0FETCHSTOPLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS4_LBHLINK0FETCHSTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS4_GET_LBHLINK0FETCHSTOPLINE(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK0FETCHSTOPLINE(s) ((((s)->lbhlink0bufferstatus4) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS4_LBHLINK0FETCHSTOPLINE_RESET (none)U

/* LBHLINK0STORESTOPLINE: This field describes the stopline of the store. */
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS4_LBHLINK0STORESTOPLINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS4_LBHLINK0STORESTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS4_GET_LBHLINK0STORESTOPLINE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK0STORESTOPLINE(s) ((((s)->lbhlink0bufferstatus4) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK0BUFFERSTATUS4_LBHLINK0STORESTOPLINE_RESET (none)U



/* LBHLINK1BUFFERCONFIG0: Line buffer configuration register 0. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0 0x00000240U
/* LBHLINK1ENABLE: Activates the line-buffer handshake, i.e. will stall the store or the display fetch upon respective condition. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_LBHLINK1ENABLE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_LBHLINK1ENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_SETM_LBHLINK1ENABLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_SET_LBHLINK1ENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_GET_LBHLINK1ENABLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK1ENABLE(s,val) ( (s)->lbhlink1bufferconfig0 = ((s)->lbhlink1bufferconfig0 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK1ENABLE(s,val)  ( (s)->lbhlink1bufferconfig0 = (((s)->lbhlink1bufferconfig0 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK1ENABLE(s) ((((s)->lbhlink1bufferconfig0) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_LBHLINK1ENABLE_RESET 0U

/* LBHLINK1SIZEENABLE: Activates the ring buffer usage. This signal will be provided to the fetch and the store. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_LBHLINK1SIZEENABLE_FSHIFT 4U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_LBHLINK1SIZEENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_SETM_LBHLINK1SIZEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_SET_LBHLINK1SIZEENABLE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_GET_LBHLINK1SIZEENABLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK1SIZEENABLE(s,val) ( (s)->lbhlink1bufferconfig0 = ((s)->lbhlink1bufferconfig0 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK1SIZEENABLE(s,val)  ( (s)->lbhlink1bufferconfig0 = (((s)->lbhlink1bufferconfig0 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK1SIZEENABLE(s) ((((s)->lbhlink1bufferconfig0) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_LBHLINK1SIZEENABLE_RESET 0U

/* LBHLINK1BUFLINES: The number of lines in the line buffer in power of two. Max supported number of lines in ringbuffer is 16384 (14pow2=16384). Programming 15 results also in 16384 lines. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_LBHLINK1BUFLINES_FSHIFT 8U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_LBHLINK1BUFLINES_FMASK 0xfU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_SETM_LBHLINK1BUFLINES(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_SET_LBHLINK1BUFLINES(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_GET_LBHLINK1BUFLINES(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK1BUFLINES(s,val) ( (s)->lbhlink1bufferconfig0 = ((s)->lbhlink1bufferconfig0 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK1BUFLINES(s,val)  ( (s)->lbhlink1bufferconfig0 = (((s)->lbhlink1bufferconfig0 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK1BUFLINES(s) ((((s)->lbhlink1bufferconfig0) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG0_LBHLINK1BUFLINES_RESET 0U

/* LBHLINK1BUFFERCONFIG1: Line buffer configuration register 1. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1 0x00000244U
/* LBHLINK1FRAMELINES: Height of the frame (programmed with -1). This setting must be identical to the display fetch and BlitEng value. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_LBHLINK1FRAMELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_LBHLINK1FRAMELINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_SETM_LBHLINK1FRAMELINES(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_SET_LBHLINK1FRAMELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_GET_LBHLINK1FRAMELINES(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK1FRAMELINES(s,val) ( (s)->lbhlink1bufferconfig1 = ((s)->lbhlink1bufferconfig1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK1FRAMELINES(s,val)  ( (s)->lbhlink1bufferconfig1 = (((s)->lbhlink1bufferconfig1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK1FRAMELINES(s) ((((s)->lbhlink1bufferconfig1) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_LBHLINK1FRAMELINES_RESET 0U

/* LBHLINK1KEEPLINES: Number of lines to keep in the line buffer even if the display fetch is already beyond this line. Required for re-sampling operations that span over several input lines. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_LBHLINK1KEEPLINES_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_LBHLINK1KEEPLINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_SETM_LBHLINK1KEEPLINES(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_SET_LBHLINK1KEEPLINES(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_GET_LBHLINK1KEEPLINES(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK1KEEPLINES(s,val) ( (s)->lbhlink1bufferconfig1 = ((s)->lbhlink1bufferconfig1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK1KEEPLINES(s,val)  ( (s)->lbhlink1bufferconfig1 = (((s)->lbhlink1bufferconfig1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK1KEEPLINES(s) ((((s)->lbhlink1bufferconfig1) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERCONFIG1_LBHLINK1KEEPLINES_RESET 0U

/* LBHLINK1BUFFERSTATUS0: Buffer status register 0 for the line buffer handshake. Writing to this register has no effect, reading provides the value and simultaneously resets the internal register. The value provided after the first read or if LBH is inactive is not valid. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0 0x00000248U
/* LBHLINK1MAXFREELINES: The maximal number of free lines in the line buffer that can be scheduled by CmdSeq. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_LBHLINK1MAXFREELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_LBHLINK1MAXFREELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_SETM_LBHLINK1MAXFREELINES(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_SET_LBHLINK1MAXFREELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_GET_LBHLINK1MAXFREELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK1MAXFREELINES(s,val) ( (s)->lbhlink1bufferstatus0 = ((s)->lbhlink1bufferstatus0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK1MAXFREELINES(s,val)  ( (s)->lbhlink1bufferstatus0 = (((s)->lbhlink1bufferstatus0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK1MAXFREELINES(s) ((((s)->lbhlink1bufferstatus0) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_LBHLINK1MAXFREELINES_RESET 0U

/* LBHLINK1MAXFREELINESSTORE: The maximal number of free lines in the line buffer that can be written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_LBHLINK1MAXFREELINESSTORE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_LBHLINK1MAXFREELINESSTORE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_SETM_LBHLINK1MAXFREELINESSTORE(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_SET_LBHLINK1MAXFREELINESSTORE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_GET_LBHLINK1MAXFREELINESSTORE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK1MAXFREELINESSTORE(s,val) ( (s)->lbhlink1bufferstatus0 = ((s)->lbhlink1bufferstatus0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK1MAXFREELINESSTORE(s,val)  ( (s)->lbhlink1bufferstatus0 = (((s)->lbhlink1bufferstatus0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK1MAXFREELINESSTORE(s) ((((s)->lbhlink1bufferstatus0) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS0_LBHLINK1MAXFREELINESSTORE_RESET 0U

/* LBHLINK1BUFFERSTATUS1: Buffer status register 1 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS1 0x0000024cU
/* LBHLINK1AVAILABLELINES: The number of lines in the line buffer that the store can write. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS1_LBHLINK1AVAILABLELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS1_LBHLINK1AVAILABLELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS1_GET_LBHLINK1AVAILABLELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK1AVAILABLELINES(s) ((((s)->lbhlink1bufferstatus1) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS1_LBHLINK1AVAILABLELINES_RESET 1U

/* LBHLINK1SAMEFRAME: This status bit indicates if the fetch and the store are processing the same frame. If this bit is zero the store has already switched to the next frame */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS1_LBHLINK1SAMEFRAME_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS1_LBHLINK1SAMEFRAME_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS1_GET_LBHLINK1SAMEFRAME(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK1SAMEFRAME(s) ((((s)->lbhlink1bufferstatus1) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS1_LBHLINK1SAMEFRAME_RESET 1U

/* LBHLINK1BUFFERSTATUS2: reserved not to switch address map. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS2 0x00000250U
/* LBHLINK1BUFFERREADYCYCLES: no functionality */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS2_LBHLINK1BUFFERREADYCYCLES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS2_LBHLINK1BUFFERREADYCYCLES_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS2_GET_LBHLINK1BUFFERREADYCYCLES(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK1BUFFERREADYCYCLES(s) ((((s)->lbhlink1bufferstatus2) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS2_LBHLINK1BUFFERREADYCYCLES_RESET (none)U

/* LBHLINK1BUFFERSTATUS3: Buffer status register 3 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS3 0x00000254U
/* LBHLINK1FETCHLINE: This field describes the line currently read by the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS3_LBHLINK1FETCHLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS3_LBHLINK1FETCHLINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS3_GET_LBHLINK1FETCHLINE(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK1FETCHLINE(s) ((((s)->lbhlink1bufferstatus3) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS3_LBHLINK1FETCHLINE_RESET (none)U

/* LBHLINK1STORELINE: This field describes the line currently written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS3_LBHLINK1STORELINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS3_LBHLINK1STORELINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS3_GET_LBHLINK1STORELINE(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK1STORELINE(s) ((((s)->lbhlink1bufferstatus3) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS3_LBHLINK1STORELINE_RESET (none)U

/* LBHLINK1BUFFERSTATUS4: Buffer status register 4 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS4 0x00000258U
/* LBHLINK1FETCHSTOPLINE: This field describes the stopline of the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS4_LBHLINK1FETCHSTOPLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS4_LBHLINK1FETCHSTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS4_GET_LBHLINK1FETCHSTOPLINE(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK1FETCHSTOPLINE(s) ((((s)->lbhlink1bufferstatus4) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS4_LBHLINK1FETCHSTOPLINE_RESET (none)U

/* LBHLINK1STORESTOPLINE: This field describes the stopline of the store. */
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS4_LBHLINK1STORESTOPLINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS4_LBHLINK1STORESTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS4_GET_LBHLINK1STORESTOPLINE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK1STORESTOPLINE(s) ((((s)->lbhlink1bufferstatus4) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK1BUFFERSTATUS4_LBHLINK1STORESTOPLINE_RESET (none)U



/* LBHLINK2BUFFERCONFIG0: Line buffer configuration register 0. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0 0x00000280U
/* LBHLINK2ENABLE: Activates the line-buffer handshake, i.e. will stall the store or the display fetch upon respective condition. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_LBHLINK2ENABLE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_LBHLINK2ENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_SETM_LBHLINK2ENABLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_SET_LBHLINK2ENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_GET_LBHLINK2ENABLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK2ENABLE(s,val) ( (s)->lbhlink2bufferconfig0 = ((s)->lbhlink2bufferconfig0 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK2ENABLE(s,val)  ( (s)->lbhlink2bufferconfig0 = (((s)->lbhlink2bufferconfig0 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK2ENABLE(s) ((((s)->lbhlink2bufferconfig0) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_LBHLINK2ENABLE_RESET 0U

/* LBHLINK2SIZEENABLE: Activates the ring buffer usage. This signal will be provided to the fetch and the store. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_LBHLINK2SIZEENABLE_FSHIFT 4U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_LBHLINK2SIZEENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_SETM_LBHLINK2SIZEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_SET_LBHLINK2SIZEENABLE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_GET_LBHLINK2SIZEENABLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK2SIZEENABLE(s,val) ( (s)->lbhlink2bufferconfig0 = ((s)->lbhlink2bufferconfig0 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK2SIZEENABLE(s,val)  ( (s)->lbhlink2bufferconfig0 = (((s)->lbhlink2bufferconfig0 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK2SIZEENABLE(s) ((((s)->lbhlink2bufferconfig0) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_LBHLINK2SIZEENABLE_RESET 0U

/* LBHLINK2BUFLINES: The number of lines in the line buffer in power of two. Max supported number of lines in ringbuffer is 16384 (14pow2=16384). Programming 15 results also in 16384 lines. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_LBHLINK2BUFLINES_FSHIFT 8U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_LBHLINK2BUFLINES_FMASK 0xfU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_SETM_LBHLINK2BUFLINES(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_SET_LBHLINK2BUFLINES(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_GET_LBHLINK2BUFLINES(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK2BUFLINES(s,val) ( (s)->lbhlink2bufferconfig0 = ((s)->lbhlink2bufferconfig0 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK2BUFLINES(s,val)  ( (s)->lbhlink2bufferconfig0 = (((s)->lbhlink2bufferconfig0 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK2BUFLINES(s) ((((s)->lbhlink2bufferconfig0) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG0_LBHLINK2BUFLINES_RESET 0U

/* LBHLINK2BUFFERCONFIG1: Line buffer configuration register 1. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1 0x00000284U
/* LBHLINK2FRAMELINES: Height of the frame (programmed with -1). This setting must be identical to the display fetch and BlitEng value. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_LBHLINK2FRAMELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_LBHLINK2FRAMELINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_SETM_LBHLINK2FRAMELINES(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_SET_LBHLINK2FRAMELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_GET_LBHLINK2FRAMELINES(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK2FRAMELINES(s,val) ( (s)->lbhlink2bufferconfig1 = ((s)->lbhlink2bufferconfig1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK2FRAMELINES(s,val)  ( (s)->lbhlink2bufferconfig1 = (((s)->lbhlink2bufferconfig1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK2FRAMELINES(s) ((((s)->lbhlink2bufferconfig1) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_LBHLINK2FRAMELINES_RESET 0U

/* LBHLINK2KEEPLINES: Number of lines to keep in the line buffer even if the display fetch is already beyond this line. Required for re-sampling operations that span over several input lines. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_LBHLINK2KEEPLINES_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_LBHLINK2KEEPLINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_SETM_LBHLINK2KEEPLINES(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_SET_LBHLINK2KEEPLINES(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_GET_LBHLINK2KEEPLINES(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK2KEEPLINES(s,val) ( (s)->lbhlink2bufferconfig1 = ((s)->lbhlink2bufferconfig1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK2KEEPLINES(s,val)  ( (s)->lbhlink2bufferconfig1 = (((s)->lbhlink2bufferconfig1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK2KEEPLINES(s) ((((s)->lbhlink2bufferconfig1) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERCONFIG1_LBHLINK2KEEPLINES_RESET 0U

/* LBHLINK2BUFFERSTATUS0: Buffer status register 0 for the line buffer handshake. Writing to this register has no effect, reading provides the value and simultaneously resets the internal register. The value provided after the first read or if LBH is inactive is not valid. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0 0x00000288U
/* LBHLINK2MAXFREELINES: The maximal number of free lines in the line buffer that can be scheduled by CmdSeq. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_LBHLINK2MAXFREELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_LBHLINK2MAXFREELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_SETM_LBHLINK2MAXFREELINES(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_SET_LBHLINK2MAXFREELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_GET_LBHLINK2MAXFREELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK2MAXFREELINES(s,val) ( (s)->lbhlink2bufferstatus0 = ((s)->lbhlink2bufferstatus0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK2MAXFREELINES(s,val)  ( (s)->lbhlink2bufferstatus0 = (((s)->lbhlink2bufferstatus0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK2MAXFREELINES(s) ((((s)->lbhlink2bufferstatus0) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_LBHLINK2MAXFREELINES_RESET 0U

/* LBHLINK2MAXFREELINESSTORE: The maximal number of free lines in the line buffer that can be written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_LBHLINK2MAXFREELINESSTORE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_LBHLINK2MAXFREELINESSTORE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_SETM_LBHLINK2MAXFREELINESSTORE(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_SET_LBHLINK2MAXFREELINESSTORE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_GET_LBHLINK2MAXFREELINESSTORE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK2MAXFREELINESSTORE(s,val) ( (s)->lbhlink2bufferstatus0 = ((s)->lbhlink2bufferstatus0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK2MAXFREELINESSTORE(s,val)  ( (s)->lbhlink2bufferstatus0 = (((s)->lbhlink2bufferstatus0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK2MAXFREELINESSTORE(s) ((((s)->lbhlink2bufferstatus0) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS0_LBHLINK2MAXFREELINESSTORE_RESET 0U

/* LBHLINK2BUFFERSTATUS1: Buffer status register 1 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS1 0x0000028cU
/* LBHLINK2AVAILABLELINES: The number of lines in the line buffer that the store can write. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS1_LBHLINK2AVAILABLELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS1_LBHLINK2AVAILABLELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS1_GET_LBHLINK2AVAILABLELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK2AVAILABLELINES(s) ((((s)->lbhlink2bufferstatus1) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS1_LBHLINK2AVAILABLELINES_RESET 1U

/* LBHLINK2SAMEFRAME: This status bit indicates if the fetch and the store are processing the same frame. If this bit is zero the store has already switched to the next frame */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS1_LBHLINK2SAMEFRAME_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS1_LBHLINK2SAMEFRAME_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS1_GET_LBHLINK2SAMEFRAME(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK2SAMEFRAME(s) ((((s)->lbhlink2bufferstatus1) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS1_LBHLINK2SAMEFRAME_RESET 1U

/* LBHLINK2BUFFERSTATUS2: reserved not to switch address map. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS2 0x00000290U
/* LBHLINK2BUFFERREADYCYCLES: no functionality */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS2_LBHLINK2BUFFERREADYCYCLES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS2_LBHLINK2BUFFERREADYCYCLES_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS2_GET_LBHLINK2BUFFERREADYCYCLES(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK2BUFFERREADYCYCLES(s) ((((s)->lbhlink2bufferstatus2) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS2_LBHLINK2BUFFERREADYCYCLES_RESET (none)U

/* LBHLINK2BUFFERSTATUS3: Buffer status register 3 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS3 0x00000294U
/* LBHLINK2FETCHLINE: This field describes the line currently read by the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS3_LBHLINK2FETCHLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS3_LBHLINK2FETCHLINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS3_GET_LBHLINK2FETCHLINE(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK2FETCHLINE(s) ((((s)->lbhlink2bufferstatus3) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS3_LBHLINK2FETCHLINE_RESET (none)U

/* LBHLINK2STORELINE: This field describes the line currently written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS3_LBHLINK2STORELINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS3_LBHLINK2STORELINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS3_GET_LBHLINK2STORELINE(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK2STORELINE(s) ((((s)->lbhlink2bufferstatus3) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS3_LBHLINK2STORELINE_RESET (none)U

/* LBHLINK2BUFFERSTATUS4: Buffer status register 4 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS4 0x00000298U
/* LBHLINK2FETCHSTOPLINE: This field describes the stopline of the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS4_LBHLINK2FETCHSTOPLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS4_LBHLINK2FETCHSTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS4_GET_LBHLINK2FETCHSTOPLINE(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK2FETCHSTOPLINE(s) ((((s)->lbhlink2bufferstatus4) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS4_LBHLINK2FETCHSTOPLINE_RESET (none)U

/* LBHLINK2STORESTOPLINE: This field describes the stopline of the store. */
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS4_LBHLINK2STORESTOPLINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS4_LBHLINK2STORESTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS4_GET_LBHLINK2STORESTOPLINE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK2STORESTOPLINE(s) ((((s)->lbhlink2bufferstatus4) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK2BUFFERSTATUS4_LBHLINK2STORESTOPLINE_RESET (none)U



/* LBHLINK3BUFFERCONFIG0: Line buffer configuration register 0. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0 0x000002c0U
/* LBHLINK3ENABLE: Activates the line-buffer handshake, i.e. will stall the store or the display fetch upon respective condition. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_LBHLINK3ENABLE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_LBHLINK3ENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_SETM_LBHLINK3ENABLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_SET_LBHLINK3ENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_GET_LBHLINK3ENABLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK3ENABLE(s,val) ( (s)->lbhlink3bufferconfig0 = ((s)->lbhlink3bufferconfig0 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK3ENABLE(s,val)  ( (s)->lbhlink3bufferconfig0 = (((s)->lbhlink3bufferconfig0 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK3ENABLE(s) ((((s)->lbhlink3bufferconfig0) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_LBHLINK3ENABLE_RESET 0U

/* LBHLINK3SIZEENABLE: Activates the ring buffer usage. This signal will be provided to the fetch and the store. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_LBHLINK3SIZEENABLE_FSHIFT 4U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_LBHLINK3SIZEENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_SETM_LBHLINK3SIZEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_SET_LBHLINK3SIZEENABLE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_GET_LBHLINK3SIZEENABLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK3SIZEENABLE(s,val) ( (s)->lbhlink3bufferconfig0 = ((s)->lbhlink3bufferconfig0 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK3SIZEENABLE(s,val)  ( (s)->lbhlink3bufferconfig0 = (((s)->lbhlink3bufferconfig0 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK3SIZEENABLE(s) ((((s)->lbhlink3bufferconfig0) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_LBHLINK3SIZEENABLE_RESET 0U

/* LBHLINK3BUFLINES: The number of lines in the line buffer in power of two. Max supported number of lines in ringbuffer is 16384 (14pow2=16384). Programming 15 results also in 16384 lines. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_LBHLINK3BUFLINES_FSHIFT 8U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_LBHLINK3BUFLINES_FMASK 0xfU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_SETM_LBHLINK3BUFLINES(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_SET_LBHLINK3BUFLINES(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_GET_LBHLINK3BUFLINES(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK3BUFLINES(s,val) ( (s)->lbhlink3bufferconfig0 = ((s)->lbhlink3bufferconfig0 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK3BUFLINES(s,val)  ( (s)->lbhlink3bufferconfig0 = (((s)->lbhlink3bufferconfig0 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK3BUFLINES(s) ((((s)->lbhlink3bufferconfig0) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG0_LBHLINK3BUFLINES_RESET 0U

/* LBHLINK3BUFFERCONFIG1: Line buffer configuration register 1. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1 0x000002c4U
/* LBHLINK3FRAMELINES: Height of the frame (programmed with -1). This setting must be identical to the display fetch and BlitEng value. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_LBHLINK3FRAMELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_LBHLINK3FRAMELINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_SETM_LBHLINK3FRAMELINES(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_SET_LBHLINK3FRAMELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_GET_LBHLINK3FRAMELINES(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK3FRAMELINES(s,val) ( (s)->lbhlink3bufferconfig1 = ((s)->lbhlink3bufferconfig1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK3FRAMELINES(s,val)  ( (s)->lbhlink3bufferconfig1 = (((s)->lbhlink3bufferconfig1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK3FRAMELINES(s) ((((s)->lbhlink3bufferconfig1) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_LBHLINK3FRAMELINES_RESET 0U

/* LBHLINK3KEEPLINES: Number of lines to keep in the line buffer even if the display fetch is already beyond this line. Required for re-sampling operations that span over several input lines. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_LBHLINK3KEEPLINES_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_LBHLINK3KEEPLINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_SETM_LBHLINK3KEEPLINES(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_SET_LBHLINK3KEEPLINES(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_GET_LBHLINK3KEEPLINES(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK3KEEPLINES(s,val) ( (s)->lbhlink3bufferconfig1 = ((s)->lbhlink3bufferconfig1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK3KEEPLINES(s,val)  ( (s)->lbhlink3bufferconfig1 = (((s)->lbhlink3bufferconfig1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK3KEEPLINES(s) ((((s)->lbhlink3bufferconfig1) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERCONFIG1_LBHLINK3KEEPLINES_RESET 0U

/* LBHLINK3BUFFERSTATUS0: Buffer status register 0 for the line buffer handshake. Writing to this register has no effect, reading provides the value and simultaneously resets the internal register. The value provided after the first read or if LBH is inactive is not valid. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0 0x000002c8U
/* LBHLINK3MAXFREELINES: The maximal number of free lines in the line buffer that can be scheduled by CmdSeq. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_LBHLINK3MAXFREELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_LBHLINK3MAXFREELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_SETM_LBHLINK3MAXFREELINES(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_SET_LBHLINK3MAXFREELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_GET_LBHLINK3MAXFREELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK3MAXFREELINES(s,val) ( (s)->lbhlink3bufferstatus0 = ((s)->lbhlink3bufferstatus0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK3MAXFREELINES(s,val)  ( (s)->lbhlink3bufferstatus0 = (((s)->lbhlink3bufferstatus0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK3MAXFREELINES(s) ((((s)->lbhlink3bufferstatus0) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_LBHLINK3MAXFREELINES_RESET 0U

/* LBHLINK3MAXFREELINESSTORE: The maximal number of free lines in the line buffer that can be written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_LBHLINK3MAXFREELINESSTORE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_LBHLINK3MAXFREELINESSTORE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_SETM_LBHLINK3MAXFREELINESSTORE(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_SET_LBHLINK3MAXFREELINESSTORE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_GET_LBHLINK3MAXFREELINESSTORE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK3MAXFREELINESSTORE(s,val) ( (s)->lbhlink3bufferstatus0 = ((s)->lbhlink3bufferstatus0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK3MAXFREELINESSTORE(s,val)  ( (s)->lbhlink3bufferstatus0 = (((s)->lbhlink3bufferstatus0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK3MAXFREELINESSTORE(s) ((((s)->lbhlink3bufferstatus0) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS0_LBHLINK3MAXFREELINESSTORE_RESET 0U

/* LBHLINK3BUFFERSTATUS1: Buffer status register 1 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS1 0x000002ccU
/* LBHLINK3AVAILABLELINES: The number of lines in the line buffer that the store can write. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS1_LBHLINK3AVAILABLELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS1_LBHLINK3AVAILABLELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS1_GET_LBHLINK3AVAILABLELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK3AVAILABLELINES(s) ((((s)->lbhlink3bufferstatus1) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS1_LBHLINK3AVAILABLELINES_RESET 1U

/* LBHLINK3SAMEFRAME: This status bit indicates if the fetch and the store are processing the same frame. If this bit is zero the store has already switched to the next frame */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS1_LBHLINK3SAMEFRAME_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS1_LBHLINK3SAMEFRAME_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS1_GET_LBHLINK3SAMEFRAME(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK3SAMEFRAME(s) ((((s)->lbhlink3bufferstatus1) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS1_LBHLINK3SAMEFRAME_RESET 1U

/* LBHLINK3BUFFERSTATUS2: reserved not to switch address map. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS2 0x000002d0U
/* LBHLINK3BUFFERREADYCYCLES: no functionality */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS2_LBHLINK3BUFFERREADYCYCLES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS2_LBHLINK3BUFFERREADYCYCLES_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS2_GET_LBHLINK3BUFFERREADYCYCLES(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK3BUFFERREADYCYCLES(s) ((((s)->lbhlink3bufferstatus2) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS2_LBHLINK3BUFFERREADYCYCLES_RESET (none)U

/* LBHLINK3BUFFERSTATUS3: Buffer status register 3 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS3 0x000002d4U
/* LBHLINK3FETCHLINE: This field describes the line currently read by the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS3_LBHLINK3FETCHLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS3_LBHLINK3FETCHLINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS3_GET_LBHLINK3FETCHLINE(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK3FETCHLINE(s) ((((s)->lbhlink3bufferstatus3) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS3_LBHLINK3FETCHLINE_RESET (none)U

/* LBHLINK3STORELINE: This field describes the line currently written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS3_LBHLINK3STORELINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS3_LBHLINK3STORELINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS3_GET_LBHLINK3STORELINE(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK3STORELINE(s) ((((s)->lbhlink3bufferstatus3) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS3_LBHLINK3STORELINE_RESET (none)U

/* LBHLINK3BUFFERSTATUS4: Buffer status register 4 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS4 0x000002d8U
/* LBHLINK3FETCHSTOPLINE: This field describes the stopline of the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS4_LBHLINK3FETCHSTOPLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS4_LBHLINK3FETCHSTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS4_GET_LBHLINK3FETCHSTOPLINE(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK3FETCHSTOPLINE(s) ((((s)->lbhlink3bufferstatus4) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS4_LBHLINK3FETCHSTOPLINE_RESET (none)U

/* LBHLINK3STORESTOPLINE: This field describes the stopline of the store. */
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS4_LBHLINK3STORESTOPLINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS4_LBHLINK3STORESTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS4_GET_LBHLINK3STORESTOPLINE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK3STORESTOPLINE(s) ((((s)->lbhlink3bufferstatus4) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK3BUFFERSTATUS4_LBHLINK3STORESTOPLINE_RESET (none)U



/* LBHLINK4BUFFERCONFIG0: Line buffer configuration register 0. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0 0x00000300U
/* LBHLINK4ENABLE: Activates the line-buffer handshake, i.e. will stall the store or the display fetch upon respective condition. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_LBHLINK4ENABLE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_LBHLINK4ENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_SETM_LBHLINK4ENABLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_SET_LBHLINK4ENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_GET_LBHLINK4ENABLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK4ENABLE(s,val) ( (s)->lbhlink4bufferconfig0 = ((s)->lbhlink4bufferconfig0 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK4ENABLE(s,val)  ( (s)->lbhlink4bufferconfig0 = (((s)->lbhlink4bufferconfig0 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK4ENABLE(s) ((((s)->lbhlink4bufferconfig0) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_LBHLINK4ENABLE_RESET 0U

/* LBHLINK4SIZEENABLE: Activates the ring buffer usage. This signal will be provided to the fetch and the store. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_LBHLINK4SIZEENABLE_FSHIFT 4U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_LBHLINK4SIZEENABLE_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_SETM_LBHLINK4SIZEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_SET_LBHLINK4SIZEENABLE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_GET_LBHLINK4SIZEENABLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK4SIZEENABLE(s,val) ( (s)->lbhlink4bufferconfig0 = ((s)->lbhlink4bufferconfig0 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK4SIZEENABLE(s,val)  ( (s)->lbhlink4bufferconfig0 = (((s)->lbhlink4bufferconfig0 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK4SIZEENABLE(s) ((((s)->lbhlink4bufferconfig0) >> 4U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_LBHLINK4SIZEENABLE_RESET 0U

/* LBHLINK4BUFLINES: The number of lines in the line buffer in power of two. Max supported number of lines in ringbuffer is 16384 (14pow2=16384). Programming 15 results also in 16384 lines. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_LBHLINK4BUFLINES_FSHIFT 8U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_LBHLINK4BUFLINES_FMASK 0xfU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_SETM_LBHLINK4BUFLINES(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_SET_LBHLINK4BUFLINES(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_GET_LBHLINK4BUFLINES(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK4BUFLINES(s,val) ( (s)->lbhlink4bufferconfig0 = ((s)->lbhlink4bufferconfig0 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK4BUFLINES(s,val)  ( (s)->lbhlink4bufferconfig0 = (((s)->lbhlink4bufferconfig0 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK4BUFLINES(s) ((((s)->lbhlink4bufferconfig0) >> 8U) & 0xfUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG0_LBHLINK4BUFLINES_RESET 0U

/* LBHLINK4BUFFERCONFIG1: Line buffer configuration register 1. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1 0x00000304U
/* LBHLINK4FRAMELINES: Height of the frame (programmed with -1). This setting must be identical to the display fetch and BlitEng value. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_LBHLINK4FRAMELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_LBHLINK4FRAMELINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_SETM_LBHLINK4FRAMELINES(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_SET_LBHLINK4FRAMELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_GET_LBHLINK4FRAMELINES(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK4FRAMELINES(s,val) ( (s)->lbhlink4bufferconfig1 = ((s)->lbhlink4bufferconfig1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK4FRAMELINES(s,val)  ( (s)->lbhlink4bufferconfig1 = (((s)->lbhlink4bufferconfig1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK4FRAMELINES(s) ((((s)->lbhlink4bufferconfig1) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_LBHLINK4FRAMELINES_RESET 0U

/* LBHLINK4KEEPLINES: Number of lines to keep in the line buffer even if the display fetch is already beyond this line. Required for re-sampling operations that span over several input lines. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_LBHLINK4KEEPLINES_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_LBHLINK4KEEPLINES_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_SETM_LBHLINK4KEEPLINES(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_SET_LBHLINK4KEEPLINES(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_GET_LBHLINK4KEEPLINES(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK4KEEPLINES(s,val) ( (s)->lbhlink4bufferconfig1 = ((s)->lbhlink4bufferconfig1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK4KEEPLINES(s,val)  ( (s)->lbhlink4bufferconfig1 = (((s)->lbhlink4bufferconfig1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK4KEEPLINES(s) ((((s)->lbhlink4bufferconfig1) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERCONFIG1_LBHLINK4KEEPLINES_RESET 0U

/* LBHLINK4BUFFERSTATUS0: Buffer status register 0 for the line buffer handshake. Writing to this register has no effect, reading provides the value and simultaneously resets the internal register. The value provided after the first read or if LBH is inactive is not valid. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0 0x00000308U
/* LBHLINK4MAXFREELINES: The maximal number of free lines in the line buffer that can be scheduled by CmdSeq. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_LBHLINK4MAXFREELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_LBHLINK4MAXFREELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_SETM_LBHLINK4MAXFREELINES(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_SET_LBHLINK4MAXFREELINES(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_GET_LBHLINK4MAXFREELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK4MAXFREELINES(s,val) ( (s)->lbhlink4bufferstatus0 = ((s)->lbhlink4bufferstatus0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK4MAXFREELINES(s,val)  ( (s)->lbhlink4bufferstatus0 = (((s)->lbhlink4bufferstatus0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK4MAXFREELINES(s) ((((s)->lbhlink4bufferstatus0) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_LBHLINK4MAXFREELINES_RESET 0U

/* LBHLINK4MAXFREELINESSTORE: The maximal number of free lines in the line buffer that can be written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_LBHLINK4MAXFREELINESSTORE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_LBHLINK4MAXFREELINESSTORE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_SETM_LBHLINK4MAXFREELINESSTORE(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_SET_LBHLINK4MAXFREELINESSTORE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_GET_LBHLINK4MAXFREELINESSTORE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_SETM_LBHLINK4MAXFREELINESSTORE(s,val) ( (s)->lbhlink4bufferstatus0 = ((s)->lbhlink4bufferstatus0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_BLITENGCFG_SET_LBHLINK4MAXFREELINESSTORE(s,val)  ( (s)->lbhlink4bufferstatus0 = (((s)->lbhlink4bufferstatus0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_LBHLINK4MAXFREELINESSTORE(s) ((((s)->lbhlink4bufferstatus0) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS0_LBHLINK4MAXFREELINESSTORE_RESET 0U

/* LBHLINK4BUFFERSTATUS1: Buffer status register 1 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS1 0x0000030cU
/* LBHLINK4AVAILABLELINES: The number of lines in the line buffer that the store can write. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS1_LBHLINK4AVAILABLELINES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS1_LBHLINK4AVAILABLELINES_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS1_GET_LBHLINK4AVAILABLELINES(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK4AVAILABLELINES(s) ((((s)->lbhlink4bufferstatus1) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS1_LBHLINK4AVAILABLELINES_RESET 1U

/* LBHLINK4SAMEFRAME: This status bit indicates if the fetch and the store are processing the same frame. If this bit is zero the store has already switched to the next frame */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS1_LBHLINK4SAMEFRAME_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS1_LBHLINK4SAMEFRAME_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS1_GET_LBHLINK4SAMEFRAME(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK4SAMEFRAME(s) ((((s)->lbhlink4bufferstatus1) >> 16U) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS1_LBHLINK4SAMEFRAME_RESET 1U

/* LBHLINK4BUFFERSTATUS2: reserved not to switch address map. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS2 0x00000310U
/* LBHLINK4BUFFERREADYCYCLES: no functionality */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS2_LBHLINK4BUFFERREADYCYCLES_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS2_LBHLINK4BUFFERREADYCYCLES_FMASK 0x1U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS2_GET_LBHLINK4BUFFERREADYCYCLES(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_BLITENGCFG_GET_LBHLINK4BUFFERREADYCYCLES(s) ((((s)->lbhlink4bufferstatus2) ) & 0x1UL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS2_LBHLINK4BUFFERREADYCYCLES_RESET (none)U

/* LBHLINK4BUFFERSTATUS3: Buffer status register 3 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS3 0x00000314U
/* LBHLINK4FETCHLINE: This field describes the line currently read by the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS3_LBHLINK4FETCHLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS3_LBHLINK4FETCHLINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS3_GET_LBHLINK4FETCHLINE(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK4FETCHLINE(s) ((((s)->lbhlink4bufferstatus3) ) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS3_LBHLINK4FETCHLINE_RESET (none)U

/* LBHLINK4STORELINE: This field describes the line currently written by the store. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS3_LBHLINK4STORELINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS3_LBHLINK4STORELINE_FMASK 0x3fffU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS3_GET_LBHLINK4STORELINE(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK4STORELINE(s) ((((s)->lbhlink4bufferstatus3) >> 16U) & 0x3fffUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS3_LBHLINK4STORELINE_RESET (none)U

/* LBHLINK4BUFFERSTATUS4: Buffer status register 4 for the line buffer handshake. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS4 0x00000318U
/* LBHLINK4FETCHSTOPLINE: This field describes the stopline of the display fetch. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS4_LBHLINK4FETCHSTOPLINE_FSHIFT 0U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS4_LBHLINK4FETCHSTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS4_GET_LBHLINK4FETCHSTOPLINE(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK4FETCHSTOPLINE(s) ((((s)->lbhlink4bufferstatus4) ) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS4_LBHLINK4FETCHSTOPLINE_RESET (none)U

/* LBHLINK4STORESTOPLINE: This field describes the stopline of the store. */
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS4_LBHLINK4STORESTOPLINE_FSHIFT 16U
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS4_LBHLINK4STORESTOPLINE_FMASK 0x7fffU
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS4_GET_LBHLINK4STORESTOPLINE(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_GET_LBHLINK4STORESTOPLINE(s) ((((s)->lbhlink4bufferstatus4) >> 16U) & 0x7fffUL)
#define GFXREG_BLITENGCFG_LBHLINK4BUFFERSTATUS4_LBHLINK4STORESTOPLINE_RESET (none)U



/* PALETTE: Shared Palette Memory. */
#define GFXREG_BLITENGCFG_PALETTE 0x00002000U
/* PALETTEENTRY: Shared palette entry with 24-bit. Color format can be defined by Fetch configuration. */
#define GFXREG_BLITENGCFG_PALETTE_PALETTEENTRY_FSHIFT 0U
#define GFXREG_BLITENGCFG_PALETTE_PALETTEENTRY_FMASK 0xffffffU
#define GFXREG_BLITENGCFG_PALETTE_SETM_PALETTEENTRY(val) (((CYGFX_U32)(val) & 0xffffffUL) )
#define GFXREG_BLITENGCFG_PALETTE_SET_PALETTEENTRY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__))
#define GFXREG_BLITENGCFG_PALETTE_GET_PALETTEENTRY(val) (((CYGFX_U32)(val) ) & 0xffffffUL)
#define GFXREG_BLITENGCFG_SETM_PALETTEENTRY(s,val) ( (s)->palette = ((s)->palette & ~0xffffffUL) | (((CYGFX_U32)(val) ) & 0xffffffUL) )
#define GFXREG_BLITENGCFG_SET_PALETTEENTRY(s,val)  ( (s)->palette = (((s)->palette & ~0xffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffUL, __FILE__, __LINE__) )
#define GFXREG_BLITENGCFG_GET_PALETTEENTRY(s) ((((s)->palette) ) & 0xffffffUL)
#define GFXREG_BLITENGCFG_PALETTE_PALETTEENTRY_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_BLITENGCFG_REGISTER_H */

