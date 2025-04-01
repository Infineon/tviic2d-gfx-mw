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
/*****************************************************************************/


/**
 * \file    gccgfx_rop.h
 */


#ifndef GCCGFX_ROP_H
#define GCCGFX_ROP_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_rop
* \brief      Raster Operation Unit setup interface
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Program the ROP0 module for the blit usage

    \param [in] cardHandle  The card handle.
    \param [in] attr  The attribute part of the context.

    \retval CYGFX_OK On success; otherwise the related error code
**/
CYGFX_EXTERN void GccGfx_HwProgramRop( const GCCGFX_CARD_HANDLE   cardHandle,
                                       const GCCGFX_BE_CTXATTR_S* attr);

/**
    Set the RGBA components of the Raster Operation attribute of
    GCCGFX_BE_CTXATTR_S attr.

    \param [in] attr  The attribute part of the context.
    \param [in] op_red  Raster Operation red component.
    \param [in] op_green  Raster Operation green component.
    \param [in] op_blue  Raster Operation blue component.
    \param [in] op_alpha  Raster Operation alpha component.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwSetRop( GCCGFX_BE_CTXATTR_S* attr,
                                   CYGFX_U08            op_red,
                                   CYGFX_U08            op_green,
                                   CYGFX_U08            op_blue,
                                   CYGFX_U08            op_alpha);

/**
    Return the usage flags that correspond to a ROP mode.

    \param [in] mode  Mode to be checked.

    \retval None
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_HwCheckRopUsage( CYGFX_U32 mode);


/** \} end addtogroup */
#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_ROP_H */

