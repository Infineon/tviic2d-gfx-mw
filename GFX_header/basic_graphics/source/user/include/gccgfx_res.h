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
 * \file    gccgfx_res.h 
 * \brief   Resource Manager interface
 */


#ifndef GCCGFX_RES_H
#define GCCGFX_RES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_res
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/** \name Intern Resource Names. */
/** \{ */
/* Displays */
typedef CYGFX_U32 GCCGFX_RES_NAME;                                     /**< Type for resources */
#define GCCGFX_RES_DISP0            ((GCCGFX_RES_NAME)(1uL << 0u))  /**< Resource Display#0, includes FrameGen0, GammaCor#0, GammaCor2#0, Dither0 */
#define GCCGFX_RES_DISP1            ((GCCGFX_RES_NAME)(1uL << 1u))  /**< Resource Display#1, includes FrameGen1, GammaCor#1, GammaCor2#1, Dither1 */
/* Layers */
#define GCCGFX_RES_LAYER0           ((GCCGFX_RES_NAME)(1uL << 2u))  /**< Resource LayerBlend#1 */
#define GCCGFX_RES_LAYER1           ((GCCGFX_RES_NAME)(1uL << 3u))  /**< Resource LayerBlend#2 */
#define GCCGFX_RES_LAYER2           ((GCCGFX_RES_NAME)(1uL << 4u))  /**< Resource LayerBlend#3 */
#define GCCGFX_RES_LAYER3           ((GCCGFX_RES_NAME)(1uL << 5u))  /**< Resource LayerBlend#4 */
#define GCCGFX_RES_LAYER4           ((GCCGFX_RES_NAME)(1uL << 6u))  /**< Resource LayerBlend#5 */
/* Fetches */
#define GCCGFX_RES_FETCH_DECODE0    ((GCCGFX_RES_NAME)(1uL << 7u))  /**< Resource Fetch Decode#0 */
#define GCCGFX_RES_FETCH_WARP1      ((GCCGFX_RES_NAME)(1uL << 8u))  /**< Resource Fetch Warp */
#define GCCGFX_RES_FETCH_DECODE4    ((GCCGFX_RES_NAME)(1uL << 9u))  /**< Resource Fetch Decode#4 */
#define GCCGFX_RES_FETCH_LAYER0     ((GCCGFX_RES_NAME)(1uL << 10u)) /**< Resource Fetch Layer#0 */
#define GCCGFX_RES_FETCH_LAYER1     ((GCCGFX_RES_NAME)(1uL << 11u)) /**< Resource Fetch Layer#1 */
/* Video Processing Block */
#define GCCGFX_RES_VIDEO_PROCESSING ((GCCGFX_RES_NAME)(1uL << 12u)) /**< Resource Video Processing Block */
/* Display stream input */
#define GCCGFX_RES_EXTSRC8          ((GCCGFX_RES_NAME)(1uL << 13u)) /**< Resource ExtSrc#8 */
/* Store4: share between capture and frame dump */
#define GCCGFX_RES_STORE4           ((GCCGFX_RES_NAME)(1uL << 14u)) /**< Resource Store#4 */
/* On-the-Fly windows */
#define GCCGFX_RES_OTF_WIN0         ((GCCGFX_RES_NAME)(1uL << 15u)) /**< Resource OTF Window#0 */
#define GCCGFX_RES_OTF_WIN1         ((GCCGFX_RES_NAME)(1uL << 16u)) /**< Resource OTF Window#1 */
#define GCCGFX_RES_OTF_WIN2         ((GCCGFX_RES_NAME)(1uL << 17u)) /**< Resource OTF Window#2 */
#define GCCGFX_RES_OTF_WIN3         ((GCCGFX_RES_NAME)(1uL << 18u)) /**< Resource OTF Window#3 */
/* OTF window on multi-layer fetch */
#define GCCGFX_RES_OTF_FETCH_WARP1  ((GCCGFX_RES_NAME)(1uL << 19u)) /**< OTF window on Fetch Warp */
#define GCCGFX_RES_OTF_FETCH_LAYER0 ((GCCGFX_RES_NAME)(1uL << 20u)) /**< OTF window on Fetch Layer#0 */
#define GCCGFX_RES_OTF_FETCH_LAYER1 ((GCCGFX_RES_NAME)(1uL << 21u)) /**< OTF window on Fetch Layer#1 */
/** \} */


#define GCCGFX_RES_ALL (GCCGFX_RES_DISP0            | \
                        GCCGFX_RES_DISP1            | \
                        GCCGFX_RES_LAYER0           | \
                        GCCGFX_RES_LAYER1           | \
                        GCCGFX_RES_LAYER2           | \
                        GCCGFX_RES_LAYER3           | \
                        GCCGFX_RES_LAYER4           | \
                        GCCGFX_RES_FETCH_DECODE0    | \
                        GCCGFX_RES_FETCH_WARP1      | \
                        GCCGFX_RES_FETCH_DECODE4    | \
                        GCCGFX_RES_FETCH_LAYER0     | \
                        GCCGFX_RES_FETCH_LAYER1     | \
                        GCCGFX_RES_VIDEO_PROCESSING | \
                        GCCGFX_RES_EXTSRC8          | \
                        GCCGFX_RES_STORE4           | \
                        GCCGFX_RES_OTF_WIN0         | \
                        GCCGFX_RES_OTF_WIN1         | \
                        GCCGFX_RES_OTF_WIN2         | \
                        GCCGFX_RES_OTF_WIN3         | \
                        GCCGFX_RES_OTF_FETCH_WARP1  | \
                        GCCGFX_RES_OTF_FETCH_LAYER0 | \
                        GCCGFX_RES_OTF_FETCH_LAYER1) /**< Macro used for parameter check for valid resource bit field */


/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/


/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Initialize the Resource Manager component

    \param [in] ResourceLock  Bitfield that describes resources allocated by safety
                              driver

    \retval None
**/
CYGFX_EXTERN void GccGfx_ResInit( CYGFX_SYS_RES ResourceLock);

/**
    Acquire a resource.
    The usage count is incremented

    \param [in] name  A unique identifier for the resource

    \retval ::CYGFX_OK Success
    \retval ::CYGFX_ERP_ERR_RES_EXCEEDED_MAXIMUM_USAGE Resource max user count
            exceeded.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_ResAcquire( GCCGFX_RES_NAME name);

/**
    Release a resource.
    The usage count is decremented

    \param [in] name  A unique identifier for the resource

    \retval None
**/
CYGFX_EXTERN void GccGfx_ResRelease(GCCGFX_RES_NAME name);

/**
    Get the status of a resource

    \param [in] name  A unique identifier for the resource
    \param [out] pCurrentUsageCount  Current usage count of this resource
    \param [out] pMaxUsageCount  Maximum usage count of this resource [0: no
                                 limitation]

    \retval None
**/
CYGFX_EXTERN void GccGfx_ResGetStatus( GCCGFX_RES_NAME name,
                                       CYGFX_U32*    pCurrentUsageCount,
                                       CYGFX_U32*    pMaxUsageCount);
/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_RES_H */

