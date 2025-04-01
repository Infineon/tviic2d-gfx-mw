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
 * \file    cygfx_types.h
 */


#ifndef CYGFX_TYPES_H
#define CYGFX_TYPES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup cygfx_types
* \code #include "cygfx_types.h" \endcode
* \brief Definition of types used in the Graphics Driver
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/** \name Polarity control */
/** \{ */
typedef CYGFX_U08 CYGFX_GEN_POLARITY;                                               /**< Type for polarity control */
#define CYGFX_GEN_POLARITY_LOW  ((CYGFX_GEN_POLARITY)((CYGFX_GEN_POLARITY)(0x00u))) /**< Control signal active LOW */
#define CYGFX_GEN_POLARITY_HIGH ((CYGFX_GEN_POLARITY)((CYGFX_GEN_POLARITY)(0x01u))) /**< Control signal active HIGH */
/** \} */

/** \name Filter types */
/** \{ */
typedef CYGFX_U08 CYGFX_GEN_FILTER;                                                /**< Type for filter operations */
#define CYGFX_GEN_FILTER_NEAREST     ((CYGFX_GEN_FILTER)((CYGFX_GEN_FILTER)0x00u)) /**< NEAREST filter enabled */
#define CYGFX_GEN_FILTER_BILINEAR    ((CYGFX_GEN_FILTER)((CYGFX_GEN_FILTER)0x01u)) /**< BILINEAR filter enabled */
#define CYGFX_GEN_FILTER_ANISOTROPIC ((CYGFX_GEN_FILTER)((CYGFX_GEN_FILTER)0x02u)) /**< ANISOTROPIC filter enabled. This mode improves the quality for perspective transformation if no MASK surface is used. This filter can only be used for IBO rendering. Not supported by the Display module. */
/** \} */

/** \brief Bit depth of the Warp coordinate buffer */
/** \name Warping coordinate bit depth */
/** \{ */
typedef CYGFX_U08 CYGFX_GEN_WARP_DEPTH;                       /**< Type for bit depth of warping coordinate buffer */
#define CYGFX_GEN_WARP_DEPTH_1  ((CYGFX_GEN_WARP_DEPTH)0x01u) /**< x and y alternating as signed (-3).4 fix-point (1 bit) */
#define CYGFX_GEN_WARP_DEPTH_2  ((CYGFX_GEN_WARP_DEPTH)0x02u) /**< x and y combined as signed (-3).4 fix-point (2 bits) */
#define CYGFX_GEN_WARP_DEPTH_4  ((CYGFX_GEN_WARP_DEPTH)0x04u) /**< x and y combined as signed (-2).4 fix-point (4 bits) */
#define CYGFX_GEN_WARP_DEPTH_8  ((CYGFX_GEN_WARP_DEPTH)0x08u) /**< x and y combined as signed 0.4 fix-point (8 bits) */
#define CYGFX_GEN_WARP_DEPTH_16 ((CYGFX_GEN_WARP_DEPTH)0x10u) /**< x and y combined as signed 4.4 fix-point (16 bits) */
#define CYGFX_GEN_WARP_DEPTH_32 ((CYGFX_GEN_WARP_DEPTH)0x20u) /**< x and y combined as signed 12.4 fix-point (32 bits) */
/** \} */

/** \brief Content of the Warp coordinate input */
/** \name Warping coordinate mode */
/** \{ */
typedef CYGFX_U08 CYGFX_GEN_WARP_COORDINATE_MODE;                                    /**< Type for input mode of warping coordinate buffer */
#define CYGFX_GEN_WARP_COORDINATE_MODE_PNT    ((CYGFX_GEN_WARP_COORDINATE_MODE)0x0u) /**< x and y (sample points) */
#define CYGFX_GEN_WARP_COORDINATE_MODE_D_PNT  ((CYGFX_GEN_WARP_COORDINATE_MODE)0x1u) /**< dx and dy (vectors between adjacent sample points) */
#define CYGFX_GEN_WARP_COORDINATE_MODE_DD_PNT ((CYGFX_GEN_WARP_COORDINATE_MODE)0x2u) /**< ddx and ddy (deltas between adjacent vectors) */
/** \} */


/**
    Warp coordinate buffer description.
    This structure is one part of a WarpCoordinateBuffer followed by the coordinate
    data. See ::CyGfx_BeSetWarpCoordinateBuffer.
**/
typedef struct
{
    CYGFX_U08                      WarpBufferVersion; /**< Must be 0 (without KeepLines) or 1 (includes KeepLines). */
    CYGFX_GEN_WARP_COORDINATE_MODE mode;              /**< Defines the coordinate mode: See ::CYGFX_GEN_WARP_COORDINATE_MODE */
    CYGFX_GEN_WARP_DEPTH           bpc;               /**< Bits per x, y coordinate: see ::CYGFX_GEN_WARP_DEPTH */
    CYGFX_U08                      SymmetricOffset;   /**< 1: An offset of +0.03125 is added internally to all coordinate input values, 0: no offset */
    CYGFX_U16                      width;             /**< Number of horizontal coordinates */
    CYGFX_U16                      height;            /**< Number of vertical coordinates */
    CYGFX_U32                      dxx;               /**< ArbDeltaXX: X coordinate of X direction vector between first and second sample point. Given in signed 3.5 fix-point notation. Range: -4 .. 3.96, shifted by 13 */
    CYGFX_U32                      dxy;               /**< ArbDeltaXY: Y coordinate of X direction vector between first and second sample point. Given in signed 3.5 fix-point notation. Range: -4 .. 3.96, shifted by 13 */
    CYGFX_U32                      dyx;               /**< ArbDeltaYX: X coordinate of Y direction vector between first and second sample point. Given in signed 3.5 fix-point notation. Range: -4 .. 3.96, shifted by 13 */
    CYGFX_U32                      dyy;               /**< ArbDeltaYY: Y coordinate of Y direction vector between first and second sample point. Given in signed 3.5 fix-point notation. Range: -4 .. 3.96, shifted by 13 */
    CYGFX_U32                      offsetx;           /**< ArbstartX: Start point for sample-point interpolation (X coordinate). Given in signed 16.5 fix-point notation. Range: -16384 .. 16383.96, shifted by 11) */
    CYGFX_U32                      offsety;           /**< ArbstartY: Start point for sample-point interpolation (Y coordinate). Given in signed 16.5 fix-point notation. Range: -16384 .. 16383.96, shifted by 11) */
    CYGFX_U32                      KeepLines;         /**< Number of additional lines to keep in the line buffer for warping. */
} CYGFX_WARP_PARAM_S;


/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_TYPES_H */

