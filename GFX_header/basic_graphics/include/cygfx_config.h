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
 * \file    cygfx_config.h
 */


#ifndef CYGFX_CONFIG_H
#define CYGFX_CONFIG_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup cygfx_config
* \code #include "cygfx_config.h" \endcode
* \brief The Configuration API allows changing or reading global graphics driver
*  configurations or status information.
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/**
    Structure returning cache counters. It is only available for TVIIC2D6MDDR.
**/
typedef struct
{
    CYGFX_U32 Bypass[5]; /**< Array with the cache bypass counter for 3 fetchblits, fetchwarp, and cmdseq */
    CYGFX_U32 Miss[5];   /**< Array with the cache miss counter for 3 fetchblits, fetchwarp, and cmdseq */
    CYGFX_U32 Hit[5];    /**< Array with the cache hit counter for 3 fetchblits, fetchwarp, and cmdseq */
} CYGFX_GFXCACHE_COUNTERS_S;


/** \name Driver build types */
/** \{ */
typedef CYGFX_CHAR CYGFX_CONFIG_DRIVER_TYPE;      /**< Type for driver build type */
#define CYGFX_CONFIG_DRIVER_TYPE_DEBUG      ('d') /**< Return code to identify the "debug" version;
    see ::CYGFX_CONFIG_ATTR_BUILD_TYPE. */
#define CYGFX_CONFIG_DRIVER_TYPE_RELEASE    ('r') /**< Return code to identify the "release" version;
    see ::CYGFX_CONFIG_ATTR_BUILD_TYPE. */
#define CYGFX_CONFIG_DRIVER_TYPE_PRODUCTION ('p') /**< Return code to identify the "production" version;
    see ::CYGFX_CONFIG_ATTR_BUILD_TYPE. */
/** \} */

/** \name Device identifier types */
/** \{ */
typedef CYGFX_U32 CYGFX_CONFIG_DEVICE;                       /**< Type for device identifier */
#define CYGFX_CONFIG_DEVICE_UNDEF ((CYGFX_CONFIG_DEVICE)0U)  /**< Unknown device */
#define CYGFX_CONFIG_DEVICE_4MA0  ((CYGFX_CONFIG_DEVICE)2U)  /**< Cluster Device 4M Rev. A */
#define CYGFX_CONFIG_DEVICE_6MB0  ((CYGFX_CONFIG_DEVICE)3U)  /**< Cluster Device 6M Rev. B */
#define CYGFX_CONFIG_DEVICE_DDR   ((CYGFX_CONFIG_DEVICE)4U)  /**< Reserved for future extension */
/** \} */


/** \name Cache configuration types */
/** \{ */
typedef CYGFX_U32 CYGFX_CONFIG_ATTR_CACHE_REGION_SET;                   /**< Type for cache region setting */
#define CYGFX_CONFIG_ATTR_CACHE_REGION_NONE      ((CYGFX_CONFIG_ATTR_CACHE_REGION_SET)0U) /**< Display warping and blit engine together use the pixel cache (default).
                                                                             \note This setting is not recommended if large display warping buffers are required. */
#define CYGFX_CONFIG_ATTR_CACHE_REGION_1_4_WARP  ((CYGFX_CONFIG_ATTR_CACHE_REGION_SET)1U) /**< 25% of cache capacity is reserved for display warping, 75% is reserved for blit engine. */
#define CYGFX_CONFIG_ATTR_CACHE_REGION_1_2_WARP  ((CYGFX_CONFIG_ATTR_CACHE_REGION_SET)2U) /**< 50% of cache capacity is reserved for display warping, 50% is reserved for blit engine. */
#define CYGFX_CONFIG_ATTR_CACHE_REGION_3_4_WARP  ((CYGFX_CONFIG_ATTR_CACHE_REGION_SET)3U) /**< 75% of cache capacity is reserved for display warping, 25% is reserved for blit engine. */
#define CYGFX_CONFIG_ATTR_CACHE_REGION_FULL_WARP ((CYGFX_CONFIG_ATTR_CACHE_REGION_SET)4U) /**< The cache capacity is reserved for display warping. */
/** \} */

/** \name Configuration attribute identifiers */
/** \{ */
typedef CYGFX_U08 CYGFX_CONFIG_ATTR;                             /**< Type for configuration attributes */
#define CYGFX_CONFIG_ATTR_MAJOR_VERSION   ((CYGFX_CONFIG_ATTR)0) /**< Returns the major version of the driver.
    This is a read-only attribute.
    Setting this attribute will result in an error. */
#define CYGFX_CONFIG_ATTR_MINOR_VERSION   ((CYGFX_CONFIG_ATTR)1) /**< Returns the minor version of the driver.
    This is a read-only attribute.
    Setting this attribute will result in an error. */
#define CYGFX_CONFIG_ATTR_MICRO_VERSION   ((CYGFX_CONFIG_ATTR)2) /**< Returns the micro version of the driver.
    This is a read-only attribute.
    Setting this attribute will result in an error. */
#define CYGFX_CONFIG_ATTR_BUILD_VERSION   ((CYGFX_CONFIG_ATTR)3) /**< Returns the build version of the driver.
    This is a read-only attribute.
    Setting this attribute will result in an error. */
#define CYGFX_CONFIG_ATTR_DISPLAY_NOBLOCK ((CYGFX_CONFIG_ATTR)4) /**< The following functions cannot be executed if a previous reconfiguration of a corresponding window or display is not yet finished:
    - ::CyGfx_DispOpenDisplay
    - ::CyGfx_DispCloseDisplay
    - ::CyGfx_DispWinCreate
    - ::CyGfx_WinDestroy
    - ::CyGfx_DispCommit
    - ::CyGfx_WinCommit

    If this attribute is 0 (default), the function will block the CPU until it can be executed.
    If this attribute is not 0, the function will return immediately with the ::CYGFX_ERP_ERR_DISP_DEV_BUSY error.

    It is up to the application to handle this case and reschedule the function call later.

    \note
    ::CyGfx_DispCloseDisplay does block one display frame regardless of this attribute.
    If not all display windows are closed or Capture-to-Display mode is used (the parameter capCtx in ::CyGfx_DispOpenDisplay is set as valid handle to enable the direct capture),
    ::CyGfx_DispCloseDisplay will block for one additional frame. This unconditional blocking is required to reopen the display.

    \note
    The application can also use the synchronization API to find out if the previous reconfiguration is finished. */
#define CYGFX_CONFIG_ATTR_BUILD_TYPE      ((CYGFX_CONFIG_ATTR)5) /**< Returns the build type of the driver.

    The returned values can be:
     ::CYGFX_CONFIG_DRIVER_TYPE_DEBUG ('d') for the debug version of the driver;
    ::CYGFX_CONFIG_DRIVER_TYPE_RELEASE ('r') for the release version of the driver;
    ::CYGFX_CONFIG_DRIVER_TYPE_PRODUCTION ('p') for the production version of the driver.

    This is a read-only attribute.
    Setting this attribute will result in an error. */
#define CYGFX_CONFIG_ATTR_IPIDENTIFIER    ((CYGFX_CONFIG_ATTR)6) /**< Returns the IP identifier of the 2D core that is in use.

    This is a read-only attribute.
    Setting this attribute will result in an error. */
#define CYGFX_CONFIG_ATTR_IPCONFIGURATION ((CYGFX_CONFIG_ATTR)7) /**< Returns the IP configuration of the 2D core that is in use.

    This is a read-only attribute.
    Setting this attribute will result in an error. */
#define CYGFX_CONFIG_ATTR_DEVICE_NAME     ((CYGFX_CONFIG_ATTR)8) /**< Returns the device target that is in use. See ::CYGFX_CONFIG_DEVICE

    This is a read-only attribute.
    Setting this attribute will result in an error. */
#define CYGFX_CONFIG_ATTR_CAPTURE_NOBLOCK ((CYGFX_CONFIG_ATTR)9) /**< The following functions cannot be executed if a previous capture reconfiguration is not yet finished.
    - ::CyGfx_CapOpen
    - ::CyGfx_CapClose
    - ::CyGfx_CapCommit

    If this attribute is 0 (default), the function will block the CPU until it can be executed.
    If this attribute is not 0, the function will return immediately with the ::CYGFX_ERP_ERR_CAP_DEV_BUSY error
    if a previous capture reconfiguration is not finished.

    It is up to the application to handle this case and reschedule the function call later. */


#define CYGFX_CONFIG_ATTR_CACHE_REGION ((CYGFX_CONFIG_ATTR)10) /**< This attribute changes the pixel cache properties. It is available only for TVIIC2D6MDDR.
    See CYGFX_CONFIG_ATTR_CACHE_REGION_... for more details.
    \note This attribute must be changed only if all GPU operations are idle. It is recommended to set this property only after
    CyGfx_SysInitializeDriver, depending on the usage of the display warping feature in the application.
    \note If changing this attribute is required, the FetchBlit can use only a part of the cache, and thus may cause cache misses. This can be improved
    by decreasing object partitioning #CYGFX_BE_CTX_ATTR_OBJECT_PARTITIONING_WIDTH.
    */

#define CYGFX_CONFIG_ATTR_CACHE_STATISTICS ((CYGFX_CONFIG_ATTR)11) /**< This attribute is to enable or disable GFX cache statistics. It is available only for TVIIC2D6MDDR.*/


/** \} */
/**
    Type of a function that the driver calls to clean the cache of memory that the
    driver has modified and that will be subsequently read by the graphics hardware.

    \param [in] StartAddress  Start address of the memory area
    \param [in] ByteSize  Length in bytes of the memory area

**/
typedef  void (* CyGfx_CacheCleanFunctionType)( CYGFX_U32 StartAddress,
                                                CYGFX_U32 ByteSize);

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Sets a graphics library attribute.
    See #CYGFX_CONFIG_ATTR for the list of attributes.

    \param [in] pname  Name of the attribute to set. See #CYGFX_CONFIG_ATTR.
    \param [in] param  Value to set for the attribute

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CONFIG_INVALID_PARAMETER If a parameter is invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_ConfigSetAttribute( CYGFX_CONFIG_ATTR pname,
                                                   CYGFX_U32         param);

/**
    Gets the current value of a graphics library attribute.
    See #CYGFX_CONFIG_ATTR for the list of attributes.

    \param [in] pname  Name of the attribute to get. See #CYGFX_CONFIG_ATTR.
    \param [out] pParam  Address where the read value of the attribute is stored

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CONFIG_INVALID_PARAMETER If pname is invalid or pParam
            is NULL
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_ConfigGetAttribute( CYGFX_CONFIG_ATTR pname,
                                                   CYGFX_U32*        pParam);
/**
    Configures the function that the driver uses to clean the data from the cache
    to the memory. The driver calls the cache clean function after it writes to the
    memory that will subsequently be read by the graphics hardware (CmdSeq and
    DrawEng). A cache clean function must be configured if cached memory is
    assigned to the driver with ::CyGfx_BeSetTaskInstructionBuffer.

    \param [in] func  Pointer to the cache clean function or NULL (if no clean
                      function is required)

    \retval None
**/
CYGFX_EXTERN void CyGfx_ConfigSetCacheCleanFunction( CyGfx_CacheCleanFunctionType func);


/**
    Gets the current GFX cache statistics. It is available only for TVIIC2D6MDDR.

    \param [out] pParam  Address where the read value of the statistics is stored

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_CONFIG_INVALID_PARAMETER If statistics not enabled
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_ConfigGetGfxCacheStatus(CYGFX_GFXCACHE_COUNTERS_S *pParam);


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_CONFIG_H */
