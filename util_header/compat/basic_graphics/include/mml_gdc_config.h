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
