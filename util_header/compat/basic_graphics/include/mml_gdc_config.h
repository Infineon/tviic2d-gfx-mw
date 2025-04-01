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
    \file        mml_gdc_config.h
*/


#ifndef MML_GDC_CONFIG_H
#define MML_GDC_CONFIG_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C" {
#endif

#include "cygfx_config.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_config
    \code #include "mml_gdc_config.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */



/** \name Simple new definitions for Config API */
/** \{ */
#ifndef DOXYGEN_SHOULD_SKIP_THIS
#define MML_GDC_CONFIG_DRIVER_TYPE_DEBUG                CYGFX_CONFIG_DRIVER_TYPE_DEBUG          /**< Simple redefinition */
#define MML_GDC_CONFIG_DRIVER_TYPE_RELEASE              CYGFX_CONFIG_DRIVER_TYPE_RELEASE        /**< Simple redefinition */
#define MML_GDC_CONFIG_DRIVER_TYPE_PRODUCTION           CYGFX_CONFIG_DRIVER_TYPE_PRODUCTION     /**< Simple redefinition */


//typedef MM_U08 MML_GDC_CONFIG_ATTR;
#define MML_GDC_CONFIG_ATTR                             CYGFX_CONFIG_ATTR                       /**< Simple redefinition */
#define MML_GDC_CONFIG_ATTR_MAJOR_VERSION               CYGFX_CONFIG_ATTR_MAJOR_VERSION         /**< Simple redefinition */
#define MML_GDC_CONFIG_ATTR_MINOR_VERSION               CYGFX_CONFIG_ATTR_MINOR_VERSION         /**< Simple redefinition */
#define MML_GDC_CONFIG_ATTR_MICRO_VERSION               CYGFX_CONFIG_ATTR_MICRO_VERSION         /**< Simple redefinition */
#define MML_GDC_CONFIG_ATTR_BUILD_VERSION               CYGFX_CONFIG_ATTR_BUILD_VERSION         /**< Simple redefinition */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#define MML_GDC_CONFIG_ATTR_MIN_INSTRUCTION_BUFFER      ((CYGFX_U08)100)                        /**< moved to BE API see CYGFX_BE_CTX_ATTR_MIN_INSTRUCTION_BUFFER */
#define MML_GDC_CONFIG_ATTR_CURRENT_INSTRUCTION_BUFFER  ((CYGFX_U08)101)                        /**< moved to BE API see CYGFX_BE_CTX_ATTR_CURRENT_INSTRUCTION_BUFFER */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#define MML_GDC_CONFIG_ATTR_DISPLAY_NOBLOCK             CYGFX_CONFIG_ATTR_DISPLAY_NOBLOCK       /**< Simple redefinition */
#define MML_GDC_CONFIG_ATTR_BUILD_TYPE                  CYGFX_CONFIG_ATTR_BUILD_TYPE            /**< Simple redefinition */
#define MML_GDC_CONFIG_ATTR_IPIDENTIFIER                CYGFX_CONFIG_ATTR_IPIDENTIFIER          /**< Simple redefinition */
#define MML_GDC_CONFIG_ATTR_CAPTURE_NOBLOCK             CYGFX_CONFIG_ATTR_CAPTURE_NOBLOCK       /**< Simple redefinition */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */
/** \} */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple redirection of an "old" function */
/** \{ */
#define mmlGdcConfigSetAttribute                        CyGfx_ConfigSetAttribute                /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/**
    Wrapper function to get an attribute\n
    For more details see: ::CyGfx_BeGetAttribute and ::CyGfx_ConfigGetAttribute
    \param[in] pname   Name of the attribute
    \param[out] pParam Pointer to a variable to receive the attribute value
    \retval            CYGFX_OK on success;\n
                       the related error code otherwise.
*/
static CYGFX_ERROR mmlGdcConfigGetAttribute(MML_GDC_CONFIG_ATTR pname, MM_U32 *pParam )
{
    CYGFX_BE_CONTEXT_OBJECT_S ctx;
    CyGfx_BeResetContext(&ctx);
    switch (pname)
    {
        case MML_GDC_CONFIG_ATTR_MIN_INSTRUCTION_BUFFER:
            return CyGfx_BeGetAttribute(&ctx, CYGFX_BE_CTX_ATTR_MIN_INSTRUCTION_BUFFER, pParam );
        case MML_GDC_CONFIG_ATTR_CURRENT_INSTRUCTION_BUFFER:
            return CyGfx_BeGetAttribute(&ctx, CYGFX_BE_CTX_ATTR_CURRENT_INSTRUCTION_BUFFER, pParam );
        default:
            break;
    }
    return CyGfx_ConfigGetAttribute(pname, pParam );
}



/** \} */ /* end addtogroup mml_gdc_config*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MML_GDC_CONFIG_H */
