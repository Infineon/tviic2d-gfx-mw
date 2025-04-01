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
    \file        ut_errors.h
    \brief       This file defines the error codes used for Util.
*/

#ifndef UT_ERRORS_H
#define UT_ERRORS_H

#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_errors Error codes
\{ */


/*******************************************************************************
 Macro Definitions
*******************************************************************************/

/** \name Error codes for synchronization */
/** \{ */
#define UTIL_ERR_SYNC_OUT_OF_MEMORY            (CYGFX_ERRCODE(0x31000001)) /**< Out of memory */
/** \} */

/** \name Error codes for surface management */
/** \{ */
#define UTIL_ERR_SM_OUT_OF_MEMORY              (CYGFX_ERRCODE(0x32000001)) /**< Out of memory */
/** \} */

/** \name Error codes for memory management */
/** \{ */
#define UTIL_ERR_MMAN_INVALID_PARAMETER       (CYGFX_ERRCODE(0x33010001))  /**< Incorrect argument specified */
#define UTIL_ERR_MMAN_NO_MEMORY               (CYGFX_ERRCODE(0x33010002))  /**< Out of memory (system) */
#define UTIL_ERR_MMAN_NO_VRAM                 (CYGFX_ERRCODE(0x33010003))  /**< Out of memory (VRAM) */
#define UTIL_ERR_MMAN_INVALID_MEMORY          (CYGFX_ERRCODE(0x33010004))  /**< Address points to an unknown memory block */
#define UTIL_ERR_MMAN_ACCESS_FAILED           (CYGFX_ERRCODE(0x33010005))  /**< Access failed */
#define UTIL_ERR_MMAN_CHECK_FAILED            (CYGFX_ERRCODE(0x33010006))  /**< The check of the magic word failed */
/** \} */

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* UT_TIMER_H */
