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
 * \file    cygfx_defines.h
 */


#ifndef CYGFX_DEFINES_H
#define CYGFX_DEFINES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
\addtogroup cygfx_defines
\code #include "cygfx_defines.h" \endcode
\brief Generic definitions for the driver
*/

/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define CYGFX_ERR           (CYGFX_ERRCODE(0x2FFFFFFF)) /**< Abnormal termination (user space) */
#define CYGFX_KERR          (CYGFX_ERRCODE(0x1FFFFFFF)) /**< Abnormal termination (kernel space) */
#define CYGFX_OK            (CYGFX_ERRCODE(0x0))        /**< Normal termination */
#define CYGFX_FALSE         ((CYGFX_BOOL) 0)            /**< Definition of FALSE for bool types */
#define CYGFX_TRUE          ((CYGFX_BOOL) 1)            /**< Definition of TRUE for bool types */

#ifndef NULL
#ifndef __cplusplus
/* Deviation from MISRA C:2012 Rule-21.1.
   Justification: This is a define for new compilers (just in case of). */
/* PRQA S 4600 1 */
#define NULL                ((void*)0)                  /**< Definition of NULL pointer */
#else
#define NULL                (0L)                        /**< Definition of NULL pointer */
#endif
#endif

/*
    Memory map (physical address)
*/
#define CYGFX_VIDEOSS_BASE  (0x40A00000u)               /**< MXVIDEOSS Subsystem Base Address */

#ifndef TVIIC2D6MDDR
#ifdef CYGFX_FPGA
#define CYGFX_VRAM_BASE     (0x9F000000u)               /**< VRAM Base Address */
#else
#define CYGFX_VRAM_BASE (0x24000000u)                   /**< VRAM Base Address */
#endif
#endif

#ifndef PRQA
#define CYGFX_NULL_FUNCTION ((void) 0)                  /**< Helper macro for deactivated functions */
#endif

/** \} end defgroup */

/* Compiler abstraction macros */
#define CYGFX_EXTERN        extern                      /**< Compiler abstraction macro for "extern" */
#define CYGFX_STATIC        static                      /**< Compiler abstraction for "static" */
#define CYGFX_INLINE        __inline                    /**< Compiler abstraction for "inline" */
#define CYGFX_INTERRUPT                                 /**< Compiler abstraction for interrupt handler functions */
/**
 \addtogroup mm_defines
*/
/** \{ */

/**
    Macro to define error codes returned by driver functions

    \param [in] err  An error code

**/
#define CYGFX_ERRCODE(err) ((CYGFX_ERROR)(err))

/**
    Macro to define the IDs of the driver modules

    \param [in] moduleId  A module identifier

**/
#define CYGFX_MODULEID(moduleId) ((CYGFX_MODULE)(moduleId))

/*
    Macros for bit manipulation in register
*/
/**
    Set a bit at a given position

    \param [in] x  Position of the bit to set

**/
#define CYGFX_BIT(x) (1u << (x))
/*
    Macros for address translation
*/
/**
    Conversion: void* to CYGFX_ADDR

    \param [in] x  Pointer to convert

**/
#define CYGFX_PTR_TO_ADDR(x) ((CYGFX_ADDR)(x))

/**
    Conversion: "CYGFX_ADDR" to "void*"

    \param [in] x  Address value to convert

**/
#define CYGFX_ADDR_TO_PTR(x) ((void*)(x))

/**
    Conversion: 'CYGFX_ADDR' to 'CYGFX_U32'

    \param [in] x  Address value to convert

**/
#define CYGFX_ADDR_TO_UINT32(x) ((CYGFX_U32)(x))

/**
    Conversion: 'CYGFX_U32' to 'CYGFX_ADDR'

    \param [in] x  Value to convert

**/
#define CYGFX_UINT32_TO_ADDR(x) ((CYGFX_ADDR)(x))

/**
    Conversion: 'void*' to 'CYGFX_U32'

    \param [in] x  Pointer to convert

**/
#define CYGFX_PTR_TO_UINT32(x) ((CYGFX_U32)(x))

/**
    Conversion: 'CYGFX_U32' to 'void*'

    \param [in] x  Value to convert

**/
#define CYGFX_UINT32_TO_PTR(x) ((void*)(x))

/**
    Conversion: 'CYGFX_ADDR' to 'CYGFX_U32*'

    \param [in] x  Address value to convert

**/
#define CYGFX_ADDR_TO_UINT32PTR(x) ((CYGFX_U32*)(x))

/**
    Conversion: 'CYGFX_ADDR' to 'CYGFX_S32*'

    \param [in] x  Address value to convert

**/
#define CYGFX_ADDR_TO_SINT32PTR(x) ((CYGFX_S32*)(x))

/* In PRQA checking, CYGFX_NULL_FUNCTION is defined as _ignore_semi to avoid the warning 
   for the semicolon after helper macros, which are without execution content. */
#ifndef PRQA
/**
    Helper macro for unused parameters

    \param [in] x  An unused parameter

**/
#define CYGFX_UNUSED_PARAMETER(x) ((void)(x))
#else
#define CYGFX_UNUSED_PARAMETER(x) CYGFX_NULL_FUNCTION  /**< Helper macro MISRA */
#endif

/** \} end addtogroup */


#ifndef CYGFX_MIN
/**
    Macro to evaluate the minimum value

    \param [in] a  Value a
    \param [in] b  Value b

**/
#define CYGFX_MIN(a, b) (((a) < (b)) ? (a) : (b))
#endif /* CYGFX_MIN */

#ifndef CYGFX_MAX
/**
    Macro to evaluate the maximum value

    \param [in] a  Value a
    \param [in] b  Value b

**/
#define CYGFX_MAX(a, b) (((a) > (b)) ? (a) : (b))
#endif /* CYGFX_MAX */
/**
    Macro to get the number of elements of an array

    \param [in] array_type

**/
#define CYGFX_ARRAY_LENGTH(array_type) ((CYGFX_U32)(sizeof(array_type)/sizeof((array_type)[0])))

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_DEFINES_H */

