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
