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
    \file        mml_gdc_sysinit.h
*/


#ifndef MML_GDC_SYSINIT_H
#define MML_GDC_SYSINIT_H

/*******************************************************************************
 Includes
*******************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_sysinit.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_sysinit
    \code #include "mml_gdc_sysinit.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */



/** \name Simple new definitions for Sysinit API */
/** \{ */
#ifndef DOXYGEN_SHOULD_SKIP_THIS
#define MML_GDC_SYSINIT_INITIALIZER     {0,0}                               /**< Simple redefinition */

#define MM_GDC_RES_DISP0                GCCGFX_RES_DISP0                 /**< Simple redefinition */
#define MM_GDC_RES_DISP1                GCCGFX_RES_DISP1                 /**< Simple redefinition */
#define MM_GDC_RES_LAYER0               GCCGFX_RES_LAYER0                /**< Simple redefinition */
#define MM_GDC_RES_LAYER1               GCCGFX_RES_LAYER1                /**< Simple redefinition */
#define MM_GDC_RES_LAYER2               GCCGFX_RES_LAYER2                /**< Simple redefinition */
#define MM_GDC_RES_LAYER3               GCCGFX_RES_LAYER3                /**< Simple redefinition */
#define MM_GDC_RES_LAYER4               GCCGFX_RES_LAYER4                /**< Simple redefinition */
#define MM_GDC_RES_FETCH_DECODE0        GCCGFX_RES_FETCH_DECODE0         /**< Simple redefinition */
#define MM_GDC_RES_FETCH_WARP1          GCCGFX_RES_FETCH_WARP1           /**< Simple redefinition */
#define MM_GDC_RES_FETCH_DECODE4        GCCGFX_RES_FETCH_DECODE4         /**< Simple redefinition */
#define MM_GDC_RES_FETCH_LAYER0         GCCGFX_RES_FETCH_LAYER0          /**< Simple redefinition */
#define MM_GDC_RES_FETCH_LAYER1         GCCGFX_RES_FETCH_LAYER1          /**< Simple redefinition */
#define MM_GDC_RES_VIDEO_PROCESSING     GCCGFX_RES_VIDEO_PROCESSING      /**< Simple redefinition */
#define MM_GDC_RES_STREAM_INPUT         GCCGFX_RES_EXTSRC8               /**< Simple redefinition */
#define MM_GDC_RES_STORE4               GCCGFX_RES_STORE4                /**< Simple redefinition */
#define MM_GDC_RES_GAMMACOR0            CYGFX_SYS_RES_DISP0                  /**< Simple redefinition */
#define MM_GDC_RES_GAMMACOR1            CYGFX_SYS_RES_DISP1                  /**< Simple redefinition */

/* Command sequencer configuration */
#define MML_GDC_SYSINIT_GFX_PLL_MIN     CYGFX_SYS_INIT_DISP_PLL_MIN         /**< Simple redefinition */
#define MML_GDC_SYSINIT_GFX_PLL_MAX     CYGFX_SYS_INIT_DISP_PLL_MAX         /**< Simple redefinition */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

/**
    A data type that holds the information that is used during driver initialization:
    - Resource configuration
    - PLL configuration
*/
typedef struct
{
    MM_U32  ResourceLock;   /**< Bitfield that describes the resources allocated by the safety driver; default: 0 */
    MM_U32  GfxPll;         /**< Frequency of GFX PLL (for Pixel Clock generation) in hertz; default: see MML_GDC_SYSINIT_INITIALIZER */
} MML_GDC_SYSINIT_INFO;
/** \} */



/** \name Simple redirection of "old" functions */
/** \{ */
#ifdef C_MODEL
    static __inline MM_ERROR mmlGdcSysInitializeDriver(const MML_GDC_SYSINIT_INFO *pDriverInitInfo )
#else
/**
    Wrapper function with extensions.

    \param [in] pDriverInitInfo  Can be NULL or a pointer to a
                                 #CYGFX_SYSINIT_INFO_S driver initialization structure.
    \retval  ::CYGFX_OK Successfully initialized the driver.
    \retval  ::CYGFX_ERP_ERR_SYS_DEVICE_INVALID_PARAMETER ResourceLock parameter
             invalid
    \retval  ::CYGFX_ERP_ERR_SYS_DEVICE_ALREADY_INITIALIZED Already initialized
    \retval  ::CYGFX_ERP_ERR_SYS_DEVICE_WRONG_ID The graphics driver is not valid
             for the hardware.
*/
    static inline MM_ERROR mmlGdcSysInitializeDriver(const MML_GDC_SYSINIT_INFO *pDriverInitInfo )
#endif
{
    CYGFX_SYSINIT_INFO_S initInfo;
    initInfo.ResourceLock = pDriverInitInfo->ResourceLock;
    initInfo.PllDsp0 = pDriverInitInfo->GfxPll;
    initInfo.PllDsp1 = pDriverInitInfo->GfxPll;

    return CyGfx_SysInitializeDriver(&initInfo);
}

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#define mmlGdcSysUninitializeDriver     CyGfx_SysDeInitializeDriver         /**< Simple redefinition */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */
/** \} */



/**
    Wrapper function to assign the internal VRAM for the command queue.\n
    For more details, see: ::CYGFX_BE_TASK_MEM_PRIO_1 and ::CyGfx_BeSetTaskInstructionBuffer
    \param[in] address Start address in the VRAM. Must be 32-byte aligned.
    \param[in] size Size in bytes of the buffer. It must be 32-byte aligned and smaller than 0x40000;
               otherwise the function will return an error. The application must ensure
               that the address as well as the address plus size are within the range
               of the VIDEOSS VRAM memory; the function will not do this.
     \retval   CYGFX_OK on success,\n
               the related error code otherwise.

*/
static MM_ERROR mmlGdcSysSetInstructionBuffer(void* address, CYGFX_U32 size)
{
    return CyGfx_BeSetTaskInstructionBuffer(CYGFX_BE_TASK_MEM_PRIO_1, address, size);
}



/** \} */ /* end addtogroup mml_gdc_sysinit*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MML_GDC_SYSINIT_H */
