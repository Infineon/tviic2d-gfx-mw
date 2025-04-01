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
