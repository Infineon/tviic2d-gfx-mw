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
 * \file        gfxreg_fetchdecode_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   fetchdecode
 *              Source:   fetchdecode.component.xml
 *              Template: component_h.tpl
 * \brief      Iris fetchdecode register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_FETCHDECODE_REGISTER_H
#define GFXREG_FETCHDECODE_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* fetchdecode registers */
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
#define GFXREG_FETCHDECODE_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_FETCHDECODE_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_FETCHDECODE_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_FETCHDECODE_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHDECODE_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHDECODE_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_FETCHDECODE_STATICCONTROL_SHDEN_RESET 0U

/* LBHSHDEN: Enables shadowing of LBH configuration signals. */
#define GFXREG_FETCHDECODE_STATICCONTROL_LBHSHDEN_FSHIFT 1U
#define GFXREG_FETCHDECODE_STATICCONTROL_LBHSHDEN_FMASK 0x1U
#define GFXREG_FETCHDECODE_STATICCONTROL_SETM_LBHSHDEN(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_FETCHDECODE_STATICCONTROL_SET_LBHSHDEN(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_STATICCONTROL_GET_LBHSHDEN(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_LBHSHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_FETCHDECODE_SET_LBHSHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_LBHSHDEN(s) ((((s)->staticcontrol) >> 1U) & 0x1UL)
#define GFXREG_FETCHDECODE_STATICCONTROL_LBHSHDEN_RESET 1U

/* BASEADDRESSAUTOUPDATE: Enable flag for continuous shadow load of BaseAddress field for each layer (layer index = bit index). When set to 1 the active BaseAddress configuration is loaded from shadow at start of each frame. This update is then executed independently from other RWS type fields. ShdEn must be enabled for this mode. */
#define GFXREG_FETCHDECODE_STATICCONTROL_BASEADDRESSAUTOUPDATE_FSHIFT 16U
#define GFXREG_FETCHDECODE_STATICCONTROL_BASEADDRESSAUTOUPDATE_FMASK 0xffU
#define GFXREG_FETCHDECODE_STATICCONTROL_SETM_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHDECODE_STATICCONTROL_SET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_STATICCONTROL_GET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHDECODE_SETM_BASEADDRESSAUTOUPDATE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHDECODE_SET_BASEADDRESSAUTOUPDATE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_BASEADDRESSAUTOUPDATE(s) ((((s)->staticcontrol) >> 16U) & 0xffUL)
#define GFXREG_FETCHDECODE_STATICCONTROL_BASEADDRESSAUTOUPDATE_RESET 0U

/* BURSTBUFFERMANAGEMENT: AXI interface buffer management register */
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT 0x00000004U
/* SETNUMBUFFERS: Set this to the number of bursts that should be buffered. SetNumBuffers has to be smaller or equal to ManagedBurstBuffers and SetNumBuffers * SetBurstLength has to be smaller or equal to ManagedBurstBuffers * BurstLengthForMaxBuffers. Must be a power of 2. The minimum allowed settings is 4 except for the FetchEco derivate which has a minimum allowed setting of 2. */
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_FSHIFT 0U
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_FMASK 0xffU
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SETM_SETNUMBUFFERS(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SET_SETNUMBUFFERS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_GET_SETNUMBUFFERS(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHDECODE_SETM_SETNUMBUFFERS(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHDECODE_SET_SETNUMBUFFERS(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_SETNUMBUFFERS(s) ((((s)->burstbuffermanagement) ) & 0xffUL)
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SETNUMBUFFERS_RESET 4U

/* SETBURSTLENGTH: Set this to the burst length that should be used on the AXI interface. SetNumBuffers * SetBurstLength has to be smaller or equal to ManagedBurstBuffers * BurstLengthForMaxBuffers and that bursts larger than 16 are not possible on the axi interface. Only a power of two may be specified as burst length. */
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FSHIFT 8U
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FMASK 0x1fU
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SETM_SETBURSTLENGTH(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_GET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHDECODE_SETM_SETBURSTLENGTH(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHDECODE_SET_SETBURSTLENGTH(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_SETBURSTLENGTH(s) ((((s)->burstbuffermanagement) >> 8U) & 0x1fUL)
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_RESET 2U

/* LINEMODE: Fetch buffer cache control. */
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_LINEMODE_FSHIFT 31U
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_LINEMODE_FMASK 0x1U
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SETM_LINEMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_SET_LINEMODE(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_GET_LINEMODE(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_LINEMODE(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHDECODE_SET_LINEMODE(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_LINEMODE(s) ((((s)->burstbuffermanagement) >> 31U) & 0x1UL)
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_LINEMODE_DISPLAY 0U /* Mandatory setting for operation in the Display Controller. Works also for Blit Engine with marginal performance impact. */
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_LINEMODE_BLIT 1U /* Recommended setting for operation in the Blit Engine. */
#define GFXREG_FETCHDECODE_BURSTBUFFERMANAGEMENT_LINEMODE_RESET 0U

/* RINGBUFSTARTADDR0: Ring buffer setup for layer 0. */
#define GFXREG_FETCHDECODE_RINGBUFSTARTADDR0 0x00000008U
/* RINGBUFSTARTADDR0: Start address of the ring buffer. Must be aligned to SetBurstLength x 8 bytes. */
#define GFXREG_FETCHDECODE_RINGBUFSTARTADDR0_RINGBUFSTARTADDR0_FSHIFT 0U
#define GFXREG_FETCHDECODE_RINGBUFSTARTADDR0_RINGBUFSTARTADDR0_FMASK 0xffffffffU
#define GFXREG_FETCHDECODE_RINGBUFSTARTADDR0_SETM_RINGBUFSTARTADDR0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHDECODE_RINGBUFSTARTADDR0_SET_RINGBUFSTARTADDR0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_RINGBUFSTARTADDR0_GET_RINGBUFSTARTADDR0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHDECODE_SETM_RINGBUFSTARTADDR0(s,val) ( (s)->ringbufstartaddr0 = ((s)->ringbufstartaddr0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHDECODE_SET_RINGBUFSTARTADDR0(s,val)  ( (s)->ringbufstartaddr0 = (((s)->ringbufstartaddr0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RINGBUFSTARTADDR0(s) ((((s)->ringbufstartaddr0) ) & 0xffffffffUL)
#define GFXREG_FETCHDECODE_RINGBUFSTARTADDR0_RINGBUFSTARTADDR0_RESET 0U

/* RINGBUFWRAPADDR0: Ring buffer setup for layer 0.
   When data is read from the source buffer, the address is reduced by the ring buffer size (= RingBufWrapAddr - RingBufStartAddr) when it is equal or larger than RingBufWrapAddr.         To disable ring buffer functionality set RingBufStartAddr = RingBufEndAddr = 0.         If ring buffer is used then BaseAddress0 and Stride0 must be multiples of 4 byte and the ring buffer size must be a multiple of Stride0.         Ring buffer size must be at least two burst lengths.         Current read-out address can be read from ReadAddress0 field.        */
#define GFXREG_FETCHDECODE_RINGBUFWRAPADDR0 0x0000000cU
/* RINGBUFWRAPADDR0: End address of the ring buffer (last byte of the buffer plus one). */
#define GFXREG_FETCHDECODE_RINGBUFWRAPADDR0_RINGBUFWRAPADDR0_FSHIFT 0U
#define GFXREG_FETCHDECODE_RINGBUFWRAPADDR0_RINGBUFWRAPADDR0_FMASK 0xffffffffU
#define GFXREG_FETCHDECODE_RINGBUFWRAPADDR0_SETM_RINGBUFWRAPADDR0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHDECODE_RINGBUFWRAPADDR0_SET_RINGBUFWRAPADDR0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_RINGBUFWRAPADDR0_GET_RINGBUFWRAPADDR0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHDECODE_SETM_RINGBUFWRAPADDR0(s,val) ( (s)->ringbufwrapaddr0 = ((s)->ringbufwrapaddr0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHDECODE_SET_RINGBUFWRAPADDR0(s,val)  ( (s)->ringbufwrapaddr0 = (((s)->ringbufwrapaddr0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RINGBUFWRAPADDR0(s) ((((s)->ringbufwrapaddr0) ) & 0xffffffffUL)
#define GFXREG_FETCHDECODE_RINGBUFWRAPADDR0_RINGBUFWRAPADDR0_RESET 0U

/* FRAMEPROPERTIES0: Frame property setup for layer 0. */
#define GFXREG_FETCHDECODE_FRAMEPROPERTIES0 0x00000010U
/* FIELDID0: Field identifier that is generated for subsequent units (0 = progressive frame or interlaced field with even line indices, 1 = odd field). */
#define GFXREG_FETCHDECODE_FRAMEPROPERTIES0_FIELDID0_FSHIFT 0U
#define GFXREG_FETCHDECODE_FRAMEPROPERTIES0_FIELDID0_FMASK 0x1U
#define GFXREG_FETCHDECODE_FRAMEPROPERTIES0_SETM_FIELDID0(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHDECODE_FRAMEPROPERTIES0_SET_FIELDID0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_FRAMEPROPERTIES0_GET_FIELDID0(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_FIELDID0(s,val) ( (s)->frameproperties0 = ((s)->frameproperties0 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHDECODE_SET_FIELDID0(s,val)  ( (s)->frameproperties0 = (((s)->frameproperties0 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_FIELDID0(s) ((((s)->frameproperties0) ) & 0x1UL)
#define GFXREG_FETCHDECODE_FRAMEPROPERTIES0_FIELDID0_RESET 0U

/* BASEADDRESS0: Source buffer base address of layer 0. */
#define GFXREG_FETCHDECODE_BASEADDRESS0 0x00000014U
/* BASEADDRESS0: Byte aligned start address of the layer source buffer. For a pixel width of 32 bits or DECODE operations BaseAddress bits 1 downto 0 have to be 0 and for a pixel width of 16 bit BaseAddress[0] has to be 0. */
#define GFXREG_FETCHDECODE_BASEADDRESS0_BASEADDRESS0_FSHIFT 0U
#define GFXREG_FETCHDECODE_BASEADDRESS0_BASEADDRESS0_FMASK 0xffffffffU
#define GFXREG_FETCHDECODE_BASEADDRESS0_SETM_BASEADDRESS0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHDECODE_BASEADDRESS0_SET_BASEADDRESS0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_BASEADDRESS0_GET_BASEADDRESS0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHDECODE_SETM_BASEADDRESS0(s,val) ( (s)->baseaddress0 = ((s)->baseaddress0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHDECODE_SET_BASEADDRESS0(s,val)  ( (s)->baseaddress0 = (((s)->baseaddress0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_BASEADDRESS0(s) ((((s)->baseaddress0) ) & 0xffffffffUL)
#define GFXREG_FETCHDECODE_BASEADDRESS0_BASEADDRESS0_RESET 0U

/* SOURCEBUFFERATTRIBUTES0: Source buffer attributes for layer 0. */
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0 0x00000018U
/* STRIDE0: Source buffer stride of the layer in bytes minus one, used for address generation. For a pixel width of 32 bits Stride has to be dividable by 4 and given minus one and for a pixel width of 16 bit Stride has to be dividable by two and given minus one. */
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_STRIDE0_FSHIFT 0U
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_STRIDE0_FMASK 0xffffU
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_SETM_STRIDE0(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_SET_STRIDE0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_GET_STRIDE0(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_FETCHDECODE_SETM_STRIDE0(s,val) ( (s)->sourcebufferattributes0 = ((s)->sourcebufferattributes0 & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_FETCHDECODE_SET_STRIDE0(s,val)  ( (s)->sourcebufferattributes0 = (((s)->sourcebufferattributes0 & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_STRIDE0(s) ((((s)->sourcebufferattributes0) ) & 0xffffUL)
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_STRIDE0_RESET 1279U

/* BITSPERPIXEL0: Number of bits per pixel in the source buffer. Must be 1, 2, 4, 8, 16, 18, 24 or 32. [Exception] FetchEco does not support 18 and 24. */
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_FSHIFT 16U
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_FMASK 0x3fU
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_SETM_BITSPERPIXEL0(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_SET_BITSPERPIXEL0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_GET_BITSPERPIXEL0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_FETCHDECODE_SETM_BITSPERPIXEL0(s,val) ( (s)->sourcebufferattributes0 = ((s)->sourcebufferattributes0 & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_FETCHDECODE_SET_BITSPERPIXEL0(s,val)  ( (s)->sourcebufferattributes0 = (((s)->sourcebufferattributes0 & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_BITSPERPIXEL0(s) ((((s)->sourcebufferattributes0) >> 16U) & 0x3fUL)
#define GFXREG_FETCHDECODE_SOURCEBUFFERATTRIBUTES0_BITSPERPIXEL0_RESET 32U

/* SOURCEBUFFERDIMENSION0: Source buffer dimension of layer 0.
   This information is used for tiling modes. */
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0 0x0000001cU
/* LINEWIDTH0: Width of the source buffer of the layer in pixels minus one. */
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_LINEWIDTH0_FSHIFT 0U
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_LINEWIDTH0_FMASK 0x3fffU
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_SETM_LINEWIDTH0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_SET_LINEWIDTH0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_GET_LINEWIDTH0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHDECODE_SETM_LINEWIDTH0(s,val) ( (s)->sourcebufferdimension0 = ((s)->sourcebufferdimension0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHDECODE_SET_LINEWIDTH0(s,val)  ( (s)->sourcebufferdimension0 = (((s)->sourcebufferdimension0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_LINEWIDTH0(s) ((((s)->sourcebufferdimension0) ) & 0x3fffUL)
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_LINEWIDTH0_RESET 0x3fffU

/* LINECOUNT0: Number of lines of the source buffer of the layer minus one. */
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_LINECOUNT0_FSHIFT 16U
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_LINECOUNT0_FMASK 0x3fffU
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_SETM_LINECOUNT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_SET_LINECOUNT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_GET_LINECOUNT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHDECODE_SETM_LINECOUNT0(s,val) ( (s)->sourcebufferdimension0 = ((s)->sourcebufferdimension0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHDECODE_SET_LINECOUNT0(s,val)  ( (s)->sourcebufferdimension0 = (((s)->sourcebufferdimension0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_LINECOUNT0(s) ((((s)->sourcebufferdimension0) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHDECODE_SOURCEBUFFERDIMENSION0_LINECOUNT0_RESET 0x3fffU

/* COLORCOMPONENTBITS0: Size of color components for RGB, YUV and index formats (layer 0).
   Size of Alpha and Index can be 0 to 8 bits, RGB and YUV 0 to 10 bits.         When size is 0, the component gets its value from ConstantColor register.         When RasterMode is DECODE, RGB/YUV components must not be larger than 8 bits.        */
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0 0x00000020U
/* COMPONENTBITSALPHA0: Alpha. */
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_FSHIFT 0U
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_FMASK 0xfU
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SETM_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SET_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_GET_COMPONENTBITSALPHA0(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHDECODE_SETM_COMPONENTBITSALPHA0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_FETCHDECODE_SET_COMPONENTBITSALPHA0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_COMPONENTBITSALPHA0(s) ((((s)->colorcomponentbits0) ) & 0xfUL)
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSALPHA0_RESET 8U

/* COMPONENTBITSBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_FSHIFT 8U
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_FMASK 0xfU
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SETM_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SET_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_GET_COMPONENTBITSBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_FETCHDECODE_SETM_COMPONENTBITSBLUE0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_FETCHDECODE_SET_COMPONENTBITSBLUE0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_COMPONENTBITSBLUE0(s) ((((s)->colorcomponentbits0) >> 8U) & 0xfUL)
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSBLUE0_RESET 8U

/* COMPONENTBITSGREEN0: Green and U (chroma). */
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_FSHIFT 16U
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_FMASK 0xfU
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SETM_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SET_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_GET_COMPONENTBITSGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHDECODE_SETM_COMPONENTBITSGREEN0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHDECODE_SET_COMPONENTBITSGREEN0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_COMPONENTBITSGREEN0(s) ((((s)->colorcomponentbits0) >> 16U) & 0xfUL)
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSGREEN0_RESET 8U

/* COMPONENTBITSRED0: Red, Y (luma) and palette index. */
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSRED0_FSHIFT 24U
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSRED0_FMASK 0xfU
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SETM_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SET_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_GET_COMPONENTBITSRED0(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHDECODE_SETM_COMPONENTBITSRED0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHDECODE_SET_COMPONENTBITSRED0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_COMPONENTBITSRED0(s) ((((s)->colorcomponentbits0) >> 24U) & 0xfUL)
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_COMPONENTBITSRED0_RESET 8U

/* ITUFORMAT0: When ComponentBitsRed/Green/Blue is set to 10 and this mode enabled (value 1), then input format is considered 8.2 instead of 10.0 bits (max color is 1020 instead of 1023). This is compliant to ITU 656 standard. */
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_ITUFORMAT0_FSHIFT 31U
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_ITUFORMAT0_FMASK 0x1U
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SETM_ITUFORMAT0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_SET_ITUFORMAT0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_GET_ITUFORMAT0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_ITUFORMAT0(s,val) ( (s)->colorcomponentbits0 = ((s)->colorcomponentbits0 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHDECODE_SET_ITUFORMAT0(s,val)  ( (s)->colorcomponentbits0 = (((s)->colorcomponentbits0 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_ITUFORMAT0(s) ((((s)->colorcomponentbits0) >> 31U) & 0x1UL)
#define GFXREG_FETCHDECODE_COLORCOMPONENTBITS0_ITUFORMAT0_RESET 0U

/* COLORCOMPONENTSHIFT0: Bit position of color components for RGB, YUV and index formats (layer 0).
   Any position allowed as long as the component lies completely inside the configured pixel size.         For greyscale format set R, G and B to same position.        */
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0 0x00000024U
/* COMPONENTSHIFTALPHA0: Alpha. */
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_FSHIFT 0U
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_FMASK 0x1fU
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTALPHA0(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_FETCHDECODE_SETM_COMPONENTSHIFTALPHA0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_FETCHDECODE_SET_COMPONENTSHIFTALPHA0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_COMPONENTSHIFTALPHA0(s) ((((s)->colorcomponentshift0) ) & 0x1fUL)
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTALPHA0_RESET 0U

/* COMPONENTSHIFTBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_FSHIFT 8U
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_FMASK 0x1fU
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHDECODE_SETM_COMPONENTSHIFTBLUE0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_FETCHDECODE_SET_COMPONENTSHIFTBLUE0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_COMPONENTSHIFTBLUE0(s) ((((s)->colorcomponentshift0) >> 8U) & 0x1fUL)
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTBLUE0_RESET 8U

/* COMPONENTSHIFTGREEN0: Green and U (chroma). */
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_FSHIFT 16U
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_FMASK 0x1fU
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_FETCHDECODE_SETM_COMPONENTSHIFTGREEN0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_FETCHDECODE_SET_COMPONENTSHIFTGREEN0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_COMPONENTSHIFTGREEN0(s) ((((s)->colorcomponentshift0) >> 16U) & 0x1fUL)
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTGREEN0_RESET 16U

/* COMPONENTSHIFTRED0: Red, Y (luma) and palette index. */
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_FSHIFT 24U
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_FMASK 0x1fU
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_SETM_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_SET_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_GET_COMPONENTSHIFTRED0(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_FETCHDECODE_SETM_COMPONENTSHIFTRED0(s,val) ( (s)->colorcomponentshift0 = ((s)->colorcomponentshift0 & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_FETCHDECODE_SET_COMPONENTSHIFTRED0(s,val)  ( (s)->colorcomponentshift0 = (((s)->colorcomponentshift0 & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_COMPONENTSHIFTRED0(s) ((((s)->colorcomponentshift0) >> 24U) & 0x1fUL)
#define GFXREG_FETCHDECODE_COLORCOMPONENTSHIFT0_COMPONENTSHIFTRED0_RESET 24U

/* LAYEROFFSET0: Position of layer 0 within the destination frame.
   Offset values are relative to the origin and given in signed integer notation.         They control the position of the layer's source buffer inside the final frame composition.         The layer may be positioned outside the frame at any side.        */
#define GFXREG_FETCHDECODE_LAYEROFFSET0 0x00000028U
/* LAYERXOFFSET0: Horizontal offset (X). */
#define GFXREG_FETCHDECODE_LAYEROFFSET0_LAYERXOFFSET0_FSHIFT 0U
#define GFXREG_FETCHDECODE_LAYEROFFSET0_LAYERXOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHDECODE_LAYEROFFSET0_SETM_LAYERXOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHDECODE_LAYEROFFSET0_SET_LAYERXOFFSET0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYEROFFSET0_GET_LAYERXOFFSET0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHDECODE_SETM_LAYERXOFFSET0(s,val) ( (s)->layeroffset0 = ((s)->layeroffset0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHDECODE_SET_LAYERXOFFSET0(s,val)  ( (s)->layeroffset0 = (((s)->layeroffset0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_LAYERXOFFSET0(s) ((((s)->layeroffset0) ) & 0x7fffUL)
#define GFXREG_FETCHDECODE_LAYEROFFSET0_LAYERXOFFSET0_RESET 0U

/* LAYERYOFFSET0: Vertical offset (Y). */
#define GFXREG_FETCHDECODE_LAYEROFFSET0_LAYERYOFFSET0_FSHIFT 16U
#define GFXREG_FETCHDECODE_LAYEROFFSET0_LAYERYOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHDECODE_LAYEROFFSET0_SETM_LAYERYOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHDECODE_LAYEROFFSET0_SET_LAYERYOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYEROFFSET0_GET_LAYERYOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHDECODE_SETM_LAYERYOFFSET0(s,val) ( (s)->layeroffset0 = ((s)->layeroffset0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHDECODE_SET_LAYERYOFFSET0(s,val)  ( (s)->layeroffset0 = (((s)->layeroffset0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_LAYERYOFFSET0(s) ((((s)->layeroffset0) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHDECODE_LAYEROFFSET0_LAYERYOFFSET0_RESET 0U

/* CLIPWINDOWOFFSET0: Clip window position for layer 0.
   Offset values are relative to the origin.        */
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0 0x0000002cU
/* CLIPWINDOWXOFFSET0: Horizontal position (X). */
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_FSHIFT 0U
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_SETM_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_SET_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_GET_CLIPWINDOWXOFFSET0(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_FETCHDECODE_SETM_CLIPWINDOWXOFFSET0(s,val) ( (s)->clipwindowoffset0 = ((s)->clipwindowoffset0 & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_FETCHDECODE_SET_CLIPWINDOWXOFFSET0(s,val)  ( (s)->clipwindowoffset0 = (((s)->clipwindowoffset0 & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CLIPWINDOWXOFFSET0(s) ((((s)->clipwindowoffset0) ) & 0x7fffUL)
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_CLIPWINDOWXOFFSET0_RESET 0U

/* CLIPWINDOWYOFFSET0: Vertical position (Y). */
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_FSHIFT 16U
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_FMASK 0x7fffU
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_SETM_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_SET_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_GET_CLIPWINDOWYOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHDECODE_SETM_CLIPWINDOWYOFFSET0(s,val) ( (s)->clipwindowoffset0 = ((s)->clipwindowoffset0 & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_FETCHDECODE_SET_CLIPWINDOWYOFFSET0(s,val)  ( (s)->clipwindowoffset0 = (((s)->clipwindowoffset0 & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CLIPWINDOWYOFFSET0(s) ((((s)->clipwindowoffset0) >> 16U) & 0x7fffUL)
#define GFXREG_FETCHDECODE_CLIPWINDOWOFFSET0_CLIPWINDOWYOFFSET0_RESET 0U

/* CLIPWINDOWDIMENSIONS0: Clip window size for layer 0.
   Values are given in number of pixels minus one.        */
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0 0x00000030U
/* CLIPWINDOWWIDTH0: Width. */
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_FSHIFT 0U
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_FMASK 0x3fffU
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_SETM_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_SET_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_GET_CLIPWINDOWWIDTH0(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHDECODE_SETM_CLIPWINDOWWIDTH0(s,val) ( (s)->clipwindowdimensions0 = ((s)->clipwindowdimensions0 & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHDECODE_SET_CLIPWINDOWWIDTH0(s,val)  ( (s)->clipwindowdimensions0 = (((s)->clipwindowdimensions0 & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CLIPWINDOWWIDTH0(s) ((((s)->clipwindowdimensions0) ) & 0x3fffUL)
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_CLIPWINDOWWIDTH0_RESET 0x0U

/* CLIPWINDOWHEIGHT0: Height. */
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_FSHIFT 16U
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_FMASK 0x3fffU
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_SETM_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_SET_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_GET_CLIPWINDOWHEIGHT0(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHDECODE_SETM_CLIPWINDOWHEIGHT0(s,val) ( (s)->clipwindowdimensions0 = ((s)->clipwindowdimensions0 & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHDECODE_SET_CLIPWINDOWHEIGHT0(s,val)  ( (s)->clipwindowdimensions0 = (((s)->clipwindowdimensions0 & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CLIPWINDOWHEIGHT0(s) ((((s)->clipwindowdimensions0) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHDECODE_CLIPWINDOWDIMENSIONS0_CLIPWINDOWHEIGHT0_RESET 0x0U

/* CONSTANTCOLOR0: Constant color for layer 0.
   Global constant color settings for RGB and YUV formats.         Values are used for tiling mode TILE_FILL_CONSTANT and if a color component bit width is set to 0.         Alpha is also used as constant alpha for RGB pre-multiply.         8-bit RGB and YUV values are up-scaled to internal 10-bit resolution by MSBit replication.        */
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0 0x00000034U
/* CONSTANTALPHA0: Alpha. */
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTALPHA0_FSHIFT 0U
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTALPHA0_FMASK 0xffU
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_SETM_CONSTANTALPHA0(val) (((CYGFX_U32)(val) & 0xffUL) )
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_SET_CONSTANTALPHA0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_GET_CONSTANTALPHA0(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHDECODE_SETM_CONSTANTALPHA0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xffUL) | (((CYGFX_U32)(val) ) & 0xffUL) )
#define GFXREG_FETCHDECODE_SET_CONSTANTALPHA0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CONSTANTALPHA0(s) ((((s)->constantcolor0) ) & 0xffUL)
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTALPHA0_RESET 0U

/* CONSTANTBLUE0: Blue and V (chroma). */
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTBLUE0_FSHIFT 8U
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTBLUE0_FMASK 0xffU
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_SETM_CONSTANTBLUE0(val) (((CYGFX_U32)(val) & 0xffUL) << 8U)
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_SET_CONSTANTBLUE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_GET_CONSTANTBLUE0(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHDECODE_SETM_CONSTANTBLUE0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff00UL) | (((CYGFX_U32)(val) << 8U) & 0xff00UL) )
#define GFXREG_FETCHDECODE_SET_CONSTANTBLUE0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CONSTANTBLUE0(s) ((((s)->constantcolor0) >> 8U) & 0xffUL)
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTBLUE0_RESET 0U

/* CONSTANTGREEN0: Green and U (chroma). */
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTGREEN0_FSHIFT 16U
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTGREEN0_FMASK 0xffU
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_SETM_CONSTANTGREEN0(val) (((CYGFX_U32)(val) & 0xffUL) << 16U)
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_SET_CONSTANTGREEN0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_GET_CONSTANTGREEN0(val) (((CYGFX_U32)(val) >> 16U) & 0xffUL)
#define GFXREG_FETCHDECODE_SETM_CONSTANTGREEN0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff0000UL) | (((CYGFX_U32)(val) << 16U) & 0xff0000UL) )
#define GFXREG_FETCHDECODE_SET_CONSTANTGREEN0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CONSTANTGREEN0(s) ((((s)->constantcolor0) >> 16U) & 0xffUL)
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTGREEN0_RESET 0U

/* CONSTANTRED0: Red and Y (luma). */
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTRED0_FSHIFT 24U
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTRED0_FMASK 0xffU
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_SETM_CONSTANTRED0(val) (((CYGFX_U32)(val) & 0xffUL) << 24U)
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_SET_CONSTANTRED0(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_GET_CONSTANTRED0(val) (((CYGFX_U32)(val) >> 24U) & 0xffUL)
#define GFXREG_FETCHDECODE_SETM_CONSTANTRED0(s,val) ( (s)->constantcolor0 = ((s)->constantcolor0 & ~0xff000000UL) | (((CYGFX_U32)(val) << 24U) & 0xff000000UL) )
#define GFXREG_FETCHDECODE_SET_CONSTANTRED0(s,val)  ( (s)->constantcolor0 = (((s)->constantcolor0 & ~0xff000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CONSTANTRED0(s) ((((s)->constantcolor0) >> 24U) & 0xffUL)
#define GFXREG_FETCHDECODE_CONSTANTCOLOR0_CONSTANTRED0_RESET 0U

/* LAYERPROPERTY0: Common properties of layer 0.
   When both source buffer and clip window are disabled, the layer is off and does not contribute any pixels to the output frame.         When the clip window is enabled, the layer contributes the clip window content to the composition of the output frame, otherwise the complete source buffer content.        */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0 0x00000038U
/* PALETTEENABLE0: Enables (value = 1) a color palette with 8 bits input and 24 bits output. Lower bits of the lookup index are read from memory (PaletteIdWidth0), upper bits are set to index of this layer. Palette output is extended by upper bits of index word read from memory (e.g. to store alpha together with index). Result is mapped to color channels according to ColorComponentBits/Shift settings. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PALETTEENABLE0_FSHIFT 0U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PALETTEENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_PALETTEENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_PALETTEENABLE0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_PALETTEENABLE0(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_PALETTEENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHDECODE_SET_PALETTEENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_PALETTEENABLE0(s) ((((s)->layerproperty0) ) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PALETTEENABLE0_RESET 0U

/* TILEMODE0: Select the tile mode for pixels outside the source buffer. Clip color (0,0,0,0) takes precedence if a pixel becomes subject to both tiling and clipping. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_TILEMODE0_FSHIFT 1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_TILEMODE0_FMASK 0x3U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_TILEMODE0(val) (((CYGFX_U32)(val) & 0x3UL) << 1U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_TILEMODE0(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_TILEMODE0(val) (((CYGFX_U32)(val) >> 1U) & 0x3UL)
#define GFXREG_FETCHDECODE_SETM_TILEMODE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x6UL) | (((CYGFX_U32)(val) << 1U) & 0x6UL) )
#define GFXREG_FETCHDECODE_SET_TILEMODE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x6UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_TILEMODE0(s) ((((s)->layerproperty0) >> 1U) & 0x3UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_TILEMODE0_TILE_FILL_ZERO 0U /* Use zero value */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_TILEMODE0_TILE_FILL_CONSTANT 1U /* Use constant color register value */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_TILEMODE0_TILE_PAD 2U /* Use closest pixel from source buffer. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_TILEMODE0_TILE_PAD_ZERO 3U /* Use closest pixel from source buffer but zero for alpha component. Must not be used for DECODE or YUV422 operations or when SourceBufferEnable is 0. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_TILEMODE0_RESET 0U

/* ALPHASRCENABLE0: Value 1 enables source alpha for computing the output alpha. When disabled source alpha is set to 1. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHASRCENABLE0_FSHIFT 3U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHASRCENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_ALPHASRCENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 3U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_ALPHASRCENABLE0(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_ALPHASRCENABLE0(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_ALPHASRCENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x8UL) | (((CYGFX_U32)(val) << 3U) & 0x8UL) )
#define GFXREG_FETCHDECODE_SET_ALPHASRCENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x8UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_ALPHASRCENABLE0(s) ((((s)->layerproperty0) >> 3U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHASRCENABLE0_RESET 1U

/* ALPHACONSTENABLE0: Value 1 enables constant alpha for computing the output alpha. When disabled constant alpha is set to 1. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHACONSTENABLE0_FSHIFT 4U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHACONSTENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_ALPHACONSTENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_ALPHACONSTENABLE0(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_ALPHACONSTENABLE0(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_ALPHACONSTENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHDECODE_SET_ALPHACONSTENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_ALPHACONSTENABLE0(s) ((((s)->layerproperty0) >> 4U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHACONSTENABLE0_RESET 0U

/* ALPHAMASKENABLE0: Value 1 enables mask alpha for computing the output alpha. When disabled mask alpha is set to 1. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHAMASKENABLE0_FSHIFT 5U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHAMASKENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_ALPHAMASKENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_ALPHAMASKENABLE0(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_ALPHAMASKENABLE0(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_ALPHAMASKENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHDECODE_SET_ALPHAMASKENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_ALPHAMASKENABLE0(s) ((((s)->layerproperty0) >> 5U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHAMASKENABLE0_RESET 0U

/* ALPHATRANSENABLE0: Value 1 enables transparent alpha for computing the output alpha. When disabled transparent alpha is set to 1. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHATRANSENABLE0_FSHIFT 6U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHATRANSENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_ALPHATRANSENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 6U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_ALPHATRANSENABLE0(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_ALPHATRANSENABLE0(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_ALPHATRANSENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x40UL) | (((CYGFX_U32)(val) << 6U) & 0x40UL) )
#define GFXREG_FETCHDECODE_SET_ALPHATRANSENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x40UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_ALPHATRANSENABLE0(s) ((((s)->layerproperty0) >> 6U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_ALPHATRANSENABLE0_RESET 0U

/* RGBALPHASRCENABLE0: Value 1 enables source alpha (stored together with color component in the source buffer) for RGB pre-multiply. When disabled source alpha is set to 1. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHASRCENABLE0_FSHIFT 7U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHASRCENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_RGBALPHASRCENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_RGBALPHASRCENABLE0(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_RGBALPHASRCENABLE0(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_RGBALPHASRCENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHDECODE_SET_RGBALPHASRCENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RGBALPHASRCENABLE0(s) ((((s)->layerproperty0) >> 7U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHASRCENABLE0_RESET 0U

/* RGBALPHACONSTENABLE0: Value 1 enables constant alpha (ConstAlpha fields) for RGB pre-multiply. When disabled constant alpha is set to 1. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHACONSTENABLE0_FSHIFT 8U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHACONSTENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_RGBALPHACONSTENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_RGBALPHACONSTENABLE0(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_RGBALPHACONSTENABLE0(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_RGBALPHACONSTENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_FETCHDECODE_SET_RGBALPHACONSTENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RGBALPHACONSTENABLE0(s) ((((s)->layerproperty0) >> 8U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHACONSTENABLE0_RESET 0U

/* RGBALPHAMASKENABLE0: Value 1 enables mask alpha (read by another Fetch unit from a separate alpha layer) for RGB pre-multiply. When disabled mask alpha is set to 1. Alpha mask input must be enabled for this field to have effect. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHAMASKENABLE0_FSHIFT 9U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHAMASKENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_RGBALPHAMASKENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 9U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_RGBALPHAMASKENABLE0(val) (((CYGFX_U32)(val) << 9U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_RGBALPHAMASKENABLE0(val) (((CYGFX_U32)(val) >> 9U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_RGBALPHAMASKENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x200UL) | (((CYGFX_U32)(val) << 9U) & 0x200UL) )
#define GFXREG_FETCHDECODE_SET_RGBALPHAMASKENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x200UL) | ((CYGFX_U32)(val) << 9U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RGBALPHAMASKENABLE0(s) ((((s)->layerproperty0) >> 9U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHAMASKENABLE0_RESET 0U

/* RGBALPHATRANSENABLE0: Value 1 enables transparent alpha (0 or 1 depending on RGB matching ConstantColor setting) for RGB pre-multiply. When disabled transparent alpha is set to 1. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHATRANSENABLE0_FSHIFT 10U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHATRANSENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_RGBALPHATRANSENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 10U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_RGBALPHATRANSENABLE0(val) (((CYGFX_U32)(val) << 10U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_RGBALPHATRANSENABLE0(val) (((CYGFX_U32)(val) >> 10U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_RGBALPHATRANSENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x400UL) | (((CYGFX_U32)(val) << 10U) & 0x400UL) )
#define GFXREG_FETCHDECODE_SET_RGBALPHATRANSENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x400UL) | ((CYGFX_U32)(val) << 10U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RGBALPHATRANSENABLE0(s) ((((s)->layerproperty0) >> 10U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_RGBALPHATRANSENABLE0_RESET 0U

/* PREMULCONSTRGB0: When enabled (value 1) the values given by ConstantRed/Green/Blue are used instead of alpha for source RGB pre-multiply. Settings RGBAlphaSrc/Const/Mask/TransEnable have no effect then. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PREMULCONSTRGB0_FSHIFT 11U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PREMULCONSTRGB0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_PREMULCONSTRGB0(val) (((CYGFX_U32)(val) & 0x1UL) << 11U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_PREMULCONSTRGB0(val) (((CYGFX_U32)(val) << 11U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_PREMULCONSTRGB0(val) (((CYGFX_U32)(val) >> 11U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_PREMULCONSTRGB0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x800UL) | (((CYGFX_U32)(val) << 11U) & 0x800UL) )
#define GFXREG_FETCHDECODE_SET_PREMULCONSTRGB0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x800UL) | ((CYGFX_U32)(val) << 11U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_PREMULCONSTRGB0(s) ((((s)->layerproperty0) >> 11U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PREMULCONSTRGB0_RESET 0x0U

/* YUVCONVERSIONMODE0: Enables different kind of YUV to RGB conversions. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_YUVCONVERSIONMODE0_FSHIFT 12U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_YUVCONVERSIONMODE0_FMASK 0x3U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_YUVCONVERSIONMODE0(val) (((CYGFX_U32)(val) & 0x3UL) << 12U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_YUVCONVERSIONMODE0(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_YUVCONVERSIONMODE0(val) (((CYGFX_U32)(val) >> 12U) & 0x3UL)
#define GFXREG_FETCHDECODE_SETM_YUVCONVERSIONMODE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x3000UL) | (((CYGFX_U32)(val) << 12U) & 0x3000UL) )
#define GFXREG_FETCHDECODE_SET_YUVCONVERSIONMODE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x3000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_YUVCONVERSIONMODE0(s) ((((s)->layerproperty0) >> 12U) & 0x3UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_YUVCONVERSIONMODE0_OFF 0x0U /* No conversion. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_YUVCONVERSIONMODE0_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_YUVCONVERSIONMODE0_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_YUVCONVERSIONMODE0_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_YUVCONVERSIONMODE0_RESET 0x0U

/* GAMMAREMOVEENABLE0: Value 1 enables the stage to remove a gamma from RGB components. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GAMMAREMOVEENABLE0_FSHIFT 14U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GAMMAREMOVEENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_GAMMAREMOVEENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 14U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_GAMMAREMOVEENABLE0(val) (((CYGFX_U32)(val) << 14U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_GAMMAREMOVEENABLE0(val) (((CYGFX_U32)(val) >> 14U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_GAMMAREMOVEENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x4000UL) | (((CYGFX_U32)(val) << 14U) & 0x4000UL) )
#define GFXREG_FETCHDECODE_SET_GAMMAREMOVEENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x4000UL) | ((CYGFX_U32)(val) << 14U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_GAMMAREMOVEENABLE0(s) ((((s)->layerproperty0) >> 14U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GAMMAREMOVEENABLE0_RESET 0U

/* PALETTEOFFSET0: Palette may contain multiple areas. This offset shows to the starting position of the currently used area. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PALETTEOFFSET0_FSHIFT 16U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PALETTEOFFSET0_FMASK 0x7ffU
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_PALETTEOFFSET0(val) (((CYGFX_U32)(val) & 0x7ffUL) << 16U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_PALETTEOFFSET0(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7ffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_PALETTEOFFSET0(val) (((CYGFX_U32)(val) >> 16U) & 0x7ffUL)
#define GFXREG_FETCHDECODE_SETM_PALETTEOFFSET0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x7ff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7ff0000UL) )
#define GFXREG_FETCHDECODE_SET_PALETTEOFFSET0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x7ff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7ffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_PALETTEOFFSET0(s) ((((s)->layerproperty0) >> 16U) & 0x7ffUL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PALETTEOFFSET0_RESET 0U

/* PALETTEIDWIDTH0: Number minus one of least significant bits of pixel data read from the source buffer that are used as index value for color palette look-up. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PALETTEIDWIDTH0_FSHIFT 27U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PALETTEIDWIDTH0_FMASK 0x7U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_PALETTEIDWIDTH0(val) (((CYGFX_U32)(val) & 0x7UL) << 27U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_PALETTEIDWIDTH0(val) (((CYGFX_U32)(val) << 27U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_PALETTEIDWIDTH0(val) (((CYGFX_U32)(val) >> 27U) & 0x7UL)
#define GFXREG_FETCHDECODE_SETM_PALETTEIDWIDTH0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x38000000UL) | (((CYGFX_U32)(val) << 27U) & 0x38000000UL) )
#define GFXREG_FETCHDECODE_SET_PALETTEIDWIDTH0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x38000000UL) | ((CYGFX_U32)(val) << 27U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_PALETTEIDWIDTH0(s) ((((s)->layerproperty0) >> 27U) & 0x7UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_PALETTEIDWIDTH0_RESET 0x7U

/* CLIPWINDOWENABLE0: Value 1 enables the clip window for this layer. Pixels outside the clip window get the clip color, pixels inside the source or tiling color. */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_CLIPWINDOWENABLE0_FSHIFT 30U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_CLIPWINDOWENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 30U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) << 30U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_CLIPWINDOWENABLE0(val) (((CYGFX_U32)(val) >> 30U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_CLIPWINDOWENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x40000000UL) | (((CYGFX_U32)(val) << 30U) & 0x40000000UL) )
#define GFXREG_FETCHDECODE_SET_CLIPWINDOWENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x40000000UL) | ((CYGFX_U32)(val) << 30U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CLIPWINDOWENABLE0(s) ((((s)->layerproperty0) >> 30U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_CLIPWINDOWENABLE0_RESET 0U

/* SOURCEBUFFERENABLE0: Value 1 enables the source buffer for this layer. When disabled the tiling color is used only (TileMode TILE_PAD not allowed). */
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SOURCEBUFFERENABLE0_FSHIFT 31U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SOURCEBUFFERENABLE0_FMASK 0x1U
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SETM_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SET_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_GET_SOURCEBUFFERENABLE0(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_SOURCEBUFFERENABLE0(s,val) ( (s)->layerproperty0 = ((s)->layerproperty0 & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHDECODE_SET_SOURCEBUFFERENABLE0(s,val)  ( (s)->layerproperty0 = (((s)->layerproperty0 & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_SOURCEBUFFERENABLE0(s) ((((s)->layerproperty0) >> 31U) & 0x1UL)
#define GFXREG_FETCHDECODE_LAYERPROPERTY0_SOURCEBUFFERENABLE0_RESET 1U

/* FRAMEDIMENSIONS: Output frame dimension. */
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS 0x0000003cU
/* FRAMEWIDTH: Frame width minus one. */
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_FRAMEWIDTH_FSHIFT 0U
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_FRAMEWIDTH_FMASK 0x3fffU
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_SETM_FRAMEWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_SET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_GET_FRAMEWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_FETCHDECODE_SETM_FRAMEWIDTH(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_FETCHDECODE_SET_FRAMEWIDTH(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_FRAMEWIDTH(s) ((((s)->framedimensions) ) & 0x3fffUL)
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_FRAMEWIDTH_RESET 319U

/* FRAMEHEIGHT: Frame height minus one. */
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_FRAMEHEIGHT_FSHIFT 16U
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_FRAMEHEIGHT_FMASK 0x3fffU
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_SETM_FRAMEHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_SET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_GET_FRAMEHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHDECODE_SETM_FRAMEHEIGHT(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_FETCHDECODE_SET_FRAMEHEIGHT(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_FRAMEHEIGHT(s) ((((s)->framedimensions) >> 16U) & 0x3fffUL)
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_FRAMEHEIGHT_RESET 239U

/* EMPTYFRAME: When enabled output frame is empty. FrameWidth/Height settings have no effect then. Can be used to load shadows or to generate synchronization signals only (frame/sequence complete). If enabled, InputSelect must be set to INACTIVE. */
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_EMPTYFRAME_FSHIFT 31U
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_EMPTYFRAME_FMASK 0x1U
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_SETM_EMPTYFRAME(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_SET_EMPTYFRAME(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_GET_EMPTYFRAME(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_EMPTYFRAME(s,val) ( (s)->framedimensions = ((s)->framedimensions & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_FETCHDECODE_SET_EMPTYFRAME(s,val)  ( (s)->framedimensions = (((s)->framedimensions & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_EMPTYFRAME(s) ((((s)->framedimensions) >> 31U) & 0x1UL)
#define GFXREG_FETCHDECODE_FRAMEDIMENSIONS_EMPTYFRAME_RESET 0U

/* FRAMERESAMPLING: Resampling options for output frame. */
#define GFXREG_FETCHDECODE_FRAMERESAMPLING 0x00000040U
/* STARTX: X coordinate of first sample point relative to origin. */
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTX_FSHIFT 0U
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTX_FMASK 0x3fU
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SETM_STARTX(val) (((CYGFX_U32)(val) & 0x3fUL) )
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SET_STARTX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_GET_STARTX(val) (((CYGFX_U32)(val) ) & 0x3fUL)
#define GFXREG_FETCHDECODE_SETM_STARTX(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x3fUL) | (((CYGFX_U32)(val) ) & 0x3fUL) )
#define GFXREG_FETCHDECODE_SET_STARTX(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x3fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_STARTX(s) ((((s)->frameresampling) ) & 0x3fUL)
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTX_IWIDTH 4
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTX_FWIDTH 2
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTX_RESET 0U

/* STARTY: Y coordinate of first sample point relative to origin. */
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTY_FSHIFT 6U
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTY_FMASK 0x3fU
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SETM_STARTY(val) (((CYGFX_U32)(val) & 0x3fUL) << 6U)
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SET_STARTY(val) (((CYGFX_U32)(val) << 6U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_GET_STARTY(val) (((CYGFX_U32)(val) >> 6U) & 0x3fUL)
#define GFXREG_FETCHDECODE_SETM_STARTY(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0xfc0UL) | (((CYGFX_U32)(val) << 6U) & 0xfc0UL) )
#define GFXREG_FETCHDECODE_SET_STARTY(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0xfc0UL) | ((CYGFX_U32)(val) << 6U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_STARTY(s) ((((s)->frameresampling) >> 6U) & 0x3fUL)
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTY_IWIDTH 4
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTY_FWIDTH 2
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_STARTY_RESET 0U

/* DELTAX: Increment of X coordinate for horizontal step in destination frame. */
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAX_FSHIFT 12U
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAX_FMASK 0x3fU
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SETM_DELTAX(val) (((CYGFX_U32)(val) & 0x3fUL) << 12U)
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SET_DELTAX(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_GET_DELTAX(val) (((CYGFX_U32)(val) >> 12U) & 0x3fUL)
#define GFXREG_FETCHDECODE_SETM_DELTAX(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x3f000UL) | (((CYGFX_U32)(val) << 12U) & 0x3f000UL) )
#define GFXREG_FETCHDECODE_SET_DELTAX(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x3f000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_DELTAX(s) ((((s)->frameresampling) >> 12U) & 0x3fUL)
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAX_IWIDTH 4
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAX_FWIDTH 2
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAX_RESET 0x4U

/* DELTAY: Increment of Y coordinate for vertical step in destination frame. */
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAY_FSHIFT 18U
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAY_FMASK 0x3fU
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SETM_DELTAY(val) (((CYGFX_U32)(val) & 0x3fUL) << 18U)
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SET_DELTAY(val) (((CYGFX_U32)(val) << 18U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_GET_DELTAY(val) (((CYGFX_U32)(val) >> 18U) & 0x3fUL)
#define GFXREG_FETCHDECODE_SETM_DELTAY(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0xfc0000UL) | (((CYGFX_U32)(val) << 18U) & 0xfc0000UL) )
#define GFXREG_FETCHDECODE_SET_DELTAY(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0xfc0000UL) | ((CYGFX_U32)(val) << 18U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_DELTAY(s) ((((s)->frameresampling) >> 18U) & 0x3fUL)
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAY_IWIDTH 4
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAY_FWIDTH 2
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_DELTAY_RESET 0x4U

/* SWAPDIRECTION: Swaps X and Y directions for re-sampling. When enabled (= 1) DeltaY is applied for horizontal and DeltaX for vertical step on destination frame. */
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SWAPDIRECTION_FSHIFT 24U
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SWAPDIRECTION_FMASK 0x1U
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SETM_SWAPDIRECTION(val) (((CYGFX_U32)(val) & 0x1UL) << 24U)
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SET_SWAPDIRECTION(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_GET_SWAPDIRECTION(val) (((CYGFX_U32)(val) >> 24U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_SWAPDIRECTION(s,val) ( (s)->frameresampling = ((s)->frameresampling & ~0x1000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1000000UL) )
#define GFXREG_FETCHDECODE_SET_SWAPDIRECTION(s,val)  ( (s)->frameresampling = (((s)->frameresampling & ~0x1000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_SWAPDIRECTION(s) ((((s)->frameresampling) >> 24U) & 0x1UL)
#define GFXREG_FETCHDECODE_FRAMERESAMPLING_SWAPDIRECTION_RESET 0U

/* DECODECONTROL: Control options for RLAD decompression. */
#define GFXREG_FETCHDECODE_DECODECONTROL 0x00000044U
/* COMPRESSIONMODE: Algorithm that the encoder used for compression. */
#define GFXREG_FETCHDECODE_DECODECONTROL_COMPRESSIONMODE_FSHIFT 0U
#define GFXREG_FETCHDECODE_DECODECONTROL_COMPRESSIONMODE_FMASK 0x3U
#define GFXREG_FETCHDECODE_DECODECONTROL_SETM_COMPRESSIONMODE(val) (((CYGFX_U32)(val) & 0x3UL) )
#define GFXREG_FETCHDECODE_DECODECONTROL_SET_COMPRESSIONMODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_DECODECONTROL_GET_COMPRESSIONMODE(val) (((CYGFX_U32)(val) ) & 0x3UL)
#define GFXREG_FETCHDECODE_SETM_COMPRESSIONMODE(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0x3UL) | (((CYGFX_U32)(val) ) & 0x3UL) )
#define GFXREG_FETCHDECODE_SET_COMPRESSIONMODE(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0x3UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_COMPRESSIONMODE(s) ((((s)->decodecontrol) ) & 0x3UL)
#define GFXREG_FETCHDECODE_DECODECONTROL_COMPRESSIONMODE_RLAD 0U /* Run-Length Adaptive Dithering (lossy compression). */
#define GFXREG_FETCHDECODE_DECODECONTROL_COMPRESSIONMODE_RLAD_UNIFORM 1U /* Run-Length Adaptive Dithering (lossy compression; uniform package size). */
#define GFXREG_FETCHDECODE_DECODECONTROL_COMPRESSIONMODE_RLA 2U /* Run-Length Adaptive (lossless compression). */
#define GFXREG_FETCHDECODE_DECODECONTROL_COMPRESSIONMODE_RL 3U /* Standard Run-Length. In contrary to other modes is in big endian format. */
#define GFXREG_FETCHDECODE_DECODECONTROL_COMPRESSIONMODE_RESET 1U

/* RLADCOMPBITSRED: Maximum for average number of bits per compressed pixel for Red or Y (luma) channel. This must match the corresponding encoder setting. */
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSRED_FSHIFT 16U
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSRED_FMASK 0xfU
#define GFXREG_FETCHDECODE_DECODECONTROL_SETM_RLADCOMPBITSRED(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_FETCHDECODE_DECODECONTROL_SET_RLADCOMPBITSRED(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_DECODECONTROL_GET_RLADCOMPBITSRED(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_FETCHDECODE_SETM_RLADCOMPBITSRED(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_FETCHDECODE_SET_RLADCOMPBITSRED(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RLADCOMPBITSRED(s) ((((s)->decodecontrol) >> 16U) & 0xfUL)
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSRED_RESET 8U

/* RLADCOMPBITSGREEN: Maximum for average number of bits per compressed pixel for Green or U (chroma) channel. This must match the corresponding encoder setting. */
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSGREEN_FSHIFT 20U
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSGREEN_FMASK 0xfU
#define GFXREG_FETCHDECODE_DECODECONTROL_SETM_RLADCOMPBITSGREEN(val) (((CYGFX_U32)(val) & 0xfUL) << 20U)
#define GFXREG_FETCHDECODE_DECODECONTROL_SET_RLADCOMPBITSGREEN(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_DECODECONTROL_GET_RLADCOMPBITSGREEN(val) (((CYGFX_U32)(val) >> 20U) & 0xfUL)
#define GFXREG_FETCHDECODE_SETM_RLADCOMPBITSGREEN(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0xf00000UL) | (((CYGFX_U32)(val) << 20U) & 0xf00000UL) )
#define GFXREG_FETCHDECODE_SET_RLADCOMPBITSGREEN(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0xf00000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RLADCOMPBITSGREEN(s) ((((s)->decodecontrol) >> 20U) & 0xfUL)
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSGREEN_RESET 8U

/* RLADCOMPBITSBLUE: Maximum for average number of bits per compressed pixel for Blue or V (chroma) channel. This must match the corresponding encoder setting. */
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSBLUE_FSHIFT 24U
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSBLUE_FMASK 0xfU
#define GFXREG_FETCHDECODE_DECODECONTROL_SETM_RLADCOMPBITSBLUE(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_FETCHDECODE_DECODECONTROL_SET_RLADCOMPBITSBLUE(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_DECODECONTROL_GET_RLADCOMPBITSBLUE(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_FETCHDECODE_SETM_RLADCOMPBITSBLUE(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_FETCHDECODE_SET_RLADCOMPBITSBLUE(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RLADCOMPBITSBLUE(s) ((((s)->decodecontrol) >> 24U) & 0xfUL)
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSBLUE_RESET 8U

/* RLADCOMPBITSALPHA: Maximum for average number of bits per compressed pixel for Alpha channel. This must match the corresponding encoder setting. */
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSALPHA_FSHIFT 28U
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSALPHA_FMASK 0xfU
#define GFXREG_FETCHDECODE_DECODECONTROL_SETM_RLADCOMPBITSALPHA(val) (((CYGFX_U32)(val) & 0xfUL) << 28U)
#define GFXREG_FETCHDECODE_DECODECONTROL_SET_RLADCOMPBITSALPHA(val) (((CYGFX_U32)(val) << 28U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_DECODECONTROL_GET_RLADCOMPBITSALPHA(val) (((CYGFX_U32)(val) >> 28U) & 0xfUL)
#define GFXREG_FETCHDECODE_SETM_RLADCOMPBITSALPHA(s,val) ( (s)->decodecontrol = ((s)->decodecontrol & ~0xf0000000UL) | (((CYGFX_U32)(val) << 28U) & 0xf0000000UL) )
#define GFXREG_FETCHDECODE_SET_RLADCOMPBITSALPHA(s,val)  ( (s)->decodecontrol = (((s)->decodecontrol & ~0xf0000000UL) | ((CYGFX_U32)(val) << 28U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RLADCOMPBITSALPHA(s) ((((s)->decodecontrol) >> 28U) & 0xfUL)
#define GFXREG_FETCHDECODE_DECODECONTROL_RLADCOMPBITSALPHA_RESET 8U

/* SOURCEBUFFERLENGTH: Source buffer length for compressed data. */
#define GFXREG_FETCHDECODE_SOURCEBUFFERLENGTH 0x00000048U
/* RLEWORDS: Number of 32-bit words minus one that are required to decode the run length encoded source buffer. */
#define GFXREG_FETCHDECODE_SOURCEBUFFERLENGTH_RLEWORDS_FSHIFT 0U
#define GFXREG_FETCHDECODE_SOURCEBUFFERLENGTH_RLEWORDS_FMASK 0x1fffffffU
#define GFXREG_FETCHDECODE_SOURCEBUFFERLENGTH_SETM_RLEWORDS(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_FETCHDECODE_SOURCEBUFFERLENGTH_SET_RLEWORDS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_SOURCEBUFFERLENGTH_GET_RLEWORDS(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_FETCHDECODE_SETM_RLEWORDS(s,val) ( (s)->sourcebufferlength = ((s)->sourcebufferlength & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_FETCHDECODE_SET_RLEWORDS(s,val)  ( (s)->sourcebufferlength = (((s)->sourcebufferlength & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RLEWORDS(s) ((((s)->sourcebufferlength) ) & 0x1fffffffUL)
#define GFXREG_FETCHDECODE_SOURCEBUFFERLENGTH_RLEWORDS_RESET 0U

/* CONTROL: Shared common control settings for all layers. */
#define GFXREG_FETCHDECODE_CONTROL 0x0000004cU
/* RASTERMODE: Selects a method how to generate source buffer sample points. */
#define GFXREG_FETCHDECODE_CONTROL_RASTERMODE_FSHIFT 0U
#define GFXREG_FETCHDECODE_CONTROL_RASTERMODE_FMASK 0x7U
#define GFXREG_FETCHDECODE_CONTROL_SETM_RASTERMODE(val) (((CYGFX_U32)(val) & 0x7UL) )
#define GFXREG_FETCHDECODE_CONTROL_SET_RASTERMODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CONTROL_GET_RASTERMODE(val) (((CYGFX_U32)(val) ) & 0x7UL)
#define GFXREG_FETCHDECODE_SETM_RASTERMODE(s,val) ( (s)->control = ((s)->control & ~0x7UL) | (((CYGFX_U32)(val) ) & 0x7UL) )
#define GFXREG_FETCHDECODE_SET_RASTERMODE(s,val)  ( (s)->control = (((s)->control & ~0x7UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RASTERMODE(s) ((((s)->control) ) & 0x7UL)
#define GFXREG_FETCHDECODE_CONTROL_RASTERMODE_NORMAL 0x0U /* [IBO only, for LBO use PERSPECTIVE with corresponding Geometry] First sample at StartX/Y relative to origin. Hor/ver increments using DeltaX/Y and DeltaSwap setup. */
#define GFXREG_FETCHDECODE_CONTROL_RASTERMODE_DECODE 0x1U /* [FetchDecode/FetchBlit only] Source buffer is an encoded bit stream. First sample at origin (0,0). Hor/ver increments = (1,0)/(0,1). */
#define GFXREG_FETCHDECODE_CONTROL_RASTERMODE_ARBITRARY 0x2U /* [FetchBlit/Warp only] Arbitrary warping (filter is active). Coordinates are read from frame input port. InputSelect must be set to COORDINATE. ArbStartX/Y and ArbDeltaXX/XY/YX/YY must be setup. */
#define GFXREG_FETCHDECODE_CONTROL_RASTERMODE_PERSPECTIVE 0x3U /* [FetchBlit only] Affine/Perspective warping (filter is active). First sample at PerspStartX/Y/W. Hor/ver increments using PerspDeltaXX/XY/YX/YY/WX/WY. Homogeneous coordinates. See also field Geometry to reduce coordinate amount. */
#define GFXREG_FETCHDECODE_CONTROL_RASTERMODE_YUV422 0x4U /* [FetchBlit/Decode only] Source buffer is packed YUV 422. First sample at origin (0,0). Hor/ver increments = (1,0)/(0,1). All correllated window widths and horizontal offsets must be even. */
#define GFXREG_FETCHDECODE_CONTROL_RASTERMODE_RESET 0x0U

/* INPUTSELECT: Selects function for the frame input port. */
#define GFXREG_FETCHDECODE_CONTROL_INPUTSELECT_FSHIFT 3U
#define GFXREG_FETCHDECODE_CONTROL_INPUTSELECT_FMASK 0x3U
#define GFXREG_FETCHDECODE_CONTROL_SETM_INPUTSELECT(val) (((CYGFX_U32)(val) & 0x3UL) << 3U)
#define GFXREG_FETCHDECODE_CONTROL_SET_INPUTSELECT(val) (((CYGFX_U32)(val) << 3U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CONTROL_GET_INPUTSELECT(val) (((CYGFX_U32)(val) >> 3U) & 0x3UL)
#define GFXREG_FETCHDECODE_SETM_INPUTSELECT(s,val) ( (s)->control = ((s)->control & ~0x18UL) | (((CYGFX_U32)(val) << 3U) & 0x18UL) )
#define GFXREG_FETCHDECODE_SET_INPUTSELECT(s,val)  ( (s)->control = (((s)->control & ~0x18UL) | ((CYGFX_U32)(val) << 3U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_INPUTSELECT(s) ((((s)->control) >> 3U) & 0x3UL)
#define GFXREG_FETCHDECODE_CONTROL_INPUTSELECT_INACTIVE 0x0U /* Not used. */
#define GFXREG_FETCHDECODE_CONTROL_INPUTSELECT_COMPPACK 0x1U /* Used for component packing (e.g. UV or source alpha buffer). */
#define GFXREG_FETCHDECODE_CONTROL_INPUTSELECT_ALPHAMASK 0x2U /* Used for RGB and alpha pre-multiply stage (mask alpha buffer). */
#define GFXREG_FETCHDECODE_CONTROL_INPUTSELECT_COORDINATE 0x3U /* Used for arbitrary warping (coordinate buffer). */
#define GFXREG_FETCHDECODE_CONTROL_INPUTSELECT_RESET 0x0U

/* YUV422UPSAMPLINGMODE: Selects a method for horizontal up-sampling of YUV 422/420 input data. */
#define GFXREG_FETCHDECODE_CONTROL_YUV422UPSAMPLINGMODE_FSHIFT 5U
#define GFXREG_FETCHDECODE_CONTROL_YUV422UPSAMPLINGMODE_FMASK 0x1U
#define GFXREG_FETCHDECODE_CONTROL_SETM_YUV422UPSAMPLINGMODE(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_FETCHDECODE_CONTROL_SET_YUV422UPSAMPLINGMODE(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CONTROL_GET_YUV422UPSAMPLINGMODE(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_YUV422UPSAMPLINGMODE(s,val) ( (s)->control = ((s)->control & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_FETCHDECODE_SET_YUV422UPSAMPLINGMODE(s,val)  ( (s)->control = (((s)->control & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_YUV422UPSAMPLINGMODE(s) ((((s)->control) >> 5U) & 0x1UL)
#define GFXREG_FETCHDECODE_CONTROL_YUV422UPSAMPLINGMODE_REPLICATE 0x0U /* Replicate mode for interspersed samples (UV samples between Y samples). */
#define GFXREG_FETCHDECODE_CONTROL_YUV422UPSAMPLINGMODE_INTERPOLATE 0x1U /* Interpolate mode for coaligned samples (UV samples at Y sample positions). */
#define GFXREG_FETCHDECODE_CONTROL_YUV422UPSAMPLINGMODE_RESET 0x0U

/* RAWPIXEL: Raw pixel mode. If enabled (value = 1), the ComponentBits/Shift settings are replaced for all layers by fixed values that allow passing the pixel data read from memory unchanged to subsequent units (e.g. for reading coordinate layers). Multiply stages and transparent color are deactivated. Skip and Tile pixels are not affected by this setting. */
#define GFXREG_FETCHDECODE_CONTROL_RAWPIXEL_FSHIFT 7U
#define GFXREG_FETCHDECODE_CONTROL_RAWPIXEL_FMASK 0x1U
#define GFXREG_FETCHDECODE_CONTROL_SETM_RAWPIXEL(val) (((CYGFX_U32)(val) & 0x1UL) << 7U)
#define GFXREG_FETCHDECODE_CONTROL_SET_RAWPIXEL(val) (((CYGFX_U32)(val) << 7U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CONTROL_GET_RAWPIXEL(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_RAWPIXEL(s,val) ( (s)->control = ((s)->control & ~0x80UL) | (((CYGFX_U32)(val) << 7U) & 0x80UL) )
#define GFXREG_FETCHDECODE_SET_RAWPIXEL(s,val)  ( (s)->control = (((s)->control & ~0x80UL) | ((CYGFX_U32)(val) << 7U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_RAWPIXEL(s) ((((s)->control) >> 7U) & 0x1UL)
#define GFXREG_FETCHDECODE_CONTROL_RAWPIXEL_RESET 0U

/* CLIPCOLOR: Selects which color to take for pixels that do not lie inside the clip window of any layer. */
#define GFXREG_FETCHDECODE_CONTROL_CLIPCOLOR_FSHIFT 16U
#define GFXREG_FETCHDECODE_CONTROL_CLIPCOLOR_FMASK 0x1U
#define GFXREG_FETCHDECODE_CONTROL_SETM_CLIPCOLOR(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_FETCHDECODE_CONTROL_SET_CLIPCOLOR(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_CONTROL_GET_CLIPCOLOR(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_CLIPCOLOR(s,val) ( (s)->control = ((s)->control & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_FETCHDECODE_SET_CLIPCOLOR(s,val)  ( (s)->control = (((s)->control & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_CLIPCOLOR(s) ((((s)->control) >> 16U) & 0x1UL)
#define GFXREG_FETCHDECODE_CONTROL_CLIPCOLOR_NULL 0x0U /* Null color. */
#define GFXREG_FETCHDECODE_CONTROL_CLIPCOLOR_LAYER 0x1U /* Color of layer number given by ClipLayer (or layer 0 when Fetch unit has one layer only). The color is then the layer's source or tiling color. */
#define GFXREG_FETCHDECODE_CONTROL_CLIPCOLOR_RESET 0x1U

/* CONTROLTRIGGER: Shadow load trigger. */
#define GFXREG_FETCHDECODE_CONTROLTRIGGER 0x00000050U
/* SHDTOKGEN: Writing a 1 to this will load shadow registers into the active configuration with the next start of frame and send a shadow load token to subsequent units. */
#define GFXREG_FETCHDECODE_CONTROLTRIGGER_SHDTOKGEN_FSHIFT 0U
#define GFXREG_FETCHDECODE_CONTROLTRIGGER_SHDTOKGEN_FMASK 0x1U
#define GFXREG_FETCHDECODE_CONTROLTRIGGER_SETM_SHDTOKGEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHDECODE_CONTROLTRIGGER_SET_SHDTOKGEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_SETM_SHDTOKGEN(s,val) ( (s)->controltrigger = ((s)->controltrigger & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHDECODE_SET_SHDTOKGEN(s,val)  ( (s)->controltrigger = (((s)->controltrigger & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_CONTROLTRIGGER_SHDTOKGEN_RESET (none)U

/* START: Frame start trigger. */
#define GFXREG_FETCHDECODE_START 0x00000054U
/* START: Writing a 1 to this field will start generating one frame (for debugging purposes only). */
#define GFXREG_FETCHDECODE_START_START_FSHIFT 0U
#define GFXREG_FETCHDECODE_START_START_FMASK 0x1U
#define GFXREG_FETCHDECODE_START_SETM_START(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHDECODE_START_SET_START(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_SETM_START(s,val) ( (s)->start = ((s)->start & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHDECODE_SET_START(s,val)  ( (s)->start = (((s)->start & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_START_START_RESET (none)U

/* FETCHTYPE: Fetch unit type. */
#define GFXREG_FETCHDECODE_FETCHTYPE 0x00000058U
/* FETCHTYPE: This field can be used to determine what kind of fetch unit this is. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_FSHIFT 0U
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_FMASK 0xfU
#define GFXREG_FETCHDECODE_FETCHTYPE_GET_FETCHTYPE(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_FETCHDECODE_GET_FETCHTYPE(s) ((((s)->fetchtype) ) & 0xfUL)
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_DECODE 0U /* Fetch unit with RL and RLAD decoder. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_LAYER 1U /* Fetch unit with fractional plane (8 layers). */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_WARP 2U /* Fetch unit with arbitrary warping and fractional plane (8 layers). */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_ECO 3U /* Fetch unit with minimum feature set for alpha, chroma and coordinate planes. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_PERSP 4U /* Fetch unit with affine, perspective and arbitrary warping. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_ROT 5U /* Fetch unit with affine and arbitrary warping. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_DECODEL 6U /* Fetch unit with RL and RLAD decoder, reduced feature set. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_LAYERL 7U /* Fetch unit with fractional plane (8 layers), reduced feature set. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_ROTL 8U /* Fetch unit with affine and arbitrary warping, reduced feature set. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_ECOL 9U /* Fetch unit with reduced minimum feature set for alpha, chroma and coordinate planes. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_BLIT 10U /* Fetch unit with DECODE and PERSP capabilities. */
#define GFXREG_FETCHDECODE_FETCHTYPE_FETCHTYPE_RESET (none)U

/* DECODERSTATUS: Status information of the RLAD decoder.
   Both conditions typically indicate a corrupt RLAD bit stream in memory.         In any case the decoder will read exactly the number of words given by RLEWords and generate a complete output frame in order to avoid system hang-up or access to memory locations outside the reserved buffer space.        */
#define GFXREG_FETCHDECODE_DECODERSTATUS 0x0000005cU
/* BUFFERTOOSMALL: The buffer size given by RLEWords is too small. No complete output frame could be decoded. */
#define GFXREG_FETCHDECODE_DECODERSTATUS_BUFFERTOOSMALL_FSHIFT 0U
#define GFXREG_FETCHDECODE_DECODERSTATUS_BUFFERTOOSMALL_FMASK 0x1U
#define GFXREG_FETCHDECODE_DECODERSTATUS_SETM_BUFFERTOOSMALL(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHDECODE_DECODERSTATUS_SET_BUFFERTOOSMALL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_DECODERSTATUS_GET_BUFFERTOOSMALL(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_BUFFERTOOSMALL(s,val) ( (s)->decoderstatus = ((s)->decoderstatus & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHDECODE_SET_BUFFERTOOSMALL(s,val)  ( (s)->decoderstatus = (((s)->decoderstatus & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_BUFFERTOOSMALL(s) ((((s)->decoderstatus) ) & 0x1UL)
#define GFXREG_FETCHDECODE_DECODERSTATUS_BUFFERTOOSMALL_RESET 0U

/* BUFFERTOOLARGE: The buffer size given by RLEWords is too large. A complete output frame could be decoded, but more data was read than necessary. */
#define GFXREG_FETCHDECODE_DECODERSTATUS_BUFFERTOOLARGE_FSHIFT 1U
#define GFXREG_FETCHDECODE_DECODERSTATUS_BUFFERTOOLARGE_FMASK 0x1U
#define GFXREG_FETCHDECODE_DECODERSTATUS_SETM_BUFFERTOOLARGE(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_FETCHDECODE_DECODERSTATUS_SET_BUFFERTOOLARGE(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_DECODERSTATUS_GET_BUFFERTOOLARGE(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_BUFFERTOOLARGE(s,val) ( (s)->decoderstatus = ((s)->decoderstatus & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_FETCHDECODE_SET_BUFFERTOOLARGE(s,val)  ( (s)->decoderstatus = (((s)->decoderstatus & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_BUFFERTOOLARGE(s) ((((s)->decoderstatus) >> 1U) & 0x1UL)
#define GFXREG_FETCHDECODE_DECODERSTATUS_BUFFERTOOLARGE_RESET 0U

/* READADDRESS0: Ring buffer synchronization for layer 0. */
#define GFXREG_FETCHDECODE_READADDRESS0 0x00000060U
/* READADDRESS0: Last burst address that was read from the layer's source buffer. */
#define GFXREG_FETCHDECODE_READADDRESS0_READADDRESS0_FSHIFT 0U
#define GFXREG_FETCHDECODE_READADDRESS0_READADDRESS0_FMASK 0xffffffffU
#define GFXREG_FETCHDECODE_READADDRESS0_SETM_READADDRESS0(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_FETCHDECODE_READADDRESS0_SET_READADDRESS0(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_READADDRESS0_GET_READADDRESS0(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_FETCHDECODE_SETM_READADDRESS0(s,val) ( (s)->readaddress0 = ((s)->readaddress0 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_FETCHDECODE_SET_READADDRESS0(s,val)  ( (s)->readaddress0 = (((s)->readaddress0 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_READADDRESS0(s) ((((s)->readaddress0) ) & 0xffffffffUL)
#define GFXREG_FETCHDECODE_READADDRESS0_READADDRESS0_RESET 0U

/* BURSTBUFFERPROPERTIES: Burst buffer properties. */
#define GFXREG_FETCHDECODE_BURSTBUFFERPROPERTIES 0x00000064U
/* MANAGEDBURSTBUFFERS: Maximum number of burst buffers that can be administrated in the AXI interface. */
#define GFXREG_FETCHDECODE_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_FSHIFT 0U
#define GFXREG_FETCHDECODE_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_FMASK 0xffU
#define GFXREG_FETCHDECODE_BURSTBUFFERPROPERTIES_GET_MANAGEDBURSTBUFFERS(val) (((CYGFX_U32)(val) ) & 0xffUL)
#define GFXREG_FETCHDECODE_GET_MANAGEDBURSTBUFFERS(s) ((((s)->burstbufferproperties) ) & 0xffUL)
#define GFXREG_FETCHDECODE_BURSTBUFFERPROPERTIES_MANAGEDBURSTBUFFERS_RESET (none)U

/* BURSTLENGTHFORMAXBUFFERS: Maximum Burst Length that can be used when ManagedBurstBuffers burst buffers are used. */
#define GFXREG_FETCHDECODE_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_FSHIFT 8U
#define GFXREG_FETCHDECODE_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_FMASK 0x1fU
#define GFXREG_FETCHDECODE_BURSTBUFFERPROPERTIES_GET_BURSTLENGTHFORMAXBUFFERS(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_FETCHDECODE_GET_BURSTLENGTHFORMAXBUFFERS(s) ((((s)->burstbufferproperties) >> 8U) & 0x1fUL)
#define GFXREG_FETCHDECODE_BURSTBUFFERPROPERTIES_BURSTLENGTHFORMAXBUFFERS_RESET (none)U

/* STATUS: Status information. */
#define GFXREG_FETCHDECODE_STATUS 0x00000068U
/* WRITETIMEOUT: Timeout detected when writing to the palette entries or shadow token trigger enables in FetchLayer derivate. Write 1 to clear. */
#define GFXREG_FETCHDECODE_STATUS_WRITETIMEOUT_FSHIFT 0U
#define GFXREG_FETCHDECODE_STATUS_WRITETIMEOUT_FMASK 0x1U
#define GFXREG_FETCHDECODE_STATUS_SETM_WRITETIMEOUT(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_FETCHDECODE_STATUS_SET_WRITETIMEOUT(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_STATUS_GET_WRITETIMEOUT(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_WRITETIMEOUT(s,val) ( (s)->status = ((s)->status & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_FETCHDECODE_SET_WRITETIMEOUT(s,val)  ( (s)->status = (((s)->status & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_WRITETIMEOUT(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_FETCHDECODE_STATUS_WRITETIMEOUT_RESET 0x0U

/* READTIMEOUT: Timeout detected when reading from the palette entries or shadow token trigger enables in FetchLayer derivate. Write 1 to clear. */
#define GFXREG_FETCHDECODE_STATUS_READTIMEOUT_FSHIFT 4U
#define GFXREG_FETCHDECODE_STATUS_READTIMEOUT_FMASK 0x1U
#define GFXREG_FETCHDECODE_STATUS_SETM_READTIMEOUT(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_FETCHDECODE_STATUS_SET_READTIMEOUT(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_FETCHDECODE_STATUS_GET_READTIMEOUT(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHDECODE_SETM_READTIMEOUT(s,val) ( (s)->status = ((s)->status & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_FETCHDECODE_SET_READTIMEOUT(s,val)  ( (s)->status = (((s)->status & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_FETCHDECODE_GET_READTIMEOUT(s) ((((s)->status) >> 4U) & 0x1UL)
#define GFXREG_FETCHDECODE_STATUS_READTIMEOUT_RESET 0x0U

/* HIDDENSTATUS: Hidden status informations.
   The ShadowStatus field(s) indicate if a shadow load has been triggered for the corresponding layer, but not yet executed (for debugging purposes only; read only when stable).        */
#define GFXREG_FETCHDECODE_HIDDENSTATUS 0x0000006cU
/* STATUSBUSY: Fetch unit is busy. */
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSBUSY_FSHIFT 0U
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSBUSY_FMASK 0x1U
#define GFXREG_FETCHDECODE_HIDDENSTATUS_GET_STATUSBUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_FETCHDECODE_GET_STATUSBUSY(s) ((((s)->hiddenstatus) ) & 0x1UL)
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSBUSY_RESET (none)U

/* STATUSBUFFERSIDLE: AXI interface buffers are idle. */
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSBUFFERSIDLE_FSHIFT 4U
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSBUFFERSIDLE_FMASK 0x1U
#define GFXREG_FETCHDECODE_HIDDENSTATUS_GET_STATUSBUFFERSIDLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_FETCHDECODE_GET_STATUSBUFFERSIDLE(s) ((((s)->hiddenstatus) >> 4U) & 0x1UL)
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSBUFFERSIDLE_RESET (none)U

/* STATUSREQUEST: Fetch unit requesting on the AXI interface, waiting for acknowledge. */
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSREQUEST_FSHIFT 5U
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSREQUEST_FMASK 0x1U
#define GFXREG_FETCHDECODE_HIDDENSTATUS_GET_STATUSREQUEST(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_FETCHDECODE_GET_STATUSREQUEST(s) ((((s)->hiddenstatus) >> 5U) & 0x1UL)
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSREQUEST_RESET (none)U

/* STATUSCOMPLETE: Fetch unit completed all requested AXI transfers. */
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSCOMPLETE_FSHIFT 6U
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSCOMPLETE_FMASK 0x1U
#define GFXREG_FETCHDECODE_HIDDENSTATUS_GET_STATUSCOMPLETE(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_FETCHDECODE_GET_STATUSCOMPLETE(s) ((((s)->hiddenstatus) >> 6U) & 0x1UL)
#define GFXREG_FETCHDECODE_HIDDENSTATUS_STATUSCOMPLETE_RESET (none)U

/* SHADOWSTATUS: Shadow load status for all layers (layer index = bit index). */
#define GFXREG_FETCHDECODE_HIDDENSTATUS_SHADOWSTATUS_FSHIFT 8U
#define GFXREG_FETCHDECODE_HIDDENSTATUS_SHADOWSTATUS_FMASK 0xffU
#define GFXREG_FETCHDECODE_HIDDENSTATUS_GET_SHADOWSTATUS(val) (((CYGFX_U32)(val) >> 8U) & 0xffUL)
#define GFXREG_FETCHDECODE_GET_SHADOWSTATUS(s) ((((s)->hiddenstatus) >> 8U) & 0xffUL)
#define GFXREG_FETCHDECODE_HIDDENSTATUS_SHADOWSTATUS_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_FETCHDECODE_REGISTER_H */

