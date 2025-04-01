/******************************************************************************
 ** \file     cyjpg_def.h
 ** \brief    JPEG Decode Driver definition header file
 **
 ** This header file includes macro functions for follows.
 **     Commonly definition
 **       Basically error code
 **       Memory map(HW registers base address)
 **
 ** Changes by the user are not permitted.
 **
 ** Product: SW-TVII-JPEG-DRV
 ** Supported devices: TVII-C-2D-6M, TVII-C-2D-6M-DDR
 **
 ** (c) 2020-2022, Cypress Semiconductor Corporation (an Infineon company) or
 ** an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
 ** This software, including source code, documentation and related materials
 ** ("Software") is owned by Cypress Semiconductor Corporation or one of
 ** its affiliates ("Cypress") and is protected by and subject to worldwide
 ** patent protection (United States and foreign), United States copyright laws
 ** and international treaty provisions.  Therefore, you may use this Software
 ** only as provided in the license agreement accompanying the software package
 ** from which you obtained this Software ("EULA").
 ** If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 ** non-transferable license to copy, modify,
 ** and compile the Software source code solely for use in connection
 ** with Cypress's integrated circuit products.
 ** Any reproduction, modification, translation, compilation,
 ** or representation of this Software except as specified above is prohibited
 ** without the express written permission of Cypress.
 ** Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 ** EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
 ** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 ** Cypress reserves the right to make changes to the Software without notice.
 ** Cypress does not assume any liability arising out of the application or
 ** use of the Software or any product or circuit described in the Software.
 ** Cypress does not authorize its products for use in any products
 ** where a malfunction or failure of the Cypress product may reasonably be
 ** expected to result in significant property damage,
 ** injury or death ("High Risk Product"). By including Cypress's product
 ** in a High Risk Product, the manufacturer of such system or application
 ** assumes all risk of such use and in doing so agrees to indemnify Cypress
 ** against all liability.
******************************************************************************/
#ifndef CYJPG_DEF_H
#define CYJPG_DEF_H

#include <stddef.h>

/*****************************************************************************/
/* Macro Definitions                                                         */
/*****************************************************************************/
/* Define TRUE/FALSE */
#define CYJPG_FALSE (CYJPG_BOOL)0
#define CYJPG_TRUE  (CYJPG_BOOL)1

/* Define ACTIVE/IDLE for Status */
#define CYJPG_IDLE   (CYJPG_BOOL)0
#define CYJPG_ACTIVE (CYJPG_BOOL)1

/* Define Disable/Enable for inputted structure */
#define CYJPG_DISABLE (CYJPG_U08)0
#define CYJPG_ENABLE  (CYJPG_U08)1

/* Define NULL Pointer */
#define CYJPG_NULL NULL

/* Define HW_ERROR IRQ Information */
#define CYJPG_HW_EI_CAUSE   (CYJPG_U32)0
#define CYJPG_HW_EI_ERRCODE (CYJPG_U32)1

/* Error code */
#define CYJPG_ERRCODE(err) ((CYJPG_ERROR)(err))
#define CYJPG_OK                  (CYJPG_ERRCODE(0))
#define CYJPG_ERR_NULL            (CYJPG_ERRCODE(0x21000001))
#define CYJPG_ERR_PARAM           (CYJPG_ERRCODE(0x21000002))
#define CYJPG_ERR_NOT_ENABLE      (CYJPG_ERRCODE(0x21000003))
#define CYJPG_ERR_NOT_DISABLE     (CYJPG_ERRCODE(0x21000004))
#define CYJPG_ERR_HW_STATUS       (CYJPG_ERRCODE(0x21000005))
#define CYJPG_ERR_NOT_INITIALIZED (CYJPG_ERRCODE(0x21000006))
#define CYJPG_ERR_NO_INTERRUPT    (CYJPG_ERRCODE(0x21000007))
#define CYJPG_ERR                 (CYJPG_ERRCODE(0x2FFFFFFF))
#define CYJPG_KERR                (CYJPG_ERRCODE(0x1FFFFFFF))

/* Subsample type */
#define CYJPG_YUV444    (CYJPG_U32)0
#define CYJPG_YUV422    (CYJPG_U32)1
#define CYJPG_YUV411    (CYJPG_U32)6
#define CYJPG_YUV420    (CYJPG_U32)2
#define CYJPG_GRAYSCALE (CYJPG_U32)3
#define CYJPG_CMYK      (CYJPG_U32)4
#define CYJPG_INVALID   (CYJPG_U32)7

/* Memory map (physical address) */
#define CYJPG_JPEGDEC_BASE          (CYJPG_U32)0x40B10000  /* MXJPEGDECE Base Address */
#define CYJPG_JPEGDEC_CTL_OFFSET        (CYJPG_U32)0x0000  /* CTL register offset */
#define CYJPG_JPEGDEC_HF_STRUCT_OFFSET  (CYJPG_U32)0x1000  /* HF_STRUCT register offset */
#define CYJPG_JPEGDEC_DEC_STRUCT_OFFSET (CYJPG_U32)0x1800  /* DEC_STRUCT register offset */


/*****************************************************************************/
/* Type Definitions                                                          */
/*****************************************************************************/
/* N/A */

/*****************************************************************************/
/* Global Variable/Constant Declarations                                     */
/*****************************************************************************/
/* N/A */

/*****************************************************************************/
/* Global Function Declarations                                              */
/*****************************************************************************/
/* N/A */

#endif /* CYJPG_DEF_H */
