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
 * \file    gccgfx_colormatrix.h
 */


#ifndef GCCGFX_COLORMATRIX_H
#define GCCGFX_COLORMATRIX_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_colormatrix
* \brief HwaColorMatrix internal interface
* VIDEOSS color matrix setup interface
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_HW_COLOR_MATRIX_4        ((CYGFX_U32)(4u))  /**< The HW system id of Matrix#4 */
#define GCCGFX_HW_COLOR_MATRIX_9        ((CYGFX_U32)(9u))  /**< The HW system id of Matrix#9 */
#define GCCGFX_HW_COLOR_MATRIX_DISENG0  ((CYGFX_U32)(0u))  /**< Color matrix of DisEng0 */
#define GCCGFX_HW_COLOR_MATRIX_DISENG1  ((CYGFX_U32)(1u))  /**< Color matrix of DisEng1 */

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
    Initializes color matrix attribute structure

    \param [out] attr  Pointer to the color matrix attribute structure.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwResetColorMatrix( GCCGFX_IRIS_COLORMATRIX_S* attr);

/**
    Sets color matrix attribute structure, according to given parameters

    \param [out] attr  The color Matrix attribute structure to be set.
    \param [in] format  Color Matrix format. Must be ::CYGFX_CM_CMATRIX_FORMAT_4X3
                        or ::CYGFX_CM_CMATRIX_FORMAT_5X4.
    \param [in] fMatrix  Array of floating point values describing the color matrix.

    \retval ::CYGFX_OK on success, otherwise the related error code
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwSetColorMatrix( GCCGFX_IRIS_COLORMATRIX_S* attr,
                                                  CYGFX_CM_CMATRIX_FORMAT    format,
                                                  const CYGFX_FLOAT*         fMatrix);

/**
    Returns the color matrix mode used for the given attribute.

    \param [in] attr  The color Matrix attribute structure

    \retval ::CYGFX_FALSE if no correction is used
    \retval ::CYGFX_TRUE otherwise
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_HwColorMatrixUsed( const GCCGFX_IRIS_COLORMATRIX_S* attr);

/**
    Program Color matrix coefficients and control register

    \param [in] cardHandle  The card handle.
    \param [in] id  The HW system id of the color matrix.
    \param [in] attr  The color matrix attributes of the context, as returned by
                      GccGfx_HwSetColorMatrix().

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwProgramColorMatrix( const GCCGFX_CARD_HANDLE         cardHandle,
                                               CYGFX_U32                        id,
                                               const GCCGFX_IRIS_COLORMATRIX_S* attr);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_COLORMATRIX_H */

