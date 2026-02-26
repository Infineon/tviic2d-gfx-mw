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
    \file        ut_config.h
    \brief       This file defines a function to get configuration attributes.
*/

#ifndef UT_CONFIG_H
#define UT_CONFIG_H

#ifdef __cplusplus
extern "C"
{
#endif


/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_config Utilities for the configuration

\{ */

/*******************************************************************************
 Includes
*******************************************************************************/

/* N/A */
/*******************************************************************************
 Macro Definitions
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Data Types
*******************************************************************************/

/** Enumeration of the config attributes */
typedef enum {
    /**
        Returns the number of available display controllers.
        The returned value depends on the 2D core that is in use.
    */
    UT_CONFIG_ATTR_RESOURCE_DISPLAY,

    /**
        Returns the total size of available VRAM (in bytes).
        The returned value depends on the 2D core that is in use.
    */
    UT_CONFIG_ATTR_RESOURCE_VRAM

} UT_CONFIG_ATTR;

/*******************************************************************************
 Function Prototypes
*******************************************************************************/

/*****************************************************************************/
/**
    Gets the current value of the specified configuration attribute. See
    #UT_CONFIG_ATTR for a list of attributes.

    \param[in]  pname  Name of the attribute to get. See #UT_CONFIG_ATTR.
    \param[out] pParam Address where the read value of the attribute is
                    stored

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERR If pname is invalid or pParam is NULL
*/
/*****************************************************************************/
CYGFX_ERROR utConfigGetAttribute( UT_CONFIG_ATTR pname, CYGFX_U32 *pParam );


/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_CONFIG_H */
