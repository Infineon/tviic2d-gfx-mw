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

/**
    \file        hw/include/gccgfx_hweb.h
                 Hardware exchange block for GHS Multi
                 This file defines the interface for the Graphics Driver to
                 communicate with the HW. All read and write operations
                 to registers and memory are redirected by macro to the
                 HW.
    \brief       Implementation of HW exchange block
    \ingroup     bg_implementation_service
    Implements Building Block: HWExchangeBlock
*/

#ifndef HWEB_H
#define HWEB_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif

/**
    \addtogroup user_doc_utils
    \brief       Hardware exchange block for GHS Multi
              This file defines the interface for the Display Driver to
              communicate with the HW. All read and write operations
              to registers and memory are redirected by macro to the
              HW.
*/
/** \{ */


/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/**
    Read register.
    Example:
        val = CYGFX_HWEB_READ32(ctx, add);
    \param[in]  CTX     Unused. For compatibility with c-model only.
    \param[in]  ADD     Physical register address.
    \retval             Register value read.
*/

#define UT_HWEB_READ32(CTX, ADD)     (*((volatile CYGFX_U32 *)(ADD)))

/**
    Write register.
    Example:
        CYGFX_HWEB_WRITE32(ctx, add, 0xDEADBEEF);
    \param[in]  CTX     Unused. For compatibility with c-model only.
    \param[in]  ADD     Physical register address.
    \param[in]  VAL     Value to be written to register.
*/

#define UT_HWEB_WRITE32(CTX, ADD, VAL)   (*((volatile CYGFX_U32*)(ADD)) = (VAL))


/**
    Write an array of 32 bit words to consecutive device addresses (memory or registers).
    Example:
        val = CYGFX_HWEB_BLOCKWRITE32(ctx, addr, 2, pArray);
    \param[in]  CTX     Unused. For compatibility with c-model only.
    \param[in]  ADD     Physical device address.
    \param[in]  PVAL    Pointer to array of values to be written.
    \param[in]  CNT     Number of 32 bit values to be written.
*/

#define UT_HWEB_BLOCKWRITE32(CTX, ADD, CNT, PVAL) \
    (void)memcpy((void *)(ADD), (const void*)(PVAL), (CNT)*4u)


/**
    Macro to convert a physical video, FLASH or system address into a virtual address.
    Virtual addresses are required if the CPU uses a memory management unit
    so that the address view of the CPU (virtual) does not represent the
    physical address. The address translation is required because other hardware
    blocks like VIDEOSS need the physical address. In case of systems without
    CPU memory management, physical and virtual addresses are identical
    and this macro can point to a simple inline function.
    \param[in]  phys    Physical address.
    \param[out] pVirt   Pointer to virtual address.
*/

#define UT_HWEB_PHYS_TO_VIRT(phys, pVirt)    (*(pVirt) = (void *)(phys))

/**
    Macro to convert a virtual into a physical address. (see ::CYGFX_HWEB_PHYS_TO_VIRT).
    \param[in]  virt    Virtual address.
    \param[out] pPhys   Pointer to physical address.
*/

#define UT_HWEB_VIRT_TO_PHYS(virt, pPhys)    (*(pPhys) = (CYGFX_ADDR)(virt))

/** \name The following macros are only required for C-Model.
          For the target, these are dummy macros.
*/
/** \{ */
#define UT_HWEB_OPEN()                   1
#define UT_HWEB_CLOSE(CTX)               CYGFX_NULL_FUNCTION
#define UT_HWEB_RESET(CTX)               CYGFX_NULL_FUNCTION
#define UT_HWEB_GET_ERROR(CTX)           0
#define UT_HWEB_MA_READ                  1u
#define UT_HWEB_MA_WRITE                 2u
#define UT_HWEB_MA_READ_WRITE            (CYGFX_HWEB_MA_READ | CYGFX_HWEB_MA_WRITE)
#define UT_HWEB_LOCK(ADD, CNT, ACCESS)   CYGFX_NULL_FUNCTION
#define UT_HWEB_UNLOCK(ADD)              CYGFX_NULL_FUNCTION

/**
    Empty macro
    HW automatically renders a new frame when the last one finishes. 
    The model, on the other hand, must be triggered manually so that the process 
    is not continuously active. This macro triggers a new frame for the model. 
    Nothing is triggered for HW.

    \param [in] DISPID Number of display contronner to kick [0..1]
**/
#define UT_HWEB_KICK_DISP(DISPID) CYGFX_NULL_FUNCTION

/**
    Empty macro for HW
    Send a frame buffer to the capture input for model only.

    \param [in] CAPID Number of capture unit (must be 0)
    \param [in] W Width of buffer
    \param [in] H Heigh of buffer
    \param [in] PADDR Address of buffer
**/
#define UT_HWEB_SEND_CAP_FRAME(CAPID, W, H, PADDR) CYGFX_NULL_FUNCTION

/**
    The following macros allow a surface buffer to be visualized with the model. 
    This is not supported for HW. 
**/
#define SEND_SURFACE(surf) CYGFX_NULL_FUNCTION
#define SEND_SURFACE_EX(surf, pipe) CYGFX_NULL_FUNCTION


/** \} */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* typedef CYGFX_U32 CYGFX_HWEB_DEV_CTX; */ /**< Not used. Only for compatibility with C-Model */


/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* CYGFX_EXTERN CYGFX_HWEB_DEV_CTX cygfx_Hweb_dev_ctx; */ /**< Not used. Only for compatibility with C-Model */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif

#endif /* HWEB_H */



