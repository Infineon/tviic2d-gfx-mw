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
    \file        mm_types.h
*/


#ifndef MM_TYPES_H
#define MM_TYPES_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_basetypes.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mm_types
    \code #include "mm_types.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions */
/** \{ */
#define MM_BOOL   CYGFX_BOOL        /**< Simple redefinition */

#define MM_U08    CYGFX_U08         /**< Simple redefinition */
#define MM_S08    CYGFX_S08         /**< Simple redefinition */

#define MM_U16    CYGFX_U16         /**< Simple redefinition */
#define MM_S16    CYGFX_S16         /**< Simple redefinition */

#define MM_U32    CYGFX_U32         /**< Simple redefinition */
#define MM_S32    CYGFX_S32         /**< Simple redefinition */

#define MM_U64    CYGFX_U64         /**< Simple redefinition */
#define MM_S64    CYGFX_S64         /**< Simple redefinition */

#define MM_CHAR   CYGFX_CHAR        /**< Simple redefinition */
#define MM_FLOAT  CYGFX_FLOAT       /**< Simple redefinition */

#define MM_DOUBLE CYGFX_DOUBLE      /**< Simple redefinition */

#define MM_ADDR   CYGFX_ADDR        /**< Simple redefinition */

#define MM_ERROR  CYGFX_ERROR       /**< Simple redefinition */
#define MM_MODULE CYGFX_MODULE      /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mm_types*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MM_TYPES_H */

