/******************************************************************************
 ** \file     intjpg_ctrl.h
 ** \brief    CTRL module's header fie
 **
 ** This header file includes  enumerationion and function declarations.
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
#ifndef INTJPG_CTRL_H
#define INTJPG_CTRL_H

/*****************************************************************************/
/* Include Files                                                             */
/*****************************************************************************/
#include "cyjpg_basetypes.h"
#include "cyjpg_def.h"
#include "cyjpg_typedef.h"
#include "intjpg_typedef.h"

/*****************************************************************************/
/* Macro Definitions                                                         */
/*****************************************************************************/
/* HW Status define macro */
#define INTJPG_CTRL_HWSTATUS_CONFIG   (CYJPG_U32)1
#define INTJPG_CTRL_HWSTATUS_DECODING (CYJPG_U32)2
#define INTJPG_CTRL_HWSTATUS_SUSPEND  (CYJPG_U32)3

/*****************************************************************************/
/* Type Definitions                                                          */
/*****************************************************************************/
/* CTRL module SW status Enumeration */
typedef enum
{
    INTJPG_CTRL_SWSTATUS_DISABLE = (CYJPG_U32)0,    /* Enum value 0 */
    INTJPG_CTRL_SWSTATUS_INITIALIZED
} INTJPG_CTRL_SWSTATUS_E;

/* CTRL module Check parameter type Enumeration */
typedef enum
{
    INTJPG_CTRL_CHKJPGINFO = (CYJPG_U32)0,
    INTJPG_CTRL_CHKJPGINFO_RESUME,
    INTJPG_CTRL_CHKJPGINFO_CONTINUE
} INTJPG_CTRL_CHKPARAMTYPE_E;

/* Typedef structure */
/*    None          */

/*****************************************************************************/
/* Global Variable/Constant Declarations                                     */
/*****************************************************************************/
/* N/A */

/*****************************************************************************/
/* Global Function Declarations                                              */
/*****************************************************************************/
/** \brief This global function checks HW status
 ** \param tmpType [in]  Value to compare
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success(same value)
 **                 CYJPG_ERR_HW_STATUS: HW status is different.
 **                 CYJPG_ERR_PARAM : Parameter is not valid.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlCheckHwStatus
(
    CYJPG_U32 tmpType
);

/** \brief This global function compares HW Status with argument
 ** \param cmpVal  [in]  Value to compare
 ** \return        tmpResult
 **                 CYJPG_TRUE: Same value.
 **                 CYJPG_FALSE: Different value.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_BOOL IntJpg_CtrlCheckHwEnable
(
    CYJPG_U08 cmpVal
);

/** \brief This global function sets SW status to Initialized
 ** \param         void
 ** \return        void
 **
 ** No remarks
 ** */
CYJPG_EXTERN void IntJpg_CtrlSetStatusToInit
(
    void
);

/** \brief This global function sets SW status to Disable
 ** \param         void
 ** \return        void
 **
 ** No remarks
 ** */
CYJPG_EXTERN void IntJpg_CtrlSetStatusToDisable
(
    void
);

/** \brief This global function gets version information
 ** \param tmpPtr  [in]  Store buffer pointer
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success.
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlGetVersionInfo
(
    CYJPG_VERSIONINFO_S *tmpPtr
);

/** \brief This global function gets SW error information
 **        This function clears SW error information.
 ** \param tmpPtr  [in]  Store buffer pointer
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success.
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlGetSwErrorInfo
(
    CYJPG_SWERRINFO_S *tmpPtr
);

/** \brief This global function gets HW Status
 ** \param tmpPtr  [in]  Store buffer pointer
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success.
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlGetHwStatus
(
    CYJPG_CORESTATUS_S *tmpPtr
);

/** \brief This global function gets HW error information
 ** \param tmpPtr  [in]  Store buffer pointer
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success.
 **                 CYJPG_ERR_NULL : Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlGetHwErrorInfo
(
    CYJPG_HWERRINFO_S *tmpPtr
);

/** \brief This global function sets HW error information.
 ** \param    void
 ** \return   void
 **
 ** No remarks
 ** */
CYJPG_EXTERN void IntJpg_CtrlSetHwErrorInfo
(
    void
);


/** \brief This global function initializes HW error information structure.
 ** \param         void
 ** \return        void
 **
 ** No remarks
 ** */
CYJPG_EXTERN void IntJpg_CtrlInitHwErrorInfo
(
    void
);

/** \brief This global function sets SW error information.
 ** \param tmpErrInfo  [in]  SW Error code to set SW ERROR information structure
 ** \return            void
 **
 ** No remarks
 ** */
CYJPG_EXTERN void IntJpg_CtrlSetSwErrorInfo
(
    CYJPG_ERROR tmpErrInfo
);

/** \brief This global function gets SW Status
 ** \param    void
 ** \return   SW Status
 **              CYJPG_DISABLE or CYJPG_INITIALIZED
 **
 ** No remarks
 ** */
CYJPG_EXTERN INTJPG_CTRL_SWSTATUS_E IntJpg_CtrlGetSwStatus
(
    void
);

/** \brief This global function sets AXICTL structure
 ** \param tmpPtr  [in]  Pointer of AXICTL structure
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL : Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlSetAxiCtl
(
    CYJPG_AXICTL_S const *tmpPtr
);

/** \brief This global function sets IRQCTL structure
 ** \param tmpPtr  [in]  Pointer of IRQCTL structure
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL : Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlSetIrqCtl
(
    CYJPG_IRQCTL_S const *tmpPtr
);

/** \brief This global function sets JPGINFO structure
 ** \param tmpPtr  [in]  Pointer of JPGINFO structure
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL : Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlSetJpgInfo
(
    CYJPG_JPGINFO_S const *tmpPtr
);

/** \brief This global function indicates to set CTL register as enable
 ** \param arg1    void
 ** \return        void
 **
 ** No remarks
 ** */
CYJPG_EXTERN void IntJpg_CtrlSetCoreEnable
(
    void
);

/** \brief This global function indicates to set CTL register as disable
 ** \param arg1    void
 ** \return        void
 **
 ** No remarks
 ** */
CYJPG_EXTERN void IntJpg_CtrlSetCoreDisable
(
    void
);

/** \brief This global function indicates to start decoding.
 ** \param tmpPtr  [in]  Pointer of JPGINFO structure
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlSetStartDecoding
(
    CYJPG_JPGINFO_S const *tmpPtr
);

/** \brief This global function indicates to resume decoding.
 ** \param tmpPtr  [in]  Pointer of JPGINFO structure
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlSetResumeDecoding
(
    CYJPG_JPGINFO_S const *tmpPtr
);

/** \brief This global function indicates to continue decoding.
 ** \param tmpPtr  [in]  Pointer of JPGINFO structure
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlSetContinueDecoding
(
    CYJPG_JPGINFO_S const *tmpPtr
);

/** \brief This global function indicates to SW reset
 ** \param arg1    void
 ** \return        void
 **
 ** No remarks
 ** */
CYJPG_EXTERN void IntJpg_CtrlSetSwreset
(
    void
);

/** \brief This global function clears error IRQ.
 ** \param tmpType [in]  Error interrupt type
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_NO_INTERRUPT: No interrupt has occurred.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlClearErrIrq
(
    CYJPG_ERRIRQ_TYPE_E const tmpType
);

/** \brief This global function clears frame complete IRQ.
 ** \param    void
 ** \return   tmpErrCode
 **            CYJPG_OK: Success
 **            CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_NO_INTERRUPT: No interrupt has occurred.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlClearFrameIrq
(
    void
);

/** \brief This global function gets IRQ cause.
 ** \param tmpPtr  [in]  Pointer of IRQSTATUS structure
 ** \return        tmpErrCode
 **                  CYJPG_OK: Success
 **                  CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks\p
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlGetIrqCause
(
    CYJPG_IRQSTATUS_S *tmpPtr
);

/** \brief This global function gets DECODEINFO structure.
 ** \param tmpPtr  [in]  Pointer of DECODEINFO structure
 ** \return        tmpErrCode
 **                  CYJPG_OK: Success
 **                  CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlGetDecInfo
(
    CYJPG_DECODEINFO_S *tmpPtr
);


/** \brief This global function is to check the parameter for AXICTRL struct
 ** \param tmpPtr  [in]  Pointer of checking object
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlChkParamAxi
(
    CYJPG_AXICTL_S const *tmpPtr
);

/** \brief This global function is to check the parameter for IRQCTRL struct
 ** \param tmpPtr  [in]  Pointer of checking object
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlChkParamIrq
(
    CYJPG_IRQCTL_S const *tmpPtr
);

/** \brief This global function is to check the parameter for JPGINFO struct
 ** \param tmpType  [in]  Type of scope for Checking
 ** \param tmpPtr   [in]  Pointer of checking object
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlChkParamJpgInfo
(
    INTJPG_CTRL_CHKPARAMTYPE_E tmpType,
    CYJPG_JPGINFO_S const *tmpPtr
);

/** \brief This global function is to check the parameter for INIT struct
 ** \param tmpPtr  [in]  Pointer of checking object
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlChkParamInit
(
    CYJPG_INIT_S const *tmpPtr
);

/** \brief This global function clears JPEG CORE IRQ.
 ** \param    void
 ** \return   tmpErrCode
 **            CYJPG_OK: Success
 **            CYJPG_ERR_NO_INTERRUPT: No interrupt has occurred.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR IntJpg_CtrlClearJpegCoreIrq
(
    void
);

/** \brief This global function initializes SW error information structure.
 ** \param         void
 ** \return        void
 **
 ** No remarks
 ** */
CYJPG_EXTERN void IntJpg_CtrlInitSwErrorInfo
(
    void
);

#endif /* INTJPG_CTRL_H */
