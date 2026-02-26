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
