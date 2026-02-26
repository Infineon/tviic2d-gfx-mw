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

