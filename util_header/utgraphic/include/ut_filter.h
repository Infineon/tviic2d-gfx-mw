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

/**
    \file        ut_filter.h
    \brief       This file defines some interfaces that are part of other drivers.

    The util library implements very simple instances of these interfaces, but
    they must be not used for software products.
    However, it allows to run sample applications.
*/

#ifndef UT_FILTER_H
#define UT_FILTER_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */


/** \addtogroup ut_filter Utilities for filter calculation for the blit path
\{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/**
    Sets the filter with float parameters.
    \param[in,out] beCtx Context object
    \param [in] eChannel Filter channel
    \param [in] taps_h Filter width. Can be 0 or every odd value between 3 and 15; must be consistent with the number of coefficients in vector fir_coefficients_h.
    \param [in] fCoefficients_h  Pointer to a vector of coefficients doing horizontal filtering
    \param [in] taps_v Filter height. Can be 0 or every odd value between 3 and 15; must be consistent with the number of coefficients in vector fir_coefficients_v.
    \param [in] fCoefficients_v Pointer to a vector of coefficients doing vertical filtering
    \param [in] bNormalize If true, horizontal and vertical filter setting will be scaled to one
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utFilterSetFilter(CYGFX_BE_CONTEXT beCtx, CYGFX_CM_FILTER_CHANNEL eChannel,
                               CYGFX_U08                    taps_h,
                               const CYGFX_FLOAT*           fCoefficients_h,
                               CYGFX_U08                    taps_v,
                               const CYGFX_FLOAT*           fCoefficients_v,
                               CYGFX_BOOL                   bNormalize);

/**
    Calculates one-dimensional Gaussian filter.

    \param[out] fCoefficients  Contains the array of filter coefficients
    \param[in] sigma Deviation of Gaussian distribution.
*/
void utCalculate1DGauss(CYGFX_FLOAT fCoefficients[15], CYGFX_FLOAT sigma);

/**
    Blurring effect with Gaussian filter using CyGfx_CmSetFilter.

    \param[in,out] beCtx Context object
    \param[in] eChannel Specifies the color channels that will be filtered
    \param[in] sigma Deviation of Gaussian distribution \note sigma > 0 and sigma < 5.0 are recommended.
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utFilterSetGaussFilter(CYGFX_BE_CONTEXT beCtx, CYGFX_CM_FILTER_CHANNEL eChannel, CYGFX_FLOAT sigma);

/**
    Sharpen effect with a Laplace filter using CyGfx_CmSetFilter.

    \param[in,out] beCtx Context object
    \param[in] eChannel Specifies the color channels that will be filtered
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utFilterSetLaplaceSharpen(CYGFX_BE_CONTEXT beCtx, CYGFX_CM_FILTER_CHANNEL eChannel);

/**
    Sharpen effect with Gaussian filter using CyGfx_CmSetFilter.
    \note It uses 1 - utFilterSetGaussFilter.

    \param[in,out] beCtx Context object
    \param[in] eChannel Specifies the color channels that will be filtered
    \param[in] sigma Deviation of Gaussian Distribution \note sigma > 0 and sigma < 5.0 are recommended.

    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utFilterSetGaussSharpen(CYGFX_BE_CONTEXT beCtx, CYGFX_CM_FILTER_CHANNEL eChannel, CYGFX_FLOAT sigma);


/**
    Disables the filter unit.

    \param[in,out] beCtx Context object
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utFilterFree(CYGFX_BE_CONTEXT beCtx);

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_FILTER_H */


