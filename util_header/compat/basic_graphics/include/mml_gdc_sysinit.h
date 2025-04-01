/*******************************************************************************
* (c) 2019-2024, Cypress Semiconductor Corporation (an Infineon company) or an *
* affiliate of Cypress Semiconductor Corporation.  All rights reserved.        *
*                                                                              *
* This software, including source code, documentation and related              *
* materials ("Software"), is owned by Cypress Semiconductor Corporation or     *
* one of its affiliates ("Cypress") and is protected by and subject to         *
* worldwide patent protection (United States and foreign), United States       *
* copyright laws and international treaty provisions. Therefore, you may use   *
* this Software only as provided in the license agreement accompanying the     *
* software package from which you obtained this Software ("EULA").             *
*                                                                              *
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,     *
* non-transferable license to copy, modify, and compile the                    *
* Software source code solely for use in connection with Cypress's             *
* integrated circuit products.  Any reproduction, modification, translation,   *
* compilation, or representation of this Software except as specified          *
* above is prohibited without the express written permission of Cypress.       *
*                                                                              *
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO                         *
* WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING,                         *
* BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED                                 *
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A                              *
* PARTICULAR PURPOSE. Cypress reserves the right to make                       *
* changes to the Software without notice. Cypress does not assume any          *
* liability arising out of the application or use of the Software or any       *
* product or circuit described in the Software. Cypress does not               *
* authorize its products for use in any products where a malfunction or        *
* failure of the Cypress product may reasonably be expected to result in       *
* significant property damage, injury or death ("High Risk Product"). By       *
* including Cypress's product in a High Risk Product, the manufacturer         *
* of such system or application assumes all risk of such use and in doing      *
* so agrees to indemnify Cypress against all liability.                        *
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
