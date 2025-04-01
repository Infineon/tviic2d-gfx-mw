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
    \file        mml_gdc_types.h
*/


#ifndef MML_GDC_TYPE_H
#define MML_GDC_TYPE_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_types.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_types
    \code #include "mml_gdc_types.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions */
/** \{ */
#define MML_GDC_WARP_DEPTH                  CYGFX_GEN_WARP_DEPTH                    /**< Simple redefinition */
#define MML_GDC_WARP_DEPTH_1                CYGFX_GEN_WARP_DEPTH_1                  /**< Simple redefinition */
#define MML_GDC_WARP_DEPTH_2                CYGFX_GEN_WARP_DEPTH_2                  /**< Simple redefinition */
#define MML_GDC_WARP_DEPTH_4                CYGFX_GEN_WARP_DEPTH_4                  /**< Simple redefinition */
#define MML_GDC_WARP_DEPTH_8                CYGFX_GEN_WARP_DEPTH_8                  /**< Simple redefinition */
#define MML_GDC_WARP_DEPTH_16               CYGFX_GEN_WARP_DEPTH_16                 /**< Simple redefinition */
#define MML_GDC_WARP_DEPTH_32               CYGFX_GEN_WARP_DEPTH_32                 /**< Simple redefinition */

#define MML_GDC_WARP_COORDINATE_MODE        CYGFX_GEN_WARP_COORDINATE_MODE          /**< Simple redefinition */
#define MML_GDC_WARP_COORDINATE_MODE_PNT    CYGFX_GEN_WARP_COORDINATE_MODE_PNT      /**< Simple redefinition */
#define MML_GDC_WARP_COORDINATE_MODE_D_PNT  CYGFX_GEN_WARP_COORDINATE_MODE_D_PNT    /**< Simple redefinition */
#define MML_GDC_WARP_COORDINATE_MODE_DD_PNT CYGFX_GEN_WARP_COORDINATE_MODE_DD_PNT   /**< Simple redefinition */

#define MML_GDC_WARP_PARAM                  CYGFX_WARP_PARAM_S                      /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mml_gdc_types*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MML_GDC_TYPE_H */

