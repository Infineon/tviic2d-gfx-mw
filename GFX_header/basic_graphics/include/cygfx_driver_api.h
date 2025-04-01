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
 * \file    cygfx_driver_api.h
 */


#ifndef CYGFX_DRIVER_API_H
#define CYGFX_DRIVER_API_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* ATTENTION: The order of the includes matters. */
/*            Don't change unless you really know what you do. */
#include "cygfx_basetypes.h"
#include "cygfx_defines.h"
#include "cygfx_erp_types.h"
#include "cygfx_errors.h"
#include "cygfx_module_id.h"
#include "cygfx_interrupthandler.h"

#include "cygfx_types.h"
#include "cygfx_sync.h"           /* Types used by nearly every module */
#include "cygfx_palette.h"
#include "cygfx_surfman.h"        /* Types used by several modules */
#include "cygfx_capture.h"          /* Types used by several modules */
#include "cygfx_display.h"        /* Types used by several modules */
#include "cygfx_window.h"        /* Types used by several modules */
#include "cygfx_bliteng.h"

#include "cygfx_config.h"
#include "cygfx_draweng.h"
#include "cygfx_erp.h"
#include "cygfx_sysinit.h"
#include "cygfx_writeback.h"
#include "cygfx_cm.h"


#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/* N/A */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_DRIVER_API_H */

