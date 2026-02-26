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
    \file        mm_gdc_hweb.h
*/

#ifndef MM_GDC_HWEB_H
#define MM_GDC_HWEB_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mm_gdc_hweb
    \code #include "mm_gdc_hweb.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/hw/include
*/
/** \{ */


/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/**
    Read register.
    Example:
        val = GDC_HW_READ32(ctx, add);
    \param[in]  CTX     Unused. For compatibility with c-model only.
    \param[in]  ADD     Physical register address.
    \retval     MM_U32  Register value read.
*/
#define GDC_HW_READ32(CTX, ADD) \
    (*((volatile MM_U32 *)(ADD)))

/**
    Write register.
    Example:
        GDC_HW_WRITE32(ctx, add, 0xDEADBEEF);
    \param[in]  CTX     Unused. For compatibility with c-model only.
    \param[in]  ADD     Physical register address.
    \param[in]  VAL     Value to be written to register.
*/
#define GDC_HW_WRITE32(CTX, ADD, VAL) \
    (*((volatile MM_U32*)(ADD)) = (VAL))


/**
    Write an array of 32 bit words to consecutive device addresses (memory or registers).
    Example:
        val = GDC_HW_BLOCKWRITE32(ctx, addr, 2, pArray);
    \param[in]  CTX     Unused. For compatibility with c-model only.
    \param[in]  ADD     Physical device address.
    \param[in]  PVAL    Pointer to array of values to be written.
    \param[in]  CNT     Number of 32 bit values to be written.
*/
#define GDC_HW_BLOCKWRITE32(CTX, ADD, CNT, PVAL) \
    (void)memcpy((void *)(ADD), (const void*)(PVAL), (CNT)*4u)

/**
    Macro to convert a physical video, FLASH or system address into a virtual address.
    Virtual addresses are required if the CPU uses memory management modules
    so that the address view of the CPU (virtual) does not represent the
    physical address. The address translation is required because other hardware
    blocks like the Video and Graphics Subsystem need the physical address. In case of systems without
    CPU memory management systems physical and virtual addresses are identical
    and this macro can point to a simple inline function.
    \param[in]  phys    Physical address.
    \param[out] pVirt   Pointer to virtual address.
*/
#define MM_GDC_PHYS_TO_VIRT(phys, pVirt)    (*(pVirt) = (void *)(phys))

/**
    Macro to convert a virtual into a physical address. (see ::MM_GDC_PHYS_TO_VIRT).
    \param[in]  virt    Virtual address.
    \param[out] pPhys   Pointer to physical address.
*/
#define MM_GDC_VIRT_TO_PHYS(virt, pPhys)    (*(pPhys) = (MM_ADDR)(virt))

/** \name The following macros are only required for C-Model.
          For the target, these are dummy macros. */
/** \{ */
#define GDC_HW_OPEN()                   1                                               /**< Simple definition for an unused macro */
#define GDC_HW_CLOSE(CTX)               NULL_FUNCTION                                   /**< Simple definition for an unused macro */
#define GDC_HW_RESET(CTX)               NULL_FUNCTION                                   /**< Simple definition for an unused macro */
#define GDC_HW_GET_ERROR(CTX)           0                                               /**< Simple definition for an unused macro */
#define MM_GDC_HWEB_MA_READ             1u                                              /**< Simple definition for an unused macro */
#define MM_GDC_HWEB_MA_WRITE            2u                                              /**< Simple definition for an unused macro */
#define MM_GDC_HWEB_MA_READ_WRITE       (MM_GDC_HWEB_MA_READ | MM_GDC_HWEB_MA_WRITE)    /**< Simple definition for an unused macro */
#define MM_GDC_LOCK(ADD, CNT, ACCESS)   NULL_FUNCTION                                   /**< Simple definition for an unused macro */
#define MM_GDC_UNLOCK(ADD)              NULL_FUNCTION                                   /**< Simple definition for an unused macro */
/** \} */


typedef MM_U32 GDC_HW_DEV_CTX; /**< Not used. Only for compatibility with C-Model */


extern GDC_HW_DEV_CTX g_gdc_hweb_dev_ctx; /**< Not used. Only for compatibility with C-Model */


/** \} */ /* end addtogroup mm_gdc_hweb */
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MM_GDC_HWEB_H */

