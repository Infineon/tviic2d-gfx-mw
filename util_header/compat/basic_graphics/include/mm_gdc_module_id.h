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
    \file        mm_gdc_module_id.h
*/


#ifndef MM_GDC_MODULE_ID_H
#define MM_GDC_MODULE_ID_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_module_id.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mm_gdc_module_id
    \code #include "mm_gdc_module_id.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for module IDs */
/** \{ */
#define MM_ERP_MODULE_ID_GDC_ALL_USER               CYGFX_ERP_MODULE_ID_GDC_ALL_USER            /**< Simple redefinition */

#define MM_ERP_MODULE_ID_GDC_SURFMAN_USER           CYGFX_ERP_MODULE_ID_GDC_SURFMAN_USER        /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_DISP_USER              CYGFX_ERP_MODULE_ID_GDC_DISP_USER           /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_CAPTURE_USER           CYGFX_ERP_MODULE_ID_GDC_CAPTURE_USER        /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_IRIS_USER              CYGFX_ERP_MODULE_ID_GDC_HW_USER             /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_WRITEBACK_USER         CYGFX_ERP_MODULE_ID_GDC_WRITEBACK_USER      /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_SYNC_USER              CYGFX_ERP_MODULE_ID_GDC_SYNC_USER           /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_CARD_USER              CYGFX_ERP_MODULE_ID_GDC_CARD_USER           /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_CONFIG_USER            CYGFX_ERP_MODULE_ID_GDC_CONFIG_USER         /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_SYSINIT_USER           CYGFX_ERP_MODULE_ID_GDC_SYSINIT_USER        /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_CMDSEQ_USER            CYGFX_ERP_MODULE_ID_GDC_CMDSEQ_USER         /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_PIXENG_USER            CYGFX_ERP_MODULE_ID_GDC_BLITENG_USER        /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_ERP_USER               CYGFX_ERP_MODULE_ID_GDC_ERP_USER            /**< Simple redefinition */
#define MM_ERP_MODULE_ID_GDC_SERVICE_USER           CYGFX_ERP_MODULE_ID_GDC_RESMAN_USER         /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mm_gdc_module_id*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MM_GDC_MODULE_ID_H */
