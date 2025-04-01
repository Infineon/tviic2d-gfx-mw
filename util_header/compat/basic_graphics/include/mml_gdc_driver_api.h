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
    \file        mml_gdc_driver_api.h
*/


#ifndef MML_GDC_DRIVER_API_H
#define MML_GDC_DRIVER_API_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_driver_api.h"

#include "mm_types.h"
#include "mm_defines.h"
#include "mm_gdc_erp.h"
#include "mm_gdc_errors.h"
#include "mm_gdc_module_id.h"
#include "mmd_gdc_interrupthandler.h"

#include "mml_gdc_types.h"
#include "mml_gdc_sync.h"           /* Types used by nearly every module! */
#include "mml_gdc_surfman.h"        /* Types used by several modules! */
#include "mml_gdc_capture.h"        /* Types used by several modules! */
#include "mm_gdc_histo.h"
#include "mml_gdc_pixeng.h"
#include "mml_gdc_config.h"         /* Config depends on PixelEngine */
#include "mml_gdc_display.h"        /* Types used by several modules! Display depends on Config */

#include "mml_gdc_draweng.h"
#include "mml_gdc_erp.h"
#include "mml_gdc_sysinit.h"
#include "mml_gdc_writeback.h"
/** \addtogroup compat */
/** \{ */



/**
    \addtogroup mml_gdc_driver_api
    \code #include "mml_gdc_driver_api.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include

    This header file is just for convenience. It includes all header files of the driver in the correct order.
*/



/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
}
#endif

#endif /* MML_GDC_DRIVER_API_H */

