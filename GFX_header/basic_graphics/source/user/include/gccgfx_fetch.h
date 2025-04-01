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
 * \file    gccgfx_fetch.h
 */


#ifndef GCCGFX_FETCH_H
#define GCCGFX_FETCH_H

/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_fetch
* \brief      Fetch Unit configuration interface
*/

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
/**
    Macro to detect if scan direction has flag ::GCCGFX_HW_FETCH_SCAN_BIT_UNIFORM

    \param [in] v  Scan Direction

    \retval ::CYGFX_TRUE If the check is true.
    \retval ::CYGFX_FALSE If the check is false.
**/
#define GCCGFX_HW_FETCH_IS_SCAN_UNIFORM(v) (((v) & GCCGFX_HW_FETCH_SCAN_BIT_UNIFORM) != 0u)

/**
    Macro to detect if scan direction has flag ::GCCGFX_HW_FETCH_SCAN_BIT_SIMPLE

    \param [in] v  Scan Direction

    \retval ::CYGFX_TRUE If the check is true.
    \retval ::CYGFX_FALSE If the check is false.
**/
#define GCCGFX_HW_FETCH_IS_SCAN_SIMPLE(v) (((v) & GCCGFX_HW_FETCH_SCAN_BIT_SIMPLE) != 0u)

/**
    Macro to detect if scan direction has flag
    ::GCCGFX_HW_FETCH_SCAN_BIT_LEFT_RIGHT_DOWN

    \param [in] v  Scan Direction

    \retval ::CYGFX_TRUE If the check is true.
    \retval ::CYGFX_FALSE If the check is false.
**/
#define GCCGFX_HW_FETCH_IS_SCAN_LEFT_RIGHT_DOWN(v) (((v) & GCCGFX_HW_FETCH_SCAN_BIT_LEFT_RIGHT_DOWN) != 0u)

/**
    Macro to detect if scan direction has flag ::GCCGFX_HW_FETCH_SCAN_BIT_VERTICAL

    \param [in] v  Scan Direction

    \retval ::CYGFX_TRUE If the check is true.
    \retval ::CYGFX_FALSE If the check is false.
**/
#define GCCGFX_HW_FETCH_IS_SCAN_VERTICAL(v) (((v) & GCCGFX_HW_FETCH_SCAN_BIT_VERTICAL) != 0u)

/**
    Macro to detect if scan direction has flag ::GCCGFX_HW_FETCH_SCAN_BIT_AFFINE

    \param [in] v  Scan Direction, can be one of the
                   ::GCCGFX_HW_FETCH_SCANDIRECTION values

    \retval ::CYGFX_TRUE If the check is true.
    \retval ::CYGFX_FALSE If the check is false.
**/
#define GCCGFX_HW_FETCH_IS_SCAN_AFFINE(v) (((v) & GCCGFX_HW_FETCH_SCAN_BIT_AFFINE) != 0u)

/**
    Macro to detect if scan direction has flag
    ::GCCGFX_HW_FETCH_SCAN_BIT_PERSPECTIVE

    \param [in] v  Scan Direction

    \retval ::CYGFX_TRUE If the check is true.
    \retval ::CYGFX_FALSE If the check is false.
**/
#define GCCGFX_HW_FETCH_IS_SCAN_PERSPECTIVE(v) (((v) & GCCGFX_HW_FETCH_SCAN_BIT_PERSPECTIVE) != 0u)

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/** \name Fetch scan direction */
/** \{ */
typedef CYGFX_U32 GCCGFX_HW_FETCH_SCANDIRECTION;                                        /**< Scan Direction Type */
#define GCCGFX_HW_FETCH_SCAN_BIT_UNIFORM         ((GCCGFX_HW_FETCH_SCANDIRECTION)0x01U) /**< Uniform matrix <1 0 0 1 x y> (compression compliant) */
#define GCCGFX_HW_FETCH_SCAN_BIT_HORIZONTAL      ((GCCGFX_HW_FETCH_SCANDIRECTION)0x02U) /**< Every horizontal direction (mirrored, scaled) <u 0 0 v x y> */
#define GCCGFX_HW_FETCH_SCAN_BIT_LEFT_RIGHT_DOWN ((GCCGFX_HW_FETCH_SCANDIRECTION)0x04U) /**< Left to right, up to down (RLD compliant with Scaler) <u 0 0 v x y> with u,v > 0 */
#define GCCGFX_HW_FETCH_SCAN_BIT_SIMPLE          ((GCCGFX_HW_FETCH_SCANDIRECTION)0x08U) /**< GCCGFX_HW_FETCH_SCAN_BIT_HORIZONTAL or GCCGFX_HW_FETCH_SCAN_BIT_VERTICAL with scale factor +- .5 1 2 (Can realized by each Fetch) */
#define GCCGFX_HW_FETCH_SCAN_BIT_VERTICAL        ((GCCGFX_HW_FETCH_SCANDIRECTION)0x10U) /**< Every horizontal direction (mirrored, scaled) <0 u v 0 x y> */
#define GCCGFX_HW_FETCH_SCAN_BIT_AFFINE          ((GCCGFX_HW_FETCH_SCANDIRECTION)0x20U) /**< All others but not the previous (rotation with scaling) but not 3D (perspective) */
#define GCCGFX_HW_FETCH_SCAN_BIT_PERSPECTIVE     ((GCCGFX_HW_FETCH_SCANDIRECTION)0x40U) /**< 3D (perspective) */
#define GCCGFX_HW_FETCH_SCAN_UNKNOWN             ((GCCGFX_HW_FETCH_SCANDIRECTION)0x00U) /**< Not yet determined */
#define GCCGFX_HW_FETCH_SCAN_UNIFORM             ((GCCGFX_HW_FETCH_SCANDIRECTION)(GCCGFX_HW_FETCH_SCAN_BIT_UNIFORM | \
                                                                                  GCCGFX_HW_FETCH_SCAN_BIT_HORIZONTAL | \
                                                                                  GCCGFX_HW_FETCH_SCAN_BIT_LEFT_RIGHT_DOWN | \
                                                                                  GCCGFX_HW_FETCH_SCAN_BIT_SIMPLE)) /**< uniform matrix like ::GCCGFX_HW_FETCH_SCAN_BIT_UNIFORM but also other bits are set */
/** \} */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/**
    Initializes the Fetch module.
    It fills the internal gfx_BurstBufferProperties structure with device related settings.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwInitFetch(void);

/**
    Fill the ::GCCGFX_IRIS_FETCH_S structure with valid parameters

    \param [in,out] surf  Pointer to the Surface structure.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwResetFetch( GCCGFX_IRIS_FETCH_S* surf);

/**
    Program Fetch module

    \param [in] cardHandle  Handle for the write operations
    \param [in] pCSurf  VIDEOSS surface structure
    \param [in] fetch_id  HW system id of the Fetch unit
    \param [in] sub_fetch_id  HW system id of sub layer of the Fetch
    \param [in] mat  Transformation matrix
    \param [in] m_size  Number of elements of the transformation matrix
    \param [in] nStepsX  Width of the frame
    \param [in] nStepsY  Height of the frame
    \param [in] inputselect  Selects function for the frame input port (
                             ..._INPUTSELECT_INACTIVE=0, ..._INPUTSELECT_ALPHAMASK=2,
                             ..._INPUTSELECT_COORDINATE=3)
    \param [in] pWarp  Warp structure
    \param [in] ctx  Blit contexts
    \param [in] filter  Filter (::CYGFX_GEN_FILTER_NEAREST or
                        ::CYGFX_GEN_FILTER_BILINEAR)
    \param [in] ScanDirection  Scan direction, if already known
    \param [in] onlyCommon  If ::CYGFX_TRUE, program only basic registers
    \param [in] eColorSpace  Defines the color modification

    \retval ::CYGFX_OK On success. Otherwise the related error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwProgramFetch( const GCCGFX_CARD_HANDLE          cardHandle,
                                                const GCCGFX_IRIS_FETCH_S*        pCSurf,
                                                GCCGFX_GEN_SEL_E                  fetch_id,
                                                CYGFX_U32                         sub_fetch_id,
                                                const CYGFX_FLOAT*                mat,
                                                CYGFX_U32                         m_size,
                                                CYGFX_U32                         nStepsX,
                                                CYGFX_U32                         nStepsY,
                                                CYGFX_U32                         inputselect,
                                                const GCCGFX_IRIS_WARPSETTINGS_S* pWarp,
                                                const GCCGFX_BE_CTX_S*            ctx,
                                                const CYGFX_GEN_FILTER            filter,
                                                GCCGFX_HW_FETCH_SCANDIRECTION     ScanDirection,
                                                const CYGFX_BOOL                  onlyCommon,
                                                CYGFX_SM_COLOR_SPACE              eColorSpace);

/**
    Check the matrix (this can be a 3x2 or 3x3 matrix) for compatibility with
    NORMAL scan mode that is available for all Fetches

    \param [in] m[]  Transformation matrix
    \param [in] size  Number of matrix elements. Must be 6 or 9.

    \retval Required scan mode, which is required for instance for burst setup.
**/
CYGFX_EXTERN GCCGFX_HW_FETCH_SCANDIRECTION GccGfx_FetchAnalyseMatrix( const CYGFX_FLOAT m[],
                                                                      CYGFX_U32         size);

/**
    Set warp parameters to internal structure.

    \param [in] pWarpSettings  Internal structure that get parameters
    \param [in] pVirtAddr  Virtual address of the coordinate buffer
    \param [in] pPhysAddr  Physical address of the coordinate buffer
    \param [in] pWarpParam  API structure with parameters

    \retval ::CYGFX_OK On success. Otherwise the related error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwFetchSetWarpProperties( GCCGFX_IRIS_WARPSETTINGS_S* pWarpSettings,
                                                          const void*                 pVirtAddr,
                                                          const void*                 pPhysAddr,
                                                          const CYGFX_WARP_PARAM_S*   pWarpParam);

/**
    Reset warp parameters in internal structure.

    \param [in] pWarpSettings  Internal structure that get parameters

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwFetchResetWarpProperties( GCCGFX_IRIS_WARPSETTINGS_S* pWarpSettings);

/**
    Program warp parameters. Configure the second fetch unit that reads the
    coordinate buffer for a warp layer.

    \param [in] cardHandle  Card handle for the display or graphics device.
    \param [in] fetch_id  ID of the secondary fetch unit (GCCGFX_GEN_SEL_FETCHECO1
                          or GCCGFX_GEN_SEL_FETCHMASK).
    \param [in] w  Warp coordinate buffer width.
    \param [in] h  Warp coordinate buffer height.
    \param [in] nStepsX  Width of the frame.
    \param [in] nStepsY  Height of the frame.
    \param [in] addr  Physical address of the warp coordinate buffer.
    \param [in] mode  HW representation of the warp mode (only bits per coordinate
                      are used).

    \retval None
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwFetchProgramWarpCoord( const GCCGFX_CARD_HANDLE cardHandle,
                                                         GCCGFX_GEN_SEL_E         fetch_id,
                                                         CYGFX_U32                w,
                                                         CYGFX_U32                h,
                                                         CYGFX_U32                nStepsX,
                                                         CYGFX_U32                nStepsY,
                                                         CYGFX_ADDR               addr,
                                                         CYGFX_U32                mode);

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_FETCH_H */

