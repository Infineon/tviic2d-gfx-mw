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
 * \date        Mon Jul 05 13:05:14 2021
 * \file        gfxreg_fetcheco_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   fetcheco
 *              Source:   fetcheco.component.xml
 *              Template: component_h.tpl
 * \brief      Iris fetcheco register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_FETCHECO_REGISTER_H
#define GFXREG_FETCHECO_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* fetcheco registers */
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
#define GFXREG_FETCHECO_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_FETCHECO_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_FETCHECO_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_FETCHECO_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHECO_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHECO_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHECO_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_FETCHECO_STATICCONTROL_SHDEN_RESET 0U

/* BASEADDRESSAUTOUPDATE: Enable flag for continuous shadow load of BaseAddress field for each layer (layer index = bit index). When set to 1 the active BaseAddress configuration is loaded from shadow at start of each frame. This update is then executed independently from other RWS type fields. ShdEn must be enabled for this mode. */
#define GFXREG_FETCHECO_STATICCONTROL_BASEADDRESSAUTOUPDATE_FSHIFT 16U
#define GFXREG_FETCHECO_STATICCONTROL_BASEADDRESSAUTOUPDATE_FMASK 0xffU
#define GFXREG_FETCHECO_STATICCONTROL_SETM_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHECO_STATICCONTROL_SET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_STATICCONTROL_GET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHECO_SETM_BASEADDRESSAUTOUPDATE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHECO_SET_BASEADDRESSAUTOUPDATE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_BASEADDRESSAUTOUPDATE(s) ((((s)->staticcontrol) >> 16U) & 0xffUL)
#define GFXREG_FETCHECO_STATICCONTROL_BASEADDRESSAUTOUPDATE_RESET 0U

/* BURSTBUFFERMANAGEMENT: AXI interface buffer management register */
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT 0x00000004U
/* SETNUMBUFFERS: Set this to the number of bursts that should be buffered. SetNumBuffers has to be smaller or equal to ManagedBurstBuffers and SetNumBuffers * SetBurstLength has to be smaller or equal to ManagedBurstBuffers * BurstLengthForMaxBuffers. Must be a power of 2. The minimum allowed settings is 4 except for the FetchEco derivate which has a minimum allowed setting of 2. */
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_FSHIFT 0U
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_FMASK 0xffU
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SETM_SETNUMBUFFERS(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SET_SETNUMBUFFERS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_GET_SETNUMBUFFERS(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHECO_SETM_SETNUMBUFFERS(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHECO_SET_SETNUMBUFFERS(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_SETNUMBUFFERS(s) ((((s)->burstbuffermanagement) ) & 0xffUL)
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_RESET 4U

/* SETBURSTLENGTH: Set this to the burst length that should be used on the AXI interface. SetNumBuffers * SetBurstLength has to be smaller or equal to ManagedBurstBuffers * BurstLengthForMaxBuffers and that bursts larger than 16 are not possible on the axi interface. Only a power of two may be specified as burst length. */
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FSHIFT 8U
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FMASK 0x1fU
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SETM_SETBURSTLENGTH(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_GET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHECO_SETM_SETBURSTLENGTH(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHECO_SET_SETBURSTLENGTH(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_SETBURSTLENGTH(s) ((((s)->burstbuffermanagement) >> 8U) & 0x1fUL)
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_RESET 2U

/* LINEMODE: Fetch buffer cache control. */
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_LINEMODE_FSHIFT 31U
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_LINEMODE_FMASK 0x1U
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SETM_LINEMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_SET_LINEMODE(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_GET_LINEMODE(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHECO_SETM_LINEMODE(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHECO_SET_LINEMODE(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_LINEMODE(s) ((((s)->burstbuffermanagement) >> 31U) & 0x1UL)
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_LINEMODE_DISPLAY 0U /* Mandatory setting for operation in the Display Controller. Works also for Blit Engine with marginal performance impact. */
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_LINEMODE_BLIT 1U /* Recommended setting for operation in the Blit Engine. */
#define GFXREG_FETCHECO_BURSTBUFFERMANAGEMENT_LINEMODE_RESET 0U

/* BASEADDRESS0: Source buffer base address of layer 0. */
#define GFXREG_FETCHECO_BASEADDRESS0 0x00000008U
/* BASEADDRESS0: Byte aligned start address of the layer source buffer. For a pixel width of 32 bits or DECODE operations BaseAddress bits 1 downto 0 have to be 0 and for a pixel width of 16 bit BaseAddress[0] has to be 0. */
#define GFXREG_FETCHECO_BASEADDRESS0_BASEADDRESS0_FSHIFT 0U
#define GFXREG_FETCHECO_BASEADDRESS0_BASEADDRESS0_FMASK 0xffffffffU
#define GFXREG_FETCHECO_BASEADDRESS0_SETM_BASEADDRESS0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHECO_BASEADDRESS0_SET_BASEADDRESS0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_BASEADDRESS0_GET_BASEADDRESS0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHECO_SETM_BASEADDRESS0(s,val) ( (s)->baseaddress0 = ((s)->baseaddress0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHECO_SET_BASEADDRESS0(s,val)  ( (s)->baseaddress0 = (((s)->baseaddress0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_BASEADDRESS0(s) ((((s)->baseaddress0) ) & 0xffffffffUL)
#define GFXREG_FETCHECO_BASEADDRESS0_BASEADDRESS0_RESET 0U

/* SOURCEBUFFERATTRIBUTES0: Source buffer attributes for layer 0. */
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0 0x0000000cU
/* STRIDE0: Source buffer stride of the layer in bytes minus one, used for address generation. For a pixel width of 32 bits Stride has to be dividable by 4 and given minus one and for a pixel width of 16 bit Stride has to be dividable by two and given minus one. */
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_STRIDE0_FSHIFT 0U
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_STRIDE0_FMASK 0xffffU
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_SETM_STRIDE0(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_SET_STRIDE0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_GET_STRIDE0(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHECO_SETM_STRIDE0(s,val) ( (s)->sourcebufferattributes0 = ((s)->sourcebufferattributes0 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHECO_SET_STRIDE0(s,val)  ( (s)->sourcebufferattributes0 = (((s)->sourcebufferattributes0 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_STRIDE0(s) ((((s)->sourcebufferattributes0) ) & 0xffffUL)
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_STRIDE0_RESET 1279U

/* BITSPERPIXEL0: Number of bits per pixel in the source buffer. Must be 1, 2, 4, 8, 16, 18, 24 or 32. [Exception] FetchEco does not support 18 and 24. */
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_FSHIFT 16U
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_FMASK 0x3fU
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_SETM_BITSPERPIXEL0(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_SET_BITSPERPIXEL0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_GET_BITSPERPIXEL0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHECO_SETM_BITSPERPIXEL0(s,val) ( (s)->sourcebufferattributes0 = ((s)->sourcebufferattributes0 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHECO_SET_BITSPERPIXEL0(s,val)  ( (s)->sourcebufferattributes0 = (((s)->sourcebufferattributes0 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_BITSPERPIXEL0(s) ((((s)->sourcebufferattributes0) >> 16U) & 0x3fUL)
#define GFXREG_FETCHECO_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_RESET 32U

/* SOURCEBUFFERDIMENSION0: Source buffer dimension of layer 0.
   This information is used for tiling modes. */
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0 0x00000010U
/* LINEWIDTH0: Width of the source buffer of the layer in pixels minus one. */
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_LINEWIDTH0_FSHIFT 0U
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_LINEWIDTH0_FMASK 0x3fffU
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_SETM_LINEWIDTH0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_SET_LINEWIDTH0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_GET_LINEWIDTH0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHECO_SETM_LINEWIDTH0(s,val) ( (s)->sourcebufferdimension0 = ((s)->sourcebufferdimension0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHECO_SET_LINEWIDTH0(s,val)  ( (s)->sourcebufferdimension0 = (((s)->sourcebufferdimension0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_LINEWIDTH0(s) ((((s)->sourcebufferdimension0) ) & 0x3fffUL)
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_LINEWIDTH0_RESET 0x3fffU

/* LINECOUNT0: Number of lines of the source buffer of the layer minus one. */
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_LINECOUNT0_FSHIFT 16U
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_LINECOUNT0_FMASK 0x3fffU
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_SETM_LINECOUNT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_SET_LINECOUNT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_GET_LINECOUNT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHECO_SETM_LINECOUNT0(s,val) ( (s)->sourcebufferdimension0 = ((s)->sourcebufferdimension0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHECO_SET_LINECOUNT0(s,val)  ( (s)->sourcebufferdimension0 = (((s)->sourcebufferdimension0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_LINECOUNT0(s) ((((s)->sourcebufferdimension0) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHECO_SOURCEBUFFERDIMENSION0_LINECOUNT0_RESET 0x3fffU

/* COLORCOMPONENTBITS0: Size of color components for RGB, YUV and index formats (layer 0).
   Size of Alpha and Index can be 0 to 8 bits, RGB and YUV 0 to 10 bits.         When size is 0, the component gets its value from ConstantColor register.         When RasterMode is DECODE, RGB/YUV components must not be larger than 8 bits.        */
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0 0x00000014U
/* COMPONENTBITSALPHA0: Alpha. */
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_FSHIFT 0U
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_FMASK 0xfU
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SETM_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SET_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_GET_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHECO_SETM_COMPONENTBITSALPHA0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHECO_SET_COMPONENTBITSALPHA0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_COMPONENTBITSALPHA0(s) ((((s)->colorcomponentbits0) ) & 0xfUL)
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_RESET 8U

/* COMPONENTBITSBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_FSHIFT 8U
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_FMASK 0xfU
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SETM_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SET_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_GET_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHECO_SETM_COMPONENTBITSBLUE0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHECO_SET_COMPONENTBITSBLUE0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_COMPONENTBITSBLUE0(s) ((((s)->colorcomponentbits0) >> 8U) & 0xfUL)
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_RESET 8U

/* COMPONENTBITSGREEN0: Green and U (chroma). */
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_FSHIFT 16U
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_FMASK 0xfU
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SETM_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SET_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_GET_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHECO_SETM_COMPONENTBITSGREEN0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHECO_SET_COMPONENTBITSGREEN0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_COMPONENTBITSGREEN0(s) ((((s)->colorcomponentbits0) >> 16U) & 0xfUL)
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_RESET 8U

/* COMPONENTBITSRED0: Red, Y (luma) and palette index. */
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSRED0_FSHIFT 24U
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSRED0_FMASK 0xfU
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SETM_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SET_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_GET_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHECO_SETM_COMPONENTBITSRED0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHECO_SET_COMPONENTBITSRED0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_COMPONENTBITSRED0(s) ((((s)->colorcomponentbits0) >> 24U) & 0xfUL)
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_COMPONENTBITSRED0_RESET 8U

/* ITUFORMAT0: When ComponentBitsRed/Green/Blue is set to 10 and this mode enabled (value 1), then input format is considered 8.2 instead of 10.0 bits (max color is 1020 instead of 1023). This is compliant to ITU 656 standard. */
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_ITUFORMAT0_FSHIFT 31U
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_ITUFORMAT0_FMASK 0x1U
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SETM_ITUFORMAT0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_SET_ITUFORMAT0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_GET_ITUFORMAT0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHECO_SETM_ITUFORMAT0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHECO_SET_ITUFORMAT0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_ITUFORMAT0(s) ((((s)->colorcomponentbits0) >> 31U) & 0x1UL)
#define GFXREG_FETCHECO_COLORCOMPONENTBITS0_ITUFORMAT0_RESET 0U

/* COLORCOMPONENTSHIFT0: Bit position of color components for RGB, YUV and index formats (layer 0).
   Any position allowed as long as the component lies completely inside the configured pixel size.         For greyscale format set R, G and B to same position.        */
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0 0x00000018U
/* COMPONENTSHIFTALPHA0: Alpha. */
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_FSHIFT 0U
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_FMASK 0x1fU
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHECO_SETM_COMPONENTSHIFTALPHA0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHECO_SET_COMPONENTSHIFTALPHA0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_COMPONENTSHIFTALPHA0(s) ((((s)->colorcomponentshift0) ) & 0x1fUL)
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_RESET 0U

/* COMPONENTSHIFTBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_FSHIFT 8U
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_FMASK 0x1fU
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHECO_SETM_COMPONENTSHIFTBLUE0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHECO_SET_COMPONENTSHIFTBLUE0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_COMPONENTSHIFTBLUE0(s) ((((s)->colorcomponentshift0) >> 8U) & 0x1fUL)
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_RESET 8U

/* COMPONENTSHIFTGREEN0: Green and U (chroma). */
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_FSHIFT 16U
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_FMASK 0x1fU
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHECO_SETM_COMPONENTSHIFTGREEN0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHECO_SET_COMPONENTSHIFTGREEN0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_COMPONENTSHIFTGREEN0(s) ((((s)->colorcomponentshift0) >> 16U) & 0x1fUL)
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_RESET 16U

/* COMPONENTSHIFTRED0: Red, Y (luma) and palette index. */
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_FSHIFT 24U
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_FMASK 0x1fU
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHECO_SETM_COMPONENTSHIFTRED0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHECO_SET_COMPONENTSHIFTRED0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_COMPONENTSHIFTRED0(s) ((((s)->colorcomponentshift0) >> 24U) & 0x1fUL)
#define GFXREG_FETCHECO_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_RESET 24U

/* LAYEROFFSET0: Position of layer 0 within the destination frame.
   Offset values are relative to the origin and given in signed integer notation.         They control the position of the layer's source buffer inside the final frame composition.         The layer may be positioned outside the frame at any side.        */
#define GFXREG_FETCHECO_LAYEROFFSET0 0x0000001cU
/* LAYERXOFFSET0: Horizontal offset (X). */
#define GFXREG_FETCHECO_LAYEROFFSET0_LAYERXOFFSET0_FSHIFT 0U
#define GFXREG_FETCHECO_LAYEROFFSET0_LAYERXOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHECO_LAYEROFFSET0_SETM_LAYERXOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHECO_LAYEROFFSET0_SET_LAYERXOFFSET0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_LAYEROFFSET0_GET_LAYERXOFFSET0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHECO_SETM_LAYERXOFFSET0(s,val) ( (s)->layeroffset0 = ((s)->layeroffset0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHECO_SET_LAYERXOFFSET0(s,val)  ( (s)->layeroffset0 = (((s)->layeroffset0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_LAYERXOFFSET0(s) ((((s)->layeroffset0) ) & 0x7fffUL)
#define GFXREG_FETCHECO_LAYEROFFSET0_LAYERXOFFSET0_RESET 0U

/* LAYERYOFFSET0: Vertical offset (Y). */
#define GFXREG_FETCHECO_LAYEROFFSET0_LAYERYOFFSET0_FSHIFT 16U
#define GFXREG_FETCHECO_LAYEROFFSET0_LAYERYOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHECO_LAYEROFFSET0_SETM_LAYERYOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHECO_LAYEROFFSET0_SET_LAYERYOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_LAYEROFFSET0_GET_LAYERYOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHECO_SETM_LAYERYOFFSET0(s,val) ( (s)->layeroffset0 = ((s)->layeroffset0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHECO_SET_LAYERYOFFSET0(s,val)  ( (s)->layeroffset0 = (((s)->layeroffset0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_LAYERYOFFSET0(s) ((((s)->layeroffset0) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHECO_LAYEROFFSET0_LAYERYOFFSET0_RESET 0U

/* CLIPWINDOWOFFSET0: Clip window position for layer 0.
   Offset values are relative to the origin.        */
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0 0x00000020U
/* CLIPWINDOWXOFFSET0: Horizontal position (X). */
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_FSHIFT 0U
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_SETM_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_SET_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_GET_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHECO_SETM_CLIPWINDOWXOFFSET0(s,val) ( (s)->clipwindowoffset0 = ((s)->clipwindowoffset0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHECO_SET_CLIPWINDOWXOFFSET0(s,val)  ( (s)->clipwindowoffset0 = (((s)->clipwindowoffset0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CLIPWINDOWXOFFSET0(s) ((((s)->clipwindowoffset0) ) & 0x7fffUL)
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_RESET 0U

/* CLIPWINDOWYOFFSET0: Vertical position (Y). */
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_FSHIFT 16U
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_SETM_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_SET_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_GET_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHECO_SETM_CLIPWINDOWYOFFSET0(s,val) ( (s)->clipwindowoffset0 = ((s)->clipwindowoffset0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHECO_SET_CLIPWINDOWYOFFSET0(s,val)  ( (s)->clipwindowoffset0 = (((s)->clipwindowoffset0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CLIPWINDOWYOFFSET0(s) ((((s)->clipwindowoffset0) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHECO_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_RESET 0U

/* CLIPWINDOWDIMENSIONS0: Clip window size for layer 0.
   Values are given in number of pixels minus one.        */
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0 0x00000024U
/* CLIPWINDOWWIDTH0: Width. */
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_FSHIFT 0U
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_FMASK 0x3fffU
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_SETM_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_SET_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_GET_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHECO_SETM_CLIPWINDOWWIDTH0(s,val) ( (s)->clipwindowdimensions0 = ((s)->clipwindowdimensions0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHECO_SET_CLIPWINDOWWIDTH0(s,val)  ( (s)->clipwindowdimensions0 = (((s)->clipwindowdimensions0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CLIPWINDOWWIDTH0(s) ((((s)->clipwindowdimensions0) ) & 0x3fffUL)
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_RESET 0x0U

/* CLIPWINDOWHEIGHT0: Height. */
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_FSHIFT 16U
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_FMASK 0x3fffU
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_SETM_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_SET_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_GET_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHECO_SETM_CLIPWINDOWHEIGHT0(s,val) ( (s)->clipwindowdimensions0 = ((s)->clipwindowdimensions0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHECO_SET_CLIPWINDOWHEIGHT0(s,val)  ( (s)->clipwindowdimensions0 = (((s)->clipwindowdimensions0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CLIPWINDOWHEIGHT0(s) ((((s)->clipwindowdimensions0) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHECO_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_RESET 0x0U

/* CONSTANTCOLOR0: Constant color for layer 0.
   Global constant color settings for RGB and YUV formats.         Values are used for tiling mode TILE_FILL_CONSTANT and if a color component bit width is set to 0.         Alpha is also used as constant alpha for RGB pre-multiply.         8-bit RGB and YUV values are up-scaled to internal 10-bit resolution by MSBit replication.        */
#define GFXREG_FETCHECO_CONSTANTCOLOR0 0x00000028U
/* CONSTANTALPHA0: Alpha. */
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTALPHA0_FSHIFT 0U
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTALPHA0_FMASK 0xffU
#define GFXREG_FETCHECO_CONSTANTCOLOR0_SETM_CONSTANTALPHA0(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHECO_CONSTANTCOLOR0_SET_CONSTANTALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CONSTANTCOLOR0_GET_CONSTANTALPHA0(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHECO_SETM_CONSTANTALPHA0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHECO_SET_CONSTANTALPHA0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CONSTANTALPHA0(s) ((((s)->constantcolor0) ) & 0xffUL)
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTALPHA0_RESET 0U

/* CONSTANTBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTBLUE0_FSHIFT 8U
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTBLUE0_FMASK 0xffU
#define GFXREG_FETCHECO_CONSTANTCOLOR0_SETM_CONSTANTBLUE0(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHECO_CONSTANTCOLOR0_SET_CONSTANTBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CONSTANTCOLOR0_GET_CONSTANTBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHECO_SETM_CONSTANTBLUE0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHECO_SET_CONSTANTBLUE0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CONSTANTBLUE0(s) ((((s)->constantcolor0) >> 8U) & 0xffUL)
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTBLUE0_RESET 0U

/* CONSTANTGREEN0: Green and U (chroma). */
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTGREEN0_FSHIFT 16U
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTGREEN0_FMASK 0xffU
#define GFXREG_FETCHECO_CONSTANTCOLOR0_SETM_CONSTANTGREEN0(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHECO_CONSTANTCOLOR0_SET_CONSTANTGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CONSTANTCOLOR0_GET_CONSTANTGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHECO_SETM_CONSTANTGREEN0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHECO_SET_CONSTANTGREEN0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CONSTANTGREEN0(s) ((((s)->constantcolor0) >> 16U) & 0xffUL)
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTGREEN0_RESET 0U

/* CONSTANTRED0: Red and Y (luma). */
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTRED0_FSHIFT 24U
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTRED0_FMASK 0xffU
#define GFXREG_FETCHECO_CONSTANTCOLOR0_SETM_CONSTANTRED0(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHECO_CONSTANTCOLOR0_SET_CONSTANTRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CONSTANTCOLOR0_GET_CONSTANTRED0(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHECO_SETM_CONSTANTRED0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHECO_SET_CONSTANTRED0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CONSTANTRED0(s) ((((s)->constantcolor0) >> 24U) & 0xffUL)
#define GFXREG_FETCHECO_CONSTANTCOLOR0_CONSTANTRED0_RESET 0U

/* LAYERPROPERTY0: Common properties of layer 0.
   When both source buffer and clip window are disabled, the layer is off and does not contribute any pixels to the output frame.         When the clip window is enabled, the layer contributes the clip window content to the composition of the output frame, otherwise the complete source buffer content.        */
#define GFXREG_FETCHECO_LAYERPROPERTY0 0x0000002cU
/* TILEMODE0: Select the tile mode for pixels outside the source buffer. Clip color (0,0,0,0) takes precedence if a pixel becomes subject to both tiling and clipping. */
#define GFXREG_FETCHECO_LAYERPROPERTY0_TILEMODE0_FSHIFT 1U
#define GFXREG_FETCHECO_LAYERPROPERTY0_TILEMODE0_FMASK 0x3U
#define GFXREG_FETCHECO_LAYERPROPERTY0_SETM_TILEMODE0(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHECO_LAYERPROPERTY0_SET_TILEMODE0(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_LAYERPROPERTY0_GET_TILEMODE0(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHECO_SETM_TILEMODE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHECO_SET_TILEMODE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_TILEMODE0(s) ((((s)->layerproperty0) >> 1U) & 0x3UL)
#define GFXREG_FETCHECO_LAYERPROPERTY0_TILEMODE0_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHECO_LAYERPROPERTY0_TILEMODE0_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHECO_LAYERPROPERTY0_TILEMODE0_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHECO_LAYERPROPERTY0_TILEMODE0_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHECO_LAYERPROPERTY0_TILEMODE0_RESET 0U

/* CLIPWINDOWENABLE0: Value 1 enables the clip window for this layer. Pixels outside the clip window get the clip color, pixels inside the source or tiling color. */
#define GFXREG_FETCHECO_LAYERPROPERTY0_CLIPWINDOWENABLE0_FSHIFT 30U
#define GFXREG_FETCHECO_LAYERPROPERTY0_CLIPWINDOWENABLE0_FMASK 0x1U
#define GFXREG_FETCHECO_LAYERPROPERTY0_SETM_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHECO_LAYERPROPERTY0_SET_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_LAYERPROPERTY0_GET_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHECO_SETM_CLIPWINDOWENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHECO_SET_CLIPWINDOWENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CLIPWINDOWENABLE0(s) ((((s)->layerproperty0) >> 30U) & 0x1UL)
#define GFXREG_FETCHECO_LAYERPROPERTY0_CLIPWINDOWENABLE0_RESET 0U

/* SOURCEBUFFERENABLE0: Value 1 enables the source buffer for this layer. When disabled the tiling color is used only (TileMode TILE_PAD not allowed). */
#define GFXREG_FETCHECO_LAYERPROPERTY0_SOURCEBUFFERENABLE0_FSHIFT 31U
#define GFXREG_FETCHECO_LAYERPROPERTY0_SOURCEBUFFERENABLE0_FMASK 0x1U
#define GFXREG_FETCHECO_LAYERPROPERTY0_SETM_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHECO_LAYERPROPERTY0_SET_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_LAYERPROPERTY0_GET_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHECO_SETM_SOURCEBUFFERENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHECO_SET_SOURCEBUFFERENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_SOURCEBUFFERENABLE0(s) ((((s)->layerproperty0) >> 31U) & 0x1UL)
#define GFXREG_FETCHECO_LAYERPROPERTY0_SOURCEBUFFERENABLE0_RESET 1U

/* FRAMEDIMENSIONS: Output frame dimension. */
#define GFXREG_FETCHECO_FRAMEDIMENSIONS 0x00000030U
/* FRAMEWIDTH: Frame width minus one. */
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_FRAMEWIDTH_FSHIFT 0U
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_FRAMEWIDTH_FMASK 0x3fffU
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_SETM_FRAMEWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_SET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_GET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHECO_SETM_FRAMEWIDTH(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHECO_SET_FRAMEWIDTH(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_FRAMEWIDTH(s) ((((s)->framedimensions) ) & 0x3fffUL)
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_FRAMEWIDTH_RESET 319U

/* FRAMEHEIGHT: Frame height minus one. */
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_FRAMEHEIGHT_FSHIFT 16U
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_FRAMEHEIGHT_FMASK 0x3fffU
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_SETM_FRAMEHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_SET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_GET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHECO_SETM_FRAMEHEIGHT(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHECO_SET_FRAMEHEIGHT(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_FRAMEHEIGHT(s) ((((s)->framedimensions) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_FRAMEHEIGHT_RESET 239U

/* EMPTYFRAME: When enabled output frame is empty. FrameWidth/Height settings have no effect then. Can be used to load shadows or to generate synchronization signals only (frame/sequence complete). If enabled, InputSelect must be set to INACTIVE. */
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_EMPTYFRAME_FSHIFT 31U
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_EMPTYFRAME_FMASK 0x1U
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_SETM_EMPTYFRAME(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_SET_EMPTYFRAME(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_GET_EMPTYFRAME(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHECO_SETM_EMPTYFRAME(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHECO_SET_EMPTYFRAME(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_EMPTYFRAME(s) ((((s)->framedimensions) >> 31U) & 0x1UL)
#define GFXREG_FETCHECO_FRAMEDIMENSIONS_EMPTYFRAME_RESET 0U

/* FRAMERESAMPLING: Resampling options for output frame. */
#define GFXREG_FETCHECO_FRAMERESAMPLING 0x00000034U
/* STARTX: X coordinate of first sample point relative to origin. */
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTX_FSHIFT 0U
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTX_FMASK 0x3fU
#define GFXREG_FETCHECO_FRAMERESAMPLING_SETM_STARTX(val) (((CYGFX_U32)(val) & 0x3fUL) )
#define GFXREG_FETCHECO_FRAMERESAMPLING_SET_STARTX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_FRAMERESAMPLING_GET_STARTX(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_FETCHECO_SETM_STARTX(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x3fUL) | (((CYGFX_U32)(val) ) & 0x3fUL) )
#define GFXREG_FETCHECO_SET_STARTX(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x3fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_STARTX(s) ((((s)->frameresampling) ) & 0x3fUL)
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTX_IWIDTH 4
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTX_FWIDTH 2
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTX_RESET 0U

/* STARTY: Y coordinate of first sample point relative to origin. */
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTY_FSHIFT 6U
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTY_FMASK 0x3fU
#define GFXREG_FETCHECO_FRAMERESAMPLING_SETM_STARTY(val) (((CYGFX_U32)(val) & 0x3fUL) << 6U)
#define GFXREG_FETCHECO_FRAMERESAMPLING_SET_STARTY(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_FRAMERESAMPLING_GET_STARTY(val) (((CYGFX_U32)(val) >> 6U) & 0x3fUL)
#define GFXREG_FETCHECO_SETM_STARTY(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0xfc0UL) | (((CYGFX_U32)(val) << 6U) & 0xfc0UL) )
#define GFXREG_FETCHECO_SET_STARTY(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0xfc0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_STARTY(s) ((((s)->frameresampling) >> 6U) & 0x3fUL)
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTY_IWIDTH 4
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTY_FWIDTH 2
#define GFXREG_FETCHECO_FRAMERESAMPLING_STARTY_RESET 0U

/* DELTAX: Increment of X coordinate for horizontal step in destination frame. */
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAX_FSHIFT 12U
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAX_FMASK 0x3fU
#define GFXREG_FETCHECO_FRAMERESAMPLING_SETM_DELTAX(val) (((CYGFX_U32)(val) & 0x3fUL) << 12U)
#define GFXREG_FETCHECO_FRAMERESAMPLING_SET_DELTAX(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_FRAMERESAMPLING_GET_DELTAX(val) (((CYGFX_U32)(val) >> 12U) & 0x3fUL)
#define GFXREG_FETCHECO_SETM_DELTAX(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x3f000UL) | (((CYGFX_U32)(val) << 12U) & 0x3f000UL) )
#define GFXREG_FETCHECO_SET_DELTAX(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x3f000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_DELTAX(s) ((((s)->frameresampling) >> 12U) & 0x3fUL)
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAX_IWIDTH 4
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAX_FWIDTH 2
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAX_RESET 0x4U

/* DELTAY: Increment of Y coordinate for vertical step in destination frame. */
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAY_FSHIFT 18U
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAY_FMASK 0x3fU
#define GFXREG_FETCHECO_FRAMERESAMPLING_SETM_DELTAY(val) (((CYGFX_U32)(val) & 0x3fUL) << 18U)
#define GFXREG_FETCHECO_FRAMERESAMPLING_SET_DELTAY(val) (((CYGFX_U32)(val) << 18U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_FRAMERESAMPLING_GET_DELTAY(val) (((CYGFX_U32)(val) >> 18U) & 0x3fUL)
#define GFXREG_FETCHECO_SETM_DELTAY(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0xfc0000UL) | (((CYGFX_U32)(val) << 18U) & 0xfc0000UL) )
#define GFXREG_FETCHECO_SET_DELTAY(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0xfc0000UL) | ((CYGFX_U32)(val) << 18U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_DELTAY(s) ((((s)->frameresampling) >> 18U) & 0x3fUL)
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAY_IWIDTH 4
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAY_FWIDTH 2
#define GFXREG_FETCHECO_FRAMERESAMPLING_DELTAY_RESET 0x4U

/* SWAPDIRECTION: Swaps X and Y directions for re-sampling. When enabled (= 1) DeltaY is applied for horizontal and DeltaX for vertical step on destination frame. */
#define GFXREG_FETCHECO_FRAMERESAMPLING_SWAPDIRECTION_FSHIFT 24U
#define GFXREG_FETCHECO_FRAMERESAMPLING_SWAPDIRECTION_FMASK 0x1U
#define GFXREG_FETCHECO_FRAMERESAMPLING_SETM_SWAPDIRECTION(val) (((CYGFX_U32)(val) & 0x1UL) << 24U)
#define GFXREG_FETCHECO_FRAMERESAMPLING_SET_SWAPDIRECTION(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_FRAMERESAMPLING_GET_SWAPDIRECTION(val) (((CYGFX_U32)(val) >> 24U) & 0x1UL)
#define GFXREG_FETCHECO_SETM_SWAPDIRECTION(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x1000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1000000UL) )
#define GFXREG_FETCHECO_SET_SWAPDIRECTION(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x1000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_SWAPDIRECTION(s) ((((s)->frameresampling) >> 24U) & 0x1UL)
#define GFXREG_FETCHECO_FRAMERESAMPLING_SWAPDIRECTION_RESET 0U

/* CONTROL: Shared common control settings for all layers. */
#define GFXREG_FETCHECO_CONTROL 0x00000038U
/* RAWPIXEL: Raw pixel mode. If enabled (value = 1), the ComponentBits/Shift settings are replaced for all layers by fixed values that allow passing the pixel data read from memory unchanged to subsequent units (e.g. for reading coordinate layers). Multiply stages and transparent color are deactivated. Skip and Tile pixels are not affected by this setting. */
#define GFXREG_FETCHECO_CONTROL_RAWPIXEL_FSHIFT 7U
#define GFXREG_FETCHECO_CONTROL_RAWPIXEL_FMASK 0x1U
#define GFXREG_FETCHECO_CONTROL_SETM_RAWPIXEL(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHECO_CONTROL_SET_RAWPIXEL(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CONTROL_GET_RAWPIXEL(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHECO_SETM_RAWPIXEL(s,val) ( (s)->control = ((s)->control & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHECO_SET_RAWPIXEL(s,val)  ( (s)->control = (((s)->control & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_RAWPIXEL(s) ((((s)->control) >> 7U) & 0x1UL)
#define GFXREG_FETCHECO_CONTROL_RAWPIXEL_RESET 0U

/* CLIPCOLOR: Selects which color to take for pixels that do not lie inside the clip window of any layer. */
#define GFXREG_FETCHECO_CONTROL_CLIPCOLOR_FSHIFT 16U
#define GFXREG_FETCHECO_CONTROL_CLIPCOLOR_FMASK 0x1U
#define GFXREG_FETCHECO_CONTROL_SETM_CLIPCOLOR(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_FETCHECO_CONTROL_SET_CLIPCOLOR(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_CONTROL_GET_CLIPCOLOR(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_FETCHECO_SETM_CLIPCOLOR(s,val) ( (s)->control = ((s)->control & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_FETCHECO_SET_CLIPCOLOR(s,val)  ( (s)->control = (((s)->control & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_GET_CLIPCOLOR(s) ((((s)->control) >> 16U) & 0x1UL)
#define GFXREG_FETCHECO_CONTROL_CLIPCOLOR_NULL 0x0U /* Null color. */
#define GFXREG_FETCHECO_CONTROL_CLIPCOLOR_LAYER 0x1U /* Color of layer number given by ClipLayer (or layer 0 when Fetch unit has one layer only). The color is then the layer's source or tiling color. */
#define GFXREG_FETCHECO_CONTROL_CLIPCOLOR_RESET 0x1U

/* CONTROLTRIGGER: Shadow load trigger. */
#define GFXREG_FETCHECO_CONTROLTRIGGER 0x0000003cU
/* SHDTOKGEN: Writing a 1 to this will load shadow registers into the active configuration with the next start of frame and send a shadow load token to subsequent units. */
#define GFXREG_FETCHECO_CONTROLTRIGGER_SHDTOKGEN_FSHIFT 0U
#define GFXREG_FETCHECO_CONTROLTRIGGER_SHDTOKGEN_FMASK 0x1U
#define GFXREG_FETCHECO_CONTROLTRIGGER_SETM_SHDTOKGEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHECO_CONTROLTRIGGER_SET_SHDTOKGEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_SETM_SHDTOKGEN(s,val) ( (s)->controltrigger = ((s)->controltrigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHECO_SET_SHDTOKGEN(s,val)  ( (s)->controltrigger = (((s)->controltrigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_CONTROLTRIGGER_SHDTOKGEN_RESET (none)U

/* START: Frame start trigger. */
#define GFXREG_FETCHECO_START 0x00000040U
/* START: Writing a 1 to this field will start generating one frame (for debugging purposes only). */
#define GFXREG_FETCHECO_START_START_FSHIFT 0U
#define GFXREG_FETCHECO_START_START_FMASK 0x1U
#define GFXREG_FETCHECO_START_SETM_START(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHECO_START_SET_START(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHECO_SETM_START(s,val) ( (s)->start = ((s)->start & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHECO_SET_START(s,val)  ( (s)->start = (((s)->start & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHECO_START_START_RESET (none)U

/* FETCHTYPE: Fetch unit type. */
#define GFXREG_FETCHECO_FETCHTYPE 0x00000044U
/* FETCHTYPE: This field can be used to determine what kind of fetch unit this is. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_FSHIFT 0U
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_FMASK 0xfU
#define GFXREG_FETCHECO_FETCHTYPE_GET_FETCHTYPE(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHECO_GET_FETCHTYPE(s) ((((s)->fetchtype) ) & 0xfUL)
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_DECODE 0U /* Fetch unit with RL and RLAD decoder. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_LAYER 1U /* Fetch unit with fractional plane (8 layers). */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_WARP 2U /* Fetch unit with arbitrary warping and fractional plane (8 layers). */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_ECO 3U /* Fetch unit with minimum feature set for alpha, chroma and coordinate planes. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_PERSP 4U /* Fetch unit with affine, perspective and arbitrary warping. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_ROT 5U /* Fetch unit with affine and arbitrary warping. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_DECODEL 6U /* Fetch unit with RL and RLAD decoder, reduced feature set. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_LAYERL 7U /* Fetch unit with fractional plane (8 layers), reduced feature set. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_ROTL 8U /* Fetch unit with affine and arbitrary warping, reduced feature set. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_ECOL 9U /* Fetch unit with reduced minimum feature set for alpha, chroma and coordinate planes. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_BLIT 10U /* Fetch unit with DECODE and PERSP capabilities. */
#define GFXREG_FETCHECO_FETCHTYPE_FETCHTYPE_RESET (none)U

/* BURSTBUFFERPROPERTIES: Burst buffer properties. */
#define GFXREG_FETCHECO_BURSTBUFFERPROPERTIES 0x00000048U
/* MANAGEDBURSTBUFFERS: Maximum number of burst buffers that can be administrated in the AXI interface. */
#define GFXREG_FETCHECO_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_FSHIFT 0U
#define GFXREG_FETCHECO_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_FMASK 0xffU
#define GFXREG_FETCHECO_BURSTBUFFERPROPERTIES_GET_MANAGEDBURSTBUFFERS(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHECO_GET_MANAGEDBURSTBUFFERS(s) ((((s)->burstbufferproperties) ) & 0xffUL)
#define GFXREG_FETCHECO_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_RESET (none)U

/* BURSTLENGTHFORMAXBUFFERS: Maximum Burst Length that can be used when ManagedBurstBuffers burst buffers are used. */
#define GFXREG_FETCHECO_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_FSHIFT 8U
#define GFXREG_FETCHECO_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_FMASK 0x1fU
#define GFXREG_FETCHECO_BURSTBUFFERPROPERTIES_GET_BURSTLENGTHFORMAXBUFFERS(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHECO_GET_BURSTLENGTHFORMAXBUFFERS(s) ((((s)->burstbufferproperties) >> 8U) & 0x1fUL)
#define GFXREG_FETCHECO_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_RESET (none)U

/* HIDDENSTATUS: Hidden status informations.
   The ShadowStatus field(s) indicate if a shadow load has been triggered for the corresponding layer, but not yet executed (for debugging purposes only; read only when stable).        */
#define GFXREG_FETCHECO_HIDDENSTATUS 0x0000004cU
/* STATUSBUSY: Fetch unit is busy. */
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSBUSY_FSHIFT 0U
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSBUSY_FMASK 0x1U
#define GFXREG_FETCHECO_HIDDENSTATUS_GET_STATUSBUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHECO_GET_STATUSBUSY(s) ((((s)->hiddenstatus) ) & 0x1UL)
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSBUSY_RESET (none)U

/* STATUSBUFFERSIDLE: AXI interface buffers are idle. */
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSBUFFERSIDLE_FSHIFT 4U
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSBUFFERSIDLE_FMASK 0x1U
#define GFXREG_FETCHECO_HIDDENSTATUS_GET_STATUSBUFFERSIDLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHECO_GET_STATUSBUFFERSIDLE(s) ((((s)->hiddenstatus) >> 4U) & 0x1UL)
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSBUFFERSIDLE_RESET (none)U

/* STATUSREQUEST: Fetch unit requesting on the AXI interface, waiting for acknowledge. */
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSREQUEST_FSHIFT 5U
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSREQUEST_FMASK 0x1U
#define GFXREG_FETCHECO_HIDDENSTATUS_GET_STATUSREQUEST(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHECO_GET_STATUSREQUEST(s) ((((s)->hiddenstatus) >> 5U) & 0x1UL)
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSREQUEST_RESET (none)U

/* STATUSCOMPLETE: Fetch unit completed all requested AXI transfers. */
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSCOMPLETE_FSHIFT 6U
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSCOMPLETE_FMASK 0x1U
#define GFXREG_FETCHECO_HIDDENSTATUS_GET_STATUSCOMPLETE(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHECO_GET_STATUSCOMPLETE(s) ((((s)->hiddenstatus) >> 6U) & 0x1UL)
#define GFXREG_FETCHECO_HIDDENSTATUS_STATUSCOMPLETE_RESET (none)U

/* SHADOWSTATUS: Shadow load status for all layers (layer index = bit index). */
#define GFXREG_FETCHECO_HIDDENSTATUS_SHADOWSTATUS_FSHIFT 8U
#define GFXREG_FETCHECO_HIDDENSTATUS_SHADOWSTATUS_FMASK 0xffU
#define GFXREG_FETCHECO_HIDDENSTATUS_GET_SHADOWSTATUS(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHECO_GET_SHADOWSTATUS(s) ((((s)->hiddenstatus) >> 8U) & 0xffUL)
#define GFXREG_FETCHECO_HIDDENSTATUS_SHADOWSTATUS_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_FETCHECO_REGISTER_H */

