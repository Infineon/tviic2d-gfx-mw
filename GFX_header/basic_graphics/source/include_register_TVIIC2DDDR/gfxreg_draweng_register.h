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
 * \file        gfxreg_draweng_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   draweng
 *              Source:   draweng.component.xml
 *              Template: component_h.tpl
 * \brief      Iris draweng register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_DRAWENG_REGISTER_H
#define GFXREG_DRAWENG_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* draweng registers */
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


/* STATICCONTROL: Drawing Engine static control register */
#define GFXREG_DRAWENG_STATICCONTROL 0x00000000U
/* SWRESET: Puts the Drawing Engine in software reset. */
#define GFXREG_DRAWENG_STATICCONTROL_SWRESET_FSHIFT 4U
#define GFXREG_DRAWENG_STATICCONTROL_SWRESET_FMASK 0x1U
#define GFXREG_DRAWENG_STATICCONTROL_SETM_SWRESET(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_DRAWENG_STATICCONTROL_SET_SWRESET(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_STATICCONTROL_GET_SWRESET(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_DRAWENG_SETM_SWRESET(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_DRAWENG_SET_SWRESET(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_SWRESET(s) ((((s)->staticcontrol) >> 4U) & 0x1UL)
#define GFXREG_DRAWENG_STATICCONTROL_SWRESET_OPERATION 0x0U /* Normal Operation */
#define GFXREG_DRAWENG_STATICCONTROL_SWRESET_SW_RESET 0x1U /* Software Reset */
#define GFXREG_DRAWENG_STATICCONTROL_SWRESET_RESET 1U

/* CLOCKDISABLE: Deactivates most internal clocks of Drawing Engine. Can only be activated if SWReset field is set to SW_RESET. */
#define GFXREG_DRAWENG_STATICCONTROL_CLOCKDISABLE_FSHIFT 5U
#define GFXREG_DRAWENG_STATICCONTROL_CLOCKDISABLE_FMASK 0x1U
#define GFXREG_DRAWENG_STATICCONTROL_SETM_CLOCKDISABLE(val) (((CYGFX_U32)(val) & 0x1UL) << 5U)
#define GFXREG_DRAWENG_STATICCONTROL_SET_CLOCKDISABLE(val) (((CYGFX_U32)(val) << 5U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_STATICCONTROL_GET_CLOCKDISABLE(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_DRAWENG_SETM_CLOCKDISABLE(s,val) ( (s)->staticcontrol = ((s)->staticcontrol & ~0x20UL) | (((CYGFX_U32)(val) << 5U) & 0x20UL) )
#define GFXREG_DRAWENG_SET_CLOCKDISABLE(s,val)  ( (s)->staticcontrol = (((s)->staticcontrol & ~0x20UL) | ((CYGFX_U32)(val) << 5U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_CLOCKDISABLE(s) ((((s)->staticcontrol) >> 5U) & 0x1UL)
#define GFXREG_DRAWENG_STATICCONTROL_CLOCKDISABLE_OPERATION 0x0U /* Normal Operation */
#define GFXREG_DRAWENG_STATICCONTROL_CLOCKDISABLE_POWERDOWN 0x1U /* Clocks are off */
#define GFXREG_DRAWENG_STATICCONTROL_CLOCKDISABLE_RESET 1U

/* STATICBURSTBUFFERMANAGEMENT: Burst Buffer setup register */
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT 0x00000004U
/* SETFETCHBURSTLENGTH: Set this to the maximum burst length that should be used on the AXI command fetch interface. Please note that SetFetchBurstLength has to be smaller or equal to MaxFetchBurstLength and it has to be one at the least. */
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SETFETCHBURSTLENGTH_FSHIFT 0U
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SETFETCHBURSTLENGTH_FMASK 0x1fU
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SETM_SETFETCHBURSTLENGTH(val) (((CYGFX_U32)(val) & 0x1fUL) )
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SET_SETFETCHBURSTLENGTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_GET_SETFETCHBURSTLENGTH(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_DRAWENG_SETM_SETFETCHBURSTLENGTH(s,val) ( (s)->staticburstbuffermanagement = ((s)->staticburstbuffermanagement & ~0x1fUL) | (((CYGFX_U32)(val) ) & 0x1fUL) )
#define GFXREG_DRAWENG_SET_SETFETCHBURSTLENGTH(s,val)  ( (s)->staticburstbuffermanagement = (((s)->staticburstbuffermanagement & ~0x1fUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_SETFETCHBURSTLENGTH(s) ((((s)->staticburstbuffermanagement) ) & 0x1fUL)
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SETFETCHBURSTLENGTH_RESET 4U

/* SETSTOREBURSTLENGTH: Set this to the burst length that should be used on the AXI alpha store interface. Please note that SetStoreBurstLength has to be smaller or equal to MaxStoreBurstLength. Only a power of two may be specified as burst length. */
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SETSTOREBURSTLENGTH_FSHIFT 16U
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SETSTOREBURSTLENGTH_FMASK 0x1fU
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SETM_SETSTOREBURSTLENGTH(val) (((CYGFX_U32)(val) & 0x1fUL) << 16U)
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SET_SETSTOREBURSTLENGTH(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_GET_SETSTOREBURSTLENGTH(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_DRAWENG_SETM_SETSTOREBURSTLENGTH(s,val) ( (s)->staticburstbuffermanagement = ((s)->staticburstbuffermanagement & ~0x1f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x1f0000UL) )
#define GFXREG_DRAWENG_SET_SETSTOREBURSTLENGTH(s,val)  ( (s)->staticburstbuffermanagement = (((s)->staticburstbuffermanagement & ~0x1f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1fUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_SETSTOREBURSTLENGTH(s) ((((s)->staticburstbuffermanagement) >> 16U) & 0x1fUL)
#define GFXREG_DRAWENG_STATICBURSTBUFFERMANAGEMENT_SETSTOREBURSTLENGTH_RESET 4U

/* STATICCMDBUFFERADDRESS: Lowest command buffer address */
#define GFXREG_DRAWENG_STATICCMDBUFFERADDRESS 0x00000008U
/* CMDBUFFERADDRESS: Start address of the command buffer. The address is word aligned, keep bits [1:0] zero. Writing this register resets the CmdBufferReadPtr register. */
#define GFXREG_DRAWENG_STATICCMDBUFFERADDRESS_CMDBUFFERADDRESS_FSHIFT 0U
#define GFXREG_DRAWENG_STATICCMDBUFFERADDRESS_CMDBUFFERADDRESS_FMASK 0xffffffffU
#define GFXREG_DRAWENG_STATICCMDBUFFERADDRESS_SETM_CMDBUFFERADDRESS(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_DRAWENG_STATICCMDBUFFERADDRESS_SET_CMDBUFFERADDRESS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_STATICCMDBUFFERADDRESS_GET_CMDBUFFERADDRESS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_SETM_CMDBUFFERADDRESS(s,val) ( (s)->staticcmdbufferaddress = ((s)->staticcmdbufferaddress & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_DRAWENG_SET_CMDBUFFERADDRESS(s,val)  ( (s)->staticcmdbufferaddress = (((s)->staticcmdbufferaddress & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_CMDBUFFERADDRESS(s) ((((s)->staticcmdbufferaddress) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_STATICCMDBUFFERADDRESS_CMDBUFFERADDRESS_RESET 0U

/* STATICCMDBUFFERSIZE: Command buffer size  */
#define GFXREG_DRAWENG_STATICCMDBUFFERSIZE 0x0000000cU
/* CMDBUFFERSIZE: Command buffer size in number of 32-bit words. Only power-of-two values are allowed. The value programmed into this field must be one less than the actual number of words. */
#define GFXREG_DRAWENG_STATICCMDBUFFERSIZE_CMDBUFFERSIZE_FSHIFT 0U
#define GFXREG_DRAWENG_STATICCMDBUFFERSIZE_CMDBUFFERSIZE_FMASK 0x3fffffffU
#define GFXREG_DRAWENG_STATICCMDBUFFERSIZE_SETM_CMDBUFFERSIZE(val) (((CYGFX_U32)(val) & 0x3fffffffUL) )
#define GFXREG_DRAWENG_STATICCMDBUFFERSIZE_SET_CMDBUFFERSIZE(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_STATICCMDBUFFERSIZE_GET_CMDBUFFERSIZE(val) (((CYGFX_U32)(val) ) & 0x3fffffffUL)
#define GFXREG_DRAWENG_SETM_CMDBUFFERSIZE(s,val) ( (s)->staticcmdbuffersize = ((s)->staticcmdbuffersize & ~0x3fffffffUL) | (((CYGFX_U32)(val) ) & 0x3fffffffUL) )
#define GFXREG_DRAWENG_SET_CMDBUFFERSIZE(s,val)  ( (s)->staticcmdbuffersize = (((s)->staticcmdbuffersize & ~0x3fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_CMDBUFFERSIZE(s) ((((s)->staticcmdbuffersize) ) & 0x3fffffffUL)
#define GFXREG_DRAWENG_STATICCMDBUFFERSIZE_CMDBUFFERSIZE_RESET 511U

/* CMDBUFFERWRITEPTR: Buffer end address of command list */
#define GFXREG_DRAWENG_CMDBUFFERWRITEPTR 0x00000010U
/* CMDBUFFERWRITEPTR: Command buffer write pointer in words. This pointer must be set by the software to one word after the last valid command (start of the next operation). */
#define GFXREG_DRAWENG_CMDBUFFERWRITEPTR_CMDBUFFERWRITEPTR_FSHIFT 0U
#define GFXREG_DRAWENG_CMDBUFFERWRITEPTR_CMDBUFFERWRITEPTR_FMASK 0x3fffffffU
#define GFXREG_DRAWENG_CMDBUFFERWRITEPTR_SETM_CMDBUFFERWRITEPTR(val) (((CYGFX_U32)(val) & 0x3fffffffUL) )
#define GFXREG_DRAWENG_CMDBUFFERWRITEPTR_SET_CMDBUFFERWRITEPTR(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_CMDBUFFERWRITEPTR_GET_CMDBUFFERWRITEPTR(val) (((CYGFX_U32)(val) ) & 0x3fffffffUL)
#define GFXREG_DRAWENG_SETM_CMDBUFFERWRITEPTR(s,val) ( (s)->cmdbufferwriteptr = ((s)->cmdbufferwriteptr & ~0x3fffffffUL) | (((CYGFX_U32)(val) ) & 0x3fffffffUL) )
#define GFXREG_DRAWENG_SET_CMDBUFFERWRITEPTR(s,val)  ( (s)->cmdbufferwriteptr = (((s)->cmdbufferwriteptr & ~0x3fffffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_CMDBUFFERWRITEPTR(s) ((((s)->cmdbufferwriteptr) ) & 0x3fffffffUL)
#define GFXREG_DRAWENG_CMDBUFFERWRITEPTR_CMDBUFFERWRITEPTR_RESET 0U

/* TRANSFORMATIONMATRIXA11: Transformation Matrix. */
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA11 0x00000014U
/* A11: Matrix coefficient A11. */
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA11_A11_FSHIFT 0U
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA11_A11_FMASK 0xffffffffU
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA11_SETM_A11(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA11_SET_A11(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA11_GET_A11(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_SETM_A11(s,val) ( (s)->transformationmatrixa11 = ((s)->transformationmatrixa11 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_DRAWENG_SET_A11(s,val)  ( (s)->transformationmatrixa11 = (((s)->transformationmatrixa11 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_A11(s) ((((s)->transformationmatrixa11) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA11_A11_IWIDTH 16
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA11_A11_FWIDTH 16
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA11_A11_RESET 0x10000U

/* TRANSFORMATIONMATRIXA21: Transformation Matrix. */
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA21 0x00000018U
/* A21: Matrix coefficient A21. */
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA21_A21_FSHIFT 0U
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA21_A21_FMASK 0xffffffffU
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA21_SETM_A21(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA21_SET_A21(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA21_GET_A21(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_SETM_A21(s,val) ( (s)->transformationmatrixa21 = ((s)->transformationmatrixa21 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_DRAWENG_SET_A21(s,val)  ( (s)->transformationmatrixa21 = (((s)->transformationmatrixa21 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_A21(s) ((((s)->transformationmatrixa21) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA21_A21_IWIDTH 16
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA21_A21_FWIDTH 16
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA21_A21_RESET 0U

/* TRANSFORMATIONMATRIXA12: Transformation Matrix. */
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA12 0x0000001cU
/* A12: Matrix coefficient A12. */
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA12_A12_FSHIFT 0U
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA12_A12_FMASK 0xffffffffU
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA12_SETM_A12(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA12_SET_A12(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA12_GET_A12(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_SETM_A12(s,val) ( (s)->transformationmatrixa12 = ((s)->transformationmatrixa12 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_DRAWENG_SET_A12(s,val)  ( (s)->transformationmatrixa12 = (((s)->transformationmatrixa12 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_A12(s) ((((s)->transformationmatrixa12) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA12_A12_IWIDTH 16
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA12_A12_FWIDTH 16
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA12_A12_RESET 0U

/* TRANSFORMATIONMATRIXA22: Transformation Matrix. */
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA22 0x00000020U
/* A22: Matrix coefficient A22. */
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA22_A22_FSHIFT 0U
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA22_A22_FMASK 0xffffffffU
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA22_SETM_A22(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA22_SET_A22(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA22_GET_A22(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_SETM_A22(s,val) ( (s)->transformationmatrixa22 = ((s)->transformationmatrixa22 & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_DRAWENG_SET_A22(s,val)  ( (s)->transformationmatrixa22 = (((s)->transformationmatrixa22 & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_A22(s) ((((s)->transformationmatrixa22) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA22_A22_IWIDTH 16
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA22_A22_FWIDTH 16
#define GFXREG_DRAWENG_TRANSFORMATIONMATRIXA22_A22_RESET 0x10000U

/* TRANSLATIONVECTORX: Horizontal translation of the alpha frame. */
#define GFXREG_DRAWENG_TRANSLATIONVECTORX 0x00000024U
/* TRANSLATIONX: Horizontal translation (X). Fractional part is used for processing. The integer part modifies the XOffset field of the LayerOffset register for subsequent Blit operation. */
#define GFXREG_DRAWENG_TRANSLATIONVECTORX_TRANSLATIONX_FSHIFT 0U
#define GFXREG_DRAWENG_TRANSLATIONVECTORX_TRANSLATIONX_FMASK 0x3fffffU
#define GFXREG_DRAWENG_TRANSLATIONVECTORX_SETM_TRANSLATIONX(val) (((CYGFX_U32)(val) & 0x3fffffUL) )
#define GFXREG_DRAWENG_TRANSLATIONVECTORX_SET_TRANSLATIONX(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_TRANSLATIONVECTORX_GET_TRANSLATIONX(val) (((CYGFX_U32)(val) ) & 0x3fffffUL)
#define GFXREG_DRAWENG_SETM_TRANSLATIONX(s,val) ( (s)->translationvectorx = ((s)->translationvectorx & ~0x3fffffUL) | (((CYGFX_U32)(val) ) & 0x3fffffUL) )
#define GFXREG_DRAWENG_SET_TRANSLATIONX(s,val)  ( (s)->translationvectorx = (((s)->translationvectorx & ~0x3fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_TRANSLATIONX(s) ((((s)->translationvectorx) ) & 0x3fffffUL)
#define GFXREG_DRAWENG_TRANSLATIONVECTORX_TRANSLATIONX_IWIDTH 16
#define GFXREG_DRAWENG_TRANSLATIONVECTORX_TRANSLATIONX_FWIDTH 6
#define GFXREG_DRAWENG_TRANSLATIONVECTORX_TRANSLATIONX_RESET 0U

/* TRANSLATIONVECTORY: Vertical translation of the alpha frame. */
#define GFXREG_DRAWENG_TRANSLATIONVECTORY 0x00000028U
/* TRANSLATIONY: Vertical translation (Y). Fractional part is used for processing. The integer part modifies the YOffset field of the LayerOffset register for subsequent Blit operation. */
#define GFXREG_DRAWENG_TRANSLATIONVECTORY_TRANSLATIONY_FSHIFT 0U
#define GFXREG_DRAWENG_TRANSLATIONVECTORY_TRANSLATIONY_FMASK 0x3fffffU
#define GFXREG_DRAWENG_TRANSLATIONVECTORY_SETM_TRANSLATIONY(val) (((CYGFX_U32)(val) & 0x3fffffUL) )
#define GFXREG_DRAWENG_TRANSLATIONVECTORY_SET_TRANSLATIONY(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_TRANSLATIONVECTORY_GET_TRANSLATIONY(val) (((CYGFX_U32)(val) ) & 0x3fffffUL)
#define GFXREG_DRAWENG_SETM_TRANSLATIONY(s,val) ( (s)->translationvectory = ((s)->translationvectory & ~0x3fffffUL) | (((CYGFX_U32)(val) ) & 0x3fffffUL) )
#define GFXREG_DRAWENG_SET_TRANSLATIONY(s,val)  ( (s)->translationvectory = (((s)->translationvectory & ~0x3fffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_TRANSLATIONY(s) ((((s)->translationvectory) ) & 0x3fffffUL)
#define GFXREG_DRAWENG_TRANSLATIONVECTORY_TRANSLATIONY_IWIDTH 16
#define GFXREG_DRAWENG_TRANSLATIONVECTORY_TRANSLATIONY_FWIDTH 6
#define GFXREG_DRAWENG_TRANSLATIONVECTORY_TRANSLATIONY_RESET 0U

/* PROCESSINGCONTROL: Drawing Engine main processing control register */
#define GFXREG_DRAWENG_PROCESSINGCONTROL 0x0000002cU
/* SUBPIXELGRID: Higher SubPixelGrid (super sampling) results in better anti-aliased output at the cost of processing time. */
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SUBPIXELGRID_FSHIFT 0U
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SUBPIXELGRID_FMASK 0xfU
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SETM_SUBPIXELGRID(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SET_SUBPIXELGRID(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_PROCESSINGCONTROL_GET_SUBPIXELGRID(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_DRAWENG_SETM_SUBPIXELGRID(s,val) ( (s)->processingcontrol = ((s)->processingcontrol & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_DRAWENG_SET_SUBPIXELGRID(s,val)  ( (s)->processingcontrol = (((s)->processingcontrol & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_SUBPIXELGRID(s) ((((s)->processingcontrol) ) & 0xfUL)
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SUBPIXELGRID_TOTALBITS_1 0x1U /* 1 bit per pixel, anti-aliased */
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SUBPIXELGRID_TOTALBITS_2 0x2U /* 2 bit per pixel, results in 2 bit anti-aliased intermediate value  */
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SUBPIXELGRID_TOTALBITS_4 0x4U /* 4 bit per pixel, results in 4 bit anti-aliased intermediate value */
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SUBPIXELGRID_TOTALBITS_8 0x8U /* 8 bit per pixel, results in 6 bit anti-aliased intermediate value */
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SUBPIXELGRID_RESET 0x8U

/* FILLRULE: Set the fill rule. */
#define GFXREG_DRAWENG_PROCESSINGCONTROL_FILLRULE_FSHIFT 4U
#define GFXREG_DRAWENG_PROCESSINGCONTROL_FILLRULE_FMASK 0x1U
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SETM_FILLRULE(val) (((CYGFX_U32)(val) & 0x1UL) << 4U)
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SET_FILLRULE(val) (((CYGFX_U32)(val) << 4U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_PROCESSINGCONTROL_GET_FILLRULE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_DRAWENG_SETM_FILLRULE(s,val) ( (s)->processingcontrol = ((s)->processingcontrol & ~0x10UL) | (((CYGFX_U32)(val) << 4U) & 0x10UL) )
#define GFXREG_DRAWENG_SET_FILLRULE(s,val)  ( (s)->processingcontrol = (((s)->processingcontrol & ~0x10UL) | ((CYGFX_U32)(val) << 4U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_FILLRULE(s) ((((s)->processingcontrol) >> 4U) & 0x1UL)
#define GFXREG_DRAWENG_PROCESSINGCONTROL_FILLRULE_NONZERO 1U /* a edge count unequal zero is inside */
#define GFXREG_DRAWENG_PROCESSINGCONTROL_FILLRULE_EVENODD 0U /* an odd edge count is inside, an even edge count is outside */
#define GFXREG_DRAWENG_PROCESSINGCONTROL_FILLRULE_RESET 0U

/* TARGETBITSPERPIXEL: Number of bits per pixel in the target buffer for the following blit operation. Must be 1, 2, 4, 8, 16, 18, 24 or 32. This field allows to obtain an aligned bounding box width. */
#define GFXREG_DRAWENG_PROCESSINGCONTROL_TARGETBITSPERPIXEL_FSHIFT 16U
#define GFXREG_DRAWENG_PROCESSINGCONTROL_TARGETBITSPERPIXEL_FMASK 0x3fU
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SETM_TARGETBITSPERPIXEL(val) (((CYGFX_U32)(val) & 0x3fUL) << 16U)
#define GFXREG_DRAWENG_PROCESSINGCONTROL_SET_TARGETBITSPERPIXEL(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_PROCESSINGCONTROL_GET_TARGETBITSPERPIXEL(val) (((CYGFX_U32)(val) >> 16U) & 0x3fUL)
#define GFXREG_DRAWENG_SETM_TARGETBITSPERPIXEL(s,val) ( (s)->processingcontrol = ((s)->processingcontrol & ~0x3f0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3f0000UL) )
#define GFXREG_DRAWENG_SET_TARGETBITSPERPIXEL(s,val)  ( (s)->processingcontrol = (((s)->processingcontrol & ~0x3f0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_TARGETBITSPERPIXEL(s) ((((s)->processingcontrol) >> 16U) & 0x3fUL)
#define GFXREG_DRAWENG_PROCESSINGCONTROL_TARGETBITSPERPIXEL_RESET 32U

/* STORECONTROL: Store unit dynamic control register */
#define GFXREG_DRAWENG_STORECONTROL 0x00000030U
/* STOREBITSPERPIXEL: The resulting alpha mask can be saved to memory with the following BitsPerPixel settings. */
#define GFXREG_DRAWENG_STORECONTROL_STOREBITSPERPIXEL_FSHIFT 0U
#define GFXREG_DRAWENG_STORECONTROL_STOREBITSPERPIXEL_FMASK 0xfU
#define GFXREG_DRAWENG_STORECONTROL_SETM_STOREBITSPERPIXEL(val) (((CYGFX_U32)(val) & 0xfUL) )
#define GFXREG_DRAWENG_STORECONTROL_SET_STOREBITSPERPIXEL(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_STORECONTROL_GET_STOREBITSPERPIXEL(val) (((CYGFX_U32)(val) ) & 0xfUL)
#define GFXREG_DRAWENG_SETM_STOREBITSPERPIXEL(s,val) ( (s)->storecontrol = ((s)->storecontrol & ~0xfUL) | (((CYGFX_U32)(val) ) & 0xfUL) )
#define GFXREG_DRAWENG_SET_STOREBITSPERPIXEL(s,val)  ( (s)->storecontrol = (((s)->storecontrol & ~0xfUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xfUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_STOREBITSPERPIXEL(s) ((((s)->storecontrol) ) & 0xfUL)
#define GFXREG_DRAWENG_STORECONTROL_STOREBITSPERPIXEL_TOTALBITS_1 0x1U /*  1 bit per pixel */
#define GFXREG_DRAWENG_STORECONTROL_STOREBITSPERPIXEL_TOTALBITS_2 0x2U /*  2 bit per pixel */
#define GFXREG_DRAWENG_STORECONTROL_STOREBITSPERPIXEL_TOTALBITS_4 0x4U /*  4 bit per pixel */
#define GFXREG_DRAWENG_STORECONTROL_STOREBITSPERPIXEL_TOTALBITS_8 0x8U /*  8 bit per pixel */
#define GFXREG_DRAWENG_STORECONTROL_STOREBITSPERPIXEL_RESET 0x8U

/* STORESTRIDE: Destination buffer stride in bytes minus one. Used for address generation. */
#define GFXREG_DRAWENG_STORECONTROL_STORESTRIDE_FSHIFT 8U
#define GFXREG_DRAWENG_STORECONTROL_STORESTRIDE_FMASK 0x1ffffU
#define GFXREG_DRAWENG_STORECONTROL_SETM_STORESTRIDE(val) (((CYGFX_U32)(val) & 0x1ffffUL) << 8U)
#define GFXREG_DRAWENG_STORECONTROL_SET_STORESTRIDE(val) (((CYGFX_U32)(val) << 8U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1ffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_STORECONTROL_GET_STORESTRIDE(val) (((CYGFX_U32)(val) >> 8U) & 0x1ffffUL)
#define GFXREG_DRAWENG_SETM_STORESTRIDE(s,val) ( (s)->storecontrol = ((s)->storecontrol & ~0x1ffff00UL) | (((CYGFX_U32)(val) << 8U) & 0x1ffff00UL) )
#define GFXREG_DRAWENG_SET_STORESTRIDE(s,val)  ( (s)->storecontrol = (((s)->storecontrol & ~0x1ffff00UL) | ((CYGFX_U32)(val) << 8U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1ffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_STORESTRIDE(s) ((((s)->storecontrol) >> 8U) & 0x1ffffUL)
#define GFXREG_DRAWENG_STORECONTROL_STORESTRIDE_RESET 0U

/* DESTINATIONBUFFERDIMENSIONS: Maximum dimensions of the destination buffer. The resulting alpha frame is limited to this dimensions. However, the active area can be smaller and is given by ActiveDimensions register. */
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS 0x00000034U
/* DSTBUFFERWIDTH: Maximum width of the destination buffer in pixels minus one. */
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_DSTBUFFERWIDTH_FSHIFT 0U
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_DSTBUFFERWIDTH_FMASK 0x3fffU
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_SETM_DSTBUFFERWIDTH(val) (((CYGFX_U32)(val) & 0x3fffUL) )
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_SET_DSTBUFFERWIDTH(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_GET_DSTBUFFERWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_DRAWENG_SETM_DSTBUFFERWIDTH(s,val) ( (s)->destinationbufferdimensions = ((s)->destinationbufferdimensions & ~0x3fffUL) | (((CYGFX_U32)(val) ) & 0x3fffUL) )
#define GFXREG_DRAWENG_SET_DSTBUFFERWIDTH(s,val)  ( (s)->destinationbufferdimensions = (((s)->destinationbufferdimensions & ~0x3fffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_DSTBUFFERWIDTH(s) ((((s)->destinationbufferdimensions) ) & 0x3fffUL)
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_DSTBUFFERWIDTH_RESET 0U

/* DSTBUFFERHEIGHT: Maximum height of the destination buffer in pixels minus one. */
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_DSTBUFFERHEIGHT_FSHIFT 16U
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_DSTBUFFERHEIGHT_FMASK 0x3fffU
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_SETM_DSTBUFFERHEIGHT(val) (((CYGFX_U32)(val) & 0x3fffUL) << 16U)
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_SET_DSTBUFFERHEIGHT(val) (((CYGFX_U32)(val) << 16U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_GET_DSTBUFFERHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_DRAWENG_SETM_DSTBUFFERHEIGHT(s,val) ( (s)->destinationbufferdimensions = ((s)->destinationbufferdimensions & ~0x3fff0000UL) | (((CYGFX_U32)(val) << 16U) & 0x3fff0000UL) )
#define GFXREG_DRAWENG_SET_DSTBUFFERHEIGHT(s,val)  ( (s)->destinationbufferdimensions = (((s)->destinationbufferdimensions & ~0x3fff0000UL) | ((CYGFX_U32)(val) << 16U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x3fffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_DSTBUFFERHEIGHT(s) ((((s)->destinationbufferdimensions) >> 16U) & 0x3fffUL)
#define GFXREG_DRAWENG_DESTINATIONBUFFERDIMENSIONS_DSTBUFFERHEIGHT_RESET 0U

/* DESTINATIONBUFFER: Destination buffer base address */
#define GFXREG_DRAWENG_DESTINATIONBUFFER 0x00000038U
/* DSTBASEADDRESS: Byte aligned start address of the destination buffer. */
#define GFXREG_DRAWENG_DESTINATIONBUFFER_DSTBASEADDRESS_FSHIFT 0U
#define GFXREG_DRAWENG_DESTINATIONBUFFER_DSTBASEADDRESS_FMASK 0xffffffffU
#define GFXREG_DRAWENG_DESTINATIONBUFFER_SETM_DSTBASEADDRESS(val) (((CYGFX_U32)(val) & 0xffffffffUL) )
#define GFXREG_DRAWENG_DESTINATIONBUFFER_SET_DSTBASEADDRESS(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_DESTINATIONBUFFER_GET_DSTBASEADDRESS(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_SETM_DSTBASEADDRESS(s,val) ( (s)->destinationbuffer = ((s)->destinationbuffer & ~0x0UL) | (((CYGFX_U32)(val) ) & 0x0UL) )
#define GFXREG_DRAWENG_SET_DSTBASEADDRESS(s,val)  ( (s)->destinationbuffer = (((s)->destinationbuffer & ~0x0UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_DSTBASEADDRESS(s) ((((s)->destinationbuffer) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_DESTINATIONBUFFER_DSTBASEADDRESS_RESET 0U

/* START: Drawing Engine start register */
#define GFXREG_DRAWENG_START 0x0000003cU
/* START: Writing a one starts processing. */
#define GFXREG_DRAWENG_START_START_FSHIFT 0U
#define GFXREG_DRAWENG_START_START_FMASK 0x1U
#define GFXREG_DRAWENG_START_SETM_START(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_DRAWENG_START_SET_START(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_SETM_START(s,val) ( (s)->start = ((s)->start & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_DRAWENG_SET_START(s,val)  ( (s)->start = (((s)->start & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_START_START_RESET 0U

/* READACK: Drawing Engine read acknowledge register */
#define GFXREG_DRAWENG_READACK 0x00000040U
/* READACK: Writing a one acknowledges the read of the status registers ActiveDimensions and Offset. */
#define GFXREG_DRAWENG_READACK_READACK_FSHIFT 0U
#define GFXREG_DRAWENG_READACK_READACK_FMASK 0x1U
#define GFXREG_DRAWENG_READACK_SETM_READACK(val) (((CYGFX_U32)(val) & 0x1UL) )
#define GFXREG_DRAWENG_READACK_SET_READACK(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_SETM_READACK(s,val) ( (s)->readack = ((s)->readack & ~0x1UL) | (((CYGFX_U32)(val) ) & 0x1UL) )
#define GFXREG_DRAWENG_SET_READACK(s,val)  ( (s)->readack = (((s)->readack & ~0x1UL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_READACK_READACK_RESET 0U

/* READACK_ERROR: Writing a one acknowledges the read of the status register Error. */
#define GFXREG_DRAWENG_READACK_READACK_ERROR_FSHIFT 1U
#define GFXREG_DRAWENG_READACK_READACK_ERROR_FMASK 0x1U
#define GFXREG_DRAWENG_READACK_SETM_READACK_ERROR(val) (((CYGFX_U32)(val) & 0x1UL) << 1U)
#define GFXREG_DRAWENG_READACK_SET_READACK_ERROR(val) (((CYGFX_U32)(val) << 1U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_SETM_READACK_ERROR(s,val) ( (s)->readack = ((s)->readack & ~0x2UL) | (((CYGFX_U32)(val) << 1U) & 0x2UL) )
#define GFXREG_DRAWENG_SET_READACK_ERROR(s,val)  ( (s)->readack = (((s)->readack & ~0x2UL) | ((CYGFX_U32)(val) << 1U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_READACK_READACK_ERROR_RESET 0U

/* CMDBUFFERREADPTR: Buffer end address of command list */
#define GFXREG_DRAWENG_CMDBUFFERREADPTR 0x00000044U
/* CMDBUFFERREADPTR: Command buffer read pointer in words. This pointer is modified by the Drawing Engine hardware and indicates which words are ultimately consumed. */
#define GFXREG_DRAWENG_CMDBUFFERREADPTR_CMDBUFFERREADPTR_FSHIFT 0U
#define GFXREG_DRAWENG_CMDBUFFERREADPTR_CMDBUFFERREADPTR_FMASK 0x3fffffffU
#define GFXREG_DRAWENG_CMDBUFFERREADPTR_GET_CMDBUFFERREADPTR(val) (((CYGFX_U32)(val) ) & 0x3fffffffUL)
#define GFXREG_DRAWENG_GET_CMDBUFFERREADPTR(s) ((((s)->cmdbufferreadptr) ) & 0x3fffffffUL)
#define GFXREG_DRAWENG_CMDBUFFERREADPTR_CMDBUFFERREADPTR_RESET 0U

/* ACTIVEDIMENSIONS: Shows active dimensions of the output alpha frame. This register is aligned to the ClipWindowDimensions register of the fetch. */
#define GFXREG_DRAWENG_ACTIVEDIMENSIONS 0x00000048U
/* ACTIVEWIDTH: Active width of the resulting alpha frame minus one. */
#define GFXREG_DRAWENG_ACTIVEDIMENSIONS_ACTIVEWIDTH_FSHIFT 0U
#define GFXREG_DRAWENG_ACTIVEDIMENSIONS_ACTIVEWIDTH_FMASK 0x3fffU
#define GFXREG_DRAWENG_ACTIVEDIMENSIONS_GET_ACTIVEWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_DRAWENG_GET_ACTIVEWIDTH(s) ((((s)->activedimensions) ) & 0x3fffUL)
#define GFXREG_DRAWENG_ACTIVEDIMENSIONS_ACTIVEWIDTH_RESET 0U

/* ACTIVEHEIGHT: Active height of the resulting alpha frame minus one. */
#define GFXREG_DRAWENG_ACTIVEDIMENSIONS_ACTIVEHEIGHT_FSHIFT 16U
#define GFXREG_DRAWENG_ACTIVEDIMENSIONS_ACTIVEHEIGHT_FMASK 0x3fffU
#define GFXREG_DRAWENG_ACTIVEDIMENSIONS_GET_ACTIVEHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_DRAWENG_GET_ACTIVEHEIGHT(s) ((((s)->activedimensions) >> 16U) & 0x3fffUL)
#define GFXREG_DRAWENG_ACTIVEDIMENSIONS_ACTIVEHEIGHT_RESET 0U

/* LAYEROFFSET: Desired position of the alpha frame for the following Blit operation. This register is aligned to the LayerOffset of the fetch and given as signed 16.0 values. */
#define GFXREG_DRAWENG_LAYEROFFSET 0x0000004cU
/* XOFFSET: Horizontal offset (X). */
#define GFXREG_DRAWENG_LAYEROFFSET_XOFFSET_FSHIFT 0U
#define GFXREG_DRAWENG_LAYEROFFSET_XOFFSET_FMASK 0xffffU
#define GFXREG_DRAWENG_LAYEROFFSET_GET_XOFFSET(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_DRAWENG_GET_XOFFSET(s) ((((s)->layeroffset) ) & 0xffffUL)
#define GFXREG_DRAWENG_LAYEROFFSET_XOFFSET_RESET 0U

/* YOFFSET: Vertical offset (Y). */
#define GFXREG_DRAWENG_LAYEROFFSET_YOFFSET_FSHIFT 16U
#define GFXREG_DRAWENG_LAYEROFFSET_YOFFSET_FMASK 0xffffU
#define GFXREG_DRAWENG_LAYEROFFSET_GET_YOFFSET(val) (((CYGFX_U32)(val) >> 16U) & 0xffffUL)
#define GFXREG_DRAWENG_GET_YOFFSET(s) ((((s)->layeroffset) >> 16U) & 0xffffUL)
#define GFXREG_DRAWENG_LAYEROFFSET_YOFFSET_RESET 0U

/* ERROR: Error status of finished operation. If register is unequal to zero the resulting raster image is most likely corrupted. */
#define GFXREG_DRAWENG_ERROR 0x00000050U
/* FETCHERROR: Indicates if an bus error occurred while fetching the command list. */
#define GFXREG_DRAWENG_ERROR_FETCHERROR_FSHIFT 0U
#define GFXREG_DRAWENG_ERROR_FETCHERROR_FMASK 0x1U
#define GFXREG_DRAWENG_ERROR_GET_FETCHERROR(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_DRAWENG_GET_FETCHERROR(s) ((((s)->error) ) & 0x1UL)
#define GFXREG_DRAWENG_ERROR_FETCHERROR_RESET 0U

/* STOREERROR: Indicates if storing the alpha bitmap to memory failed. */
#define GFXREG_DRAWENG_ERROR_STOREERROR_FSHIFT 1U
#define GFXREG_DRAWENG_ERROR_STOREERROR_FMASK 0x1U
#define GFXREG_DRAWENG_ERROR_GET_STOREERROR(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_DRAWENG_GET_STOREERROR(s) ((((s)->error) >> 1U) & 0x1UL)
#define GFXREG_DRAWENG_ERROR_STOREERROR_RESET 0U

/* INSTRERROR: Indicates if the command list contained an illegal or unexpected instruction. */
#define GFXREG_DRAWENG_ERROR_INSTRERROR_FSHIFT 2U
#define GFXREG_DRAWENG_ERROR_INSTRERROR_FMASK 0x1U
#define GFXREG_DRAWENG_ERROR_GET_INSTRERROR(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_DRAWENG_GET_INSTRERROR(s) ((((s)->error) >> 2U) & 0x1UL)
#define GFXREG_DRAWENG_ERROR_INSTRERROR_RESET 0U

/* OVERFLOWERROR: Indicates if an overflow occurred when truncating to internal data width. */
#define GFXREG_DRAWENG_ERROR_OVERFLOWERROR_FSHIFT 3U
#define GFXREG_DRAWENG_ERROR_OVERFLOWERROR_FMASK 0x1U
#define GFXREG_DRAWENG_ERROR_GET_OVERFLOWERROR(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_DRAWENG_GET_OVERFLOWERROR(s) ((((s)->error) >> 3U) & 0x1UL)
#define GFXREG_DRAWENG_ERROR_OVERFLOWERROR_RESET 0U

/* BURSTBUFFERPROPERTIES: Burst Buffer Property register */
#define GFXREG_DRAWENG_BURSTBUFFERPROPERTIES 0x00000054U
/* MAXFETCHBURSTLENGTH: Maximum Burst Length that can be configured for command fetch. */
#define GFXREG_DRAWENG_BURSTBUFFERPROPERTIES_MAXFETCHBURSTLENGTH_FSHIFT 0U
#define GFXREG_DRAWENG_BURSTBUFFERPROPERTIES_MAXFETCHBURSTLENGTH_FMASK 0x1fU
#define GFXREG_DRAWENG_BURSTBUFFERPROPERTIES_GET_MAXFETCHBURSTLENGTH(val) (((CYGFX_U32)(val) ) & 0x1fUL)
#define GFXREG_DRAWENG_GET_MAXFETCHBURSTLENGTH(s) ((((s)->burstbufferproperties) ) & 0x1fUL)
#define GFXREG_DRAWENG_BURSTBUFFERPROPERTIES_MAXFETCHBURSTLENGTH_RESET (none)U

/* MAXSTOREBURSTLENGTH: Maximum Burst Length that can be configured for alpha store. */
#define GFXREG_DRAWENG_BURSTBUFFERPROPERTIES_MAXSTOREBURSTLENGTH_FSHIFT 16U
#define GFXREG_DRAWENG_BURSTBUFFERPROPERTIES_MAXSTOREBURSTLENGTH_FMASK 0x1fU
#define GFXREG_DRAWENG_BURSTBUFFERPROPERTIES_GET_MAXSTOREBURSTLENGTH(val) (((CYGFX_U32)(val) >> 16U) & 0x1fUL)
#define GFXREG_DRAWENG_GET_MAXSTOREBURSTLENGTH(s) ((((s)->burstbufferproperties) >> 16U) & 0x1fUL)
#define GFXREG_DRAWENG_BURSTBUFFERPROPERTIES_MAXSTOREBURSTLENGTH_RESET (none)U

/* STATUS: Status bits. */
#define GFXREG_DRAWENG_STATUS 0x00000058U
/* STATUSBUSY: Indicates if Drawing Engine is busy with drawing a command list. */
#define GFXREG_DRAWENG_STATUS_STATUSBUSY_FSHIFT 0U
#define GFXREG_DRAWENG_STATUS_STATUSBUSY_FMASK 0x1U
#define GFXREG_DRAWENG_STATUS_GET_STATUSBUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_DRAWENG_GET_STATUSBUSY(s) ((((s)->status) ) & 0x1UL)
#define GFXREG_DRAWENG_STATUS_STATUSBUSY_RESET 0U

/* WAITACK: Indicates if Drawing Engine is waiting on an read acknowledge. */
#define GFXREG_DRAWENG_STATUS_WAITACK_FSHIFT 1U
#define GFXREG_DRAWENG_STATUS_WAITACK_FMASK 0x1U
#define GFXREG_DRAWENG_STATUS_GET_WAITACK(val) (((CYGFX_U32)(val) >> 1U) & 0x1UL)
#define GFXREG_DRAWENG_GET_WAITACK(s) ((((s)->status) >> 1U) & 0x1UL)
#define GFXREG_DRAWENG_STATUS_WAITACK_RESET 0U

/* STATUSDIRTY: Indicates if the linebuffer memory requires a clear prior to the next drawing operation. */
#define GFXREG_DRAWENG_STATUS_STATUSDIRTY_FSHIFT 2U
#define GFXREG_DRAWENG_STATUS_STATUSDIRTY_FMASK 0x1U
#define GFXREG_DRAWENG_STATUS_GET_STATUSDIRTY(val) (((CYGFX_U32)(val) >> 2U) & 0x1UL)
#define GFXREG_DRAWENG_GET_STATUSDIRTY(s) ((((s)->status) >> 2U) & 0x1UL)
#define GFXREG_DRAWENG_STATUS_STATUSDIRTY_RESET 1U

/* STARTPENDING: Indicates if another start trigger is pending. */
#define GFXREG_DRAWENG_STATUS_STARTPENDING_FSHIFT 3U
#define GFXREG_DRAWENG_STATUS_STARTPENDING_FMASK 0x1U
#define GFXREG_DRAWENG_STATUS_GET_STARTPENDING(val) (((CYGFX_U32)(val) >> 3U) & 0x1UL)
#define GFXREG_DRAWENG_GET_STARTPENDING(s) ((((s)->status) >> 3U) & 0x1UL)
#define GFXREG_DRAWENG_STATUS_STARTPENDING_RESET 0U

/* PERFCOUNTERFRONT: Performance counter result */
#define GFXREG_DRAWENG_PERFCOUNTERFRONT 0x0000005cU
/* PERFRESULTFRONT: Returns the performance counter value of the front pipeline. For the total cycle count add PerfResultFront and PerfResultBack. For debug purposes only, read when stable only. */
#define GFXREG_DRAWENG_PERFCOUNTERFRONT_PERFRESULTFRONT_FSHIFT 0U
#define GFXREG_DRAWENG_PERFCOUNTERFRONT_PERFRESULTFRONT_FMASK 0xffffffffU
#define GFXREG_DRAWENG_PERFCOUNTERFRONT_GET_PERFRESULTFRONT(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_GET_PERFRESULTFRONT(s) ((((s)->perfcounterfront) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_PERFCOUNTERFRONT_PERFRESULTFRONT_RESET 0U

/* PERFCOUNTERBACK: Performance counter result */
#define GFXREG_DRAWENG_PERFCOUNTERBACK 0x00000060U
/* PERFRESULTBACK: Returns the performance counter value of the back pipeline. For the total cycle count add PerfResultFront and PerfResultBack. For debug purposes only, read when stable only. */
#define GFXREG_DRAWENG_PERFCOUNTERBACK_PERFRESULTBACK_FSHIFT 0U
#define GFXREG_DRAWENG_PERFCOUNTERBACK_PERFRESULTBACK_FMASK 0xffffffffU
#define GFXREG_DRAWENG_PERFCOUNTERBACK_GET_PERFRESULTBACK(val) (((CYGFX_U32)(val) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_GET_PERFRESULTBACK(s) ((((s)->perfcounterback) ) & 0xffffffffUL)
#define GFXREG_DRAWENG_PERFCOUNTERBACK_PERFRESULTBACK_RESET 0U

/* QUADRATICBEZIERCONTROL: Control the quadratic Bezier line segmentation */
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL 0x00000064U
/* EPSILON: Additive term that can be added to the termination condition in terms of sub pixel grid units. */
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_EPSILON_FSHIFT 0U
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_EPSILON_FMASK 0xffffU
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_SETM_EPSILON(val) (((CYGFX_U32)(val) & 0xffffUL) )
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_SET_EPSILON(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_GET_EPSILON(val) (((CYGFX_U32)(val) ) & 0xffffUL)
#define GFXREG_DRAWENG_SETM_EPSILON(s,val) ( (s)->quadraticbeziercontrol = ((s)->quadraticbeziercontrol & ~0xffffUL) | (((CYGFX_U32)(val) ) & 0xffffUL) )
#define GFXREG_DRAWENG_SET_EPSILON(s,val)  ( (s)->quadraticbeziercontrol = (((s)->quadraticbeziercontrol & ~0xffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0xffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_EPSILON(s) ((((s)->quadraticbeziercontrol) ) & 0xffffUL)
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_EPSILON_RESET 25U

/* MINRECURSION: Minimum recursion depth. */
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_MINRECURSION_FSHIFT 20U
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_MINRECURSION_FMASK 0x7U
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_SETM_MINRECURSION(val) (((CYGFX_U32)(val) & 0x7UL) << 20U)
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_SET_MINRECURSION(val) (((CYGFX_U32)(val) << 20U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_GET_MINRECURSION(val) (((CYGFX_U32)(val) >> 20U) & 0x7UL)
#define GFXREG_DRAWENG_SETM_MINRECURSION(s,val) ( (s)->quadraticbeziercontrol = ((s)->quadraticbeziercontrol & ~0x700000UL) | (((CYGFX_U32)(val) << 20U) & 0x700000UL) )
#define GFXREG_DRAWENG_SET_MINRECURSION(s,val)  ( (s)->quadraticbeziercontrol = (((s)->quadraticbeziercontrol & ~0x700000UL) | ((CYGFX_U32)(val) << 20U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_MINRECURSION(s) ((((s)->quadraticbeziercontrol) >> 20U) & 0x7UL)
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_MINRECURSION_RESET 0U

/* MAXRECURSION: Maximum recursion depth. This feature is disabled if set to zero. */
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_MAXRECURSION_FSHIFT 24U
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_MAXRECURSION_FMASK 0x7U
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_SETM_MAXRECURSION(val) (((CYGFX_U32)(val) & 0x7UL) << 24U)
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_SET_MAXRECURSION(val) (((CYGFX_U32)(val) << 24U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_GET_MAXRECURSION(val) (((CYGFX_U32)(val) >> 24U) & 0x7UL)
#define GFXREG_DRAWENG_SETM_MAXRECURSION(s,val) ( (s)->quadraticbeziercontrol = ((s)->quadraticbeziercontrol & ~0x7000000UL) | (((CYGFX_U32)(val) << 24U) & 0x7000000UL) )
#define GFXREG_DRAWENG_SET_MAXRECURSION(s,val)  ( (s)->quadraticbeziercontrol = (((s)->quadraticbeziercontrol & ~0x7000000UL) | ((CYGFX_U32)(val) << 24U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x7UL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_MAXRECURSION(s) ((((s)->quadraticbeziercontrol) >> 24U) & 0x7UL)
#define GFXREG_DRAWENG_QUADRATICBEZIERCONTROL_MAXRECURSION_RESET 5U

/* SEGMENTATIONCONTROL: Control the line segmentation */
#define GFXREG_DRAWENG_SEGMENTATIONCONTROL 0x00000068U
/* THRESHOLD: A line with a height below the threshold value doesn't get segmented into two equal height lines. The threshold is given in terms of sub pixel grid units. */
#define GFXREG_DRAWENG_SEGMENTATIONCONTROL_THRESHOLD_FSHIFT 0U
#define GFXREG_DRAWENG_SEGMENTATIONCONTROL_THRESHOLD_FMASK 0x1ffffU
#define GFXREG_DRAWENG_SEGMENTATIONCONTROL_SETM_THRESHOLD(val) (((CYGFX_U32)(val) & 0x1ffffUL) )
#define GFXREG_DRAWENG_SEGMENTATIONCONTROL_SET_THRESHOLD(val) (((CYGFX_U32)(val) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1ffffUL, __FILE__, __LINE__))
#define GFXREG_DRAWENG_SEGMENTATIONCONTROL_GET_THRESHOLD(val) (((CYGFX_U32)(val) ) & 0x1ffffUL)
#define GFXREG_DRAWENG_SETM_THRESHOLD(s,val) ( (s)->segmentationcontrol = ((s)->segmentationcontrol & ~0x1ffffUL) | (((CYGFX_U32)(val) ) & 0x1ffffUL) )
#define GFXREG_DRAWENG_SET_THRESHOLD(s,val)  ( (s)->segmentationcontrol = (((s)->segmentationcontrol & ~0x1ffffUL) | ((CYGFX_U32)(val) ) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1ffffUL, __FILE__, __LINE__) )
#define GFXREG_DRAWENG_GET_THRESHOLD(s) ((((s)->segmentationcontrol) ) & 0x1ffffUL)
#define GFXREG_DRAWENG_SEGMENTATIONCONTROL_THRESHOLD_RESET 81U

/* FETCHSTATUS: Shows status information */
#define GFXREG_DRAWENG_FETCHSTATUS 0x0000006cU
/* FETCHSTATUSBUSY: Fetch unit is busy */
#define GFXREG_DRAWENG_FETCHSTATUS_FETCHSTATUSBUSY_FSHIFT 0U
#define GFXREG_DRAWENG_FETCHSTATUS_FETCHSTATUSBUSY_FMASK 0x1U
#define GFXREG_DRAWENG_FETCHSTATUS_GET_FETCHSTATUSBUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_DRAWENG_GET_FETCHSTATUSBUSY(s) ((((s)->fetchstatus) ) & 0x1UL)
#define GFXREG_DRAWENG_FETCHSTATUS_FETCHSTATUSBUSY_RESET (none)U

/* FETCHSTATUSREQUEST: Fetch unit requesting on the AXI interface, waiting for interconnect acknowledge */
#define GFXREG_DRAWENG_FETCHSTATUS_FETCHSTATUSREQUEST_FSHIFT 5U
#define GFXREG_DRAWENG_FETCHSTATUS_FETCHSTATUSREQUEST_FMASK 0x1U
#define GFXREG_DRAWENG_FETCHSTATUS_GET_FETCHSTATUSREQUEST(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_DRAWENG_GET_FETCHSTATUSREQUEST(s) ((((s)->fetchstatus) >> 5U) & 0x1UL)
#define GFXREG_DRAWENG_FETCHSTATUS_FETCHSTATUSREQUEST_RESET (none)U

/* FETCHSTATUSISFIFO: Fetch unit buffer is used as FIFO */
#define GFXREG_DRAWENG_FETCHSTATUS_FETCHSTATUSISFIFO_FSHIFT 7U
#define GFXREG_DRAWENG_FETCHSTATUS_FETCHSTATUSISFIFO_FMASK 0x1U
#define GFXREG_DRAWENG_FETCHSTATUS_GET_FETCHSTATUSISFIFO(val) (((CYGFX_U32)(val) >> 7U) & 0x1UL)
#define GFXREG_DRAWENG_GET_FETCHSTATUSISFIFO(s) ((((s)->fetchstatus) >> 7U) & 0x1UL)
#define GFXREG_DRAWENG_FETCHSTATUS_FETCHSTATUSISFIFO_RESET (none)U

/* STORESTATUS: Shows status information */
#define GFXREG_DRAWENG_STORESTATUS 0x00000070U
/* STORESTATUSBUSY: Store unit is busy */
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSBUSY_FSHIFT 0U
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSBUSY_FMASK 0x1U
#define GFXREG_DRAWENG_STORESTATUS_GET_STORESTATUSBUSY(val) (((CYGFX_U32)(val) ) & 0x1UL)
#define GFXREG_DRAWENG_GET_STORESTATUSBUSY(s) ((((s)->storestatus) ) & 0x1UL)
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSBUSY_RESET (none)U

/* STORESTATUSBUFFERSIDLE: AXI interface buffers are idle */
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSBUFFERSIDLE_FSHIFT 4U
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSBUFFERSIDLE_FMASK 0x1U
#define GFXREG_DRAWENG_STORESTATUS_GET_STORESTATUSBUFFERSIDLE(val) (((CYGFX_U32)(val) >> 4U) & 0x1UL)
#define GFXREG_DRAWENG_GET_STORESTATUSBUFFERSIDLE(s) ((((s)->storestatus) >> 4U) & 0x1UL)
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSBUFFERSIDLE_RESET (none)U

/* STORESTATUSREQUEST: Store unit requesting on the AXI interface, waiting for interconnect acknowledge */
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSREQUEST_FSHIFT 5U
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSREQUEST_FMASK 0x1U
#define GFXREG_DRAWENG_STORESTATUS_GET_STORESTATUSREQUEST(val) (((CYGFX_U32)(val) >> 5U) & 0x1UL)
#define GFXREG_DRAWENG_GET_STORESTATUSREQUEST(s) ((((s)->storestatus) >> 5U) & 0x1UL)
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSREQUEST_RESET (none)U

/* STORESTATUSCOMPLETE: Store unit completed all requested AXI transfers */
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSCOMPLETE_FSHIFT 6U
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSCOMPLETE_FMASK 0x1U
#define GFXREG_DRAWENG_STORESTATUS_GET_STORESTATUSCOMPLETE(val) (((CYGFX_U32)(val) >> 6U) & 0x1UL)
#define GFXREG_DRAWENG_GET_STORESTATUSCOMPLETE(s) ((((s)->storestatus) >> 6U) & 0x1UL)
#define GFXREG_DRAWENG_STORESTATUS_STORESTATUSCOMPLETE_RESET (none)U

/* INTERNALDIMENSIONS: Shows internal dimensions of the output alpha frame.  */
#define GFXREG_DRAWENG_INTERNALDIMENSIONS 0x00000074U
/* INTERNALWIDTH: Internal width of the alpha frame in pixels minus one. */
#define GFXREG_DRAWENG_INTERNALDIMENSIONS_INTERNALWIDTH_FSHIFT 0U
#define GFXREG_DRAWENG_INTERNALDIMENSIONS_INTERNALWIDTH_FMASK 0x3fffU
#define GFXREG_DRAWENG_INTERNALDIMENSIONS_GET_INTERNALWIDTH(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_DRAWENG_GET_INTERNALWIDTH(s) ((((s)->internaldimensions) ) & 0x3fffUL)
#define GFXREG_DRAWENG_INTERNALDIMENSIONS_INTERNALWIDTH_RESET (none)U

/* INTERNALHEIGHT: Internal height of the alpha frame in pixels minus one. */
#define GFXREG_DRAWENG_INTERNALDIMENSIONS_INTERNALHEIGHT_FSHIFT 16U
#define GFXREG_DRAWENG_INTERNALDIMENSIONS_INTERNALHEIGHT_FMASK 0x3fffU
#define GFXREG_DRAWENG_INTERNALDIMENSIONS_GET_INTERNALHEIGHT(val) (((CYGFX_U32)(val) >> 16U) & 0x3fffUL)
#define GFXREG_DRAWENG_GET_INTERNALHEIGHT(s) ((((s)->internaldimensions) >> 16U) & 0x3fffUL)
#define GFXREG_DRAWENG_INTERNALDIMENSIONS_INTERNALHEIGHT_RESET (none)U

/* BLOCKCOUNT: Shows the internal block count.  */
#define GFXREG_DRAWENG_BLOCKCOUNT 0x00000078U
/* BLOCKCOUNT: Number of drawing blocks minus one. */
#define GFXREG_DRAWENG_BLOCKCOUNT_BLOCKCOUNT_FSHIFT 0U
#define GFXREG_DRAWENG_BLOCKCOUNT_BLOCKCOUNT_FMASK 0x3fffU
#define GFXREG_DRAWENG_BLOCKCOUNT_GET_BLOCKCOUNT(val) (((CYGFX_U32)(val) ) & 0x3fffUL)
#define GFXREG_DRAWENG_GET_BLOCKCOUNT(s) ((((s)->blockcount) ) & 0x3fffUL)
#define GFXREG_DRAWENG_BLOCKCOUNT_BLOCKCOUNT_RESET (none)U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_DRAWENG_REGISTER_H */

