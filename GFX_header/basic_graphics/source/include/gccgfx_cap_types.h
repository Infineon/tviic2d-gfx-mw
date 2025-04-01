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
 * \file    gccgfx_cap_types.h
 */


#ifndef GCCGFX_CAP_TYPES_H
#define GCCGFX_CAP_TYPES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_cap_types
* \brief Common structures definition shared between CaptureU and CaptureK
*/



/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_CAP_MAX_BUFFERS ((CYGFX_U08)4u)  /**< Maximum number of capture buffers that can be provided by the application in capture-to-surface mode. */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    Ring buffer object
**/
typedef struct
{
    CYGFX_U32  bufsize;             /**< size of 1 (compressed) frame in bytes */
    CYGFX_U32  ringbufsize;         /**< actual size of ring buffer in bytes */
    CYGFX_U32  addr_start;          /**< start address of ring buffer */
    CYGFX_U32  addr_wrap;           /**< end address of ring buffer + 1 */
    CYGFX_BOOL bNeedRepeat;         /**< Display is faster than capture => consider repeating frames */
    CYGFX_BOOL bNeedDrop;           /**< Capture is faster than display => consider dropping frames */
    CYGFX_U32  aw_delta;            /**< Minimum number of pixels written by Store unit during the period from display frame complete interrupt until the following frame is read by Fetch unit */
    CYGFX_U32  ar_delta;            /**< Minimum number of pixels read by Fetch unit during the period from capture frame complete interrupt until the following frame is written by Store unit */
    CYGFX_U32  aw_delta_blk;        /**< Extra space required for Store, when Fetch repeats a frame.
                                         case 1: Fetch reads faster than Store writes:
                                                 Maximum number of pixels written by Store unit during the period from display frame complete interrupt until Fetch starts to read the following frame.
                                         case 2: Store writes faster than Fetch reads:
                                                 Minimum number of pixels read by Fetch unit while Store writes a frame, i.e. extra space required for Store, when Fetch repeats a frame. */
    CYGFX_U32 ar_delta_blk;         /**< Extra space required for Fetch, when Store repeats a frame.
                                         case 1: Store writes faster than Fetch reads:
                                                 Maximum number of pixels read by Fetch unit during the period from capture frame complete interrupt until the Store starts to write the following frame.
                                         case 2: Fetch reads faster than Store writes:
                                                 1 - (Minimum number of pixels written by Store unit while Fetch reads a frame), i.e. extra space required for Fetch, when Store repeats a frame. */
    CYGFX_U32 len_mask;             /**< burst length - 1; used for fast alignment to burst length */
    CYGFX_U32 store_baseaddress;    /**< SW shadow of store_baseaddress0 register. */
    CYGFX_U32 fetch_baseaddress;    /**< SW shadow of fetch_baseaddress0 register. */
    CYGFX_U32 fetch_count;          /**< Number of frames read from ring buffer by FetchDecode4 */
    CYGFX_U32 store_count;          /**< Number of frames written to ring buffer by Store4 */
    CYGFX_U32 fetch_repeat_frame;   /**< Last frame must be read again to avoid crossing write pointer */
    CYGFX_U32 store_drop_frame;     /**< Last frame must be overwritten to avoid crossing read pointer */
    CYGFX_U32 store_last_count;     /**< Watchdog to check if Store is active and continues */
    CYGFX_U32 store_inactive_count; /**< Watchdog to check if Store is active and continues. */
} GCCGFX_CAP_RINGBUFFER_S;


/**
    Data type that specifies the operation mode for a capture unit.
**/
typedef enum
{
    GCCGFX_CAP_MODE_NONE           = 0, /**< Nothing is captured */
    GCCGFX_CAP_MODE_SURFACE        = 1, /**< Capture-to-Surface operation mode */
    GCCGFX_CAP_MODE_WINDOW         = 2, /**< Capture-to-Window operation mode, using ring buffer */
    GCCGFX_CAP_MODE_DISPLAY_DIRECT = 3  /**< Capture-to-Display operation mode, no buffer, display is sync-ed to video */
} GCCGFX_CAP_MODE_E;

/**
    Structure for capture start call from the Capture component to the CaptureK
    component
**/
typedef struct
{
    CYGFX_U32                         handle;                               /**< Capture unit [must be 0] */
    GCCGFX_CAP_MODE_E                 mode;                                 /**< Capture mode [See ::GCCGFX_CAP_MODE_E] */
    CYGFX_U32                         numBuffers;                           /**< Number of capture buffers */
    CYGFX_U32                         bufferOffset[GCCGFX_CAP_MAX_BUFFERS]; /**< Physical base addresses of capture buffers */
    CYGFX_U32                         bufferSize;                           /**< Buffer size for a single frame in capture-to-window mode */
    volatile GCCGFX_CAP_RINGBUFFER_S* pRingBuffer;                          /**< Pointer to ring buffer description (for capture-to-window mode) */
} GCCGFX_KCAP_INIT_KERNEL_S;

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_CAP_TYPES_H */

