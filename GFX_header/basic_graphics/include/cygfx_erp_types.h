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
 * \file    cygfx_erp_types.h
 */


#ifndef CYGFX_ERP_TYPES_H
#define CYGFX_ERP_TYPES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
 * \addtogroup cygfx_erp
 * \code #include "cygfx_erp_types.h" \endcode
 */


/** \{ */


/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/** \name Error reporting levels */
/** \{ */
typedef CYGFX_U08 CYGFX_ERP_LEVEL;                   /**< Type for erp level */
#define CYGFX_ERP_LEVEL_NOTHING ((CYGFX_ERP_LEVEL)0) /**< Report no messages */
#define CYGFX_ERP_LEVEL_ERROR   ((CYGFX_ERP_LEVEL)1) /**< Report error messages */
#define CYGFX_ERP_LEVEL_WARNING ((CYGFX_ERP_LEVEL)2) /**< Report error+warning messages */
#define CYGFX_ERP_LEVEL_INFO    ((CYGFX_ERP_LEVEL)3) /**< Report error+warning+info messages */
/** \} */

/** \name Error reporting channel properties */
/** \{ */
typedef CYGFX_U08 CYGFX_ERP_CHANNEL;                 /**< Type for erp channel setting */
#define CYGFX_ERP_CHANNEL_OFF ((CYGFX_ERP_CHANNEL)0) /**< Message channel off */
#define CYGFX_ERP_CHANNEL_ON  ((CYGFX_ERP_CHANNEL)1) /**< Message channel on */
/** \} */

/** \name Error reporting destinations */
/** \{ */
typedef CYGFX_U08 CYGFX_ERP_DEST;                 /**< Type for erp destination setting */
#define CYGFX_ERP_DEST_STDOUT ((CYGFX_ERP_DEST)0) /**< Report to stdout */
#define CYGFX_ERP_DEST_BUFFER ((CYGFX_ERP_DEST)1) /**< Report to buffer */
/** \} */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/* N/A */

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_ERP_TYPES_H */
