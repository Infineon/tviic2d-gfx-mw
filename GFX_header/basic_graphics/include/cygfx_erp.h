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
 * \file    cygfx_erp.h
 */


#ifndef CYGFX_ERP_H
#define CYGFX_ERP_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * \addtogroup cygfx_erp
 * \code #include "cygfx_erp.h" \endcode
 * \brief Error Reporting API - Error Reporting for selected modules and levels
 *
 * The Error-Reporting API provides functions to report errors, warnings, and
 * infos. Modules that are covered can be specified.
 *
 * \note Error reporting is active only in Debug and Release configurations. In Production configuration, these functions have no effect.
 *
 * The user has the options
 * to select the level of messages for selectable modules (::CyGfx_ErpSetMessageLevel),
 * to select the channel of messages (::CyGfx_ErpSetMessageChannel).
 * When using the ::CYGFX_ERP_DEST_STDOUT channel, the configuration of the print function by ::CyGfx_ErpSetPrintf is necessary.
 * When using the ::CYGFX_ERP_DEST_BUFFER channel, the configuration of the buffer by ::CyGfx_ErpSetBuffer is necessary.
 *
 */


/** \{ */


/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    Function type definition for the print function that will be used.

    \param [in] string  Zero-terminated character string

**/
typedef  void CYGFX_ERP_PRINTFUNCTION ( const CYGFX_CHAR* string);

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/
#if !defined(PRODUCTION)
CYGFX_EXTERN volatile CYGFX_BOOL cygfx_Interrupt_inISR; /**< cygfx_Interrupt_inISR is defined for the release version of the driver only. It is set to CYGFX_TRUE if the driver operates in an interrupt state.
    \note This variable does not exist in the production version of the driver. */
#endif

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Sets the level of error messages for an individual module. For example,
    \code CyGfx_ErpSetMessageLevel(CYGFX_ERP_MODULE_ID_GDC_DISP_USER,
    CYGFX_ERP_LEVEL_INFO); \endcode
    will print all messages (\e info,\e warning,\e error) that come from the
    display module. The module IDs are defined for each driver component (see
    Module IDs).

    \param [in] moduleId  Module ID selection (see CYGFX_ERP_MODULE_ID_...).
    \param [in] level  Level selection:
                       - ::CYGFX_ERP_LEVEL_NOTHING No messages
                       - ::CYGFX_ERP_LEVEL_ERROR All error messages
                       - ::CYGFX_ERP_LEVEL_WARNING All error and warning messages
                       - ::CYGFX_ERP_LEVEL_INFO All error, warning and info messages

    \retval    ::CYGFX_OK                          On success
    \retval    ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER   An invalid value is set in
               an argument.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_ErpSetMessageLevel( CYGFX_MODULE    moduleId,
                                                   CYGFX_ERP_LEVEL level);

/**
    Sets the channel for error messages. By default, only ::CYGFX_ERP_DEST_STDOUT
    is \e ON.

    \note ::CYGFX_ERP_DEST_STDOUT and ::CYGFX_ERP_DEST_BUFFER can be en-/disabled
    independently.
    \note Call CyGfx_ErpSetPrintf before enabling CYGFX_ERP_DEST_STDOUT,
    call CyGfx_ErpSetBuffer before enabling CYGFX_ERP_DEST_BUFFER.

    \param [in] dest  Message channel selection:
                      - ::CYGFX_ERP_DEST_STDOUT Messages are routed to stdout
                      - ::CYGFX_ERP_DEST_BUFFER Messages are routed to a buffer
    \param [in] prop  Setting of specified message channel:
                      - ::CYGFX_ERP_CHANNEL_OFF Set message channel \e OFF
                      - ::CYGFX_ERP_CHANNEL_ON Set message channel \e ON

    \retval    ::CYGFX_OK                           On success
    \retval    ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER   An invalid value is set in
               an argument.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_ErpSetMessageChannel( CYGFX_ERP_DEST    dest,
                                                     CYGFX_ERP_CHANNEL prop);

/**
    Sets the parameter for a buffer that is used as a channel for error messages.

    \param [in] bufferAddr  Address of the provided buffer
    \param [in] bufferSize  Size (in bytes) of the provided buffer

    \retval    ::CYGFX_OK                         On success
    \retval    ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER An invalid value is set in an
               argument.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_ErpSetBuffer( CYGFX_ADDR bufferAddr,
                                             CYGFX_U32  bufferSize);

/**
    Sets the print function that is used for the STDOUT channel

    \param [in] user_print_function  A Function of type ::CYGFX_ERP_PRINTFUNCTION
                                     (function returning "void" of parameter "const char *string") that shall be
                                     used to "print" on STDOUT. e.g.:
    \code
    void stdout_printf(const char *string)
    {
      if(0 < strlen(string) )
      {
          printf(string);
      }
    }
    \endcode

    \note      The parameter user_print_function will be initialized to NULL. i.e.,
               without setting this function, there will be no messages on STDOUT.

    \retval    ::CYGFX_OK                         On success
    \retval    ::CYGFX_ERP_ERR_ERP_INVALID_PARAMETER An invalid value is set in an
               argument.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_ErpSetPrintf( CYGFX_ERP_PRINTFUNCTION* user_print_function);


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_ERP_H */

