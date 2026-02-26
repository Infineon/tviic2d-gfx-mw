/******************************************************************************
 ** \file     cyjpg_basetypes.h
 ** \brief    Base type define header
 **
 ** Common header
 **
 ** Changes by the user are not permitted.
 **
 ** Product: SW-TVII-JPEG-DRV
 ** Supported devices: TRAVEO T2G CYT4DN, TRAVEO T2G CYT3DL
 **
 ** (c) 2020-2026, Infineon Technologies AG, or an affiliate of Infineon
 ** Technologies AG. All rights reserved.
 ** This software, associated documentation and materials ("Software") is
 ** owned by Infineon Technologies AG or one of its affiliates ("Infineon")
 ** and is protected by and subject to worldwide patent protection, worldwide
 ** copyright laws, and international treaty provisions. Therefore, you may use
 ** this Software only as provided in the license agreement accompanying the
 ** software package from which you obtained this Software. If no license
 ** agreement applies, then any use, reproduction, modification, translation, or
 ** compilation of this Software is prohibited without the express written
 ** permission of Infineon.
 **
 ** Disclaimer: UNLESS OTHERWISE EXPRESSLY AGREED WITH INFINEON, THIS SOFTWARE
 ** IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 ** INCLUDING, BUT NOT LIMITED TO, ALL WARRANTIES OF NON-INFRINGEMENT OF
 ** THIRD-PARTY RIGHTS AND IMPLIED WARRANTIES SUCH AS WARRANTIES OF FITNESS FOR A
 ** SPECIFIC USE/PURPOSE OR MERCHANTABILITY.
 ** Infineon reserves the right to make changes to the Software without notice.
 ** You are responsible for properly designing, programming, and testing the
 ** functionality and safety of your intended application of the Software, as
 ** well as complying with any legal requirements related to its use. Infineon
 ** does not guarantee that the Software will be free from intrusion, data theft
 ** or loss, or other breaches ("Security Breaches"), and Infineon shall have
 ** no liability arising out of any Security Breaches. Unless otherwise
 ** explicitly approved by Infineon, the Software may not be used in any
 ** application where a failure of the Product or any consequences of the use
 ** thereof can reasonably be expected to result in personal injury.
*****************************************************************************/
#ifndef CYJPG_BASETYPES_H
#define CYJPG_BASETYPES_H

/*****************************************************************************/
/* Include Files                                                             */
/*****************************************************************************/
#include <stdint.h>

/*****************************************************************************/
/* Macro Definitions                                                         */
/*****************************************************************************/
#define CYJPG_EXTERN extern
#define CYJPG_STATIC static

/*****************************************************************************/
/* Type Definitions                                                          */
/*****************************************************************************/
typedef int32_t CYJPG_S32;      /**< Signed 32-bit integer */
typedef uint32_t CYJPG_U32;     /**< Unsigned 32-bit integer */
typedef uint16_t CYJPG_U16;     /**< Unsigned 16-bit integer */
typedef uint8_t CYJPG_U08;      /**< Unsigned 8-bit integer */
typedef CYJPG_S32 CYJPG_BOOL;   /**< Boolean */
typedef CYJPG_S32 CYJPG_ERROR;  /**< Function return code */

/*****************************************************************************/
/* Global Variable/Constant Declarations                                     */
/*****************************************************************************/

/*****************************************************************************/
/* Global Function Declarations                                              */
/*****************************************************************************/

#endif /* CYJPG_BASETYPS_H */
