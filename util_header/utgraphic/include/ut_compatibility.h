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
    \file        ut_compatibility.h
    \brief       This file defines some interfaces that are part of other drivers.

    The util library implements very simple instances of the interfaces, but
    they must be not used for software products.
    However, it allows to run sample applications.
*/

#ifndef UT_COMPATIBILITY_H
#define UT_COMPATIBILITY_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_compat Utilities for providing compatibility with other drivers
    Functions of this group are used in some samples to make the
    application code identical to other VIDEOSS based devices. For example,
    the utSmGenSurfaceObjects() function is not available in this driver API
    for this hardware because system memory allocation is not allowed.
\{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#include "cygfx_driver_api.h"

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/**
    Creates \a uCnt empty surface objects, returning the address of these surface objects.
    \note This function instantiates only empty surface objects. Before being
          used, they must be initialized by a function like ::CyGfx_SmAssignBuffer
          or the application must set their parameters manually.
    \param[in]  uCnt Number of surface objects to create
    \param[out] pSurfaces Output array for the returned address
    \retval     ::CYGFX_OK on success
    \retval     ::CYGFX_ERR  if NULL pointer is given for pSurfaces or
                             if not enough memory to create the surface object
*/
/*****************************************************************************/
CYGFX_ERROR utSmGenSurfaceObjects(CYGFX_U32 uCnt, CYGFX_SURFACE *pSurfaces);

/*****************************************************************************/
/**
    Deletes a list of surface objects.
    \note This function deletes the surface object.
    \param[in] uCnt Number of surfaces to delete
    \param[in] pSurfaces Array of surfaces to delete
    \retval    ::CYGFX_OK on success
    \retval    ::CYGFX_ERR if NULL pointer is given for pSurfaces
*/
/*****************************************************************************/
CYGFX_ERROR utSmDeleteSurfaceObjects(CYGFX_U32 uCnt, CYGFX_SURFACE *pSurfaces);


/**
    Creates a Blit Engine context.
    \note
    - Each function with a ::CYGFX_BE_CONTEXT parameter
      requires a previous call of utPeGenContext for this context.
    - The context will be initialized with default values. Use
      the related property change functions to change the default values.
    \param[in,out] pBeCtx Pointer to get the ::CYGFX_BE_CONTEXT object
    \retval        ::CYGFX_OK on success
    \retval        ::CYGFX_ERR if NULL pointer is given for pBeCtx
                            or if not enough memory to create the context object
*/
CYGFX_ERROR utPeGenContext(CYGFX_BE_CONTEXT *pBeCtx);

/**
    utPeDeleteContext Deletes a context
    \param[in]  beCtx The ::CYGFX_BE_CONTEXT object
*/
void utPeDeleteContext(CYGFX_BE_CONTEXT beCtx);


/**
    Implements the standard C Library function malloc().
    \param[in]  mallocSize  Amount of memory to be allocated in bytes
    \return                 NULL on failure, or the virtual address of the allocated memory
*/
void *utOsLibcMalloc(size_t mallocSize);

/**
    Implements the Standard C Library function free()
    \param[in] pMemory Virtual address previously returned from ::utOsLibcMalloc
*/
void utOsLibcFree(void* pMemory);

/**
    Allocates a contiguous block of video memory.
    \param[in]  size      Amount of memory to be allocated in bytes
    \param[in]  alignment Alignment to use for the allocation; should be a multiple of 32 bytes.
    \param[out] pAddr     If non-NULL, a pointer to a variable to receive the physical
                          address of the memory block on success
    \return               NULL on failure, or the virtual address of the allocated memory
*/
void* utVideoAlloc( CYGFX_U32 size, CYGFX_U32 alignment, CYGFX_ADDR *pAddr );

/**
    Frees the video memory allocated by ::utVideoAlloc.
    \param[in] addr Virtual address previously returned by ::utVideoAlloc
*/
void utVideoFree(void* addr );

/**
    Retrieves the size of the video memory heap.
    \param[out] size Parameter to receive the query result [not NULL]
    \retval      ::CYGFX_OK                          Normal termination
    \retval      ::UTIL_ERR_MMAN_INVALID_PARAMETER   An unexpected internal
                                                   error occurred
*/
CYGFX_ERROR utVideoGetSize(CYGFX_U32 *size);

/**
    Retrieves the total amount of free video memory.
    \param[out] size Parameter to receive the query result [not NULL]
    \retval      ::CYGFX_OK                          Normal termination
    \retval      ::UTIL_ERR_MMAN_INVALID_PARAMETER   An unexpected internal
                                                   error occurred
*/
CYGFX_ERROR utVideoGetFreeTotal(CYGFX_U32 *size);

/**
    Retrieves the size of the largest contiguous block of the free video memory.
    \param[out] size Parameter to receive the query result [not NULL]
    \retval      ::CYGFX_OK                          Normal termination
    \retval      ::UTIL_ERR_MMAN_INVALID_PARAMETER   An unexpected internal
                                                   error occurred
*/
CYGFX_ERROR utVideoGetLargestBlock(CYGFX_U32 *size);

#ifdef C_MODEL
/**
    Allocates a contiguous block of RAM (to emulate a flash memory).

    \param[in]  size        A size to be allocated in bytes.
    \param[in]  alignment   Alignment to use for the allocation
    \param[out] pPhysAddr   If non-NULL, a pointer to a variable to receive the physical address of the memory block on success.
    \return                 NULL on failure, or the virtual address of the allocated memory.
*/
void* utFlashRamAlloc(CYGFX_U32 size, CYGFX_U32 alignment, CYGFX_ADDR *pPhysAddr);

/**
    Frees the RAM allocated by ::utFlashRamAlloc (to emulate a flash memory).

    \param[in] pVirtAddr   Virtual address previously returned from ::utFlashRamAlloc
*/
void utFlashRamFree(void* pVirtAddr);

/**
    Retrieves the size of the emulated flash memory heap.

    \param[out] pSize   A pointer to a variable to receive the query result
    \retval             ::CYGFX_OK                         - Normal termination
    \retval             ::UTIL_ERR_MMAN_INVALID_PARAMETER  - An unexpected internal error occurred
*/
CYGFX_ERROR utFlashRamGetSize(CYGFX_U32 *pSize);

/**
    Retrieves the total amount of free emulated flash memory.

    \param[out] pSize   A pointer to a variable to receive the query result
    \retval             ::CYGFX_OK                         - Normal termination
    \retval             ::UTIL_ERR_MMAN_INVALID_PARAMETER  - An unexpected internal error occurred
*/
CYGFX_ERROR utFlashRamGetFreeTotal(CYGFX_U32 *pSize);


/**
    C_MODEL-only function:
    Allocate RAM (not in VRAM) of the specified size.

    \param [in] size Size to be allocated
    \param[in]  alignment   Alignment to use for the allocation
    \param [out] *pAddr Pointer to the physical address of the allocated RAM

    \retval Pointer to the virtual address of the allocated RAM
**/
extern void* utHostRamAlloc(CYGFX_U32 size, CYGFX_U32 alignment, CYGFX_ADDR* pAddr);

/**
    Frees RAM allocated by ::utHostRamAlloc (to emulate a flash memory).

    \param[in] pVirtAddr   Virtual address previously returned from ::utHostRamAlloc
    \retval                None
 */
void utHostRamFree(void* pVirtAddr);

#endif


/**
    Creates \a cnt empty sync objects, returning their pointers.
    \param[in]  uCnt         Number of sync objects to create
    \param[out] pSyncObjects Output array for the returned pointers
    \retval  ::CYGFX_OK                             Success
    \retval  ::CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER Invalid parameter
    \retval  ::UTIL_ERR_SYNC_OUT_OF_MEMORY          Out of memory
*/
CYGFX_ERROR utSyncCreate(CYGFX_U32 uCnt, CYGFX_SYNC* pSyncObjects);

/**
    Deletes a list of sync objects.
    \param[in]  uCnt          Number of sync objects to delete
    \param[in]  pSyncObjects  Array of sync objects to delete
    \retval     ::CYGFX_OK                             Success
    \retval     ::CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER Invalid parameter
*/
CYGFX_ERROR utSyncDelete(CYGFX_U32 uCnt, CYGFX_SYNC* pSyncObjects);


/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_COMPATIBILITY_H */
