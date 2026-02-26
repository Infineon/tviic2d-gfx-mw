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

