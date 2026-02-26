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
