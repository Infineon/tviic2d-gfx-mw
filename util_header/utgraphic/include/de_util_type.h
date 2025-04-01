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
    \file        de_util_type.h
    \brief       This header defines some simple structures.
*/

#ifndef DE_UTIL_TYPE_H
#define DE_UTIL_TYPE_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup de_utils
\{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/** Defined the current structure ID */
#define GEOMETRY_IDENTIFIER 0x00000001U

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/


/** Defines a path and the fill color. */
typedef struct
{
    CYGFX_U08 r; /**< Red color part used to draw the path */
    CYGFX_U08 g; /**< Green color part used to draw the path */
    CYGFX_U08 b; /**< Blue color part used to draw the path */
    CYGFX_U08 a; /**< Alpha color part used to draw the path */
    const CYGFX_CHAR *szPath; /**< A CSV-like string to describe the path */
    const CYGFX_FLOAT *mat;  /**< Points to a 3x2 matrix that must be used to draw the path (can be NULL) */
}DE_UTIL_PATH;

/** Defines a geometry with cnt path elements. */
typedef struct
{
    CYGFX_U32 identifier; /**< Structure description identifier. Currently not used. Should be set to GEOMETRY_IDENTIFIER. */
    CYGFX_U32 width; /**< Width in pixel of the drawn object */
    CYGFX_U32 height; /**< Height in pixel of the drawn object */
    CYGFX_U32 cnt;  /**< Number of DE_UTIL_PATH object in start_path */
    const DE_UTIL_PATH *start_path; /**< Points to an array of cnt DE_UTIL_PATH structures describing the drawing */
}DE_UTIL_GEOMETRY;



/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* DE_UTIL_TYPE_H */
