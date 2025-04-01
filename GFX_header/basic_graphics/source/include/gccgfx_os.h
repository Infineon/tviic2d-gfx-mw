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
 * \file    gccgfx_os.h
 */

#ifndef GCCGFX_OS_H
#define GCCGFX_OS_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#include "gccgfx_os_types.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 \addtogroup gccgfx_os
 \brief Common definitions for Libc functions for driver internal use.
*/



/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \name Standard C Library stdio.h/stdarg.h Functions
 */
/** \{ */

/**
    Implements the Standard C Library function snprintf().

    \param [out] str  Destination buffer
    \param [in] len  Length of the destination buffer
    \param [in] format  Printf style format string
    \param [in] ...  Printf style additional arguments according to the format
                string

**/
CYGFX_EXTERN CYGFX_S32 GccGfx_OsSnprintf( CYGFX_CHAR*       str,
                                          CYGFX_U32         len,
                                          const CYGFX_CHAR* format,
                                          ...);

/**
    Implements the Standard C Library function vsnprintf().

    \param [out] str  Destination buffer
    \param [in] len  Length of the destination buffer
    \param [in] format  Printf style format string
    \param [in] arg  Variable arguments list according to the format string

**/
CYGFX_EXTERN CYGFX_S32 GccGfx_OsVsnprintf( CYGFX_CHAR*       str,
                                           CYGFX_U32         len,
                                           const CYGFX_CHAR* format,
                                           GCCGFX_OS_VA_LIST arg);

/** \} */

/** \name Standard C Library string.h Functions
 * \{
 */

/**
    Implements the Standard C Library function memcpy().

    \param [out] dest  Destination buffer
    \param [in] src  Source buffer
    \param [in] len  Number of bytes to copy

**/
CYGFX_EXTERN void* GccGfx_OsMemcpy( void*       dest,
                                    const void* src,
                                    CYGFX_U32   len);

/**
    Implements the Standard C Library function memset().

    \param [out] ptr  Destination buffer
    \param [in] value  Fill byte
    \param [in] num  Number of bytes to be set

**/
CYGFX_EXTERN void* GccGfx_OsMemset( void*     ptr,
                                    CYGFX_U08 value,
                                    CYGFX_U32 num);

/**
    Implements the Standard C Library function strlen().

    \param [in] str  Character string

**/
CYGFX_EXTERN CYGFX_U32 GccGfx_OsStrlen( const CYGFX_CHAR* str);

/**
    Implements the Standard C Library function strrchr().

    \param [in] str  Character string to be scanned
    \param [in] character  Character to search for in str

**/
CYGFX_EXTERN const CYGFX_CHAR* GccGfx_OsStrrchr( const CYGFX_CHAR* str,
                                                 CYGFX_S32         character);

/**
    Implements the Standard C Library function strncpy().

    \param [out] destination  Destination buffer
    \param [in] source  Character string to be copied
    \param [in] num  Maximum number of characters to be copied

**/
CYGFX_EXTERN CYGFX_CHAR* GccGfx_OsStrncpy( CYGFX_CHAR*       destination,
                                           const CYGFX_CHAR* source,
                                           CYGFX_U32         num);

/** \} */
/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_OS_H */

