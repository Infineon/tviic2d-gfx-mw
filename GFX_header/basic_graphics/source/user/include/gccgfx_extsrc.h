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
 * \file    gccgfx_extsrc.h
 */


#ifndef GCCGFX_EXTSRC_H
#define GCCGFX_EXTSRC_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_extsrc
* \brief      VIDEOSS external source unit setup interface
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Set up an ExtSrc unit.

    \param [in] cardHandle  Handle for the write operation.
    \param [in] extsrc_id  The module id (::GCCGFX_GEN_SEL_EXTSRC4 or
                           ::GCCGFX_GEN_SEL_EXTSRC8)
    \param [in] control  32 bit value for extsrc_control register
    \param [in] xStart  Left offset of clip region
    \param [in] yStart  Top offset of clip region
    \param [in] width  Width of clip region
    \param [in] height  Height of clip region
    \param [in] colorBits  color component size in bits (only for RGB input).
    \param [in] colorShift  color component bit position (only for RGB input)

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwProgramExtSrc( const GCCGFX_CARD_HANDLE cardHandle,
                                          GCCGFX_GEN_SEL_E         extsrc_id,
                                          CYGFX_U32                control,
                                          CYGFX_U16                xStart,
                                          CYGFX_U16                yStart,
                                          CYGFX_U16                width,
                                          CYGFX_U16                height,
                                          CYGFX_U32                colorBits,
                                          CYGFX_U32                colorShift);

/**
    Set up ExtSrc4, so that no data is passed to Store4.

    \note
    Only used by capture module for ExtSrc#4

    \param [in] cardHandle  Handle for the write operation.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwProgramExtSrcBypass( const GCCGFX_CARD_HANDLE cardHandle);

/**
    Get control value depending upon the type of capture mode.

    \note
    Only used by capture module for ExtSrc#4

    \param [in] pCtx  Capture context object.

    \retval ::CYGFX_U32 control value
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_HwExtSrcGetControl( GCCGFX_CAP_CTX_S* pCtx);

/**
    Enable the shadow load 

    \note
    Only used for ExtSrc4

    \param [in] enable  Enable the Shadow load.

    \retval None
**/
CYGFX_EXTERN  void GccGfx_HwExtSrcSHDEN(CYGFX_BOOL enable);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_EXTSRC_H */

