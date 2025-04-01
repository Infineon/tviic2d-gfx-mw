/******************************************************************************
 ** \file     intjpg_typedef.h
 ** \brief    JPEG Decode driver definition header
 **
 ** This header file includes type definitions for HW registers
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
#ifndef INTJPG_TYPEDEF_H
#define INTJPG_TYPEDEF_H

/*****************************************************************************/
/* Include Files                                                             */
/*****************************************************************************/
#include "cyjpg_basetypes.h"

/*****************************************************************************/
/* Macro Definitions                                                         */
/*****************************************************************************/
/* N/A */

/*****************************************************************************/
/* Type Definitions                                                          */
/*****************************************************************************/
/* Enumeration type */
/* N/A */

/* Structure type */
/* HW CTL register structure */
typedef struct
{
    CYJPG_U32 enabled;
} INTJPG_CTLREG_S;

/* HW HF_STRUCT register structure */
typedef struct
{
    CYJPG_U32 axictl;
    CYJPG_U32 burst;
    CYJPG_U32 reserved1[2];
    CYJPG_U32 fetchbuf0;
    CYJPG_U32 fetchbuf1;
    CYJPG_U32 reserved2[2];
    CYJPG_U32 store0buf0;
    CYJPG_U32 store0buf1;
    CYJPG_U32 store0buf2;
    CYJPG_U32 reserved3[5];
    CYJPG_U32 store1buf0;
    CYJPG_U32 store1buf1;
    CYJPG_U32 store1buf2;
    CYJPG_U32 reserved4[5];
    CYJPG_U32 storectl;
    CYJPG_U32 reserved5[3];
    CYJPG_U32 cmd;
    CYJPG_U32 reserved6[3];
    CYJPG_U32 decodeintrmask;
    CYJPG_U32 reserved7[3];
    CYJPG_U32 intr;
    CYJPG_U32 intr_set;
    CYJPG_U32 intr_mask;
    CYJPG_U32 intr_masked;
    CYJPG_U32 reserved8[4];
    CYJPG_U32 errorstatus;
    CYJPG_U32 operatingstatus;
    CYJPG_U32 fetchstatus;
    CYJPG_U32 storestatus;
} INTJPG_HF_STRUCTREG_S;

/* HW DEC_STRUCT register structure */
typedef struct
{
    CYJPG_U32 imageproperty;
    CYJPG_U32 swreset;
    CYJPG_U32 decodingstatus;
    CYJPG_U32 reserved1[2];
    CYJPG_U32 dri;
    CYJPG_U32 sizey;
    CYJPG_U32 sizex;
    CYJPG_U32 reserved2;
    CYJPG_U32 decodingoption;
    CYJPG_U32 intr_dec_en;
    CYJPG_U32 intr_dec;
    CYJPG_U32 errorcode;
    CYJPG_U32 correctioncropstatus;
    CYJPG_U32 suspend;
    CYJPG_U32 dnl;
    CYJPG_U32 cropstarty;
    CYJPG_U32 cropstartx;
    CYJPG_U32 cropsizey;
    CYJPG_U32 cropsizex;
} INTJPG_DEC_STRUCTREG_S;

/* HW status structure */
typedef struct
{
    CYJPG_U32 operatingstatus;      /* in HF_STRUCT */
    CYJPG_U32 fetchstatus;          /* in HF_STRUCT */
    CYJPG_U32 storestatus;          /* in HF_STRUCT */
    CYJPG_U32 intr;                 /* in HF_STRUCT */
    CYJPG_U32 intr_mask;            /* in HF_STRUCT */
    CYJPG_U32 decodingstatus;       /* in DEC_STRUCT */
    CYJPG_U32 correctioncropstatus; /* in DEC_STRUCT */
    CYJPG_U32 suspend;              /* in DEC_STRUCT */
    CYJPG_U32 intr_dec;             /* in DEC_STRUCT */
    CYJPG_U32 errorcode;            /* in DEC_STRUCT */
} INTJPG_HWSTATUS_S;

/* IRQ setup info structure */
typedef struct 
{
    CYJPG_U32 decodeintrmask;     /* in HF_STRUCT */
    CYJPG_U32 intr;               /* in HF_STRUCT */
    CYJPG_U32 intr_mask;          /* in HF_STRUCT */
    CYJPG_U32 intr_dec_en;        /* in DEC_STRUCT */
} INTJPG_IRQINFO_S;

/*****************************************************************************/
/* Global Variable/Constant Declarations                                     */
/*****************************************************************************/
/* N/A */

/*****************************************************************************/
/* Global Function Declarations                                              */
/*****************************************************************************/
/* N/A */

#endif /* INTJPG_TYPEDEF_H */
