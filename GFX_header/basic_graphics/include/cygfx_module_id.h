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
 * \file    cygfx_module_id.h
 */


#ifndef CYGFX_MODULE_ID_H
#define CYGFX_MODULE_ID_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif


/**
 *  \addtogroup cygfx_erp
 *  \code #include "cygfx_module_id.h" \endcode
 *
 *  Module IDs are used to enable/disable message logging for certain
 *  modules of the driver.
 *  Wildcards can be used to enable/disable messages for all modules of the driver.
 *
 *  For details, see ::CyGfx_ErpSetMessageLevel.
 */


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/


/** \name Module IDs
 *  The error reporting level can be set per module ID.
 *  \note Kernel modules are covered by the corresponding user module.
 * \{
 */

#define CYGFX_ERP_MODULE_ID_GDC_ALL_USER       (CYGFX_MODULEID(0x210FFFFFu)) /**< Wildcard for all modules of the Graphics Driver */
#define CYGFX_ERP_MODULE_ID_GDC_SURFMAN_USER   (CYGFX_MODULEID(0x21000000u)) /**< Surface Manager */
#define CYGFX_ERP_MODULE_ID_GDC_DISP_USER      (CYGFX_MODULEID(0x21001000u)) /**< Display */
#define CYGFX_ERP_MODULE_ID_GDC_CAPTURE_USER   (CYGFX_MODULEID(0x21002000u)) /**< Capture */
#define CYGFX_ERP_MODULE_ID_GDC_PALETTE_USER   (CYGFX_MODULEID(0x21003000u)) /**< Palette */
#define CYGFX_ERP_MODULE_ID_GDC_WRITEBACK_USER (CYGFX_MODULEID(0x21004000u)) /**< Writeback */
#define CYGFX_ERP_MODULE_ID_GDC_SYNC_USER      (CYGFX_MODULEID(0x21005000u)) /**< Synchronization */
#define CYGFX_ERP_MODULE_ID_GDC_DE_USER        (CYGFX_MODULEID(0x21006000u)) /**< Drawing Engine */
#define CYGFX_ERP_MODULE_ID_GDC_CARD_USER      (CYGFX_MODULEID(0x21007000u)) /**< Card (HW access) */
#define CYGFX_ERP_MODULE_ID_GDC_CONFIG_USER    (CYGFX_MODULEID(0x21008000u)) /**< Configuration */
#define CYGFX_ERP_MODULE_ID_GDC_SYSINIT_USER   (CYGFX_MODULEID(0x21009000u)) /**< Initialization */
#define CYGFX_ERP_MODULE_ID_GDC_RESMAN_USER    (CYGFX_MODULEID(0x2100A000u)) /**< Resource Manager */
#define CYGFX_ERP_MODULE_ID_GDC_CMDSEQ_USER    (CYGFX_MODULEID(0x2100B000u)) /**< Command Sequencer */
#define CYGFX_ERP_MODULE_ID_GDC_WIN_USER       (CYGFX_MODULEID(0x2100C000u)) /**< Window */
#define CYGFX_ERP_MODULE_ID_GDC_BLITENG_USER   (CYGFX_MODULEID(0x2100D000u)) /**< Blit Engine */
#define CYGFX_ERP_MODULE_ID_GDC_HW_USER        (CYGFX_MODULEID(0x2100E000u)) /**< Internal components (shared between various APIs) */
#define CYGFX_ERP_MODULE_ID_GDC_ERP_USER       (CYGFX_MODULEID(0x2100F000u)) /**< Error Reporting */
#define CYGFX_ERP_MODULE_ID_GDC_INTERRUPT_USER (CYGFX_MODULEID(0x21010000u)) /**< Interrupt */
#define CYGFX_ERP_MODULE_ID_GDC_CM_USER        (CYGFX_MODULEID(0x21011000u)) /**< CM */

/** \} */

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


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_MODULE_ID_H */

