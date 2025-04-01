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
 * \date        Tue May 26 11:58:42 2020
 * \file        gfxreg_capengcfg_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *              Design:   capengcfg
 *              Source:   capengcfg.component.xml
 *              Template: component_h.tpl
 * \brief      Iris capengcfg register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_CAPENGCFG_REGISTER_H
#define GFXREG_CAPENGCFG_REGISTER_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* capengcfg registers */
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


/* RESERVED: Do not use. */
#define GFXREG_CAPENGCFG_RESERVED 0x00000000U
/* RESERVED: Do not use. This register is set for avoiding sub_dec tpl error. */
#define GFXREG_CAPENGCFG_RESERVED_RESERVED_FSHIFT 31U
#define GFXREG_CAPENGCFG_RESERVED_RESERVED_FMASK 0x1U
#define GFXREG_CAPENGCFG_RESERVED_SETM_RESERVED(val) (((CYGFX_U32)(val) & 0x1UL) << 31U)
#define GFXREG_CAPENGCFG_RESERVED_SET_RESERVED(val) (((CYGFX_U32)(val) << 31U) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__))
#define GFXREG_CAPENGCFG_RESERVED_GET_RESERVED(val) (((CYGFX_U32)(val) >> 31U) & 0x1UL)
#define GFXREG_CAPENGCFG_SETM_RESERVED(s,val) ( (s)->reserved = ((s)->reserved & ~0x80000000UL) | (((CYGFX_U32)(val) << 31U) & 0x80000000UL) )
#define GFXREG_CAPENGCFG_SET_RESERVED(s,val)  ( (s)->reserved = (((s)->reserved & ~0x80000000UL) | ((CYGFX_U32)(val) << 31U) ) | GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, 0x1UL, __FILE__, __LINE__) )
#define GFXREG_CAPENGCFG_GET_RESERVED(s) ((((s)->reserved) >> 31U) & 0x1UL)
#define GFXREG_CAPENGCFG_RESERVED_RESERVED_RESET 0U



/*! \endcond Hide for doxygen */

#endif /* GFXREG_CAPENGCFG_REGISTER_H */

