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
 * \version     2.01
 * \date        Mon Jul 05 13:05:15 2021
 * \file        gfxreg_store_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   store
 *              Source:   store.component.xml
 *              Template: component_h.tpl
 * \brief      Iris store register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_STORE_REGISTER_H
#define GFXREG_STORE_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* store registers */
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


/* STATICCONTROL: Store unit static control register. */
#define GFXREG_STORE_STATICCONTROL 0x00000000U
/* SHDEN: Enables shadowing of all RWS type registers (0=write_through, 1=shadowed). */
#define GFXREG_STORE_STATICCONTROL_SHDEN_FSHIFT 0U
#define GFXREG_STORE_STATICCONTROL_SHDEN_FMASK 0x1U
#define GFXREG_STORE_STATICCONTROL_SETM_SHDEN(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_STORE_STATICCONTROL_SET_SHDEN(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_STATICCONTROL_GET_SHDEN(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_STORE_SETM_SHDEN(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_STORE_SET_SHDEN(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_SHDEN(s) ((((s)->staticcontrol) ) & 0x1UL)
#define GFXREG_STORE_STATICCONTROL_SHDEN_RESET 0U

/* SINGLEFRAMEOPERATION: If this field and ShdEn are enabled, only frames with reload bit in command word are written to AXI, other frames are still consumed. If disabled all frames are writen to AXI */
#define GFXREG_STORE_STATICCONTROL_SINGLEFRAMEOPERATION_FSHIFT 4U
#define GFXREG_STORE_STATICCONTROL_SINGLEFRAMEOPERATION_FMASK 0x1U
#define GFXREG_STORE_STATICCONTROL_SETM_SINGLEFRAMEOPERATION(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_STORE_STATICCONTROL_SET_SINGLEFRAMEOPERATION(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_STATICCONTROL_GET_SINGLEFRAMEOPERATION(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_STORE_SETM_SINGLEFRAMEOPERATION(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_STORE_SET_SINGLEFRAMEOPERATION(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_SINGLEFRAMEOPERATION(s) ((((s)->staticcontrol) >> 4U) & 0x1UL)
#define GFXREG_STORE_STATICCONTROL_SINGLEFRAMEOPERATION_RESET 0U

/* BASEADDRESSAUTOUPDATE: If enabled (value 1) the base address is automatically updated at the start of each frame. This update is then executed independently of the ShdEn setting. When disabled ShdEn controls the update of the base address operation register. */
#define GFXREG_STORE_STATICCONTROL_BASEADDRESSAUTOUPDATE_FSHIFT 8U
#define GFXREG_STORE_STATICCONTROL_BASEADDRESSAUTOUPDATE_FMASK 0x1U
#define GFXREG_STORE_STATICCONTROL_SETM_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_STORE_STATICCONTROL_SET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_STATICCONTROL_GET_BASEADDRESSAUTOUPDATE(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_STORE_SETM_BASEADDRESSAUTOUPDATE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_STORE_SET_BASEADDRESSAUTOUPDATE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_BASEADDRESSAUTOUPDATE(s) ((((s)->staticcontrol) >> 8U) & 0x1UL)
#define GFXREG_STORE_STATICCONTROL_BASEADDRESSAUTOUPDATE_RESET 0U

/* BURSTBUFFERMANAGEMENT: Burst Buffer setup register. */
#define GFXREG_STORE_BURSTBUFFERMANAGEMENT 0x00000004U
/* SETBURSTLENGTH: Set this to the burst length that should be used on the AXI interface. Please note that SetBurstLength has to be smaller or equal to MaxBurstLength. Only a power of two may be specified as burst length. Please set this to at least 2 for 64bit pixels, otherwise performance will suffer. */
#define GFXREG_STORE_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FSHIFT 8U
#define GFXREG_STORE_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_FMASK 0x1fU
#define GFXREG_STORE_BURSTBUFFERMANAGEMENT_SETM_SETBURSTLENGTH(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_STORE_BURSTBUFFERMANAGEMENT_SET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_STORE_BURSTBUFFERMANAGEMENT_GET_SETBURSTLENGTH(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_STORE_SETM_SETBURSTLENGTH(s,val) ( (s)->burstbuffermanagement = ((s)->burstbuffermanagement & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_STORE_SET_SETBURSTLENGTH(s,val)  ( (s)->burstbuffermanagement = (((s)->burstbuffermanagement & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_SETBURSTLENGTH(s) ((((s)->burstbuffermanagement) >> 8U) & 0x1fUL)
#define GFXREG_STORE_BURSTBUFFERMANAGEMENT_SETBURSTLENGTH_RESET 4U

/* RINGBUFSTARTADDR: Ring buffer setup for destination. */
#define GFXREG_STORE_RINGBUFSTARTADDR 0x00000008U
/* RINGBUFSTARTADDR: Start address of the ring buffer. Must be aligned to SetBurstLength x 8 bytes. */
#define GFXREG_STORE_RINGBUFSTARTADDR_RINGBUFSTARTADDR_FSHIFT 0U
#define GFXREG_STORE_RINGBUFSTARTADDR_RINGBUFSTARTADDR_FMASK 0xffffffffU
#define GFXREG_STORE_RINGBUFSTARTADDR_SETM_RINGBUFSTARTADDR(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_STORE_RINGBUFSTARTADDR_SET_RINGBUFSTARTADDR(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_STORE_RINGBUFSTARTADDR_GET_RINGBUFSTARTADDR(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_STORE_SETM_RINGBUFSTARTADDR(s,val) ( (s)->ringbufstartaddr = ((s)->ringbufstartaddr & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_STORE_SET_RINGBUFSTARTADDR(s,val)  ( (s)->ringbufstartaddr = (((s)->ringbufstartaddr & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_RINGBUFSTARTADDR(s) ((((s)->ringbufstartaddr) ) & 0xffffffffUL)
#define GFXREG_STORE_RINGBUFSTARTADDR_RINGBUFSTARTADDR_RESET 0U

/* RINGBUFWRAPADDR: Ring buffer setup for destination.
   When data is written to the destination buffer, the address is reduced by the ring buffer size (= RingBufWrapAddr - RingBufStartAddr) when it is equal or larger than RingBufWrapAddr.         To disable ring buffer functionality set RingBufStartAddr = RingBufEndAddr = 0.         If ring buffer is used then BaseAddress and Stride must be multiples of 4 byte and the ring buffer size must be a multiple of Stride.         Current write address can be read from WriteAddress field.        */
#define GFXREG_STORE_RINGBUFWRAPADDR 0x0000000cU
/* RINGBUFWRAPADDR: End address of the ring buffer (last byte of the buffer plus one). */
#define GFXREG_STORE_RINGBUFWRAPADDR_RINGBUFWRAPADDR_FSHIFT 0U
#define GFXREG_STORE_RINGBUFWRAPADDR_RINGBUFWRAPADDR_FMASK 0xffffffffU
#define GFXREG_STORE_RINGBUFWRAPADDR_SETM_RINGBUFWRAPADDR(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_STORE_RINGBUFWRAPADDR_SET_RINGBUFWRAPADDR(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_STORE_RINGBUFWRAPADDR_GET_RINGBUFWRAPADDR(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_STORE_SETM_RINGBUFWRAPADDR(s,val) ( (s)->ringbufwrapaddr = ((s)->ringbufwrapaddr & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_STORE_SET_RINGBUFWRAPADDR(s,val)  ( (s)->ringbufwrapaddr = (((s)->ringbufwrapaddr & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_RINGBUFWRAPADDR(s) ((((s)->ringbufwrapaddr) ) & 0xffffffffUL)
#define GFXREG_STORE_RINGBUFWRAPADDR_RINGBUFWRAPADDR_RESET 0U

/* BASEADDRESS: Destination buffer base address. */
#define GFXREG_STORE_BASEADDRESS 0x00000010U
/* BASEADDRESS: Byte aligned start address of the destination buffer. For 32 bit pixels BaseAddress[1:0] must be set 0 and for 16 bit pixels BaseAddress[0] must be set 0. */
#define GFXREG_STORE_BASEADDRESS_BASEADDRESS_FSHIFT 0U
#define GFXREG_STORE_BASEADDRESS_BASEADDRESS_FMASK 0xffffffffU
#define GFXREG_STORE_BASEADDRESS_SETM_BASEADDRESS(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_STORE_BASEADDRESS_SET_BASEADDRESS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_STORE_BASEADDRESS_GET_BASEADDRESS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_STORE_SETM_BASEADDRESS(s,val) ( (s)->baseaddress = ((s)->baseaddress & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_STORE_SET_BASEADDRESS(s,val)  ( (s)->baseaddress = (((s)->baseaddress & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_BASEADDRESS(s) ((((s)->baseaddress) ) & 0xffffffffUL)
#define GFXREG_STORE_BASEADDRESS_BASEADDRESS_RESET 0U

/* DESTINATIONBUFFERATTRIBUTES: Destination buffer attributes.
   Stride and BitsPerPixel have no effect when RasterMode is ENCODE.        */
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES 0x00000014U
/* STRIDE: Destination buffer stride in bytes minus one, used for address generation. For a pixel width of 32 bits Stride has to be dividable by 4 and given minus one and for a pixel width of 16 bit Stride has to be dividable by two and given minus one. */
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_STRIDE_FSHIFT 0U
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_STRIDE_FMASK 0x1ffffU
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_SETM_STRIDE(val) (((CYGFX_U32)(val) & 0x1ffffUL) )
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_SET_STRIDE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1ffffUL, __FILE__, __LINE__))
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_GET_STRIDE(val) (((CYGFX_U32)(val) ) & 0x1ffffUL)
#define GFXREG_STORE_SETM_STRIDE(s,val) ( (s)->destinationbufferattributes = ((s)->destinationbufferattributes & ~0x1ffffUL) | (((CYGFX_U32)(val) ) & 0x1ffffUL) )
#define GFXREG_STORE_SET_STRIDE(s,val)  ( (s)->destinationbufferattributes = (((s)->destinationbufferattributes & ~0x1ffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1ffffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_STRIDE(s) ((((s)->destinationbufferattributes) ) & 0x1ffffUL)
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_STRIDE_RESET 1279U

/* BITSPERPIXEL: Size of a pixel in the destination buffer in bits. Has to be a power of two, 18 or 24. When 64 bit is selected, input pixels are converted into a 32 bit value that is replicated into low and high word of the 64 bit output. Set SetBurstLength at least to 2 in that case to get best possible performance. */
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_BITSPERPIXEL_FSHIFT 24U
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_BITSPERPIXEL_FMASK 0x7fU
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_SETM_BITSPERPIXEL(val) (((CYGFX_U32)(val) & 0x7fUL) << 24U)
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_SET_BITSPERPIXEL(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fUL, __FILE__, __LINE__))
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_GET_BITSPERPIXEL(val) (((CYGFX_U32)(val) >> 24U) & 0x7fUL)
#define GFXREG_STORE_SETM_BITSPERPIXEL(s,val) ( (s)->destinationbufferattributes = ((s)->destinationbufferattributes & ~0x7f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x7f000000UL) )
#define GFXREG_STORE_SET_BITSPERPIXEL(s,val)  ( (s)->destinationbufferattributes = (((s)->destinationbufferattributes & ~0x7f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_BITSPERPIXEL(s) ((((s)->destinationbufferattributes) >> 24U) & 0x7fUL)
#define GFXREG_STORE_DESTINATIONBUFFERATTRIBUTES_BITSPERPIXEL_RESET 0x20U

/* DESTINATIONBUFFERDIMENSION: Destination buffer dimension.
   This information is used to compute an intersection area of the input frame at FrameX/YOffset and the destination buffer.         Only that area is written to memory. If it is empty, no write operation occurs.         Linewidth and LineCount have no effect when RasterMode is ENCODE.        */
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION 0x00000018U
/* LINEWIDTH: Width of the destination buffer in pixels minus one. */
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_LINEWIDTH_FSHIFT 0U
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_LINEWIDTH_FMASK 0x3fffU
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_SETM_LINEWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_SET_LINEWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_GET_LINEWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_STORE_SETM_LINEWIDTH(s,val) ( (s)->destinationbufferdimension = ((s)->destinationbufferdimension & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_STORE_SET_LINEWIDTH(s,val)  ( (s)->destinationbufferdimension = (((s)->destinationbufferdimension & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_LINEWIDTH(s) ((((s)->destinationbufferdimension) ) & 0x3fffUL)
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_LINEWIDTH_RESET 0x3fffU

/* LINECOUNT: Number of lines of the destination buffer in pixels minus one. */
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_LINECOUNT_FSHIFT 16U
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_LINECOUNT_FMASK 0x3fffU
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_SETM_LINECOUNT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_SET_LINECOUNT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_GET_LINECOUNT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_STORE_SETM_LINECOUNT(s,val) ( (s)->destinationbufferdimension = ((s)->destinationbufferdimension & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_STORE_SET_LINECOUNT(s,val)  ( (s)->destinationbufferdimension = (((s)->destinationbufferdimension & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_LINECOUNT(s) ((((s)->destinationbufferdimension) >> 16U) & 0x3fffUL)
#define GFXREG_STORE_DESTINATIONBUFFERDIMENSION_LINECOUNT_RESET 0x3fffU

/* FRAMEOFFSET: Offset between destination frame and buffer.
   The offset is the vector from the top left corner of the frame that is written to the destination buffer origin.         The frame offset has no effect when RasterMode is ENCODE.        */
#define GFXREG_STORE_FRAMEOFFSET 0x0000001cU
/* FRAMEXOFFSET: Horizontal offset (X). */
#define GFXREG_STORE_FRAMEOFFSET_FRAMEXOFFSET_FSHIFT 0U
#define GFXREG_STORE_FRAMEOFFSET_FRAMEXOFFSET_FMASK 0x7fffU
#define GFXREG_STORE_FRAMEOFFSET_SETM_FRAMEXOFFSET(val) (((CYGFX_U32)(val) & 0x7fffUL) )
#define GFXREG_STORE_FRAMEOFFSET_SET_FRAMEXOFFSET(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_STORE_FRAMEOFFSET_GET_FRAMEXOFFSET(val) (((CYGFX_U32)(val) ) & 0x7fffUL)
#define GFXREG_STORE_SETM_FRAMEXOFFSET(s,val) ( (s)->frameoffset = ((s)->frameoffset & ~0x7fffUL) | (((CYGFX_U32)(val) ) & 0x7fffUL) )
#define GFXREG_STORE_SET_FRAMEXOFFSET(s,val)  ( (s)->frameoffset = (((s)->frameoffset & ~0x7fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_FRAMEXOFFSET(s) ((((s)->frameoffset) ) & 0x7fffUL)
#define GFXREG_STORE_FRAMEOFFSET_FRAMEXOFFSET_RESET 0U

/* FRAMEYOFFSET: Vertical offset (Y). */
#define GFXREG_STORE_FRAMEOFFSET_FRAMEYOFFSET_FSHIFT 16U
#define GFXREG_STORE_FRAMEOFFSET_FRAMEYOFFSET_FMASK 0x7fffU
#define GFXREG_STORE_FRAMEOFFSET_SETM_FRAMEYOFFSET(val) (((CYGFX_U32)(val) & 0x7fffUL) << 16U)
#define GFXREG_STORE_FRAMEOFFSET_SET_FRAMEYOFFSET(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__))
#define GFXREG_STORE_FRAMEOFFSET_GET_FRAMEYOFFSET(val) (((CYGFX_U32)(val) >> 16U) & 0x7fffUL)
#define GFXREG_STORE_SETM_FRAMEYOFFSET(s,val) ( (s)->frameoffset = ((s)->frameoffset & ~0x7fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x7fff0000UL) )
#define GFXREG_STORE_SET_FRAMEYOFFSET(s,val)  ( (s)->frameoffset = (((s)->frameoffset & ~0x7fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7fffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_FRAMEYOFFSET(s) ((((s)->frameoffset) >> 16U) & 0x7fffUL)
#define GFXREG_STORE_FRAMEOFFSET_FRAMEYOFFSET_RESET 0U

/* COLORCOMPONENTBITS: Color component size of destination buffer
   Size of Alpha can be 0 to 8 bits, RGB and YUV 0 to 10 bits.         When RasterMode is ENCODE, RGB/YUV components must not be larger than 8 bits.        */
#define GFXREG_STORE_COLORCOMPONENTBITS 0x00000020U
/* COMPONENTBITSALPHA: Alpha component bits. */
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSALPHA_FSHIFT 0U
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSALPHA_FMASK 0xfU
#define GFXREG_STORE_COLORCOMPONENTBITS_SETM_COMPONENTBITSALPHA(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_STORE_COLORCOMPONENTBITS_SET_COMPONENTBITSALPHA(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_STORE_COLORCOMPONENTBITS_GET_COMPONENTBITSALPHA(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_STORE_SETM_COMPONENTBITSALPHA(s,val) ( (s)->colorcomponentbits = ((s)->colorcomponentbits & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_STORE_SET_COMPONENTBITSALPHA(s,val)  ( (s)->colorcomponentbits = (((s)->colorcomponentbits & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COMPONENTBITSALPHA(s) ((((s)->colorcomponentbits) ) & 0xfUL)
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSALPHA_RESET 8U

/* COMPONENTBITSBLUE: Blue/V component bits. */
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSBLUE_FSHIFT 8U
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSBLUE_FMASK 0xfU
#define GFXREG_STORE_COLORCOMPONENTBITS_SETM_COMPONENTBITSBLUE(val) (((CYGFX_U32)(val) & 0xfUL) << 8U)
#define GFXREG_STORE_COLORCOMPONENTBITS_SET_COMPONENTBITSBLUE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_STORE_COLORCOMPONENTBITS_GET_COMPONENTBITSBLUE(val) (((CYGFX_U32)(val) >> 8U) & 0xfUL)
#define GFXREG_STORE_SETM_COMPONENTBITSBLUE(s,val) ( (s)->colorcomponentbits = ((s)->colorcomponentbits & ~0xf00UL) | (((CYGFX_U32)(val) << 8U) & 0xf00UL) )
#define GFXREG_STORE_SET_COMPONENTBITSBLUE(s,val)  ( (s)->colorcomponentbits = (((s)->colorcomponentbits & ~0xf00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COMPONENTBITSBLUE(s) ((((s)->colorcomponentbits) >> 8U) & 0xfUL)
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSBLUE_RESET 8U

/* COMPONENTBITSGREEN: Green/U component bits. */
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSGREEN_FSHIFT 16U
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSGREEN_FMASK 0xfU
#define GFXREG_STORE_COLORCOMPONENTBITS_SETM_COMPONENTBITSGREEN(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_STORE_COLORCOMPONENTBITS_SET_COMPONENTBITSGREEN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_STORE_COLORCOMPONENTBITS_GET_COMPONENTBITSGREEN(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_STORE_SETM_COMPONENTBITSGREEN(s,val) ( (s)->colorcomponentbits = ((s)->colorcomponentbits & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_STORE_SET_COMPONENTBITSGREEN(s,val)  ( (s)->colorcomponentbits = (((s)->colorcomponentbits & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COMPONENTBITSGREEN(s) ((((s)->colorcomponentbits) >> 16U) & 0xfUL)
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSGREEN_RESET 8U

/* COMPONENTBITSRED: Red/Y component bits. */
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSRED_FSHIFT 24U
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSRED_FMASK 0xfU
#define GFXREG_STORE_COLORCOMPONENTBITS_SETM_COMPONENTBITSRED(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_STORE_COLORCOMPONENTBITS_SET_COMPONENTBITSRED(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_STORE_COLORCOMPONENTBITS_GET_COMPONENTBITSRED(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_STORE_SETM_COMPONENTBITSRED(s,val) ( (s)->colorcomponentbits = ((s)->colorcomponentbits & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_STORE_SET_COMPONENTBITSRED(s,val)  ( (s)->colorcomponentbits = (((s)->colorcomponentbits & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COMPONENTBITSRED(s) ((((s)->colorcomponentbits) >> 24U) & 0xfUL)
#define GFXREG_STORE_COLORCOMPONENTBITS_COMPONENTBITSRED_RESET 8U

/* COLORCOMPONENTSHIFT: Color component offset of destination buffer.
   When RasterMode is ENCODE, these settings have no effect.        */
#define GFXREG_STORE_COLORCOMPONENTSHIFT 0x00000024U
/* COMPONENTSHIFTALPHA: Alpha component shift. */
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTALPHA_FSHIFT 0U
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTALPHA_FMASK 0x1fU
#define GFXREG_STORE_COLORCOMPONENTSHIFT_SETM_COMPONENTSHIFTALPHA(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_STORE_COLORCOMPONENTSHIFT_SET_COMPONENTSHIFTALPHA(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_STORE_COLORCOMPONENTSHIFT_GET_COMPONENTSHIFTALPHA(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_STORE_SETM_COMPONENTSHIFTALPHA(s,val) ( (s)->colorcomponentshift = ((s)->colorcomponentshift & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_STORE_SET_COMPONENTSHIFTALPHA(s,val)  ( (s)->colorcomponentshift = (((s)->colorcomponentshift & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COMPONENTSHIFTALPHA(s) ((((s)->colorcomponentshift) ) & 0x1fUL)
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTALPHA_RESET 0U

/* COMPONENTSHIFTBLUE: Blue/V component shift. */
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTBLUE_FSHIFT 8U
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTBLUE_FMASK 0x1fU
#define GFXREG_STORE_COLORCOMPONENTSHIFT_SETM_COMPONENTSHIFTBLUE(val) (((CYGFX_U32)(val) & 0x1fUL) << 8U)
#define GFXREG_STORE_COLORCOMPONENTSHIFT_SET_COMPONENTSHIFTBLUE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_STORE_COLORCOMPONENTSHIFT_GET_COMPONENTSHIFTBLUE(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_STORE_SETM_COMPONENTSHIFTBLUE(s,val) ( (s)->colorcomponentshift = ((s)->colorcomponentshift & ~0x1f00UL) | (((CYGFX_U32)(val) << 8U) & 0x1f00UL) )
#define GFXREG_STORE_SET_COMPONENTSHIFTBLUE(s,val)  ( (s)->colorcomponentshift = (((s)->colorcomponentshift & ~0x1f00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COMPONENTSHIFTBLUE(s) ((((s)->colorcomponentshift) >> 8U) & 0x1fUL)
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTBLUE_RESET 8U

/* COMPONENTSHIFTGREEN: Green/U component shift. */
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTGREEN_FSHIFT 16U
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTGREEN_FMASK 0x1fU
#define GFXREG_STORE_COLORCOMPONENTSHIFT_SETM_COMPONENTSHIFTGREEN(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_STORE_COLORCOMPONENTSHIFT_SET_COMPONENTSHIFTGREEN(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_STORE_COLORCOMPONENTSHIFT_GET_COMPONENTSHIFTGREEN(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_STORE_SETM_COMPONENTSHIFTGREEN(s,val) ( (s)->colorcomponentshift = ((s)->colorcomponentshift & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_STORE_SET_COMPONENTSHIFTGREEN(s,val)  ( (s)->colorcomponentshift = (((s)->colorcomponentshift & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COMPONENTSHIFTGREEN(s) ((((s)->colorcomponentshift) >> 16U) & 0x1fUL)
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTGREEN_RESET 16U

/* COMPONENTSHIFTRED: Red/Y component shift. */
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTRED_FSHIFT 24U
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTRED_FMASK 0x1fU
#define GFXREG_STORE_COLORCOMPONENTSHIFT_SETM_COMPONENTSHIFTRED(val) (((CYGFX_U32)(val) & 0x1fUL) << 24U)
#define GFXREG_STORE_COLORCOMPONENTSHIFT_SET_COMPONENTSHIFTRED(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_STORE_COLORCOMPONENTSHIFT_GET_COMPONENTSHIFTRED(val) (((CYGFX_U32)(val) >> 24U) & 0x1fUL)
#define GFXREG_STORE_SETM_COMPONENTSHIFTRED(s,val) ( (s)->colorcomponentshift = ((s)->colorcomponentshift & ~0x1f000000UL) | (((CYGFX_U32)(val) << 24U) & 0x1f000000UL) )
#define GFXREG_STORE_SET_COMPONENTSHIFTRED(s,val)  ( (s)->colorcomponentshift = (((s)->colorcomponentshift & ~0x1f000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COMPONENTSHIFTRED(s) ((((s)->colorcomponentshift) >> 24U) & 0x1fUL)
#define GFXREG_STORE_COLORCOMPONENTSHIFT_COMPONENTSHIFTRED_RESET 24U

/* CONTROL: Store unit dynamic control register */
#define GFXREG_STORE_CONTROL 0x00000028U
/* COLORDITHERENABLE: Controls whether spatial dithering (value 1) or LSB truncation (value 0) is used when ComponentBitsRed/Green/Blue is smaller than 10 bits. */
#define GFXREG_STORE_CONTROL_COLORDITHERENABLE_FSHIFT 0U
#define GFXREG_STORE_CONTROL_COLORDITHERENABLE_FMASK 0x1U
#define GFXREG_STORE_CONTROL_SETM_COLORDITHERENABLE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_STORE_CONTROL_SET_COLORDITHERENABLE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_CONTROL_GET_COLORDITHERENABLE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_STORE_SETM_COLORDITHERENABLE(s,val) ( (s)->control = ((s)->control & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_STORE_SET_COLORDITHERENABLE(s,val)  ( (s)->control = (((s)->control & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COLORDITHERENABLE(s) ((((s)->control) ) & 0x1UL)
#define GFXREG_STORE_CONTROL_COLORDITHERENABLE_RESET 0x0U

/* ALPHADITHERENABLE: Controls whether spatial dithering (value 1) or LSB truncation (value 0) is used when ComponentBitsAlpha is smaller than 8 bits. */
#define GFXREG_STORE_CONTROL_ALPHADITHERENABLE_FSHIFT 1U
#define GFXREG_STORE_CONTROL_ALPHADITHERENABLE_FMASK 0x1U
#define GFXREG_STORE_CONTROL_SETM_ALPHADITHERENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_STORE_CONTROL_SET_ALPHADITHERENABLE(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_CONTROL_GET_ALPHADITHERENABLE(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_STORE_SETM_ALPHADITHERENABLE(s,val) ( (s)->control = ((s)->control & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_STORE_SET_ALPHADITHERENABLE(s,val)  ( (s)->control = (((s)->control & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_ALPHADITHERENABLE(s) ((((s)->control) >> 1U) & 0x1UL)
#define GFXREG_STORE_CONTROL_ALPHADITHERENABLE_RESET 0x0U

/* DITHEROFFSET: Dither offset that is additionally applied to the spatial offset, which is internally generated from the pixel position. Can be used by SW to generate image sequences with temporal dithering. */
#define GFXREG_STORE_CONTROL_DITHEROFFSET_FSHIFT 4U
#define GFXREG_STORE_CONTROL_DITHEROFFSET_FMASK 0xfU
#define GFXREG_STORE_CONTROL_SETM_DITHEROFFSET(val) (((CYGFX_U32)(val) & 0xfUL) << 4U)
#define GFXREG_STORE_CONTROL_SET_DITHEROFFSET(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_STORE_CONTROL_GET_DITHEROFFSET(val) (((CYGFX_U32)(val) >> 4U) & 0xfUL)
#define GFXREG_STORE_SETM_DITHEROFFSET(s,val) ( (s)->control = ((s)->control & ~0xf0UL) | (((CYGFX_U32)(val) << 4U) & 0xf0UL) )
#define GFXREG_STORE_SET_DITHEROFFSET(s,val)  ( (s)->control = (((s)->control & ~0xf0UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_DITHEROFFSET(s) ((((s)->control) >> 4U) & 0xfUL)
#define GFXREG_STORE_CONTROL_DITHEROFFSET_RESET 0x0U

/* GAMMAAPPLYENABLE: Enable gamma conversion stage to apply gamma function. This gamma function converts the pixel data from linear color space to non-linear color space before writing it to AXI. */
#define GFXREG_STORE_CONTROL_GAMMAAPPLYENABLE_FSHIFT 12U
#define GFXREG_STORE_CONTROL_GAMMAAPPLYENABLE_FMASK 0x1U
#define GFXREG_STORE_CONTROL_SETM_GAMMAAPPLYENABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 12U)
#define GFXREG_STORE_CONTROL_SET_GAMMAAPPLYENABLE(val) (((CYGFX_U32)(val) << 12U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_CONTROL_GET_GAMMAAPPLYENABLE(val) (((CYGFX_U32)(val) >> 12U) & 0x1UL)
#define GFXREG_STORE_SETM_GAMMAAPPLYENABLE(s,val) ( (s)->control = ((s)->control & ~0x1000UL) | (((CYGFX_U32)(val) << 12U) & 0x1000UL) )
#define GFXREG_STORE_SET_GAMMAAPPLYENABLE(s,val)  ( (s)->control = (((s)->control & ~0x1000UL) | ((CYGFX_U32)(val) << 12U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_GAMMAAPPLYENABLE(s) ((((s)->control) >> 12U) & 0x1UL)
#define GFXREG_STORE_CONTROL_GAMMAAPPLYENABLE_RESET 0x0U

/* YUVCONVERSIONMODE: Enables different kind of RGB to YUV conversions. */
#define GFXREG_STORE_CONTROL_YUVCONVERSIONMODE_FSHIFT 16U
#define GFXREG_STORE_CONTROL_YUVCONVERSIONMODE_FMASK 0x3U
#define GFXREG_STORE_CONTROL_SETM_YUVCONVERSIONMODE(val) (((CYGFX_U32)(val) & 0x3UL) << 16U)
#define GFXREG_STORE_CONTROL_SET_YUVCONVERSIONMODE(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_STORE_CONTROL_GET_YUVCONVERSIONMODE(val) (((CYGFX_U32)(val) >> 16U) & 0x3UL)
#define GFXREG_STORE_SETM_YUVCONVERSIONMODE(s,val) ( (s)->control = ((s)->control & ~0x30000UL) | (((CYGFX_U32)(val) << 16U) & 0x30000UL) )
#define GFXREG_STORE_SET_YUVCONVERSIONMODE(s,val)  ( (s)->control = (((s)->control & ~0x30000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_YUVCONVERSIONMODE(s) ((((s)->control) >> 16U) & 0x3UL)
#define GFXREG_STORE_CONTROL_YUVCONVERSIONMODE_OFF 0x0U /* No conversion. Input data must be RGB. */
#define GFXREG_STORE_CONTROL_YUVCONVERSIONMODE_ITU601 0x1U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6 (standard definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_STORE_CONTROL_YUVCONVERSIONMODE_ITU601_FR 0x2U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.601-6, but assuming full range YUV inputs (0..255). Most typically used for computer graphics (e.g. for JPEG encoding). */
#define GFXREG_STORE_CONTROL_YUVCONVERSIONMODE_ITU709 0x3U /* Conversion from YCbCr (YUV) to RGB according to ITU recommendation BT.709-5 part 2 (high definition TV). Input range is 16..235 for Y and 16..240 for U/V. */
#define GFXREG_STORE_CONTROL_YUVCONVERSIONMODE_RESET 0x0U

/* RASTERMODE: Selects a method for destination buffer data from input pixels. */
#define GFXREG_STORE_CONTROL_RASTERMODE_FSHIFT 18U
#define GFXREG_STORE_CONTROL_RASTERMODE_FMASK 0x3U
#define GFXREG_STORE_CONTROL_SETM_RASTERMODE(val) (((CYGFX_U32)(val) & 0x3UL) << 18U)
#define GFXREG_STORE_CONTROL_SET_RASTERMODE(val) (((CYGFX_U32)(val) << 18U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_STORE_CONTROL_GET_RASTERMODE(val) (((CYGFX_U32)(val) >> 18U) & 0x3UL)
#define GFXREG_STORE_SETM_RASTERMODE(s,val) ( (s)->control = ((s)->control & ~0xc0000UL) | (((CYGFX_U32)(val) << 18U) & 0xc0000UL) )
#define GFXREG_STORE_SET_RASTERMODE(s,val)  ( (s)->control = (((s)->control & ~0xc0000UL) | ((CYGFX_U32)(val) << 18U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_RASTERMODE(s) ((((s)->control) >> 18U) & 0x3UL)
#define GFXREG_STORE_CONTROL_RASTERMODE_NORMAL 0x0U /* RGBA or YUV 4:4:4 pixel buffer. */
#define GFXREG_STORE_CONTROL_RASTERMODE_YUV422 0x1U /* Packed YUV 4:2:2 pixel buffer. Effect is that U samples are written for pixels with even and V samples for odd column index only. So BitsPerPixel must be set to the size that a pair of YU or YV has in memory (most typically 16 bits). All correlated widths and horizontal offsets must be even. */
#define GFXREG_STORE_CONTROL_RASTERMODE_ENCODE 0x2U /* RLAD compressed bit stream. */
#define GFXREG_STORE_CONTROL_RASTERMODE_RESET 0x0U

/* YUV422DOWNSAMPLINGMODE: Selects a method for horizontal down-sampling when RasterMode is YUV422. */
#define GFXREG_STORE_CONTROL_YUV422DOWNSAMPLINGMODE_FSHIFT 20U
#define GFXREG_STORE_CONTROL_YUV422DOWNSAMPLINGMODE_FMASK 0x3U
#define GFXREG_STORE_CONTROL_SETM_YUV422DOWNSAMPLINGMODE(val) (((CYGFX_U32)(val) & 0x3UL) << 20U)
#define GFXREG_STORE_CONTROL_SET_YUV422DOWNSAMPLINGMODE(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__))
#define GFXREG_STORE_CONTROL_GET_YUV422DOWNSAMPLINGMODE(val) (((CYGFX_U32)(val) >> 20U) & 0x3UL)
#define GFXREG_STORE_SETM_YUV422DOWNSAMPLINGMODE(s,val) ( (s)->control = ((s)->control & ~0x300000UL) | (((CYGFX_U32)(val) << 20U) & 0x300000UL) )
#define GFXREG_STORE_SET_YUV422DOWNSAMPLINGMODE(s,val)  ( (s)->control = (((s)->control & ~0x300000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_YUV422DOWNSAMPLINGMODE(s) ((((s)->control) >> 20U) & 0x3UL)
#define GFXREG_STORE_CONTROL_YUV422DOWNSAMPLINGMODE_NEAREST 0x0U /* Nearest mode. Discards all odd samples, outputs even samples. */
#define GFXREG_STORE_CONTROL_YUV422DOWNSAMPLINGMODE_COALIGNED 0x1U /* Linear coaligned mode. 3 nearest UV samples are combined in linear filter to get one output sample. */
#define GFXREG_STORE_CONTROL_YUV422DOWNSAMPLINGMODE_INTERSPERSED 0x2U /* Linear interspersed mode. 2 nearest UV samples are combined in linear filter to get one output sample. */
#define GFXREG_STORE_CONTROL_YUV422DOWNSAMPLINGMODE_RESET 0x0U

/* ENCODECONTROL: Control options for RLAD compression. */
#define GFXREG_STORE_ENCODECONTROL 0x0000002cU
/* COMPRESSIONMODE: Algorithm to use for compression. */
#define GFXREG_STORE_ENCODECONTROL_COMPRESSIONMODE_FSHIFT 0U
#define GFXREG_STORE_ENCODECONTROL_COMPRESSIONMODE_FMASK 0x1U
#define GFXREG_STORE_ENCODECONTROL_SETM_COMPRESSIONMODE(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_STORE_ENCODECONTROL_SET_COMPRESSIONMODE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_ENCODECONTROL_GET_COMPRESSIONMODE(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_STORE_SETM_COMPRESSIONMODE(s,val) ( (s)->encodecontrol = ((s)->encodecontrol & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_STORE_SET_COMPRESSIONMODE(s,val)  ( (s)->encodecontrol = (((s)->encodecontrol & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_COMPRESSIONMODE(s) ((((s)->encodecontrol) ) & 0x1UL)
#define GFXREG_STORE_ENCODECONTROL_COMPRESSIONMODE_RLAD 0U /* Run-Length Adaptive Dithering (lossy compression). */
#define GFXREG_STORE_ENCODECONTROL_COMPRESSIONMODE_RLAD_UNIFORM 1U /* Run-Length Adaptive Dithering (lossy compression; uniform package size). */
#define GFXREG_STORE_ENCODECONTROL_COMPRESSIONMODE_RESET 1U

/* RLADCOMPBITSRED: Maximum for average number of bits per compressed pixel for Red or Y (luma) channel. */
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSRED_FSHIFT 16U
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSRED_FMASK 0xfU
#define GFXREG_STORE_ENCODECONTROL_SETM_RLADCOMPBITSRED(val) (((CYGFX_U32)(val) & 0xfUL) << 16U)
#define GFXREG_STORE_ENCODECONTROL_SET_RLADCOMPBITSRED(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_STORE_ENCODECONTROL_GET_RLADCOMPBITSRED(val) (((CYGFX_U32)(val) >> 16U) & 0xfUL)
#define GFXREG_STORE_SETM_RLADCOMPBITSRED(s,val) ( (s)->encodecontrol = ((s)->encodecontrol & ~0xf0000UL) | (((CYGFX_U32)(val) << 16U) & 0xf0000UL) )
#define GFXREG_STORE_SET_RLADCOMPBITSRED(s,val)  ( (s)->encodecontrol = (((s)->encodecontrol & ~0xf0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_RLADCOMPBITSRED(s) ((((s)->encodecontrol) >> 16U) & 0xfUL)
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSRED_RESET 8U

/* RLADCOMPBITSGREEN: Maximum for average number of bits per compressed pixel for Green or U (chroma) channel. */
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSGREEN_FSHIFT 20U
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSGREEN_FMASK 0xfU
#define GFXREG_STORE_ENCODECONTROL_SETM_RLADCOMPBITSGREEN(val) (((CYGFX_U32)(val) & 0xfUL) << 20U)
#define GFXREG_STORE_ENCODECONTROL_SET_RLADCOMPBITSGREEN(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_STORE_ENCODECONTROL_GET_RLADCOMPBITSGREEN(val) (((CYGFX_U32)(val) >> 20U) & 0xfUL)
#define GFXREG_STORE_SETM_RLADCOMPBITSGREEN(s,val) ( (s)->encodecontrol = ((s)->encodecontrol & ~0xf00000UL) | (((CYGFX_U32)(val) << 20U) & 0xf00000UL) )
#define GFXREG_STORE_SET_RLADCOMPBITSGREEN(s,val)  ( (s)->encodecontrol = (((s)->encodecontrol & ~0xf00000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_RLADCOMPBITSGREEN(s) ((((s)->encodecontrol) >> 20U) & 0xfUL)
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSGREEN_RESET 8U

/* RLADCOMPBITSBLUE: Maximum for average number of bits per compressed pixel for Blue or V (chroma) channel. */
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSBLUE_FSHIFT 24U
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSBLUE_FMASK 0xfU
#define GFXREG_STORE_ENCODECONTROL_SETM_RLADCOMPBITSBLUE(val) (((CYGFX_U32)(val) & 0xfUL) << 24U)
#define GFXREG_STORE_ENCODECONTROL_SET_RLADCOMPBITSBLUE(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_STORE_ENCODECONTROL_GET_RLADCOMPBITSBLUE(val) (((CYGFX_U32)(val) >> 24U) & 0xfUL)
#define GFXREG_STORE_SETM_RLADCOMPBITSBLUE(s,val) ( (s)->encodecontrol = ((s)->encodecontrol & ~0xf000000UL) | (((CYGFX_U32)(val) << 24U) & 0xf000000UL) )
#define GFXREG_STORE_SET_RLADCOMPBITSBLUE(s,val)  ( (s)->encodecontrol = (((s)->encodecontrol & ~0xf000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_RLADCOMPBITSBLUE(s) ((((s)->encodecontrol) >> 24U) & 0xfUL)
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSBLUE_RESET 8U

/* RLADCOMPBITSALPHA: Maximum for average number of bits per compressed pixel for Alpha channel. */
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSALPHA_FSHIFT 28U
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSALPHA_FMASK 0xfU
#define GFXREG_STORE_ENCODECONTROL_SETM_RLADCOMPBITSALPHA(val) (((CYGFX_U32)(val) & 0xfUL) << 28U)
#define GFXREG_STORE_ENCODECONTROL_SET_RLADCOMPBITSALPHA(val) (((CYGFX_U32)(val) << 28U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_STORE_ENCODECONTROL_GET_RLADCOMPBITSALPHA(val) (((CYGFX_U32)(val) >> 28U) & 0xfUL)
#define GFXREG_STORE_SETM_RLADCOMPBITSALPHA(s,val) ( (s)->encodecontrol = ((s)->encodecontrol & ~0xf0000000UL) | (((CYGFX_U32)(val) << 28U) & 0xf0000000UL) )
#define GFXREG_STORE_SET_RLADCOMPBITSALPHA(s,val)  ( (s)->encodecontrol = (((s)->encodecontrol & ~0xf0000000UL) | ((CYGFX_U32)(val) << 28U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_RLADCOMPBITSALPHA(s) ((((s)->encodecontrol) >> 28U) & 0xfUL)
#define GFXREG_STORE_ENCODECONTROL_RLADCOMPBITSALPHA_RESET 8U

/* DESTINATIONBUFFERLENGTH: Destination buffer length for compressed data. */
#define GFXREG_STORE_DESTINATIONBUFFERLENGTH 0x00000030U
/* RLEWORDSMAX: Number of 32-bit words minus one that are reserved for the destination buffer in case that RasterMode is ENCODE. The actual number used can be read from RLEWords field. */
#define GFXREG_STORE_DESTINATIONBUFFERLENGTH_RLEWORDSMAX_FSHIFT 0U
#define GFXREG_STORE_DESTINATIONBUFFERLENGTH_RLEWORDSMAX_FMASK 0x1fffffffU
#define GFXREG_STORE_DESTINATIONBUFFERLENGTH_SETM_RLEWORDSMAX(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_STORE_DESTINATIONBUFFERLENGTH_SET_RLEWORDSMAX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_STORE_DESTINATIONBUFFERLENGTH_GET_RLEWORDSMAX(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_STORE_SETM_RLEWORDSMAX(s,val) ( (s)->destinationbufferlength = ((s)->destinationbufferlength & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_STORE_SET_RLEWORDSMAX(s,val)  ( (s)->destinationbufferlength = (((s)->destinationbufferlength & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_RLEWORDSMAX(s) ((((s)->destinationbufferlength) ) & 0x1fffffffUL)
#define GFXREG_STORE_DESTINATIONBUFFERLENGTH_RLEWORDSMAX_RESET 0U

/* START: Store unit start register */
#define GFXREG_STORE_START 0x00000034U
/* START: Writing a one starts processing of the pixel engine. */
#define GFXREG_STORE_START_START_FSHIFT 0U
#define GFXREG_STORE_START_START_FMASK 0x1U
#define GFXREG_STORE_START_SETM_START(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_STORE_START_SET_START(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_SETM_START(s,val) ( (s)->start = ((s)->start & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_STORE_SET_START(s,val)  ( (s)->start = (((s)->start & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_START_START_RESET (none)U

/* ENCODERSTATUS: Status information of the RLAD encoder. */
#define GFXREG_STORE_ENCODERSTATUS 0x00000038U
/* RLEWORDS: Number of 32-bit words minus one that was used for the compressed buffer. */
#define GFXREG_STORE_ENCODERSTATUS_RLEWORDS_FSHIFT 0U
#define GFXREG_STORE_ENCODERSTATUS_RLEWORDS_FMASK 0x1fffffffU
#define GFXREG_STORE_ENCODERSTATUS_SETM_RLEWORDS(val) (((CYGFX_U32)(val) & 0x1fffffffUL) )
#define GFXREG_STORE_ENCODERSTATUS_SET_RLEWORDS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__))
#define GFXREG_STORE_ENCODERSTATUS_GET_RLEWORDS(val) (((CYGFX_U32)(val) ) & 0x1fffffffUL)
#define GFXREG_STORE_SETM_RLEWORDS(s,val) ( (s)->encoderstatus = ((s)->encoderstatus & ~0x1fffffffUL) | (((CYGFX_U32)(val) ) & 0x1fffffffUL) )
#define GFXREG_STORE_SET_RLEWORDS(s,val)  ( (s)->encoderstatus = (((s)->encoderstatus & ~0x1fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fffffffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_RLEWORDS(s) ((((s)->encoderstatus) ) & 0x1fffffffUL)
#define GFXREG_STORE_ENCODERSTATUS_RLEWORDS_RESET 0x1fffffffU

/* BUFFERTOOSMALL: The buffer size given by RLEWordsMax is too small. Not the complete input frame could be encoded. */
#define GFXREG_STORE_ENCODERSTATUS_BUFFERTOOSMALL_FSHIFT 31U
#define GFXREG_STORE_ENCODERSTATUS_BUFFERTOOSMALL_FMASK 0x1U
#define GFXREG_STORE_ENCODERSTATUS_SETM_BUFFERTOOSMALL(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_STORE_ENCODERSTATUS_SET_BUFFERTOOSMALL(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_ENCODERSTATUS_GET_BUFFERTOOSMALL(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_STORE_SETM_BUFFERTOOSMALL(s,val) ( (s)->encoderstatus = ((s)->encoderstatus & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_STORE_SET_BUFFERTOOSMALL(s,val)  ( (s)->encoderstatus = (((s)->encoderstatus & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_BUFFERTOOSMALL(s) ((((s)->encoderstatus) >> 31U) & 0x1UL)
#define GFXREG_STORE_ENCODERSTATUS_BUFFERTOOSMALL_RESET 0U

/* WRITEADDRESS: Ring buffer synchronization. */
#define GFXREG_STORE_WRITEADDRESS 0x0000003cU
/* WRITEADDRESS: Last burst address that was written to the destination buffer. */
#define GFXREG_STORE_WRITEADDRESS_WRITEADDRESS_FSHIFT 0U
#define GFXREG_STORE_WRITEADDRESS_WRITEADDRESS_FMASK 0xffffffffU
#define GFXREG_STORE_WRITEADDRESS_SETM_WRITEADDRESS(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_STORE_WRITEADDRESS_SET_WRITEADDRESS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_STORE_WRITEADDRESS_GET_WRITEADDRESS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_STORE_SETM_WRITEADDRESS(s,val) ( (s)->writeaddress = ((s)->writeaddress & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_STORE_SET_WRITEADDRESS(s,val)  ( (s)->writeaddress = (((s)->writeaddress & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_WRITEADDRESS(s) ((((s)->writeaddress) ) & 0xffffffffUL)
#define GFXREG_STORE_WRITEADDRESS_WRITEADDRESS_RESET 0U

/* FRAMEPROPERTIES: Ring buffer synchronization. */
#define GFXREG_STORE_FRAMEPROPERTIES 0x00000040U
/* FIELDID: Field identifier for interlaced video streams (0/1 = even/odd line indices of progressive frame). Status is updated with begin of a new field. */
#define GFXREG_STORE_FRAMEPROPERTIES_FIELDID_FSHIFT 0U
#define GFXREG_STORE_FRAMEPROPERTIES_FIELDID_FMASK 0x1U
#define GFXREG_STORE_FRAMEPROPERTIES_SETM_FIELDID(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_STORE_FRAMEPROPERTIES_SET_FIELDID(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_FRAMEPROPERTIES_GET_FIELDID(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_STORE_SETM_FIELDID(s,val) ( (s)->frameproperties = ((s)->frameproperties & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_STORE_SET_FIELDID(s,val)  ( (s)->frameproperties = (((s)->frameproperties & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_FIELDID(s) ((((s)->frameproperties) ) & 0x1UL)
#define GFXREG_STORE_FRAMEPROPERTIES_FIELDID_RESET 0U

/* BURSTBUFFERPROPERTIES: Burst Buffer Property register */
#define GFXREG_STORE_BURSTBUFFERPROPERTIES 0x00000044U
/* MAXBURSTLENGTH: Maximum Burst Length that can be configured. */
#define GFXREG_STORE_BURSTBUFFERPROPERTIES_MAXBURSTLENGTH_FSHIFT 8U
#define GFXREG_STORE_BURSTBUFFERPROPERTIES_MAXBURSTLENGTH_FMASK 0x1fU
#define GFXREG_STORE_BURSTBUFFERPROPERTIES_GET_MAXBURSTLENGTH(val) (((CYGFX_U32)(val) >> 8U) & 0x1fUL)
#define GFXREG_STORE_GET_MAXBURSTLENGTH(s) ((((s)->burstbufferproperties) >> 8U) & 0x1fUL)
#define GFXREG_STORE_BURSTBUFFERPROPERTIES_MAXBURSTLENGTH_RESET (none)U

/* LASTCONTROLWORD: Shows the last control word received */
#define GFXREG_STORE_LASTCONTROLWORD 0x00000048U
/* L_VAL: Shows the last control word received from the pixel engine. If a 39 bit pixel channel is connected, the mapping is as follows: l_val[31:0] = { data[37:22], data[19:12], data[9:2] }. For debug purposes only, read when stable only, otherwise read data might be corrupted. */
#define GFXREG_STORE_LASTCONTROLWORD_L_VAL_FSHIFT 0U
#define GFXREG_STORE_LASTCONTROLWORD_L_VAL_FMASK 0xffffffffU
#define GFXREG_STORE_LASTCONTROLWORD_GET_L_VAL(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_STORE_GET_L_VAL(s) ((((s)->lastcontrolword) ) & 0xffffffffUL)
#define GFXREG_STORE_LASTCONTROLWORD_L_VAL_RESET 0U

/* PERFCOUNTER: Performance counter result */
#define GFXREG_STORE_PERFCOUNTER 0x0000004cU
/* PERFRESULT: Returns the performance counter value. Please note that a sw reset during a frame can potentially produce invalid results in the first frame afterwards. For debug purposes only, read when stable only, otherwise read data might be corrupted. */
#define GFXREG_STORE_PERFCOUNTER_PERFRESULT_FSHIFT 0U
#define GFXREG_STORE_PERFCOUNTER_PERFRESULT_FMASK 0xffffffffU
#define GFXREG_STORE_PERFCOUNTER_GET_PERFRESULT(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_STORE_GET_PERFRESULT(s) ((((s)->perfcounter) ) & 0xffffffffUL)
#define GFXREG_STORE_PERFCOUNTER_PERFRESULT_RESET 0U

/* STATUS: Shows status information */
#define GFXREG_STORE_STATUS 0x00000050U
/* STATUSBUSY: Store unit is busy */
#define GFXREG_STORE_STATUS_STATUSBUSY_FSHIFT 0U
#define GFXREG_STORE_STATUS_STATUSBUSY_FMASK 0x1U
#define GFXREG_STORE_STATUS_GET_STATUSBUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_STORE_GET_STATUSBUSY(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_STORE_STATUS_STATUSBUSY_RESET (none)U

/* STATUSBUFFERSIDLE: AXI interface buffers are idle */
#define GFXREG_STORE_STATUS_STATUSBUFFERSIDLE_FSHIFT 4U
#define GFXREG_STORE_STATUS_STATUSBUFFERSIDLE_FMASK 0x1U
#define GFXREG_STORE_STATUS_GET_STATUSBUFFERSIDLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_STORE_GET_STATUSBUFFERSIDLE(s) ((((s)->status) >> 4U) & 0x1UL)
#define GFXREG_STORE_STATUS_STATUSBUFFERSIDLE_RESET (none)U

/* STATUSREQUEST: Store unit requesting on the AXI interface, waiting for acknowledge */
#define GFXREG_STORE_STATUS_STATUSREQUEST_FSHIFT 5U
#define GFXREG_STORE_STATUS_STATUSREQUEST_FMASK 0x1U
#define GFXREG_STORE_STATUS_GET_STATUSREQUEST(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_STORE_GET_STATUSREQUEST(s) ((((s)->status) >> 5U) & 0x1UL)
#define GFXREG_STORE_STATUS_STATUSREQUEST_RESET (none)U

/* STATUSCOMPLETE: Store unit completed all requested AXI transfers */
#define GFXREG_STORE_STATUS_STATUSCOMPLETE_FSHIFT 6U
#define GFXREG_STORE_STATUS_STATUSCOMPLETE_FMASK 0x1U
#define GFXREG_STORE_STATUS_GET_STATUSCOMPLETE(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_STORE_GET_STATUSCOMPLETE(s) ((((s)->status) >> 6U) & 0x1UL)
#define GFXREG_STORE_STATUS_STATUSCOMPLETE_RESET (none)U

/* PIXELBUSERROR: A pixel bus error has occured. Write 1 to clear. */
#define GFXREG_STORE_STATUS_PIXELBUSERROR_FSHIFT 8U
#define GFXREG_STORE_STATUS_PIXELBUSERROR_FMASK 0x1U
#define GFXREG_STORE_STATUS_SETM_PIXELBUSERROR(val) (((CYGFX_U32)(val) & 0x1UL) << 8U)
#define GFXREG_STORE_STATUS_SET_PIXELBUSERROR(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_STATUS_GET_PIXELBUSERROR(val) (((CYGFX_U32)(val) >> 8U) & 0x1UL)
#define GFXREG_STORE_SETM_PIXELBUSERROR(s,val) ( (s)->status = ((s)->status & ~0x100UL) | (((CYGFX_U32)(val) << 8U) & 0x100UL) )
#define GFXREG_STORE_SET_PIXELBUSERROR(s,val)  ( (s)->status = (((s)->status & ~0x100UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_PIXELBUSERROR(s) ((((s)->status) >> 8U) & 0x1UL)
#define GFXREG_STORE_STATUS_PIXELBUSERROR_RESET 0U

/* ENCODEROVERFLOW: An overflow error has occured in encoder. Write 1 to clear. */
#define GFXREG_STORE_STATUS_ENCODEROVERFLOW_FSHIFT 16U
#define GFXREG_STORE_STATUS_ENCODEROVERFLOW_FMASK 0x1U
#define GFXREG_STORE_STATUS_SETM_ENCODEROVERFLOW(val) (((CYGFX_U32)(val) & 0x1UL) << 16U)
#define GFXREG_STORE_STATUS_SET_ENCODEROVERFLOW(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_STATUS_GET_ENCODEROVERFLOW(val) (((CYGFX_U32)(val) >> 16U) & 0x1UL)
#define GFXREG_STORE_SETM_ENCODEROVERFLOW(s,val) ( (s)->status = ((s)->status & ~0x10000UL) | (((CYGFX_U32)(val) << 16U) & 0x10000UL) )
#define GFXREG_STORE_SET_ENCODEROVERFLOW(s,val)  ( (s)->status = (((s)->status & ~0x10000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_ENCODEROVERFLOW(s) ((((s)->status) >> 16U) & 0x1UL)
#define GFXREG_STORE_STATUS_ENCODEROVERFLOW_RESET 0U

/* ENCODERSTALLPIXEL: The encoder stalled input pixels during a frame. Write 1 to clear. */
#define GFXREG_STORE_STATUS_ENCODERSTALLPIXEL_FSHIFT 17U
#define GFXREG_STORE_STATUS_ENCODERSTALLPIXEL_FMASK 0x1U
#define GFXREG_STORE_STATUS_SETM_ENCODERSTALLPIXEL(val) (((CYGFX_U32)(val) & 0x1UL) << 17U)
#define GFXREG_STORE_STATUS_SET_ENCODERSTALLPIXEL(val) (((CYGFX_U32)(val) << 17U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_STORE_STATUS_GET_ENCODERSTALLPIXEL(val) (((CYGFX_U32)(val) >> 17U) & 0x1UL)
#define GFXREG_STORE_SETM_ENCODERSTALLPIXEL(s,val) ( (s)->status = ((s)->status & ~0x20000UL) | (((CYGFX_U32)(val) << 17U) & 0x20000UL) )
#define GFXREG_STORE_SET_ENCODERSTALLPIXEL(s,val)  ( (s)->status = (((s)->status & ~0x20000UL) | ((CYGFX_U32)(val) << 17U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_STORE_GET_ENCODERSTALLPIXEL(s) ((((s)->status) >> 17U) & 0x1UL)
#define GFXREG_STORE_STATUS_ENCODERSTALLPIXEL_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_STORE_REGISTER_H */

