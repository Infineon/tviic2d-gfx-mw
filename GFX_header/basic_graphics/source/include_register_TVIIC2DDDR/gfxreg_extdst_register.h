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
 * \date        Mon Jul 05 13:05:13 2021
 * \file        gfxreg_extdst_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   extdst
 *              Source:   extdst.component.xml
 *              Template: component_h.tpl
 * \brief      Iris extdst register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_EXTDST_REGISTER_H
#define GFXREG_EXTDST_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* extdst registers */
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


/* STATICCONTROL: External Destination static control register */
#define GFXREG_EXTDST_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_EXTDST_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_EXTDST_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_EXTDST_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_EXTDST_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTDST_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_EXTDST_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_EXTDST_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTDST_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_EXTDST_STATICCONTROL_SHDEN_RESET 0U

/* KICK_MODE: Operation mode of generated kick signal */
#define GFXREG_EXTDST_STATICCONTROL_KICK_MODE_FSHIFT 8U
#define GFXREG_EXTDST_STATICCONTROL_KICK_MODE_FMASK 0x1U
#define GFXREG_EXTDST_STATICCONTROL_SETM_KICK_MODE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_EXTDST_STATICCONTROL_SET_KICK_MODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTDST_STATICCONTROL_GET_KICK_MODE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_EXTDST_SETM_KICK_MODE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_EXTDST_SET_KICK_MODE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTDST_GET_KICK_MODE(s) ((((s)->staticcontrol) >> 8U) & 0x1UL)
#define GFXREG_EXTDST_STATICCONTROL_KICK_MODE_SOFTWARE 0x0U /* kick generation by KICK field only */
#define GFXREG_EXTDST_STATICCONTROL_KICK_MODE_EXTERNAL 0x1U /* kick signal from external allowed */
#define GFXREG_EXTDST_STATICCONTROL_KICK_MODE_RESET 0x1U

/* PERFCOUNTMODE: Value 1 enables performance counter mode, which does not generate an output frame but processes input data as fast as possible instead. Can be used to determine the maximum possible read-out performance of display buffers. */
#define GFXREG_EXTDST_STATICCONTROL_PERFCOUNTMODE_FSHIFT 12U
#define GFXREG_EXTDST_STATICCONTROL_PERFCOUNTMODE_FMASK 0x1U
#define GFXREG_EXTDST_STATICCONTROL_SETM_PERFCOUNTMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_EXTDST_STATICCONTROL_SET_PERFCOUNTMODE(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTDST_STATICCONTROL_GET_PERFCOUNTMODE(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_EXTDST_SETM_PERFCOUNTMODE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_EXTDST_SET_PERFCOUNTMODE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTDST_GET_PERFCOUNTMODE(s) ((((s)->staticcontrol) >> 12U) & 0x1UL)
#define GFXREG_EXTDST_STATICCONTROL_PERFCOUNTMODE_RESET 0x0U

/* CONTROL: External Destination shadowed control register */
#define GFXREG_EXTDST_CONTROL 0x00000004U
/* GAMMAAPPLYENABLE: Enable gamma conversion stage to apply gamma function. This gamma function converts the pixel data from linear color space to non-linear color space before they are output. */
#define GFXREG_EXTDST_CONTROL_GAMMAAPPLYENABLE_FSHIFT 0U
#define GFXREG_EXTDST_CONTROL_GAMMAAPPLYENABLE_FMASK 0x1U
#define GFXREG_EXTDST_CONTROL_SETM_GAMMAAPPLYENABLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_EXTDST_CONTROL_SET_GAMMAAPPLYENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTDST_CONTROL_GET_GAMMAAPPLYENABLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_EXTDST_SETM_GAMMAAPPLYENABLE(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_EXTDST_SET_GAMMAAPPLYENABLE(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTDST_GET_GAMMAAPPLYENABLE(s) ((((s)->control) ) & 0x1UL)
#define GFXREG_EXTDST_CONTROL_GAMMAAPPLYENABLE_RESET 0x0U

/* SOFTWAREKICK: External Destination software kick */
#define GFXREG_EXTDST_SOFTWAREKICK 0x00000008U
/* KICK: Software kick, forces a kick signal independent of KICK_MODE. Write 1 to send kick. */
#define GFXREG_EXTDST_SOFTWAREKICK_KICK_FSHIFT 0U
#define GFXREG_EXTDST_SOFTWAREKICK_KICK_FMASK 0x1U
#define GFXREG_EXTDST_SOFTWAREKICK_SETM_KICK(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_EXTDST_SOFTWAREKICK_SET_KICK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTDST_SETM_KICK(s,val) ( (s)->softwarekick = ((s)->softwarekick & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_EXTDST_SET_KICK(s,val)  ( (s)->softwarekick = (((s)->softwarekick & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTDST_SOFTWAREKICK_KICK_RESET 0x0U

/* STATUS: External Destination Unit current status */
#define GFXREG_EXTDST_STATUS 0x0000000cU
/* CNT_ERR_STS: Pixel count error */
#define GFXREG_EXTDST_STATUS_CNT_ERR_STS_FSHIFT 0U
#define GFXREG_EXTDST_STATUS_CNT_ERR_STS_FMASK 0x1U
#define GFXREG_EXTDST_STATUS_SETM_CNT_ERR_STS(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_EXTDST_STATUS_SET_CNT_ERR_STS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_EXTDST_STATUS_GET_CNT_ERR_STS(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_EXTDST_SETM_CNT_ERR_STS(s,val) ( (s)->status = ((s)->status & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_EXTDST_SET_CNT_ERR_STS(s,val)  ( (s)->status = (((s)->status & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_EXTDST_GET_CNT_ERR_STS(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_EXTDST_STATUS_CNT_ERR_STS_RESET 0x0U

/* CONTROLWORD: Value of last received control word */
#define GFXREG_EXTDST_CONTROLWORD 0x00000010U
/* CW_VAL: Value of last received control word */
#define GFXREG_EXTDST_CONTROLWORD_CW_VAL_FSHIFT 0U
#define GFXREG_EXTDST_CONTROLWORD_CW_VAL_FMASK 0xffffffffU
#define GFXREG_EXTDST_CONTROLWORD_GET_CW_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_EXTDST_GET_CW_VAL(s) ((((s)->controlword) ) & 0xffffffffUL)
#define GFXREG_EXTDST_CONTROLWORD_CW_VAL_RESET (none)U

/* CURPIXELCNT: pixel count of currently running frame */
#define GFXREG_EXTDST_CURPIXELCNT 0x00000014U
/* C_XVAL: value of horizontal pixel counter, internal counter counting from max-1 to 0 */
#define GFXREG_EXTDST_CURPIXELCNT_C_XVAL_FSHIFT 0U
#define GFXREG_EXTDST_CURPIXELCNT_C_XVAL_FMASK 0xffffU
#define GFXREG_EXTDST_CURPIXELCNT_GET_C_XVAL(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_EXTDST_GET_C_XVAL(s) ((((s)->curpixelcnt) ) & 0xffffUL)
#define GFXREG_EXTDST_CURPIXELCNT_C_XVAL_RESET (none)U

/* C_YVAL: value of vertical line counter, internal counter counting from max-1 to 0 */
#define GFXREG_EXTDST_CURPIXELCNT_C_YVAL_FSHIFT 16U
#define GFXREG_EXTDST_CURPIXELCNT_C_YVAL_FMASK 0xffffU
#define GFXREG_EXTDST_CURPIXELCNT_GET_C_YVAL(val) (((CYGFX_U32)(val) >> 16U) & 0xffffUL)
#define GFXREG_EXTDST_GET_C_YVAL(s) ((((s)->curpixelcnt) >> 16U) & 0xffffUL)
#define GFXREG_EXTDST_CURPIXELCNT_C_YVAL_RESET (none)U

/* LASTPIXELCNT: pixel count between last two control words */
#define GFXREG_EXTDST_LASTPIXELCNT 0x00000018U
/* L_XVAL: value of horizontal pixel counter */
#define GFXREG_EXTDST_LASTPIXELCNT_L_XVAL_FSHIFT 0U
#define GFXREG_EXTDST_LASTPIXELCNT_L_XVAL_FMASK 0xffffU
#define GFXREG_EXTDST_LASTPIXELCNT_GET_L_XVAL(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_EXTDST_GET_L_XVAL(s) ((((s)->lastpixelcnt) ) & 0xffffUL)
#define GFXREG_EXTDST_LASTPIXELCNT_L_XVAL_RESET (none)U

/* L_YVAL: value of vertical line counter */
#define GFXREG_EXTDST_LASTPIXELCNT_L_YVAL_FSHIFT 16U
#define GFXREG_EXTDST_LASTPIXELCNT_L_YVAL_FMASK 0xffffU
#define GFXREG_EXTDST_LASTPIXELCNT_GET_L_YVAL(val) (((CYGFX_U32)(val) >> 16U) & 0xffffUL)
#define GFXREG_EXTDST_GET_L_YVAL(s) ((((s)->lastpixelcnt) >> 16U) & 0xffffUL)
#define GFXREG_EXTDST_LASTPIXELCNT_L_YVAL_RESET (none)U

/* PERFCOUNTER: Performance counter result */
#define GFXREG_EXTDST_PERFCOUNTER 0x0000001cU
/* PERFRESULT: Returns the performance counter value. Returns number of cycles of the last frame on the input. To calculate the performance divide the known number of pixels of the frame by this number. For debug purposes only, read when stable only, otherwise read data might be corrupted. */
#define GFXREG_EXTDST_PERFCOUNTER_PERFRESULT_FSHIFT 0U
#define GFXREG_EXTDST_PERFCOUNTER_PERFRESULT_FMASK 0xffffffffU
#define GFXREG_EXTDST_PERFCOUNTER_GET_PERFRESULT(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_EXTDST_GET_PERFRESULT(s) ((((s)->perfcounter) ) & 0xffffffffUL)
#define GFXREG_EXTDST_PERFCOUNTER_PERFRESULT_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_EXTDST_REGISTER_H */

