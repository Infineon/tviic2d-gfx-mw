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
 * \date        Tue May 26 11:58:39 2020
 * \file        gfxreg_fetchwarp_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   fetchwarp
 *              Source:   fetchwarp.component.xml
 *              Template: component_h.tpl
 * \brief      Iris fetchwarp register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_FETCHWARP_REGISTER_H
#define GFXREG_FETCHWARP_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* fetchwarp registers */
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


/* STATICCONTROL: Common static control options. */
#define GFXREG_FETCHWARP_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_FETCHWARP_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_FETCHWARP_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_FETCHWARP_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHWARP_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHWARP_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_FETCHWARP_STATICCONTROL_SHDEN_RESET 0U

/* LBHSHDEN: Enables shadowing of LBH configuration signals. */
#define GFXREG_FETCHWARP_STATICCONTROL_LBHSHDEN_FSHIFT 1U
#define GFXREG_FETCHWARP_STATICCONTROL_LBHSHDEN_FMASK 0x1U
#define GFXREG_FETCHWARP_STATICCONTROL_SETM_LBHSHDEN(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_FETCHWARP_STATICCONTROL_SET_LBHSHDEN(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_STATICCONTROL_GET_LBHSHDEN(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_LBHSHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_FETCHWARP_SET_LBHSHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LBHSHDEN(s) ((((s)->staticcontrol) >> 1U) & 0x1UL)
#define GFXREG_FETCHWARP_STATICCONTROL_LBHSHDEN_RESET 1U

/* BASEADDRESSAUTOUPDATE: Enable flag for continuous shadow load of BaseAddress field for each layer (layer index = bit index). When set to 1 the active BaseAddress configuration is loaded from shadow at start of each frame. This update is then executed independently from other RWS type fields. ShdEn must be enabled for this mode. */
#define GFXREG_FETCHWARP_STATICCONTROL_BASEADDRESSAUTOUPDATE_FSHIFT 16U
#define GFXREG_FETCHWARP_STATICCONTROL_BASEADDRESSAUTOUPDATE_FMASK 0xffU
#define GFXREG_FETCHWARP_STATICCONTROL_SETM_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_STATICCONTROL_SET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_STATICCONTROL_GET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_BASEADDRESSAUTOUPDATE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_BASEADDRESSAUTOUPDATE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BASEADDRESSAUTOUPDATE(s) ((((s)->staticcontrol) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_STATICCONTROL_BASEADDRESSAUTOUPDATE_RESET 0U

/* SHDLDREQSTICKY: Shadow load request flags for each layer (always load). See description of register TriggerEnable for further information. */
#define GFXREG_FETCHWARP_STATICCONTROL_SHDLDREQSTICKY_FSHIFT 24U
#define GFXREG_FETCHWARP_STATICCONTROL_SHDLDREQSTICKY_FMASK 0xffU
#define GFXREG_FETCHWARP_STATICCONTROL_SETM_SHDLDREQSTICKY(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_STATICCONTROL_SET_SHDLDREQSTICKY(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_STATICCONTROL_GET_SHDLDREQSTICKY(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_SHDLDREQSTICKY(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_SHDLDREQSTICKY(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SHDLDREQSTICKY(s) ((((s)->staticcontrol) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_STATICCONTROL_SHDLDREQSTICKY_RESET 0x0ffU

/* BURSTBUFFERMANAGEMENT: AXI interface buffer management register */
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT 0x00000004U
/* SETNUMBUFFERS: Set this to the number of bursts that should be buffered. SetNumBuffers has to be smaller or equal to ManagedBurstBuffers and SetNumBuffers * SetBurstLength has to be smaller or equal to ManagedBurstBuffers * BurstLengthForMaxBuffers. Must be a power of 2. The minimum allowed settings is 4 except for the FetchEco derivate which has a minimum allowed setting of 2. */
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_FSHIFT 0U
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_FMASK 0xffU
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SETM_SETNUMBUFFERS(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SET_SETNUMBUFFERS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_GET_SETNUMBUFFERS(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_SETNUMBUFFERS(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_SETNUMBUFFERS(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SETNUMBUFFERS(s) ((((s)->burstbuffermanagement) ) & 0xffUL)
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_RESET 4U

/* SETBURSTLENGTH: Set this to the burst length that should be used on the AXI interface. SetNumBuffers * SetBurstLength has to be smaller or equal to ManagedBurstBuffers * BurstLengthForMaxBuffers and that bursts larger than 16 are not possible on the axi interface. Only a power of two may be specified as burst length. */
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FSHIFT 8U
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FMASK 0x1fU
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SETM_SETBURSTLENGTH(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_GET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_SETBURSTLENGTH(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHWARP_SET_SETBURSTLENGTH(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SETBURSTLENGTH(s) ((((s)->burstbuffermanagement) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_RESET 2U

/* LINEMODE: Fetch buffer cache control. */
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_LINEMODE_FSHIFT 31U
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_LINEMODE_FMASK 0x1U
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SETM_LINEMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_SET_LINEMODE(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_GET_LINEMODE(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_LINEMODE(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_LINEMODE(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEMODE(s) ((((s)->burstbuffermanagement) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_LINEMODE_DISPLAY 0U /* Mandatory setting for operation in the Display Controller. Works also for Blit Engine with marginal performance impact. */
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_LINEMODE_BLIT 1U /* Recommended setting for operation in the Blit Engine. */
#define GFXREG_FETCHWARP_BURSTBUFFERMANAGEMENT_LINEMODE_RESET 0U

/* BASEADDRESS0: Source buffer base address of layer 0. */
#define GFXREG_FETCHWARP_BASEADDRESS0 0x00000008U
/* BASEADDRESS0: Byte aligned start address of the layer source buffer. For a pixel width of 32 bits or DECODE operations BaseAddress bits 1 downto 0 have to be 0 and for a pixel width of 16 bit BaseAddress[0] has to be 0. */
#define GFXREG_FETCHWARP_BASEADDRESS0_BASEADDRESS0_FSHIFT 0U
#define GFXREG_FETCHWARP_BASEADDRESS0_BASEADDRESS0_FMASK 0xffffffffU
#define GFXREG_FETCHWARP_BASEADDRESS0_SETM_BASEADDRESS0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHWARP_BASEADDRESS0_SET_BASEADDRESS0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BASEADDRESS0_GET_BASEADDRESS0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_SETM_BASEADDRESS0(s,val) ( (s)->baseaddress0 = ((s)->baseaddress0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHWARP_SET_BASEADDRESS0(s,val)  ( (s)->baseaddress0 = (((s)->baseaddress0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BASEADDRESS0(s) ((((s)->baseaddress0) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_BASEADDRESS0_BASEADDRESS0_RESET 0U

/* SOURCEBUFFERATTRIBUTES0: Source buffer attributes for layer 0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0 0x0000000cU
/* STRIDE0: Source buffer stride of the layer in bytes minus one, used for address generation. For a pixel width of 32 bits Stride has to be dividable by 4 and given minus one and for a pixel width of 16 bit Stride has to be dividable by two and given minus one. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_STRIDE0_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_STRIDE0_FMASK 0xffffU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_SETM_STRIDE0(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_SET_STRIDE0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_GET_STRIDE0(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SETM_STRIDE0(s,val) ( (s)->sourcebufferattributes0 = ((s)->sourcebufferattributes0 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHWARP_SET_STRIDE0(s,val)  ( (s)->sourcebufferattributes0 = (((s)->sourcebufferattributes0 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STRIDE0(s) ((((s)->sourcebufferattributes0) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_STRIDE0_RESET 1279U

/* BITSPERPIXEL0: Number of bits per pixel in the source buffer. Must be 1, 2, 4, 8, 16, 18, 24 or 32. [Exception] FetchEco does not support 18 and 24. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_FMASK 0x3fU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_SETM_BITSPERPIXEL0(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_SET_BITSPERPIXEL0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_GET_BITSPERPIXEL0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_BITSPERPIXEL0(s,val) ( (s)->sourcebufferattributes0 = ((s)->sourcebufferattributes0 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHWARP_SET_BITSPERPIXEL0(s,val)  ( (s)->sourcebufferattributes0 = (((s)->sourcebufferattributes0 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BITSPERPIXEL0(s) ((((s)->sourcebufferattributes0) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_RESET 32U

/* SOURCEBUFFERDIMENSION0: Source buffer dimension of layer 0.
   This information is used for tiling modes. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0 0x00000010U
/* LINEWIDTH0: Width of the source buffer of the layer in pixels minus one. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_LINEWIDTH0_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_LINEWIDTH0_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_SETM_LINEWIDTH0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_SET_LINEWIDTH0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_GET_LINEWIDTH0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINEWIDTH0(s,val) ( (s)->sourcebufferdimension0 = ((s)->sourcebufferdimension0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_LINEWIDTH0(s,val)  ( (s)->sourcebufferdimension0 = (((s)->sourcebufferdimension0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEWIDTH0(s) ((((s)->sourcebufferdimension0) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_LINEWIDTH0_RESET 0x3fffU

/* LINECOUNT0: Number of lines of the source buffer of the layer minus one. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_LINECOUNT0_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_LINECOUNT0_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_SETM_LINECOUNT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_SET_LINECOUNT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_GET_LINECOUNT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINECOUNT0(s,val) ( (s)->sourcebufferdimension0 = ((s)->sourcebufferdimension0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_LINECOUNT0(s,val)  ( (s)->sourcebufferdimension0 = (((s)->sourcebufferdimension0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINECOUNT0(s) ((((s)->sourcebufferdimension0) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION0_LINECOUNT0_RESET 0x3fffU

/* COLORCOMPONENTBITS0: Size of color components for RGB, YUV and index formats (layer 0).
   Size of Alpha and Index can be 0 to 8 bits, RGB and YUV 0 to 10 bits.         When size is 0, the component gets its value from ConstantColor register.         When RasterMode is DECODE, RGB/YUV components must not be larger than 8 bits.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0 0x00000014U
/* COMPONENTBITSALPHA0: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SETM_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SET_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_GET_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSALPHA0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSALPHA0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSALPHA0(s) ((((s)->colorcomponentbits0) ) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_RESET 8U

/* COMPONENTBITSBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SETM_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SET_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_GET_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSBLUE0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSBLUE0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSBLUE0(s) ((((s)->colorcomponentbits0) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_RESET 8U

/* COMPONENTBITSGREEN0: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SETM_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SET_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_GET_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSGREEN0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSGREEN0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSGREEN0(s) ((((s)->colorcomponentbits0) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_RESET 8U

/* COMPONENTBITSRED0: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSRED0_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSRED0_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SETM_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SET_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_GET_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSRED0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSRED0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSRED0(s) ((((s)->colorcomponentbits0) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_COMPONENTBITSRED0_RESET 8U

/* ITUFORMAT0: When ComponentBitsRed/Green/Blue is set to 10 and this mode enabled (value 1), then input format is considered 8.2 instead of 10.0 bits (max color is 1020 instead of 1023). This is compliant to ITU 656 standard. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_ITUFORMAT0_FSHIFT 31U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_ITUFORMAT0_FMASK 0x1U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SETM_ITUFORMAT0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_SET_ITUFORMAT0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_GET_ITUFORMAT0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ITUFORMAT0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_ITUFORMAT0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ITUFORMAT0(s) ((((s)->colorcomponentbits0) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS0_ITUFORMAT0_RESET 0U

/* COLORCOMPONENTSHIFT0: Bit position of color components for RGB, YUV and index formats (layer 0).
   Any position allowed as long as the component lies completely inside the configured pixel size.         For greyscale format set R, G and B to same position.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0 0x00000018U
/* COMPONENTSHIFTALPHA0: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTALPHA0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTALPHA0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTALPHA0(s) ((((s)->colorcomponentshift0) ) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_RESET 0U

/* COMPONENTSHIFTBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTBLUE0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTBLUE0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTBLUE0(s) ((((s)->colorcomponentshift0) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_RESET 8U

/* COMPONENTSHIFTGREEN0: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTGREEN0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTGREEN0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTGREEN0(s) ((((s)->colorcomponentshift0) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_RESET 16U

/* COMPONENTSHIFTRED0: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTRED0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTRED0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTRED0(s) ((((s)->colorcomponentshift0) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_RESET 24U

/* LAYEROFFSET0: Position of layer 0 within the destination frame.
   Offset values are relative to the origin and given in signed integer notation.         They control the position of the layer's source buffer inside the final frame composition.         The layer may be positioned outside the frame at any side.        */
#define GFXREG_FETCHWARP_LAYEROFFSET0 0x0000001cU
/* LAYERXOFFSET0: Horizontal offset (X). */
#define GFXREG_FETCHWARP_LAYEROFFSET0_LAYERXOFFSET0_FSHIFT 0U
#define GFXREG_FETCHWARP_LAYEROFFSET0_LAYERXOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET0_SETM_LAYERXOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_LAYEROFFSET0_SET_LAYERXOFFSET0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET0_GET_LAYERXOFFSET0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERXOFFSET0(s,val) ( (s)->layeroffset0 = ((s)->layeroffset0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_LAYERXOFFSET0(s,val)  ( (s)->layeroffset0 = (((s)->layeroffset0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERXOFFSET0(s) ((((s)->layeroffset0) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET0_LAYERXOFFSET0_RESET 0U

/* LAYERYOFFSET0: Vertical offset (Y). */
#define GFXREG_FETCHWARP_LAYEROFFSET0_LAYERYOFFSET0_FSHIFT 16U
#define GFXREG_FETCHWARP_LAYEROFFSET0_LAYERYOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET0_SETM_LAYERYOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_LAYEROFFSET0_SET_LAYERYOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET0_GET_LAYERYOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERYOFFSET0(s,val) ( (s)->layeroffset0 = ((s)->layeroffset0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_LAYERYOFFSET0(s,val)  ( (s)->layeroffset0 = (((s)->layeroffset0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERYOFFSET0(s) ((((s)->layeroffset0) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET0_LAYERYOFFSET0_RESET 0U

/* CLIPWINDOWOFFSET0: Clip window position for layer 0.
   Offset values are relative to the origin.        */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0 0x00000020U
/* CLIPWINDOWXOFFSET0: Horizontal position (X). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_SETM_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_SET_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_GET_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWXOFFSET0(s,val) ( (s)->clipwindowoffset0 = ((s)->clipwindowoffset0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWXOFFSET0(s,val)  ( (s)->clipwindowoffset0 = (((s)->clipwindowoffset0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWXOFFSET0(s) ((((s)->clipwindowoffset0) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_RESET 0U

/* CLIPWINDOWYOFFSET0: Vertical position (Y). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_SETM_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_SET_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_GET_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWYOFFSET0(s,val) ( (s)->clipwindowoffset0 = ((s)->clipwindowoffset0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWYOFFSET0(s,val)  ( (s)->clipwindowoffset0 = (((s)->clipwindowoffset0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWYOFFSET0(s) ((((s)->clipwindowoffset0) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_RESET 0U

/* CLIPWINDOWDIMENSIONS0: Clip window size for layer 0.
   Values are given in number of pixels minus one.        */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0 0x00000024U
/* CLIPWINDOWWIDTH0: Width. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_SETM_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_SET_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_GET_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWWIDTH0(s,val) ( (s)->clipwindowdimensions0 = ((s)->clipwindowdimensions0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWWIDTH0(s,val)  ( (s)->clipwindowdimensions0 = (((s)->clipwindowdimensions0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWWIDTH0(s) ((((s)->clipwindowdimensions0) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_RESET 0x0U

/* CLIPWINDOWHEIGHT0: Height. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_SETM_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_SET_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_GET_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWHEIGHT0(s,val) ( (s)->clipwindowdimensions0 = ((s)->clipwindowdimensions0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWHEIGHT0(s,val)  ( (s)->clipwindowdimensions0 = (((s)->clipwindowdimensions0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWHEIGHT0(s) ((((s)->clipwindowdimensions0) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_RESET 0x0U

/* CONSTANTCOLOR0: Constant color for layer 0.
   Global constant color settings for RGB and YUV formats.         Values are used for tiling mode TILE_FILL_CONSTANT and if a color component bit width is set to 0.         Alpha is also used as constant alpha for RGB pre-multiply.         8-bit RGB and YUV values are up-scaled to internal 10-bit resolution by MSBit replication.        */
#define GFXREG_FETCHWARP_CONSTANTCOLOR0 0x00000028U
/* CONSTANTALPHA0: Alpha. */
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTALPHA0_FSHIFT 0U
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTALPHA0_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_SETM_CONSTANTALPHA0(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_SET_CONSTANTALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_GET_CONSTANTALPHA0(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTALPHA0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_CONSTANTALPHA0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTALPHA0(s) ((((s)->constantcolor0) ) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTALPHA0_RESET 0U

/* CONSTANTBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTBLUE0_FSHIFT 8U
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTBLUE0_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_SETM_CONSTANTBLUE0(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_SET_CONSTANTBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_GET_CONSTANTBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTBLUE0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTBLUE0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTBLUE0(s) ((((s)->constantcolor0) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTBLUE0_RESET 0U

/* CONSTANTGREEN0: Green and U (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTGREEN0_FSHIFT 16U
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTGREEN0_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_SETM_CONSTANTGREEN0(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_SET_CONSTANTGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_GET_CONSTANTGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTGREEN0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTGREEN0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTGREEN0(s) ((((s)->constantcolor0) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTGREEN0_RESET 0U

/* CONSTANTRED0: Red and Y (luma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTRED0_FSHIFT 24U
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTRED0_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_SETM_CONSTANTRED0(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_SET_CONSTANTRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_GET_CONSTANTRED0(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTRED0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTRED0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTRED0(s) ((((s)->constantcolor0) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR0_CONSTANTRED0_RESET 0U

/* LAYERPROPERTY0: Common properties of layer 0.
   When both source buffer and clip window are disabled, the layer is off and does not contribute any pixels to the output frame.         When the clip window is enabled, the layer contributes the clip window content to the composition of the output frame, otherwise the complete source buffer content.        */
#define GFXREG_FETCHWARP_LAYERPROPERTY0 0x0000002cU
/* TILEMODE0: Select the tile mode for pixels outside the source buffer. Clip color (0,0,0,0) takes precedence if a pixel becomes subject to both tiling and clipping. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_TILEMODE0_FSHIFT 1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_TILEMODE0_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_TILEMODE0(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_TILEMODE0(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_TILEMODE0(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_TILEMODE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHWARP_SET_TILEMODE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_TILEMODE0(s) ((((s)->layerproperty0) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_TILEMODE0_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_TILEMODE0_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_TILEMODE0_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_TILEMODE0_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_TILEMODE0_RESET 0U

/* ALPHASRCENABLE0: Value 1 enables source alpha for computing the output alpha. When disabled source alpha is set to 1. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHASRCENABLE0_FSHIFT 3U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHASRCENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_ALPHASRCENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_ALPHASRCENABLE0(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_ALPHASRCENABLE0(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHASRCENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHWARP_SET_ALPHASRCENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHASRCENABLE0(s) ((((s)->layerproperty0) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHASRCENABLE0_RESET 1U

/* ALPHACONSTENABLE0: Value 1 enables constant alpha for computing the output alpha. When disabled constant alpha is set to 1. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHACONSTENABLE0_FSHIFT 4U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHACONSTENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_ALPHACONSTENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_ALPHACONSTENABLE0(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_ALPHACONSTENABLE0(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHACONSTENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHWARP_SET_ALPHACONSTENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHACONSTENABLE0(s) ((((s)->layerproperty0) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHACONSTENABLE0_RESET 0U

/* ALPHAMASKENABLE0: Value 1 enables mask alpha for computing the output alpha. When disabled mask alpha is set to 1. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHAMASKENABLE0_FSHIFT 5U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHAMASKENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_ALPHAMASKENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_ALPHAMASKENABLE0(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_ALPHAMASKENABLE0(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHAMASKENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHWARP_SET_ALPHAMASKENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHAMASKENABLE0(s) ((((s)->layerproperty0) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHAMASKENABLE0_RESET 0U

/* ALPHATRANSENABLE0: Value 1 enables transparent alpha for computing the output alpha. When disabled transparent alpha is set to 1. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHATRANSENABLE0_FSHIFT 6U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHATRANSENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_ALPHATRANSENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_ALPHATRANSENABLE0(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_ALPHATRANSENABLE0(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHATRANSENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHWARP_SET_ALPHATRANSENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHATRANSENABLE0(s) ((((s)->layerproperty0) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_ALPHATRANSENABLE0_RESET 0U

/* RGBALPHASRCENABLE0: Value 1 enables source alpha (stored together with color component in the source buffer) for RGB pre-multiply. When disabled source alpha is set to 1. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHASRCENABLE0_FSHIFT 7U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHASRCENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_RGBALPHASRCENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_RGBALPHASRCENABLE0(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_RGBALPHASRCENABLE0(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHASRCENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHASRCENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHASRCENABLE0(s) ((((s)->layerproperty0) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHASRCENABLE0_RESET 0U

/* RGBALPHACONSTENABLE0: Value 1 enables constant alpha (ConstAlpha fields) for RGB pre-multiply. When disabled constant alpha is set to 1. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHACONSTENABLE0_FSHIFT 8U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHACONSTENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_RGBALPHACONSTENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_RGBALPHACONSTENABLE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_RGBALPHACONSTENABLE0(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHACONSTENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHACONSTENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHACONSTENABLE0(s) ((((s)->layerproperty0) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHACONSTENABLE0_RESET 0U

/* RGBALPHAMASKENABLE0: Value 1 enables mask alpha (read by another Fetch unit from a separate alpha layer) for RGB pre-multiply. When disabled mask alpha is set to 1. Alpha mask input must be enabled for this field to have effect. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHAMASKENABLE0_FSHIFT 9U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHAMASKENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_RGBALPHAMASKENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_RGBALPHAMASKENABLE0(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_RGBALPHAMASKENABLE0(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHAMASKENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHAMASKENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHAMASKENABLE0(s) ((((s)->layerproperty0) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHAMASKENABLE0_RESET 0U

/* RGBALPHATRANSENABLE0: Value 1 enables transparent alpha (0 or 1 depending on RGB matching ConstantColor setting) for RGB pre-multiply. When disabled transparent alpha is set to 1. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHATRANSENABLE0_FSHIFT 10U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHATRANSENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_RGBALPHATRANSENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_RGBALPHATRANSENABLE0(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_RGBALPHATRANSENABLE0(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHATRANSENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHATRANSENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHATRANSENABLE0(s) ((((s)->layerproperty0) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_RGBALPHATRANSENABLE0_RESET 0U

/* PREMULCONSTRGB0: When enabled (value 1) the values given by ConstantRed/Green/Blue are used instead of alpha for source RGB pre-multiply. Settings RGBAlphaSrc/Const/Mask/TransEnable have no effect then. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_PREMULCONSTRGB0_FSHIFT 11U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_PREMULCONSTRGB0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_PREMULCONSTRGB0(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_PREMULCONSTRGB0(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_PREMULCONSTRGB0(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_PREMULCONSTRGB0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHWARP_SET_PREMULCONSTRGB0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_PREMULCONSTRGB0(s) ((((s)->layerproperty0) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_PREMULCONSTRGB0_RESET 0x0U

/* YUVCONVERSIONMODE0: Enables different kind of YUV to RGB conversions. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_YUVCONVERSIONMODE0_FSHIFT 12U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_YUVCONVERSIONMODE0_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_YUVCONVERSIONMODE0(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_YUVCONVERSIONMODE0(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_YUVCONVERSIONMODE0(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_YUVCONVERSIONMODE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHWARP_SET_YUVCONVERSIONMODE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_YUVCONVERSIONMODE0(s) ((((s)->layerproperty0) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_YUVCONVERSIONMODE0_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_YUVCONVERSIONMODE0_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_YUVCONVERSIONMODE0_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_YUVCONVERSIONMODE0_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_YUVCONVERSIONMODE0_RESET 0x0U

/* GAMMAREMOVEENABLE0: Value 1 enables the stage to remove a gamma from RGB components. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GAMMAREMOVEENABLE0_FSHIFT 14U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GAMMAREMOVEENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_GAMMAREMOVEENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_GAMMAREMOVEENABLE0(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_GAMMAREMOVEENABLE0(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_GAMMAREMOVEENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHWARP_SET_GAMMAREMOVEENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_GAMMAREMOVEENABLE0(s) ((((s)->layerproperty0) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GAMMAREMOVEENABLE0_RESET 0U

/* CLIPWINDOWENABLE0: Value 1 enables the clip window for this layer. Pixels outside the clip window get the clip color, pixels inside the source or tiling color. */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_CLIPWINDOWENABLE0_FSHIFT 30U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_CLIPWINDOWENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWENABLE0(s) ((((s)->layerproperty0) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_CLIPWINDOWENABLE0_RESET 0U

/* SOURCEBUFFERENABLE0: Value 1 enables the source buffer for this layer. When disabled the tiling color is used only (TileMode TILE_PAD not allowed). */
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SOURCEBUFFERENABLE0_FSHIFT 31U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SOURCEBUFFERENABLE0_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SETM_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SET_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY0_GET_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SOURCEBUFFERENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_SOURCEBUFFERENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SOURCEBUFFERENABLE0(s) ((((s)->layerproperty0) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY0_SOURCEBUFFERENABLE0_RESET 1U

/* BASEADDRESS1: Source buffer base address of layer 1. */
#define GFXREG_FETCHWARP_BASEADDRESS1 0x00000030U
/* BASEADDRESS1: See BaseAddress0. */
#define GFXREG_FETCHWARP_BASEADDRESS1_BASEADDRESS1_FSHIFT 0U
#define GFXREG_FETCHWARP_BASEADDRESS1_BASEADDRESS1_FMASK 0xffffffffU
#define GFXREG_FETCHWARP_BASEADDRESS1_SETM_BASEADDRESS1(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHWARP_BASEADDRESS1_SET_BASEADDRESS1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BASEADDRESS1_GET_BASEADDRESS1(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_SETM_BASEADDRESS1(s,val) ( (s)->baseaddress1 = ((s)->baseaddress1 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHWARP_SET_BASEADDRESS1(s,val)  ( (s)->baseaddress1 = (((s)->baseaddress1 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BASEADDRESS1(s) ((((s)->baseaddress1) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_BASEADDRESS1_BASEADDRESS1_RESET 0U

/* SOURCEBUFFERATTRIBUTES1: Source buffer attributes for layer 1. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1 0x00000034U
/* STRIDE1: See Stride0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_STRIDE1_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_STRIDE1_FMASK 0xffffU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_SETM_STRIDE1(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_SET_STRIDE1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_GET_STRIDE1(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SETM_STRIDE1(s,val) ( (s)->sourcebufferattributes1 = ((s)->sourcebufferattributes1 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHWARP_SET_STRIDE1(s,val)  ( (s)->sourcebufferattributes1 = (((s)->sourcebufferattributes1 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STRIDE1(s) ((((s)->sourcebufferattributes1) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_STRIDE1_RESET 3U

/* BITSPERPIXEL1: See BitsPerPixel0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_BITSPERPIXEL1_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_BITSPERPIXEL1_FMASK 0x3fU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_SETM_BITSPERPIXEL1(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_SET_BITSPERPIXEL1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_GET_BITSPERPIXEL1(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_BITSPERPIXEL1(s,val) ( (s)->sourcebufferattributes1 = ((s)->sourcebufferattributes1 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHWARP_SET_BITSPERPIXEL1(s,val)  ( (s)->sourcebufferattributes1 = (((s)->sourcebufferattributes1 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BITSPERPIXEL1(s) ((((s)->sourcebufferattributes1) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES1_BITSPERPIXEL1_RESET 32U

/* SOURCEBUFFERDIMENSION1: Source buffer dimensions of layer 1, */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1 0x00000038U
/* LINEWIDTH1: See LineWidth0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_LINEWIDTH1_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_LINEWIDTH1_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_SETM_LINEWIDTH1(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_SET_LINEWIDTH1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_GET_LINEWIDTH1(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINEWIDTH1(s,val) ( (s)->sourcebufferdimension1 = ((s)->sourcebufferdimension1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_LINEWIDTH1(s,val)  ( (s)->sourcebufferdimension1 = (((s)->sourcebufferdimension1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEWIDTH1(s) ((((s)->sourcebufferdimension1) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_LINEWIDTH1_RESET 0x3fffU

/* LINECOUNT1: See LineCount0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_LINECOUNT1_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_LINECOUNT1_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_SETM_LINECOUNT1(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_SET_LINECOUNT1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_GET_LINECOUNT1(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINECOUNT1(s,val) ( (s)->sourcebufferdimension1 = ((s)->sourcebufferdimension1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_LINECOUNT1(s,val)  ( (s)->sourcebufferdimension1 = (((s)->sourcebufferdimension1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINECOUNT1(s) ((((s)->sourcebufferdimension1) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION1_LINECOUNT1_RESET 0x3fffU

/* COLORCOMPONENTBITS1: Size of color components for RGB, YUV and index formats (layer 1).
   See ColorComponentBits0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1 0x0000003cU
/* COMPONENTBITSALPHA1: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSALPHA1_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSALPHA1_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SETM_COMPONENTBITSALPHA1(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SET_COMPONENTBITSALPHA1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_GET_COMPONENTBITSALPHA1(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSALPHA1(s,val) ( (s)->colorcomponentbits1 = ((s)->colorcomponentbits1 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSALPHA1(s,val)  ( (s)->colorcomponentbits1 = (((s)->colorcomponentbits1 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSALPHA1(s) ((((s)->colorcomponentbits1) ) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSALPHA1_RESET 8U

/* COMPONENTBITSBLUE1: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSBLUE1_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSBLUE1_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SETM_COMPONENTBITSBLUE1(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SET_COMPONENTBITSBLUE1(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_GET_COMPONENTBITSBLUE1(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSBLUE1(s,val) ( (s)->colorcomponentbits1 = ((s)->colorcomponentbits1 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSBLUE1(s,val)  ( (s)->colorcomponentbits1 = (((s)->colorcomponentbits1 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSBLUE1(s) ((((s)->colorcomponentbits1) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSBLUE1_RESET 8U

/* COMPONENTBITSGREEN1: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSGREEN1_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSGREEN1_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SETM_COMPONENTBITSGREEN1(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SET_COMPONENTBITSGREEN1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_GET_COMPONENTBITSGREEN1(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSGREEN1(s,val) ( (s)->colorcomponentbits1 = ((s)->colorcomponentbits1 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSGREEN1(s,val)  ( (s)->colorcomponentbits1 = (((s)->colorcomponentbits1 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSGREEN1(s) ((((s)->colorcomponentbits1) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSGREEN1_RESET 8U

/* COMPONENTBITSRED1: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSRED1_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSRED1_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SETM_COMPONENTBITSRED1(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SET_COMPONENTBITSRED1(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_GET_COMPONENTBITSRED1(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSRED1(s,val) ( (s)->colorcomponentbits1 = ((s)->colorcomponentbits1 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSRED1(s,val)  ( (s)->colorcomponentbits1 = (((s)->colorcomponentbits1 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSRED1(s) ((((s)->colorcomponentbits1) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_COMPONENTBITSRED1_RESET 8U

/* ITUFORMAT1: See ITUFormat0. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_ITUFORMAT1_FSHIFT 31U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_ITUFORMAT1_FMASK 0x1U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SETM_ITUFORMAT1(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_SET_ITUFORMAT1(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_GET_ITUFORMAT1(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ITUFORMAT1(s,val) ( (s)->colorcomponentbits1 = ((s)->colorcomponentbits1 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_ITUFORMAT1(s,val)  ( (s)->colorcomponentbits1 = (((s)->colorcomponentbits1 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ITUFORMAT1(s) ((((s)->colorcomponentbits1) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS1_ITUFORMAT1_RESET 0U

/* COLORCOMPONENTSHIFT1: Bit position of color components for RGB, YUV and index formats (layer 1).
   See ColorComponentShift0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1 0x00000040U
/* COMPONENTSHIFTALPHA1: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTALPHA1_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTALPHA1_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_SETM_COMPONENTSHIFTALPHA1(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_SET_COMPONENTSHIFTALPHA1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_GET_COMPONENTSHIFTALPHA1(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTALPHA1(s,val) ( (s)->colorcomponentshift1 = ((s)->colorcomponentshift1 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTALPHA1(s,val)  ( (s)->colorcomponentshift1 = (((s)->colorcomponentshift1 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTALPHA1(s) ((((s)->colorcomponentshift1) ) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTALPHA1_RESET 0U

/* COMPONENTSHIFTBLUE1: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTBLUE1_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTBLUE1_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_SETM_COMPONENTSHIFTBLUE1(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_SET_COMPONENTSHIFTBLUE1(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_GET_COMPONENTSHIFTBLUE1(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTBLUE1(s,val) ( (s)->colorcomponentshift1 = ((s)->colorcomponentshift1 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTBLUE1(s,val)  ( (s)->colorcomponentshift1 = (((s)->colorcomponentshift1 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTBLUE1(s) ((((s)->colorcomponentshift1) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTBLUE1_RESET 8U

/* COMPONENTSHIFTGREEN1: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTGREEN1_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTGREEN1_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_SETM_COMPONENTSHIFTGREEN1(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_SET_COMPONENTSHIFTGREEN1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_GET_COMPONENTSHIFTGREEN1(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTGREEN1(s,val) ( (s)->colorcomponentshift1 = ((s)->colorcomponentshift1 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTGREEN1(s,val)  ( (s)->colorcomponentshift1 = (((s)->colorcomponentshift1 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTGREEN1(s) ((((s)->colorcomponentshift1) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTGREEN1_RESET 16U

/* COMPONENTSHIFTRED1: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTRED1_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTRED1_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_SETM_COMPONENTSHIFTRED1(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_SET_COMPONENTSHIFTRED1(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_GET_COMPONENTSHIFTRED1(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTRED1(s,val) ( (s)->colorcomponentshift1 = ((s)->colorcomponentshift1 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTRED1(s,val)  ( (s)->colorcomponentshift1 = (((s)->colorcomponentshift1 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTRED1(s) ((((s)->colorcomponentshift1) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT1_COMPONENTSHIFTRED1_RESET 24U

/* LAYEROFFSET1: Position of layer 1 within the destination frame.
   See LayerOffset0. */
#define GFXREG_FETCHWARP_LAYEROFFSET1 0x00000044U
/* LAYERXOFFSET1: Horizontal offset (X). */
#define GFXREG_FETCHWARP_LAYEROFFSET1_LAYERXOFFSET1_FSHIFT 0U
#define GFXREG_FETCHWARP_LAYEROFFSET1_LAYERXOFFSET1_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET1_SETM_LAYERXOFFSET1(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_LAYEROFFSET1_SET_LAYERXOFFSET1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET1_GET_LAYERXOFFSET1(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERXOFFSET1(s,val) ( (s)->layeroffset1 = ((s)->layeroffset1 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_LAYERXOFFSET1(s,val)  ( (s)->layeroffset1 = (((s)->layeroffset1 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERXOFFSET1(s) ((((s)->layeroffset1) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET1_LAYERXOFFSET1_RESET 0U

/* LAYERYOFFSET1: Vertical offset (Y). */
#define GFXREG_FETCHWARP_LAYEROFFSET1_LAYERYOFFSET1_FSHIFT 16U
#define GFXREG_FETCHWARP_LAYEROFFSET1_LAYERYOFFSET1_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET1_SETM_LAYERYOFFSET1(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_LAYEROFFSET1_SET_LAYERYOFFSET1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET1_GET_LAYERYOFFSET1(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERYOFFSET1(s,val) ( (s)->layeroffset1 = ((s)->layeroffset1 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_LAYERYOFFSET1(s,val)  ( (s)->layeroffset1 = (((s)->layeroffset1 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERYOFFSET1(s) ((((s)->layeroffset1) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET1_LAYERYOFFSET1_RESET 0U

/* CLIPWINDOWOFFSET1: Clip window position for layer 1.
   See ClipWindowOffset0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1 0x00000048U
/* CLIPWINDOWXOFFSET1: Horizontal position (X). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_CLIPWINDOWXOFFSET1_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_CLIPWINDOWXOFFSET1_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_SETM_CLIPWINDOWXOFFSET1(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_SET_CLIPWINDOWXOFFSET1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_GET_CLIPWINDOWXOFFSET1(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWXOFFSET1(s,val) ( (s)->clipwindowoffset1 = ((s)->clipwindowoffset1 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWXOFFSET1(s,val)  ( (s)->clipwindowoffset1 = (((s)->clipwindowoffset1 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWXOFFSET1(s) ((((s)->clipwindowoffset1) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_CLIPWINDOWXOFFSET1_RESET 0U

/* CLIPWINDOWYOFFSET1: Vertical position (Y). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_CLIPWINDOWYOFFSET1_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_CLIPWINDOWYOFFSET1_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_SETM_CLIPWINDOWYOFFSET1(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_SET_CLIPWINDOWYOFFSET1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_GET_CLIPWINDOWYOFFSET1(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWYOFFSET1(s,val) ( (s)->clipwindowoffset1 = ((s)->clipwindowoffset1 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWYOFFSET1(s,val)  ( (s)->clipwindowoffset1 = (((s)->clipwindowoffset1 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWYOFFSET1(s) ((((s)->clipwindowoffset1) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET1_CLIPWINDOWYOFFSET1_RESET 0U

/* CLIPWINDOWDIMENSIONS1: Clip window size for layer 1.
   See ClipWindowDimensions0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1 0x0000004cU
/* CLIPWINDOWWIDTH1: Width. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_CLIPWINDOWWIDTH1_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_CLIPWINDOWWIDTH1_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_SETM_CLIPWINDOWWIDTH1(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_SET_CLIPWINDOWWIDTH1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_GET_CLIPWINDOWWIDTH1(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWWIDTH1(s,val) ( (s)->clipwindowdimensions1 = ((s)->clipwindowdimensions1 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWWIDTH1(s,val)  ( (s)->clipwindowdimensions1 = (((s)->clipwindowdimensions1 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWWIDTH1(s) ((((s)->clipwindowdimensions1) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_CLIPWINDOWWIDTH1_RESET 0x0U

/* CLIPWINDOWHEIGHT1: Height. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_CLIPWINDOWHEIGHT1_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_CLIPWINDOWHEIGHT1_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_SETM_CLIPWINDOWHEIGHT1(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_SET_CLIPWINDOWHEIGHT1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_GET_CLIPWINDOWHEIGHT1(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWHEIGHT1(s,val) ( (s)->clipwindowdimensions1 = ((s)->clipwindowdimensions1 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWHEIGHT1(s,val)  ( (s)->clipwindowdimensions1 = (((s)->clipwindowdimensions1 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWHEIGHT1(s) ((((s)->clipwindowdimensions1) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS1_CLIPWINDOWHEIGHT1_RESET 0x0U

/* CONSTANTCOLOR1: Constant color for layer 1.
   See ConstantColor0.        */
#define GFXREG_FETCHWARP_CONSTANTCOLOR1 0x00000050U
/* CONSTANTALPHA1: Alpha. */
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTALPHA1_FSHIFT 0U
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTALPHA1_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_SETM_CONSTANTALPHA1(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_SET_CONSTANTALPHA1(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_GET_CONSTANTALPHA1(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTALPHA1(s,val) ( (s)->constantcolor1 = ((s)->constantcolor1 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_CONSTANTALPHA1(s,val)  ( (s)->constantcolor1 = (((s)->constantcolor1 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTALPHA1(s) ((((s)->constantcolor1) ) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTALPHA1_RESET 0U

/* CONSTANTBLUE1: Blue and V (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTBLUE1_FSHIFT 8U
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTBLUE1_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_SETM_CONSTANTBLUE1(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_SET_CONSTANTBLUE1(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_GET_CONSTANTBLUE1(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTBLUE1(s,val) ( (s)->constantcolor1 = ((s)->constantcolor1 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTBLUE1(s,val)  ( (s)->constantcolor1 = (((s)->constantcolor1 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTBLUE1(s) ((((s)->constantcolor1) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTBLUE1_RESET 0U

/* CONSTANTGREEN1: Green and U (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTGREEN1_FSHIFT 16U
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTGREEN1_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_SETM_CONSTANTGREEN1(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_SET_CONSTANTGREEN1(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_GET_CONSTANTGREEN1(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTGREEN1(s,val) ( (s)->constantcolor1 = ((s)->constantcolor1 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTGREEN1(s,val)  ( (s)->constantcolor1 = (((s)->constantcolor1 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTGREEN1(s) ((((s)->constantcolor1) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTGREEN1_RESET 0U

/* CONSTANTRED1: Red and Y (luma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTRED1_FSHIFT 24U
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTRED1_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_SETM_CONSTANTRED1(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_SET_CONSTANTRED1(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_GET_CONSTANTRED1(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTRED1(s,val) ( (s)->constantcolor1 = ((s)->constantcolor1 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTRED1(s,val)  ( (s)->constantcolor1 = (((s)->constantcolor1 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTRED1(s) ((((s)->constantcolor1) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR1_CONSTANTRED1_RESET 0U

/* LAYERPROPERTY1: Common properties of layer 1.
   See register LayerProperty0.        */
#define GFXREG_FETCHWARP_LAYERPROPERTY1 0x00000054U
/* TILEMODE1: See TileMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_TILEMODE1_FSHIFT 1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_TILEMODE1_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_TILEMODE1(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_TILEMODE1(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_TILEMODE1(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_TILEMODE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHWARP_SET_TILEMODE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_TILEMODE1(s) ((((s)->layerproperty1) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_TILEMODE1_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_TILEMODE1_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_TILEMODE1_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_TILEMODE1_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_TILEMODE1_RESET 0U

/* ALPHASRCENABLE1: See AlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHASRCENABLE1_FSHIFT 3U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHASRCENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_ALPHASRCENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_ALPHASRCENABLE1(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_ALPHASRCENABLE1(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHASRCENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHWARP_SET_ALPHASRCENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHASRCENABLE1(s) ((((s)->layerproperty1) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHASRCENABLE1_RESET 1U

/* ALPHACONSTENABLE1: See AlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHACONSTENABLE1_FSHIFT 4U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHACONSTENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_ALPHACONSTENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_ALPHACONSTENABLE1(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_ALPHACONSTENABLE1(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHACONSTENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHWARP_SET_ALPHACONSTENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHACONSTENABLE1(s) ((((s)->layerproperty1) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHACONSTENABLE1_RESET 0U

/* ALPHAMASKENABLE1: See AlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHAMASKENABLE1_FSHIFT 5U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHAMASKENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_ALPHAMASKENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_ALPHAMASKENABLE1(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_ALPHAMASKENABLE1(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHAMASKENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHWARP_SET_ALPHAMASKENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHAMASKENABLE1(s) ((((s)->layerproperty1) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHAMASKENABLE1_RESET 0U

/* ALPHATRANSENABLE1: See AlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHATRANSENABLE1_FSHIFT 6U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHATRANSENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_ALPHATRANSENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_ALPHATRANSENABLE1(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_ALPHATRANSENABLE1(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHATRANSENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHWARP_SET_ALPHATRANSENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHATRANSENABLE1(s) ((((s)->layerproperty1) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_ALPHATRANSENABLE1_RESET 0U

/* RGBALPHASRCENABLE1: See RGBAlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHASRCENABLE1_FSHIFT 7U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHASRCENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_RGBALPHASRCENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_RGBALPHASRCENABLE1(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_RGBALPHASRCENABLE1(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHASRCENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHASRCENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHASRCENABLE1(s) ((((s)->layerproperty1) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHASRCENABLE1_RESET 0U

/* RGBALPHACONSTENABLE1: See RGBAlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHACONSTENABLE1_FSHIFT 8U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHACONSTENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_RGBALPHACONSTENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_RGBALPHACONSTENABLE1(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_RGBALPHACONSTENABLE1(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHACONSTENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHACONSTENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHACONSTENABLE1(s) ((((s)->layerproperty1) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHACONSTENABLE1_RESET 0U

/* RGBALPHAMASKENABLE1: See RGBAlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHAMASKENABLE1_FSHIFT 9U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHAMASKENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_RGBALPHAMASKENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_RGBALPHAMASKENABLE1(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_RGBALPHAMASKENABLE1(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHAMASKENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHAMASKENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHAMASKENABLE1(s) ((((s)->layerproperty1) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHAMASKENABLE1_RESET 0U

/* RGBALPHATRANSENABLE1: See RGBAlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHATRANSENABLE1_FSHIFT 10U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHATRANSENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_RGBALPHATRANSENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_RGBALPHATRANSENABLE1(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_RGBALPHATRANSENABLE1(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHATRANSENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHATRANSENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHATRANSENABLE1(s) ((((s)->layerproperty1) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_RGBALPHATRANSENABLE1_RESET 0U

/* PREMULCONSTRGB1: See PremulConstRGB0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_PREMULCONSTRGB1_FSHIFT 11U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_PREMULCONSTRGB1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_PREMULCONSTRGB1(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_PREMULCONSTRGB1(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_PREMULCONSTRGB1(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_PREMULCONSTRGB1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHWARP_SET_PREMULCONSTRGB1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_PREMULCONSTRGB1(s) ((((s)->layerproperty1) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_PREMULCONSTRGB1_RESET 0x0U

/* YUVCONVERSIONMODE1: See YUVConversionMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_YUVCONVERSIONMODE1_FSHIFT 12U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_YUVCONVERSIONMODE1_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_YUVCONVERSIONMODE1(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_YUVCONVERSIONMODE1(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_YUVCONVERSIONMODE1(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_YUVCONVERSIONMODE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHWARP_SET_YUVCONVERSIONMODE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_YUVCONVERSIONMODE1(s) ((((s)->layerproperty1) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_YUVCONVERSIONMODE1_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_YUVCONVERSIONMODE1_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_YUVCONVERSIONMODE1_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_YUVCONVERSIONMODE1_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_YUVCONVERSIONMODE1_RESET 0x0U

/* GAMMAREMOVEENABLE1: See GammaRemoveEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GAMMAREMOVEENABLE1_FSHIFT 14U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GAMMAREMOVEENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_GAMMAREMOVEENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_GAMMAREMOVEENABLE1(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_GAMMAREMOVEENABLE1(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_GAMMAREMOVEENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHWARP_SET_GAMMAREMOVEENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_GAMMAREMOVEENABLE1(s) ((((s)->layerproperty1) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GAMMAREMOVEENABLE1_RESET 0U

/* CLIPWINDOWENABLE1: See ClipWindowEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_CLIPWINDOWENABLE1_FSHIFT 30U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_CLIPWINDOWENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_CLIPWINDOWENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_CLIPWINDOWENABLE1(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_CLIPWINDOWENABLE1(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWENABLE1(s) ((((s)->layerproperty1) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_CLIPWINDOWENABLE1_RESET 0U

/* SOURCEBUFFERENABLE1: See SourceBufferEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SOURCEBUFFERENABLE1_FSHIFT 31U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SOURCEBUFFERENABLE1_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SETM_SOURCEBUFFERENABLE1(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SET_SOURCEBUFFERENABLE1(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY1_GET_SOURCEBUFFERENABLE1(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SOURCEBUFFERENABLE1(s,val) ( (s)->layerproperty1 = ((s)->layerproperty1 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_SOURCEBUFFERENABLE1(s,val)  ( (s)->layerproperty1 = (((s)->layerproperty1 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SOURCEBUFFERENABLE1(s) ((((s)->layerproperty1) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY1_SOURCEBUFFERENABLE1_RESET 0U

/* BASEADDRESS2: Source buffer base address of layer 2. */
#define GFXREG_FETCHWARP_BASEADDRESS2 0x00000058U
/* BASEADDRESS2: See BaseAddress0. */
#define GFXREG_FETCHWARP_BASEADDRESS2_BASEADDRESS2_FSHIFT 0U
#define GFXREG_FETCHWARP_BASEADDRESS2_BASEADDRESS2_FMASK 0xffffffffU
#define GFXREG_FETCHWARP_BASEADDRESS2_SETM_BASEADDRESS2(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHWARP_BASEADDRESS2_SET_BASEADDRESS2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BASEADDRESS2_GET_BASEADDRESS2(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_SETM_BASEADDRESS2(s,val) ( (s)->baseaddress2 = ((s)->baseaddress2 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHWARP_SET_BASEADDRESS2(s,val)  ( (s)->baseaddress2 = (((s)->baseaddress2 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BASEADDRESS2(s) ((((s)->baseaddress2) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_BASEADDRESS2_BASEADDRESS2_RESET 0U

/* SOURCEBUFFERATTRIBUTES2: Source buffer attributes for layer 2. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2 0x0000005cU
/* STRIDE2: See Stride0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_STRIDE2_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_STRIDE2_FMASK 0xffffU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_SETM_STRIDE2(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_SET_STRIDE2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_GET_STRIDE2(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SETM_STRIDE2(s,val) ( (s)->sourcebufferattributes2 = ((s)->sourcebufferattributes2 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHWARP_SET_STRIDE2(s,val)  ( (s)->sourcebufferattributes2 = (((s)->sourcebufferattributes2 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STRIDE2(s) ((((s)->sourcebufferattributes2) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_STRIDE2_RESET 3U

/* BITSPERPIXEL2: See BitsPerPixel0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_BITSPERPIXEL2_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_BITSPERPIXEL2_FMASK 0x3fU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_SETM_BITSPERPIXEL2(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_SET_BITSPERPIXEL2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_GET_BITSPERPIXEL2(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_BITSPERPIXEL2(s,val) ( (s)->sourcebufferattributes2 = ((s)->sourcebufferattributes2 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHWARP_SET_BITSPERPIXEL2(s,val)  ( (s)->sourcebufferattributes2 = (((s)->sourcebufferattributes2 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BITSPERPIXEL2(s) ((((s)->sourcebufferattributes2) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES2_BITSPERPIXEL2_RESET 32U

/* SOURCEBUFFERDIMENSION2: Source buffer dimension of layer 2. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2 0x00000060U
/* LINEWIDTH2: See LineWidth0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_LINEWIDTH2_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_LINEWIDTH2_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_SETM_LINEWIDTH2(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_SET_LINEWIDTH2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_GET_LINEWIDTH2(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINEWIDTH2(s,val) ( (s)->sourcebufferdimension2 = ((s)->sourcebufferdimension2 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_LINEWIDTH2(s,val)  ( (s)->sourcebufferdimension2 = (((s)->sourcebufferdimension2 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEWIDTH2(s) ((((s)->sourcebufferdimension2) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_LINEWIDTH2_RESET 0x3fffU

/* LINECOUNT2: See LineCount0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_LINECOUNT2_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_LINECOUNT2_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_SETM_LINECOUNT2(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_SET_LINECOUNT2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_GET_LINECOUNT2(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINECOUNT2(s,val) ( (s)->sourcebufferdimension2 = ((s)->sourcebufferdimension2 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_LINECOUNT2(s,val)  ( (s)->sourcebufferdimension2 = (((s)->sourcebufferdimension2 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINECOUNT2(s) ((((s)->sourcebufferdimension2) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION2_LINECOUNT2_RESET 0x3fffU

/* COLORCOMPONENTBITS2: Size of color components for RGB, YUV and index formats (layer 2).
   See ColorComponentBits0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2 0x00000064U
/* COMPONENTBITSALPHA2: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSALPHA2_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSALPHA2_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SETM_COMPONENTBITSALPHA2(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SET_COMPONENTBITSALPHA2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_GET_COMPONENTBITSALPHA2(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSALPHA2(s,val) ( (s)->colorcomponentbits2 = ((s)->colorcomponentbits2 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSALPHA2(s,val)  ( (s)->colorcomponentbits2 = (((s)->colorcomponentbits2 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSALPHA2(s) ((((s)->colorcomponentbits2) ) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSALPHA2_RESET 8U

/* COMPONENTBITSBLUE2: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSBLUE2_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSBLUE2_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SETM_COMPONENTBITSBLUE2(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SET_COMPONENTBITSBLUE2(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_GET_COMPONENTBITSBLUE2(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSBLUE2(s,val) ( (s)->colorcomponentbits2 = ((s)->colorcomponentbits2 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSBLUE2(s,val)  ( (s)->colorcomponentbits2 = (((s)->colorcomponentbits2 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSBLUE2(s) ((((s)->colorcomponentbits2) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSBLUE2_RESET 8U

/* COMPONENTBITSGREEN2: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSGREEN2_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSGREEN2_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SETM_COMPONENTBITSGREEN2(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SET_COMPONENTBITSGREEN2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_GET_COMPONENTBITSGREEN2(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSGREEN2(s,val) ( (s)->colorcomponentbits2 = ((s)->colorcomponentbits2 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSGREEN2(s,val)  ( (s)->colorcomponentbits2 = (((s)->colorcomponentbits2 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSGREEN2(s) ((((s)->colorcomponentbits2) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSGREEN2_RESET 8U

/* COMPONENTBITSRED2: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSRED2_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSRED2_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SETM_COMPONENTBITSRED2(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SET_COMPONENTBITSRED2(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_GET_COMPONENTBITSRED2(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSRED2(s,val) ( (s)->colorcomponentbits2 = ((s)->colorcomponentbits2 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSRED2(s,val)  ( (s)->colorcomponentbits2 = (((s)->colorcomponentbits2 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSRED2(s) ((((s)->colorcomponentbits2) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_COMPONENTBITSRED2_RESET 8U

/* ITUFORMAT2: See ITUFormat0. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_ITUFORMAT2_FSHIFT 31U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_ITUFORMAT2_FMASK 0x1U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SETM_ITUFORMAT2(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_SET_ITUFORMAT2(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_GET_ITUFORMAT2(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ITUFORMAT2(s,val) ( (s)->colorcomponentbits2 = ((s)->colorcomponentbits2 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_ITUFORMAT2(s,val)  ( (s)->colorcomponentbits2 = (((s)->colorcomponentbits2 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ITUFORMAT2(s) ((((s)->colorcomponentbits2) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS2_ITUFORMAT2_RESET 0U

/* COLORCOMPONENTSHIFT2: Bit position of color components for RGB, YUV and index formats (layer 2).
   See ColorComponentShift0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2 0x00000068U
/* COMPONENTSHIFTALPHA2: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTALPHA2_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTALPHA2_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_SETM_COMPONENTSHIFTALPHA2(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_SET_COMPONENTSHIFTALPHA2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_GET_COMPONENTSHIFTALPHA2(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTALPHA2(s,val) ( (s)->colorcomponentshift2 = ((s)->colorcomponentshift2 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTALPHA2(s,val)  ( (s)->colorcomponentshift2 = (((s)->colorcomponentshift2 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTALPHA2(s) ((((s)->colorcomponentshift2) ) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTALPHA2_RESET 0U

/* COMPONENTSHIFTBLUE2: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTBLUE2_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTBLUE2_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_SETM_COMPONENTSHIFTBLUE2(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_SET_COMPONENTSHIFTBLUE2(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_GET_COMPONENTSHIFTBLUE2(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTBLUE2(s,val) ( (s)->colorcomponentshift2 = ((s)->colorcomponentshift2 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTBLUE2(s,val)  ( (s)->colorcomponentshift2 = (((s)->colorcomponentshift2 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTBLUE2(s) ((((s)->colorcomponentshift2) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTBLUE2_RESET 8U

/* COMPONENTSHIFTGREEN2: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTGREEN2_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTGREEN2_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_SETM_COMPONENTSHIFTGREEN2(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_SET_COMPONENTSHIFTGREEN2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_GET_COMPONENTSHIFTGREEN2(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTGREEN2(s,val) ( (s)->colorcomponentshift2 = ((s)->colorcomponentshift2 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTGREEN2(s,val)  ( (s)->colorcomponentshift2 = (((s)->colorcomponentshift2 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTGREEN2(s) ((((s)->colorcomponentshift2) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTGREEN2_RESET 16U

/* COMPONENTSHIFTRED2: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTRED2_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTRED2_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_SETM_COMPONENTSHIFTRED2(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_SET_COMPONENTSHIFTRED2(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_GET_COMPONENTSHIFTRED2(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTRED2(s,val) ( (s)->colorcomponentshift2 = ((s)->colorcomponentshift2 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTRED2(s,val)  ( (s)->colorcomponentshift2 = (((s)->colorcomponentshift2 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTRED2(s) ((((s)->colorcomponentshift2) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT2_COMPONENTSHIFTRED2_RESET 24U

/* LAYEROFFSET2: Position of layer 2 within the destination frame.
   See LayerOffset0. */
#define GFXREG_FETCHWARP_LAYEROFFSET2 0x0000006cU
/* LAYERXOFFSET2: Horizontal offset (X). */
#define GFXREG_FETCHWARP_LAYEROFFSET2_LAYERXOFFSET2_FSHIFT 0U
#define GFXREG_FETCHWARP_LAYEROFFSET2_LAYERXOFFSET2_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET2_SETM_LAYERXOFFSET2(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_LAYEROFFSET2_SET_LAYERXOFFSET2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET2_GET_LAYERXOFFSET2(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERXOFFSET2(s,val) ( (s)->layeroffset2 = ((s)->layeroffset2 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_LAYERXOFFSET2(s,val)  ( (s)->layeroffset2 = (((s)->layeroffset2 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERXOFFSET2(s) ((((s)->layeroffset2) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET2_LAYERXOFFSET2_RESET 0U

/* LAYERYOFFSET2: Vertical offset (Y). */
#define GFXREG_FETCHWARP_LAYEROFFSET2_LAYERYOFFSET2_FSHIFT 16U
#define GFXREG_FETCHWARP_LAYEROFFSET2_LAYERYOFFSET2_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET2_SETM_LAYERYOFFSET2(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_LAYEROFFSET2_SET_LAYERYOFFSET2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET2_GET_LAYERYOFFSET2(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERYOFFSET2(s,val) ( (s)->layeroffset2 = ((s)->layeroffset2 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_LAYERYOFFSET2(s,val)  ( (s)->layeroffset2 = (((s)->layeroffset2 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERYOFFSET2(s) ((((s)->layeroffset2) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET2_LAYERYOFFSET2_RESET 0U

/* CLIPWINDOWOFFSET2: Clip window position for layer 2.
   See ClipWindowOffset0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2 0x00000070U
/* CLIPWINDOWXOFFSET2: Horizontal position (X). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_CLIPWINDOWXOFFSET2_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_CLIPWINDOWXOFFSET2_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_SETM_CLIPWINDOWXOFFSET2(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_SET_CLIPWINDOWXOFFSET2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_GET_CLIPWINDOWXOFFSET2(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWXOFFSET2(s,val) ( (s)->clipwindowoffset2 = ((s)->clipwindowoffset2 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWXOFFSET2(s,val)  ( (s)->clipwindowoffset2 = (((s)->clipwindowoffset2 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWXOFFSET2(s) ((((s)->clipwindowoffset2) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_CLIPWINDOWXOFFSET2_RESET 0U

/* CLIPWINDOWYOFFSET2: Vertical position (Y). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_CLIPWINDOWYOFFSET2_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_CLIPWINDOWYOFFSET2_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_SETM_CLIPWINDOWYOFFSET2(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_SET_CLIPWINDOWYOFFSET2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_GET_CLIPWINDOWYOFFSET2(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWYOFFSET2(s,val) ( (s)->clipwindowoffset2 = ((s)->clipwindowoffset2 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWYOFFSET2(s,val)  ( (s)->clipwindowoffset2 = (((s)->clipwindowoffset2 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWYOFFSET2(s) ((((s)->clipwindowoffset2) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET2_CLIPWINDOWYOFFSET2_RESET 0U

/* CLIPWINDOWDIMENSIONS2: Clip window size for layer 2.
   See ClipWindowDimensions0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2 0x00000074U
/* CLIPWINDOWWIDTH2: Width. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_CLIPWINDOWWIDTH2_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_CLIPWINDOWWIDTH2_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_SETM_CLIPWINDOWWIDTH2(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_SET_CLIPWINDOWWIDTH2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_GET_CLIPWINDOWWIDTH2(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWWIDTH2(s,val) ( (s)->clipwindowdimensions2 = ((s)->clipwindowdimensions2 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWWIDTH2(s,val)  ( (s)->clipwindowdimensions2 = (((s)->clipwindowdimensions2 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWWIDTH2(s) ((((s)->clipwindowdimensions2) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_CLIPWINDOWWIDTH2_RESET 0x0U

/* CLIPWINDOWHEIGHT2: Height. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_CLIPWINDOWHEIGHT2_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_CLIPWINDOWHEIGHT2_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_SETM_CLIPWINDOWHEIGHT2(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_SET_CLIPWINDOWHEIGHT2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_GET_CLIPWINDOWHEIGHT2(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWHEIGHT2(s,val) ( (s)->clipwindowdimensions2 = ((s)->clipwindowdimensions2 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWHEIGHT2(s,val)  ( (s)->clipwindowdimensions2 = (((s)->clipwindowdimensions2 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWHEIGHT2(s) ((((s)->clipwindowdimensions2) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS2_CLIPWINDOWHEIGHT2_RESET 0x0U

/* CONSTANTCOLOR2: Constant color for layer 2.
   See ConstantColor0.        */
#define GFXREG_FETCHWARP_CONSTANTCOLOR2 0x00000078U
/* CONSTANTALPHA2: Alpha. */
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTALPHA2_FSHIFT 0U
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTALPHA2_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_SETM_CONSTANTALPHA2(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_SET_CONSTANTALPHA2(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_GET_CONSTANTALPHA2(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTALPHA2(s,val) ( (s)->constantcolor2 = ((s)->constantcolor2 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_CONSTANTALPHA2(s,val)  ( (s)->constantcolor2 = (((s)->constantcolor2 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTALPHA2(s) ((((s)->constantcolor2) ) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTALPHA2_RESET 0U

/* CONSTANTBLUE2: Blue and V (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTBLUE2_FSHIFT 8U
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTBLUE2_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_SETM_CONSTANTBLUE2(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_SET_CONSTANTBLUE2(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_GET_CONSTANTBLUE2(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTBLUE2(s,val) ( (s)->constantcolor2 = ((s)->constantcolor2 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTBLUE2(s,val)  ( (s)->constantcolor2 = (((s)->constantcolor2 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTBLUE2(s) ((((s)->constantcolor2) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTBLUE2_RESET 0U

/* CONSTANTGREEN2: Green and U (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTGREEN2_FSHIFT 16U
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTGREEN2_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_SETM_CONSTANTGREEN2(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_SET_CONSTANTGREEN2(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_GET_CONSTANTGREEN2(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTGREEN2(s,val) ( (s)->constantcolor2 = ((s)->constantcolor2 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTGREEN2(s,val)  ( (s)->constantcolor2 = (((s)->constantcolor2 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTGREEN2(s) ((((s)->constantcolor2) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTGREEN2_RESET 0U

/* CONSTANTRED2: Red and Y (luma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTRED2_FSHIFT 24U
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTRED2_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_SETM_CONSTANTRED2(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_SET_CONSTANTRED2(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_GET_CONSTANTRED2(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTRED2(s,val) ( (s)->constantcolor2 = ((s)->constantcolor2 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTRED2(s,val)  ( (s)->constantcolor2 = (((s)->constantcolor2 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTRED2(s) ((((s)->constantcolor2) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR2_CONSTANTRED2_RESET 0U

/* LAYERPROPERTY2: Common properties of layer 2.
   See register LayerProperty0.        */
#define GFXREG_FETCHWARP_LAYERPROPERTY2 0x0000007cU
/* TILEMODE2: See TileMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_TILEMODE2_FSHIFT 1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_TILEMODE2_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_TILEMODE2(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_TILEMODE2(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_TILEMODE2(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_TILEMODE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHWARP_SET_TILEMODE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_TILEMODE2(s) ((((s)->layerproperty2) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_TILEMODE2_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_TILEMODE2_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_TILEMODE2_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_TILEMODE2_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_TILEMODE2_RESET 0U

/* ALPHASRCENABLE2: See AlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHASRCENABLE2_FSHIFT 3U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHASRCENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_ALPHASRCENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_ALPHASRCENABLE2(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_ALPHASRCENABLE2(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHASRCENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHWARP_SET_ALPHASRCENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHASRCENABLE2(s) ((((s)->layerproperty2) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHASRCENABLE2_RESET 1U

/* ALPHACONSTENABLE2: See AlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHACONSTENABLE2_FSHIFT 4U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHACONSTENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_ALPHACONSTENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_ALPHACONSTENABLE2(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_ALPHACONSTENABLE2(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHACONSTENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHWARP_SET_ALPHACONSTENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHACONSTENABLE2(s) ((((s)->layerproperty2) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHACONSTENABLE2_RESET 0U

/* ALPHAMASKENABLE2: See AlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHAMASKENABLE2_FSHIFT 5U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHAMASKENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_ALPHAMASKENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_ALPHAMASKENABLE2(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_ALPHAMASKENABLE2(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHAMASKENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHWARP_SET_ALPHAMASKENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHAMASKENABLE2(s) ((((s)->layerproperty2) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHAMASKENABLE2_RESET 0U

/* ALPHATRANSENABLE2: See AlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHATRANSENABLE2_FSHIFT 6U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHATRANSENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_ALPHATRANSENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_ALPHATRANSENABLE2(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_ALPHATRANSENABLE2(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHATRANSENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHWARP_SET_ALPHATRANSENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHATRANSENABLE2(s) ((((s)->layerproperty2) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_ALPHATRANSENABLE2_RESET 0U

/* RGBALPHASRCENABLE2: See RGBAlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHASRCENABLE2_FSHIFT 7U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHASRCENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_RGBALPHASRCENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_RGBALPHASRCENABLE2(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_RGBALPHASRCENABLE2(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHASRCENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHASRCENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHASRCENABLE2(s) ((((s)->layerproperty2) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHASRCENABLE2_RESET 0U

/* RGBALPHACONSTENABLE2: See RGBAlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHACONSTENABLE2_FSHIFT 8U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHACONSTENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_RGBALPHACONSTENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_RGBALPHACONSTENABLE2(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_RGBALPHACONSTENABLE2(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHACONSTENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHACONSTENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHACONSTENABLE2(s) ((((s)->layerproperty2) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHACONSTENABLE2_RESET 0U

/* RGBALPHAMASKENABLE2: See RGBAlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHAMASKENABLE2_FSHIFT 9U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHAMASKENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_RGBALPHAMASKENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_RGBALPHAMASKENABLE2(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_RGBALPHAMASKENABLE2(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHAMASKENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHAMASKENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHAMASKENABLE2(s) ((((s)->layerproperty2) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHAMASKENABLE2_RESET 0U

/* RGBALPHATRANSENABLE2: See RGBAlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHATRANSENABLE2_FSHIFT 10U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHATRANSENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_RGBALPHATRANSENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_RGBALPHATRANSENABLE2(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_RGBALPHATRANSENABLE2(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHATRANSENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHATRANSENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHATRANSENABLE2(s) ((((s)->layerproperty2) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_RGBALPHATRANSENABLE2_RESET 0U

/* PREMULCONSTRGB2: See PremulConstRGB0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_PREMULCONSTRGB2_FSHIFT 11U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_PREMULCONSTRGB2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_PREMULCONSTRGB2(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_PREMULCONSTRGB2(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_PREMULCONSTRGB2(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_PREMULCONSTRGB2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHWARP_SET_PREMULCONSTRGB2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_PREMULCONSTRGB2(s) ((((s)->layerproperty2) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_PREMULCONSTRGB2_RESET 0x0U

/* YUVCONVERSIONMODE2: See YUVConversionMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_YUVCONVERSIONMODE2_FSHIFT 12U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_YUVCONVERSIONMODE2_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_YUVCONVERSIONMODE2(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_YUVCONVERSIONMODE2(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_YUVCONVERSIONMODE2(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_YUVCONVERSIONMODE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHWARP_SET_YUVCONVERSIONMODE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_YUVCONVERSIONMODE2(s) ((((s)->layerproperty2) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_YUVCONVERSIONMODE2_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_YUVCONVERSIONMODE2_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_YUVCONVERSIONMODE2_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_YUVCONVERSIONMODE2_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_YUVCONVERSIONMODE2_RESET 0x0U

/* GAMMAREMOVEENABLE2: See GammaRemoveEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GAMMAREMOVEENABLE2_FSHIFT 14U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GAMMAREMOVEENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_GAMMAREMOVEENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_GAMMAREMOVEENABLE2(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_GAMMAREMOVEENABLE2(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_GAMMAREMOVEENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHWARP_SET_GAMMAREMOVEENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_GAMMAREMOVEENABLE2(s) ((((s)->layerproperty2) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GAMMAREMOVEENABLE2_RESET 0U

/* CLIPWINDOWENABLE2: See ClipWindowEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_CLIPWINDOWENABLE2_FSHIFT 30U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_CLIPWINDOWENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_CLIPWINDOWENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_CLIPWINDOWENABLE2(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_CLIPWINDOWENABLE2(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWENABLE2(s) ((((s)->layerproperty2) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_CLIPWINDOWENABLE2_RESET 0U

/* SOURCEBUFFERENABLE2: See SourceBufferEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SOURCEBUFFERENABLE2_FSHIFT 31U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SOURCEBUFFERENABLE2_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SETM_SOURCEBUFFERENABLE2(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SET_SOURCEBUFFERENABLE2(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY2_GET_SOURCEBUFFERENABLE2(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SOURCEBUFFERENABLE2(s,val) ( (s)->layerproperty2 = ((s)->layerproperty2 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_SOURCEBUFFERENABLE2(s,val)  ( (s)->layerproperty2 = (((s)->layerproperty2 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SOURCEBUFFERENABLE2(s) ((((s)->layerproperty2) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY2_SOURCEBUFFERENABLE2_RESET 0U

/* BASEADDRESS3: Source buffer base address of layer 3. */
#define GFXREG_FETCHWARP_BASEADDRESS3 0x00000080U
/* BASEADDRESS3: See BaseAddress0. */
#define GFXREG_FETCHWARP_BASEADDRESS3_BASEADDRESS3_FSHIFT 0U
#define GFXREG_FETCHWARP_BASEADDRESS3_BASEADDRESS3_FMASK 0xffffffffU
#define GFXREG_FETCHWARP_BASEADDRESS3_SETM_BASEADDRESS3(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHWARP_BASEADDRESS3_SET_BASEADDRESS3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BASEADDRESS3_GET_BASEADDRESS3(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_SETM_BASEADDRESS3(s,val) ( (s)->baseaddress3 = ((s)->baseaddress3 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHWARP_SET_BASEADDRESS3(s,val)  ( (s)->baseaddress3 = (((s)->baseaddress3 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BASEADDRESS3(s) ((((s)->baseaddress3) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_BASEADDRESS3_BASEADDRESS3_RESET 0U

/* SOURCEBUFFERATTRIBUTES3: Source buffer attributes for layer 3. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3 0x00000084U
/* STRIDE3: See Stride0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_STRIDE3_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_STRIDE3_FMASK 0xffffU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_SETM_STRIDE3(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_SET_STRIDE3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_GET_STRIDE3(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SETM_STRIDE3(s,val) ( (s)->sourcebufferattributes3 = ((s)->sourcebufferattributes3 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHWARP_SET_STRIDE3(s,val)  ( (s)->sourcebufferattributes3 = (((s)->sourcebufferattributes3 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STRIDE3(s) ((((s)->sourcebufferattributes3) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_STRIDE3_RESET 3U

/* BITSPERPIXEL3: See BitsPerPixel0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_BITSPERPIXEL3_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_BITSPERPIXEL3_FMASK 0x3fU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_SETM_BITSPERPIXEL3(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_SET_BITSPERPIXEL3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_GET_BITSPERPIXEL3(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_BITSPERPIXEL3(s,val) ( (s)->sourcebufferattributes3 = ((s)->sourcebufferattributes3 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHWARP_SET_BITSPERPIXEL3(s,val)  ( (s)->sourcebufferattributes3 = (((s)->sourcebufferattributes3 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BITSPERPIXEL3(s) ((((s)->sourcebufferattributes3) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES3_BITSPERPIXEL3_RESET 32U

/* SOURCEBUFFERDIMENSION3: Source buffer dimension of layer 3. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3 0x00000088U
/* LINEWIDTH3: See LineWidth0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_LINEWIDTH3_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_LINEWIDTH3_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_SETM_LINEWIDTH3(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_SET_LINEWIDTH3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_GET_LINEWIDTH3(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINEWIDTH3(s,val) ( (s)->sourcebufferdimension3 = ((s)->sourcebufferdimension3 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_LINEWIDTH3(s,val)  ( (s)->sourcebufferdimension3 = (((s)->sourcebufferdimension3 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEWIDTH3(s) ((((s)->sourcebufferdimension3) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_LINEWIDTH3_RESET 0x3fffU

/* LINECOUNT3: See LineCount0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_LINECOUNT3_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_LINECOUNT3_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_SETM_LINECOUNT3(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_SET_LINECOUNT3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_GET_LINECOUNT3(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINECOUNT3(s,val) ( (s)->sourcebufferdimension3 = ((s)->sourcebufferdimension3 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_LINECOUNT3(s,val)  ( (s)->sourcebufferdimension3 = (((s)->sourcebufferdimension3 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINECOUNT3(s) ((((s)->sourcebufferdimension3) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION3_LINECOUNT3_RESET 0x3fffU

/* COLORCOMPONENTBITS3: Size of color components for RGB, YUV and index formats (layer 3).
   See ColorComponentBits0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3 0x0000008cU
/* COMPONENTBITSALPHA3: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSALPHA3_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSALPHA3_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SETM_COMPONENTBITSALPHA3(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SET_COMPONENTBITSALPHA3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_GET_COMPONENTBITSALPHA3(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSALPHA3(s,val) ( (s)->colorcomponentbits3 = ((s)->colorcomponentbits3 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSALPHA3(s,val)  ( (s)->colorcomponentbits3 = (((s)->colorcomponentbits3 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSALPHA3(s) ((((s)->colorcomponentbits3) ) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSALPHA3_RESET 8U

/* COMPONENTBITSBLUE3: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSBLUE3_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSBLUE3_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SETM_COMPONENTBITSBLUE3(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SET_COMPONENTBITSBLUE3(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_GET_COMPONENTBITSBLUE3(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSBLUE3(s,val) ( (s)->colorcomponentbits3 = ((s)->colorcomponentbits3 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSBLUE3(s,val)  ( (s)->colorcomponentbits3 = (((s)->colorcomponentbits3 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSBLUE3(s) ((((s)->colorcomponentbits3) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSBLUE3_RESET 8U

/* COMPONENTBITSGREEN3: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSGREEN3_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSGREEN3_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SETM_COMPONENTBITSGREEN3(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SET_COMPONENTBITSGREEN3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_GET_COMPONENTBITSGREEN3(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSGREEN3(s,val) ( (s)->colorcomponentbits3 = ((s)->colorcomponentbits3 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSGREEN3(s,val)  ( (s)->colorcomponentbits3 = (((s)->colorcomponentbits3 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSGREEN3(s) ((((s)->colorcomponentbits3) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSGREEN3_RESET 8U

/* COMPONENTBITSRED3: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSRED3_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSRED3_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SETM_COMPONENTBITSRED3(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SET_COMPONENTBITSRED3(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_GET_COMPONENTBITSRED3(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSRED3(s,val) ( (s)->colorcomponentbits3 = ((s)->colorcomponentbits3 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSRED3(s,val)  ( (s)->colorcomponentbits3 = (((s)->colorcomponentbits3 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSRED3(s) ((((s)->colorcomponentbits3) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_COMPONENTBITSRED3_RESET 8U

/* ITUFORMAT3: See ITUFormat0. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_ITUFORMAT3_FSHIFT 31U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_ITUFORMAT3_FMASK 0x1U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SETM_ITUFORMAT3(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_SET_ITUFORMAT3(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_GET_ITUFORMAT3(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ITUFORMAT3(s,val) ( (s)->colorcomponentbits3 = ((s)->colorcomponentbits3 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_ITUFORMAT3(s,val)  ( (s)->colorcomponentbits3 = (((s)->colorcomponentbits3 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ITUFORMAT3(s) ((((s)->colorcomponentbits3) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS3_ITUFORMAT3_RESET 0U

/* COLORCOMPONENTSHIFT3: Bit position of color components for RGB, YUV and index formats (layer 3).
   See ColorComponentShift0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3 0x00000090U
/* COMPONENTSHIFTALPHA3: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTALPHA3_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTALPHA3_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_SETM_COMPONENTSHIFTALPHA3(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_SET_COMPONENTSHIFTALPHA3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_GET_COMPONENTSHIFTALPHA3(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTALPHA3(s,val) ( (s)->colorcomponentshift3 = ((s)->colorcomponentshift3 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTALPHA3(s,val)  ( (s)->colorcomponentshift3 = (((s)->colorcomponentshift3 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTALPHA3(s) ((((s)->colorcomponentshift3) ) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTALPHA3_RESET 0U

/* COMPONENTSHIFTBLUE3: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTBLUE3_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTBLUE3_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_SETM_COMPONENTSHIFTBLUE3(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_SET_COMPONENTSHIFTBLUE3(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_GET_COMPONENTSHIFTBLUE3(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTBLUE3(s,val) ( (s)->colorcomponentshift3 = ((s)->colorcomponentshift3 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTBLUE3(s,val)  ( (s)->colorcomponentshift3 = (((s)->colorcomponentshift3 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTBLUE3(s) ((((s)->colorcomponentshift3) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTBLUE3_RESET 8U

/* COMPONENTSHIFTGREEN3: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTGREEN3_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTGREEN3_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_SETM_COMPONENTSHIFTGREEN3(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_SET_COMPONENTSHIFTGREEN3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_GET_COMPONENTSHIFTGREEN3(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTGREEN3(s,val) ( (s)->colorcomponentshift3 = ((s)->colorcomponentshift3 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTGREEN3(s,val)  ( (s)->colorcomponentshift3 = (((s)->colorcomponentshift3 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTGREEN3(s) ((((s)->colorcomponentshift3) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTGREEN3_RESET 16U

/* COMPONENTSHIFTRED3: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTRED3_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTRED3_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_SETM_COMPONENTSHIFTRED3(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_SET_COMPONENTSHIFTRED3(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_GET_COMPONENTSHIFTRED3(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTRED3(s,val) ( (s)->colorcomponentshift3 = ((s)->colorcomponentshift3 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTRED3(s,val)  ( (s)->colorcomponentshift3 = (((s)->colorcomponentshift3 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTRED3(s) ((((s)->colorcomponentshift3) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT3_COMPONENTSHIFTRED3_RESET 24U

/* LAYEROFFSET3: Position of layer 3 within the destination frame.
   See LayerOffset0. */
#define GFXREG_FETCHWARP_LAYEROFFSET3 0x00000094U
/* LAYERXOFFSET3: Horizontal offset (X). */
#define GFXREG_FETCHWARP_LAYEROFFSET3_LAYERXOFFSET3_FSHIFT 0U
#define GFXREG_FETCHWARP_LAYEROFFSET3_LAYERXOFFSET3_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET3_SETM_LAYERXOFFSET3(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_LAYEROFFSET3_SET_LAYERXOFFSET3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET3_GET_LAYERXOFFSET3(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERXOFFSET3(s,val) ( (s)->layeroffset3 = ((s)->layeroffset3 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_LAYERXOFFSET3(s,val)  ( (s)->layeroffset3 = (((s)->layeroffset3 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERXOFFSET3(s) ((((s)->layeroffset3) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET3_LAYERXOFFSET3_RESET 0U

/* LAYERYOFFSET3: Vertical offset (Y). */
#define GFXREG_FETCHWARP_LAYEROFFSET3_LAYERYOFFSET3_FSHIFT 16U
#define GFXREG_FETCHWARP_LAYEROFFSET3_LAYERYOFFSET3_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET3_SETM_LAYERYOFFSET3(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_LAYEROFFSET3_SET_LAYERYOFFSET3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET3_GET_LAYERYOFFSET3(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERYOFFSET3(s,val) ( (s)->layeroffset3 = ((s)->layeroffset3 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_LAYERYOFFSET3(s,val)  ( (s)->layeroffset3 = (((s)->layeroffset3 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERYOFFSET3(s) ((((s)->layeroffset3) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET3_LAYERYOFFSET3_RESET 0U

/* CLIPWINDOWOFFSET3: Clip window position for layer 3.
   See ClipWindowOffset0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3 0x00000098U
/* CLIPWINDOWXOFFSET3: Horizontal position (X). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_CLIPWINDOWXOFFSET3_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_CLIPWINDOWXOFFSET3_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_SETM_CLIPWINDOWXOFFSET3(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_SET_CLIPWINDOWXOFFSET3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_GET_CLIPWINDOWXOFFSET3(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWXOFFSET3(s,val) ( (s)->clipwindowoffset3 = ((s)->clipwindowoffset3 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWXOFFSET3(s,val)  ( (s)->clipwindowoffset3 = (((s)->clipwindowoffset3 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWXOFFSET3(s) ((((s)->clipwindowoffset3) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_CLIPWINDOWXOFFSET3_RESET 0U

/* CLIPWINDOWYOFFSET3: Vertical position (Y). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_CLIPWINDOWYOFFSET3_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_CLIPWINDOWYOFFSET3_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_SETM_CLIPWINDOWYOFFSET3(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_SET_CLIPWINDOWYOFFSET3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_GET_CLIPWINDOWYOFFSET3(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWYOFFSET3(s,val) ( (s)->clipwindowoffset3 = ((s)->clipwindowoffset3 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWYOFFSET3(s,val)  ( (s)->clipwindowoffset3 = (((s)->clipwindowoffset3 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWYOFFSET3(s) ((((s)->clipwindowoffset3) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET3_CLIPWINDOWYOFFSET3_RESET 0U

/* CLIPWINDOWDIMENSIONS3: Clip window size for layer 3.
   See ClipWindowDimensions0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3 0x0000009cU
/* CLIPWINDOWWIDTH3: Width. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_CLIPWINDOWWIDTH3_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_CLIPWINDOWWIDTH3_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_SETM_CLIPWINDOWWIDTH3(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_SET_CLIPWINDOWWIDTH3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_GET_CLIPWINDOWWIDTH3(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWWIDTH3(s,val) ( (s)->clipwindowdimensions3 = ((s)->clipwindowdimensions3 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWWIDTH3(s,val)  ( (s)->clipwindowdimensions3 = (((s)->clipwindowdimensions3 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWWIDTH3(s) ((((s)->clipwindowdimensions3) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_CLIPWINDOWWIDTH3_RESET 0x0U

/* CLIPWINDOWHEIGHT3: Height. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_CLIPWINDOWHEIGHT3_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_CLIPWINDOWHEIGHT3_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_SETM_CLIPWINDOWHEIGHT3(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_SET_CLIPWINDOWHEIGHT3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_GET_CLIPWINDOWHEIGHT3(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWHEIGHT3(s,val) ( (s)->clipwindowdimensions3 = ((s)->clipwindowdimensions3 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWHEIGHT3(s,val)  ( (s)->clipwindowdimensions3 = (((s)->clipwindowdimensions3 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWHEIGHT3(s) ((((s)->clipwindowdimensions3) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS3_CLIPWINDOWHEIGHT3_RESET 0x0U

/* CONSTANTCOLOR3: Constant color for layer 3.
   See ConstantColor0.        */
#define GFXREG_FETCHWARP_CONSTANTCOLOR3 0x000000a0U
/* CONSTANTALPHA3: Alpha. */
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTALPHA3_FSHIFT 0U
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTALPHA3_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_SETM_CONSTANTALPHA3(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_SET_CONSTANTALPHA3(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_GET_CONSTANTALPHA3(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTALPHA3(s,val) ( (s)->constantcolor3 = ((s)->constantcolor3 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_CONSTANTALPHA3(s,val)  ( (s)->constantcolor3 = (((s)->constantcolor3 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTALPHA3(s) ((((s)->constantcolor3) ) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTALPHA3_RESET 0U

/* CONSTANTBLUE3: Blue and V (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTBLUE3_FSHIFT 8U
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTBLUE3_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_SETM_CONSTANTBLUE3(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_SET_CONSTANTBLUE3(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_GET_CONSTANTBLUE3(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTBLUE3(s,val) ( (s)->constantcolor3 = ((s)->constantcolor3 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTBLUE3(s,val)  ( (s)->constantcolor3 = (((s)->constantcolor3 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTBLUE3(s) ((((s)->constantcolor3) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTBLUE3_RESET 0U

/* CONSTANTGREEN3: Green and U (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTGREEN3_FSHIFT 16U
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTGREEN3_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_SETM_CONSTANTGREEN3(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_SET_CONSTANTGREEN3(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_GET_CONSTANTGREEN3(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTGREEN3(s,val) ( (s)->constantcolor3 = ((s)->constantcolor3 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTGREEN3(s,val)  ( (s)->constantcolor3 = (((s)->constantcolor3 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTGREEN3(s) ((((s)->constantcolor3) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTGREEN3_RESET 0U

/* CONSTANTRED3: Red and Y (luma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTRED3_FSHIFT 24U
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTRED3_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_SETM_CONSTANTRED3(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_SET_CONSTANTRED3(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_GET_CONSTANTRED3(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTRED3(s,val) ( (s)->constantcolor3 = ((s)->constantcolor3 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTRED3(s,val)  ( (s)->constantcolor3 = (((s)->constantcolor3 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTRED3(s) ((((s)->constantcolor3) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR3_CONSTANTRED3_RESET 0U

/* LAYERPROPERTY3: Common properties of layer 3.
   See register LayerProperty0.        */
#define GFXREG_FETCHWARP_LAYERPROPERTY3 0x000000a4U
/* TILEMODE3: See TileMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_TILEMODE3_FSHIFT 1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_TILEMODE3_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_TILEMODE3(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_TILEMODE3(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_TILEMODE3(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_TILEMODE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHWARP_SET_TILEMODE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_TILEMODE3(s) ((((s)->layerproperty3) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_TILEMODE3_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_TILEMODE3_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_TILEMODE3_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_TILEMODE3_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_TILEMODE3_RESET 0U

/* ALPHASRCENABLE3: See AlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHASRCENABLE3_FSHIFT 3U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHASRCENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_ALPHASRCENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_ALPHASRCENABLE3(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_ALPHASRCENABLE3(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHASRCENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHWARP_SET_ALPHASRCENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHASRCENABLE3(s) ((((s)->layerproperty3) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHASRCENABLE3_RESET 1U

/* ALPHACONSTENABLE3: See AlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHACONSTENABLE3_FSHIFT 4U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHACONSTENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_ALPHACONSTENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_ALPHACONSTENABLE3(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_ALPHACONSTENABLE3(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHACONSTENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHWARP_SET_ALPHACONSTENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHACONSTENABLE3(s) ((((s)->layerproperty3) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHACONSTENABLE3_RESET 0U

/* ALPHAMASKENABLE3: See AlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHAMASKENABLE3_FSHIFT 5U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHAMASKENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_ALPHAMASKENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_ALPHAMASKENABLE3(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_ALPHAMASKENABLE3(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHAMASKENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHWARP_SET_ALPHAMASKENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHAMASKENABLE3(s) ((((s)->layerproperty3) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHAMASKENABLE3_RESET 0U

/* ALPHATRANSENABLE3: See AlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHATRANSENABLE3_FSHIFT 6U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHATRANSENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_ALPHATRANSENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_ALPHATRANSENABLE3(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_ALPHATRANSENABLE3(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHATRANSENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHWARP_SET_ALPHATRANSENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHATRANSENABLE3(s) ((((s)->layerproperty3) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_ALPHATRANSENABLE3_RESET 0U

/* RGBALPHASRCENABLE3: See RGBAlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHASRCENABLE3_FSHIFT 7U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHASRCENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_RGBALPHASRCENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_RGBALPHASRCENABLE3(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_RGBALPHASRCENABLE3(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHASRCENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHASRCENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHASRCENABLE3(s) ((((s)->layerproperty3) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHASRCENABLE3_RESET 0U

/* RGBALPHACONSTENABLE3: See RGBAlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHACONSTENABLE3_FSHIFT 8U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHACONSTENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_RGBALPHACONSTENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_RGBALPHACONSTENABLE3(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_RGBALPHACONSTENABLE3(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHACONSTENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHACONSTENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHACONSTENABLE3(s) ((((s)->layerproperty3) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHACONSTENABLE3_RESET 0U

/* RGBALPHAMASKENABLE3: See RGBAlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHAMASKENABLE3_FSHIFT 9U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHAMASKENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_RGBALPHAMASKENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_RGBALPHAMASKENABLE3(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_RGBALPHAMASKENABLE3(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHAMASKENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHAMASKENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHAMASKENABLE3(s) ((((s)->layerproperty3) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHAMASKENABLE3_RESET 0U

/* RGBALPHATRANSENABLE3: See RGBAlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHATRANSENABLE3_FSHIFT 10U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHATRANSENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_RGBALPHATRANSENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_RGBALPHATRANSENABLE3(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_RGBALPHATRANSENABLE3(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHATRANSENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHATRANSENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHATRANSENABLE3(s) ((((s)->layerproperty3) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_RGBALPHATRANSENABLE3_RESET 0U

/* PREMULCONSTRGB3: See PremulConstRGB0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_PREMULCONSTRGB3_FSHIFT 11U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_PREMULCONSTRGB3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_PREMULCONSTRGB3(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_PREMULCONSTRGB3(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_PREMULCONSTRGB3(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_PREMULCONSTRGB3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHWARP_SET_PREMULCONSTRGB3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_PREMULCONSTRGB3(s) ((((s)->layerproperty3) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_PREMULCONSTRGB3_RESET 0x0U

/* YUVCONVERSIONMODE3: See YUVConversionMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_YUVCONVERSIONMODE3_FSHIFT 12U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_YUVCONVERSIONMODE3_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_YUVCONVERSIONMODE3(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_YUVCONVERSIONMODE3(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_YUVCONVERSIONMODE3(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_YUVCONVERSIONMODE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHWARP_SET_YUVCONVERSIONMODE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_YUVCONVERSIONMODE3(s) ((((s)->layerproperty3) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_YUVCONVERSIONMODE3_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_YUVCONVERSIONMODE3_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_YUVCONVERSIONMODE3_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_YUVCONVERSIONMODE3_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_YUVCONVERSIONMODE3_RESET 0x0U

/* GAMMAREMOVEENABLE3: See GammaRemoveEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GAMMAREMOVEENABLE3_FSHIFT 14U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GAMMAREMOVEENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_GAMMAREMOVEENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_GAMMAREMOVEENABLE3(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_GAMMAREMOVEENABLE3(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_GAMMAREMOVEENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHWARP_SET_GAMMAREMOVEENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_GAMMAREMOVEENABLE3(s) ((((s)->layerproperty3) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GAMMAREMOVEENABLE3_RESET 0U

/* CLIPWINDOWENABLE3: See ClipWindowEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_CLIPWINDOWENABLE3_FSHIFT 30U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_CLIPWINDOWENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_CLIPWINDOWENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_CLIPWINDOWENABLE3(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_CLIPWINDOWENABLE3(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWENABLE3(s) ((((s)->layerproperty3) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_CLIPWINDOWENABLE3_RESET 0U

/* SOURCEBUFFERENABLE3: See SourceBufferEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SOURCEBUFFERENABLE3_FSHIFT 31U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SOURCEBUFFERENABLE3_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SETM_SOURCEBUFFERENABLE3(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SET_SOURCEBUFFERENABLE3(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY3_GET_SOURCEBUFFERENABLE3(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SOURCEBUFFERENABLE3(s,val) ( (s)->layerproperty3 = ((s)->layerproperty3 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_SOURCEBUFFERENABLE3(s,val)  ( (s)->layerproperty3 = (((s)->layerproperty3 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SOURCEBUFFERENABLE3(s) ((((s)->layerproperty3) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY3_SOURCEBUFFERENABLE3_RESET 0U

/* BASEADDRESS4: Source buffer base address of layer 4. */
#define GFXREG_FETCHWARP_BASEADDRESS4 0x000000a8U
/* BASEADDRESS4: See BaseAddress0. */
#define GFXREG_FETCHWARP_BASEADDRESS4_BASEADDRESS4_FSHIFT 0U
#define GFXREG_FETCHWARP_BASEADDRESS4_BASEADDRESS4_FMASK 0xffffffffU
#define GFXREG_FETCHWARP_BASEADDRESS4_SETM_BASEADDRESS4(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHWARP_BASEADDRESS4_SET_BASEADDRESS4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BASEADDRESS4_GET_BASEADDRESS4(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_SETM_BASEADDRESS4(s,val) ( (s)->baseaddress4 = ((s)->baseaddress4 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHWARP_SET_BASEADDRESS4(s,val)  ( (s)->baseaddress4 = (((s)->baseaddress4 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BASEADDRESS4(s) ((((s)->baseaddress4) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_BASEADDRESS4_BASEADDRESS4_RESET 0U

/* SOURCEBUFFERATTRIBUTES4: Source buffer attributes for layer 4. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4 0x000000acU
/* STRIDE4: See Stride0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_STRIDE4_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_STRIDE4_FMASK 0xffffU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_SETM_STRIDE4(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_SET_STRIDE4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_GET_STRIDE4(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SETM_STRIDE4(s,val) ( (s)->sourcebufferattributes4 = ((s)->sourcebufferattributes4 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHWARP_SET_STRIDE4(s,val)  ( (s)->sourcebufferattributes4 = (((s)->sourcebufferattributes4 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STRIDE4(s) ((((s)->sourcebufferattributes4) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_STRIDE4_RESET 3U

/* BITSPERPIXEL4: See BitsPerPixel0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_BITSPERPIXEL4_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_BITSPERPIXEL4_FMASK 0x3fU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_SETM_BITSPERPIXEL4(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_SET_BITSPERPIXEL4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_GET_BITSPERPIXEL4(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_BITSPERPIXEL4(s,val) ( (s)->sourcebufferattributes4 = ((s)->sourcebufferattributes4 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHWARP_SET_BITSPERPIXEL4(s,val)  ( (s)->sourcebufferattributes4 = (((s)->sourcebufferattributes4 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BITSPERPIXEL4(s) ((((s)->sourcebufferattributes4) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES4_BITSPERPIXEL4_RESET 32U

/* SOURCEBUFFERDIMENSION4: Source buffer dimension of layer 4. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4 0x000000b0U
/* LINEWIDTH4: See LineWidth0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_LINEWIDTH4_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_LINEWIDTH4_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_SETM_LINEWIDTH4(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_SET_LINEWIDTH4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_GET_LINEWIDTH4(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINEWIDTH4(s,val) ( (s)->sourcebufferdimension4 = ((s)->sourcebufferdimension4 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_LINEWIDTH4(s,val)  ( (s)->sourcebufferdimension4 = (((s)->sourcebufferdimension4 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEWIDTH4(s) ((((s)->sourcebufferdimension4) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_LINEWIDTH4_RESET 0x3fffU

/* LINECOUNT4: See LineCount0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_LINECOUNT4_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_LINECOUNT4_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_SETM_LINECOUNT4(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_SET_LINECOUNT4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_GET_LINECOUNT4(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINECOUNT4(s,val) ( (s)->sourcebufferdimension4 = ((s)->sourcebufferdimension4 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_LINECOUNT4(s,val)  ( (s)->sourcebufferdimension4 = (((s)->sourcebufferdimension4 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINECOUNT4(s) ((((s)->sourcebufferdimension4) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION4_LINECOUNT4_RESET 0x3fffU

/* COLORCOMPONENTBITS4: Size of color components for RGB, YUV and index formats (layer 4).
   See ColorComponentBits0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4 0x000000b4U
/* COMPONENTBITSALPHA4: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSALPHA4_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSALPHA4_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SETM_COMPONENTBITSALPHA4(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SET_COMPONENTBITSALPHA4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_GET_COMPONENTBITSALPHA4(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSALPHA4(s,val) ( (s)->colorcomponentbits4 = ((s)->colorcomponentbits4 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSALPHA4(s,val)  ( (s)->colorcomponentbits4 = (((s)->colorcomponentbits4 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSALPHA4(s) ((((s)->colorcomponentbits4) ) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSALPHA4_RESET 8U

/* COMPONENTBITSBLUE4: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSBLUE4_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSBLUE4_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SETM_COMPONENTBITSBLUE4(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SET_COMPONENTBITSBLUE4(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_GET_COMPONENTBITSBLUE4(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSBLUE4(s,val) ( (s)->colorcomponentbits4 = ((s)->colorcomponentbits4 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSBLUE4(s,val)  ( (s)->colorcomponentbits4 = (((s)->colorcomponentbits4 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSBLUE4(s) ((((s)->colorcomponentbits4) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSBLUE4_RESET 8U

/* COMPONENTBITSGREEN4: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSGREEN4_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSGREEN4_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SETM_COMPONENTBITSGREEN4(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SET_COMPONENTBITSGREEN4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_GET_COMPONENTBITSGREEN4(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSGREEN4(s,val) ( (s)->colorcomponentbits4 = ((s)->colorcomponentbits4 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSGREEN4(s,val)  ( (s)->colorcomponentbits4 = (((s)->colorcomponentbits4 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSGREEN4(s) ((((s)->colorcomponentbits4) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSGREEN4_RESET 8U

/* COMPONENTBITSRED4: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSRED4_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSRED4_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SETM_COMPONENTBITSRED4(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SET_COMPONENTBITSRED4(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_GET_COMPONENTBITSRED4(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSRED4(s,val) ( (s)->colorcomponentbits4 = ((s)->colorcomponentbits4 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSRED4(s,val)  ( (s)->colorcomponentbits4 = (((s)->colorcomponentbits4 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSRED4(s) ((((s)->colorcomponentbits4) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_COMPONENTBITSRED4_RESET 8U

/* ITUFORMAT4: See ITUFormat0. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_ITUFORMAT4_FSHIFT 31U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_ITUFORMAT4_FMASK 0x1U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SETM_ITUFORMAT4(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_SET_ITUFORMAT4(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_GET_ITUFORMAT4(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ITUFORMAT4(s,val) ( (s)->colorcomponentbits4 = ((s)->colorcomponentbits4 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_ITUFORMAT4(s,val)  ( (s)->colorcomponentbits4 = (((s)->colorcomponentbits4 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ITUFORMAT4(s) ((((s)->colorcomponentbits4) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS4_ITUFORMAT4_RESET 0U

/* COLORCOMPONENTSHIFT4: Bit position of color components for RGB, YUV and index formats (layer 4).
   See ColorComponentShift0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4 0x000000b8U
/* COMPONENTSHIFTALPHA4: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTALPHA4_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTALPHA4_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_SETM_COMPONENTSHIFTALPHA4(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_SET_COMPONENTSHIFTALPHA4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_GET_COMPONENTSHIFTALPHA4(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTALPHA4(s,val) ( (s)->colorcomponentshift4 = ((s)->colorcomponentshift4 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTALPHA4(s,val)  ( (s)->colorcomponentshift4 = (((s)->colorcomponentshift4 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTALPHA4(s) ((((s)->colorcomponentshift4) ) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTALPHA4_RESET 0U

/* COMPONENTSHIFTBLUE4: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTBLUE4_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTBLUE4_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_SETM_COMPONENTSHIFTBLUE4(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_SET_COMPONENTSHIFTBLUE4(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_GET_COMPONENTSHIFTBLUE4(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTBLUE4(s,val) ( (s)->colorcomponentshift4 = ((s)->colorcomponentshift4 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTBLUE4(s,val)  ( (s)->colorcomponentshift4 = (((s)->colorcomponentshift4 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTBLUE4(s) ((((s)->colorcomponentshift4) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTBLUE4_RESET 8U

/* COMPONENTSHIFTGREEN4: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTGREEN4_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTGREEN4_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_SETM_COMPONENTSHIFTGREEN4(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_SET_COMPONENTSHIFTGREEN4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_GET_COMPONENTSHIFTGREEN4(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTGREEN4(s,val) ( (s)->colorcomponentshift4 = ((s)->colorcomponentshift4 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTGREEN4(s,val)  ( (s)->colorcomponentshift4 = (((s)->colorcomponentshift4 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTGREEN4(s) ((((s)->colorcomponentshift4) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTGREEN4_RESET 16U

/* COMPONENTSHIFTRED4: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTRED4_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTRED4_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_SETM_COMPONENTSHIFTRED4(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_SET_COMPONENTSHIFTRED4(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_GET_COMPONENTSHIFTRED4(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTRED4(s,val) ( (s)->colorcomponentshift4 = ((s)->colorcomponentshift4 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTRED4(s,val)  ( (s)->colorcomponentshift4 = (((s)->colorcomponentshift4 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTRED4(s) ((((s)->colorcomponentshift4) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT4_COMPONENTSHIFTRED4_RESET 24U

/* LAYEROFFSET4: Position of layer 4 within the destination frame.
   See LayerOffset0. */
#define GFXREG_FETCHWARP_LAYEROFFSET4 0x000000bcU
/* LAYERXOFFSET4: Horizontal offset (X). */
#define GFXREG_FETCHWARP_LAYEROFFSET4_LAYERXOFFSET4_FSHIFT 0U
#define GFXREG_FETCHWARP_LAYEROFFSET4_LAYERXOFFSET4_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET4_SETM_LAYERXOFFSET4(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_LAYEROFFSET4_SET_LAYERXOFFSET4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET4_GET_LAYERXOFFSET4(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERXOFFSET4(s,val) ( (s)->layeroffset4 = ((s)->layeroffset4 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_LAYERXOFFSET4(s,val)  ( (s)->layeroffset4 = (((s)->layeroffset4 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERXOFFSET4(s) ((((s)->layeroffset4) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET4_LAYERXOFFSET4_RESET 0U

/* LAYERYOFFSET4: Vertical offset (Y). */
#define GFXREG_FETCHWARP_LAYEROFFSET4_LAYERYOFFSET4_FSHIFT 16U
#define GFXREG_FETCHWARP_LAYEROFFSET4_LAYERYOFFSET4_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET4_SETM_LAYERYOFFSET4(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_LAYEROFFSET4_SET_LAYERYOFFSET4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET4_GET_LAYERYOFFSET4(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERYOFFSET4(s,val) ( (s)->layeroffset4 = ((s)->layeroffset4 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_LAYERYOFFSET4(s,val)  ( (s)->layeroffset4 = (((s)->layeroffset4 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERYOFFSET4(s) ((((s)->layeroffset4) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET4_LAYERYOFFSET4_RESET 0U

/* CLIPWINDOWOFFSET4: Clip window position for layer 4.
   See ClipWindowOffset0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4 0x000000c0U
/* CLIPWINDOWXOFFSET4: Horizontal position (X). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_CLIPWINDOWXOFFSET4_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_CLIPWINDOWXOFFSET4_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_SETM_CLIPWINDOWXOFFSET4(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_SET_CLIPWINDOWXOFFSET4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_GET_CLIPWINDOWXOFFSET4(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWXOFFSET4(s,val) ( (s)->clipwindowoffset4 = ((s)->clipwindowoffset4 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWXOFFSET4(s,val)  ( (s)->clipwindowoffset4 = (((s)->clipwindowoffset4 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWXOFFSET4(s) ((((s)->clipwindowoffset4) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_CLIPWINDOWXOFFSET4_RESET 0U

/* CLIPWINDOWYOFFSET4: Vertical position (Y). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_CLIPWINDOWYOFFSET4_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_CLIPWINDOWYOFFSET4_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_SETM_CLIPWINDOWYOFFSET4(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_SET_CLIPWINDOWYOFFSET4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_GET_CLIPWINDOWYOFFSET4(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWYOFFSET4(s,val) ( (s)->clipwindowoffset4 = ((s)->clipwindowoffset4 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWYOFFSET4(s,val)  ( (s)->clipwindowoffset4 = (((s)->clipwindowoffset4 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWYOFFSET4(s) ((((s)->clipwindowoffset4) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET4_CLIPWINDOWYOFFSET4_RESET 0U

/* CLIPWINDOWDIMENSIONS4: Clip window size for layer 4.
   See ClipWindowDimensions0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4 0x000000c4U
/* CLIPWINDOWWIDTH4: Width. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_CLIPWINDOWWIDTH4_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_CLIPWINDOWWIDTH4_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_SETM_CLIPWINDOWWIDTH4(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_SET_CLIPWINDOWWIDTH4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_GET_CLIPWINDOWWIDTH4(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWWIDTH4(s,val) ( (s)->clipwindowdimensions4 = ((s)->clipwindowdimensions4 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWWIDTH4(s,val)  ( (s)->clipwindowdimensions4 = (((s)->clipwindowdimensions4 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWWIDTH4(s) ((((s)->clipwindowdimensions4) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_CLIPWINDOWWIDTH4_RESET 0x0U

/* CLIPWINDOWHEIGHT4: Height. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_CLIPWINDOWHEIGHT4_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_CLIPWINDOWHEIGHT4_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_SETM_CLIPWINDOWHEIGHT4(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_SET_CLIPWINDOWHEIGHT4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_GET_CLIPWINDOWHEIGHT4(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWHEIGHT4(s,val) ( (s)->clipwindowdimensions4 = ((s)->clipwindowdimensions4 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWHEIGHT4(s,val)  ( (s)->clipwindowdimensions4 = (((s)->clipwindowdimensions4 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWHEIGHT4(s) ((((s)->clipwindowdimensions4) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS4_CLIPWINDOWHEIGHT4_RESET 0x0U

/* CONSTANTCOLOR4: Constant color for layer 4.
   See ConstantColor0.        */
#define GFXREG_FETCHWARP_CONSTANTCOLOR4 0x000000c8U
/* CONSTANTALPHA4: Alpha. */
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTALPHA4_FSHIFT 0U
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTALPHA4_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_SETM_CONSTANTALPHA4(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_SET_CONSTANTALPHA4(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_GET_CONSTANTALPHA4(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTALPHA4(s,val) ( (s)->constantcolor4 = ((s)->constantcolor4 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_CONSTANTALPHA4(s,val)  ( (s)->constantcolor4 = (((s)->constantcolor4 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTALPHA4(s) ((((s)->constantcolor4) ) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTALPHA4_RESET 0U

/* CONSTANTBLUE4: Blue and V (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTBLUE4_FSHIFT 8U
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTBLUE4_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_SETM_CONSTANTBLUE4(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_SET_CONSTANTBLUE4(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_GET_CONSTANTBLUE4(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTBLUE4(s,val) ( (s)->constantcolor4 = ((s)->constantcolor4 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTBLUE4(s,val)  ( (s)->constantcolor4 = (((s)->constantcolor4 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTBLUE4(s) ((((s)->constantcolor4) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTBLUE4_RESET 0U

/* CONSTANTGREEN4: Green and U (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTGREEN4_FSHIFT 16U
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTGREEN4_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_SETM_CONSTANTGREEN4(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_SET_CONSTANTGREEN4(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_GET_CONSTANTGREEN4(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTGREEN4(s,val) ( (s)->constantcolor4 = ((s)->constantcolor4 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTGREEN4(s,val)  ( (s)->constantcolor4 = (((s)->constantcolor4 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTGREEN4(s) ((((s)->constantcolor4) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTGREEN4_RESET 0U

/* CONSTANTRED4: Red and Y (luma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTRED4_FSHIFT 24U
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTRED4_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_SETM_CONSTANTRED4(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_SET_CONSTANTRED4(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_GET_CONSTANTRED4(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTRED4(s,val) ( (s)->constantcolor4 = ((s)->constantcolor4 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTRED4(s,val)  ( (s)->constantcolor4 = (((s)->constantcolor4 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTRED4(s) ((((s)->constantcolor4) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR4_CONSTANTRED4_RESET 0U

/* LAYERPROPERTY4: Common properties of layer 4.
   See register LayerProperty0.        */
#define GFXREG_FETCHWARP_LAYERPROPERTY4 0x000000ccU
/* TILEMODE4: See TileMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_TILEMODE4_FSHIFT 1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_TILEMODE4_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_TILEMODE4(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_TILEMODE4(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_TILEMODE4(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_TILEMODE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHWARP_SET_TILEMODE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_TILEMODE4(s) ((((s)->layerproperty4) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_TILEMODE4_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_TILEMODE4_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_TILEMODE4_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_TILEMODE4_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_TILEMODE4_RESET 0U

/* ALPHASRCENABLE4: See AlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHASRCENABLE4_FSHIFT 3U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHASRCENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_ALPHASRCENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_ALPHASRCENABLE4(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_ALPHASRCENABLE4(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHASRCENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHWARP_SET_ALPHASRCENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHASRCENABLE4(s) ((((s)->layerproperty4) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHASRCENABLE4_RESET 1U

/* ALPHACONSTENABLE4: See AlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHACONSTENABLE4_FSHIFT 4U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHACONSTENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_ALPHACONSTENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_ALPHACONSTENABLE4(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_ALPHACONSTENABLE4(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHACONSTENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHWARP_SET_ALPHACONSTENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHACONSTENABLE4(s) ((((s)->layerproperty4) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHACONSTENABLE4_RESET 0U

/* ALPHAMASKENABLE4: See AlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHAMASKENABLE4_FSHIFT 5U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHAMASKENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_ALPHAMASKENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_ALPHAMASKENABLE4(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_ALPHAMASKENABLE4(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHAMASKENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHWARP_SET_ALPHAMASKENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHAMASKENABLE4(s) ((((s)->layerproperty4) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHAMASKENABLE4_RESET 0U

/* ALPHATRANSENABLE4: See AlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHATRANSENABLE4_FSHIFT 6U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHATRANSENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_ALPHATRANSENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_ALPHATRANSENABLE4(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_ALPHATRANSENABLE4(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHATRANSENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHWARP_SET_ALPHATRANSENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHATRANSENABLE4(s) ((((s)->layerproperty4) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_ALPHATRANSENABLE4_RESET 0U

/* RGBALPHASRCENABLE4: See RGBAlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHASRCENABLE4_FSHIFT 7U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHASRCENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_RGBALPHASRCENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_RGBALPHASRCENABLE4(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_RGBALPHASRCENABLE4(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHASRCENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHASRCENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHASRCENABLE4(s) ((((s)->layerproperty4) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHASRCENABLE4_RESET 0U

/* RGBALPHACONSTENABLE4: See RGBAlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHACONSTENABLE4_FSHIFT 8U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHACONSTENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_RGBALPHACONSTENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_RGBALPHACONSTENABLE4(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_RGBALPHACONSTENABLE4(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHACONSTENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHACONSTENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHACONSTENABLE4(s) ((((s)->layerproperty4) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHACONSTENABLE4_RESET 0U

/* RGBALPHAMASKENABLE4: See RGBAlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHAMASKENABLE4_FSHIFT 9U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHAMASKENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_RGBALPHAMASKENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_RGBALPHAMASKENABLE4(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_RGBALPHAMASKENABLE4(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHAMASKENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHAMASKENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHAMASKENABLE4(s) ((((s)->layerproperty4) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHAMASKENABLE4_RESET 0U

/* RGBALPHATRANSENABLE4: See RGBAlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHATRANSENABLE4_FSHIFT 10U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHATRANSENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_RGBALPHATRANSENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_RGBALPHATRANSENABLE4(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_RGBALPHATRANSENABLE4(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHATRANSENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHATRANSENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHATRANSENABLE4(s) ((((s)->layerproperty4) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_RGBALPHATRANSENABLE4_RESET 0U

/* PREMULCONSTRGB4: See PremulConstRGB0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_PREMULCONSTRGB4_FSHIFT 11U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_PREMULCONSTRGB4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_PREMULCONSTRGB4(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_PREMULCONSTRGB4(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_PREMULCONSTRGB4(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_PREMULCONSTRGB4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHWARP_SET_PREMULCONSTRGB4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_PREMULCONSTRGB4(s) ((((s)->layerproperty4) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_PREMULCONSTRGB4_RESET 0x0U

/* YUVCONVERSIONMODE4: See YUVConversionMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_YUVCONVERSIONMODE4_FSHIFT 12U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_YUVCONVERSIONMODE4_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_YUVCONVERSIONMODE4(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_YUVCONVERSIONMODE4(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_YUVCONVERSIONMODE4(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_YUVCONVERSIONMODE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHWARP_SET_YUVCONVERSIONMODE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_YUVCONVERSIONMODE4(s) ((((s)->layerproperty4) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_YUVCONVERSIONMODE4_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_YUVCONVERSIONMODE4_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_YUVCONVERSIONMODE4_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_YUVCONVERSIONMODE4_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_YUVCONVERSIONMODE4_RESET 0x0U

/* GAMMAREMOVEENABLE4: See GammaRemoveEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GAMMAREMOVEENABLE4_FSHIFT 14U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GAMMAREMOVEENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_GAMMAREMOVEENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_GAMMAREMOVEENABLE4(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_GAMMAREMOVEENABLE4(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_GAMMAREMOVEENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHWARP_SET_GAMMAREMOVEENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_GAMMAREMOVEENABLE4(s) ((((s)->layerproperty4) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GAMMAREMOVEENABLE4_RESET 0U

/* CLIPWINDOWENABLE4: See ClipWindowEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_CLIPWINDOWENABLE4_FSHIFT 30U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_CLIPWINDOWENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_CLIPWINDOWENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_CLIPWINDOWENABLE4(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_CLIPWINDOWENABLE4(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWENABLE4(s) ((((s)->layerproperty4) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_CLIPWINDOWENABLE4_RESET 0U

/* SOURCEBUFFERENABLE4: See SourceBufferEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SOURCEBUFFERENABLE4_FSHIFT 31U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SOURCEBUFFERENABLE4_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SETM_SOURCEBUFFERENABLE4(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SET_SOURCEBUFFERENABLE4(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY4_GET_SOURCEBUFFERENABLE4(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SOURCEBUFFERENABLE4(s,val) ( (s)->layerproperty4 = ((s)->layerproperty4 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_SOURCEBUFFERENABLE4(s,val)  ( (s)->layerproperty4 = (((s)->layerproperty4 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SOURCEBUFFERENABLE4(s) ((((s)->layerproperty4) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY4_SOURCEBUFFERENABLE4_RESET 0U

/* BASEADDRESS5: Source buffer base address of layer 5. */
#define GFXREG_FETCHWARP_BASEADDRESS5 0x000000d0U
/* BASEADDRESS5: See BaseAddress0. */
#define GFXREG_FETCHWARP_BASEADDRESS5_BASEADDRESS5_FSHIFT 0U
#define GFXREG_FETCHWARP_BASEADDRESS5_BASEADDRESS5_FMASK 0xffffffffU
#define GFXREG_FETCHWARP_BASEADDRESS5_SETM_BASEADDRESS5(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHWARP_BASEADDRESS5_SET_BASEADDRESS5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BASEADDRESS5_GET_BASEADDRESS5(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_SETM_BASEADDRESS5(s,val) ( (s)->baseaddress5 = ((s)->baseaddress5 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHWARP_SET_BASEADDRESS5(s,val)  ( (s)->baseaddress5 = (((s)->baseaddress5 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BASEADDRESS5(s) ((((s)->baseaddress5) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_BASEADDRESS5_BASEADDRESS5_RESET 0U

/* SOURCEBUFFERATTRIBUTES5: Source buffer attributes for layer 5. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5 0x000000d4U
/* STRIDE5: See Stride0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_STRIDE5_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_STRIDE5_FMASK 0xffffU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_SETM_STRIDE5(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_SET_STRIDE5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_GET_STRIDE5(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SETM_STRIDE5(s,val) ( (s)->sourcebufferattributes5 = ((s)->sourcebufferattributes5 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHWARP_SET_STRIDE5(s,val)  ( (s)->sourcebufferattributes5 = (((s)->sourcebufferattributes5 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STRIDE5(s) ((((s)->sourcebufferattributes5) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_STRIDE5_RESET 3U

/* BITSPERPIXEL5: See BitsPerPixel0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_BITSPERPIXEL5_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_BITSPERPIXEL5_FMASK 0x3fU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_SETM_BITSPERPIXEL5(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_SET_BITSPERPIXEL5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_GET_BITSPERPIXEL5(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_BITSPERPIXEL5(s,val) ( (s)->sourcebufferattributes5 = ((s)->sourcebufferattributes5 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHWARP_SET_BITSPERPIXEL5(s,val)  ( (s)->sourcebufferattributes5 = (((s)->sourcebufferattributes5 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BITSPERPIXEL5(s) ((((s)->sourcebufferattributes5) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES5_BITSPERPIXEL5_RESET 32U

/* SOURCEBUFFERDIMENSION5: Source buffer dimension of layer 5. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5 0x000000d8U
/* LINEWIDTH5: See LineWidth0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_LINEWIDTH5_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_LINEWIDTH5_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_SETM_LINEWIDTH5(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_SET_LINEWIDTH5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_GET_LINEWIDTH5(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINEWIDTH5(s,val) ( (s)->sourcebufferdimension5 = ((s)->sourcebufferdimension5 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_LINEWIDTH5(s,val)  ( (s)->sourcebufferdimension5 = (((s)->sourcebufferdimension5 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEWIDTH5(s) ((((s)->sourcebufferdimension5) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_LINEWIDTH5_RESET 0x3fffU

/* LINECOUNT5: See LineCount0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_LINECOUNT5_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_LINECOUNT5_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_SETM_LINECOUNT5(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_SET_LINECOUNT5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_GET_LINECOUNT5(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINECOUNT5(s,val) ( (s)->sourcebufferdimension5 = ((s)->sourcebufferdimension5 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_LINECOUNT5(s,val)  ( (s)->sourcebufferdimension5 = (((s)->sourcebufferdimension5 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINECOUNT5(s) ((((s)->sourcebufferdimension5) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION5_LINECOUNT5_RESET 0x3fffU

/* COLORCOMPONENTBITS5: Size of color components for RGB, YUV and index formats (layer 5).
   See ColorComponentBits0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5 0x000000dcU
/* COMPONENTBITSALPHA5: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSALPHA5_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSALPHA5_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SETM_COMPONENTBITSALPHA5(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SET_COMPONENTBITSALPHA5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_GET_COMPONENTBITSALPHA5(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSALPHA5(s,val) ( (s)->colorcomponentbits5 = ((s)->colorcomponentbits5 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSALPHA5(s,val)  ( (s)->colorcomponentbits5 = (((s)->colorcomponentbits5 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSALPHA5(s) ((((s)->colorcomponentbits5) ) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSALPHA5_RESET 8U

/* COMPONENTBITSBLUE5: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSBLUE5_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSBLUE5_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SETM_COMPONENTBITSBLUE5(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SET_COMPONENTBITSBLUE5(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_GET_COMPONENTBITSBLUE5(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSBLUE5(s,val) ( (s)->colorcomponentbits5 = ((s)->colorcomponentbits5 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSBLUE5(s,val)  ( (s)->colorcomponentbits5 = (((s)->colorcomponentbits5 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSBLUE5(s) ((((s)->colorcomponentbits5) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSBLUE5_RESET 8U

/* COMPONENTBITSGREEN5: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSGREEN5_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSGREEN5_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SETM_COMPONENTBITSGREEN5(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SET_COMPONENTBITSGREEN5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_GET_COMPONENTBITSGREEN5(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSGREEN5(s,val) ( (s)->colorcomponentbits5 = ((s)->colorcomponentbits5 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSGREEN5(s,val)  ( (s)->colorcomponentbits5 = (((s)->colorcomponentbits5 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSGREEN5(s) ((((s)->colorcomponentbits5) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSGREEN5_RESET 8U

/* COMPONENTBITSRED5: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSRED5_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSRED5_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SETM_COMPONENTBITSRED5(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SET_COMPONENTBITSRED5(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_GET_COMPONENTBITSRED5(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSRED5(s,val) ( (s)->colorcomponentbits5 = ((s)->colorcomponentbits5 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSRED5(s,val)  ( (s)->colorcomponentbits5 = (((s)->colorcomponentbits5 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSRED5(s) ((((s)->colorcomponentbits5) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_COMPONENTBITSRED5_RESET 8U

/* ITUFORMAT5: See ITUFormat0. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_ITUFORMAT5_FSHIFT 31U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_ITUFORMAT5_FMASK 0x1U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SETM_ITUFORMAT5(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_SET_ITUFORMAT5(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_GET_ITUFORMAT5(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ITUFORMAT5(s,val) ( (s)->colorcomponentbits5 = ((s)->colorcomponentbits5 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_ITUFORMAT5(s,val)  ( (s)->colorcomponentbits5 = (((s)->colorcomponentbits5 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ITUFORMAT5(s) ((((s)->colorcomponentbits5) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS5_ITUFORMAT5_RESET 0U

/* COLORCOMPONENTSHIFT5: Bit position of color components for RGB, YUV and index formats (layer 5).
   See ColorComponentShift0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5 0x000000e0U
/* COMPONENTSHIFTALPHA5: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTALPHA5_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTALPHA5_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_SETM_COMPONENTSHIFTALPHA5(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_SET_COMPONENTSHIFTALPHA5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_GET_COMPONENTSHIFTALPHA5(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTALPHA5(s,val) ( (s)->colorcomponentshift5 = ((s)->colorcomponentshift5 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTALPHA5(s,val)  ( (s)->colorcomponentshift5 = (((s)->colorcomponentshift5 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTALPHA5(s) ((((s)->colorcomponentshift5) ) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTALPHA5_RESET 0U

/* COMPONENTSHIFTBLUE5: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTBLUE5_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTBLUE5_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_SETM_COMPONENTSHIFTBLUE5(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_SET_COMPONENTSHIFTBLUE5(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_GET_COMPONENTSHIFTBLUE5(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTBLUE5(s,val) ( (s)->colorcomponentshift5 = ((s)->colorcomponentshift5 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTBLUE5(s,val)  ( (s)->colorcomponentshift5 = (((s)->colorcomponentshift5 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTBLUE5(s) ((((s)->colorcomponentshift5) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTBLUE5_RESET 8U

/* COMPONENTSHIFTGREEN5: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTGREEN5_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTGREEN5_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_SETM_COMPONENTSHIFTGREEN5(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_SET_COMPONENTSHIFTGREEN5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_GET_COMPONENTSHIFTGREEN5(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTGREEN5(s,val) ( (s)->colorcomponentshift5 = ((s)->colorcomponentshift5 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTGREEN5(s,val)  ( (s)->colorcomponentshift5 = (((s)->colorcomponentshift5 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTGREEN5(s) ((((s)->colorcomponentshift5) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTGREEN5_RESET 16U

/* COMPONENTSHIFTRED5: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTRED5_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTRED5_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_SETM_COMPONENTSHIFTRED5(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_SET_COMPONENTSHIFTRED5(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_GET_COMPONENTSHIFTRED5(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTRED5(s,val) ( (s)->colorcomponentshift5 = ((s)->colorcomponentshift5 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTRED5(s,val)  ( (s)->colorcomponentshift5 = (((s)->colorcomponentshift5 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTRED5(s) ((((s)->colorcomponentshift5) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT5_COMPONENTSHIFTRED5_RESET 24U

/* LAYEROFFSET5: Position of layer 5 within the destination frame.
   See LayerOffset0. */
#define GFXREG_FETCHWARP_LAYEROFFSET5 0x000000e4U
/* LAYERXOFFSET5: Horizontal offset (X). */
#define GFXREG_FETCHWARP_LAYEROFFSET5_LAYERXOFFSET5_FSHIFT 0U
#define GFXREG_FETCHWARP_LAYEROFFSET5_LAYERXOFFSET5_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET5_SETM_LAYERXOFFSET5(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_LAYEROFFSET5_SET_LAYERXOFFSET5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET5_GET_LAYERXOFFSET5(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERXOFFSET5(s,val) ( (s)->layeroffset5 = ((s)->layeroffset5 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_LAYERXOFFSET5(s,val)  ( (s)->layeroffset5 = (((s)->layeroffset5 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERXOFFSET5(s) ((((s)->layeroffset5) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET5_LAYERXOFFSET5_RESET 0U

/* LAYERYOFFSET5: Vertical offset (Y). */
#define GFXREG_FETCHWARP_LAYEROFFSET5_LAYERYOFFSET5_FSHIFT 16U
#define GFXREG_FETCHWARP_LAYEROFFSET5_LAYERYOFFSET5_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET5_SETM_LAYERYOFFSET5(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_LAYEROFFSET5_SET_LAYERYOFFSET5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET5_GET_LAYERYOFFSET5(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERYOFFSET5(s,val) ( (s)->layeroffset5 = ((s)->layeroffset5 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_LAYERYOFFSET5(s,val)  ( (s)->layeroffset5 = (((s)->layeroffset5 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERYOFFSET5(s) ((((s)->layeroffset5) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET5_LAYERYOFFSET5_RESET 0U

/* CLIPWINDOWOFFSET5: Clip window position for layer 5.
   See ClipWindowOffset0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5 0x000000e8U
/* CLIPWINDOWXOFFSET5: Horizontal position (X). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_CLIPWINDOWXOFFSET5_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_CLIPWINDOWXOFFSET5_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_SETM_CLIPWINDOWXOFFSET5(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_SET_CLIPWINDOWXOFFSET5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_GET_CLIPWINDOWXOFFSET5(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWXOFFSET5(s,val) ( (s)->clipwindowoffset5 = ((s)->clipwindowoffset5 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWXOFFSET5(s,val)  ( (s)->clipwindowoffset5 = (((s)->clipwindowoffset5 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWXOFFSET5(s) ((((s)->clipwindowoffset5) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_CLIPWINDOWXOFFSET5_RESET 0U

/* CLIPWINDOWYOFFSET5: Vertical position (Y). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_CLIPWINDOWYOFFSET5_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_CLIPWINDOWYOFFSET5_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_SETM_CLIPWINDOWYOFFSET5(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_SET_CLIPWINDOWYOFFSET5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_GET_CLIPWINDOWYOFFSET5(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWYOFFSET5(s,val) ( (s)->clipwindowoffset5 = ((s)->clipwindowoffset5 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWYOFFSET5(s,val)  ( (s)->clipwindowoffset5 = (((s)->clipwindowoffset5 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWYOFFSET5(s) ((((s)->clipwindowoffset5) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET5_CLIPWINDOWYOFFSET5_RESET 0U

/* CLIPWINDOWDIMENSIONS5: Clip window size for layer 5.
   See ClipWindowDimensions0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5 0x000000ecU
/* CLIPWINDOWWIDTH5: Width. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_CLIPWINDOWWIDTH5_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_CLIPWINDOWWIDTH5_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_SETM_CLIPWINDOWWIDTH5(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_SET_CLIPWINDOWWIDTH5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_GET_CLIPWINDOWWIDTH5(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWWIDTH5(s,val) ( (s)->clipwindowdimensions5 = ((s)->clipwindowdimensions5 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWWIDTH5(s,val)  ( (s)->clipwindowdimensions5 = (((s)->clipwindowdimensions5 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWWIDTH5(s) ((((s)->clipwindowdimensions5) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_CLIPWINDOWWIDTH5_RESET 0x0U

/* CLIPWINDOWHEIGHT5: Height. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_CLIPWINDOWHEIGHT5_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_CLIPWINDOWHEIGHT5_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_SETM_CLIPWINDOWHEIGHT5(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_SET_CLIPWINDOWHEIGHT5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_GET_CLIPWINDOWHEIGHT5(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWHEIGHT5(s,val) ( (s)->clipwindowdimensions5 = ((s)->clipwindowdimensions5 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWHEIGHT5(s,val)  ( (s)->clipwindowdimensions5 = (((s)->clipwindowdimensions5 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWHEIGHT5(s) ((((s)->clipwindowdimensions5) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS5_CLIPWINDOWHEIGHT5_RESET 0x0U

/* CONSTANTCOLOR5: Constant color for layer 5.
   See ConstantColor0.        */
#define GFXREG_FETCHWARP_CONSTANTCOLOR5 0x000000f0U
/* CONSTANTALPHA5: Alpha. */
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTALPHA5_FSHIFT 0U
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTALPHA5_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_SETM_CONSTANTALPHA5(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_SET_CONSTANTALPHA5(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_GET_CONSTANTALPHA5(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTALPHA5(s,val) ( (s)->constantcolor5 = ((s)->constantcolor5 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_CONSTANTALPHA5(s,val)  ( (s)->constantcolor5 = (((s)->constantcolor5 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTALPHA5(s) ((((s)->constantcolor5) ) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTALPHA5_RESET 0U

/* CONSTANTBLUE5: Blue and V (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTBLUE5_FSHIFT 8U
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTBLUE5_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_SETM_CONSTANTBLUE5(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_SET_CONSTANTBLUE5(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_GET_CONSTANTBLUE5(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTBLUE5(s,val) ( (s)->constantcolor5 = ((s)->constantcolor5 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTBLUE5(s,val)  ( (s)->constantcolor5 = (((s)->constantcolor5 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTBLUE5(s) ((((s)->constantcolor5) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTBLUE5_RESET 0U

/* CONSTANTGREEN5: Green and U (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTGREEN5_FSHIFT 16U
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTGREEN5_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_SETM_CONSTANTGREEN5(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_SET_CONSTANTGREEN5(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_GET_CONSTANTGREEN5(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTGREEN5(s,val) ( (s)->constantcolor5 = ((s)->constantcolor5 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTGREEN5(s,val)  ( (s)->constantcolor5 = (((s)->constantcolor5 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTGREEN5(s) ((((s)->constantcolor5) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTGREEN5_RESET 0U

/* CONSTANTRED5: Red and Y (luma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTRED5_FSHIFT 24U
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTRED5_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_SETM_CONSTANTRED5(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_SET_CONSTANTRED5(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_GET_CONSTANTRED5(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTRED5(s,val) ( (s)->constantcolor5 = ((s)->constantcolor5 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTRED5(s,val)  ( (s)->constantcolor5 = (((s)->constantcolor5 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTRED5(s) ((((s)->constantcolor5) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR5_CONSTANTRED5_RESET 0U

/* LAYERPROPERTY5: Common properties of layer 5.
   See register LayerProperty0.        */
#define GFXREG_FETCHWARP_LAYERPROPERTY5 0x000000f4U
/* TILEMODE5: See TileMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_TILEMODE5_FSHIFT 1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_TILEMODE5_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_TILEMODE5(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_TILEMODE5(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_TILEMODE5(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_TILEMODE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHWARP_SET_TILEMODE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_TILEMODE5(s) ((((s)->layerproperty5) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_TILEMODE5_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_TILEMODE5_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_TILEMODE5_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_TILEMODE5_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_TILEMODE5_RESET 0U

/* ALPHASRCENABLE5: See AlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHASRCENABLE5_FSHIFT 3U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHASRCENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_ALPHASRCENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_ALPHASRCENABLE5(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_ALPHASRCENABLE5(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHASRCENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHWARP_SET_ALPHASRCENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHASRCENABLE5(s) ((((s)->layerproperty5) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHASRCENABLE5_RESET 1U

/* ALPHACONSTENABLE5: See AlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHACONSTENABLE5_FSHIFT 4U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHACONSTENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_ALPHACONSTENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_ALPHACONSTENABLE5(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_ALPHACONSTENABLE5(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHACONSTENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHWARP_SET_ALPHACONSTENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHACONSTENABLE5(s) ((((s)->layerproperty5) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHACONSTENABLE5_RESET 0U

/* ALPHAMASKENABLE5: See AlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHAMASKENABLE5_FSHIFT 5U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHAMASKENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_ALPHAMASKENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_ALPHAMASKENABLE5(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_ALPHAMASKENABLE5(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHAMASKENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHWARP_SET_ALPHAMASKENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHAMASKENABLE5(s) ((((s)->layerproperty5) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHAMASKENABLE5_RESET 0U

/* ALPHATRANSENABLE5: See AlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHATRANSENABLE5_FSHIFT 6U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHATRANSENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_ALPHATRANSENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_ALPHATRANSENABLE5(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_ALPHATRANSENABLE5(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHATRANSENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHWARP_SET_ALPHATRANSENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHATRANSENABLE5(s) ((((s)->layerproperty5) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_ALPHATRANSENABLE5_RESET 0U

/* RGBALPHASRCENABLE5: See RGBAlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHASRCENABLE5_FSHIFT 7U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHASRCENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_RGBALPHASRCENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_RGBALPHASRCENABLE5(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_RGBALPHASRCENABLE5(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHASRCENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHASRCENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHASRCENABLE5(s) ((((s)->layerproperty5) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHASRCENABLE5_RESET 0U

/* RGBALPHACONSTENABLE5: See RGBAlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHACONSTENABLE5_FSHIFT 8U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHACONSTENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_RGBALPHACONSTENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_RGBALPHACONSTENABLE5(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_RGBALPHACONSTENABLE5(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHACONSTENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHACONSTENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHACONSTENABLE5(s) ((((s)->layerproperty5) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHACONSTENABLE5_RESET 0U

/* RGBALPHAMASKENABLE5: See RGBAlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHAMASKENABLE5_FSHIFT 9U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHAMASKENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_RGBALPHAMASKENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_RGBALPHAMASKENABLE5(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_RGBALPHAMASKENABLE5(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHAMASKENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHAMASKENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHAMASKENABLE5(s) ((((s)->layerproperty5) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHAMASKENABLE5_RESET 0U

/* RGBALPHATRANSENABLE5: See RGBAlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHATRANSENABLE5_FSHIFT 10U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHATRANSENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_RGBALPHATRANSENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_RGBALPHATRANSENABLE5(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_RGBALPHATRANSENABLE5(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHATRANSENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHATRANSENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHATRANSENABLE5(s) ((((s)->layerproperty5) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_RGBALPHATRANSENABLE5_RESET 0U

/* PREMULCONSTRGB5: See PremulConstRGB0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_PREMULCONSTRGB5_FSHIFT 11U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_PREMULCONSTRGB5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_PREMULCONSTRGB5(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_PREMULCONSTRGB5(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_PREMULCONSTRGB5(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_PREMULCONSTRGB5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHWARP_SET_PREMULCONSTRGB5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_PREMULCONSTRGB5(s) ((((s)->layerproperty5) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_PREMULCONSTRGB5_RESET 0x0U

/* YUVCONVERSIONMODE5: See YUVConversionMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_YUVCONVERSIONMODE5_FSHIFT 12U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_YUVCONVERSIONMODE5_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_YUVCONVERSIONMODE5(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_YUVCONVERSIONMODE5(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_YUVCONVERSIONMODE5(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_YUVCONVERSIONMODE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHWARP_SET_YUVCONVERSIONMODE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_YUVCONVERSIONMODE5(s) ((((s)->layerproperty5) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_YUVCONVERSIONMODE5_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_YUVCONVERSIONMODE5_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_YUVCONVERSIONMODE5_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_YUVCONVERSIONMODE5_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_YUVCONVERSIONMODE5_RESET 0x0U

/* GAMMAREMOVEENABLE5: See GammaRemoveEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GAMMAREMOVEENABLE5_FSHIFT 14U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GAMMAREMOVEENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_GAMMAREMOVEENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_GAMMAREMOVEENABLE5(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_GAMMAREMOVEENABLE5(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_GAMMAREMOVEENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHWARP_SET_GAMMAREMOVEENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_GAMMAREMOVEENABLE5(s) ((((s)->layerproperty5) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GAMMAREMOVEENABLE5_RESET 0U

/* CLIPWINDOWENABLE5: See ClipWindowEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_CLIPWINDOWENABLE5_FSHIFT 30U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_CLIPWINDOWENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_CLIPWINDOWENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_CLIPWINDOWENABLE5(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_CLIPWINDOWENABLE5(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWENABLE5(s) ((((s)->layerproperty5) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_CLIPWINDOWENABLE5_RESET 0U

/* SOURCEBUFFERENABLE5: See SourceBufferEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SOURCEBUFFERENABLE5_FSHIFT 31U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SOURCEBUFFERENABLE5_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SETM_SOURCEBUFFERENABLE5(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SET_SOURCEBUFFERENABLE5(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY5_GET_SOURCEBUFFERENABLE5(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SOURCEBUFFERENABLE5(s,val) ( (s)->layerproperty5 = ((s)->layerproperty5 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_SOURCEBUFFERENABLE5(s,val)  ( (s)->layerproperty5 = (((s)->layerproperty5 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SOURCEBUFFERENABLE5(s) ((((s)->layerproperty5) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY5_SOURCEBUFFERENABLE5_RESET 0U

/* BASEADDRESS6: Source buffer base address of layer 6. */
#define GFXREG_FETCHWARP_BASEADDRESS6 0x000000f8U
/* BASEADDRESS6: See BaseAddress0. */
#define GFXREG_FETCHWARP_BASEADDRESS6_BASEADDRESS6_FSHIFT 0U
#define GFXREG_FETCHWARP_BASEADDRESS6_BASEADDRESS6_FMASK 0xffffffffU
#define GFXREG_FETCHWARP_BASEADDRESS6_SETM_BASEADDRESS6(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHWARP_BASEADDRESS6_SET_BASEADDRESS6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BASEADDRESS6_GET_BASEADDRESS6(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_SETM_BASEADDRESS6(s,val) ( (s)->baseaddress6 = ((s)->baseaddress6 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHWARP_SET_BASEADDRESS6(s,val)  ( (s)->baseaddress6 = (((s)->baseaddress6 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BASEADDRESS6(s) ((((s)->baseaddress6) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_BASEADDRESS6_BASEADDRESS6_RESET 0U

/* SOURCEBUFFERATTRIBUTES6: Source buffer attributes for layer 6. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6 0x000000fcU
/* STRIDE6: See Stride0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_STRIDE6_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_STRIDE6_FMASK 0xffffU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_SETM_STRIDE6(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_SET_STRIDE6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_GET_STRIDE6(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SETM_STRIDE6(s,val) ( (s)->sourcebufferattributes6 = ((s)->sourcebufferattributes6 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHWARP_SET_STRIDE6(s,val)  ( (s)->sourcebufferattributes6 = (((s)->sourcebufferattributes6 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STRIDE6(s) ((((s)->sourcebufferattributes6) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_STRIDE6_RESET 3U

/* BITSPERPIXEL6: See BitsPerPixel0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_BITSPERPIXEL6_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_BITSPERPIXEL6_FMASK 0x3fU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_SETM_BITSPERPIXEL6(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_SET_BITSPERPIXEL6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_GET_BITSPERPIXEL6(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_BITSPERPIXEL6(s,val) ( (s)->sourcebufferattributes6 = ((s)->sourcebufferattributes6 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHWARP_SET_BITSPERPIXEL6(s,val)  ( (s)->sourcebufferattributes6 = (((s)->sourcebufferattributes6 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BITSPERPIXEL6(s) ((((s)->sourcebufferattributes6) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES6_BITSPERPIXEL6_RESET 32U

/* SOURCEBUFFERDIMENSION6: Source buffer dimension of layer 6. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6 0x00000100U
/* LINEWIDTH6: See LineWidth0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_LINEWIDTH6_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_LINEWIDTH6_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_SETM_LINEWIDTH6(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_SET_LINEWIDTH6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_GET_LINEWIDTH6(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINEWIDTH6(s,val) ( (s)->sourcebufferdimension6 = ((s)->sourcebufferdimension6 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_LINEWIDTH6(s,val)  ( (s)->sourcebufferdimension6 = (((s)->sourcebufferdimension6 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEWIDTH6(s) ((((s)->sourcebufferdimension6) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_LINEWIDTH6_RESET 0x3fffU

/* LINECOUNT6: See LineCount0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_LINECOUNT6_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_LINECOUNT6_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_SETM_LINECOUNT6(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_SET_LINECOUNT6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_GET_LINECOUNT6(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINECOUNT6(s,val) ( (s)->sourcebufferdimension6 = ((s)->sourcebufferdimension6 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_LINECOUNT6(s,val)  ( (s)->sourcebufferdimension6 = (((s)->sourcebufferdimension6 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINECOUNT6(s) ((((s)->sourcebufferdimension6) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION6_LINECOUNT6_RESET 0x3fffU

/* COLORCOMPONENTBITS6: Size of color components for RGB, YUV and index formats (layer 6).
   See ColorComponentBits0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6 0x00000104U
/* COMPONENTBITSALPHA6: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSALPHA6_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSALPHA6_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SETM_COMPONENTBITSALPHA6(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SET_COMPONENTBITSALPHA6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_GET_COMPONENTBITSALPHA6(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSALPHA6(s,val) ( (s)->colorcomponentbits6 = ((s)->colorcomponentbits6 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSALPHA6(s,val)  ( (s)->colorcomponentbits6 = (((s)->colorcomponentbits6 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSALPHA6(s) ((((s)->colorcomponentbits6) ) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSALPHA6_RESET 8U

/* COMPONENTBITSBLUE6: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSBLUE6_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSBLUE6_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SETM_COMPONENTBITSBLUE6(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SET_COMPONENTBITSBLUE6(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_GET_COMPONENTBITSBLUE6(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSBLUE6(s,val) ( (s)->colorcomponentbits6 = ((s)->colorcomponentbits6 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSBLUE6(s,val)  ( (s)->colorcomponentbits6 = (((s)->colorcomponentbits6 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSBLUE6(s) ((((s)->colorcomponentbits6) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSBLUE6_RESET 8U

/* COMPONENTBITSGREEN6: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSGREEN6_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSGREEN6_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SETM_COMPONENTBITSGREEN6(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SET_COMPONENTBITSGREEN6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_GET_COMPONENTBITSGREEN6(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSGREEN6(s,val) ( (s)->colorcomponentbits6 = ((s)->colorcomponentbits6 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSGREEN6(s,val)  ( (s)->colorcomponentbits6 = (((s)->colorcomponentbits6 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSGREEN6(s) ((((s)->colorcomponentbits6) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSGREEN6_RESET 8U

/* COMPONENTBITSRED6: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSRED6_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSRED6_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SETM_COMPONENTBITSRED6(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SET_COMPONENTBITSRED6(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_GET_COMPONENTBITSRED6(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSRED6(s,val) ( (s)->colorcomponentbits6 = ((s)->colorcomponentbits6 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSRED6(s,val)  ( (s)->colorcomponentbits6 = (((s)->colorcomponentbits6 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSRED6(s) ((((s)->colorcomponentbits6) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_COMPONENTBITSRED6_RESET 8U

/* ITUFORMAT6: See ITUFormat0. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_ITUFORMAT6_FSHIFT 31U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_ITUFORMAT6_FMASK 0x1U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SETM_ITUFORMAT6(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_SET_ITUFORMAT6(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_GET_ITUFORMAT6(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ITUFORMAT6(s,val) ( (s)->colorcomponentbits6 = ((s)->colorcomponentbits6 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_ITUFORMAT6(s,val)  ( (s)->colorcomponentbits6 = (((s)->colorcomponentbits6 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ITUFORMAT6(s) ((((s)->colorcomponentbits6) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS6_ITUFORMAT6_RESET 0U

/* COLORCOMPONENTSHIFT6: Bit position of color components for RGB, YUV and index formats (layer 6).
   See ColorComponentShift0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6 0x00000108U
/* COMPONENTSHIFTALPHA6: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTALPHA6_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTALPHA6_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_SETM_COMPONENTSHIFTALPHA6(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_SET_COMPONENTSHIFTALPHA6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_GET_COMPONENTSHIFTALPHA6(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTALPHA6(s,val) ( (s)->colorcomponentshift6 = ((s)->colorcomponentshift6 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTALPHA6(s,val)  ( (s)->colorcomponentshift6 = (((s)->colorcomponentshift6 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTALPHA6(s) ((((s)->colorcomponentshift6) ) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTALPHA6_RESET 0U

/* COMPONENTSHIFTBLUE6: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTBLUE6_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTBLUE6_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_SETM_COMPONENTSHIFTBLUE6(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_SET_COMPONENTSHIFTBLUE6(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_GET_COMPONENTSHIFTBLUE6(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTBLUE6(s,val) ( (s)->colorcomponentshift6 = ((s)->colorcomponentshift6 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTBLUE6(s,val)  ( (s)->colorcomponentshift6 = (((s)->colorcomponentshift6 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTBLUE6(s) ((((s)->colorcomponentshift6) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTBLUE6_RESET 8U

/* COMPONENTSHIFTGREEN6: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTGREEN6_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTGREEN6_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_SETM_COMPONENTSHIFTGREEN6(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_SET_COMPONENTSHIFTGREEN6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_GET_COMPONENTSHIFTGREEN6(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTGREEN6(s,val) ( (s)->colorcomponentshift6 = ((s)->colorcomponentshift6 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTGREEN6(s,val)  ( (s)->colorcomponentshift6 = (((s)->colorcomponentshift6 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTGREEN6(s) ((((s)->colorcomponentshift6) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTGREEN6_RESET 16U

/* COMPONENTSHIFTRED6: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTRED6_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTRED6_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_SETM_COMPONENTSHIFTRED6(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_SET_COMPONENTSHIFTRED6(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_GET_COMPONENTSHIFTRED6(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTRED6(s,val) ( (s)->colorcomponentshift6 = ((s)->colorcomponentshift6 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTRED6(s,val)  ( (s)->colorcomponentshift6 = (((s)->colorcomponentshift6 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTRED6(s) ((((s)->colorcomponentshift6) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT6_COMPONENTSHIFTRED6_RESET 24U

/* LAYEROFFSET6: Position of layer 1 within the destination frame.
   See LayerOffset0. */
#define GFXREG_FETCHWARP_LAYEROFFSET6 0x0000010cU
/* LAYERXOFFSET6: Horizontal offset (X). */
#define GFXREG_FETCHWARP_LAYEROFFSET6_LAYERXOFFSET6_FSHIFT 0U
#define GFXREG_FETCHWARP_LAYEROFFSET6_LAYERXOFFSET6_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET6_SETM_LAYERXOFFSET6(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_LAYEROFFSET6_SET_LAYERXOFFSET6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET6_GET_LAYERXOFFSET6(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERXOFFSET6(s,val) ( (s)->layeroffset6 = ((s)->layeroffset6 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_LAYERXOFFSET6(s,val)  ( (s)->layeroffset6 = (((s)->layeroffset6 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERXOFFSET6(s) ((((s)->layeroffset6) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET6_LAYERXOFFSET6_RESET 0U

/* LAYERYOFFSET6: Vertical offset (Y). */
#define GFXREG_FETCHWARP_LAYEROFFSET6_LAYERYOFFSET6_FSHIFT 16U
#define GFXREG_FETCHWARP_LAYEROFFSET6_LAYERYOFFSET6_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET6_SETM_LAYERYOFFSET6(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_LAYEROFFSET6_SET_LAYERYOFFSET6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET6_GET_LAYERYOFFSET6(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERYOFFSET6(s,val) ( (s)->layeroffset6 = ((s)->layeroffset6 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_LAYERYOFFSET6(s,val)  ( (s)->layeroffset6 = (((s)->layeroffset6 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERYOFFSET6(s) ((((s)->layeroffset6) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET6_LAYERYOFFSET6_RESET 0U

/* CLIPWINDOWOFFSET6: Clip window position for layer 6.
   See ClipWindowOffset0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6 0x00000110U
/* CLIPWINDOWXOFFSET6: Horizontal position (X). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_CLIPWINDOWXOFFSET6_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_CLIPWINDOWXOFFSET6_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_SETM_CLIPWINDOWXOFFSET6(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_SET_CLIPWINDOWXOFFSET6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_GET_CLIPWINDOWXOFFSET6(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWXOFFSET6(s,val) ( (s)->clipwindowoffset6 = ((s)->clipwindowoffset6 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWXOFFSET6(s,val)  ( (s)->clipwindowoffset6 = (((s)->clipwindowoffset6 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWXOFFSET6(s) ((((s)->clipwindowoffset6) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_CLIPWINDOWXOFFSET6_RESET 0U

/* CLIPWINDOWYOFFSET6: Vertical position (Y). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_CLIPWINDOWYOFFSET6_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_CLIPWINDOWYOFFSET6_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_SETM_CLIPWINDOWYOFFSET6(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_SET_CLIPWINDOWYOFFSET6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_GET_CLIPWINDOWYOFFSET6(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWYOFFSET6(s,val) ( (s)->clipwindowoffset6 = ((s)->clipwindowoffset6 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWYOFFSET6(s,val)  ( (s)->clipwindowoffset6 = (((s)->clipwindowoffset6 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWYOFFSET6(s) ((((s)->clipwindowoffset6) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET6_CLIPWINDOWYOFFSET6_RESET 0U

/* CLIPWINDOWDIMENSIONS6: Clip window size for layer 6.
   See ClipWindowDimensions0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6 0x00000114U
/* CLIPWINDOWWIDTH6: Width. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_CLIPWINDOWWIDTH6_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_CLIPWINDOWWIDTH6_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_SETM_CLIPWINDOWWIDTH6(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_SET_CLIPWINDOWWIDTH6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_GET_CLIPWINDOWWIDTH6(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWWIDTH6(s,val) ( (s)->clipwindowdimensions6 = ((s)->clipwindowdimensions6 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWWIDTH6(s,val)  ( (s)->clipwindowdimensions6 = (((s)->clipwindowdimensions6 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWWIDTH6(s) ((((s)->clipwindowdimensions6) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_CLIPWINDOWWIDTH6_RESET 0x0U

/* CLIPWINDOWHEIGHT6: Height. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_CLIPWINDOWHEIGHT6_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_CLIPWINDOWHEIGHT6_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_SETM_CLIPWINDOWHEIGHT6(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_SET_CLIPWINDOWHEIGHT6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_GET_CLIPWINDOWHEIGHT6(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWHEIGHT6(s,val) ( (s)->clipwindowdimensions6 = ((s)->clipwindowdimensions6 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWHEIGHT6(s,val)  ( (s)->clipwindowdimensions6 = (((s)->clipwindowdimensions6 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWHEIGHT6(s) ((((s)->clipwindowdimensions6) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS6_CLIPWINDOWHEIGHT6_RESET 0x0U

/* CONSTANTCOLOR6: Constant color for layer 6.
   See ConstantColor0.        */
#define GFXREG_FETCHWARP_CONSTANTCOLOR6 0x00000118U
/* CONSTANTALPHA6: Alpha. */
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTALPHA6_FSHIFT 0U
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTALPHA6_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_SETM_CONSTANTALPHA6(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_SET_CONSTANTALPHA6(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_GET_CONSTANTALPHA6(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTALPHA6(s,val) ( (s)->constantcolor6 = ((s)->constantcolor6 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_CONSTANTALPHA6(s,val)  ( (s)->constantcolor6 = (((s)->constantcolor6 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTALPHA6(s) ((((s)->constantcolor6) ) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTALPHA6_RESET 0U

/* CONSTANTBLUE6: Blue and V (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTBLUE6_FSHIFT 8U
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTBLUE6_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_SETM_CONSTANTBLUE6(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_SET_CONSTANTBLUE6(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_GET_CONSTANTBLUE6(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTBLUE6(s,val) ( (s)->constantcolor6 = ((s)->constantcolor6 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTBLUE6(s,val)  ( (s)->constantcolor6 = (((s)->constantcolor6 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTBLUE6(s) ((((s)->constantcolor6) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTBLUE6_RESET 0U

/* CONSTANTGREEN6: Green and U (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTGREEN6_FSHIFT 16U
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTGREEN6_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_SETM_CONSTANTGREEN6(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_SET_CONSTANTGREEN6(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_GET_CONSTANTGREEN6(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTGREEN6(s,val) ( (s)->constantcolor6 = ((s)->constantcolor6 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTGREEN6(s,val)  ( (s)->constantcolor6 = (((s)->constantcolor6 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTGREEN6(s) ((((s)->constantcolor6) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTGREEN6_RESET 0U

/* CONSTANTRED6: Red and Y (luma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTRED6_FSHIFT 24U
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTRED6_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_SETM_CONSTANTRED6(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_SET_CONSTANTRED6(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_GET_CONSTANTRED6(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTRED6(s,val) ( (s)->constantcolor6 = ((s)->constantcolor6 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTRED6(s,val)  ( (s)->constantcolor6 = (((s)->constantcolor6 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTRED6(s) ((((s)->constantcolor6) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR6_CONSTANTRED6_RESET 0U

/* LAYERPROPERTY6: Common properties of layer 6.
   See register LayerProperty0.        */
#define GFXREG_FETCHWARP_LAYERPROPERTY6 0x0000011cU
/* TILEMODE6: See TileMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_TILEMODE6_FSHIFT 1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_TILEMODE6_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_TILEMODE6(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_TILEMODE6(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_TILEMODE6(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_TILEMODE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHWARP_SET_TILEMODE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_TILEMODE6(s) ((((s)->layerproperty6) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_TILEMODE6_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_TILEMODE6_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_TILEMODE6_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_TILEMODE6_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_TILEMODE6_RESET 0U

/* ALPHASRCENABLE6: See AlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHASRCENABLE6_FSHIFT 3U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHASRCENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_ALPHASRCENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_ALPHASRCENABLE6(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_ALPHASRCENABLE6(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHASRCENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHWARP_SET_ALPHASRCENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHASRCENABLE6(s) ((((s)->layerproperty6) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHASRCENABLE6_RESET 1U

/* ALPHACONSTENABLE6: See AlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHACONSTENABLE6_FSHIFT 4U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHACONSTENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_ALPHACONSTENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_ALPHACONSTENABLE6(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_ALPHACONSTENABLE6(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHACONSTENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHWARP_SET_ALPHACONSTENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHACONSTENABLE6(s) ((((s)->layerproperty6) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHACONSTENABLE6_RESET 0U

/* ALPHAMASKENABLE6: See AlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHAMASKENABLE6_FSHIFT 5U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHAMASKENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_ALPHAMASKENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_ALPHAMASKENABLE6(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_ALPHAMASKENABLE6(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHAMASKENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHWARP_SET_ALPHAMASKENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHAMASKENABLE6(s) ((((s)->layerproperty6) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHAMASKENABLE6_RESET 0U

/* ALPHATRANSENABLE6: See AlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHATRANSENABLE6_FSHIFT 6U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHATRANSENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_ALPHATRANSENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_ALPHATRANSENABLE6(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_ALPHATRANSENABLE6(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHATRANSENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHWARP_SET_ALPHATRANSENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHATRANSENABLE6(s) ((((s)->layerproperty6) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_ALPHATRANSENABLE6_RESET 0U

/* RGBALPHASRCENABLE6: See RGBAlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHASRCENABLE6_FSHIFT 7U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHASRCENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_RGBALPHASRCENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_RGBALPHASRCENABLE6(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_RGBALPHASRCENABLE6(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHASRCENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHASRCENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHASRCENABLE6(s) ((((s)->layerproperty6) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHASRCENABLE6_RESET 0U

/* RGBALPHACONSTENABLE6: See RGBAlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHACONSTENABLE6_FSHIFT 8U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHACONSTENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_RGBALPHACONSTENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_RGBALPHACONSTENABLE6(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_RGBALPHACONSTENABLE6(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHACONSTENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHACONSTENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHACONSTENABLE6(s) ((((s)->layerproperty6) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHACONSTENABLE6_RESET 0U

/* RGBALPHAMASKENABLE6: See RGBAlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHAMASKENABLE6_FSHIFT 9U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHAMASKENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_RGBALPHAMASKENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_RGBALPHAMASKENABLE6(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_RGBALPHAMASKENABLE6(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHAMASKENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHAMASKENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHAMASKENABLE6(s) ((((s)->layerproperty6) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHAMASKENABLE6_RESET 0U

/* RGBALPHATRANSENABLE6: See RGBAlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHATRANSENABLE6_FSHIFT 10U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHATRANSENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_RGBALPHATRANSENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_RGBALPHATRANSENABLE6(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_RGBALPHATRANSENABLE6(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHATRANSENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHATRANSENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHATRANSENABLE6(s) ((((s)->layerproperty6) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_RGBALPHATRANSENABLE6_RESET 0U

/* PREMULCONSTRGB6: See PremulConstRGB0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_PREMULCONSTRGB6_FSHIFT 11U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_PREMULCONSTRGB6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_PREMULCONSTRGB6(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_PREMULCONSTRGB6(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_PREMULCONSTRGB6(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_PREMULCONSTRGB6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHWARP_SET_PREMULCONSTRGB6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_PREMULCONSTRGB6(s) ((((s)->layerproperty6) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_PREMULCONSTRGB6_RESET 0x0U

/* YUVCONVERSIONMODE6: See YUVConversionMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_YUVCONVERSIONMODE6_FSHIFT 12U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_YUVCONVERSIONMODE6_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_YUVCONVERSIONMODE6(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_YUVCONVERSIONMODE6(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_YUVCONVERSIONMODE6(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_YUVCONVERSIONMODE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHWARP_SET_YUVCONVERSIONMODE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_YUVCONVERSIONMODE6(s) ((((s)->layerproperty6) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_YUVCONVERSIONMODE6_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_YUVCONVERSIONMODE6_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_YUVCONVERSIONMODE6_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_YUVCONVERSIONMODE6_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_YUVCONVERSIONMODE6_RESET 0x0U

/* GAMMAREMOVEENABLE6: See GammaRemoveEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GAMMAREMOVEENABLE6_FSHIFT 14U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GAMMAREMOVEENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_GAMMAREMOVEENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_GAMMAREMOVEENABLE6(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_GAMMAREMOVEENABLE6(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_GAMMAREMOVEENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHWARP_SET_GAMMAREMOVEENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_GAMMAREMOVEENABLE6(s) ((((s)->layerproperty6) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GAMMAREMOVEENABLE6_RESET 0U

/* CLIPWINDOWENABLE6: See ClipWindowEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_CLIPWINDOWENABLE6_FSHIFT 30U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_CLIPWINDOWENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_CLIPWINDOWENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_CLIPWINDOWENABLE6(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_CLIPWINDOWENABLE6(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWENABLE6(s) ((((s)->layerproperty6) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_CLIPWINDOWENABLE6_RESET 0U

/* SOURCEBUFFERENABLE6: See SourceBufferEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SOURCEBUFFERENABLE6_FSHIFT 31U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SOURCEBUFFERENABLE6_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SETM_SOURCEBUFFERENABLE6(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SET_SOURCEBUFFERENABLE6(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY6_GET_SOURCEBUFFERENABLE6(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SOURCEBUFFERENABLE6(s,val) ( (s)->layerproperty6 = ((s)->layerproperty6 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_SOURCEBUFFERENABLE6(s,val)  ( (s)->layerproperty6 = (((s)->layerproperty6 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SOURCEBUFFERENABLE6(s) ((((s)->layerproperty6) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY6_SOURCEBUFFERENABLE6_RESET 0U

/* BASEADDRESS7: Source buffer base address of layer 7. */
#define GFXREG_FETCHWARP_BASEADDRESS7 0x00000120U
/* BASEADDRESS7: See BaseAddress0. */
#define GFXREG_FETCHWARP_BASEADDRESS7_BASEADDRESS7_FSHIFT 0U
#define GFXREG_FETCHWARP_BASEADDRESS7_BASEADDRESS7_FMASK 0xffffffffU
#define GFXREG_FETCHWARP_BASEADDRESS7_SETM_BASEADDRESS7(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHWARP_BASEADDRESS7_SET_BASEADDRESS7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_BASEADDRESS7_GET_BASEADDRESS7(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_SETM_BASEADDRESS7(s,val) ( (s)->baseaddress7 = ((s)->baseaddress7 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHWARP_SET_BASEADDRESS7(s,val)  ( (s)->baseaddress7 = (((s)->baseaddress7 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BASEADDRESS7(s) ((((s)->baseaddress7) ) & 0xffffffffUL)
#define GFXREG_FETCHWARP_BASEADDRESS7_BASEADDRESS7_RESET 0U

/* SOURCEBUFFERATTRIBUTES7: Source buffer stride for layer 7. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7 0x00000124U
/* STRIDE7: See Stride0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_STRIDE7_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_STRIDE7_FMASK 0xffffU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_SETM_STRIDE7(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_SET_STRIDE7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_GET_STRIDE7(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SETM_STRIDE7(s,val) ( (s)->sourcebufferattributes7 = ((s)->sourcebufferattributes7 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHWARP_SET_STRIDE7(s,val)  ( (s)->sourcebufferattributes7 = (((s)->sourcebufferattributes7 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STRIDE7(s) ((((s)->sourcebufferattributes7) ) & 0xffffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_STRIDE7_RESET 3U

/* BITSPERPIXEL7: See BitsPerPixel0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_BITSPERPIXEL7_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_BITSPERPIXEL7_FMASK 0x3fU
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_SETM_BITSPERPIXEL7(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_SET_BITSPERPIXEL7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_GET_BITSPERPIXEL7(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_BITSPERPIXEL7(s,val) ( (s)->sourcebufferattributes7 = ((s)->sourcebufferattributes7 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHWARP_SET_BITSPERPIXEL7(s,val)  ( (s)->sourcebufferattributes7 = (((s)->sourcebufferattributes7 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_BITSPERPIXEL7(s) ((((s)->sourcebufferattributes7) >> 16U) & 0x3fUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERATTRIBUTES7_BITSPERPIXEL7_RESET 32U

/* SOURCEBUFFERDIMENSION7: Source buffer dimension of layer 7. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7 0x00000128U
/* LINEWIDTH7: See LineWidth0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_LINEWIDTH7_FSHIFT 0U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_LINEWIDTH7_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_SETM_LINEWIDTH7(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_SET_LINEWIDTH7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_GET_LINEWIDTH7(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINEWIDTH7(s,val) ( (s)->sourcebufferdimension7 = ((s)->sourcebufferdimension7 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_LINEWIDTH7(s,val)  ( (s)->sourcebufferdimension7 = (((s)->sourcebufferdimension7 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEWIDTH7(s) ((((s)->sourcebufferdimension7) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_LINEWIDTH7_RESET 0x3fffU

/* LINECOUNT7: See LineCount0. */
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_LINECOUNT7_FSHIFT 16U
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_LINECOUNT7_FMASK 0x3fffU
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_SETM_LINECOUNT7(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_SET_LINECOUNT7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_GET_LINECOUNT7(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_LINECOUNT7(s,val) ( (s)->sourcebufferdimension7 = ((s)->sourcebufferdimension7 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_LINECOUNT7(s,val)  ( (s)->sourcebufferdimension7 = (((s)->sourcebufferdimension7 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINECOUNT7(s) ((((s)->sourcebufferdimension7) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SOURCEBUFFERDIMENSION7_LINECOUNT7_RESET 0x3fffU

/* COLORCOMPONENTBITS7: Size of color components for RGB, YUV and index formats (layer 7).
   See ColorComponentBits0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7 0x0000012cU
/* COMPONENTBITSALPHA7: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSALPHA7_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSALPHA7_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SETM_COMPONENTBITSALPHA7(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SET_COMPONENTBITSALPHA7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_GET_COMPONENTBITSALPHA7(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSALPHA7(s,val) ( (s)->colorcomponentbits7 = ((s)->colorcomponentbits7 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSALPHA7(s,val)  ( (s)->colorcomponentbits7 = (((s)->colorcomponentbits7 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSALPHA7(s) ((((s)->colorcomponentbits7) ) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSALPHA7_RESET 8U

/* COMPONENTBITSBLUE7: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSBLUE7_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSBLUE7_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SETM_COMPONENTBITSBLUE7(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SET_COMPONENTBITSBLUE7(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_GET_COMPONENTBITSBLUE7(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSBLUE7(s,val) ( (s)->colorcomponentbits7 = ((s)->colorcomponentbits7 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSBLUE7(s,val)  ( (s)->colorcomponentbits7 = (((s)->colorcomponentbits7 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSBLUE7(s) ((((s)->colorcomponentbits7) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSBLUE7_RESET 8U

/* COMPONENTBITSGREEN7: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSGREEN7_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSGREEN7_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SETM_COMPONENTBITSGREEN7(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SET_COMPONENTBITSGREEN7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_GET_COMPONENTBITSGREEN7(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSGREEN7(s,val) ( (s)->colorcomponentbits7 = ((s)->colorcomponentbits7 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSGREEN7(s,val)  ( (s)->colorcomponentbits7 = (((s)->colorcomponentbits7 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSGREEN7(s) ((((s)->colorcomponentbits7) >> 16U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSGREEN7_RESET 8U

/* COMPONENTBITSRED7: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSRED7_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSRED7_FMASK 0xfU
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SETM_COMPONENTBITSRED7(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SET_COMPONENTBITSRED7(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_GET_COMPONENTBITSRED7(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTBITSRED7(s,val) ( (s)->colorcomponentbits7 = ((s)->colorcomponentbits7 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTBITSRED7(s,val)  ( (s)->colorcomponentbits7 = (((s)->colorcomponentbits7 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTBITSRED7(s) ((((s)->colorcomponentbits7) >> 24U) & 0xfUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_COMPONENTBITSRED7_RESET 8U

/* ITUFORMAT7: See ITUFormat0. */
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_ITUFORMAT7_FSHIFT 31U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_ITUFORMAT7_FMASK 0x1U
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SETM_ITUFORMAT7(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_SET_ITUFORMAT7(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_GET_ITUFORMAT7(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ITUFORMAT7(s,val) ( (s)->colorcomponentbits7 = ((s)->colorcomponentbits7 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_ITUFORMAT7(s,val)  ( (s)->colorcomponentbits7 = (((s)->colorcomponentbits7 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ITUFORMAT7(s) ((((s)->colorcomponentbits7) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_COLORCOMPONENTBITS7_ITUFORMAT7_RESET 0U

/* COLORCOMPONENTSHIFT7: Bit position of color components for RGB, YUV and index formats (layer 7).
   See ColorComponentShift0.        */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7 0x00000130U
/* COMPONENTSHIFTALPHA7: Alpha. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTALPHA7_FSHIFT 0U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTALPHA7_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_SETM_COMPONENTSHIFTALPHA7(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_SET_COMPONENTSHIFTALPHA7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_GET_COMPONENTSHIFTALPHA7(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTALPHA7(s,val) ( (s)->colorcomponentshift7 = ((s)->colorcomponentshift7 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTALPHA7(s,val)  ( (s)->colorcomponentshift7 = (((s)->colorcomponentshift7 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTALPHA7(s) ((((s)->colorcomponentshift7) ) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTALPHA7_RESET 0U

/* COMPONENTSHIFTBLUE7: Blue and V (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTBLUE7_FSHIFT 8U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTBLUE7_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_SETM_COMPONENTSHIFTBLUE7(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_SET_COMPONENTSHIFTBLUE7(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_GET_COMPONENTSHIFTBLUE7(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTBLUE7(s,val) ( (s)->colorcomponentshift7 = ((s)->colorcomponentshift7 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTBLUE7(s,val)  ( (s)->colorcomponentshift7 = (((s)->colorcomponentshift7 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTBLUE7(s) ((((s)->colorcomponentshift7) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTBLUE7_RESET 8U

/* COMPONENTSHIFTGREEN7: Green and U (chroma). */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTGREEN7_FSHIFT 16U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTGREEN7_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_SETM_COMPONENTSHIFTGREEN7(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_SET_COMPONENTSHIFTGREEN7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_GET_COMPONENTSHIFTGREEN7(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTGREEN7(s,val) ( (s)->colorcomponentshift7 = ((s)->colorcomponentshift7 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTGREEN7(s,val)  ( (s)->colorcomponentshift7 = (((s)->colorcomponentshift7 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTGREEN7(s) ((((s)->colorcomponentshift7) >> 16U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTGREEN7_RESET 16U

/* COMPONENTSHIFTRED7: Red, Y (luma) and palette index. */
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTRED7_FSHIFT 24U
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTRED7_FMASK 0x1fU
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_SETM_COMPONENTSHIFTRED7(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_SET_COMPONENTSHIFTRED7(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_GET_COMPONENTSHIFTRED7(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_SETM_COMPONENTSHIFTRED7(s,val) ( (s)->colorcomponentshift7 = ((s)->colorcomponentshift7 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHWARP_SET_COMPONENTSHIFTRED7(s,val)  ( (s)->colorcomponentshift7 = (((s)->colorcomponentshift7 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_COMPONENTSHIFTRED7(s) ((((s)->colorcomponentshift7) >> 24U) & 0x1fUL)
#define GFXREG_FETCHWARP_COLORCOMPONENTSHIFT7_COMPONENTSHIFTRED7_RESET 24U

/* LAYEROFFSET7: Position of layer 7 within the destination frame.
   See LayerOffset0. */
#define GFXREG_FETCHWARP_LAYEROFFSET7 0x00000134U
/* LAYERXOFFSET7: Horizontal offset (X). */
#define GFXREG_FETCHWARP_LAYEROFFSET7_LAYERXOFFSET7_FSHIFT 0U
#define GFXREG_FETCHWARP_LAYEROFFSET7_LAYERXOFFSET7_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET7_SETM_LAYERXOFFSET7(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_LAYEROFFSET7_SET_LAYERXOFFSET7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET7_GET_LAYERXOFFSET7(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERXOFFSET7(s,val) ( (s)->layeroffset7 = ((s)->layeroffset7 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_LAYERXOFFSET7(s,val)  ( (s)->layeroffset7 = (((s)->layeroffset7 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERXOFFSET7(s) ((((s)->layeroffset7) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET7_LAYERXOFFSET7_RESET 0U

/* LAYERYOFFSET7: Vertical offset (Y). */
#define GFXREG_FETCHWARP_LAYEROFFSET7_LAYERYOFFSET7_FSHIFT 16U
#define GFXREG_FETCHWARP_LAYEROFFSET7_LAYERYOFFSET7_FMASK 0x7fffU
#define GFXREG_FETCHWARP_LAYEROFFSET7_SETM_LAYERYOFFSET7(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_LAYEROFFSET7_SET_LAYERYOFFSET7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYEROFFSET7_GET_LAYERYOFFSET7(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_LAYERYOFFSET7(s,val) ( (s)->layeroffset7 = ((s)->layeroffset7 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_LAYERYOFFSET7(s,val)  ( (s)->layeroffset7 = (((s)->layeroffset7 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LAYERYOFFSET7(s) ((((s)->layeroffset7) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_LAYEROFFSET7_LAYERYOFFSET7_RESET 0U

/* CLIPWINDOWOFFSET7: Clip window position for layer 7.
   See ClipWindowOffset0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7 0x00000138U
/* CLIPWINDOWXOFFSET7: Horizontal position (X). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_CLIPWINDOWXOFFSET7_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_CLIPWINDOWXOFFSET7_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_SETM_CLIPWINDOWXOFFSET7(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_SET_CLIPWINDOWXOFFSET7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_GET_CLIPWINDOWXOFFSET7(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWXOFFSET7(s,val) ( (s)->clipwindowoffset7 = ((s)->clipwindowoffset7 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWXOFFSET7(s,val)  ( (s)->clipwindowoffset7 = (((s)->clipwindowoffset7 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWXOFFSET7(s) ((((s)->clipwindowoffset7) ) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_CLIPWINDOWXOFFSET7_RESET 0U

/* CLIPWINDOWYOFFSET7: Vertical position (Y). */
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_CLIPWINDOWYOFFSET7_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_CLIPWINDOWYOFFSET7_FMASK 0x7fffU
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_SETM_CLIPWINDOWYOFFSET7(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_SET_CLIPWINDOWYOFFSET7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_GET_CLIPWINDOWYOFFSET7(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWYOFFSET7(s,val) ( (s)->clipwindowoffset7 = ((s)->clipwindowoffset7 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWYOFFSET7(s,val)  ( (s)->clipwindowoffset7 = (((s)->clipwindowoffset7 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWYOFFSET7(s) ((((s)->clipwindowoffset7) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWOFFSET7_CLIPWINDOWYOFFSET7_RESET 0U

/* CLIPWINDOWDIMENSIONS7: Clip window size for layer 7.
   See ClipWindowDimensions0.        */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7 0x0000013cU
/* CLIPWINDOWWIDTH7: Width. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_CLIPWINDOWWIDTH7_FSHIFT 0U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_CLIPWINDOWWIDTH7_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_SETM_CLIPWINDOWWIDTH7(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_SET_CLIPWINDOWWIDTH7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_GET_CLIPWINDOWWIDTH7(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWWIDTH7(s,val) ( (s)->clipwindowdimensions7 = ((s)->clipwindowdimensions7 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWWIDTH7(s,val)  ( (s)->clipwindowdimensions7 = (((s)->clipwindowdimensions7 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWWIDTH7(s) ((((s)->clipwindowdimensions7) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_CLIPWINDOWWIDTH7_RESET 0x0U

/* CLIPWINDOWHEIGHT7: Height. */
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_CLIPWINDOWHEIGHT7_FSHIFT 16U
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_CLIPWINDOWHEIGHT7_FMASK 0x3fffU
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_SETM_CLIPWINDOWHEIGHT7(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_SET_CLIPWINDOWHEIGHT7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_GET_CLIPWINDOWHEIGHT7(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWHEIGHT7(s,val) ( (s)->clipwindowdimensions7 = ((s)->clipwindowdimensions7 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWHEIGHT7(s,val)  ( (s)->clipwindowdimensions7 = (((s)->clipwindowdimensions7 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWHEIGHT7(s) ((((s)->clipwindowdimensions7) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_CLIPWINDOWDIMENSIONS7_CLIPWINDOWHEIGHT7_RESET 0x0U

/* CONSTANTCOLOR7: Constant color for layer 7.
   See ConstantColor0.        */
#define GFXREG_FETCHWARP_CONSTANTCOLOR7 0x00000140U
/* CONSTANTALPHA7: Alpha. */
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTALPHA7_FSHIFT 0U
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTALPHA7_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_SETM_CONSTANTALPHA7(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_SET_CONSTANTALPHA7(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_GET_CONSTANTALPHA7(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTALPHA7(s,val) ( (s)->constantcolor7 = ((s)->constantcolor7 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_CONSTANTALPHA7(s,val)  ( (s)->constantcolor7 = (((s)->constantcolor7 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTALPHA7(s) ((((s)->constantcolor7) ) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTALPHA7_RESET 0U

/* CONSTANTBLUE7: Blue and V (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTBLUE7_FSHIFT 8U
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTBLUE7_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_SETM_CONSTANTBLUE7(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_SET_CONSTANTBLUE7(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_GET_CONSTANTBLUE7(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTBLUE7(s,val) ( (s)->constantcolor7 = ((s)->constantcolor7 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTBLUE7(s,val)  ( (s)->constantcolor7 = (((s)->constantcolor7 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTBLUE7(s) ((((s)->constantcolor7) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTBLUE7_RESET 0U

/* CONSTANTGREEN7: Green and U (chroma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTGREEN7_FSHIFT 16U
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTGREEN7_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_SETM_CONSTANTGREEN7(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_SET_CONSTANTGREEN7(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_GET_CONSTANTGREEN7(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTGREEN7(s,val) ( (s)->constantcolor7 = ((s)->constantcolor7 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTGREEN7(s,val)  ( (s)->constantcolor7 = (((s)->constantcolor7 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTGREEN7(s) ((((s)->constantcolor7) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTGREEN7_RESET 0U

/* CONSTANTRED7: Red and Y (luma). */
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTRED7_FSHIFT 24U
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTRED7_FMASK 0xffU
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_SETM_CONSTANTRED7(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_SET_CONSTANTRED7(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_GET_CONSTANTRED7(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_CONSTANTRED7(s,val) ( (s)->constantcolor7 = ((s)->constantcolor7 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_CONSTANTRED7(s,val)  ( (s)->constantcolor7 = (((s)->constantcolor7 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CONSTANTRED7(s) ((((s)->constantcolor7) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_CONSTANTCOLOR7_CONSTANTRED7_RESET 0U

/* LAYERPROPERTY7: Common properties of layer 7.
   See register LayerProperty0.        */
#define GFXREG_FETCHWARP_LAYERPROPERTY7 0x00000144U
/* TILEMODE7: See TileMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_TILEMODE7_FSHIFT 1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_TILEMODE7_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_TILEMODE7(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_TILEMODE7(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_TILEMODE7(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_TILEMODE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHWARP_SET_TILEMODE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_TILEMODE7(s) ((((s)->layerproperty7) >> 1U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_TILEMODE7_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_TILEMODE7_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_TILEMODE7_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_TILEMODE7_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_TILEMODE7_RESET 0U

/* ALPHASRCENABLE7: See AlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHASRCENABLE7_FSHIFT 3U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHASRCENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_ALPHASRCENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_ALPHASRCENABLE7(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_ALPHASRCENABLE7(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHASRCENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHWARP_SET_ALPHASRCENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHASRCENABLE7(s) ((((s)->layerproperty7) >> 3U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHASRCENABLE7_RESET 1U

/* ALPHACONSTENABLE7: See AlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHACONSTENABLE7_FSHIFT 4U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHACONSTENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_ALPHACONSTENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_ALPHACONSTENABLE7(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_ALPHACONSTENABLE7(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHACONSTENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHWARP_SET_ALPHACONSTENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHACONSTENABLE7(s) ((((s)->layerproperty7) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHACONSTENABLE7_RESET 0U

/* ALPHAMASKENABLE7: See AlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHAMASKENABLE7_FSHIFT 5U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHAMASKENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_ALPHAMASKENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_ALPHAMASKENABLE7(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_ALPHAMASKENABLE7(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHAMASKENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHWARP_SET_ALPHAMASKENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHAMASKENABLE7(s) ((((s)->layerproperty7) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHAMASKENABLE7_RESET 0U

/* ALPHATRANSENABLE7: See AlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHATRANSENABLE7_FSHIFT 6U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHATRANSENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_ALPHATRANSENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_ALPHATRANSENABLE7(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_ALPHATRANSENABLE7(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_ALPHATRANSENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHWARP_SET_ALPHATRANSENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ALPHATRANSENABLE7(s) ((((s)->layerproperty7) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_ALPHATRANSENABLE7_RESET 0U

/* RGBALPHASRCENABLE7: See RGBAlphaSrcSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHASRCENABLE7_FSHIFT 7U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHASRCENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_RGBALPHASRCENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_RGBALPHASRCENABLE7(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_RGBALPHASRCENABLE7(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHASRCENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHASRCENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHASRCENABLE7(s) ((((s)->layerproperty7) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHASRCENABLE7_RESET 0U

/* RGBALPHACONSTENABLE7: See RGBAlphaConstSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHACONSTENABLE7_FSHIFT 8U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHACONSTENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_RGBALPHACONSTENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_RGBALPHACONSTENABLE7(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_RGBALPHACONSTENABLE7(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHACONSTENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHACONSTENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHACONSTENABLE7(s) ((((s)->layerproperty7) >> 8U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHACONSTENABLE7_RESET 0U

/* RGBALPHAMASKENABLE7: See RGBAlphaMaskSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHAMASKENABLE7_FSHIFT 9U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHAMASKENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_RGBALPHAMASKENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_RGBALPHAMASKENABLE7(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_RGBALPHAMASKENABLE7(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHAMASKENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHAMASKENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHAMASKENABLE7(s) ((((s)->layerproperty7) >> 9U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHAMASKENABLE7_RESET 0U

/* RGBALPHATRANSENABLE7: See RGBAlphaTransSelect0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHATRANSENABLE7_FSHIFT 10U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHATRANSENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_RGBALPHATRANSENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_RGBALPHATRANSENABLE7(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_RGBALPHATRANSENABLE7(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RGBALPHATRANSENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHWARP_SET_RGBALPHATRANSENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RGBALPHATRANSENABLE7(s) ((((s)->layerproperty7) >> 10U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_RGBALPHATRANSENABLE7_RESET 0U

/* PREMULCONSTRGB7: See PremulConstRGB0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_PREMULCONSTRGB7_FSHIFT 11U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_PREMULCONSTRGB7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_PREMULCONSTRGB7(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_PREMULCONSTRGB7(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_PREMULCONSTRGB7(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_PREMULCONSTRGB7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHWARP_SET_PREMULCONSTRGB7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_PREMULCONSTRGB7(s) ((((s)->layerproperty7) >> 11U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_PREMULCONSTRGB7_RESET 0x0U

/* YUVCONVERSIONMODE7: See YUVConversionMode0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_YUVCONVERSIONMODE7_FSHIFT 12U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_YUVCONVERSIONMODE7_FMASK 0x3U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_YUVCONVERSIONMODE7(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_YUVCONVERSIONMODE7(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_YUVCONVERSIONMODE7(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_YUVCONVERSIONMODE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHWARP_SET_YUVCONVERSIONMODE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_YUVCONVERSIONMODE7(s) ((((s)->layerproperty7) >> 12U) & 0x3UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_YUVCONVERSIONMODE7_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_YUVCONVERSIONMODE7_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_YUVCONVERSIONMODE7_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_YUVCONVERSIONMODE7_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_YUVCONVERSIONMODE7_RESET 0x0U

/* GAMMAREMOVEENABLE7: See GammaRemoveEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GAMMAREMOVEENABLE7_FSHIFT 14U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GAMMAREMOVEENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_GAMMAREMOVEENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_GAMMAREMOVEENABLE7(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_GAMMAREMOVEENABLE7(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_GAMMAREMOVEENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHWARP_SET_GAMMAREMOVEENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_GAMMAREMOVEENABLE7(s) ((((s)->layerproperty7) >> 14U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GAMMAREMOVEENABLE7_RESET 0U

/* CLIPWINDOWENABLE7: See ClipWindowEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_CLIPWINDOWENABLE7_FSHIFT 30U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_CLIPWINDOWENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_CLIPWINDOWENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_CLIPWINDOWENABLE7(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_CLIPWINDOWENABLE7(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_CLIPWINDOWENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHWARP_SET_CLIPWINDOWENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPWINDOWENABLE7(s) ((((s)->layerproperty7) >> 30U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_CLIPWINDOWENABLE7_RESET 0U

/* SOURCEBUFFERENABLE7: See SourceBufferEnable0. */
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SOURCEBUFFERENABLE7_FSHIFT 31U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SOURCEBUFFERENABLE7_FMASK 0x1U
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SETM_SOURCEBUFFERENABLE7(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SET_SOURCEBUFFERENABLE7(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_LAYERPROPERTY7_GET_SOURCEBUFFERENABLE7(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SOURCEBUFFERENABLE7(s,val) ( (s)->layerproperty7 = ((s)->layerproperty7 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_SOURCEBUFFERENABLE7(s,val)  ( (s)->layerproperty7 = (((s)->layerproperty7 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SOURCEBUFFERENABLE7(s) ((((s)->layerproperty7) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_LAYERPROPERTY7_SOURCEBUFFERENABLE7_RESET 0U

/* FRAMEDIMENSIONS: Output frame dimension. */
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS 0x00000148U
/* FRAMEWIDTH: Frame width minus one. */
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_FRAMEWIDTH_FSHIFT 0U
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_FRAMEWIDTH_FMASK 0x3fffU
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_SETM_FRAMEWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_SET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_GET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_FRAMEWIDTH(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHWARP_SET_FRAMEWIDTH(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FRAMEWIDTH(s) ((((s)->framedimensions) ) & 0x3fffUL)
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_FRAMEWIDTH_RESET 319U

/* FRAMEHEIGHT: Frame height minus one. */
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_FRAMEHEIGHT_FSHIFT 16U
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_FRAMEHEIGHT_FMASK 0x3fffU
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_SETM_FRAMEHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_SET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_GET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_SETM_FRAMEHEIGHT(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHWARP_SET_FRAMEHEIGHT(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FRAMEHEIGHT(s) ((((s)->framedimensions) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_FRAMEHEIGHT_RESET 239U

/* EMPTYFRAME: When enabled output frame is empty. FrameWidth/Height settings have no effect then. Can be used to load shadows or to generate synchronization signals only (frame/sequence complete). If enabled, InputSelect must be set to INACTIVE. */
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_EMPTYFRAME_FSHIFT 31U
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_EMPTYFRAME_FMASK 0x1U
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_SETM_EMPTYFRAME(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_SET_EMPTYFRAME(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_GET_EMPTYFRAME(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_EMPTYFRAME(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHWARP_SET_EMPTYFRAME(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_EMPTYFRAME(s) ((((s)->framedimensions) >> 31U) & 0x1UL)
#define GFXREG_FETCHWARP_FRAMEDIMENSIONS_EMPTYFRAME_RESET 0U

/* FRAMERESAMPLING: Resampling options for output frame. */
#define GFXREG_FETCHWARP_FRAMERESAMPLING 0x0000014cU
/* STARTX: X coordinate of first sample point relative to origin. */
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTX_FSHIFT 0U
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTX_FMASK 0x3fU
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SETM_STARTX(val) (((CYGFX_U32)(val) & 0x3fUL) )
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SET_STARTX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FRAMERESAMPLING_GET_STARTX(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_STARTX(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x3fUL) | (((CYGFX_U32)(val) ) & 0x3fUL) )
#define GFXREG_FETCHWARP_SET_STARTX(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x3fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STARTX(s) ((((s)->frameresampling) ) & 0x3fUL)
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTX_IWIDTH 4
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTX_FWIDTH 2
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTX_RESET 0U

/* STARTY: Y coordinate of first sample point relative to origin. */
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTY_FSHIFT 6U
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTY_FMASK 0x3fU
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SETM_STARTY(val) (((CYGFX_U32)(val) & 0x3fUL) << 6U)
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SET_STARTY(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FRAMERESAMPLING_GET_STARTY(val) (((CYGFX_U32)(val) >> 6U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_STARTY(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0xfc0UL) | (((CYGFX_U32)(val) << 6U) & 0xfc0UL) )
#define GFXREG_FETCHWARP_SET_STARTY(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0xfc0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_STARTY(s) ((((s)->frameresampling) >> 6U) & 0x3fUL)
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTY_IWIDTH 4
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTY_FWIDTH 2
#define GFXREG_FETCHWARP_FRAMERESAMPLING_STARTY_RESET 0U

/* DELTAX: Increment of X coordinate for horizontal step in destination frame. */
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAX_FSHIFT 12U
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAX_FMASK 0x3fU
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SETM_DELTAX(val) (((CYGFX_U32)(val) & 0x3fUL) << 12U)
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SET_DELTAX(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FRAMERESAMPLING_GET_DELTAX(val) (((CYGFX_U32)(val) >> 12U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_DELTAX(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x3f000UL) | (((CYGFX_U32)(val) << 12U) & 0x3f000UL) )
#define GFXREG_FETCHWARP_SET_DELTAX(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x3f000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_DELTAX(s) ((((s)->frameresampling) >> 12U) & 0x3fUL)
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAX_IWIDTH 4
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAX_FWIDTH 2
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAX_RESET 0x4U

/* DELTAY: Increment of Y coordinate for vertical step in destination frame. */
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAY_FSHIFT 18U
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAY_FMASK 0x3fU
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SETM_DELTAY(val) (((CYGFX_U32)(val) & 0x3fUL) << 18U)
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SET_DELTAY(val) (((CYGFX_U32)(val) << 18U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FRAMERESAMPLING_GET_DELTAY(val) (((CYGFX_U32)(val) >> 18U) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_DELTAY(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0xfc0000UL) | (((CYGFX_U32)(val) << 18U) & 0xfc0000UL) )
#define GFXREG_FETCHWARP_SET_DELTAY(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0xfc0000UL) | ((CYGFX_U32)(val) << 18U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_DELTAY(s) ((((s)->frameresampling) >> 18U) & 0x3fUL)
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAY_IWIDTH 4
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAY_FWIDTH 2
#define GFXREG_FETCHWARP_FRAMERESAMPLING_DELTAY_RESET 0x4U

/* SWAPDIRECTION: Swaps X and Y directions for re-sampling. When enabled (= 1) DeltaY is applied for horizontal and DeltaX for vertical step on destination frame. */
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SWAPDIRECTION_FSHIFT 24U
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SWAPDIRECTION_FMASK 0x1U
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SETM_SWAPDIRECTION(val) (((CYGFX_U32)(val) & 0x1UL) << 24U)
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SET_SWAPDIRECTION(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FRAMERESAMPLING_GET_SWAPDIRECTION(val) (((CYGFX_U32)(val) >> 24U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_SWAPDIRECTION(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x1000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1000000UL) )
#define GFXREG_FETCHWARP_SET_SWAPDIRECTION(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x1000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SWAPDIRECTION(s) ((((s)->frameresampling) >> 24U) & 0x1UL)
#define GFXREG_FETCHWARP_FRAMERESAMPLING_SWAPDIRECTION_RESET 0U

/* WARPCONTROL: Warping control options.
   When warping is enabled, re-sampling control is done by homogenous interpolators (affine or perspective warping) or by data stored in a coordinate layer (arbitrary warping).         Both cases replace the re-sampling options DeltaX, DeltaY and FrameSwapDirections, which are used for non-warping setups only.         Depending on the size given by WarpBitsPerPixel, values for x/dx/ddx and y/dy/ddy must be store in the coordinate layer with the following two's complement format per pixel.         1 bpp  - x and y alternating as signed (-3).4 fix-point (1 bit)..         2 bpp  - x and y combined as signed (-3).4 fix-point (1 bit).         4 bpp  - x and y combined as signed (-2).4 fix-point (2 bits).         8 bpp  - x and y combined as signed 0.4 fix-point (4 bits).         16 bpp - x and y combined as signed 4.4 fix-point (8 bits).         32 bpp - x and y combined as signed 12.4 fix-point (16 bits).        */
#define GFXREG_FETCHWARP_WARPCONTROL 0x00000150U
/* WARPBITSPERPIXEL: Number of bits per pixel in the coordinate layer, which is read by another Fetch unit. Has to be 1, 2, 4, 8, 16 or 32. */
#define GFXREG_FETCHWARP_WARPCONTROL_WARPBITSPERPIXEL_FSHIFT 0U
#define GFXREG_FETCHWARP_WARPCONTROL_WARPBITSPERPIXEL_FMASK 0x3fU
#define GFXREG_FETCHWARP_WARPCONTROL_SETM_WARPBITSPERPIXEL(val) (((CYGFX_U32)(val) & 0x3fUL) )
#define GFXREG_FETCHWARP_WARPCONTROL_SET_WARPBITSPERPIXEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_WARPCONTROL_GET_WARPBITSPERPIXEL(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_FETCHWARP_SETM_WARPBITSPERPIXEL(s,val) ( (s)->warpcontrol = ((s)->warpcontrol & ~0x3fUL) | (((CYGFX_U32)(val) ) & 0x3fUL) )
#define GFXREG_FETCHWARP_SET_WARPBITSPERPIXEL(s,val)  ( (s)->warpcontrol = (((s)->warpcontrol & ~0x3fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_WARPBITSPERPIXEL(s) ((((s)->warpcontrol) ) & 0x3fUL)
#define GFXREG_FETCHWARP_WARPCONTROL_WARPBITSPERPIXEL_RESET 0x20U

/* WARPCOORDINATEMODE: Content of pixel data in the coordinate layer. */
#define GFXREG_FETCHWARP_WARPCONTROL_WARPCOORDINATEMODE_FSHIFT 8U
#define GFXREG_FETCHWARP_WARPCONTROL_WARPCOORDINATEMODE_FMASK 0x3U
#define GFXREG_FETCHWARP_WARPCONTROL_SETM_WARPCOORDINATEMODE(val) (((CYGFX_U32)(val) & 0x3UL) << 8U)
#define GFXREG_FETCHWARP_WARPCONTROL_SET_WARPCOORDINATEMODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_WARPCONTROL_GET_WARPCOORDINATEMODE(val) (((CYGFX_U32)(val) >> 8U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_WARPCOORDINATEMODE(s,val) ( (s)->warpcontrol = ((s)->warpcontrol & ~0x300UL) | (((CYGFX_U32)(val) << 8U) & 0x300UL) )
#define GFXREG_FETCHWARP_SET_WARPCOORDINATEMODE(s,val)  ( (s)->warpcontrol = (((s)->warpcontrol & ~0x300UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_WARPCOORDINATEMODE(s) ((((s)->warpcontrol) >> 8U) & 0x3UL)
#define GFXREG_FETCHWARP_WARPCONTROL_WARPCOORDINATEMODE_PNT 0x0U /* x and y (sample points). */
#define GFXREG_FETCHWARP_WARPCONTROL_WARPCOORDINATEMODE_D_PNT 0x1U /* dx and dy (vectors between adjacent sample points). */
#define GFXREG_FETCHWARP_WARPCONTROL_WARPCOORDINATEMODE_DD_PNT 0x2U /* ddx and ddy (deltas between adjacent vectors). */
#define GFXREG_FETCHWARP_WARPCONTROL_WARPCOORDINATEMODE_RESET 0x0U

/* WARPSYMMETRICOFFSET: Value 1 enables symmetric range for negative and positive coordinate values by adding an offset of +0.03125 internally to all coordinate input values. Recommended for small coordinate formats in DD_PNT mode. */
#define GFXREG_FETCHWARP_WARPCONTROL_WARPSYMMETRICOFFSET_FSHIFT 12U
#define GFXREG_FETCHWARP_WARPCONTROL_WARPSYMMETRICOFFSET_FMASK 0x1U
#define GFXREG_FETCHWARP_WARPCONTROL_SETM_WARPSYMMETRICOFFSET(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_FETCHWARP_WARPCONTROL_SET_WARPSYMMETRICOFFSET(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_WARPCONTROL_GET_WARPSYMMETRICOFFSET(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_WARPSYMMETRICOFFSET(s,val) ( (s)->warpcontrol = ((s)->warpcontrol & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_FETCHWARP_SET_WARPSYMMETRICOFFSET(s,val)  ( (s)->warpcontrol = (((s)->warpcontrol & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_WARPSYMMETRICOFFSET(s) ((((s)->warpcontrol) >> 12U) & 0x1UL)
#define GFXREG_FETCHWARP_WARPCONTROL_WARPSYMMETRICOFFSET_RESET 0x0U

/* ARBSTARTX: Start value X for arbitrary warping. */
#define GFXREG_FETCHWARP_ARBSTARTX 0x00000154U
/* ARBSTARTX: Start point for sample-point interpolation (X coordinate). */
#define GFXREG_FETCHWARP_ARBSTARTX_ARBSTARTX_FSHIFT 0U
#define GFXREG_FETCHWARP_ARBSTARTX_ARBSTARTX_FMASK 0x1fffffU
#define GFXREG_FETCHWARP_ARBSTARTX_SETM_ARBSTARTX(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_FETCHWARP_ARBSTARTX_SET_ARBSTARTX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_ARBSTARTX_GET_ARBSTARTX(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_FETCHWARP_SETM_ARBSTARTX(s,val) ( (s)->arbstartx = ((s)->arbstartx & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_FETCHWARP_SET_ARBSTARTX(s,val)  ( (s)->arbstartx = (((s)->arbstartx & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ARBSTARTX(s) ((((s)->arbstartx) ) & 0x1fffffUL)
#define GFXREG_FETCHWARP_ARBSTARTX_ARBSTARTX_IWIDTH 16
#define GFXREG_FETCHWARP_ARBSTARTX_ARBSTARTX_FWIDTH 5
#define GFXREG_FETCHWARP_ARBSTARTX_ARBSTARTX_RESET 0U

/* ARBSTARTY: Start value Y for arbitrary warping. */
#define GFXREG_FETCHWARP_ARBSTARTY 0x00000158U
/* ARBSTARTY: Start point for sample-point interpolation (Y coordinate). */
#define GFXREG_FETCHWARP_ARBSTARTY_ARBSTARTY_FSHIFT 0U
#define GFXREG_FETCHWARP_ARBSTARTY_ARBSTARTY_FMASK 0x1fffffU
#define GFXREG_FETCHWARP_ARBSTARTY_SETM_ARBSTARTY(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_FETCHWARP_ARBSTARTY_SET_ARBSTARTY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_ARBSTARTY_GET_ARBSTARTY(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_FETCHWARP_SETM_ARBSTARTY(s,val) ( (s)->arbstarty = ((s)->arbstarty & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_FETCHWARP_SET_ARBSTARTY(s,val)  ( (s)->arbstarty = (((s)->arbstarty & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ARBSTARTY(s) ((((s)->arbstarty) ) & 0x1fffffUL)
#define GFXREG_FETCHWARP_ARBSTARTY_ARBSTARTY_IWIDTH 16
#define GFXREG_FETCHWARP_ARBSTARTY_ARBSTARTY_FWIDTH 5
#define GFXREG_FETCHWARP_ARBSTARTY_ARBSTARTY_RESET 0U

/* ARBDELTA: Start values for delta incrementation of arbitrary warping.
   Fields of this register have only effect when WarpCoordinateMode is DD_PNT.        */
#define GFXREG_FETCHWARP_ARBDELTA 0x0000015cU
/* ARBDELTAXX: X coordinate of vector between first and second sample point. */
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXX_FSHIFT 0U
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXX_FMASK 0xffU
#define GFXREG_FETCHWARP_ARBDELTA_SETM_ARBDELTAXX(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_ARBDELTA_SET_ARBDELTAXX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_ARBDELTA_GET_ARBDELTAXX(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_ARBDELTAXX(s,val) ( (s)->arbdelta = ((s)->arbdelta & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_ARBDELTAXX(s,val)  ( (s)->arbdelta = (((s)->arbdelta & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ARBDELTAXX(s) ((((s)->arbdelta) ) & 0xffUL)
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXX_IWIDTH 3
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXX_FWIDTH 5
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXX_RESET 0U

/* ARBDELTAXY: Y coordinate of vector between first and second sample point. */
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXY_FSHIFT 8U
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXY_FMASK 0xffU
#define GFXREG_FETCHWARP_ARBDELTA_SETM_ARBDELTAXY(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_ARBDELTA_SET_ARBDELTAXY(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_ARBDELTA_GET_ARBDELTAXY(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_ARBDELTAXY(s,val) ( (s)->arbdelta = ((s)->arbdelta & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_ARBDELTAXY(s,val)  ( (s)->arbdelta = (((s)->arbdelta & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ARBDELTAXY(s) ((((s)->arbdelta) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXY_IWIDTH 3
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXY_FWIDTH 5
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAXY_RESET 0U

/* ARBDELTAYX: X coordinate of vector between start and first sample point. */
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYX_FSHIFT 16U
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYX_FMASK 0xffU
#define GFXREG_FETCHWARP_ARBDELTA_SETM_ARBDELTAYX(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_ARBDELTA_SET_ARBDELTAYX(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_ARBDELTA_GET_ARBDELTAYX(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_ARBDELTAYX(s,val) ( (s)->arbdelta = ((s)->arbdelta & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_ARBDELTAYX(s,val)  ( (s)->arbdelta = (((s)->arbdelta & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ARBDELTAYX(s) ((((s)->arbdelta) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYX_IWIDTH 3
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYX_FWIDTH 5
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYX_RESET 0U

/* ARBDELTAYY: Y coordinate of vector between start and first sample point. */
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYY_FSHIFT 24U
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYY_FMASK 0xffU
#define GFXREG_FETCHWARP_ARBDELTA_SETM_ARBDELTAYY(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_ARBDELTA_SET_ARBDELTAYY(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_ARBDELTA_GET_ARBDELTAYY(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_ARBDELTAYY(s,val) ( (s)->arbdelta = ((s)->arbdelta & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_ARBDELTAYY(s,val)  ( (s)->arbdelta = (((s)->arbdelta & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_ARBDELTAYY(s) ((((s)->arbdelta) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYY_IWIDTH 3
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYY_FWIDTH 5
#define GFXREG_FETCHWARP_ARBDELTA_ARBDELTAYY_RESET 0U

/* FIRPOSITIONS: FIR sequence control register.
   Selects the positions of the four input pixels to the bilinear filter inside he 4x4 FIR input array.        */
#define GFXREG_FETCHWARP_FIRPOSITIONS 0x00000160U
/* FIR0POSITION: Position of first pixel. */
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR0POSITION_FSHIFT 0U
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR0POSITION_FMASK 0xfU
#define GFXREG_FETCHWARP_FIRPOSITIONS_SETM_FIR0POSITION(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHWARP_FIRPOSITIONS_SET_FIR0POSITION(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FIRPOSITIONS_GET_FIR0POSITION(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_FIR0POSITION(s,val) ( (s)->firpositions = ((s)->firpositions & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHWARP_SET_FIR0POSITION(s,val)  ( (s)->firpositions = (((s)->firpositions & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FIR0POSITION(s) ((((s)->firpositions) ) & 0xfUL)
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR0POSITION_RESET 5U

/* FIR1POSITION: Position of second pixel. */
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR1POSITION_FSHIFT 4U
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR1POSITION_FMASK 0xfU
#define GFXREG_FETCHWARP_FIRPOSITIONS_SETM_FIR1POSITION(val) (((CYGFX_U32)(val) & 0xfUL) << 4U)
#define GFXREG_FETCHWARP_FIRPOSITIONS_SET_FIR1POSITION(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FIRPOSITIONS_GET_FIR1POSITION(val) (((CYGFX_U32)(val) >> 4U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_FIR1POSITION(s,val) ( (s)->firpositions = ((s)->firpositions & ~0xf0UL) | (((CYGFX_U32)(val) << 4U) & 0xf0UL) )
#define GFXREG_FETCHWARP_SET_FIR1POSITION(s,val)  ( (s)->firpositions = (((s)->firpositions & ~0xf0UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FIR1POSITION(s) ((((s)->firpositions) >> 4U) & 0xfUL)
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR1POSITION_RESET 6U

/* FIR2POSITION: Position of third pixel. */
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR2POSITION_FSHIFT 8U
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR2POSITION_FMASK 0xfU
#define GFXREG_FETCHWARP_FIRPOSITIONS_SETM_FIR2POSITION(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHWARP_FIRPOSITIONS_SET_FIR2POSITION(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FIRPOSITIONS_GET_FIR2POSITION(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_FIR2POSITION(s,val) ( (s)->firpositions = ((s)->firpositions & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHWARP_SET_FIR2POSITION(s,val)  ( (s)->firpositions = (((s)->firpositions & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FIR2POSITION(s) ((((s)->firpositions) >> 8U) & 0xfUL)
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR2POSITION_RESET 9U

/* FIR3POSITION: Position of fourth pixel. */
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR3POSITION_FSHIFT 12U
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR3POSITION_FMASK 0xfU
#define GFXREG_FETCHWARP_FIRPOSITIONS_SETM_FIR3POSITION(val) (((CYGFX_U32)(val) & 0xfUL) << 12U)
#define GFXREG_FETCHWARP_FIRPOSITIONS_SET_FIR3POSITION(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FIRPOSITIONS_GET_FIR3POSITION(val) (((CYGFX_U32)(val) >> 12U) & 0xfUL)
#define GFXREG_FETCHWARP_SETM_FIR3POSITION(s,val) ( (s)->firpositions = ((s)->firpositions & ~0xf000UL) | (((CYGFX_U32)(val) << 12U) & 0xf000UL) )
#define GFXREG_FETCHWARP_SET_FIR3POSITION(s,val)  ( (s)->firpositions = (((s)->firpositions & ~0xf000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FIR3POSITION(s) ((((s)->firpositions) >> 12U) & 0xfUL)
#define GFXREG_FETCHWARP_FIRPOSITIONS_FIR3POSITION_RESET 10U

/* FIRCOEFFICIENTS: FIR coefficients register.
   Specifies the four coefficient for FIR operations.        */
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS 0x00000164U
/* FIR0COEFFICIENT: First coefficient. */
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR0COEFFICIENT_FSHIFT 0U
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR0COEFFICIENT_FMASK 0xffU
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_SETM_FIR0COEFFICIENT(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_SET_FIR0COEFFICIENT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_GET_FIR0COEFFICIENT(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_FIR0COEFFICIENT(s,val) ( (s)->fircoefficients = ((s)->fircoefficients & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_FIR0COEFFICIENT(s,val)  ( (s)->fircoefficients = (((s)->fircoefficients & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FIR0COEFFICIENT(s) ((((s)->fircoefficients) ) & 0xffUL)
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR0COEFFICIENT_IWIDTH 3
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR0COEFFICIENT_FWIDTH 5
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR0COEFFICIENT_RESET 0x20U

/* FIR1COEFFICIENT: Second coefficient. */
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR1COEFFICIENT_FSHIFT 8U
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR1COEFFICIENT_FMASK 0xffU
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_SETM_FIR1COEFFICIENT(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_SET_FIR1COEFFICIENT(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_GET_FIR1COEFFICIENT(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_FIR1COEFFICIENT(s,val) ( (s)->fircoefficients = ((s)->fircoefficients & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHWARP_SET_FIR1COEFFICIENT(s,val)  ( (s)->fircoefficients = (((s)->fircoefficients & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FIR1COEFFICIENT(s) ((((s)->fircoefficients) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR1COEFFICIENT_IWIDTH 3
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR1COEFFICIENT_FWIDTH 5
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR1COEFFICIENT_RESET 0U

/* FIR2COEFFICIENT: Third coefficient. */
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR2COEFFICIENT_FSHIFT 16U
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR2COEFFICIENT_FMASK 0xffU
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_SETM_FIR2COEFFICIENT(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_SET_FIR2COEFFICIENT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_GET_FIR2COEFFICIENT(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_FIR2COEFFICIENT(s,val) ( (s)->fircoefficients = ((s)->fircoefficients & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHWARP_SET_FIR2COEFFICIENT(s,val)  ( (s)->fircoefficients = (((s)->fircoefficients & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FIR2COEFFICIENT(s) ((((s)->fircoefficients) >> 16U) & 0xffUL)
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR2COEFFICIENT_IWIDTH 3
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR2COEFFICIENT_FWIDTH 5
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR2COEFFICIENT_RESET 0U

/* FIR3COEFFICIENT: Fourth coefficient. */
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR3COEFFICIENT_FSHIFT 24U
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR3COEFFICIENT_FMASK 0xffU
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_SETM_FIR3COEFFICIENT(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_SET_FIR3COEFFICIENT(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_GET_FIR3COEFFICIENT(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_FIR3COEFFICIENT(s,val) ( (s)->fircoefficients = ((s)->fircoefficients & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHWARP_SET_FIR3COEFFICIENT(s,val)  ( (s)->fircoefficients = (((s)->fircoefficients & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FIR3COEFFICIENT(s) ((((s)->fircoefficients) >> 24U) & 0xffUL)
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR3COEFFICIENT_IWIDTH 3
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR3COEFFICIENT_FWIDTH 5
#define GFXREG_FETCHWARP_FIRCOEFFICIENTS_FIR3COEFFICIENT_RESET 0U

/* CONTROL: Shared common control settings for all layers. */
#define GFXREG_FETCHWARP_CONTROL 0x00000168U
/* RASTERMODE: Selects a method how to generate source buffer sample points. */
#define GFXREG_FETCHWARP_CONTROL_RASTERMODE_FSHIFT 0U
#define GFXREG_FETCHWARP_CONTROL_RASTERMODE_FMASK 0x7U
#define GFXREG_FETCHWARP_CONTROL_SETM_RASTERMODE(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_FETCHWARP_CONTROL_SET_RASTERMODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONTROL_GET_RASTERMODE(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_FETCHWARP_SETM_RASTERMODE(s,val) ( (s)->control = ((s)->control & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_FETCHWARP_SET_RASTERMODE(s,val)  ( (s)->control = (((s)->control & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RASTERMODE(s) ((((s)->control) ) & 0x7UL)
#define GFXREG_FETCHWARP_CONTROL_RASTERMODE_NORMAL 0x0U /* [IBO only, for LBO use PERSPECTIVE with corresponding Geometry] First sample at StartX/Y relative to origin. Hor/ver increments using DeltaX/Y and DeltaSwap setup. */
#define GFXREG_FETCHWARP_CONTROL_RASTERMODE_DECODE 0x1U /* [FetchDecode/FetchBlit only] Source buffer is an encoded bit stream. First sample at origin (0,0). Hor/ver increments = (1,0)/(0,1). */
#define GFXREG_FETCHWARP_CONTROL_RASTERMODE_ARBITRARY 0x2U /* [FetchBlit/Warp only] Arbitrary warping (filter is active). Coordinates are read from frame input port. InputSelect must be set to COORDINATE. ArbStartX/Y and ArbDeltaXX/XY/YX/YY must be setup. */
#define GFXREG_FETCHWARP_CONTROL_RASTERMODE_PERSPECTIVE 0x3U /* [FetchBlit only] Affine/Perspective warping (filter is active). First sample at PerspStartX/Y/W. Hor/ver increments using PerspDeltaXX/XY/YX/YY/WX/WY. Homogeneous coordinates. See also field Geometry to reduce coordinate amount. */
#define GFXREG_FETCHWARP_CONTROL_RASTERMODE_YUV422 0x4U /* [FetchBlit/Decode only] Source buffer is packed YUV 422. First sample at origin (0,0). Hor/ver increments = (1,0)/(0,1). All correllated window widths and horizontal offsets must be even. */
#define GFXREG_FETCHWARP_CONTROL_RASTERMODE_RESET 0x0U

/* INPUTSELECT: Selects function for the frame input port. */
#define GFXREG_FETCHWARP_CONTROL_INPUTSELECT_FSHIFT 3U
#define GFXREG_FETCHWARP_CONTROL_INPUTSELECT_FMASK 0x3U
#define GFXREG_FETCHWARP_CONTROL_SETM_INPUTSELECT(val) (((CYGFX_U32)(val) & 0x3UL) << 3U)
#define GFXREG_FETCHWARP_CONTROL_SET_INPUTSELECT(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONTROL_GET_INPUTSELECT(val) (((CYGFX_U32)(val) >> 3U) & 0x3UL)
#define GFXREG_FETCHWARP_SETM_INPUTSELECT(s,val) ( (s)->control = ((s)->control & ~0x18UL) | (((CYGFX_U32)(val) << 3U) & 0x18UL) )
#define GFXREG_FETCHWARP_SET_INPUTSELECT(s,val)  ( (s)->control = (((s)->control & ~0x18UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_INPUTSELECT(s) ((((s)->control) >> 3U) & 0x3UL)
#define GFXREG_FETCHWARP_CONTROL_INPUTSELECT_INACTIVE 0x0U /* Not used. */
#define GFXREG_FETCHWARP_CONTROL_INPUTSELECT_COMPPACK 0x1U /* Used for component packing (e.g. UV or source alpha buffer). */
#define GFXREG_FETCHWARP_CONTROL_INPUTSELECT_ALPHAMASK 0x2U /* Used for RGB and alpha pre-multiply stage (mask alpha buffer). */
#define GFXREG_FETCHWARP_CONTROL_INPUTSELECT_COORDINATE 0x3U /* Used for arbitrary warping (coordinate buffer). */
#define GFXREG_FETCHWARP_CONTROL_INPUTSELECT_RESET 0x0U

/* RAWPIXEL: Raw pixel mode. If enabled (value = 1), the ComponentBits/Shift settings are replaced for all layers by fixed values that allow passing the pixel data read from memory unchanged to subsequent units (e.g. for reading coordinate layers). Multiply stages and transparent color are deactivated. Skip and Tile pixels are not affected by this setting. */
#define GFXREG_FETCHWARP_CONTROL_RAWPIXEL_FSHIFT 7U
#define GFXREG_FETCHWARP_CONTROL_RAWPIXEL_FMASK 0x1U
#define GFXREG_FETCHWARP_CONTROL_SETM_RAWPIXEL(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHWARP_CONTROL_SET_RAWPIXEL(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONTROL_GET_RAWPIXEL(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_RAWPIXEL(s,val) ( (s)->control = ((s)->control & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHWARP_SET_RAWPIXEL(s,val)  ( (s)->control = (((s)->control & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_RAWPIXEL(s) ((((s)->control) >> 7U) & 0x1UL)
#define GFXREG_FETCHWARP_CONTROL_RAWPIXEL_RESET 0U

/* CLIPCOLOR: Selects which color to take for pixels that do not lie inside the clip window of any layer. */
#define GFXREG_FETCHWARP_CONTROL_CLIPCOLOR_FSHIFT 16U
#define GFXREG_FETCHWARP_CONTROL_CLIPCOLOR_FMASK 0x1U
#define GFXREG_FETCHWARP_CONTROL_SETM_CLIPCOLOR(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_FETCHWARP_CONTROL_SET_CLIPCOLOR(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONTROL_GET_CLIPCOLOR(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_CLIPCOLOR(s,val) ( (s)->control = ((s)->control & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_FETCHWARP_SET_CLIPCOLOR(s,val)  ( (s)->control = (((s)->control & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPCOLOR(s) ((((s)->control) >> 16U) & 0x1UL)
#define GFXREG_FETCHWARP_CONTROL_CLIPCOLOR_NULL 0x0U /* Null color. */
#define GFXREG_FETCHWARP_CONTROL_CLIPCOLOR_LAYER 0x1U /* Color of layer number given by ClipLayer (or layer 0 when Fetch unit has one layer only). The color is then the layer's source or tiling color. */
#define GFXREG_FETCHWARP_CONTROL_CLIPCOLOR_RESET 0x1U

/* CLIPLAYER: Index of the layer which is used to fill the clipping area of the frame layout when ClipColor is set to LAYER. The selected layer must be enabled (LayerEnable). */
#define GFXREG_FETCHWARP_CONTROL_CLIPLAYER_FSHIFT 17U
#define GFXREG_FETCHWARP_CONTROL_CLIPLAYER_FMASK 0x7U
#define GFXREG_FETCHWARP_CONTROL_SETM_CLIPLAYER(val) (((CYGFX_U32)(val) & 0x7UL) << 17U)
#define GFXREG_FETCHWARP_CONTROL_SET_CLIPLAYER(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONTROL_GET_CLIPLAYER(val) (((CYGFX_U32)(val) >> 17U) & 0x7UL)
#define GFXREG_FETCHWARP_SETM_CLIPLAYER(s,val) ( (s)->control = ((s)->control & ~0xe0000UL) | (((CYGFX_U32)(val) << 17U) & 0xe0000UL) )
#define GFXREG_FETCHWARP_SET_CLIPLAYER(s,val)  ( (s)->control = (((s)->control & ~0xe0000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_CLIPLAYER(s) ((((s)->control) >> 17U) & 0x7UL)
#define GFXREG_FETCHWARP_CONTROL_CLIPLAYER_RESET 0x0U

/* FILTERMODE: Use this to select between nearest and bilinear filtering. Only has an effect if rastermode == ARBITRARY or rastermode == PERSPECTIVE or rastermode == AFFINE. */
#define GFXREG_FETCHWARP_CONTROL_FILTERMODE_FSHIFT 20U
#define GFXREG_FETCHWARP_CONTROL_FILTERMODE_FMASK 0x7U
#define GFXREG_FETCHWARP_CONTROL_SETM_FILTERMODE(val) (((CYGFX_U32)(val) & 0x7UL) << 20U)
#define GFXREG_FETCHWARP_CONTROL_SET_FILTERMODE(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONTROL_GET_FILTERMODE(val) (((CYGFX_U32)(val) >> 20U) & 0x7UL)
#define GFXREG_FETCHWARP_SETM_FILTERMODE(s,val) ( (s)->control = ((s)->control & ~0x700000UL) | (((CYGFX_U32)(val) << 20U) & 0x700000UL) )
#define GFXREG_FETCHWARP_SET_FILTERMODE(s,val)  ( (s)->control = (((s)->control & ~0x700000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_FILTERMODE(s) ((((s)->control) >> 20U) & 0x7UL)
#define GFXREG_FETCHWARP_CONTROL_FILTERMODE_NEAREST 0U /* Chooses pixel closest to sample point */
#define GFXREG_FETCHWARP_CONTROL_FILTERMODE_BILINEAR 1U /* Calculates result from 4 pixels closest to sample point */
#define GFXREG_FETCHWARP_CONTROL_FILTERMODE_FIR2 2U /* FIR mode with 2 programmable pixel positions and coefficients */
#define GFXREG_FETCHWARP_CONTROL_FILTERMODE_FIR4 3U /* FIR mode with 4 programmable pixel positions and coefficients */
#define GFXREG_FETCHWARP_CONTROL_FILTERMODE_HOR_LINEAR 4U /* Calculates result from 2 pixels closest to the sample point and on the same line */
#define GFXREG_FETCHWARP_CONTROL_FILTERMODE_RESET 0U

/* LINEBUFLAYER: Index of the layer which used as a memory based linebuffer. Only has an effect if this fetch unit is connected to a store unit for linebuffer handshake and linebuffer handshake is enabled. */
#define GFXREG_FETCHWARP_CONTROL_LINEBUFLAYER_FSHIFT 24U
#define GFXREG_FETCHWARP_CONTROL_LINEBUFLAYER_FMASK 0x7U
#define GFXREG_FETCHWARP_CONTROL_SETM_LINEBUFLAYER(val) (((CYGFX_U32)(val) & 0x7UL) << 24U)
#define GFXREG_FETCHWARP_CONTROL_SET_LINEBUFLAYER(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_CONTROL_GET_LINEBUFLAYER(val) (((CYGFX_U32)(val) >> 24U) & 0x7UL)
#define GFXREG_FETCHWARP_SETM_LINEBUFLAYER(s,val) ( (s)->control = ((s)->control & ~0x7000000UL) | (((CYGFX_U32)(val) << 24U) & 0x7000000UL) )
#define GFXREG_FETCHWARP_SET_LINEBUFLAYER(s,val)  ( (s)->control = (((s)->control & ~0x7000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_LINEBUFLAYER(s) ((((s)->control) >> 24U) & 0x7UL)
#define GFXREG_FETCHWARP_CONTROL_LINEBUFLAYER_RESET 0U

/* TRIGGERENABLE: Shadow load enable flags for all layers.
   Field contains one enable flag per layer (layer index = bit index).         When the flag is set, the shadow configuration of the corresponding layer is loaded once a shadow load token is generated by the Pixel Engine's synchronizer or explicitly by the ShdTokGen trigger bit.         The flag is reset automatically once the shadows have been loaded.         Writing a '0' to a flag has no effect, so it's not possible to clear a shadow load request.         When ShdLdReqSticky is set, the shadow configuration is always loaded. ShdLdReq has no effect then.         Affected fields are type RWS and have a name with the layer index as last character.         RWS fields that are shared by all layers are loaded in any case.        */
#define GFXREG_FETCHWARP_TRIGGERENABLE 0x0000016cU
/* SHDLDREQ: Shadow load request flags for each layer (one time load). */
#define GFXREG_FETCHWARP_TRIGGERENABLE_SHDLDREQ_FSHIFT 0U
#define GFXREG_FETCHWARP_TRIGGERENABLE_SHDLDREQ_FMASK 0xffU
#define GFXREG_FETCHWARP_TRIGGERENABLE_SETM_SHDLDREQ(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHWARP_TRIGGERENABLE_SET_SHDLDREQ(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_TRIGGERENABLE_GET_SHDLDREQ(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_SETM_SHDLDREQ(s,val) ( (s)->triggerenable = ((s)->triggerenable & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHWARP_SET_SHDLDREQ(s,val)  ( (s)->triggerenable = (((s)->triggerenable & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_SHDLDREQ(s) ((((s)->triggerenable) ) & 0xffUL)
#define GFXREG_FETCHWARP_TRIGGERENABLE_SHDLDREQ_RESET 0U

/* CONTROLTRIGGER: Shadow load trigger. */
#define GFXREG_FETCHWARP_CONTROLTRIGGER 0x00000170U
/* SHDTOKGEN: Writing a 1 to this will load shadow registers into the active configuration with the next start of frame and send a shadow load token to subsequent units. */
#define GFXREG_FETCHWARP_CONTROLTRIGGER_SHDTOKGEN_FSHIFT 0U
#define GFXREG_FETCHWARP_CONTROLTRIGGER_SHDTOKGEN_FMASK 0x1U
#define GFXREG_FETCHWARP_CONTROLTRIGGER_SETM_SHDTOKGEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHWARP_CONTROLTRIGGER_SET_SHDTOKGEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SETM_SHDTOKGEN(s,val) ( (s)->controltrigger = ((s)->controltrigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHWARP_SET_SHDTOKGEN(s,val)  ( (s)->controltrigger = (((s)->controltrigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_CONTROLTRIGGER_SHDTOKGEN_RESET (none)U

/* START: Frame start trigger. */
#define GFXREG_FETCHWARP_START 0x00000174U
/* START: Writing a 1 to this field will start generating one frame (for debugging purposes only). */
#define GFXREG_FETCHWARP_START_START_FSHIFT 0U
#define GFXREG_FETCHWARP_START_START_FMASK 0x1U
#define GFXREG_FETCHWARP_START_SETM_START(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHWARP_START_SET_START(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_SETM_START(s,val) ( (s)->start = ((s)->start & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHWARP_SET_START(s,val)  ( (s)->start = (((s)->start & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_START_START_RESET (none)U

/* FETCHTYPE: Fetch unit type. */
#define GFXREG_FETCHWARP_FETCHTYPE 0x00000178U
/* FETCHTYPE: This field can be used to determine what kind of fetch unit this is. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_FSHIFT 0U
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_FMASK 0xfU
#define GFXREG_FETCHWARP_FETCHTYPE_GET_FETCHTYPE(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHWARP_GET_FETCHTYPE(s) ((((s)->fetchtype) ) & 0xfUL)
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_DECODE 0U /* Fetch unit with RL and RLAD decoder. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_LAYER 1U /* Fetch unit with fractional plane (8 layers). */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_WARP 2U /* Fetch unit with arbitrary warping and fractional plane (8 layers). */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_ECO 3U /* Fetch unit with minimum feature set for alpha, chroma and coordinate planes. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_PERSP 4U /* Fetch unit with affine, perspective and arbitrary warping. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_ROT 5U /* Fetch unit with affine and arbitrary warping. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_DECODEL 6U /* Fetch unit with RL and RLAD decoder, reduced feature set. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_LAYERL 7U /* Fetch unit with fractional plane (8 layers), reduced feature set. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_ROTL 8U /* Fetch unit with affine and arbitrary warping, reduced feature set. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_ECOL 9U /* Fetch unit with reduced minimum feature set for alpha, chroma and coordinate planes. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_BLIT 10U /* Fetch unit with DECODE and PERSP capabilities. */
#define GFXREG_FETCHWARP_FETCHTYPE_FETCHTYPE_RESET (none)U

/* BURSTBUFFERPROPERTIES: Burst buffer properties. */
#define GFXREG_FETCHWARP_BURSTBUFFERPROPERTIES 0x0000017cU
/* MANAGEDBURSTBUFFERS: Maximum number of burst buffers that can be administrated in the AXI interface. */
#define GFXREG_FETCHWARP_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_FSHIFT 0U
#define GFXREG_FETCHWARP_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_FMASK 0xffU
#define GFXREG_FETCHWARP_BURSTBUFFERPROPERTIES_GET_MANAGEDBURSTBUFFERS(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHWARP_GET_MANAGEDBURSTBUFFERS(s) ((((s)->burstbufferproperties) ) & 0xffUL)
#define GFXREG_FETCHWARP_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_RESET (none)U

/* BURSTLENGTHFORMAXBUFFERS: Maximum Burst Length that can be used when ManagedBurstBuffers burst buffers are used. */
#define GFXREG_FETCHWARP_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_FSHIFT 8U
#define GFXREG_FETCHWARP_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_FMASK 0x1fU
#define GFXREG_FETCHWARP_BURSTBUFFERPROPERTIES_GET_BURSTLENGTHFORMAXBUFFERS(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_GET_BURSTLENGTHFORMAXBUFFERS(s) ((((s)->burstbufferproperties) >> 8U) & 0x1fUL)
#define GFXREG_FETCHWARP_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_RESET (none)U

/* STATUS: Status information. */
#define GFXREG_FETCHWARP_STATUS 0x00000180U
/* WRITETIMEOUT: Timeout detected when writing to the palette entries or shadow token trigger enables in FetchLayer derivate. Write 1 to clear. */
#define GFXREG_FETCHWARP_STATUS_WRITETIMEOUT_FSHIFT 0U
#define GFXREG_FETCHWARP_STATUS_WRITETIMEOUT_FMASK 0x1U
#define GFXREG_FETCHWARP_STATUS_SETM_WRITETIMEOUT(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHWARP_STATUS_SET_WRITETIMEOUT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_STATUS_GET_WRITETIMEOUT(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_WRITETIMEOUT(s,val) ( (s)->status = ((s)->status & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHWARP_SET_WRITETIMEOUT(s,val)  ( (s)->status = (((s)->status & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_WRITETIMEOUT(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_FETCHWARP_STATUS_WRITETIMEOUT_RESET 0x0U

/* READTIMEOUT: Timeout detected when reading from the palette entries or shadow token trigger enables in FetchLayer derivate. Write 1 to clear. */
#define GFXREG_FETCHWARP_STATUS_READTIMEOUT_FSHIFT 4U
#define GFXREG_FETCHWARP_STATUS_READTIMEOUT_FMASK 0x1U
#define GFXREG_FETCHWARP_STATUS_SETM_READTIMEOUT(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHWARP_STATUS_SET_READTIMEOUT(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHWARP_STATUS_GET_READTIMEOUT(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_SETM_READTIMEOUT(s,val) ( (s)->status = ((s)->status & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHWARP_SET_READTIMEOUT(s,val)  ( (s)->status = (((s)->status & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHWARP_GET_READTIMEOUT(s) ((((s)->status) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_STATUS_READTIMEOUT_RESET 0x0U

/* HIDDENSTATUS: Hidden status informations.
   The ShadowStatus field(s) indicate if a shadow load has been triggered for the corresponding layer, but not yet executed (for debugging purposes only; read only when stable).        */
#define GFXREG_FETCHWARP_HIDDENSTATUS 0x00000184U
/* STATUSBUSY: Fetch unit is busy. */
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSBUSY_FSHIFT 0U
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSBUSY_FMASK 0x1U
#define GFXREG_FETCHWARP_HIDDENSTATUS_GET_STATUSBUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHWARP_GET_STATUSBUSY(s) ((((s)->hiddenstatus) ) & 0x1UL)
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSBUSY_RESET (none)U

/* STATUSBUFFERSIDLE: AXI interface buffers are idle. */
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSBUFFERSIDLE_FSHIFT 4U
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSBUFFERSIDLE_FMASK 0x1U
#define GFXREG_FETCHWARP_HIDDENSTATUS_GET_STATUSBUFFERSIDLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_GET_STATUSBUFFERSIDLE(s) ((((s)->hiddenstatus) >> 4U) & 0x1UL)
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSBUFFERSIDLE_RESET (none)U

/* STATUSREQUEST: Fetch unit requesting on the AXI interface, waiting for acknowledge. */
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSREQUEST_FSHIFT 5U
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSREQUEST_FMASK 0x1U
#define GFXREG_FETCHWARP_HIDDENSTATUS_GET_STATUSREQUEST(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_GET_STATUSREQUEST(s) ((((s)->hiddenstatus) >> 5U) & 0x1UL)
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSREQUEST_RESET (none)U

/* STATUSCOMPLETE: Fetch unit completed all requested AXI transfers. */
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSCOMPLETE_FSHIFT 6U
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSCOMPLETE_FMASK 0x1U
#define GFXREG_FETCHWARP_HIDDENSTATUS_GET_STATUSCOMPLETE(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_GET_STATUSCOMPLETE(s) ((((s)->hiddenstatus) >> 6U) & 0x1UL)
#define GFXREG_FETCHWARP_HIDDENSTATUS_STATUSCOMPLETE_RESET (none)U

/* SHADOWSTATUS: Shadow load status for all layers (layer index = bit index). */
#define GFXREG_FETCHWARP_HIDDENSTATUS_SHADOWSTATUS_FSHIFT 8U
#define GFXREG_FETCHWARP_HIDDENSTATUS_SHADOWSTATUS_FMASK 0xffU
#define GFXREG_FETCHWARP_HIDDENSTATUS_GET_SHADOWSTATUS(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_GET_SHADOWSTATUS(s) ((((s)->hiddenstatus) >> 8U) & 0xffUL)
#define GFXREG_FETCHWARP_HIDDENSTATUS_SHADOWSTATUS_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_FETCHWARP_REGISTER_H */

