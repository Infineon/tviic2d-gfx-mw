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
    \file        mmd_gdc_interrupthandler.h
*/


#ifndef MMD_GDC_INTERRUPTHANDLER_H
#define MMD_GDC_INTERRUPTHANDLER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_interrupthandler.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mmd_gdc_interrupthandler
    \code #include "mmd_gdc_interrupthandler.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for Interrupt API */
/** \{ */
#define MM_GDC_IRIS_STORE4_FRAMECOMPLETE_IRQ        CYGFX_INT_BANK0_VIDEOIO0_STORE4_FRAMECOMPLETE       /**< Simple redefinition */
#define MM_GDC_IRIS_HISTOGRAM4_VALID_IRQ            CYGFX_INT_BANK0_VIDEOIO0_HISTOGRAM4_VALID           /**< Simple redefinition */
#define MM_GDC_IRIS_FRAMEDUMP8_ERROR_IRQ            CYGFX_INT_BANK0_VIDEOIO0_FRAMEDUMP_ERROR            /**< Simple redefinition */
#define MM_GDC_IRIS_DISENGCFG_FRAMECOMPLETE0_IRQ    CYGFX_INT_BANK1_VIDEOIO1_DISENGCFG_FRAMECOMPLETE0   /**< Simple redefinition */
#define MM_GDC_IRIS_DISENGCFG_FRAMECOMPLETE1_IRQ    CYGFX_INT_BANK1_VIDEOIO1_DISENGCFG_FRAMECOMPLETE1   /**< Simple redefinition */
#define MM_GDC_IRIS_ITUIFC4_ERROR_IRQ               CYGFX_INT_BANK0_VIDEOIO0_ITUIFC0_ERROR              /**< Simple redefinition */
#define MM_GDC_IRIS_CMDSEQ_ERROR_IRQ                CYGFX_INT_BANK2_GFX2D_CMDSEQ_ERROR                  /**< Simple redefinition */
#define MM_GDC_IRIS_COMCTRL_SW3_IRQ                 CYGFX_INT_BANK0_VIDEOIO0_DEBUG_CAP2WIN              /**< Simple redefinition */
#define MM_GDC_IRIS_FRAMEGEN0_SECSYNC_ON_IRQ        CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_SECSYNC_ON       /**< Simple redefinition */
#define MM_GDC_IRIS_FRAMEGEN0_SECSYNC_OFF_IRQ       CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN0_SECSYNC_OFF      /**< Simple redefinition */
#define MM_GDC_IRIS_FRAMEGEN1_SECSYNC_ON_IRQ        CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_SECSYNC_ON       /**< Simple redefinition */
#define MM_GDC_IRIS_FRAMEGEN1_SECSYNC_OFF_IRQ       CYGFX_INT_BANK1_VIDEOIO1_FRAMEGEN1_SECSYNC_OFF      /**< Simple redefinition */
#define MM_GDC_IRIS_FRAMECAP4_SYNC_ON_IRQ           CYGFX_INT_BANK0_VIDEOIO0_FRAMECAP0_SYNC_ON          /**< Simple redefinition */
#define MM_GDC_IRIS_FRAMECAP4_SYNC_OFF_IRQ          CYGFX_INT_BANK0_VIDEOIO0_FRAMECAP0_SYNC_OFF         /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */
/* Note: The interrupt handler function prototype in TRAVEO™ T2G is not compatible with the prototype in TRAVEO™ family S6J3200.
         Use the related interrupt handler (CyGfx_kInterruptHandler) directly. */

/* Note: The interrupt handler registration function in TRAVEO™ T2G is not compatible with the function in TRAVEO™ family S6J3200.
         Use the related interrupt registration function (CyGfx_kInterruptRegisterHandler) directly. */

/** \} */ /* end addtogroup mmd_gdc_interrupthandler*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MMD_GDC_INTERRUPTHANDLER_H */
