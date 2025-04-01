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
 * \date        Tue May 26 11:58:38 2020
 * \file        gfxreg_constframe_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   constframe
 *              Source:   constframe.component.xml
 *              Template: component_h.tpl
 * \brief      Iris constframe register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_CONSTFRAME_REGISTER_H
#define GFXREG_CONSTFRAME_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* constframe registers */
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


/* STATICCONTROL: ConstFrame unit static control register */
#define GFXREG_CONSTFRAME_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_CONSTFRAME_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_CONSTFRAME_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_CONSTFRAME_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_CONSTFRAME_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_CONSTFRAME_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_CONSTFRAME_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_CONSTFRAME_STATICCONTROL_SHDEN_RESET 0U

/* FRAMEDIMENSIONS: Output frame dimensions. */
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS 0x00000004U
/* FRAMEWIDTH: Frame width in pixels minus one. */
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_FRAMEWIDTH_FSHIFT 0U
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_FRAMEWIDTH_FMASK 0x3fffU
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_SETM_FRAMEWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_SET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_GET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_CONSTFRAME_SETM_FRAMEWIDTH(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_CONSTFRAME_SET_FRAMEWIDTH(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_GET_FRAMEWIDTH(s) ((((s)->framedimensions) ) & 0x3fffUL)
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_FRAMEWIDTH_RESET 319U

/* FRAMEHEIGHT: Frame height in pixels minus one. */
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_FRAMEHEIGHT_FSHIFT 16U
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_FRAMEHEIGHT_FMASK 0x3fffU
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_SETM_FRAMEHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_SET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_GET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_CONSTFRAME_SETM_FRAMEHEIGHT(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_CONSTFRAME_SET_FRAMEHEIGHT(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_GET_FRAMEHEIGHT(s) ((((s)->framedimensions) >> 16U) & 0x3fffUL)
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_FRAMEHEIGHT_RESET 239U

/* EMPTYFRAME: When enabled output frame is empty. FrameWidth/Height settings have no effect then. Can be used to load shadows or to generate synchronization signals only (frame/sequence complete). */
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_EMPTYFRAME_FSHIFT 31U
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_EMPTYFRAME_FMASK 0x1U
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_SETM_EMPTYFRAME(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_SET_EMPTYFRAME(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_GET_EMPTYFRAME(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_CONSTFRAME_SETM_EMPTYFRAME(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_CONSTFRAME_SET_EMPTYFRAME(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_GET_EMPTYFRAME(s) ((((s)->framedimensions) >> 31U) & 0x1UL)
#define GFXREG_CONSTFRAME_FRAMEDIMENSIONS_EMPTYFRAME_RESET 0U

/* CONSTANTCOLOR: Color of output frame. */
#define GFXREG_CONSTFRAME_CONSTANTCOLOR 0x00000008U
/* CONSTANTALPHA: Alpha component. */
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTALPHA_FSHIFT 0U
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTALPHA_FMASK 0xffU
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_SETM_CONSTANTALPHA(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_SET_CONSTANTALPHA(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_GET_CONSTANTALPHA(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_CONSTFRAME_SETM_CONSTANTALPHA(s,val) ( (s)->constantcolor = ((s)->constantcolor & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_CONSTFRAME_SET_CONSTANTALPHA(s,val)  ( (s)->constantcolor = (((s)->constantcolor & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_GET_CONSTANTALPHA(s) ((((s)->constantcolor) ) & 0xffUL)
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTALPHA_RESET 0U

/* CONSTANTBLUE: Blue component. */
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTBLUE_FSHIFT 8U
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTBLUE_FMASK 0xffU
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_SETM_CONSTANTBLUE(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_SET_CONSTANTBLUE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_GET_CONSTANTBLUE(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_CONSTFRAME_SETM_CONSTANTBLUE(s,val) ( (s)->constantcolor = ((s)->constantcolor & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_CONSTFRAME_SET_CONSTANTBLUE(s,val)  ( (s)->constantcolor = (((s)->constantcolor & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_GET_CONSTANTBLUE(s) ((((s)->constantcolor) >> 8U) & 0xffUL)
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTBLUE_RESET 0U

/* CONSTANTGREEN: Green component. */
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTGREEN_FSHIFT 16U
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTGREEN_FMASK 0xffU
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_SETM_CONSTANTGREEN(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_SET_CONSTANTGREEN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_GET_CONSTANTGREEN(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_CONSTFRAME_SETM_CONSTANTGREEN(s,val) ( (s)->constantcolor = ((s)->constantcolor & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_CONSTFRAME_SET_CONSTANTGREEN(s,val)  ( (s)->constantcolor = (((s)->constantcolor & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_GET_CONSTANTGREEN(s) ((((s)->constantcolor) >> 16U) & 0xffUL)
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTGREEN_RESET 0U

/* CONSTANTRED: Red component. */
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTRED_FSHIFT 24U
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTRED_FMASK 0xffU
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_SETM_CONSTANTRED(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_SET_CONSTANTRED(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_GET_CONSTANTRED(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_CONSTFRAME_SETM_CONSTANTRED(s,val) ( (s)->constantcolor = ((s)->constantcolor & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_CONSTFRAME_SET_CONSTANTRED(s,val)  ( (s)->constantcolor = (((s)->constantcolor & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_GET_CONSTANTRED(s) ((((s)->constantcolor) >> 24U) & 0xffUL)
#define GFXREG_CONSTFRAME_CONSTANTCOLOR_CONSTANTRED_RESET 0U

/* CONTROLTRIGGER: ConstFrame unit trigger register */
#define GFXREG_CONSTFRAME_CONTROLTRIGGER 0x0000000cU
/* SHDTOKGEN: Writing a 1 to this will load shadow registers into the active configuration with the next start of frame and send a shadow load token to subsequent units. */
#define GFXREG_CONSTFRAME_CONTROLTRIGGER_SHDTOKGEN_FSHIFT 0U
#define GFXREG_CONSTFRAME_CONTROLTRIGGER_SHDTOKGEN_FMASK 0x1U
#define GFXREG_CONSTFRAME_CONTROLTRIGGER_SETM_SHDTOKGEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_CONSTFRAME_CONTROLTRIGGER_SET_SHDTOKGEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_SETM_SHDTOKGEN(s,val) ( (s)->controltrigger = ((s)->controltrigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_CONSTFRAME_SET_SHDTOKGEN(s,val)  ( (s)->controltrigger = (((s)->controltrigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_CONTROLTRIGGER_SHDTOKGEN_RESET (none)U

/* START: ConstFrame unit start register */
#define GFXREG_CONSTFRAME_START 0x00000010U
/* START: Writing a one starts processing, it is recommended to use this for debug purposes only. */
#define GFXREG_CONSTFRAME_START_START_FSHIFT 0U
#define GFXREG_CONSTFRAME_START_START_FMASK 0x1U
#define GFXREG_CONSTFRAME_START_SETM_START(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_CONSTFRAME_START_SET_START(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CONSTFRAME_SETM_START(s,val) ( (s)->start = ((s)->start & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_CONSTFRAME_SET_START(s,val)  ( (s)->start = (((s)->start & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CONSTFRAME_START_START_RESET (none)U

/* STATUS: Shows status information */
#define GFXREG_CONSTFRAME_STATUS 0x00000014U
/* STATUSBUSY: Unit is busy. */
#define GFXREG_CONSTFRAME_STATUS_STATUSBUSY_FSHIFT 0U
#define GFXREG_CONSTFRAME_STATUS_STATUSBUSY_FMASK 0x1U
#define GFXREG_CONSTFRAME_STATUS_GET_STATUSBUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_CONSTFRAME_GET_STATUSBUSY(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_CONSTFRAME_STATUS_STATUSBUSY_RESET (none)U

/* SHADOWSTATUS: Shadow load status. 1 if shadow load has been triggered and not yet consumed, 0 if shadow load is already consumed or has not yet been triggered. */
#define GFXREG_CONSTFRAME_STATUS_SHADOWSTATUS_FSHIFT 1U
#define GFXREG_CONSTFRAME_STATUS_SHADOWSTATUS_FMASK 0x1U
#define GFXREG_CONSTFRAME_STATUS_GET_SHADOWSTATUS(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_CONSTFRAME_GET_SHADOWSTATUS(s) ((((s)->status) >> 1U) & 0x1UL)
#define GFXREG_CONSTFRAME_STATUS_SHADOWSTATUS_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_CONSTFRAME_REGISTER_H */

