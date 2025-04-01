/******************************************************************************
 ** \file     cyjpg_typedef.h
 ** \brief    type definition for modules
 **
 ** This header file includes commonly type definitions.
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
#ifndef CYJPG_TYPEDEF_H
#define CYJPG_TYPEDEF_H

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
/* Error interrupt type Enumeration */
typedef enum
{
    CYJPG_ERROR_NONE = 0U,    /* SUCCESS */
    CYJPG_FETCH_ERROR = 1U,
    CYJPG_STORE_ERROR = 2U
} CYJPG_ERRIRQ_TYPE_E;

/* Operation mode Enumeration */
typedef enum
{
    CYJPG_CONFIG = 0U,   /* Configuration Mode */
    CYJPG_RESERVE = 1U,  /* Reserved */
    CYJPG_DECODING = 2U, /* Decoding Mode */
    CYJPG_SUSPEND = 3U   /* Suspended Mode */
} CYJPG_OPERATIONMODE_E;

/* JPEG CORE IRQ cause Enumeration */
typedef enum
{
    CYJPG_COREIRQ_APPMARKER = 0U,    /* Bit = 0 */
    CYJPG_COREIRQ_COMMARKER,         /* Bit = 1 */
    CYJPG_COREIRQ_UNKNOWNMARKER,     /* Bit = 2 */
    CYJPG_COREIRQ_SIZEAVAILABLE,     /* Bit = 3 */
    CYJPG_COREIRQ_ERRORINTERVAL= 8U, /* Bit = 8 */
    CYJPG_COREIRQ_ERRORTOTALDATA,    /* Bit = 9 */
    CYJPG_COREIRQ_ERRORMARKER,       /* Bit = 10 */
    CYJPG_COREIRQ_CORRECTEDEND = 30U,/* Bit = 30 */
    CYJPG_COREIRQ_NORMALEND,         /* Bit = 31 */
    CYJPG_COREIRQ_FAILED = 99U       /* SW error occurred */
} CYJPG_JPGCORE_CAUSE_E;


/* JPEG Decode information structure */
typedef struct
{
    CYJPG_U08 subsample;    /* Frame format(YUV444 etc.) */
    CYJPG_U16 dri;          /* Value downloaded from DRI marker segment */
    CYJPG_U16 sizey;        /* Detected Y size(pixels) */
    CYJPG_U16 sizex;        /* Detected X size(pixels) */
    CYJPG_U16 cropstarty;   /* Y crop start position(pixels) */
    CYJPG_U16 cropstartx;   /* X crop start position(pixels) */
    CYJPG_U16 cropsizey;    /* Crop size(pixels) for Y direction */
    CYJPG_U16 cropsizex;    /* Crop size(pixels) for X direction */
} CYJPG_DECODEINFO_S;

/* JPEG decode setup information structure */
typedef struct
{
    CYJPG_U32 fetchAddress;
    CYJPG_U32 fetchLength;
    CYJPG_U32 storeAddress0;
    CYJPG_U32 storeStride0;
    CYJPG_U32 storeLength0;
    CYJPG_U32 storeAddress1;
    CYJPG_U32 storeStride1;
    CYJPG_U32 storeLength1;
    CYJPG_U08 upsamplingEn;
    CYJPG_U08 markerskipEn;
    CYJPG_U08 cropEn;
    CYJPG_U08 correctionEn;
    CYJPG_DECODEINFO_S *decodeinfo_s;
} CYJPG_JPGINFO_S;

/* AXI Bus setup information structure */
typedef struct
{
    CYJPG_U08 arcache;    /* ARCACHE value of AXI transactions on Fetch Unit */
    CYJPG_U08 awcache;    /* ARCACHE value of AXI transactions on Store Unit. */
    CYJPG_U08 fetchburstlength;    /* Maximum burst length for Fetch Unit */
    CYJPG_U08 storeburstlength;    /* Maximum burst length for Store Unit */
} CYJPG_AXICTL_S;

/* JPEG Interrupt control information structure */
typedef struct
{
    CYJPG_U08 decodeintrmask;
    CYJPG_U08 frameCompleteClear;
    CYJPG_U08 jpegCoreClear;
    CYJPG_U08 fetchErrorClear;
    CYJPG_U08 storeErrorClear;
    CYJPG_U08 frameCompleteMask;
    CYJPG_U08 jpegCoreMask;
    CYJPG_U08 fetchErrorMask;
    CYJPG_U08 storeErrorMask;
    CYJPG_U08 appMarkerEn;
    CYJPG_U08 comMarkerEn;
    CYJPG_U08 unknownMarkerEn;
    CYJPG_U08 sizeAvailableEn;
    CYJPG_U08 errorIntervalEn;
    CYJPG_U08 errorTotalDataEn;
    CYJPG_U08 intMaskEn;
} CYJPG_IRQCTL_S;

/* JPEG initialize information structure */
typedef struct
{
    CYJPG_AXICTL_S *axictl_s;
    CYJPG_IRQCTL_S *irqctl_s;
    CYJPG_JPGINFO_S *jpginfo_s;
} CYJPG_INIT_S;

/* JPEG Interrupt status structure */
typedef struct
{
    CYJPG_BOOL intrFrameComplete;
    CYJPG_BOOL intrJpegCore;
    CYJPG_BOOL intrFetchError;
    CYJPG_BOOL intrStoreError;
    CYJPG_BOOL frameCompleteMasked;
    CYJPG_BOOL jpegCoreMasked;
    CYJPG_BOOL fetchErrorMasked;
    CYJPG_BOOL storeErrorMasked;
    CYJPG_BOOL appMarker;
    CYJPG_BOOL comMarker;
    CYJPG_BOOL unknownMarker;
    CYJPG_BOOL sizeAvailable;
    CYJPG_BOOL errorInterval;
    CYJPG_BOOL errorTotalData;
    CYJPG_BOOL errorMarker;
    CYJPG_BOOL correctedEnd;
    CYJPG_BOOL normalEnd;
    CYJPG_BOOL interval;            /* Correction Crop Status*/
    CYJPG_BOOL totalSize;           /* Correction Crop Status*/
    CYJPG_BOOL cropEnd;             /* Correction Crop Status*/
    CYJPG_BOOL cropSizeError;       /* Correction Crop Status*/
    CYJPG_BOOL mcuUnitError;        /* Correction Crop Status*/
    CYJPG_BOOL noDri;               /* Correction Crop Status*/
    CYJPG_BOOL noRst;               /* Correction Crop Status*/
    CYJPG_U32  errorCodeVal;        /* ERRORCODE */
} CYJPG_IRQSTATUS_S;

/* JPEG Decode core status structure */
typedef struct
{
    CYJPG_OPERATIONMODE_E operationMode;
    CYJPG_BOOL fetchUnitActive;
    CYJPG_BOOL fetchAxiActive;
    CYJPG_BOOL storeUnitActive;
    CYJPG_BOOL storeAxiActive;
    CYJPG_U32 fetchstatus;
    CYJPG_U32 storestatus;
    CYJPG_BOOL decodingstatus;
    CYJPG_BOOL suspend;
} CYJPG_CORESTATUS_S;

/* HW Error information structure*/
typedef struct
{
    CYJPG_U08 errorStatusNum;    /* Error status */
    CYJPG_U32 errorStatus[10];
    CYJPG_U08 correctionCropNum; /* Correction Crop */
    CYJPG_U32 correctionCropStatus[10];
    CYJPG_U08 errorIrqNum;       /* Error IRQ cause */
    CYJPG_U32 errorIrq[2][10];
} CYJPG_HWERRINFO_S;

/* SW Error information structure*/
typedef struct
{
    CYJPG_U08 swErrorNum;
    CYJPG_ERROR swError[10];
} CYJPG_SWERRINFO_S;

/* Version information structure*/
typedef struct
{
    CYJPG_U08 mainVer;     /* main version */
    CYJPG_U08 minorVer;    /* minor version */
    CYJPG_U08 patchVer;    /* patch version */
} CYJPG_VERSIONINFO_S;

/*****************************************************************************/
/* Global Variable/Constant Declarations                                     */
/*****************************************************************************/

/*****************************************************************************/
/* Global Function Declarations                                              */
/*****************************************************************************/

#endif /* CYJPG_TYPEDEF_H */
