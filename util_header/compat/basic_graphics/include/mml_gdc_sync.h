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
    \file        mml_gdc_sync.h
*/


#ifndef MML_GDC_SYNC_H
#define MML_GDC_SYNC_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_sync.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_sync
    \code #include "mml_gdc_sync.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for Sync API */
/** \{ */
#define MML_GDC_SYNC_CONTAINER          CYGFX_SYNC_OBJECT_S     /**< Simple redefinition */
//#define MML_GDC_SYNC                    CYGFX_SYNC
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple redirection of "old" functions */
/** \{ */
#define mmlGdcSyncReset                 CyGfx_SyncReset         /**< Simple redefinition */
#define mmlGdcSyncWait                  CyGfx_SyncWaitSync      /**< Simple redefinition */
#define mmlGdcSyncIncr                  CyGfx_SyncIncr          /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mml_gdc_sync*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MML_GDC_SYNC_H */

