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
 * \date        Tue May 26 11:58:43 2020
 * \file        gfxreg_fetchdecode_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *                Design:   fetchdecode
 *                Source:   structuredef.xml
 *                Template: structure_h.tpl
 * \brief      Iris fetchdecode register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_FETCHDECODE_STRUCTUR_H
#define GFXREG_FETCHDECODE_STRUCTUR_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* fetchdecode registers */
/******************************************************************************/

/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */


typedef struct {
    /** Source buffer base address of layer 0. */
    un_gfxreg_fetchdecode_baseaddress0_t un_baseaddress0; /*! Source buffer base address of layer 0. */
    /** Source buffer attributes for layer 0. */
    un_gfxreg_fetchdecode_sourcebufferattributes0_t un_sourcebufferattributes0; /*! Source buffer attributes for layer 0. */
    /** Source buffer dimension of layer 0. */
    un_gfxreg_fetchdecode_sourcebufferdimension0_t un_sourcebufferdimension0; /*! Source buffer dimension of layer 0. */
    /** Size of color components for RGB, YUV and index formats (layer 0). */
    un_gfxreg_fetchdecode_colorcomponentbits0_t un_colorcomponentbits0; /*! Size of color components for RGB, YUV and index formats (layer 0). */
    /** Bit position of color components for RGB, YUV and index formats (layer 0). */
    un_gfxreg_fetchdecode_colorcomponentshift0_t un_colorcomponentshift0; /*! Bit position of color components for RGB, YUV and index formats (layer 0). */
    /** Position of layer 0 within the destination frame. */
    un_gfxreg_fetchdecode_layeroffset0_t un_layeroffset0; /*! Position of layer 0 within the destination frame. */
    /** Clip window position for layer 0. */
    un_gfxreg_fetchdecode_clipwindowoffset0_t un_clipwindowoffset0; /*! Clip window position for layer 0. */
    /** Clip window size for layer 0. */
    un_gfxreg_fetchdecode_clipwindowdimensions0_t un_clipwindowdimensions0; /*! Clip window size for layer 0. */
    /** Constant color for layer 0. */
    un_gfxreg_fetchdecode_constantcolor0_t un_constantcolor0; /*! Constant color for layer 0. */
    /** Common properties of layer 0. */
    un_gfxreg_fetchdecode_layerproperty0_t un_layerproperty0; /*! Common properties of layer 0. */
} stc_gfxreg_fetch_common_t;






/*! \endcond Hide for doxygen */

#endif /* GFXREG_FETCHDECODE_STRUCTUR_H */
