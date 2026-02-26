/******************************************************************************
 ** \file     cyjpg.h
 ** \brief    JPEG Decode Driver header file
 **
 ** This header file includes global function declarations.
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
#ifndef CYJPG_H
#define CYJPG_H

#include "cyjpg_basetypes.h"

/*****************************************************************************/
/* Macro Definitions                                                         */
/*****************************************************************************/
/* N/A */

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
/** \brief This global function sets AXI bus parameters to HW.
 ** \param tmpAxictl   [in]  Pointer for parameters to setting up
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_SetAxiInfo
(
    CYJPG_AXICTL_S const *tmpAxictl
);

/** \brief This global function sets interrupt parameters to HW.
 ** \param tmpIrqctl [in]  Pointer for parameters to setting up
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_SetIrqInfo
(
    CYJPG_IRQCTL_S const *tmpIrqctl
);

/** \brief This global function sets JPEG parameters to HW.
 ** \param tmpJpginfo [in]  Pointer for parameters to setting up
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_SetJpegInfo
(
    CYJPG_JPGINFO_S const *tmpJpginfo
);

/** \brief This global function sets each parameter to HW and SW
 ** \param tmpInit_s  [in]  Pointer for parameters to setting up
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_NOT_DISABLE: HW is not disable.
 **
 ** No remarks
 ** */
 CYJPG_EXTERN CYJPG_ERROR CyJpg_Init
(
    CYJPG_INIT_S const *tmpInit_s
);

/** \brief This global function deactivates HW and SW
 ** \param         void
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NOT_ENABLE: HW status is not enabled.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_DeInit
(
    void
);

/** \brief This global function indicates to start decoding with indicated parameters
 ** \param tmpInfo_s [in]  Pointer to setting up parameters
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_HW_STATUS: HW status is different.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_StartDecoding
(
    CYJPG_JPGINFO_S const *tmpInfo_s
);

/** \brief This global function indicates to resume decoding
 ** \param tmpInfo_s [in]  Pointer to setting up parameters
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_HW_STATUS: HW status is different.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_ResumeDecoding
(
    CYJPG_JPGINFO_S const *tmpInfo_s
);

/** \brief This global function indicates continue decoding
 ** \param tmpInfo_s  [in]  Pointers to setting up parameters
 **                    Note: this API uses fetch/store parameters only
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_HW_STATUS: HW status is different.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_ContinueDecoding
(
    CYJPG_JPGINFO_S const *tmpInfo_s
);

/** \brief This global function indicates SW reset
 ** \param         void
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_SwReset
(
    void
);

/** \brief This global function indicates to set Error IRQ information
 ** \param tmpVal  [in]  Error interrupt type
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_PARAM: Parameter is invalid.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **                 CYJPG_ERR_NO_INTERRUPT: No interrupt has occurred.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_SetErrorInfo
(
    CYJPG_ERRIRQ_TYPE_E const tmpVal
);

/** \brief This global function indicates to clear cause of frame complete IRQ
 ** \param         void
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **                 CYJPG_ERR_NO_INTERRUPT: No interrupt has occurred.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_ClearFrameCompIrq
(
    void
);

/** \brief This global function indicates to get version information
 ** \param tmpPtr  [out]  Pointer to store the information
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_GetVersionInfo
(
    CYJPG_VERSIONINFO_S *tmpPtr
);

/** \brief This global function indicates to get SW error information.
 ** \param tmpPtr  [out]  Pointer to store the information
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_GetSwErrorInfo
(
    CYJPG_SWERRINFO_S *tmpPtr
);

/** \brief This global function indicates to get HW status.
 ** \param tmpPtr  [out]  Pointer to store the information
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL: Argument is NULL pointer.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_GetHwStatus
(
    CYJPG_CORESTATUS_S *tmpPtr
);

/** \brief This global function indicates to get HW error information.
 ** \param tmpPtr  [out]  Pointer to store the information
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL : Argument is NULL pointer.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_GetHwErrorInfo
(
    CYJPG_HWERRINFO_S *tmpPtr
);

/** \brief This global function indicates to get JPEGDEC CORE IRQ cause.
 ** \param tmpPtr  [out]  Pointer to store the information
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL : Argument is NULL pointer.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_GetJpgIrqCause
(
    CYJPG_IRQSTATUS_S *tmpPtr
);

/** \brief This global function indicates to get Decode information struct.
 ** \param tmpPtr  [out]  Pointer to store the information
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NULL : Argument is NULL pointer.
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_GetDecInfo
(
    CYJPG_DECODEINFO_S *tmpPtr
);

/** \brief This global function indicates to clear cause of JPEG CORE IRQ
 ** \param         void
 ** \return        tmpErrCode
 **                 CYJPG_OK: Success
 **                 CYJPG_ERR_NOT_INITIALIZED: SW is not initialized.
 **                 CYJPG_ERR_NO_INTERRUPT: No interrupt has occurred.
 **
 ** No remarks
 ** */
CYJPG_EXTERN CYJPG_ERROR CyJpg_ClearJpegCoreIrq
(
    void
);

#endif /* CYJPG_H */
