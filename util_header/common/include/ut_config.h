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
