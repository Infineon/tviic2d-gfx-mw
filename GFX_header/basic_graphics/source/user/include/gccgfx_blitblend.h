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
 * \file    gccgfx_blitblend.h
 */


#ifndef GCCGFX_BLITBLEND_H
#define GCCGFX_BLITBLEND_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_blitblend
* \brief      Interface for BlitEng blending mode
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
    Sets the RGBA blend function of the given ::GCCGFX_BE_CTXATTR_S.

    \param [in] attr  Blit Engine attribute context.
    \param [in] func_red_src  Red source color blend function.
    \param [in] func_red_dst  Red destination color blend function.
    \param [in] func_green_src  Green source color blend function.
    \param [in] func_green_dst  Green destination color blend function.
    \param [in] func_blue_src  Blue source color blend function.
    \param [in] func_blue_dst  Blue destination color blend function.
    \param [in] func_alpha_src  Alpha source color blend function.
    \param [in] func_alpha_dst  Alpha destination color blend function.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwSetBlendFunc( GCCGFX_BE_CTXATTR_S* attr,
                                         CYGFX_BE_BF          func_red_src,
                                         CYGFX_BE_BF          func_red_dst,
                                         CYGFX_BE_BF          func_green_src,
                                         CYGFX_BE_BF          func_green_dst,
                                         CYGFX_BE_BF          func_blue_src,
                                         CYGFX_BE_BF          func_blue_dst,
                                         CYGFX_BE_BF          func_alpha_src,
                                         CYGFX_BE_BF          func_alpha_dst);

/**
    Sets the RGBA blend mode of the given ::GCCGFX_BE_CTXATTR_S.

    \param [in] attr  Blit Engine attribute context.
    \param [in] mode_red  Red color blend mode.
    \param [in] mode_green  Green color blend mode.
    \param [in] mode_blue  Blue color blend mode.
    \param [in] mode_alpha  Alpha color blend mode.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwSetBlendMode( GCCGFX_BE_CTXATTR_S* attr,
                                         CYGFX_BE_BM          mode_red,
                                         CYGFX_BE_BM          mode_green,
                                         CYGFX_BE_BM          mode_blue,
                                         CYGFX_BE_BM          mode_alpha);

/**
    Program BlitBlend

    \param [in] cardHandle  The card handle for writing
    \param [in] attr  The attribute part of the context. If attr is 0 the unit will
                      be programmed in bypass but with neutralLeft and neutralRight.
    \param [in] neutralLeft  Number of neutral left border pixels (for BPP not
                             multiple of 8)
    \param [in] neutralRight  Number of neutral right border pixels (for BPP not
                              multiple of 8)

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwProgramBlitblend( const GCCGFX_CARD_HANDLE   cardHandle,
                                             const GCCGFX_BE_CTXATTR_S* attr,
                                             CYGFX_U32                  neutralLeft,
                                             CYGFX_U32                  neutralRight);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_BLITBLEND_H */

