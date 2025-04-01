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
    \file        mm_defines.h
*/


#ifndef MM_DEFINES_H
#define MM_DEFINES_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_defines.h"

/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mm_defines
    \code #include "mm_defines.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions */
/** \{ */
#define MM_ERRCODE             CYGFX_ERRCODE            /**< Simple redefinition */
#define MM_MODULEID            CYGFX_MODULEID           /**< Simple redefinition */

#define MML_ERR                CYGFX_ERR                /**< Simple redefinition */
#define MMD_ERR                CYGFX_KERR               /**< Simple redefinition */

#define MML_OK                 CYGFX_OK                 /**< Simple redefinition */
#define MMD_OK                 CYGFX_OK                 /**< Simple redefinition */

#define MM_FALSE               CYGFX_FALSE              /**< Simple redefinition */
#define MM_TRUE                CYGFX_TRUE               /**< Simple redefinition */

#ifndef NULL
    #define NULL               ((void *)0)              /**< Simple redefinition */
#endif

#define MM_BIT                 CYGFX_BIT                /**< Simple redefinition */

#define MM_PTR_TO_ADDR         CYGFX_PTR_TO_ADDR        /**< Simple redefinition */
#define MM_ADDR_TO_PTR         CYGFX_ADDR_TO_PTR        /**< Simple redefinition */

#define MM_ADDR_TO_UINT32      CYGFX_ADDR_TO_UINT32     /**< Simple redefinition */
#define MM_UINT32_TO_ADDR      CYGFX_UINT32_TO_ADDR     /**< Simple redefinition */

#define MM_PTR_TO_UINT32       CYGFX_PTR_TO_UINT32      /**< Simple redefinition */
#define MM_UINT32_TO_PTR       CYGFX_UINT32_TO_PTR      /**< Simple redefinition */

#define MM_ADDR_TO_UINT32PTR   CYGFX_ADDR_TO_UINT32PTR  /**< Simple redefinition */
#define MM_ADDR_TO_SINT32PTR   CYGFX_ADDR_TO_SINT32PTR  /**< Simple redefinition */

#define MM_IO_IRIS_SUBSYSTEM   CYGFX_VIDEOSS_BASE       /**< Simple redefinition */
#define MM_IO_IRIS_CORE        CYGFX_VIDEOSS_BASE       /**< Simple redefinition */
#define MM_VRAM_BASE           CYGFX_VRAM_BASE          /**< Simple redefinition */

#ifndef PRQA
    #define NULL_FUNCTION      CYGFX_NULL_FUNCTION      /**< Simple redefinition */
#endif


#ifndef PRQA
    #define UNUSED_PARAMETER    CYGFX_UNUSED_PARAMETER  /**< Simple redefinition */
#else
    #define UNUSED_PARAMETER    CYGFX_NULL_FUNCTION     /**< Simple redefinition */
#endif

#ifndef MIN
    #define MIN                     CYGFX_MIN           /**< Simple redefinition */
#endif

#ifndef MAX
    #define MAX                     CYGFX_MAX           /**< Simple redefinition */
#endif

#define MM_GDC_EXTERN           CYGFX_EXTERN            /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mm_defines*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MM_DEFINES_H */

