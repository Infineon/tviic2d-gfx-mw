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
 * \file        gfxreg_fetchblit_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   fetchblit
 *              Source:   fetchblit.component.xml
 *              Template: component_h.tpl
 * \brief      Iris fetchblit register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_FETCHBLIT_REGISTER_H
#define GFXREG_FETCHBLIT_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* fetchblit registers */
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
#define GFXREG_FETCHBLIT_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_FETCHBLIT_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_FETCHBLIT_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_FETCHBLIT_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHBLIT_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHBLIT_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_FETCHBLIT_STATICCONTROL_SHDEN_RESET 0U

/* BASEADDRESSAUTOUPDATE: Enable flag for continuous shadow load of BaseAddress field for each layer (layer index = bit index). When set to 1 the active BaseAddress configuration is loaded from shadow at start of each frame. This update is then executed independently from other RWS type fields. ShdEn must be enabled for this mode. */
#define GFXREG_FETCHBLIT_STATICCONTROL_BASEADDRESSAUTOUPDATE_FSHIFT 16U
#define GFXREG_FETCHBLIT_STATICCONTROL_BASEADDRESSAUTOUPDATE_FMASK 0xffU
#define GFXREG_FETCHBLIT_STATICCONTROL_SETM_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHBLIT_STATICCONTROL_SET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_STATICCONTROL_GET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_BASEADDRESSAUTOUPDATE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHBLIT_SET_BASEADDRESSAUTOUPDATE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_BASEADDRESSAUTOUPDATE(s) ((((s)->staticcontrol) >> 16U) & 0xffUL)
#define GFXREG_FETCHBLIT_STATICCONTROL_BASEADDRESSAUTOUPDATE_RESET 0U

/* BURSTBUFFERMANAGEMENT: AXI interface buffer management register */
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT 0x00000004U
/* SETNUMBUFFERS: Set this to the number of bursts that should be buffered. SetNumBuffers has to be smaller or equal to ManagedBurstBuffers and SetNumBuffers * SetBurstLength has to be smaller or equal to ManagedBurstBuffers * BurstLengthForMaxBuffers. Must be a power of 2. The minimum allowed settings is 4 except for the FetchEco derivate which has a minimum allowed setting of 2. */
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_FSHIFT 0U
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_FMASK 0xffU
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETM_SETNUMBUFFERS(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SET_SETNUMBUFFERS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_GET_SETNUMBUFFERS(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_SETNUMBUFFERS(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHBLIT_SET_SETNUMBUFFERS(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_SETNUMBUFFERS(s) ((((s)->burstbuffermanagement) ) & 0xffUL)
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_RESET 4U

/* SETBURSTLENGTH: Set this to the burst length that should be used on the AXI interface. SetNumBuffers * SetBurstLength has to be smaller or equal to ManagedBurstBuffers * BurstLengthForMaxBuffers and that bursts larger than 16 are not possible on the axi interface. Only a power of two may be specified as burst length. */
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FSHIFT 8U
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FMASK 0x1fU
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETM_SETBURSTLENGTH(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_GET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHBLIT_SETM_SETBURSTLENGTH(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHBLIT_SET_SETBURSTLENGTH(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_SETBURSTLENGTH(s) ((((s)->burstbuffermanagement) >> 8U) & 0x1fUL)
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_RESET 2U

/* CACHEENABLE: If enabled, all AXI transactions are marked to be cacheable. */
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_CACHEENABLE_FSHIFT 29U
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_CACHEENABLE_FMASK 0x1U
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETM_CACHEENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 29U)
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SET_CACHEENABLE(val) (((CYGFX_U32)(val) << 29U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_GET_CACHEENABLE(val) (((CYGFX_U32)(val) >> 29U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_CACHEENABLE(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x20000000UL) | (((CYGFX_U32)(val) << 29U) & 0x20000000UL) )
#define GFXREG_FETCHBLIT_SET_CACHEENABLE(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x20000000UL) | ((CYGFX_U32)(val) << 29U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CACHEENABLE(s) ((((s)->burstbuffermanagement) >> 29U) & 0x1UL)
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_CACHEENABLE_RESET 0U

/* LINEMODE: Fetch buffer cache control. */
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_LINEMODE_FSHIFT 31U
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_LINEMODE_FMASK 0x1U
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SETM_LINEMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_SET_LINEMODE(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_GET_LINEMODE(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_LINEMODE(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHBLIT_SET_LINEMODE(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_LINEMODE(s) ((((s)->burstbuffermanagement) >> 31U) & 0x1UL)
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_LINEMODE_DISPLAY 0U /* Mandatory setting for operation in the Display Controller. Works also for Blit Engine with marginal performance impact. */
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_LINEMODE_BLIT 1U /* Recommended setting for operation in the Blit Engine. */
#define GFXREG_FETCHBLIT_BURSTBUFFERMANAGEMENT_LINEMODE_RESET 0U

/* BASEADDRESS0: Source buffer base address of layer 0. */
#define GFXREG_FETCHBLIT_BASEADDRESS0 0x00000008U
/* BASEADDRESS0: Byte aligned start address of the layer source buffer. For a pixel width of 32 bits or DECODE operations BaseAddress bits 1 downto 0 have to be 0 and for a pixel width of 16 bit BaseAddress[0] has to be 0. */
#define GFXREG_FETCHBLIT_BASEADDRESS0_BASEADDRESS0_FSHIFT 0U
#define GFXREG_FETCHBLIT_BASEADDRESS0_BASEADDRESS0_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_BASEADDRESS0_SETM_BASEADDRESS0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_BASEADDRESS0_SET_BASEADDRESS0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_BASEADDRESS0_GET_BASEADDRESS0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_BASEADDRESS0(s,val) ( (s)->baseaddress0 = ((s)->baseaddress0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_BASEADDRESS0(s,val)  ( (s)->baseaddress0 = (((s)->baseaddress0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_BASEADDRESS0(s) ((((s)->baseaddress0) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_BASEADDRESS0_BASEADDRESS0_RESET 0U

/* SOURCEBUFFERATTRIBUTES0: Source buffer attributes for layer 0. */
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0 0x0000000cU
/* STRIDE0: Source buffer stride of the layer in bytes minus one, used for address generation. For a pixel width of 32 bits Stride has to be dividable by 4 and given minus one and for a pixel width of 16 bit Stride has to be dividable by two and given minus one. */
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_STRIDE0_FSHIFT 0U
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_STRIDE0_FMASK 0xffffU
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_SETM_STRIDE0(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_SET_STRIDE0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_GET_STRIDE0(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHBLIT_SETM_STRIDE0(s,val) ( (s)->sourcebufferattributes0 = ((s)->sourcebufferattributes0 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHBLIT_SET_STRIDE0(s,val)  ( (s)->sourcebufferattributes0 = (((s)->sourcebufferattributes0 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_STRIDE0(s) ((((s)->sourcebufferattributes0) ) & 0xffffUL)
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_STRIDE0_RESET 1279U

/* BITSPERPIXEL0: Number of bits per pixel in the source buffer. Must be 1, 2, 4, 8, 16, 18, 24 or 32. [Exception] FetchEco does not support 18 and 24. */
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_FSHIFT 16U
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_FMASK 0x3fU
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_SETM_BITSPERPIXEL0(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_SET_BITSPERPIXEL0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_GET_BITSPERPIXEL0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHBLIT_SETM_BITSPERPIXEL0(s,val) ( (s)->sourcebufferattributes0 = ((s)->sourcebufferattributes0 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHBLIT_SET_BITSPERPIXEL0(s,val)  ( (s)->sourcebufferattributes0 = (((s)->sourcebufferattributes0 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_BITSPERPIXEL0(s) ((((s)->sourcebufferattributes0) >> 16U) & 0x3fUL)
#define GFXREG_FETCHBLIT_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_RESET 32U

/* SOURCEBUFFERDIMENSION0: Source buffer dimension of layer 0.
   This information is used for tiling modes. */
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0 0x00000010U
/* LINEWIDTH0: Width of the source buffer of the layer in pixels minus one. */
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_LINEWIDTH0_FSHIFT 0U
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_LINEWIDTH0_FMASK 0x3fffU
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_SETM_LINEWIDTH0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_SET_LINEWIDTH0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_GET_LINEWIDTH0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHBLIT_SETM_LINEWIDTH0(s,val) ( (s)->sourcebufferdimension0 = ((s)->sourcebufferdimension0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHBLIT_SET_LINEWIDTH0(s,val)  ( (s)->sourcebufferdimension0 = (((s)->sourcebufferdimension0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_LINEWIDTH0(s) ((((s)->sourcebufferdimension0) ) & 0x3fffUL)
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_LINEWIDTH0_RESET 0x3fffU

/* LINECOUNT0: Number of lines of the source buffer of the layer minus one. */
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_LINECOUNT0_FSHIFT 16U
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_LINECOUNT0_FMASK 0x3fffU
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_SETM_LINECOUNT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_SET_LINECOUNT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_GET_LINECOUNT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHBLIT_SETM_LINECOUNT0(s,val) ( (s)->sourcebufferdimension0 = ((s)->sourcebufferdimension0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHBLIT_SET_LINECOUNT0(s,val)  ( (s)->sourcebufferdimension0 = (((s)->sourcebufferdimension0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_LINECOUNT0(s) ((((s)->sourcebufferdimension0) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHBLIT_SOURCEBUFFERDIMENSION0_LINECOUNT0_RESET 0x3fffU

/* COLORCOMPONENTBITS0: Size of color components for RGB, YUV and index formats (layer 0).
   Size of Alpha and Index can be 0 to 8 bits, RGB and YUV 0 to 10 bits.         When size is 0, the component gets its value from ConstantColor register.         When RasterMode is DECODE, RGB/YUV components must not be larger than 8 bits.        */
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0 0x00000014U
/* COMPONENTBITSALPHA0: Alpha. */
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_FSHIFT 0U
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_FMASK 0xfU
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SETM_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SET_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_GET_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_COMPONENTBITSALPHA0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHBLIT_SET_COMPONENTBITSALPHA0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_COMPONENTBITSALPHA0(s) ((((s)->colorcomponentbits0) ) & 0xfUL)
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_RESET 8U

/* COMPONENTBITSBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_FSHIFT 8U
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_FMASK 0xfU
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SETM_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SET_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_GET_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_COMPONENTBITSBLUE0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHBLIT_SET_COMPONENTBITSBLUE0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_COMPONENTBITSBLUE0(s) ((((s)->colorcomponentbits0) >> 8U) & 0xfUL)
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_RESET 8U

/* COMPONENTBITSGREEN0: Green and U (chroma). */
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_FSHIFT 16U
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_FMASK 0xfU
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SETM_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SET_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_GET_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_COMPONENTBITSGREEN0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHBLIT_SET_COMPONENTBITSGREEN0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_COMPONENTBITSGREEN0(s) ((((s)->colorcomponentbits0) >> 16U) & 0xfUL)
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_RESET 8U

/* COMPONENTBITSRED0: Red, Y (luma) and palette index. */
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSRED0_FSHIFT 24U
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSRED0_FMASK 0xfU
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SETM_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SET_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_GET_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_COMPONENTBITSRED0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHBLIT_SET_COMPONENTBITSRED0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_COMPONENTBITSRED0(s) ((((s)->colorcomponentbits0) >> 24U) & 0xfUL)
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_COMPONENTBITSRED0_RESET 8U

/* ITUFORMAT0: When ComponentBitsRed/Green/Blue is set to 10 and this mode enabled (value 1), then input format is considered 8.2 instead of 10.0 bits (max color is 1020 instead of 1023). This is compliant to ITU 656 standard. */
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_ITUFORMAT0_FSHIFT 31U
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_ITUFORMAT0_FMASK 0x1U
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SETM_ITUFORMAT0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_SET_ITUFORMAT0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_GET_ITUFORMAT0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_ITUFORMAT0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHBLIT_SET_ITUFORMAT0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ITUFORMAT0(s) ((((s)->colorcomponentbits0) >> 31U) & 0x1UL)
#define GFXREG_FETCHBLIT_COLORCOMPONENTBITS0_ITUFORMAT0_RESET 0U

/* COLORCOMPONENTSHIFT0: Bit position of color components for RGB, YUV and index formats (layer 0).
   Any position allowed as long as the component lies completely inside the configured pixel size.         For greyscale format set R, G and B to same position.        */
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0 0x00000018U
/* COMPONENTSHIFTALPHA0: Alpha. */
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_FSHIFT 0U
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_FMASK 0x1fU
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHBLIT_SETM_COMPONENTSHIFTALPHA0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHBLIT_SET_COMPONENTSHIFTALPHA0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_COMPONENTSHIFTALPHA0(s) ((((s)->colorcomponentshift0) ) & 0x1fUL)
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_RESET 0U

/* COMPONENTSHIFTBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_FSHIFT 8U
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_FMASK 0x1fU
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHBLIT_SETM_COMPONENTSHIFTBLUE0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHBLIT_SET_COMPONENTSHIFTBLUE0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_COMPONENTSHIFTBLUE0(s) ((((s)->colorcomponentshift0) >> 8U) & 0x1fUL)
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_RESET 8U

/* COMPONENTSHIFTGREEN0: Green and U (chroma). */
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_FSHIFT 16U
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_FMASK 0x1fU
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHBLIT_SETM_COMPONENTSHIFTGREEN0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHBLIT_SET_COMPONENTSHIFTGREEN0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_COMPONENTSHIFTGREEN0(s) ((((s)->colorcomponentshift0) >> 16U) & 0x1fUL)
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_RESET 16U

/* COMPONENTSHIFTRED0: Red, Y (luma) and palette index. */
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_FSHIFT 24U
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_FMASK 0x1fU
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHBLIT_SETM_COMPONENTSHIFTRED0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHBLIT_SET_COMPONENTSHIFTRED0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_COMPONENTSHIFTRED0(s) ((((s)->colorcomponentshift0) >> 24U) & 0x1fUL)
#define GFXREG_FETCHBLIT_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_RESET 24U

/* LAYEROFFSET0: Position of layer 0 within the destination frame.
   Offset values are relative to the origin and given in signed integer notation.         They control the position of the layer's source buffer inside the final frame composition.         The layer may be positioned outside the frame at any side.        */
#define GFXREG_FETCHBLIT_LAYEROFFSET0 0x0000001cU
/* LAYERXOFFSET0: Horizontal offset (X). */
#define GFXREG_FETCHBLIT_LAYEROFFSET0_LAYERXOFFSET0_FSHIFT 0U
#define GFXREG_FETCHBLIT_LAYEROFFSET0_LAYERXOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHBLIT_LAYEROFFSET0_SETM_LAYERXOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHBLIT_LAYEROFFSET0_SET_LAYERXOFFSET0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYEROFFSET0_GET_LAYERXOFFSET0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHBLIT_SETM_LAYERXOFFSET0(s,val) ( (s)->layeroffset0 = ((s)->layeroffset0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHBLIT_SET_LAYERXOFFSET0(s,val)  ( (s)->layeroffset0 = (((s)->layeroffset0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_LAYERXOFFSET0(s) ((((s)->layeroffset0) ) & 0x7fffUL)
#define GFXREG_FETCHBLIT_LAYEROFFSET0_LAYERXOFFSET0_RESET 0U

/* LAYERYOFFSET0: Vertical offset (Y). */
#define GFXREG_FETCHBLIT_LAYEROFFSET0_LAYERYOFFSET0_FSHIFT 16U
#define GFXREG_FETCHBLIT_LAYEROFFSET0_LAYERYOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHBLIT_LAYEROFFSET0_SETM_LAYERYOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHBLIT_LAYEROFFSET0_SET_LAYERYOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYEROFFSET0_GET_LAYERYOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHBLIT_SETM_LAYERYOFFSET0(s,val) ( (s)->layeroffset0 = ((s)->layeroffset0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHBLIT_SET_LAYERYOFFSET0(s,val)  ( (s)->layeroffset0 = (((s)->layeroffset0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_LAYERYOFFSET0(s) ((((s)->layeroffset0) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHBLIT_LAYEROFFSET0_LAYERYOFFSET0_RESET 0U

/* CLIPWINDOWOFFSET0: Clip window position for layer 0.
   Offset values are relative to the origin.        */
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0 0x00000020U
/* CLIPWINDOWXOFFSET0: Horizontal position (X). */
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_FSHIFT 0U
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_SETM_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_SET_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_GET_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHBLIT_SETM_CLIPWINDOWXOFFSET0(s,val) ( (s)->clipwindowoffset0 = ((s)->clipwindowoffset0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHBLIT_SET_CLIPWINDOWXOFFSET0(s,val)  ( (s)->clipwindowoffset0 = (((s)->clipwindowoffset0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CLIPWINDOWXOFFSET0(s) ((((s)->clipwindowoffset0) ) & 0x7fffUL)
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_RESET 0U

/* CLIPWINDOWYOFFSET0: Vertical position (Y). */
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_FSHIFT 16U
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_SETM_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_SET_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_GET_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHBLIT_SETM_CLIPWINDOWYOFFSET0(s,val) ( (s)->clipwindowoffset0 = ((s)->clipwindowoffset0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHBLIT_SET_CLIPWINDOWYOFFSET0(s,val)  ( (s)->clipwindowoffset0 = (((s)->clipwindowoffset0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CLIPWINDOWYOFFSET0(s) ((((s)->clipwindowoffset0) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHBLIT_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_RESET 0U

/* CLIPWINDOWDIMENSIONS0: Clip window size for layer 0.
   Values are given in number of pixels minus one.        */
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0 0x00000024U
/* CLIPWINDOWWIDTH0: Width. */
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_FSHIFT 0U
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_FMASK 0x3fffU
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_SETM_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_SET_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_GET_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHBLIT_SETM_CLIPWINDOWWIDTH0(s,val) ( (s)->clipwindowdimensions0 = ((s)->clipwindowdimensions0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHBLIT_SET_CLIPWINDOWWIDTH0(s,val)  ( (s)->clipwindowdimensions0 = (((s)->clipwindowdimensions0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CLIPWINDOWWIDTH0(s) ((((s)->clipwindowdimensions0) ) & 0x3fffUL)
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_RESET 0x0U

/* CLIPWINDOWHEIGHT0: Height. */
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_FSHIFT 16U
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_FMASK 0x3fffU
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_SETM_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_SET_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_GET_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHBLIT_SETM_CLIPWINDOWHEIGHT0(s,val) ( (s)->clipwindowdimensions0 = ((s)->clipwindowdimensions0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHBLIT_SET_CLIPWINDOWHEIGHT0(s,val)  ( (s)->clipwindowdimensions0 = (((s)->clipwindowdimensions0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CLIPWINDOWHEIGHT0(s) ((((s)->clipwindowdimensions0) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHBLIT_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_RESET 0x0U

/* CONSTANTCOLOR0: Constant color for layer 0.
   Global constant color settings for RGB and YUV formats.         Values are used for tiling mode TILE_FILL_CONSTANT and if a color component bit width is set to 0.         Alpha is also used as constant alpha for RGB pre-multiply.         8-bit RGB and YUV values are up-scaled to internal 10-bit resolution by MSBit replication.        */
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0 0x00000028U
/* CONSTANTALPHA0: Alpha. */
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTALPHA0_FSHIFT 0U
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTALPHA0_FMASK 0xffU
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_SETM_CONSTANTALPHA0(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_SET_CONSTANTALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_GET_CONSTANTALPHA0(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_CONSTANTALPHA0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHBLIT_SET_CONSTANTALPHA0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CONSTANTALPHA0(s) ((((s)->constantcolor0) ) & 0xffUL)
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTALPHA0_RESET 0U

/* CONSTANTBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTBLUE0_FSHIFT 8U
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTBLUE0_FMASK 0xffU
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_SETM_CONSTANTBLUE0(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_SET_CONSTANTBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_GET_CONSTANTBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_CONSTANTBLUE0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHBLIT_SET_CONSTANTBLUE0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CONSTANTBLUE0(s) ((((s)->constantcolor0) >> 8U) & 0xffUL)
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTBLUE0_RESET 0U

/* CONSTANTGREEN0: Green and U (chroma). */
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTGREEN0_FSHIFT 16U
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTGREEN0_FMASK 0xffU
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_SETM_CONSTANTGREEN0(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_SET_CONSTANTGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_GET_CONSTANTGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_CONSTANTGREEN0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHBLIT_SET_CONSTANTGREEN0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CONSTANTGREEN0(s) ((((s)->constantcolor0) >> 16U) & 0xffUL)
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTGREEN0_RESET 0U

/* CONSTANTRED0: Red and Y (luma). */
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTRED0_FSHIFT 24U
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTRED0_FMASK 0xffU
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_SETM_CONSTANTRED0(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_SET_CONSTANTRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_GET_CONSTANTRED0(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_CONSTANTRED0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHBLIT_SET_CONSTANTRED0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CONSTANTRED0(s) ((((s)->constantcolor0) >> 24U) & 0xffUL)
#define GFXREG_FETCHBLIT_CONSTANTCOLOR0_CONSTANTRED0_RESET 0U

/* LAYERPROPERTY0: Common properties of layer 0.
   When both source buffer and clip window are disabled, the layer is off and does not contribute any pixels to the output frame.         When the clip window is enabled, the layer contributes the clip window content to the composition of the output frame, otherwise the complete source buffer content.        */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0 0x0000002cU
/* PALETTEENABLE0: Enables (value = 1) a color palette with 8 bits input and 24 bits output. Lower bits of the lookup index are read from memory (PaletteIdWidth0), upper bits are set to index of this layer. Palette output is extended by upper bits of index word read from memory (e.g. to store alpha together with index). Result is mapped to color channels according to ColorComponentBits/Shift settings. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PALETTEENABLE0_FSHIFT 0U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PALETTEENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_PALETTEENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_PALETTEENABLE0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_PALETTEENABLE0(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_PALETTEENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHBLIT_SET_PALETTEENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PALETTEENABLE0(s) ((((s)->layerproperty0) ) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PALETTEENABLE0_RESET 0U

/* TILEMODE0: Select the tile mode for pixels outside the source buffer. Clip color (0,0,0,0) takes precedence if a pixel becomes subject to both tiling and clipping. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_TILEMODE0_FSHIFT 1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_TILEMODE0_FMASK 0x3U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_TILEMODE0(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_TILEMODE0(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_TILEMODE0(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHBLIT_SETM_TILEMODE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHBLIT_SET_TILEMODE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_TILEMODE0(s) ((((s)->layerproperty0) >> 1U) & 0x3UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_TILEMODE0_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_TILEMODE0_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_TILEMODE0_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_TILEMODE0_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_TILEMODE0_RESET 0U

/* ALPHASRCENABLE0: Value 1 enables source alpha for computing the output alpha. When disabled source alpha is set to 1. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHASRCENABLE0_FSHIFT 3U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHASRCENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_ALPHASRCENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_ALPHASRCENABLE0(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_ALPHASRCENABLE0(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_ALPHASRCENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHBLIT_SET_ALPHASRCENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ALPHASRCENABLE0(s) ((((s)->layerproperty0) >> 3U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHASRCENABLE0_RESET 1U

/* ALPHACONSTENABLE0: Value 1 enables constant alpha for computing the output alpha. When disabled constant alpha is set to 1. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHACONSTENABLE0_FSHIFT 4U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHACONSTENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_ALPHACONSTENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_ALPHACONSTENABLE0(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_ALPHACONSTENABLE0(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_ALPHACONSTENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHBLIT_SET_ALPHACONSTENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ALPHACONSTENABLE0(s) ((((s)->layerproperty0) >> 4U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHACONSTENABLE0_RESET 0U

/* ALPHAMASKENABLE0: Value 1 enables mask alpha for computing the output alpha. When disabled mask alpha is set to 1. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHAMASKENABLE0_FSHIFT 5U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHAMASKENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_ALPHAMASKENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_ALPHAMASKENABLE0(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_ALPHAMASKENABLE0(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_ALPHAMASKENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHBLIT_SET_ALPHAMASKENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ALPHAMASKENABLE0(s) ((((s)->layerproperty0) >> 5U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHAMASKENABLE0_RESET 0U

/* ALPHATRANSENABLE0: Value 1 enables transparent alpha for computing the output alpha. When disabled transparent alpha is set to 1. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHATRANSENABLE0_FSHIFT 6U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHATRANSENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_ALPHATRANSENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_ALPHATRANSENABLE0(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_ALPHATRANSENABLE0(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_ALPHATRANSENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHBLIT_SET_ALPHATRANSENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ALPHATRANSENABLE0(s) ((((s)->layerproperty0) >> 6U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_ALPHATRANSENABLE0_RESET 0U

/* RGBALPHASRCENABLE0: Value 1 enables source alpha (stored together with color component in the source buffer) for RGB pre-multiply. When disabled source alpha is set to 1. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHASRCENABLE0_FSHIFT 7U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHASRCENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_RGBALPHASRCENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_RGBALPHASRCENABLE0(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_RGBALPHASRCENABLE0(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_RGBALPHASRCENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHBLIT_SET_RGBALPHASRCENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RGBALPHASRCENABLE0(s) ((((s)->layerproperty0) >> 7U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHASRCENABLE0_RESET 0U

/* RGBALPHACONSTENABLE0: Value 1 enables constant alpha (ConstAlpha fields) for RGB pre-multiply. When disabled constant alpha is set to 1. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHACONSTENABLE0_FSHIFT 8U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHACONSTENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_RGBALPHACONSTENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_RGBALPHACONSTENABLE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_RGBALPHACONSTENABLE0(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_RGBALPHACONSTENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHBLIT_SET_RGBALPHACONSTENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RGBALPHACONSTENABLE0(s) ((((s)->layerproperty0) >> 8U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHACONSTENABLE0_RESET 0U

/* RGBALPHAMASKENABLE0: Value 1 enables mask alpha (read by another Fetch unit from a separate alpha layer) for RGB pre-multiply. When disabled mask alpha is set to 1. Alpha mask input must be enabled for this field to have effect. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHAMASKENABLE0_FSHIFT 9U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHAMASKENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_RGBALPHAMASKENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_RGBALPHAMASKENABLE0(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_RGBALPHAMASKENABLE0(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_RGBALPHAMASKENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHBLIT_SET_RGBALPHAMASKENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RGBALPHAMASKENABLE0(s) ((((s)->layerproperty0) >> 9U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHAMASKENABLE0_RESET 0U

/* RGBALPHATRANSENABLE0: Value 1 enables transparent alpha (0 or 1 depending on RGB matching ConstantColor setting) for RGB pre-multiply. When disabled transparent alpha is set to 1. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHATRANSENABLE0_FSHIFT 10U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHATRANSENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_RGBALPHATRANSENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_RGBALPHATRANSENABLE0(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_RGBALPHATRANSENABLE0(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_RGBALPHATRANSENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHBLIT_SET_RGBALPHATRANSENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RGBALPHATRANSENABLE0(s) ((((s)->layerproperty0) >> 10U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_RGBALPHATRANSENABLE0_RESET 0U

/* PREMULCONSTRGB0: When enabled (value 1) the values given by ConstantRed/Green/Blue are used instead of alpha for source RGB pre-multiply. Settings RGBAlphaSrc/Const/Mask/TransEnable have no effect then. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PREMULCONSTRGB0_FSHIFT 11U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PREMULCONSTRGB0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_PREMULCONSTRGB0(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_PREMULCONSTRGB0(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_PREMULCONSTRGB0(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_PREMULCONSTRGB0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHBLIT_SET_PREMULCONSTRGB0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PREMULCONSTRGB0(s) ((((s)->layerproperty0) >> 11U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PREMULCONSTRGB0_RESET 0x0U

/* YUVCONVERSIONMODE0: Enables different kind of YUV to RGB conversions. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_YUVCONVERSIONMODE0_FSHIFT 12U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_YUVCONVERSIONMODE0_FMASK 0x3U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_YUVCONVERSIONMODE0(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_YUVCONVERSIONMODE0(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_YUVCONVERSIONMODE0(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHBLIT_SETM_YUVCONVERSIONMODE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHBLIT_SET_YUVCONVERSIONMODE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_YUVCONVERSIONMODE0(s) ((((s)->layerproperty0) >> 12U) & 0x3UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_YUVCONVERSIONMODE0_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_YUVCONVERSIONMODE0_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_YUVCONVERSIONMODE0_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_YUVCONVERSIONMODE0_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_YUVCONVERSIONMODE0_RESET 0x0U

/* GAMMAREMOVEENABLE0: Value 1 enables the stage to remove a gamma from RGB components. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GAMMAREMOVEENABLE0_FSHIFT 14U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GAMMAREMOVEENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_GAMMAREMOVEENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_GAMMAREMOVEENABLE0(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_GAMMAREMOVEENABLE0(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_GAMMAREMOVEENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHBLIT_SET_GAMMAREMOVEENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_GAMMAREMOVEENABLE0(s) ((((s)->layerproperty0) >> 14U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GAMMAREMOVEENABLE0_RESET 0U

/* PALETTEOFFSET0: Palette may contain multiple areas. This offset shows to the starting position of the currently used area. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PALETTEOFFSET0_FSHIFT 16U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PALETTEOFFSET0_FMASK 0x7ffU
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_PALETTEOFFSET0(val) (((CYGFX_U32)(val) & 0x7ffUL) << 16U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_PALETTEOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7ffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_PALETTEOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7ffUL)
#define GFXREG_FETCHBLIT_SETM_PALETTEOFFSET0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x7ff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7ff0000UL) )
#define GFXREG_FETCHBLIT_SET_PALETTEOFFSET0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x7ff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7ffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PALETTEOFFSET0(s) ((((s)->layerproperty0) >> 16U) & 0x7ffUL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PALETTEOFFSET0_RESET 0U

/* PALETTEIDWIDTH0: Number minus one of least significant bits of pixel data read from the source buffer that are used as index value for color palette look-up. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PALETTEIDWIDTH0_FSHIFT 27U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PALETTEIDWIDTH0_FMASK 0x7U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_PALETTEIDWIDTH0(val) (((CYGFX_U32)(val) & 0x7UL) << 27U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_PALETTEIDWIDTH0(val) (((CYGFX_U32)(val) << 27U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_PALETTEIDWIDTH0(val) (((CYGFX_U32)(val) >> 27U) & 0x7UL)
#define GFXREG_FETCHBLIT_SETM_PALETTEIDWIDTH0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x38000000UL) | (((CYGFX_U32)(val) << 27U) & 0x38000000UL) )
#define GFXREG_FETCHBLIT_SET_PALETTEIDWIDTH0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x38000000UL) | ((CYGFX_U32)(val) << 27U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PALETTEIDWIDTH0(s) ((((s)->layerproperty0) >> 27U) & 0x7UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_PALETTEIDWIDTH0_RESET 0x7U

/* CLIPWINDOWENABLE0: Value 1 enables the clip window for this layer. Pixels outside the clip window get the clip color, pixels inside the source or tiling color. */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_CLIPWINDOWENABLE0_FSHIFT 30U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_CLIPWINDOWENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_CLIPWINDOWENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHBLIT_SET_CLIPWINDOWENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CLIPWINDOWENABLE0(s) ((((s)->layerproperty0) >> 30U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_CLIPWINDOWENABLE0_RESET 0U

/* SOURCEBUFFERENABLE0: Value 1 enables the source buffer for this layer. When disabled the tiling color is used only (TileMode TILE_PAD not allowed). */
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SOURCEBUFFERENABLE0_FSHIFT 31U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SOURCEBUFFERENABLE0_FMASK 0x1U
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SETM_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SET_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_GET_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_SOURCEBUFFERENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHBLIT_SET_SOURCEBUFFERENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_SOURCEBUFFERENABLE0(s) ((((s)->layerproperty0) >> 31U) & 0x1UL)
#define GFXREG_FETCHBLIT_LAYERPROPERTY0_SOURCEBUFFERENABLE0_RESET 1U

/* FRAMEDIMENSIONS: Output frame dimension. */
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS 0x00000030U
/* FRAMEWIDTH: Frame width minus one. */
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_FRAMEWIDTH_FSHIFT 0U
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_FRAMEWIDTH_FMASK 0x3fffU
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_SETM_FRAMEWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_SET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_GET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHBLIT_SETM_FRAMEWIDTH(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHBLIT_SET_FRAMEWIDTH(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FRAMEWIDTH(s) ((((s)->framedimensions) ) & 0x3fffUL)
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_FRAMEWIDTH_RESET 319U

/* FRAMEHEIGHT: Frame height minus one. */
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_FRAMEHEIGHT_FSHIFT 16U
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_FRAMEHEIGHT_FMASK 0x3fffU
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_SETM_FRAMEHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_SET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_GET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHBLIT_SETM_FRAMEHEIGHT(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHBLIT_SET_FRAMEHEIGHT(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FRAMEHEIGHT(s) ((((s)->framedimensions) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_FRAMEHEIGHT_RESET 239U

/* EMPTYFRAME: When enabled output frame is empty. FrameWidth/Height settings have no effect then. Can be used to load shadows or to generate synchronization signals only (frame/sequence complete). If enabled, InputSelect must be set to INACTIVE. */
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_EMPTYFRAME_FSHIFT 31U
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_EMPTYFRAME_FMASK 0x1U
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_SETM_EMPTYFRAME(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_SET_EMPTYFRAME(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_GET_EMPTYFRAME(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_EMPTYFRAME(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHBLIT_SET_EMPTYFRAME(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_EMPTYFRAME(s) ((((s)->framedimensions) >> 31U) & 0x1UL)
#define GFXREG_FETCHBLIT_FRAMEDIMENSIONS_EMPTYFRAME_RESET 0U

/* FRAMERESAMPLING: Resampling options for output frame. */
#define GFXREG_FETCHBLIT_FRAMERESAMPLING 0x00000034U
/* STARTX: X coordinate of first sample point relative to origin. */
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTX_FSHIFT 0U
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTX_FMASK 0x3fU
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SETM_STARTX(val) (((CYGFX_U32)(val) & 0x3fUL) )
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SET_STARTX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_GET_STARTX(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_FETCHBLIT_SETM_STARTX(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x3fUL) | (((CYGFX_U32)(val) ) & 0x3fUL) )
#define GFXREG_FETCHBLIT_SET_STARTX(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x3fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_STARTX(s) ((((s)->frameresampling) ) & 0x3fUL)
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTX_IWIDTH 4
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTX_FWIDTH 2
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTX_RESET 0U

/* STARTY: Y coordinate of first sample point relative to origin. */
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTY_FSHIFT 6U
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTY_FMASK 0x3fU
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SETM_STARTY(val) (((CYGFX_U32)(val) & 0x3fUL) << 6U)
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SET_STARTY(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_GET_STARTY(val) (((CYGFX_U32)(val) >> 6U) & 0x3fUL)
#define GFXREG_FETCHBLIT_SETM_STARTY(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0xfc0UL) | (((CYGFX_U32)(val) << 6U) & 0xfc0UL) )
#define GFXREG_FETCHBLIT_SET_STARTY(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0xfc0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_STARTY(s) ((((s)->frameresampling) >> 6U) & 0x3fUL)
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTY_IWIDTH 4
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTY_FWIDTH 2
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_STARTY_RESET 0U

/* DELTAX: Increment of X coordinate for horizontal step in destination frame. */
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAX_FSHIFT 12U
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAX_FMASK 0x3fU
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SETM_DELTAX(val) (((CYGFX_U32)(val) & 0x3fUL) << 12U)
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SET_DELTAX(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_GET_DELTAX(val) (((CYGFX_U32)(val) >> 12U) & 0x3fUL)
#define GFXREG_FETCHBLIT_SETM_DELTAX(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x3f000UL) | (((CYGFX_U32)(val) << 12U) & 0x3f000UL) )
#define GFXREG_FETCHBLIT_SET_DELTAX(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x3f000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_DELTAX(s) ((((s)->frameresampling) >> 12U) & 0x3fUL)
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAX_IWIDTH 4
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAX_FWIDTH 2
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAX_RESET 0x4U

/* DELTAY: Increment of Y coordinate for vertical step in destination frame. */
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAY_FSHIFT 18U
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAY_FMASK 0x3fU
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SETM_DELTAY(val) (((CYGFX_U32)(val) & 0x3fUL) << 18U)
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SET_DELTAY(val) (((CYGFX_U32)(val) << 18U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_GET_DELTAY(val) (((CYGFX_U32)(val) >> 18U) & 0x3fUL)
#define GFXREG_FETCHBLIT_SETM_DELTAY(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0xfc0000UL) | (((CYGFX_U32)(val) << 18U) & 0xfc0000UL) )
#define GFXREG_FETCHBLIT_SET_DELTAY(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0xfc0000UL) | ((CYGFX_U32)(val) << 18U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_DELTAY(s) ((((s)->frameresampling) >> 18U) & 0x3fUL)
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAY_IWIDTH 4
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAY_FWIDTH 2
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_DELTAY_RESET 0x4U

/* SWAPDIRECTION: Swaps X and Y directions for re-sampling. When enabled (= 1) DeltaY is applied for horizontal and DeltaX for vertical step on destination frame. */
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SWAPDIRECTION_FSHIFT 24U
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SWAPDIRECTION_FMASK 0x1U
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SETM_SWAPDIRECTION(val) (((CYGFX_U32)(val) & 0x1UL) << 24U)
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SET_SWAPDIRECTION(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_GET_SWAPDIRECTION(val) (((CYGFX_U32)(val) >> 24U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_SWAPDIRECTION(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x1000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1000000UL) )
#define GFXREG_FETCHBLIT_SET_SWAPDIRECTION(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x1000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_SWAPDIRECTION(s) ((((s)->frameresampling) >> 24U) & 0x1UL)
#define GFXREG_FETCHBLIT_FRAMERESAMPLING_SWAPDIRECTION_RESET 0U

/* WARPCONTROL: Warping control options.
   When warping is enabled, re-sampling control is done by homogenous interpolators (affine or perspective warping) or by data stored in a coordinate layer (arbitrary warping).         Both cases replace the re-sampling options DeltaX, DeltaY and FrameSwapDirections, which are used for non-warping setups only.         Depending on the size given by WarpBitsPerPixel, values for x/dx/ddx and y/dy/ddy must be store in the coordinate layer with the following two's complement format per pixel.         1 bpp  - x and y alternating as signed (-3).4 fix-point (1 bit)..         2 bpp  - x and y combined as signed (-3).4 fix-point (1 bit).         4 bpp  - x and y combined as signed (-2).4 fix-point (2 bits).         8 bpp  - x and y combined as signed 0.4 fix-point (4 bits).         16 bpp - x and y combined as signed 4.4 fix-point (8 bits).         32 bpp - x and y combined as signed 12.4 fix-point (16 bits).        */
#define GFXREG_FETCHBLIT_WARPCONTROL 0x00000038U
/* WARPBITSPERPIXEL: Number of bits per pixel in the coordinate layer, which is read by another Fetch unit. Has to be 1, 2, 4, 8, 16 or 32. */
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPBITSPERPIXEL_FSHIFT 0U
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPBITSPERPIXEL_FMASK 0x3fU
#define GFXREG_FETCHBLIT_WARPCONTROL_SETM_WARPBITSPERPIXEL(val) (((CYGFX_U32)(val) & 0x3fUL) )
#define GFXREG_FETCHBLIT_WARPCONTROL_SET_WARPBITSPERPIXEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_WARPCONTROL_GET_WARPBITSPERPIXEL(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_FETCHBLIT_SETM_WARPBITSPERPIXEL(s,val) ( (s)->warpcontrol = ((s)->warpcontrol & ~0x3fUL) | (((CYGFX_U32)(val) ) & 0x3fUL) )
#define GFXREG_FETCHBLIT_SET_WARPBITSPERPIXEL(s,val)  ( (s)->warpcontrol = (((s)->warpcontrol & ~0x3fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_WARPBITSPERPIXEL(s) ((((s)->warpcontrol) ) & 0x3fUL)
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPBITSPERPIXEL_RESET 0x20U

/* WARPCOORDINATEMODE: Content of pixel data in the coordinate layer. */
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPCOORDINATEMODE_FSHIFT 8U
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPCOORDINATEMODE_FMASK 0x3U
#define GFXREG_FETCHBLIT_WARPCONTROL_SETM_WARPCOORDINATEMODE(val) (((CYGFX_U32)(val) & 0x3UL) << 8U)
#define GFXREG_FETCHBLIT_WARPCONTROL_SET_WARPCOORDINATEMODE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_WARPCONTROL_GET_WARPCOORDINATEMODE(val) (((CYGFX_U32)(val) >> 8U) & 0x3UL)
#define GFXREG_FETCHBLIT_SETM_WARPCOORDINATEMODE(s,val) ( (s)->warpcontrol = ((s)->warpcontrol & ~0x300UL) | (((CYGFX_U32)(val) << 8U) & 0x300UL) )
#define GFXREG_FETCHBLIT_SET_WARPCOORDINATEMODE(s,val)  ( (s)->warpcontrol = (((s)->warpcontrol & ~0x300UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_WARPCOORDINATEMODE(s) ((((s)->warpcontrol) >> 8U) & 0x3UL)
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPCOORDINATEMODE_PNT 0x0U /* x and y (sample points). */
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPCOORDINATEMODE_D_PNT 0x1U /* dx and dy (vectors between adjacent sample points). */
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPCOORDINATEMODE_DD_PNT 0x2U /* ddx and ddy (deltas between adjacent vectors). */
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPCOORDINATEMODE_RESET 0x0U

/* WARPSYMMETRICOFFSET: Value 1 enables symmetric range for negative and positive coordinate values by adding an offset of +0.03125 internally to all coordinate input values. Recommended for small coordinate formats in DD_PNT mode. */
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPSYMMETRICOFFSET_FSHIFT 12U
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPSYMMETRICOFFSET_FMASK 0x1U
#define GFXREG_FETCHBLIT_WARPCONTROL_SETM_WARPSYMMETRICOFFSET(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_FETCHBLIT_WARPCONTROL_SET_WARPSYMMETRICOFFSET(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_WARPCONTROL_GET_WARPSYMMETRICOFFSET(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_WARPSYMMETRICOFFSET(s,val) ( (s)->warpcontrol = ((s)->warpcontrol & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_FETCHBLIT_SET_WARPSYMMETRICOFFSET(s,val)  ( (s)->warpcontrol = (((s)->warpcontrol & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_WARPSYMMETRICOFFSET(s) ((((s)->warpcontrol) >> 12U) & 0x1UL)
#define GFXREG_FETCHBLIT_WARPCONTROL_WARPSYMMETRICOFFSET_RESET 0x0U

/* PERSPSTARTX: Start value X for affine/perspective warping. */
#define GFXREG_FETCHBLIT_PERSPSTARTX 0x0000003cU
/* PERSPSTARTX: Start value for homogenous X coordinate relative to origin. */
#define GFXREG_FETCHBLIT_PERSPSTARTX_PERSPSTARTX_FSHIFT 0U
#define GFXREG_FETCHBLIT_PERSPSTARTX_PERSPSTARTX_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_PERSPSTARTX_SETM_PERSPSTARTX(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_PERSPSTARTX_SET_PERSPSTARTX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_PERSPSTARTX_GET_PERSPSTARTX(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_PERSPSTARTX(s,val) ( (s)->perspstartx = ((s)->perspstartx & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_PERSPSTARTX(s,val)  ( (s)->perspstartx = (((s)->perspstartx & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PERSPSTARTX(s) ((((s)->perspstartx) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_PERSPSTARTX_PERSPSTARTX_RESET 0U

/* PERSPSTARTY: Start value Y for affine/perspective warping. */
#define GFXREG_FETCHBLIT_PERSPSTARTY 0x00000040U
/* PERSPSTARTY: Start value for homogenous Y coordinate relative to origin. */
#define GFXREG_FETCHBLIT_PERSPSTARTY_PERSPSTARTY_FSHIFT 0U
#define GFXREG_FETCHBLIT_PERSPSTARTY_PERSPSTARTY_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_PERSPSTARTY_SETM_PERSPSTARTY(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_PERSPSTARTY_SET_PERSPSTARTY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_PERSPSTARTY_GET_PERSPSTARTY(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_PERSPSTARTY(s,val) ( (s)->perspstarty = ((s)->perspstarty & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_PERSPSTARTY(s,val)  ( (s)->perspstarty = (((s)->perspstarty & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PERSPSTARTY(s) ((((s)->perspstarty) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_PERSPSTARTY_PERSPSTARTY_RESET 0U

/* PERSPDELTAXX: DeltaXX increment for affine/perspective warping. */
#define GFXREG_FETCHBLIT_PERSPDELTAXX 0x00000044U
/* PERSPDELTAXX: Increment of homogenous X coordinate for horizontal step (X) in destination frame. */
#define GFXREG_FETCHBLIT_PERSPDELTAXX_PERSPDELTAXX_FSHIFT 0U
#define GFXREG_FETCHBLIT_PERSPDELTAXX_PERSPDELTAXX_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_PERSPDELTAXX_SETM_PERSPDELTAXX(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_PERSPDELTAXX_SET_PERSPDELTAXX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_PERSPDELTAXX_GET_PERSPDELTAXX(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_PERSPDELTAXX(s,val) ( (s)->perspdeltaxx = ((s)->perspdeltaxx & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_PERSPDELTAXX(s,val)  ( (s)->perspdeltaxx = (((s)->perspdeltaxx & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PERSPDELTAXX(s) ((((s)->perspdeltaxx) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_PERSPDELTAXX_PERSPDELTAXX_RESET 0x3f800000U

/* PERSPDELTAYY: DeltaYY increment for affine/perspective warping. */
#define GFXREG_FETCHBLIT_PERSPDELTAYY 0x00000048U
/* PERSPDELTAYY: Increment of homogenous Y coordinate for vertical step (Y) in destination frame. */
#define GFXREG_FETCHBLIT_PERSPDELTAYY_PERSPDELTAYY_FSHIFT 0U
#define GFXREG_FETCHBLIT_PERSPDELTAYY_PERSPDELTAYY_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_PERSPDELTAYY_SETM_PERSPDELTAYY(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_PERSPDELTAYY_SET_PERSPDELTAYY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_PERSPDELTAYY_GET_PERSPDELTAYY(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_PERSPDELTAYY(s,val) ( (s)->perspdeltayy = ((s)->perspdeltayy & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_PERSPDELTAYY(s,val)  ( (s)->perspdeltayy = (((s)->perspdeltayy & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PERSPDELTAYY(s) ((((s)->perspdeltayy) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_PERSPDELTAYY_PERSPDELTAYY_RESET 0x3f800000U

/* PERSPDELTAXY: DeltaXY increment for affine/perspective warping. */
#define GFXREG_FETCHBLIT_PERSPDELTAXY 0x0000004cU
/* PERSPDELTAXY: Increment of homogenous Y coordinate for horizontal step (X) in destination frame. */
#define GFXREG_FETCHBLIT_PERSPDELTAXY_PERSPDELTAXY_FSHIFT 0U
#define GFXREG_FETCHBLIT_PERSPDELTAXY_PERSPDELTAXY_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_PERSPDELTAXY_SETM_PERSPDELTAXY(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_PERSPDELTAXY_SET_PERSPDELTAXY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_PERSPDELTAXY_GET_PERSPDELTAXY(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_PERSPDELTAXY(s,val) ( (s)->perspdeltaxy = ((s)->perspdeltaxy & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_PERSPDELTAXY(s,val)  ( (s)->perspdeltaxy = (((s)->perspdeltaxy & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PERSPDELTAXY(s) ((((s)->perspdeltaxy) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_PERSPDELTAXY_PERSPDELTAXY_RESET 0x0U

/* PERSPDELTAYX: DeltaYX increment for affine/perspective warping. */
#define GFXREG_FETCHBLIT_PERSPDELTAYX 0x00000050U
/* PERSPDELTAYX: Increment of homogenous X coordinate for vertical step (Y) in destination frame. */
#define GFXREG_FETCHBLIT_PERSPDELTAYX_PERSPDELTAYX_FSHIFT 0U
#define GFXREG_FETCHBLIT_PERSPDELTAYX_PERSPDELTAYX_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_PERSPDELTAYX_SETM_PERSPDELTAYX(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_PERSPDELTAYX_SET_PERSPDELTAYX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_PERSPDELTAYX_GET_PERSPDELTAYX(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_PERSPDELTAYX(s,val) ( (s)->perspdeltayx = ((s)->perspdeltayx & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_PERSPDELTAYX(s,val)  ( (s)->perspdeltayx = (((s)->perspdeltayx & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PERSPDELTAYX(s) ((((s)->perspdeltayx) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_PERSPDELTAYX_PERSPDELTAYX_RESET 0x0U

/* PERSPSTARTW: Start value W for perspective warping. */
#define GFXREG_FETCHBLIT_PERSPSTARTW 0x00000054U
/* PERSPSTARTW: Start value for homogenous W coordinate relative to origin. */
#define GFXREG_FETCHBLIT_PERSPSTARTW_PERSPSTARTW_FSHIFT 0U
#define GFXREG_FETCHBLIT_PERSPSTARTW_PERSPSTARTW_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_PERSPSTARTW_SETM_PERSPSTARTW(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_PERSPSTARTW_SET_PERSPSTARTW(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_PERSPSTARTW_GET_PERSPSTARTW(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_PERSPSTARTW(s,val) ( (s)->perspstartw = ((s)->perspstartw & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_PERSPSTARTW(s,val)  ( (s)->perspstartw = (((s)->perspstartw & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PERSPSTARTW(s) ((((s)->perspstartw) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_PERSPSTARTW_PERSPSTARTW_RESET 0x3f800000U

/* PERSPDELTAXW: DeltaWX increment for perspective warping. */
#define GFXREG_FETCHBLIT_PERSPDELTAXW 0x00000058U
/* PERSPDELTAXW: Increment of homogenous W coordinate for horizontal step (X) in destination frame. */
#define GFXREG_FETCHBLIT_PERSPDELTAXW_PERSPDELTAXW_FSHIFT 0U
#define GFXREG_FETCHBLIT_PERSPDELTAXW_PERSPDELTAXW_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_PERSPDELTAXW_SETM_PERSPDELTAXW(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_PERSPDELTAXW_SET_PERSPDELTAXW(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_PERSPDELTAXW_GET_PERSPDELTAXW(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_PERSPDELTAXW(s,val) ( (s)->perspdeltaxw = ((s)->perspdeltaxw & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_PERSPDELTAXW(s,val)  ( (s)->perspdeltaxw = (((s)->perspdeltaxw & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PERSPDELTAXW(s) ((((s)->perspdeltaxw) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_PERSPDELTAXW_PERSPDELTAXW_RESET 0x0U

/* PERSPDELTAYW: DeltaWY increment for perspective warping. */
#define GFXREG_FETCHBLIT_PERSPDELTAYW 0x0000005cU
/* PERSPDELTAYW: Increment of homogenous W coordinate for vertical step (Y) in destination frame. */
#define GFXREG_FETCHBLIT_PERSPDELTAYW_PERSPDELTAYW_FSHIFT 0U
#define GFXREG_FETCHBLIT_PERSPDELTAYW_PERSPDELTAYW_FMASK 0xffffffffU
#define GFXREG_FETCHBLIT_PERSPDELTAYW_SETM_PERSPDELTAYW(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHBLIT_PERSPDELTAYW_SET_PERSPDELTAYW(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_PERSPDELTAYW_GET_PERSPDELTAYW(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_SETM_PERSPDELTAYW(s,val) ( (s)->perspdeltayw = ((s)->perspdeltayw & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHBLIT_SET_PERSPDELTAYW(s,val)  ( (s)->perspdeltayw = (((s)->perspdeltayw & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_PERSPDELTAYW(s) ((((s)->perspdeltayw) ) & 0xffffffffUL)
#define GFXREG_FETCHBLIT_PERSPDELTAYW_PERSPDELTAYW_RESET 0x0U

/* ARBSTARTX: Start value X for arbitrary warping. */
#define GFXREG_FETCHBLIT_ARBSTARTX 0x00000060U
/* ARBSTARTX: Start point for sample-point interpolation (X coordinate). */
#define GFXREG_FETCHBLIT_ARBSTARTX_ARBSTARTX_FSHIFT 0U
#define GFXREG_FETCHBLIT_ARBSTARTX_ARBSTARTX_FMASK 0x1fffffU
#define GFXREG_FETCHBLIT_ARBSTARTX_SETM_ARBSTARTX(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_FETCHBLIT_ARBSTARTX_SET_ARBSTARTX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_ARBSTARTX_GET_ARBSTARTX(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_FETCHBLIT_SETM_ARBSTARTX(s,val) ( (s)->arbstartx = ((s)->arbstartx & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_FETCHBLIT_SET_ARBSTARTX(s,val)  ( (s)->arbstartx = (((s)->arbstartx & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ARBSTARTX(s) ((((s)->arbstartx) ) & 0x1fffffUL)
#define GFXREG_FETCHBLIT_ARBSTARTX_ARBSTARTX_IWIDTH 16
#define GFXREG_FETCHBLIT_ARBSTARTX_ARBSTARTX_FWIDTH 5
#define GFXREG_FETCHBLIT_ARBSTARTX_ARBSTARTX_RESET 0U

/* ARBSTARTY: Start value Y for arbitrary warping. */
#define GFXREG_FETCHBLIT_ARBSTARTY 0x00000064U
/* ARBSTARTY: Start point for sample-point interpolation (Y coordinate). */
#define GFXREG_FETCHBLIT_ARBSTARTY_ARBSTARTY_FSHIFT 0U
#define GFXREG_FETCHBLIT_ARBSTARTY_ARBSTARTY_FMASK 0x1fffffU
#define GFXREG_FETCHBLIT_ARBSTARTY_SETM_ARBSTARTY(val) (((CYGFX_U32)(val) & 0x1fffffUL) )
#define GFXREG_FETCHBLIT_ARBSTARTY_SET_ARBSTARTY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_ARBSTARTY_GET_ARBSTARTY(val) (((CYGFX_U32)(val) ) & 0x1fffffUL)
#define GFXREG_FETCHBLIT_SETM_ARBSTARTY(s,val) ( (s)->arbstarty = ((s)->arbstarty & ~0x1fffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffUL) )
#define GFXREG_FETCHBLIT_SET_ARBSTARTY(s,val)  ( (s)->arbstarty = (((s)->arbstarty & ~0x1fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ARBSTARTY(s) ((((s)->arbstarty) ) & 0x1fffffUL)
#define GFXREG_FETCHBLIT_ARBSTARTY_ARBSTARTY_IWIDTH 16
#define GFXREG_FETCHBLIT_ARBSTARTY_ARBSTARTY_FWIDTH 5
#define GFXREG_FETCHBLIT_ARBSTARTY_ARBSTARTY_RESET 0U

/* ARBDELTA: Start values for delta incrementation of arbitrary warping.
   Fields of this register have only effect when WarpCoordinateMode is DD_PNT.        */
#define GFXREG_FETCHBLIT_ARBDELTA 0x00000068U
/* ARBDELTAXX: X coordinate of vector between first and second sample point. */
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXX_FSHIFT 0U
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXX_FMASK 0xffU
#define GFXREG_FETCHBLIT_ARBDELTA_SETM_ARBDELTAXX(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHBLIT_ARBDELTA_SET_ARBDELTAXX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_ARBDELTA_GET_ARBDELTAXX(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_ARBDELTAXX(s,val) ( (s)->arbdelta = ((s)->arbdelta & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHBLIT_SET_ARBDELTAXX(s,val)  ( (s)->arbdelta = (((s)->arbdelta & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ARBDELTAXX(s) ((((s)->arbdelta) ) & 0xffUL)
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXX_IWIDTH 3
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXX_FWIDTH 5
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXX_RESET 0U

/* ARBDELTAXY: Y coordinate of vector between first and second sample point. */
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXY_FSHIFT 8U
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXY_FMASK 0xffU
#define GFXREG_FETCHBLIT_ARBDELTA_SETM_ARBDELTAXY(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHBLIT_ARBDELTA_SET_ARBDELTAXY(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_ARBDELTA_GET_ARBDELTAXY(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_ARBDELTAXY(s,val) ( (s)->arbdelta = ((s)->arbdelta & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHBLIT_SET_ARBDELTAXY(s,val)  ( (s)->arbdelta = (((s)->arbdelta & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ARBDELTAXY(s) ((((s)->arbdelta) >> 8U) & 0xffUL)
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXY_IWIDTH 3
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXY_FWIDTH 5
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAXY_RESET 0U

/* ARBDELTAYX: X coordinate of vector between start and first sample point. */
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYX_FSHIFT 16U
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYX_FMASK 0xffU
#define GFXREG_FETCHBLIT_ARBDELTA_SETM_ARBDELTAYX(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHBLIT_ARBDELTA_SET_ARBDELTAYX(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_ARBDELTA_GET_ARBDELTAYX(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_ARBDELTAYX(s,val) ( (s)->arbdelta = ((s)->arbdelta & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHBLIT_SET_ARBDELTAYX(s,val)  ( (s)->arbdelta = (((s)->arbdelta & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ARBDELTAYX(s) ((((s)->arbdelta) >> 16U) & 0xffUL)
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYX_IWIDTH 3
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYX_FWIDTH 5
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYX_RESET 0U

/* ARBDELTAYY: Y coordinate of vector between start and first sample point. */
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYY_FSHIFT 24U
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYY_FMASK 0xffU
#define GFXREG_FETCHBLIT_ARBDELTA_SETM_ARBDELTAYY(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHBLIT_ARBDELTA_SET_ARBDELTAYY(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_ARBDELTA_GET_ARBDELTAYY(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_ARBDELTAYY(s,val) ( (s)->arbdelta = ((s)->arbdelta & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHBLIT_SET_ARBDELTAYY(s,val)  ( (s)->arbdelta = (((s)->arbdelta & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_ARBDELTAYY(s) ((((s)->arbdelta) >> 24U) & 0xffUL)
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYY_IWIDTH 3
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYY_FWIDTH 5
#define GFXREG_FETCHBLIT_ARBDELTA_ARBDELTAYY_RESET 0U

/* FIRPOSITIONS: FIR sequence control register.
   Selects the positions of the four input pixels to the bilinear filter inside he 4x4 FIR input array.        */
#define GFXREG_FETCHBLIT_FIRPOSITIONS 0x0000006cU
/* FIR0POSITION: Position of first pixel. */
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR0POSITION_FSHIFT 0U
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR0POSITION_FMASK 0xfU
#define GFXREG_FETCHBLIT_FIRPOSITIONS_SETM_FIR0POSITION(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHBLIT_FIRPOSITIONS_SET_FIR0POSITION(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FIRPOSITIONS_GET_FIR0POSITION(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_FIR0POSITION(s,val) ( (s)->firpositions = ((s)->firpositions & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHBLIT_SET_FIR0POSITION(s,val)  ( (s)->firpositions = (((s)->firpositions & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FIR0POSITION(s) ((((s)->firpositions) ) & 0xfUL)
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR0POSITION_RESET 5U

/* FIR1POSITION: Position of second pixel. */
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR1POSITION_FSHIFT 4U
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR1POSITION_FMASK 0xfU
#define GFXREG_FETCHBLIT_FIRPOSITIONS_SETM_FIR1POSITION(val) (((CYGFX_U32)(val) & 0xfUL) << 4U)
#define GFXREG_FETCHBLIT_FIRPOSITIONS_SET_FIR1POSITION(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FIRPOSITIONS_GET_FIR1POSITION(val) (((CYGFX_U32)(val) >> 4U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_FIR1POSITION(s,val) ( (s)->firpositions = ((s)->firpositions & ~0xf0UL) | (((CYGFX_U32)(val) << 4U) & 0xf0UL) )
#define GFXREG_FETCHBLIT_SET_FIR1POSITION(s,val)  ( (s)->firpositions = (((s)->firpositions & ~0xf0UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FIR1POSITION(s) ((((s)->firpositions) >> 4U) & 0xfUL)
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR1POSITION_RESET 6U

/* FIR2POSITION: Position of third pixel. */
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR2POSITION_FSHIFT 8U
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR2POSITION_FMASK 0xfU
#define GFXREG_FETCHBLIT_FIRPOSITIONS_SETM_FIR2POSITION(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHBLIT_FIRPOSITIONS_SET_FIR2POSITION(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FIRPOSITIONS_GET_FIR2POSITION(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_FIR2POSITION(s,val) ( (s)->firpositions = ((s)->firpositions & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHBLIT_SET_FIR2POSITION(s,val)  ( (s)->firpositions = (((s)->firpositions & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FIR2POSITION(s) ((((s)->firpositions) >> 8U) & 0xfUL)
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR2POSITION_RESET 9U

/* FIR3POSITION: Position of fourth pixel. */
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR3POSITION_FSHIFT 12U
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR3POSITION_FMASK 0xfU
#define GFXREG_FETCHBLIT_FIRPOSITIONS_SETM_FIR3POSITION(val) (((CYGFX_U32)(val) & 0xfUL) << 12U)
#define GFXREG_FETCHBLIT_FIRPOSITIONS_SET_FIR3POSITION(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FIRPOSITIONS_GET_FIR3POSITION(val) (((CYGFX_U32)(val) >> 12U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_FIR3POSITION(s,val) ( (s)->firpositions = ((s)->firpositions & ~0xf000UL) | (((CYGFX_U32)(val) << 12U) & 0xf000UL) )
#define GFXREG_FETCHBLIT_SET_FIR3POSITION(s,val)  ( (s)->firpositions = (((s)->firpositions & ~0xf000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FIR3POSITION(s) ((((s)->firpositions) >> 12U) & 0xfUL)
#define GFXREG_FETCHBLIT_FIRPOSITIONS_FIR3POSITION_RESET 10U

/* FIRCOEFFICIENTS: FIR coefficients register.
   Specifies the four coefficient for FIR operations.        */
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS 0x00000070U
/* FIR0COEFFICIENT: First coefficient. */
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR0COEFFICIENT_FSHIFT 0U
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR0COEFFICIENT_FMASK 0xffU
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_SETM_FIR0COEFFICIENT(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_SET_FIR0COEFFICIENT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_GET_FIR0COEFFICIENT(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_FIR0COEFFICIENT(s,val) ( (s)->fircoefficients = ((s)->fircoefficients & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHBLIT_SET_FIR0COEFFICIENT(s,val)  ( (s)->fircoefficients = (((s)->fircoefficients & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FIR0COEFFICIENT(s) ((((s)->fircoefficients) ) & 0xffUL)
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR0COEFFICIENT_IWIDTH 3
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR0COEFFICIENT_FWIDTH 5
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR0COEFFICIENT_RESET 0x20U

/* FIR1COEFFICIENT: Second coefficient. */
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR1COEFFICIENT_FSHIFT 8U
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR1COEFFICIENT_FMASK 0xffU
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_SETM_FIR1COEFFICIENT(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_SET_FIR1COEFFICIENT(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_GET_FIR1COEFFICIENT(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_FIR1COEFFICIENT(s,val) ( (s)->fircoefficients = ((s)->fircoefficients & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHBLIT_SET_FIR1COEFFICIENT(s,val)  ( (s)->fircoefficients = (((s)->fircoefficients & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FIR1COEFFICIENT(s) ((((s)->fircoefficients) >> 8U) & 0xffUL)
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR1COEFFICIENT_IWIDTH 3
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR1COEFFICIENT_FWIDTH 5
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR1COEFFICIENT_RESET 0U

/* FIR2COEFFICIENT: Third coefficient. */
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR2COEFFICIENT_FSHIFT 16U
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR2COEFFICIENT_FMASK 0xffU
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_SETM_FIR2COEFFICIENT(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_SET_FIR2COEFFICIENT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_GET_FIR2COEFFICIENT(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_FIR2COEFFICIENT(s,val) ( (s)->fircoefficients = ((s)->fircoefficients & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHBLIT_SET_FIR2COEFFICIENT(s,val)  ( (s)->fircoefficients = (((s)->fircoefficients & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FIR2COEFFICIENT(s) ((((s)->fircoefficients) >> 16U) & 0xffUL)
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR2COEFFICIENT_IWIDTH 3
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR2COEFFICIENT_FWIDTH 5
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR2COEFFICIENT_RESET 0U

/* FIR3COEFFICIENT: Fourth coefficient. */
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR3COEFFICIENT_FSHIFT 24U
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR3COEFFICIENT_FMASK 0xffU
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_SETM_FIR3COEFFICIENT(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_SET_FIR3COEFFICIENT(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_GET_FIR3COEFFICIENT(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHBLIT_SETM_FIR3COEFFICIENT(s,val) ( (s)->fircoefficients = ((s)->fircoefficients & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHBLIT_SET_FIR3COEFFICIENT(s,val)  ( (s)->fircoefficients = (((s)->fircoefficients & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FIR3COEFFICIENT(s) ((((s)->fircoefficients) >> 24U) & 0xffUL)
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR3COEFFICIENT_IWIDTH 3
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR3COEFFICIENT_FWIDTH 5
#define GFXREG_FETCHBLIT_FIRCOEFFICIENTS_FIR3COEFFICIENT_RESET 0U

/* DECODECONTROL: Control options for RLAD decompression. */
#define GFXREG_FETCHBLIT_DECODECONTROL 0x00000074U
/* COMPRESSIONMODE: Algorithm that the encoder used for compression. */
#define GFXREG_FETCHBLIT_DECODECONTROL_COMPRESSIONMODE_FSHIFT 0U
#define GFXREG_FETCHBLIT_DECODECONTROL_COMPRESSIONMODE_FMASK 0x3U
#define GFXREG_FETCHBLIT_DECODECONTROL_SETM_COMPRESSIONMODE(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_FETCHBLIT_DECODECONTROL_SET_COMPRESSIONMODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_DECODECONTROL_GET_COMPRESSIONMODE(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_FETCHBLIT_SETM_COMPRESSIONMODE(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_FETCHBLIT_SET_COMPRESSIONMODE(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_COMPRESSIONMODE(s) ((((s)->decodecontrol) ) & 0x3UL)
#define GFXREG_FETCHBLIT_DECODECONTROL_COMPRESSIONMODE_RLAD 0U /* Run-Length Adaptive Dithering (lossy compression). */
#define GFXREG_FETCHBLIT_DECODECONTROL_COMPRESSIONMODE_RLAD_UNIFORM 1U /* Run-Length Adaptive Dithering (lossy compression; uniform package size). */
#define GFXREG_FETCHBLIT_DECODECONTROL_COMPRESSIONMODE_RLA 2U /* Run-Length Adaptive (lossless compression). */
#define GFXREG_FETCHBLIT_DECODECONTROL_COMPRESSIONMODE_RL 3U /* Standard Run-Length. In contrary to other modes is in big endian format. */
#define GFXREG_FETCHBLIT_DECODECONTROL_COMPRESSIONMODE_RESET 1U

/* RLADCOMPBITSRED: Maximum for average number of bits per compressed pixel for Red or Y (luma) channel. This must match the corresponding encoder setting. */
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSRED_FSHIFT 16U
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSRED_FMASK 0xfU
#define GFXREG_FETCHBLIT_DECODECONTROL_SETM_RLADCOMPBITSRED(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHBLIT_DECODECONTROL_SET_RLADCOMPBITSRED(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_DECODECONTROL_GET_RLADCOMPBITSRED(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_RLADCOMPBITSRED(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHBLIT_SET_RLADCOMPBITSRED(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RLADCOMPBITSRED(s) ((((s)->decodecontrol) >> 16U) & 0xfUL)
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSRED_RESET 8U

/* RLADCOMPBITSGREEN: Maximum for average number of bits per compressed pixel for Green or U (chroma) channel. This must match the corresponding encoder setting. */
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSGREEN_FSHIFT 20U
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSGREEN_FMASK 0xfU
#define GFXREG_FETCHBLIT_DECODECONTROL_SETM_RLADCOMPBITSGREEN(val) (((CYGFX_U32)(val) & 0xfUL) << 20U)
#define GFXREG_FETCHBLIT_DECODECONTROL_SET_RLADCOMPBITSGREEN(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_DECODECONTROL_GET_RLADCOMPBITSGREEN(val) (((CYGFX_U32)(val) >> 20U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_RLADCOMPBITSGREEN(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0xf00000UL) | (((CYGFX_U32)(val) << 20U) & 0xf00000UL) )
#define GFXREG_FETCHBLIT_SET_RLADCOMPBITSGREEN(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0xf00000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RLADCOMPBITSGREEN(s) ((((s)->decodecontrol) >> 20U) & 0xfUL)
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSGREEN_RESET 8U

/* RLADCOMPBITSBLUE: Maximum for average number of bits per compressed pixel for Blue or V (chroma) channel. This must match the corresponding encoder setting. */
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSBLUE_FSHIFT 24U
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSBLUE_FMASK 0xfU
#define GFXREG_FETCHBLIT_DECODECONTROL_SETM_RLADCOMPBITSBLUE(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHBLIT_DECODECONTROL_SET_RLADCOMPBITSBLUE(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_DECODECONTROL_GET_RLADCOMPBITSBLUE(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_RLADCOMPBITSBLUE(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHBLIT_SET_RLADCOMPBITSBLUE(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RLADCOMPBITSBLUE(s) ((((s)->decodecontrol) >> 24U) & 0xfUL)
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSBLUE_RESET 8U

/* RLADCOMPBITSALPHA: Maximum for average number of bits per compressed pixel for Alpha channel. This must match the corresponding encoder setting. */
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSALPHA_FSHIFT 28U
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSALPHA_FMASK 0xfU
#define GFXREG_FETCHBLIT_DECODECONTROL_SETM_RLADCOMPBITSALPHA(val) (((CYGFX_U32)(val) & 0xfUL) << 28U)
#define GFXREG_FETCHBLIT_DECODECONTROL_SET_RLADCOMPBITSALPHA(val) (((CYGFX_U32)(val) << 28U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_DECODECONTROL_GET_RLADCOMPBITSALPHA(val) (((CYGFX_U32)(val) >> 28U) & 0xfUL)
#define GFXREG_FETCHBLIT_SETM_RLADCOMPBITSALPHA(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0xf0000000UL) | (((CYGFX_U32)(val) << 28U) & 0xf0000000UL) )
#define GFXREG_FETCHBLIT_SET_RLADCOMPBITSALPHA(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0xf0000000UL) | ((CYGFX_U32)(val) << 28U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RLADCOMPBITSALPHA(s) ((((s)->decodecontrol) >> 28U) & 0xfUL)
#define GFXREG_FETCHBLIT_DECODECONTROL_RLADCOMPBITSALPHA_RESET 8U

/* SOURCEBUFFERLENGTH: Source buffer length for compressed data. */
#define GFXREG_FETCHBLIT_SOURCEBUFFERLENGTH 0x00000078U
/* RLEWORDS: Number of 32-bit words minus one that are required to decode the run length encoded source buffer. */
#define GFXREG_FETCHBLIT_SOURCEBUFFERLENGTH_RLEWORDS_FSHIFT 0U
#define GFXREG_FETCHBLIT_SOURCEBUFFERLENGTH_RLEWORDS_FMASK 0x1fffffffU
#define GFXREG_FETCHBLIT_SOURCEBUFFERLENGTH_SETM_RLEWORDS(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_FETCHBLIT_SOURCEBUFFERLENGTH_SET_RLEWORDS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_SOURCEBUFFERLENGTH_GET_RLEWORDS(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_FETCHBLIT_SETM_RLEWORDS(s,val) ( (s)->sourcebufferlength = ((s)->sourcebufferlength & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_FETCHBLIT_SET_RLEWORDS(s,val)  ( (s)->sourcebufferlength = (((s)->sourcebufferlength & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RLEWORDS(s) ((((s)->sourcebufferlength) ) & 0x1fffffffUL)
#define GFXREG_FETCHBLIT_SOURCEBUFFERLENGTH_RLEWORDS_RESET 0U

/* CONTROL: Shared common control settings for all layers. */
#define GFXREG_FETCHBLIT_CONTROL 0x0000007cU
/* RASTERMODE: Selects a method how to generate source buffer sample points. */
#define GFXREG_FETCHBLIT_CONTROL_RASTERMODE_FSHIFT 0U
#define GFXREG_FETCHBLIT_CONTROL_RASTERMODE_FMASK 0x7U
#define GFXREG_FETCHBLIT_CONTROL_SETM_RASTERMODE(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_FETCHBLIT_CONTROL_SET_RASTERMODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONTROL_GET_RASTERMODE(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_FETCHBLIT_SETM_RASTERMODE(s,val) ( (s)->control = ((s)->control & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_FETCHBLIT_SET_RASTERMODE(s,val)  ( (s)->control = (((s)->control & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RASTERMODE(s) ((((s)->control) ) & 0x7UL)
#define GFXREG_FETCHBLIT_CONTROL_RASTERMODE_NORMAL 0x0U /* [IBO only, for LBO use PERSPECTIVE with corresponding Geometry] First sample at StartX/Y relative to origin. Hor/ver increments using DeltaX/Y and DeltaSwap setup. */
#define GFXREG_FETCHBLIT_CONTROL_RASTERMODE_DECODE 0x1U /* [FetchDecode/FetchBlit only] Source buffer is an encoded bit stream. First sample at origin (0,0). Hor/ver increments = (1,0)/(0,1). */
#define GFXREG_FETCHBLIT_CONTROL_RASTERMODE_ARBITRARY 0x2U /* [FetchBlit/Warp only] Arbitrary warping (filter is active). Coordinates are read from frame input port. InputSelect must be set to COORDINATE. ArbStartX/Y and ArbDeltaXX/XY/YX/YY must be setup. */
#define GFXREG_FETCHBLIT_CONTROL_RASTERMODE_PERSPECTIVE 0x3U /* [FetchBlit only] Affine/Perspective warping (filter is active). First sample at PerspStartX/Y/W. Hor/ver increments using PerspDeltaXX/XY/YX/YY/WX/WY. Homogeneous coordinates. See also field Geometry to reduce coordinate amount. */
#define GFXREG_FETCHBLIT_CONTROL_RASTERMODE_YUV422 0x4U /* [FetchBlit/Decode only] Source buffer is packed YUV 422. First sample at origin (0,0). Hor/ver increments = (1,0)/(0,1). All correllated window widths and horizontal offsets must be even. */
#define GFXREG_FETCHBLIT_CONTROL_RASTERMODE_RESET 0x0U

/* INPUTSELECT: Selects function for the frame input port. */
#define GFXREG_FETCHBLIT_CONTROL_INPUTSELECT_FSHIFT 3U
#define GFXREG_FETCHBLIT_CONTROL_INPUTSELECT_FMASK 0x3U
#define GFXREG_FETCHBLIT_CONTROL_SETM_INPUTSELECT(val) (((CYGFX_U32)(val) & 0x3UL) << 3U)
#define GFXREG_FETCHBLIT_CONTROL_SET_INPUTSELECT(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONTROL_GET_INPUTSELECT(val) (((CYGFX_U32)(val) >> 3U) & 0x3UL)
#define GFXREG_FETCHBLIT_SETM_INPUTSELECT(s,val) ( (s)->control = ((s)->control & ~0x18UL) | (((CYGFX_U32)(val) << 3U) & 0x18UL) )
#define GFXREG_FETCHBLIT_SET_INPUTSELECT(s,val)  ( (s)->control = (((s)->control & ~0x18UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_INPUTSELECT(s) ((((s)->control) >> 3U) & 0x3UL)
#define GFXREG_FETCHBLIT_CONTROL_INPUTSELECT_INACTIVE 0x0U /* Not used. */
#define GFXREG_FETCHBLIT_CONTROL_INPUTSELECT_COMPPACK 0x1U /* Used for component packing (e.g. UV or source alpha buffer). */
#define GFXREG_FETCHBLIT_CONTROL_INPUTSELECT_ALPHAMASK 0x2U /* Used for RGB and alpha pre-multiply stage (mask alpha buffer). */
#define GFXREG_FETCHBLIT_CONTROL_INPUTSELECT_COORDINATE 0x3U /* Used for arbitrary warping (coordinate buffer). */
#define GFXREG_FETCHBLIT_CONTROL_INPUTSELECT_RESET 0x0U

/* YUV422UPSAMPLINGMODE: Selects a method for horizontal up-sampling of YUV 422/420 input data. */
#define GFXREG_FETCHBLIT_CONTROL_YUV422UPSAMPLINGMODE_FSHIFT 5U
#define GFXREG_FETCHBLIT_CONTROL_YUV422UPSAMPLINGMODE_FMASK 0x1U
#define GFXREG_FETCHBLIT_CONTROL_SETM_YUV422UPSAMPLINGMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHBLIT_CONTROL_SET_YUV422UPSAMPLINGMODE(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONTROL_GET_YUV422UPSAMPLINGMODE(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_YUV422UPSAMPLINGMODE(s,val) ( (s)->control = ((s)->control & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHBLIT_SET_YUV422UPSAMPLINGMODE(s,val)  ( (s)->control = (((s)->control & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_YUV422UPSAMPLINGMODE(s) ((((s)->control) >> 5U) & 0x1UL)
#define GFXREG_FETCHBLIT_CONTROL_YUV422UPSAMPLINGMODE_REPLICATE 0x0U /* Replicate mode for interspersed samples (UV samples between Y samples). */
#define GFXREG_FETCHBLIT_CONTROL_YUV422UPSAMPLINGMODE_INTERPOLATE 0x1U /* Interpolate mode for coaligned samples (UV samples at Y sample positions). */
#define GFXREG_FETCHBLIT_CONTROL_YUV422UPSAMPLINGMODE_RESET 0x0U

/* RAWPIXEL: Raw pixel mode. If enabled (value = 1), the ComponentBits/Shift settings are replaced for all layers by fixed values that allow passing the pixel data read from memory unchanged to subsequent units (e.g. for reading coordinate layers). Multiply stages and transparent color are deactivated. Skip and Tile pixels are not affected by this setting. */
#define GFXREG_FETCHBLIT_CONTROL_RAWPIXEL_FSHIFT 7U
#define GFXREG_FETCHBLIT_CONTROL_RAWPIXEL_FMASK 0x1U
#define GFXREG_FETCHBLIT_CONTROL_SETM_RAWPIXEL(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHBLIT_CONTROL_SET_RAWPIXEL(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONTROL_GET_RAWPIXEL(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_RAWPIXEL(s,val) ( (s)->control = ((s)->control & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHBLIT_SET_RAWPIXEL(s,val)  ( (s)->control = (((s)->control & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_RAWPIXEL(s) ((((s)->control) >> 7U) & 0x1UL)
#define GFXREG_FETCHBLIT_CONTROL_RAWPIXEL_RESET 0U

/* CLIPCOLOR: Selects which color to take for pixels that do not lie inside the clip window of any layer. */
#define GFXREG_FETCHBLIT_CONTROL_CLIPCOLOR_FSHIFT 16U
#define GFXREG_FETCHBLIT_CONTROL_CLIPCOLOR_FMASK 0x1U
#define GFXREG_FETCHBLIT_CONTROL_SETM_CLIPCOLOR(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_FETCHBLIT_CONTROL_SET_CLIPCOLOR(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONTROL_GET_CLIPCOLOR(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_CLIPCOLOR(s,val) ( (s)->control = ((s)->control & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_FETCHBLIT_SET_CLIPCOLOR(s,val)  ( (s)->control = (((s)->control & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_CLIPCOLOR(s) ((((s)->control) >> 16U) & 0x1UL)
#define GFXREG_FETCHBLIT_CONTROL_CLIPCOLOR_NULL 0x0U /* Null color. */
#define GFXREG_FETCHBLIT_CONTROL_CLIPCOLOR_LAYER 0x1U /* Color of layer number given by ClipLayer (or layer 0 when Fetch unit has one layer only). The color is then the layer's source or tiling color. */
#define GFXREG_FETCHBLIT_CONTROL_CLIPCOLOR_RESET 0x1U

/* FILTERMODE: Use this to select between nearest and bilinear filtering. Only has an effect if rastermode == ARBITRARY or rastermode == PERSPECTIVE or rastermode == AFFINE. */
#define GFXREG_FETCHBLIT_CONTROL_FILTERMODE_FSHIFT 20U
#define GFXREG_FETCHBLIT_CONTROL_FILTERMODE_FMASK 0x7U
#define GFXREG_FETCHBLIT_CONTROL_SETM_FILTERMODE(val) (((CYGFX_U32)(val) & 0x7UL) << 20U)
#define GFXREG_FETCHBLIT_CONTROL_SET_FILTERMODE(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONTROL_GET_FILTERMODE(val) (((CYGFX_U32)(val) >> 20U) & 0x7UL)
#define GFXREG_FETCHBLIT_SETM_FILTERMODE(s,val) ( (s)->control = ((s)->control & ~0x700000UL) | (((CYGFX_U32)(val) << 20U) & 0x700000UL) )
#define GFXREG_FETCHBLIT_SET_FILTERMODE(s,val)  ( (s)->control = (((s)->control & ~0x700000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_FILTERMODE(s) ((((s)->control) >> 20U) & 0x7UL)
#define GFXREG_FETCHBLIT_CONTROL_FILTERMODE_NEAREST 0U /* Chooses pixel closest to sample point */
#define GFXREG_FETCHBLIT_CONTROL_FILTERMODE_BILINEAR 1U /* Calculates result from 4 pixels closest to sample point */
#define GFXREG_FETCHBLIT_CONTROL_FILTERMODE_FIR2 2U /* FIR mode with 2 programmable pixel positions and coefficients */
#define GFXREG_FETCHBLIT_CONTROL_FILTERMODE_FIR4 3U /* FIR mode with 4 programmable pixel positions and coefficients */
#define GFXREG_FETCHBLIT_CONTROL_FILTERMODE_HOR_LINEAR 4U /* Calculates result from 2 pixels closest to the sample point and on the same line */
#define GFXREG_FETCHBLIT_CONTROL_FILTERMODE_RESET 0U

/* GEOMETRY: Control the geomety settings (PerspStartX/Y/W and PerspDeltaXX/XY/YX/YY/XW/YW usage) for the raster mode PERSPECTIVE.  */
#define GFXREG_FETCHBLIT_CONTROL_GEOMETRY_FSHIFT 28U
#define GFXREG_FETCHBLIT_CONTROL_GEOMETRY_FMASK 0x3U
#define GFXREG_FETCHBLIT_CONTROL_SETM_GEOMETRY(val) (((CYGFX_U32)(val) & 0x3UL) << 28U)
#define GFXREG_FETCHBLIT_CONTROL_SET_GEOMETRY(val) (((CYGFX_U32)(val) << 28U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_CONTROL_GET_GEOMETRY(val) (((CYGFX_U32)(val) >> 28U) & 0x3UL)
#define GFXREG_FETCHBLIT_SETM_GEOMETRY(s,val) ( (s)->control = ((s)->control & ~0x30000000UL) | (((CYGFX_U32)(val) << 28U) & 0x30000000UL) )
#define GFXREG_FETCHBLIT_SET_GEOMETRY(s,val)  ( (s)->control = (((s)->control & ~0x30000000UL) | ((CYGFX_U32)(val) << 28U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_GEOMETRY(s) ((((s)->control) >> 28U) & 0x3UL)
#define GFXREG_FETCHBLIT_CONTROL_GEOMETRY_TRANSLATE 0U /* PerspStartX/Y are used. (PerspDeltaXY/YX/XW/YW are 0. PerspDeltaXX/YY and PerspStartW are 1.) */
#define GFXREG_FETCHBLIT_CONTROL_GEOMETRY_SCALE 1U /* PerspStartX/Y and PerspDeltaXX/YY are used. (PerspDeltaXY/YX/XW/YW are 0. PerspStartW is 1.) */
#define GFXREG_FETCHBLIT_CONTROL_GEOMETRY_ROTATION 2U /* PerspStartX/Y and PerspDeltaXX/XY/YX/YY are used. (PerspDeltaXW/YW are 0. PerspStartW is 1.) */
#define GFXREG_FETCHBLIT_CONTROL_GEOMETRY_PERSPECTIVE 3U /* All values PerspStartX/Y/W and PerspDeltaXX/XY/YX/YY/XW/YW are used */
#define GFXREG_FETCHBLIT_CONTROL_GEOMETRY_RESET 3U

/* CONTROLTRIGGER: Shadow load trigger. */
#define GFXREG_FETCHBLIT_CONTROLTRIGGER 0x00000080U
/* SHDTOKGEN: Writing a 1 to this will load shadow registers into the active configuration with the next start of frame and send a shadow load token to subsequent units. */
#define GFXREG_FETCHBLIT_CONTROLTRIGGER_SHDTOKGEN_FSHIFT 0U
#define GFXREG_FETCHBLIT_CONTROLTRIGGER_SHDTOKGEN_FMASK 0x1U
#define GFXREG_FETCHBLIT_CONTROLTRIGGER_SETM_SHDTOKGEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHBLIT_CONTROLTRIGGER_SET_SHDTOKGEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_SETM_SHDTOKGEN(s,val) ( (s)->controltrigger = ((s)->controltrigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHBLIT_SET_SHDTOKGEN(s,val)  ( (s)->controltrigger = (((s)->controltrigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_CONTROLTRIGGER_SHDTOKGEN_RESET (none)U

/* START: Frame start trigger. */
#define GFXREG_FETCHBLIT_START 0x00000084U
/* START: Writing a 1 to this field will start generating one frame (for debugging purposes only). */
#define GFXREG_FETCHBLIT_START_START_FSHIFT 0U
#define GFXREG_FETCHBLIT_START_START_FMASK 0x1U
#define GFXREG_FETCHBLIT_START_SETM_START(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHBLIT_START_SET_START(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_SETM_START(s,val) ( (s)->start = ((s)->start & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHBLIT_SET_START(s,val)  ( (s)->start = (((s)->start & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_START_START_RESET (none)U

/* FETCHTYPE: Fetch unit type. */
#define GFXREG_FETCHBLIT_FETCHTYPE 0x00000088U
/* FETCHTYPE: This field can be used to determine what kind of fetch unit this is. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_FSHIFT 0U
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_FMASK 0xfU
#define GFXREG_FETCHBLIT_FETCHTYPE_GET_FETCHTYPE(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHBLIT_GET_FETCHTYPE(s) ((((s)->fetchtype) ) & 0xfUL)
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_DECODE 0U /* Fetch unit with RL and RLAD decoder. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_LAYER 1U /* Fetch unit with fractional plane (8 layers). */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_WARP 2U /* Fetch unit with arbitrary warping and fractional plane (8 layers). */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_ECO 3U /* Fetch unit with minimum feature set for alpha, chroma and coordinate planes. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_PERSP 4U /* Fetch unit with affine, perspective and arbitrary warping. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_ROT 5U /* Fetch unit with affine and arbitrary warping. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_DECODEL 6U /* Fetch unit with RL and RLAD decoder, reduced feature set. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_LAYERL 7U /* Fetch unit with fractional plane (8 layers), reduced feature set. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_ROTL 8U /* Fetch unit with affine and arbitrary warping, reduced feature set. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_ECOL 9U /* Fetch unit with reduced minimum feature set for alpha, chroma and coordinate planes. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_BLIT 10U /* Fetch unit with DECODE and PERSP capabilities. */
#define GFXREG_FETCHBLIT_FETCHTYPE_FETCHTYPE_RESET (none)U

/* DECODERSTATUS: Status information of the RLAD decoder.
   Both conditions typically indicate a corrupt RLAD bit stream in memory.         In any case the decoder will read exactly the number of words given by RLEWords and generate a complete output frame in order to avoid system hang-up or access to memory locations outside the reserved buffer space.        */
#define GFXREG_FETCHBLIT_DECODERSTATUS 0x0000008cU
/* BUFFERTOOSMALL: The buffer size given by RLEWords is too small. No complete output frame could be decoded. */
#define GFXREG_FETCHBLIT_DECODERSTATUS_BUFFERTOOSMALL_FSHIFT 0U
#define GFXREG_FETCHBLIT_DECODERSTATUS_BUFFERTOOSMALL_FMASK 0x1U
#define GFXREG_FETCHBLIT_DECODERSTATUS_SETM_BUFFERTOOSMALL(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHBLIT_DECODERSTATUS_SET_BUFFERTOOSMALL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_DECODERSTATUS_GET_BUFFERTOOSMALL(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_BUFFERTOOSMALL(s,val) ( (s)->decoderstatus = ((s)->decoderstatus & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHBLIT_SET_BUFFERTOOSMALL(s,val)  ( (s)->decoderstatus = (((s)->decoderstatus & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_BUFFERTOOSMALL(s) ((((s)->decoderstatus) ) & 0x1UL)
#define GFXREG_FETCHBLIT_DECODERSTATUS_BUFFERTOOSMALL_RESET 0U

/* BUFFERTOOLARGE: The buffer size given by RLEWords is too large. A complete output frame could be decoded, but more data was read than necessary. */
#define GFXREG_FETCHBLIT_DECODERSTATUS_BUFFERTOOLARGE_FSHIFT 1U
#define GFXREG_FETCHBLIT_DECODERSTATUS_BUFFERTOOLARGE_FMASK 0x1U
#define GFXREG_FETCHBLIT_DECODERSTATUS_SETM_BUFFERTOOLARGE(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_FETCHBLIT_DECODERSTATUS_SET_BUFFERTOOLARGE(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHBLIT_DECODERSTATUS_GET_BUFFERTOOLARGE(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_FETCHBLIT_SETM_BUFFERTOOLARGE(s,val) ( (s)->decoderstatus = ((s)->decoderstatus & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_FETCHBLIT_SET_BUFFERTOOLARGE(s,val)  ( (s)->decoderstatus = (((s)->decoderstatus & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHBLIT_GET_BUFFERTOOLARGE(s) ((((s)->decoderstatus) >> 1U) & 0x1UL)
#define GFXREG_FETCHBLIT_DECODERSTATUS_BUFFERTOOLARGE_RESET 0U

/* BURSTBUFFERPROPERTIES: Burst buffer properties. */
#define GFXREG_FETCHBLIT_BURSTBUFFERPROPERTIES 0x00000090U
/* MANAGEDBURSTBUFFERS: Maximum number of burst buffers that can be administrated in the AXI interface. */
#define GFXREG_FETCHBLIT_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_FSHIFT 0U
#define GFXREG_FETCHBLIT_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_FMASK 0xffU
#define GFXREG_FETCHBLIT_BURSTBUFFERPROPERTIES_GET_MANAGEDBURSTBUFFERS(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHBLIT_GET_MANAGEDBURSTBUFFERS(s) ((((s)->burstbufferproperties) ) & 0xffUL)
#define GFXREG_FETCHBLIT_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_RESET (none)U

/* BURSTLENGTHFORMAXBUFFERS: Maximum Burst Length that can be used when ManagedBurstBuffers burst buffers are used. */
#define GFXREG_FETCHBLIT_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_FSHIFT 8U
#define GFXREG_FETCHBLIT_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_FMASK 0x1fU
#define GFXREG_FETCHBLIT_BURSTBUFFERPROPERTIES_GET_BURSTLENGTHFORMAXBUFFERS(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHBLIT_GET_BURSTLENGTHFORMAXBUFFERS(s) ((((s)->burstbufferproperties) >> 8U) & 0x1fUL)
#define GFXREG_FETCHBLIT_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_RESET (none)U

/* HIDDENSTATUS: Hidden status informations.
   The ShadowStatus field(s) indicate if a shadow load has been triggered for the corresponding layer, but not yet executed (for debugging purposes only; read only when stable).        */
#define GFXREG_FETCHBLIT_HIDDENSTATUS 0x00000094U
/* STATUSBUSY: Fetch unit is busy. */
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSBUSY_FSHIFT 0U
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSBUSY_FMASK 0x1U
#define GFXREG_FETCHBLIT_HIDDENSTATUS_GET_STATUSBUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHBLIT_GET_STATUSBUSY(s) ((((s)->hiddenstatus) ) & 0x1UL)
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSBUSY_RESET (none)U

/* STATUSBUFFERSIDLE: AXI interface buffers are idle. */
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSBUFFERSIDLE_FSHIFT 4U
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSBUFFERSIDLE_FMASK 0x1U
#define GFXREG_FETCHBLIT_HIDDENSTATUS_GET_STATUSBUFFERSIDLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHBLIT_GET_STATUSBUFFERSIDLE(s) ((((s)->hiddenstatus) >> 4U) & 0x1UL)
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSBUFFERSIDLE_RESET (none)U

/* STATUSREQUEST: Fetch unit requesting on the AXI interface, waiting for acknowledge. */
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSREQUEST_FSHIFT 5U
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSREQUEST_FMASK 0x1U
#define GFXREG_FETCHBLIT_HIDDENSTATUS_GET_STATUSREQUEST(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHBLIT_GET_STATUSREQUEST(s) ((((s)->hiddenstatus) >> 5U) & 0x1UL)
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSREQUEST_RESET (none)U

/* STATUSCOMPLETE: Fetch unit completed all requested AXI transfers. */
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSCOMPLETE_FSHIFT 6U
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSCOMPLETE_FMASK 0x1U
#define GFXREG_FETCHBLIT_HIDDENSTATUS_GET_STATUSCOMPLETE(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHBLIT_GET_STATUSCOMPLETE(s) ((((s)->hiddenstatus) >> 6U) & 0x1UL)
#define GFXREG_FETCHBLIT_HIDDENSTATUS_STATUSCOMPLETE_RESET (none)U

/* SHADOWSTATUS: Shadow load status for all layers (layer index = bit index). */
#define GFXREG_FETCHBLIT_HIDDENSTATUS_SHADOWSTATUS_FSHIFT 8U
#define GFXREG_FETCHBLIT_HIDDENSTATUS_SHADOWSTATUS_FMASK 0xffU
#define GFXREG_FETCHBLIT_HIDDENSTATUS_GET_SHADOWSTATUS(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHBLIT_GET_SHADOWSTATUS(s) ((((s)->hiddenstatus) >> 8U) & 0xffUL)
#define GFXREG_FETCHBLIT_HIDDENSTATUS_SHADOWSTATUS_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_FETCHBLIT_REGISTER_H */

