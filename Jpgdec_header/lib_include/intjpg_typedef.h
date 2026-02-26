/******************************************************************************
 ** \file     intjpg_typedef.h
 ** \brief    JPEG Decode driver definition header
 **
 ** This header file includes type definitions for HW registers
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
