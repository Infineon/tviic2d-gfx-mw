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
    \file        ut_memman.h
    \brief       This file defines some interfaces for memory management.
*/

#ifndef UT_MEMMAN_H
#define UT_MEMMAN_H

#ifdef __cplusplus
extern "C"
{
#endif


/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_memman Utilities for memory management
    This function group is used by many tutorial samples to manage video memory (VRAM)
    allocation and freeing.
\{ */

/*******************************************************************************
 Includes
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Macro Definitions
*******************************************************************************/

#ifndef PRODUCTION
/**
    If this define is set, a mechanism that checks whether the memory allocated by
    ::utMmanHeapAlloc has been written beyond the end of the allocated region
    is activated. This check is performed when the memory is released by
    ::utMmanHeapFree and an error is signaled by setting the
    ::g_mem_overwrite global variable.
*/
#define UT_MEMMAN_CHECK
#endif

/*******************************************************************************
 Data Types
*******************************************************************************/

/** Type definition for memory heap handle */
typedef void *UT_MEMMAN_HEAP_HANDLE;

#ifdef UT_MEMMAN_CHECK
/**
    Global variable that signals when the next word following a
    memory area allocated by ::utMmanHeapAlloc has been overwritten
*/
extern CYGFX_BOOL g_mem_overwrite;
#endif

/*******************************************************************************
 Function prototypes
*******************************************************************************/

/**
    Returns the size (in bytes) of the VRAM reserved for 2D graphics.
    It uses linker variables to get the size.

    \retval CYGFX_U32 Size of the VRAM for the application
*/
extern CYGFX_U32 utGetVRAMSize(void);

/**
    Returns the base address of the VRAM reserved for 2D graphics.
    It uses linker variables to get the size.

    \retval CYGFX_U32 Base address of the VRAM for the application.
*/
extern CYGFX_U32 utGetVRAMBaseAddr(void);

/**
    Resets built-in memory heap(s).\n
    This function must be called before ::utVideoAlloc(), etc. are called.

    \retval      #CYGFX_OK On success
    \retval      #UTIL_ERR_MMAN_NO_MEMORY If not enough system memory for
                    internal data
*/
extern CYGFX_ERROR utMmanReset(void);

/**
    Creates a video memory heap
    \note An application would call ::utMmanReset, which uses the built-in memory heap,
        instead of using this function.

    \param[out]  hdlmem      Handle to the newly created heap
    \param[in]   size        Size of the heap video memory
    \param[in]   baseAddress Physical start address of the heap video memory

    \retval      #CYGFX_OK On success
    \retval      #UTIL_ERR_MMAN_NO_MEMORY If not enough system memory for
                    internal data
*/
extern CYGFX_ERROR utMmanCreateHeap(UT_MEMMAN_HEAP_HANDLE  *hdlmem,
                                    CYGFX_U32              size,
                                    CYGFX_U32              baseAddress);

/**
    Resets built-in memory heap for HW(s).\n
    This function must be called before ::utVideoAlloc(), etc. are called.

    \retval      #CYGFX_OK On success
    \retval      #UTIL_ERR_MMAN_NO_MEMORY If not enough system memory for
                    internal data
*/
extern CYGFX_ERROR utMmanResetHW(void);

/**
    Adds a new memory region that is supported by utVideoAlloc.
    \param[in]  id         Name of the ID. 0 is reserved for the typical memory region (TVII VRAM). All other values are supported.
    \param[in]  pStartAddr Start address for the region
    \param[out] size       Size of the region in bytes
*/
extern CYGFX_ERROR utMmanAddRegion( CYGFX_U32 id,
                                     CYGFX_ADDR *pStartAddr,
                                     CYGFX_U32 size);
/**
    Selects a memory region that is used by utVideoAlloc.
    \param[in]  id         Name of the ID. Select 0 (default) for the typical memory region (TVII VRAM).
                           All different IDs previously assigned by utMmanAddRegion can be used.
    \retval                #CYGFX_OK if no error occurs
    \retval                #UTIL_ERR_MMAN_NO_MEMORY if an ID is selected that was not assigned by utMmanAddRegion before
*/
extern CYGFX_ERROR utMmanSelectRegion( CYGFX_U32 id);

/**
    Destroys a video memory heap
    \note Typically, an application would not use this function (see ::utMmanCreateHeap).

    \param[in]   hdlmem  Handle to heap

    \retval      #CYGFX_OK On success
    \retval      #UTIL_ERR_MMAN_INVALID_PARAMETER If \e hdlmem is NULL
*/
extern CYGFX_ERROR utMmanDestroyHeap(UT_MEMMAN_HEAP_HANDLE  hdlmem);

/**
    Allocates a block of memory from the specified heap.
    \note Typically, an application would not use this function, but call ::utVideoAlloc instead.

    \param[in]   hdlmem  Heap to perform the allocation from
    \param[in]   size    Number of bytes to allocate
    \param[in]   alignment Alignment to use for the allocation
    \param[out]  addr    Pointer to the newly allocated memory

    \retval      #CYGFX_OK On success
    \retval      #UTIL_ERR_MMAN_INVALID_PARAMETER if a parameter is invalid
    \retval      #UTIL_ERR_MMAN_NO_MEMORY If not enough system memory
                    for internal data
    \retval      #UTIL_ERR_MMAN_NO_VRAM If no contiguous block of
                    \e size bytes with \e alignment is available
*/
extern CYGFX_ERROR utMmanHeapAlloc(UT_MEMMAN_HEAP_HANDLE  hdlmem,
                                   CYGFX_U32              size,
                                   CYGFX_U32              alignment,
                                   CYGFX_ADDR             *addr);

/**
    Frees a block of memory previously allocated by #utMmanHeapAlloc
    \note Typically, an application would not use this function, but call ::utVideoFree instead.

    \param[in]   hdlmem  Heap to release the memory to
    \param[in]   addr    Pointer to the memory to free

    \retval      #CYGFX_OK On success
    \retval      #UTIL_ERR_MMAN_INVALID_PARAMETER If \e hdlmem is NULL
    \retval      #UTIL_ERR_MMAN_INVALID_MEMORY If \e addr does not point
                    to a currently allocated memory block
*/
extern CYGFX_ERROR utMmanHeapFree(UT_MEMMAN_HEAP_HANDLE  hdlmem,
                                  void                   *addr);

/**
    Gets the size of the heap
    \note Typically, an application would not use this function, but call ::utVideoGetSize()

    \param[in]   hdlmem  Heap to get the information for
    \param[out]  size    Pointer to the variable to receive the information

    \retval      #CYGFX_OK On success
    \retval      #UTIL_ERR_MMAN_INVALID_PARAMETER If \e hdlmem is NULL\n
*/
extern CYGFX_ERROR utMmanGetSize(UT_MEMMAN_HEAP_HANDLE  hdlmem,
                                 CYGFX_U32              *size);

/**
    Gets the total amount of free memory on the heap
    \note Typically, an application would not use this function, but call ::utVideoGetFreeTotal()

    \param[in]   hdlmem  Heap to get the information for
    \param[out]  size    Pointer to the variable to receive the information

    \retval      #CYGFX_OK On success
    \retval      #UTIL_ERR_MMAN_INVALID_PARAMETER If \e hdlmem or \e size is NULL
*/
extern CYGFX_ERROR utMmanGetFree(UT_MEMMAN_HEAP_HANDLE  hdlmem,
                                 CYGFX_U32              *size);

/**
    Gets the size of the largest free contiguous memory block on the heap
    \note Typically, an application would not use this function, but call ::utVideoGetLargestBlock()

    \param[in] hdlmem Heap to get the information for
    \param[out] size Pointer to variable to receive the information

    \retval      #CYGFX_OK On success
    \retval      #UTIL_ERR_MMAN_INVALID_PARAMETER If \e hdlmem is NULL
*/
extern CYGFX_ERROR utMmanGetLargest(UT_MEMMAN_HEAP_HANDLE  hdlmem,
                                    CYGFX_U32              *size);


/** Checks usage of heap */
extern void utMmanCheckHeap(void);

/** Checks usage of stack. */
extern void utMmanCheckStack(void);



/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */


#ifdef __cplusplus
}
#endif
#endif /* UT_MEMMAN_H */
