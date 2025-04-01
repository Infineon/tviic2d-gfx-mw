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
 * \file    cygfx_basetypes.h
 */


#ifndef CYGFX_BASETYPES_H
#define CYGFX_BASETYPES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#include <stdint.h>
#ifndef CY_C_MODEL
#include <stdbool.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* Define SILICON, PSVP, FPGA, C_MODEL */
#if defined(CY_USE_PSVP) && !(CY_USE_PSVP)
#define CYGFX_SILICON
#elif defined(CY_USE_PSVP) && (CY_USE_PSVP)
#define CYGFX_PSVP
#elif defined(CY_FPGA)
#define CYGFX_FPGA
#elif defined(C_MODEL)
#define CYGFX_C_MODEL
#endif

/* Check that not 2 or more systems defined */
#if (defined(CYGFX_SILICON) && ((defined(CYGFX_FPGA) || (defined(CYGFX_C_MODEL)))))
#error "Select just one system"
#elif (defined(CYGFX_PSVP) && ((defined(CYGFX_FPGA) || (defined(CYGFX_C_MODEL)))))
#error "Select just one system"
#elif (defined(CYGFX_FPGA) &&  (defined(CYGFX_C_MODEL)))
#error "Select just one system"
#endif

/**
\addtogroup cygfx_basetypes
\code #include "cygfx_basetypes.h" \endcode
\brief Generic type definitions
*/
/** \{ */

#if (defined(CYGFX_SILICON) || defined (CYGFX_PSVP))
/**
    Macro to call asm command DSB
**/
#define GCCGDX_GEN_ASMDSB __asm("dsb")
#else
#define GCCGDX_GEN_ASMDSB CYGFX_NULL_FUNCTION
#endif


/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
typedef uint8_t CYGFX_U08; /**< Unsigned 8-bit integer */

typedef int8_t CYGFX_S08; /**< Signed 8-bit integer */

typedef uint16_t CYGFX_U16; /**< Unsigned 16-bit integer */

typedef int16_t CYGFX_S16; /**< Signed 16-bit integer */

typedef uint32_t CYGFX_U32; /**< Unsigned 32-bit integer */

typedef int32_t CYGFX_S32; /**< Signed 32-bit integer */

typedef uint64_t CYGFX_U64; /**< Unsigned 64-bit integer */

typedef int64_t CYGFX_S64; /**< Signed 64-bit integer */

typedef char CYGFX_CHAR; /**< String character */

typedef float CYGFX_FLOAT; /**< 32-bit IEEE float */

typedef double CYGFX_DOUBLE; /**< 64-bit IEEE float */

typedef CYGFX_U32 CYGFX_BOOL; /**< Boolean */

typedef CYGFX_U32 CYGFX_ADDR; /**< Physical memory address */

typedef CYGFX_S32 CYGFX_ERROR; /**< Function return code */

typedef CYGFX_S32 CYGFX_MODULE; /**< Module ID */

/** \} end addtogroup */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_BASETYPES_H */

