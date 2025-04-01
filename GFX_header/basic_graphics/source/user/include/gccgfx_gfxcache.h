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
 * \file    gccgfx_gfxcache.h
 */


#ifndef GCCGFX_GFXCACHE_H
#define GCCGFX_GFXCACHE_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_gfxcache
* \brief      VIDEOSSDDR gfxcache interfaces
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/


/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/



/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

#ifdef TVIIC2D6MDDR
/**
    Initializes the gfxcache module.
    It enables HW(cmdseq and pixel cache) and set the default
    ::CYGFX_CONFIG_ATTR_CACHE_REGION

    \retval None
**/
CYGFX_EXTERN void GccGfx_GfxCacheInit(void);

/**
    Change the PixelCacheRegion
    \note Must be only used if no pixel cache is active.
    See ::CYGFX_CONFIG_ATTR_CACHE_REGION.

    \param [in] PixelCacheRegion  The new regison setting. Must be one of
    CYGFX_CONFIG_ATTR_CACHE_REGION_*.

    \retval None
**/
CYGFX_EXTERN void GccGfx_GfxCacheChangePixelRegion( CYGFX_U32 PixelCacheRegion);

/**
    Return the current PixelCacheRegion setting.

    \retval Current PixelCacheRegion setting
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_GfxCacheGetPixelRegion(void);

/**
    Get information if statistics collection is enabled

    \retval CYGFX_BOOL true if enabled, false if not  
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_GfxCacheGetStatisticsState(void);

/**
    Enable cache statistics

    \param [in] enable

    \retval None
**/
CYGFX_EXTERN void GccGfx_GfxCacheCounterEnable( CYGFX_BOOL enable);

/**
    Reads the cache counters and reports statistics via supplied pointer to
    structure.
    Reset the counters after read.

    \param [out] pCounters  a pointer to CYGFX_GFXCACHE_COUNTERS_S structure to get
    results.

    \retval CYGFX_OK on success
    \retval CYGFX_ERP_ERR_HW_GFXCACHE_GFXCACHE4_OVERFLOW or CYGFX_ERP_ERR_HW_GFXCACHE_GFXCACHE4_OVERFLOW on overflow
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_GfxCacheCounterReport( CYGFX_GFXCACHE_COUNTERS_S* pCounters);

#endif /* TVIIC2D6MDDR */


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_GFXCACHE_H */

