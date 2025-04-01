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
/*****************************************************************************/


/**
 * \file        arm-none-ghs-multi/gccgfx_hweb.h
 *              Hardware exchange block for GHS Multi
 *              This file defines the interface for the Graphics Driver to
 *              communicate with the HW. All read and write operations
 *              to registers and memory are redirected by macro to the
 *              HW.
 * \brief       Implementation of HW exchange block
 * \ingroup     bg_implementation_service
 * Implements Building Block: HWExchangeBlock
 *
 */


#ifndef GCCGFX_HWEB_H
#define GCCGFX_HWEB_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */

#include "gccgfx_os.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * \addtogroup gccgfx_hweb
 * \brief Hardware exchange block for GHS Multi
 *              This file defines the interface for the Display Driver to
 *              communicate with the HW. All read and write operations
 *              to registers and memory are redirected by macro to the
 *              HW.
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_HWEB_MA_READ       (1u)                                         /**< Memory access type. CPU reads from the VRAM. */
#define GCCGFX_HWEB_MA_WRITE      (2u)                                         /**< Memory access type. CPU writes to the VRAM. */
#define GCCGFX_HWEB_MA_READ_WRITE (GCCGFX_HWEB_MA_READ | GCCGFX_HWEB_MA_WRITE) /**< Memory access type. CPU reads from and writes to the VRAM. */
/**
    Read register.
      Example:
          val = GCCGFX_HWEB_READ32(ctx, add);

    \param [in] CTX  Unused. For compatibility with c-model only.
    \param [in] ADD  Physical register address.

    \retval             Register value read.
**/
#define GCCGFX_HWEB_READ32(CTX, ADD) (*((volatile CYGFX_U32*)(ADD)))

/**
    Write register.
      Example:
          GCCGFX_HWEB_WRITE32(ctx, add, 0xDEADBEEF);

    \param [in] CTX  Unused. For compatibility with c-model only.
    \param [in] ADD  Physical register address.
    \param [in] VAL  Value to be written to register.

    \retval None
**/
#define GCCGFX_HWEB_WRITE32(CTX, ADD, VAL) (*((volatile CYGFX_U32*)(ADD)) = (VAL))

/**
    Write an array of 32 bit words to consecutive device addresses (memory or
    registers).
      Example:
          val = GCCGFX_HWEB_BLOCKWRITE32(ctx, addr, 2, pArray);

    \param [in] CTX  Unused. For compatibility with c-model only.
    \param [in] ADD  Physical device address.
    \param [in] CNT  Number of 32-bit values to be written.
    \param [in] PVAL  Pointer to array of values to be written.

    \retval None
**/
#define GCCGFX_HWEB_BLOCKWRITE32(CTX, ADD, CNT, PVAL)                                                   \
    do                                                                                                  \
    {                                                                                                   \
        CYGFX_U32 i;                                                                                    \
        GCCGFX_ERP_ASSERT((0u != (ADD)));                                                               \
        GCCGFX_ERP_ASSERT((NULL != (PVAL)));                                                            \
        GCCGFX_ERP_ASSERT((CYGFX_U32)(labs((const CYGFX_U08*)(ADD) - (CYGFX_U08*)(PVAL))) >= (CNT)*4u); \
        for (i = 0; i < (CNT); i++)                                                                     \
        {                                                                                               \
            ((volatile CYGFX_U32*)(ADD))[i] = ((const volatile CYGFX_U32*)(PVAL))[i];                   \
        }                                                                                               \
    }                                                                                                   \
    while (0);

/**
    Macro to convert a physical video, FLASH or system address into a virtual
    address.
      Virtual addresses are required if the CPU uses memory management modules
      so that the address view of the CPU (virtual) does not represent the
      physical address. The address translation is required because other
    hardware
      blocks like VIDEOSS need the physical address. In case of systems without
      CPU memory management systems physical and virtual addresses are identical
      and this macro can point to a simple inline function.

    \param [in] phys  Physical address.
    \param [out] pVirt  Pointer to virtual address.

    \retval None
**/
#define GCCGFX_HWEB_PHYS_TO_VIRT(phys, pVirt) (*(pVirt) = (void*)(phys))

/**
    Macro to convert a virtual into a physical address. (see
    ::GCCGFX_HWEB_PHYS_TO_VIRT).

    \param [in] virt  Virtual address.
    \param [out] pPhys  Pointer to physical address.

    \retval None
**/
#define GCCGFX_HWEB_VIRT_TO_PHYS(virt, pPhys) (*(pPhys) = (CYGFX_ADDR)(virt))

/** \name The following macros are only required for C-Model.
          For the target, these are dummy macros. */
/** \{ */
/**
    For the C model: open the connection to  C model process.
    For the hardware target: Dummy macro.

    \return Context information used by other HW exchange block operations.

**/
#define GCCGFX_HWEB_OPEN() (1)

/**
    For the C model: close the connection to  C model process.
    For the hardware target: Dummy macro.

    \param [in] CTX  Context information returned by GCCGFX_HWEB_OPEN.

**/
#define GCCGFX_HWEB_CLOSE(CTX) CYGFX_NULL_FUNCTION

/**
    For the C model: reset the connection to  C model process.
    For the hardware target: Dummy macro.

    \param [in] CTX  Context information returned by GCCGFX_HWEB_OPEN.

**/
#define GCCGFX_HWEB_RESET(CTX) CYGFX_NULL_FUNCTION

/**
    For the C model: Get the error status of the connection to the C model.
    For the hardware target: Dummy macro.

    \param [in] CTX  Context information returned by GCCGFX_HWEB_OPEN.

**/
#define GCCGFX_HWEB_GET_ERROR(CTX) (0)

/**
    GDC_LOCK and GDC_UNLOCK are used to start and stop memory accessing
    code. It ensures that CPU and GPU see the same memory content.
    Please note that each GCCGFX_HWEB_LOCK must be closed with GCCGFX_HWEB_UNLOCK.
    In the locked state all memory accesses from GPU side may result in
    an undefined state. The GCCGFX_HWEB_MA_READ and GCCGFX_HWEB_MA_WRITE hits
    must be set depending on the intention of the lock call.
    GCCGFX_HWEB_LOCK and GCCGFX_HWEB_UNLOCK have no effect on a system with
    uncached
    memory.

    \param [in] ADD  Address of the memory block
    \param [in] CNT  Size of the memory block
    \param [in] ACCESS  Access mode

**/
#define GCCGFX_HWEB_LOCK(ADD, CNT, ACCESS) CYGFX_NULL_FUNCTION

/**
    GDC_LOCK and GDC_UNLOCK are used to start and stop memory accessing
    code. It ensures that CPU and GPU see the same memory content.
    Please note that each GCCGFX_HWEB_LOCK must be closed with GCCGFX_HWEB_UNLOCK.
    In the locked state all memory accesses from GPU side may result in
    an undefined state. The GCCGFX_HWEB_MA_READ and GCCGFX_HWEB_MA_WRITE hits
    must be set depending on the intention of the lock call.
    GCCGFX_HWEB_LOCK and GCCGFX_HWEB_UNLOCK have no effect on a system with
    uncached
    memory.

    \param [in] ADD  Address of the memory block

**/
#define GCCGFX_HWEB_UNLOCK(ADD) CYGFX_NULL_FUNCTION

/**
    Empty macro
    HW automatically renders a new frame when the last one finishes. 
    The model, on the other hand, must be triggered manually so that the process 
    is not continuously active. This macro triggers a new frame for the model. 
    Nothing is triggered for HW.

    \param [in] DISPID Number of display controller to kick [0..1]
**/
#define GCCGFX_HWEB_KICK_DISP(DISPID) CYGFX_NULL_FUNCTION

/**
    Macro to restrict register access. 
    Register access is implemented only for C-Model. This macro defines with HW modules are reserved for the safety driver.
 
    \param [in] ACCESS Bitmask that describes the resources allocated by the safety driver. 
**/
#define GCCGFX_HWEB_DEFINE_ACCESS(ACCESS) CYGFX_NULL_FUNCTION

/**
    Macro deleted the access mask defined by GCCGFX_HWEB_DEFINE_ACCESS.
**/
#define GCCGFX_HWEB_DELETE_ACCESS() CYGFX_NULL_FUNCTION


/** \} */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
typedef CYGFX_U32 GCCGFX_HWEB_DEV_CTX; /**< For the C model: context information for the connection to the C model.
    For the hardware target: Not used. Defined for compatibility with the C model. */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/
CYGFX_EXTERN GCCGFX_HWEB_DEV_CTX cygfx_Hweb_dev_ctx; /**< For the C model: context information for the connection to the C model.
    For the hardware target: Not used. Defined for compatibility with the C model. */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_HWEB_H */

