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

