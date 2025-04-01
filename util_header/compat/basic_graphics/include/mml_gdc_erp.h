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
    \file        mml_gdc_erp.h
*/


#ifndef MML_ERP_H
#define MML_ERP_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_erp.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_erp
    \code #include "mml_gdc_erp.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for ErrorReporting API */
/** \{ */
#define MM_ERP_MESSAGE_LEVEL        CYGFX_ERP_LEVEL             /**< Simple redefinition */
#define MM_ERP_LEVEL_NOTHING        CYGFX_ERP_LEVEL_NOTHING     /**< Simple redefinition */
#define MM_ERP_LEVEL_ERROR          CYGFX_ERP_LEVEL_ERROR       /**< Simple redefinition */
#define MM_ERP_LEVEL_WARNING        CYGFX_ERP_LEVEL_WARNING     /**< Simple redefinition */
#define MM_ERP_LEVEL_INFO           CYGFX_ERP_LEVEL_INFO        /**< Simple redefinition */

#define MM_ERP_MESSAGE_CHANNEL_PROP CYGFX_ERP_CHANNEL           /**< Simple redefinition */
#define MM_ERP_CH_OFF               CYGFX_ERP_CHANNEL_OFF       /**< Simple redefinition */
#define MM_ERP_CH_ON                CYGFX_ERP_CHANNEL_ON        /**< Simple redefinition */


#define MM_ERP_MESSAGE_DEST         CYGFX_ERP_DEST              /**< Simple redefinition */
#define MM_ERP_CH_STDOUT            CYGFX_ERP_DEST_STDOUT       /**< Simple redefinition */
#define MM_ERP_CH_BUFFER            CYGFX_ERP_DEST_BUFFER       /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mml_gdc_erp*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MML_ERP_H */

