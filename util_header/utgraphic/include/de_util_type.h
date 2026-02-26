/*******************************************************************************
* (c) 2019-2026, Infineon Technologies AG, or an affiliate of Infineon         *
* Technologies AG. All rights reserved.                                        *
* This software, associated documentation and materials ("Software") is        *
* owned by Infineon Technologies AG or one of its affiliates ("Infineon")      *
* and is protected by and subject to worldwide patent protection, worldwide    *
* copyright laws, and international treaty provisions. Therefore, you may use  *
* this Software only as provided in the license agreement accompanying the     *
* software package from which you obtained this Software. If no license        *
* agreement applies, then any use, reproduction, modification, translation, or *
* compilation of this Software is prohibited without the express written       *
* permission of Infineon.                                                      *
*                                                                              *
* Disclaimer: UNLESS OTHERWISE EXPRESSLY AGREED WITH INFINEON, THIS SOFTWARE   *
* IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,         *
* INCLUDING, BUT NOT LIMITED TO, ALL WARRANTIES OF NON-INFRINGEMENT OF         *
* THIRD-PARTY RIGHTS AND IMPLIED WARRANTIES SUCH AS WARRANTIES OF FITNESS FOR A*
* SPECIFIC USE/PURPOSE OR MERCHANTABILITY.                                     *
* Infineon reserves the right to make changes to the Software without notice.  *
* You are responsible for properly designing, programming, and testing the     *
* functionality and safety of your intended application of the Software, as    *
* well as complying with any legal requirements related to its use. Infineon   *
* does not guarantee that the Software will be free from intrusion, data theft *
* or loss, or other breaches ("Security Breaches"), and Infineon shall have    *
* no liability arising out of any Security Breaches. Unless otherwise          *
* explicitly approved by Infineon, the Software may not be used in any         *
* application where a failure of the Product or any consequences of the use    *
* thereof can reasonably be expected to result in personal injury.             *
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
