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
 * \file    gccgfx_gpscaler.h
 */


#ifndef GCCGFX_GPSCALER_H
#define GCCGFX_GPSCALER_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
 * \addtogroup gccgfx_scaler
 * \brief      GPScaler configuration interface
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/** \name Warping Coordinate Bit Depth */
/** \{ */
typedef CYGFX_U32 GCCGFX_HW_GPSCALER_USAGE;                              /**< Identifier for the module that uses the scaler. */
#define GCCGFX_HW_GPSCALER_USAGE_GFX2D    ((GCCGFX_HW_GPSCALER_USAGE)0u) /**< Scaler used by the blit engine. */
#define GCCGFX_HW_GPSCALER_USAGE_DISP_CAP ((GCCGFX_HW_GPSCALER_USAGE)1u) /**< Scaler used by capture or display. */
/** \} */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Initialize filter parameters.

    \param [out] pFilter  Pointer to GCCGFX_IRIS_FILTER_S structure to be
                          initialized.

    \retval  None
**/
CYGFX_EXTERN void GccGfx_HwResetFilter( GCCGFX_IRIS_FILTER_S* pFilter);

/**
    Extract an inverse Scaler matrix from a given matrix

    \param [in] matrixSrc  The given matrix (with scaler parts)
    \param [in] srcSize  Define the matrix_src size. Can be 6 or 9
    \param [in] matrixScalerInverse  The scaler matrix that will be calculated
    \param [in] filter  Depending on the filter settings the scaler matrix will
                        also extract subpixel movements
                        or force downscaling for ::CYGFX_GEN_FILTER_ANISOTROPIC.
                        Can be ::CYGFX_GEN_FILTER_NEAREST, ::CYGFX_GEN_FILTER_BILINEAR or
                        ::CYGFX_GEN_FILTER_ANISOTROPIC.
    \param [in] w  Width of the scaler output
    \param [in] h  Height of the scaler output

    \retval ::CYGFX_TRUE  if a Scaler matrix was successfully extracted
    \retval ::CYGFX_FALSE if the given matrix does not need Scaler or the image
            size is out of Scaler working range
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_HwScalerExtractMatrix( const CYGFX_FLOAT* matrixSrc,
                                                      CYGFX_U32          srcSize,
                                                      IRIS_MATH_M3X2     matrixScalerInverse,
                                                      CYGFX_U32          filter,
                                                      CYGFX_U32          w,
                                                      CYGFX_U32          h);

/**
    Adapt frame dimension and program the scaler.
    This function programs the scaler hardware block according to the given
    parameters.
    It also adapts the frame dimension to the width and height expected on the
    scaler input.

    \param [in] cardHandle  The card handle
    \param [in] matrixI  A 3x2 floating point matrix describing scaling and
                         translation:
                         matrix_i[0] = reciprocal horizontal scale factor
                         matrix_i[3] = reciprocal vertical scale factor
                         matrix_i[4] = horizontal translation
                         matrix_i[5] = vertical translation

                         matrix_i[1] and matrix_i[2] are ignored
    \param [in,out] nOutX  The frame width after scaling. Receives the expected
                           input frame width.
    \param [in,out] nOutY  The frame height after scaling. Receives the expected
                           input frame height.
    \param [in] filter  The filter settings to program. Can be
                        ::CYGFX_GEN_FILTER_NEAREST, ::CYGFX_GEN_FILTER_BILINEAR or
                        ::CYGFX_GEN_FILTER_ANISOTROPIC.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwScalerProgram( const GCCGFX_CARD_HANDLE cardHandle,
                                          const IRIS_MATH_M3X2     matrixI,
                                          CYGFX_U32*               nOutX,
                                          CYGFX_U32*               nOutY,
                                          CYGFX_U32                filter);

/**
    Configure filter parameters.

    \param [out] pFilter  Pointer to GCCGFX_IRIS_FILTER_S structure to be
                          configured.
    \param [in] eChannel  Filter channel
    \param [in] firExponent  FIR product sum is divided by 2**(fir_exponent) and
                             rounded. Must be: 0 <= fir_exponent < 16.
    \param [in] tapsH  Filter width, can be 0 or every odd value between 3 and 15,
                       must be consistent with the number of coefficients in firCoefficientsH.
    \param [in] firCoefficientsH  Pointer to a vector of coefficients doing
                                  horizontal filtering. The coefficients are taps_h numbers in 8-bit signed
                                  integer format. Null pointer and taps_h = 0 means that the horizontal filtering
                                  is bypassed.
    \param [in] tapsV  Filter height, can be 0 or every odd value between 3 and 15,
                       must be consistent with the number of coefficients in firCoefficientsV.
    \param [in] firCoefficientsV  Pointer to a vector of coefficients doing
                                  vertical filtering. The coefficients are taps_v numbers in 8-bit signed integer
                                  format. Null pointer and taps_v = 0 means that the vertical filtering is
                                  bypassed.

    \retval CYGFX_OK on success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwSetFilter( GCCGFX_IRIS_FILTER_S*   pFilter,
                                             CYGFX_CM_FILTER_CHANNEL eChannel,
                                             CYGFX_U08               firExponent,
                                             CYGFX_U08               tapsH,
                                             const CYGFX_S08*        firCoefficientsH,
                                             CYGFX_U08               tapsV,
                                             const CYGFX_S08*        firCoefficientsV);

/**
    Check if filter is active.

    \param [in] pFilter  Pointer to GCCGFX_IRIS_FILTER_S structure, describing the
                         currently configured filter settings.

    \retval ::CYGFX_TRUE if filter is active.
    \retval ::CYGFX_FALSE, if filter is bypassed.
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_HwFilterIsActiv( const GCCGFX_IRIS_FILTER_S* pFilter);

/**
    Return the maximal frame width depending on the number of horizontal filter
    taps.

    \param [in] pFilter  Pointer to GCCGFX_IRIS_FILTER_S structure, describing the
                         currently configured filter settings.
    \param [in] usage  Reports the usage for the filter.

    \retval Return the maximal width
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_HwFilterGetMaxWidth( const GCCGFX_IRIS_FILTER_S* pFilter,
                                                   GCCGFX_HW_GPSCALER_USAGE    usage);

/**
    Setup the vertical and horizontal scalers to neutral mode and disable filtering.

    \param [in] cardHandle  The card handle.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwGpScalerBypass( const GCCGFX_CARD_HANDLE cardHandle);

/**
    Program the filter unit. Return the number of additional input pixels at each
    border of the filtered rectangle. Calculate the dimensions of the input
    rectangle depending on the dimensions of the output rectangle and the filter
    tap number.

    \param [in] cardHandle  Handle for the write operation.
    \param [in,out] pFilter  Pointer to GCCGFX_IRIS_FILTER_S structure describing
                             the desired filter settings.
    \param [out] xOff  Pointer to number of pixels to decrease the source start
                       position horizontally.
    \param [out] yOff  Pointer to number of pixels to decrease the source start
                       position vertically.
    \param [in,out] nOutX  Pointer to the width of the filter rectangle (will be
                           increased depending on the filter size).
    \param [in,out] nOutY  Pointer to the height of the filter rectangle (will be
                           increased depending on the filter size).

    \retval CYGFX_OK on success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwProgramFilter( const GCCGFX_CARD_HANDLE    cardHandle,
                                                 const GCCGFX_IRIS_FILTER_S* pFilter,
                                                 CYGFX_U32*                  xOff,
                                                 CYGFX_U32*                  yOff,
                                                 CYGFX_U32*                  nOutX,
                                                 CYGFX_U32*                  nOutY);

/**
    Perform mDst = mScaler * mSrc.

    \param [out] mDst  Matrix to hold the result.
    \param [in] mScaler  Scaler matrix to be applied.
    \param [in] mSrc  Source matrix.
    \param [in] src_dst_size  Size of result matrix: 9 (3x3) or 6 (3x2).

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwScalerMultiplyScalerMat( CYGFX_FLOAT*       mDst,
                                                    const CYGFX_FLOAT* mScaler,
                                                    const CYGFX_FLOAT* mSrc,
                                                    CYGFX_U32          src_dst_size);

/**
    The size for blitting must be increased for filtering. The funtion defines the
    size.

    \param [in] pFilter  Pointer to GCCGFX_IRIS_FILTER_S structure, describing the
                         currently configured filter settings.
    \param [in] h  Pointer to horizonal increase
    \param [in] v  Pointer to vertical increase

    \retval No return value.
**/
CYGFX_EXTERN void GccGfx_HwFilterIncreaseSize( const GCCGFX_IRIS_FILTER_S* pFilter,
                                               CYGFX_S32*                  h,
                                               CYGFX_S32*                  v);

/** \} end addtogroup */

#ifdef __cplusplus
}
#endif


#endif /* GCCGFX_GPSCALER_H */

