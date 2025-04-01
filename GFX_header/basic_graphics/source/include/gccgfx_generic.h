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
 * \file    gccgfx_generic.h
 */

#ifndef GCCGFX_GENERIC_H
#define GCCGFX_GENERIC_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
/* Deviation from MISRA C:2012 Rule-21.6.
   Justification: This cannot be avoided because this is part of a native-C macro or function. */
/* PRQA S 5124 2 */
#include <stdlib.h>
#include <stdio.h>


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_generic
* \brief Generic macro definitions used by all user modules
*/



/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#if (GCCGFX_ERP_ASSERT_FEATURE == GCCGFX_ERP_ENABLED)
typedef void (* GccGfx_GenDbgWriteToMemType)( CYGFX_U32 address );
typedef CYGFX_ERROR (* GccGfx_GenDbgCheckCacheType)( CYGFX_U32 task, CYGFX_U32 addr);
CYGFX_EXTERN GccGfx_GenDbgWriteToMemType cygfx_GenDbgWriteToMem;
CYGFX_EXTERN GccGfx_GenDbgCheckCacheType cygfx_GenDbgCheckCache;
#endif /* (GCCGFX_ERP_ASSERT_FEATURE == GCCGFX_ERP_ENABLED) */

/**
    This macro avoids execution of a function if the previous instruction failed:
    In case the function is called, rc will be overwritten by the new returncode.

    \param [in] rc  Return code of the previous function call.
    \param [in] execute  The function that will be called (or not).

**/
#define GCCGFX_GEN_EXE_SUCCESS(rc, execute)                 \
    do                                                      \
    {                                                       \
        if ((rc) == CYGFX_OK)                               \
        {                                                   \
            (rc) = (execute);                               \
        }                                                   \
    }                                                       \
    while (0)

#ifdef PRQA
#pragma PRQA_MACRO_MESSAGES_OFF "GCCGFX_GEN_EXE_SUCCESS" 2743
#endif


/**
    This macro avoids execution of a function returning void if the previous
    instruction failed.

    \param [in] rc  Return code of the previous function call.
    \param [in] execute  The function that will be called (or not).

**/
#define GCCGFX_GEN_EXE_SUCCESS_VOID(rc, execute)            \
    do                                                      \
    {                                                       \
        if ((rc) == CYGFX_OK)                               \
        {                                                   \
            (execute);                                      \
        }                                                   \
    }                                                       \
    while (0)

#ifdef PRQA
/** Use a PRQA-pragma to switch OFF message 2743 for macro GCCGFX_GEN_EXE_SUCCESS_VOID */
#pragma PRQA_MACRO_MESSAGES_OFF "GCCGFX_GEN_EXE_SUCCESS_VOID" 2743
#endif


/**
    Call return(rc) if rc != CYGFX_OK

    \param [in] rc  Return code of the previous function call.

**/
#define GCCGFX_GEN_RETURN_IF_ERROR(rc)                      \
    do                                                      \
    {                                                       \
        if ((rc) != CYGFX_OK)                               \
        {                                                   \
            return (rc);                                    \
        }                                                   \
    }                                                       \
    while (0)

#ifdef PRQA
/** Use a PRQA-pragma to switch OFF message 2743 for macro GCCGFX_GEN_RETURN_IF_ERROR */
#pragma PRQA_MACRO_MESSAGES_OFF "GCCGFX_GEN_RETURN_IF_ERROR" 2743
#endif

/**
    Call return(rc) if rc != CYGFX_OK

    \param [in] rc  Return code of the previous function call.
    \param [in] execute  The function that will be called (or not).

**/
#define GCCGFX_GEN_EXE_RETURN_IF_ERROR(rc, execute)         \
    do                                                      \
    {                                                       \
        if ((rc) == CYGFX_OK)                               \
        {                                                   \
            (rc) = (execute);                               \
        }                                                   \
        if ((rc) != CYGFX_OK)                               \
        {                                                   \
            return (rc);                                    \
        }                                                   \
    }                                                       \
    while (0)
#ifdef PRQA
#pragma PRQA_MACRO_MESSAGES_OFF "GCCGFX_GEN_EXE_RETURN_IF_ERROR" 2743
#endif

/**
    Call ret_local = execute and if ret_local != CYGFX_OK return ret_local (this
    exits the function where this macro is used!)

    \param [in] execute  The function that will be called.

**/
#define GCCGFX_GEN_RETURN_ON_ERROR(execute)                 \
    do                                                      \
    {                                                       \
        CYGFX_ERROR ret_local = (execute);                  \
        if (ret_local != CYGFX_OK)                          \
        {                                                   \
            return (ret_local);                             \
        }                                                   \
    }                                                       \
    while (0)

#ifdef PRQA
/** Use a PRQA-pragma to switch OFF message 2743 for macro GCCGFX_GEN_RETURN_ON_ERROR */
#pragma PRQA_MACRO_MESSAGES_OFF "GCCGFX_GEN_RETURN_ON_ERROR" 2743
#endif


/**
    Write a word into memory

    \param [in] a  Address to write
    \param [in] v  value to write

    \retval None
**/
#if (GCCGFX_ERP_ASSERT_FEATURE == GCCGFX_ERP_ENABLED)
#define GCCGFX_GEN_WRITE_TO_MEM(a, v)                       \
    do                                                      \
    {                                                       \
        GCCGFX_HWEB_LOCK(a, 4, GCCGFX_HWEB_MA_WRITE);       \
        *CYGFX_ADDR_TO_UINT32PTR(a) = (v);                  \
        if (cygfx_GenDbgWriteToMem != NULL)                 \
        {                                                   \
            cygfx_GenDbgWriteToMem(CYGFX_PTR_TO_UINT32(a)); \
        }                                                   \
        GCCGFX_HWEB_UNLOCK(a);                              \
    }                                                       \
    while (0)
#else
#define GCCGFX_GEN_WRITE_TO_MEM(a, v)                   \
    do                                                  \
    {                                                   \
        GCCGFX_HWEB_LOCK(a, 4, GCCGFX_HWEB_MA_WRITE);   \
        *CYGFX_ADDR_TO_UINT32PTR(a) = (v);              \
        GCCGFX_HWEB_UNLOCK(a);                          \
    }                                                   \
    while (0)
#endif /* (GCCGFX_ERP_ASSERT_FEATURE == GCCGFX_ERP_ENABLED) */
#ifdef PRQA
#pragma PRQA_MACRO_MESSAGES_OFF "GCCGFX_GEN_WRITE_TO_MEM" 2743
#endif

/**
    Read a word from memory

    \param [in] a  Address to write
    \param [in] v  Pointer to CYGFX_S32 that get the word

    \retval None
**/
#define GCCGFX_GEN_READ_FROM_MEM(a, v)                  \
    do                                                  \
    {                                                   \
        GCCGFX_HWEB_LOCK((a), 4, GCCGFX_HWEB_MA_READ);  \
        (v) = *CYGFX_ADDR_TO_SINT32PTR(a);              \
        GCCGFX_HWEB_UNLOCK(a);                          \
    }                                                   \
    while (0)
#ifdef PRQA
#pragma PRQA_MACRO_MESSAGES_OFF "GCCGFX_GEN_READ_FROM_MEM" 2743
#endif




#if defined(PRODUCTION)
/**
    Assert that no bit of a given value that is outside a given mask is 1.

    \param [in] val  Value to check
    \param [in] mask  Mask for bits that are allowed to be 1
    \param [in] file  File name used for assertion error message
    \param [in] line  Line number used for assertion error message

**/
#define GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, mask, file, line) 0UL
#else
#define GCCGFX_GEN_ASSERT_FIELD_ACCESS(val, mask, file, line) (((((CYGFX_U32)(val)) & ~(mask)) == 0UL) ? 0UL : Gfx_GenReportErrorAbort((file), (line), ((CYGFX_U32)(val)), ((CYGFX_U32)(mask))))
#endif
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

#if !defined(PRODUCTION)
/**
    Function to generate error report in assertion in register field conversion

    \param [in] filename  File name printed in the error report
    \param [in] line  Line number printed in the error report
    \param [in] val  Value printed in the error report
    \param [in] mask  Mask printed in the error report

**/
CYGFX_STATIC CYGFX_INLINE CYGFX_U32 Gfx_GenReportErrorAbort( const CYGFX_CHAR* filename,
                                                             CYGFX_U32         line,
                                                             CYGFX_U32         val,
                                                             CYGFX_U32         mask);


CYGFX_STATIC CYGFX_INLINE CYGFX_U32 Gfx_GenReportErrorAbort(const CYGFX_CHAR* filename,
                                                            CYGFX_U32         line,
                                                            CYGFX_U32         val,
                                                            CYGFX_U32         mask)
{
    GCCGFX_ERP_USER_PRINT_ERROR("Error in assertion in register field conversion in file %s line %d: val 0x%08X, mask: 0x%08X\n", filename, line, val, mask);
#ifdef PRODUCTION
    return 0u;
#else
    abort();
#endif
}

#endif /* if !defined(PRODUCTION) */
/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_GENERIC_H */

