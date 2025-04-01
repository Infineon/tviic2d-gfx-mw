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
 * \file    gccgfx_erp.h
 */


#ifndef GCCGFX_ERP_H
#define GCCGFX_ERP_H

/* Deviation from MISRA C:2012 Dir-1.1.
   Justification: This solution is selected for (backward) compatibility reasons. */
/* PRQA S 1030 EOF */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
/* Deviation from MISRA C:2012 Rule-21.6.
   Justification: This cannot be avoided because this is part of a native-C macro or function. */
/* PRQA S 5124 2 */
#include <stdio.h>
#include <stdlib.h>


#ifdef __cplusplus
extern "C"
{
#endif

/**
 \addtogroup gccgfx_erp
 \brief The Driver Interface of Error Reporting defines the macros to print an error string.
        This feature is not available in the production version of the driver.
*/



/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/** \name Function-like macro API for error reporting */
/** \{ */
#ifndef __FUNCTION__
/* Deviation from MISRA C:2012 Rule-1.3 and MISRA C:2012 Rule-21.2.
   Justification: This is a define for new compilers (just in case of). */
/* PRQA S 0602 1 */
#define __FUNCTION__              ""                 /**< Used if the compiler doesn't support the __FUNCTION__ macro. */
#endif
/** \} */

/*
 * \cond INTERNAL_ERP
 */

#define GCCGFX_ERP_DISABLED       (0)                /**< Error reporting disabled */
#define GCCGFX_ERP_ENABLED        (1)                /**< Error reporting enabled */

/* build target related enabled features */
#if defined(DEBUG) || defined(RELEASE)
/* The GCCGFX_ERP_PRINT_FEATURE is by default enabled for
DEBUG and RELEASE configurations. Resource Generator doesn't 
use GCCGFX_ERP_PRINT_FEATURE. So, these features
are disabled for DEBUG and RELEASE configurations for 
Resource Generator solution. */
#ifndef RES_GEN
#define GCCGFX_ERP_PRINT_FEATURE  GCCGFX_ERP_ENABLED /**< Enable/disable the ERP print feature. */
#define GCCGFX_ERP_ASSERT_FEATURE GCCGFX_ERP_ENABLED /**< Enable/disable the ERP assert feature. */
#else
#define GCCGFX_ERP_PRINT_FEATURE  GCCGFX_ERP_DISABLED
#define GCCGFX_ERP_ASSERT_FEATURE GCCGFX_ERP_DISABLED
#endif
#elif defined(PRODUCTION)
#define GCCGFX_ERP_PRINT_FEATURE  GCCGFX_ERP_DISABLED
#define GCCGFX_ERP_ASSERT_FEATURE GCCGFX_ERP_DISABLED
#else
#error compiler must define DEBUG|RELEASE|PRODUCTION
#endif /* if defined(DEBUG) || defined (RELEASE) */

/** \name Buffer Size for a single message
 * \{ */
#if (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_ENABLED)
#define GCCGFX_ERP_MSG_BUFSIZE    ((CYGFX_U32)1024u) /**< Maximum size of a single error message */
#endif
/** \} */

/*
 * \endcond INTERNAL_ERP
 */

/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */

/**
    Macro for printing of ERROR message in component SurfaceManager

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_SURFMAN_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_SURFMAN_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component SurfaceManager

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_SURFMAN_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_SURFMAN_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component SurfaceManager

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_SURFMAN_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_SURFMAN_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Display

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_DISP_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_DISP_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Display

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_DISP_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_DISP_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Display

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_DISP_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_DISP_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Window

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_WIN_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_WIN_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Window

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_WIN_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_WIN_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Window

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_WIN_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_WIN_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Capture

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CAPTURE_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_CAPTURE_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Capture

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CAPTURE_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_CAPTURE_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Capture

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CAPTURE_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_CAPTURE_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Palette

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_PALETTE_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_PALETTE_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Palette

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_PALETTE_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_PALETTE_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Palette

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_PALETTE_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_PALETTE_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component HwaExtSrc

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_EXTSRC_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_CAPTURE_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component HwaFramecap

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_FRAMECAP_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_CAPTURE_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component HW

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_HW_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_HW_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component HW

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_HW_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_HW_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component HW

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_HW_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_HW_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Interrupt

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_INTERRUPT_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_INTERRUPT_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Interrupt

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_INTERRUPT_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_INTERRUPT_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Interrupt

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_INTERRUPT_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_INTERRUPT_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component HwaWriteback

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_WRITEBACK_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_WRITEBACK_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component HwaWriteback

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_WRITEBACK_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_WRITEBACK_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component HwaWriteback

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_WRITEBACK_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_WRITEBACK_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Sync

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_SYNC_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_SYNC_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Sync

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_SYNC_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_SYNC_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Sync

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_SYNC_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_SYNC_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Card

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CARD_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_CARD_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Card

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CARD_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_CARD_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Card

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CARD_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_CARD_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Config

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CONFIG_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_CONFIG_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Config

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CONFIG_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_CONFIG_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Config

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CONFIG_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_CONFIG_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Sysinit

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_SYSINIT_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_SYSINIT_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Sysinit

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_SYSINIT_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_SYSINIT_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Sysinit

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_SYSINIT_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_SYSINIT_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component HwaCmdSeq

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CMDSEQ_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_CMDSEQ_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component HwaCmdSeq

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CMDSEQ_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_CMDSEQ_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component HwaCmdSeq

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CMDSEQ_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_CMDSEQ_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Cm

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CM_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_CM_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Cm

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CM_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_CM_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Cm

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_CM_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_CM_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in the BlitEng, Math, and HwaBe
    components

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_BLITENG_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_BLITENG_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in the BlitEng, Math, and HwaBe
    components

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_BLITENG_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_BLITENG_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in in the BlitEng, Math, and HwaBe
    components

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_BLITENG_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_BLITENG_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in the DrawEng
    components

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_DRAWENG_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_DE_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in the DrawEng
    components

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_DRAWENG_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_DE_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in in the DrawEng
    components

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_DRAWENG_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_DE_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Error Reporting

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_ERP_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_ERP_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Error Reporting

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_ERP_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_ERP_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Error Reporting

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_ERP_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_ERP_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component Resource Manager

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_RESMAN_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_RESMAN_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component Resource Manager

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_RESMAN_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_RESMAN_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component Resource Manager

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_RESMAN_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_RESMAN_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component CaptureK

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_KERP_CAPTURE_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_CAPTURE_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component CaptureK

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_KERP_CAPTURE_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_CAPTURE_USER, __VA_ARGS__)

/**
    Macro for printing of WARNING message in component DisplayK

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_KERP_DISP_PRINT_WARNING(...) GCCGFX_ERP_PRINT_WARNING(CYGFX_ERP_MODULE_ID_GDC_DISP_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component DisplayK

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_KERP_DISP_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_DISP_USER, __VA_ARGS__)

/**
    Macro for printing of ERROR message in component CardK

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_KERP_CARD_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_CARD_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component CardK

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_KERP_CARD_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_CARD_USER, __VA_ARGS__)

/**
    Macro for printing of INFO message in component SyncK

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_KERP_SYNC_PRINT_INFO(...) GCCGFX_ERP_PRINT_INFO(   CYGFX_ERP_MODULE_ID_GDC_SYNC_USER, __VA_ARGS__)

/**
    Macro for printing generic ERROR messages

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_USER_PRINT_ERROR(...) GCCGFX_ERP_PRINT_ERROR(  CYGFX_ERP_MODULE_ID_GDC_ALL_USER, __VA_ARGS__)

/** \name Function-like macro API for error reporting */
/** \{ */

/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In the doxygen comments, the character sequences e.g. double slash are used. 
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
/**
    Report an error.

    \note <a href="http://www.cplusplus.com/reference/clibrary/cstdio/printf/">
    Printf-like syntax.</a>
    \hideinitializer

    \param [in] moduleId  Module ID selection (::CYGFX_U32).
    \param [in] ...  Additional arguments

**/
#define GCCGFX_ERP_PRINT_ERROR(moduleId, ...)              \
    GCCGFX_ERP_PRINT_ERROR_INTERNAL(  moduleId,            \
                                      __FILE__,            \
                                      __FUNCTION__,        \
                                      __LINE__,            \
                                      __VA_ARGS__)

/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In the doxygen comments, the character sequences e.g. double slash are used. 
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
/**
    Report a warning.

    \note <a href="http://www.cplusplus.com/reference/clibrary/cstdio/printf/">
    Printf-like syntax.</a>
    \hideinitializer

    \param [in] moduleId  Module ID selection (::CYGFX_U32).
    \param [in] ...  Additional arguments

**/
#define GCCGFX_ERP_PRINT_WARNING(moduleId, ...)            \
    GCCGFX_ERP_PRINT_WARNING_INTERNAL(  moduleId,          \
                                        __FILE__,          \
                                        __FUNCTION__,      \
                                        __LINE__,          \
                                        __VA_ARGS__)

/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In the doxygen comments, the character sequences e.g. double slash are used. 
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
/**
    Report an info.

    \note <a href="http://www.cplusplus.com/reference/clibrary/cstdio/printf/">
    Printf-like syntax.</a>
    \hideinitializer

    \param [in] moduleId  Module ID selection (::CYGFX_U32).
    \param [in] ...  Additional arguments

**/
#define GCCGFX_ERP_PRINT_INFO(moduleId, ...)               \
    GCCGFX_ERP_PRINT_INFO_INTERNAL(  moduleId,             \
                                     __FILE__,             \
                                     __FUNCTION__,         \
                                     __LINE__,             \
                                     __VA_ARGS__)

/** \} */

/** \name Function-like macro API for error reporting via an Assert
 * \{ */

/**
    Assertion macro. If expression is false, information about the particular call
    will be reported via ::GCCGFX_ERP_PRINT_ERROR.

    \hideinitializer

    \param [in] expression  The expression which is asserted.

**/
#define GCCGFX_ERP_ASSERT(expression) GCCGFX_ERP_ASSERT_INTERNAL(expression)

/**
    Assertion macro. If expression is false, information about the particular call
    will be reported via ::GCCGFX_ERP_PRINT_ERROR.

    \hideinitializer

    \param [in] expression  The expression which is asserted.

**/
#define GCCGFX_KERP_ASSERT(expression) GCCGFX_ERP_ASSERT_INTERNAL(expression)

/** \} */

/*
 * \cond INTERNAL_ERP
 */

#if (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_DISABLED)
/**
    Internal error printing function macro. Defined depending on the value of
    GCCGFX_ERP_PRINT_FEATURE.

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_PRINT_ERROR_INTERNAL(...) CYGFX_NULL_FUNCTION

/**
    Internal warning printing function macro. Defined depending on the value of
    GCCGFX_ERP_PRINT_FEATURE.

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_PRINT_WARNING_INTERNAL(...) CYGFX_NULL_FUNCTION

/**
    Internal info printing function macro. Defined depending on the value of
    GCCGFX_ERP_PRINT_FEATURE.

    \param [in] ...  Printf like format string and parameter list

**/
#define GCCGFX_ERP_PRINT_INFO_INTERNAL(...) CYGFX_NULL_FUNCTION
#elif (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_ENABLED)
/** internal macros, in \e production configuration empty;
 *  otherwise enabled
 */
#define GCCGFX_ERP_PRINT_ERROR_INTERNAL   GccGfx_ErpPrintError
#define GCCGFX_ERP_PRINT_WARNING_INTERNAL GccGfx_ErpPrintWarning
#define GCCGFX_ERP_PRINT_INFO_INTERNAL    GccGfx_ErpPrintInfo
#endif /* (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_DISABLED) */


#if (GCCGFX_ERP_ASSERT_FEATURE == GCCGFX_ERP_DISABLED)
/**
    Internal assertion macro. Defined depending on the value of
    GCCGFX_ERP_ASSERT_FEATURE.

    \param [in] expression  The expression which is asserted.

**/
#define GCCGFX_ERP_ASSERT_INTERNAL(expression) CYGFX_NULL_FUNCTION
#elif (GCCGFX_ERP_ASSERT_FEATURE == GCCGFX_ERP_ENABLED)
#define GCCGFX_ERP_ASSERT_INTERNAL(expression)                                                                      \
    do                                                                                                              \
    {                                                                                                               \
        if (!(expression))                                                                                          \
        {                                                                                                           \
            GCCGFX_ERP_PRINT_ERROR(CYGFX_ERP_MODULE_ID_GDC_ERP_USER, "assertion \"%s\" failed\n", #expression);     \
            abort();                                                                                                \
        }                                                                                                           \
    }                                                                                                               \
    while (0)

#endif /* (GCCGFX_ERP_ASSERT_FEATURE == GCCGFX_ERP_DISABLED) */

/*
 * \endcond INTERNAL_ERP
 */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/*
 * \cond INTERNAL_ERP_PRINT
 */

#if (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_ENABLED)
/**
    Internal function. Use macro ::GCCGFX_ERP_PRINT_ERROR instead

    \param [in] mod_id  the id of the module, where the message occurred
    \param [in] filename  the file, where this message occurred
    \param [in] functionname  the function, where this message occurred
    \param [in] line  the line number, where this message occurred
    \param [in] fmt  printf-like format string
    \param [in] ...  Printf like parameter list

**/
CYGFX_EXTERN void GccGfx_ErpPrintError( CYGFX_MODULE      mod_id,
                                        const CYGFX_CHAR* filename,
                                        const CYGFX_CHAR* functionname,
                                        CYGFX_U32         line,
                                        const CYGFX_CHAR* fmt,
                                        ...);

/**
    Internal function. Use macro ::GCCGFX_ERP_PRINT_WARNING instead

    \param [in] mod_id  the id of the module, where the message occurred
    \param [in] filename  the file, where this message occurred
    \param [in] functionname  the function, where this message occurred
    \param [in] line  the line number, where this message occurred
    \param [in] fmt  printf-like format string
    \param [in] ...  Printf like parameter list

**/
CYGFX_EXTERN void GccGfx_ErpPrintWarning( CYGFX_MODULE      mod_id,
                                          const CYGFX_CHAR* filename,
                                          const CYGFX_CHAR* functionname,
                                          CYGFX_U32         line,
                                          const CYGFX_CHAR* fmt,
                                          ...);

/**
    Internal function. Use macro ::GCCGFX_ERP_PRINT_INFO instead

    \param [in] mod_id  the id of the module, where the message occurred
    \param [in] filename  the file, where this message occurred
    \param [in] functionname  the function, where this message occurred
    \param [in] line  the line number, where this message occurred
    \param [in] fmt  printf-like format string
    \param [in] ...  Printf like parameter list

**/
CYGFX_EXTERN void GccGfx_ErpPrintInfo( CYGFX_MODULE      mod_id,
                                       const CYGFX_CHAR* filename,
                                       const CYGFX_CHAR* functionname,
                                       CYGFX_U32         line,
                                       const CYGFX_CHAR* fmt,
                                       ...);
#endif /* if (GCCGFX_ERP_PRINT_FEATURE == GCCGFX_ERP_ENABLED) */

/*
 * \endcond INTERNAL_ERP_PRINT
 */

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_ERP_H */

