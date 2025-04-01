/******************************************************************************
 ** \file     intjpg_def.h
 ** \brief    JPEG Decode driver definition header
 **
 ** This header file includes macro definitions.
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
#ifndef INTJPG_DEF_H
#define INTJPG_DEF_H

/*****************************************************************************/
/* Include Files                                                             */
/*****************************************************************************/
#include "cyjpg_basetypes.h"
#include "cyjpg_typedef.h"

/*****************************************************************************/
/* Macro Definitions                                                         */
/*****************************************************************************/
/* Version Information */
#define INTJPG_VER_MAIN  (CYJPG_U08)2
#define INTJPG_VER_MINOR (CYJPG_U08)0
#define INTJPG_VER_PATCH (CYJPG_U08)0

/* Value definition for Error information */
#define INTJPG_ERROR_VAL_NONE (CYJPG_U08)0
#define INTJPG_ERROR_VAL_MIN (CYJPG_U08)0

/* Value definition for HW error information */
#define INTJPG_HWERRORNUM_MAX (CYJPG_U08)10

/* Value definition for SW error information */
#define INTJPG_SWERRORNUM_MAX (CYJPG_U08)10

/* Maximum value for check parameter */
/* For AXI Bus */
#define INTJPG_ARCAHE_MAX            (CYJPG_U08)15
#define INTJPG_AWCAHE_MAX            (CYJPG_U08)15
#define INTJPG_FETCHBURSTLENGTH_MAX  (CYJPG_U08)1
#define INTJPG_STOREBURSTLENGTH_MAX  (CYJPG_U08)1

/* For IRQ CTL(All types are CYJPG_U08) */
#define INTJPG_EN_DIS_MAX (CYJPG_U08)1U

/* MASK value for Address alignment */
#define INTJPG_MASK_64BYTESACCESS (CYJPG_U32)0x3F

/* INTJPG_OPAMODE */
#define INTJPG_CONFIG   (CYJPG_U32)0
#define INTJPG_RESERVE  (CYJPG_U32)1
#define INTJPG_DECODING (CYJPG_U32)2
#define INTJPG_SUSPEND  (CYJPG_U32)3

/**/

/* CTL register Definition */
#define INTJPG_CTL_DISABLE 0x00000000U
#define INTJPG_CTL_ENABLED 0x80000000U

/* HF_STRUCT OPERATINGSTATUS MASK */
#define INTJPG_OPSTATUS_MODE_MASK 0x00000003U
#define INTJPG_OPSTATUS_FU_MASK   0x00010000U
#define INTJPG_OPSTATUS_FAXI_MASK 0x00020000U
#define INTJPG_OPSTATUS_SU_MASK   0x01000000U
#define INTJPG_OPSTATUS_SAXI_MASK 0x02000000U

/* HF_STRUCT OPERATINGSTATUS Active Value */
#define INTJPG_OPSTATUS_FU_ACT   0x00010000U
#define INTJPG_OPSTATUS_FAXI_ACT 0x00020000U
#define INTJPG_OPSTATUS_SU_ACT   0x01000000U
#define INTJPG_OPSTATUS_SAXI_ACT 0x02000000U

/* HF_STRUCT Shift Value */
#define INTJPG_AWCACHE_SHIFT (CYJPG_U32)8
#define INTJPG_SBL_SHIFT     (CYJPG_U32)8

/* DEC_STRUCT Shift Value */
/* DECODINGOPTION */
#define INTJPG_MARKERSKIP_SHIFT (CYJPG_U32)1
#define INTJPG_CROP_SHIFT       (CYJPG_U32)3

/* INTR_DEC_EN */
#define INTJPG_COMMARKER_SHIFT      (CYJPG_U32)1
#define INTJPG_UNKNOWNMARKER_SHIFT  (CYJPG_U32)2
#define INTJPG_SIZEAVAILABLE_SHIFT  (CYJPG_U32)3
#define INTJPG_ERRORINTERVAL_SHIFT  (CYJPG_U32)8
#define INTJPG_ERRORTOTALDATA_SHIFT (CYJPG_U32)9
#define INTJPG_CORRECTION_SHIFT     (CYJPG_U32)10
#define INTJPG_INTMASK_SHIFT        (CYJPG_U32)31

/* DEC_STRUCT DECODINGOPTION Bit */
#define INTJPG_MARKERSKIP_BIT (CYJPG_U32)0x00000002
#define INTJPG_CROP_BIT       (CYJPG_U32)0x00000008

/* INTR_SET and INTR_MASK */
#define INTJPG_JPEGCORE_SHIFT (CYJPG_U32)8
#define INTJPG_FETCHERR_SHIFT (CYJPG_U32)16
#define INTJPG_STOREERR_SHIFT (CYJPG_U32)17

/* DEC_STRUCT Subsample MASK */
#define INTJPG_SUBSAMPLES_MASK (CYJPG_U32)0x00000007

/* DEC_STRUCT DECODINGSTATUS MASK */
#define INTJPG_DECODINGSTATUS_MASK (CYJPG_U32)0x00000001

/* DEC_STRUCT DECODINGSTATUS Active */
#define INTJPG_DECODINGSTATUS_ACT  (CYJPG_U32)0x00000001

/* DEC_STRUCT CORRETIONCROPSTATUS MASK */
#define INTJPG_CCS_ITVL_MASK (CYJPG_U32)0x00000001
#define INTJPG_CCS_TSS_MASK  (CYJPG_U32)0x00000002
#define INTJPG_CCS_CES_MASK  (CYJPG_U32)0x00000008
#define INTJPG_CCS_CSES_MASK (CYJPG_U32)0x00000010
#define INTJPG_CCS_MUE_MASK  (CYJPG_U32)0x00000020
#define INTJPG_CCS_NDS_MASK  (CYJPG_U32)0x00000040
#define INTJPG_CCS_NRS_MASK  (CYJPG_U32)0x00000080

/* DEC_STRUCT CORRETIONCROPSTATUS Active Value */
#define INTJPG_CCS_ITVL_ACT  (CYJPG_U32)0x00000001
#define INTJPG_CCS_TSS_ACT   (CYJPG_U32)0x00000002
#define INTJPG_CCS_CES_ACT   (CYJPG_U32)0x00000008
#define INTJPG_CCS_CSES_ACT  (CYJPG_U32)0x00000010
#define INTJPG_CCS_MUE_ACT   (CYJPG_U32)0x00000020
#define INTJPG_CCS_NDS_ACT   (CYJPG_U32)0x00000040
#define INTJPG_CCS_NRS_ACT   (CYJPG_U32)0x00000080

/* DEC_STRUCT SUSPEND MASK */
#define INTJPG_SUSPEND_MASK 0x00000001U

/* DEC_STRUCT SUSPEND Active */
#define INTJPG_SUSPEND_ACT (CYJPG_U32)0x00000001

/* HF_STRUCT INTR MASK */
#define INTJPG_INTR_FC_MASK (CYJPG_U32)0x00000001  /* Frame complete IRQ */
#define INTJPG_INTR_JC_MASK (CYJPG_U32)0x00000100  /* JPEG CORE IRQ */
#define INTJPG_INTR_FE_MASK (CYJPG_U32)0x00010000  /* Fetch Error IRQ */
#define INTJPG_INTR_SE_MASK (CYJPG_U32)0x00020000  /* Store Error IRQ */

/* HF_STRUCT INTR Activate */
#define INTJPG_INTR_FC_ACT (CYJPG_U32)0x00000001  /* Frame complete IRQ */
#define INTJPG_INTR_JC_ACT (CYJPG_U32)0x00000100  /* JPEG CORE IRQ */
#define INTJPG_INTR_FE_ACT (CYJPG_U32)0x00010000  /* Fetch Error IRQ */
#define INTJPG_INTR_SE_ACT (CYJPG_U32)0x00020000  /* Store Error IRQ */

/* HF_STRUCT CMD register MASK */
#define INTJPG_CMD_START_MASK  (CYJPG_U32)0x00000001  /* Bit0: Start  */
#define INTJPG_CMD_RESUME_MASK (CYJPG_U32)0x00000100  /* Bit8: Resume */

/* HF_STRUCT CMD register SET */
#define INTJPG_CMD_START_SET  (CYJPG_U32)0x00000001  /* Bit0: Start  */
#define INTJPG_CMD_RESUME_SET (CYJPG_U32)0x00000100  /* Bit8: Resume */

/* DEC_STRUCT INTR_DEC Mask */
#define INTJPG_ID_AM_MASK (CYJPG_U32)0x00000001U   /* APPMARKER */
#define INTJPG_ID_CM_MASK (CYJPG_U32)0x00000002U   /* COMMARKER */
#define INTJPG_ID_UM_MASK (CYJPG_U32)0x00000004U   /* UNKNOWNMARKER */
#define INTJPG_ID_SA_MASK (CYJPG_U32)0x00000008U   /* SIZEAVAILABLE */
#define INTJPG_ID_EI_MASK (CYJPG_U32)0x00000100U   /* ERRORINTERVAL */
#define INTJPG_ID_ET_MASK (CYJPG_U32)0x00000200U   /* ERRORTOTALDATA */
#define INTJPG_ID_EM_MASK (CYJPG_U32)0x00000400U   /* ERRORMARKER */
#define INTJPG_ID_CE_MASK (CYJPG_U32)0x40000000U   /* CORRECTEDEND */
#define INTJPG_ID_NE_MASK (CYJPG_U32)0x80000000U   /* NORMALEND */
#define INTJPG_ID_MASK (INTJPG_ID_AM_MASK |         \
            INTJPG_ID_CM_MASK | INTJPG_ID_UM_MASK | \
            INTJPG_ID_SA_MASK | INTJPG_ID_EI_MASK | \
            INTJPG_ID_ET_MASK | INTJPG_ID_EM_MASK | \
            INTJPG_ID_CE_MASK | INTJPG_ID_NE_MASK)
#define INTJPG_ID_ERR_MASK (INTJPG_ID_EI_MASK |     \
            INTJPG_ID_ET_MASK | INTJPG_ID_EM_MASK)

/* DEC_STRUCT INTR_DEC CLEAR */
#define INTJPG_INTRDEC_CLR  ~INTJPG_ID_MASK

/* DEC_STRUCT INTR_DEC Active */
#define INTJPG_ID_AM_ACT (CYJPG_U32)0x00000001U   /* APPMARKER */
#define INTJPG_ID_CM_ACT (CYJPG_U32)0x00000002U   /* COMMARKER */
#define INTJPG_ID_UM_ACT (CYJPG_U32)0x00000004U   /* UNKNOWNMARKER */
#define INTJPG_ID_SA_ACT (CYJPG_U32)0x00000008U   /* SIZEAVAILABLE */
#define INTJPG_ID_EI_ACT (CYJPG_U32)0x00000100U   /* ERRORINTERVAL */
#define INTJPG_ID_ET_ACT (CYJPG_U32)0x00000200U   /* ERRORTOTALDATA */
#define INTJPG_ID_EM_ACT (CYJPG_U32)0x00000400U   /* ERRORMARKER */
#define INTJPG_ID_CE_ACT (CYJPG_U32)0x40000000U   /* CORRECTEDEND */
#define INTJPG_ID_NE_ACT (CYJPG_U32)0x80000000U   /* NORMALEND */

/* DEC_STRUCT INTR_DEC_EN MASK  */
#define INTJPG_IDE_APPMARKER_MASK      (CYJPG_U32)0x00000001U  /* Bit00: APPMARKER */
#define INTJPG_IDE_COMMARKER_MASK      (CYJPG_U32)0x00000002U  /* Bit01: COMMARKER */
#define INTJPG_IDE_UNKNOWNMARKER_MASK  (CYJPG_U32)0x00000004U  /* Bit02: UNKNOWNMARKER */
#define INTJPG_IDE_SIZEAVAILABLE_MASK  (CYJPG_U32)0x00000008U  /* Bit03: SIZEAVAILABLE */
#define INTJPG_IDE_ERRORINTERVAL_MASK  (CYJPG_U32)0x00000100U  /* Bit08: ERRORINTERVAL */
#define INTJPG_IDE_ERRORTOTALDATA_MASK (CYJPG_U32)0x00000200U  /* Bit09: ERRORTOTALDATA */
#define INTJPG_IDE_CORRECTION_MASK     (CYJPG_U32)0x00000400U  /* Bit10: CORRECTION */
#define INTJPG_IDE_INTMASK_MASK        (CYJPG_U32)0x80000000U  /* Bit31: INTMASK */

/* DEC_STRUCT INTR_DEC_EN SET  */
#define INTJPG_IDE_APPMARKER_SET      (CYJPG_U32)0x00000001U  /* Bit00: APPMARKER */
#define INTJPG_IDE_COMMARKER_SET      (CYJPG_U32)0x00000002U  /* Bit01: COMMARKER */
#define INTJPG_IDE_UNKNOWNMARKER_SET  (CYJPG_U32)0x00000004U  /* Bit02: UNKNOWNMARKER */
#define INTJPG_IDE_SIZEAVAILABLE_SET  (CYJPG_U32)0x00000008U  /* Bit03: SIZEAVAILABLE */
#define INTJPG_IDE_ERRORINTERVAL_SET  (CYJPG_U32)0x00000100U  /* Bit08: ERRORINTERVAL */
#define INTJPG_IDE_ERRORTOTALDATA_SET (CYJPG_U32)0x00000200U  /* Bit09: ERRORTOTALDATA */
#define INTJPG_IDE_CORRECTION_SET     (CYJPG_U32)0x00000400U  /* Bit10: CORRECTION */
#define INTJPG_IDE_INTMASK_SET        (CYJPG_U32)0x80000000U  /* Bit31: INTMASK */

/* DEC_STRUCT SWRESET MASK  */
#define INTJPG_SWRESET_MASK  (CYJPG_U32)0x80000000U  /* Bit31: CORERESET */

/* DEC_STRUCT SWRESET SET */
#define INTJPG_SWRESET_SET  (CYJPG_U32)0x80000000U   /* Bit31: CORERESET */

/* DEC_STRUCT CORRECTIONCROPSTATUS ERROR MASK */
#define INTJPG_CORRECTIONCROPSTATUS_ERROR (CYJPG_U32)0x000000F3u /* Bit2 reserved */
                                                           /* Bit3 CROPEND, not error */

/* DEC_STRUCT CORRECTIONCROPSTATUS MASK */
#define INTJPG_CCS_INTERVAL      (CYJPG_U32)0x00000001 /* Bit0 INTERVAL */
#define INTJPG_CCS_TOTALSIZE     (CYJPG_U32)0x00000002 /* Bit1 TOTALSIZE */
#define INTJPG_CCS_CROPEND       (CYJPG_U32)0x00000008 /* Bit3 CROPEND */
#define INTJPG_CCS_CROPSIZEERROR (CYJPG_U32)0x00000010 /* Bit4 CROPSIZEERROR */
#define INTJPG_CCS_MCUUNITERROR  (CYJPG_U32)0x00000020 /* Bit5 MCUUNITERROR */
#define INTJPG_CCS_NODRI         (CYJPG_U32)0x00000040 /* Bit6 CROPSIZEERROR */
#define INTJPG_CCS_NORST         (CYJPG_U32)0x00000080 /* Bit7 CROPSIZEERROR */

/*************************************/
/* Function Macro */
/* Shift left by specified value */
#define INTJPG_SHIFT( IN1, IN2 ) (CYJPG_U32)((CYJPG_U32)(IN1) << (CYJPG_U32)(IN2))

/* Copy member of HF_STRUCT */
#define INTJPG_GETHFSTRUCT(x)  hw_stReg.x = intJpg_hf_structReg.x;

/* Copy member of DEC_STRUCT */
#define INTJPG_GETDECSTRUCT(x) hw_stReg.x = intJpg_dec_structReg.x;

/* Set value to member of HF_STRUCT */
#define INTJPG_SETHFSTRUCT(x) intJpg_hf_structReg.x = tmpHfStReg.x;

/* Set value to member of DEC_STRUCT */
#define INTJPG_SETDECSTRUCT(x) intJpg_dec_structReg.x = tmpDecStReg.x;

/* Set value of IRQ to member of HF_STRUCT */
#define INTJPG_SETIRQINFO(x) intJpg_hf_structReg.x = tmpSetVal.x;

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

#endif /* INTJPG_DEF_H */
