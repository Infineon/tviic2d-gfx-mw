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
 * \file    cygfx_sysinit.h
 */


#ifndef CYGFX_SYSINIT_H
#define CYGFX_SYSINIT_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup cygfx_sysinit
* \code #include "cygfx_sysinit.h" \endcode
* \brief The Driver Initialization API exposes the functions to initialize and de-initialize the driver.
*  In TVIIC2D6MDDR devices, the three DDR read ports are denoted as [RD0 RD1 RD2]. RD0 is fixed to LOW priority,
*  RD2 is fixed to HIGH priority (for QoS reads), so only RD1 is configurable as HIGH or LOW.
*  With this option, the application can select [LOW HIGH HIGH] or [LOW LOW HIGH] as the configuration.
*  A default mappping of units compatible with either of these two mapping is provided for ease of initialization.
*  Ensure that the selection here matches with the LPDDR4 configuration of the read ports.
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define CYGFX_SYS_INIT_DEFAULT_RD1_PRIO_LOW  \
{ \
    CYGFX_SYS_INIT_INFRA_PORT_PRIO_LOW,    /**< RD1 port NOTE: RD0 is always LOW, RD2 is always HIGH */ \
    CYGFX_SYS_INIT_BLIT_ROUTING_MODE_DYNAMIC    ,   /**< Port mapping of fetch units of the blit engine, recommended setting is DYNAMIC*/ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0,  /**< jpgDecoder   */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1,  /**< drawEng      */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1,  /**< cmdSeq       */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD2,  /**< fetchWarp    */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD2,  /**< fetchDecode0 */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD2,  /**< fetchDecode4 */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD2,  /**< fetchLayer1  */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1,  /**< fetchBlit0  Ignored if dynamic  */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1,  /**< fetchBlit1  Ignored if dynamic  */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1   /**< fetchBlit2  Ignored if dynamic  */ \
} /**< Default UNIT MAP Initializer priority LOW, applicable for TVIIC2D6MDDR, ignored for other devices.  */


#define CYGFX_SYS_INIT_DEFAULT_RD1_PRIO_HIGH  \
{ \
    CYGFX_SYS_INIT_INFRA_PORT_PRIO_HIGH,    /**< RD1 port, NOTE: RD0 is always LOW; RD2 is always HIGH. */ \
    CYGFX_SYS_INIT_BLIT_ROUTING_MODE_DYNAMIC    ,   /**< Blit engine DYNAMIC*/ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0,  /**< jpgDecoder   */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0,  /**< drawEng      */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0,  /**< cmdSeq       */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1,  /**< fetchWarp    */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1,  /**< fetchDecode0 */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1,  /**< fetchDecode4 */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD2,  /**< fetchLayer1  */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0,  /**< fetchBlit0  Ignored if dynamic  */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0,  /**< fetchBlit1  Ignored if dynamic  */ \
    CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0   /**< fetchBlit2  Ignored if dynamic  */ \
} /**< Default UNIT MAP initializer priority HIGH. Applicable for TVIIC2D6MDDR; ignored for other devices.  */



/** \name Default initializer
 * \{ */
#define CYGFX_SYS_INIT_INITIALIZER  \
    { \
        0u, /* no safety driver */ \
        0u, /* Display 0 PLL in Hz  */ \
        0u, /* Display 1 PLL in Hz  */ \
        CYGFX_TRUE, /* Erasing enabled */ \
        CYGFX_SYS_INIT_DEFAULT_RD1_PRIO_LOW /* Replace with ::CYGFX_SYS_INIT_DEFAULT_RD1_PRIO_HIGH if displays with high resolution and many layers or large warping buffer are used. */\
    } /**< Default Initializer */
/** \} */
/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/** \name Port priority. Applicable for TVIIC2D6MDDR; ignored for other devices. */
/** \{ */
typedef CYGFX_U32 CYGFX_INFRA_PORT_PRIO; /**< Type for port assignment */
#define CYGFX_SYS_INIT_INFRA_PORT_PRIO_LOW   ((CYGFX_INFRA_PORT_PRIO)0u) /**< Priority of infra RD1 read port is set to LOW. */
#define CYGFX_SYS_INIT_INFRA_PORT_PRIO_HIGH  ((CYGFX_INFRA_PORT_PRIO)1u) /**< Priority of infra RD1 read port is set to HIGH. */
/** \} */

/** \name Blit routing mode. Applicable for TVIIC2D6MDDR; ignored for other devices. */
/** \{ */
typedef CYGFX_U32 CYGFX_BLIT_ROUTING_MODE; /**< Type for Blit LBC Bar routing mode */
#define CYGFX_SYS_INIT_BLIT_ROUTING_MODE_DYNAMIC  ((CYGFX_BLIT_ROUTING_MODE)0u) /**< Blit engine reads are routed dynamically by the LBC Bar. */
#define CYGFX_SYS_INIT_BLIT_ROUTING_MODE_STATIC   ((CYGFX_BLIT_ROUTING_MODE)1u) /**< Blit engine reads are routed statically. */
/** \} */

/** \name Infra port assignment. Applicable for TVIIC2D6MDDR; ignored for other devices. */
/** \{ */
typedef CYGFX_U32 CYGFX_ASSIGN_INFRA_PORT; /**< Type for infra port priority. */
#define CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0  ((CYGFX_ASSIGN_INFRA_PORT)0u) /**< Map unit to RD0 read port */
#define CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1  ((CYGFX_ASSIGN_INFRA_PORT)1u) /**< Map unit to RD1 read port */
#define CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD2  ((CYGFX_ASSIGN_INFRA_PORT)2u) /**< Map unit to RD2 read port */
/** \} */


/**
 Data type used to map units to read ports in Infra
**/
typedef struct
{
    CYGFX_INFRA_PORT_PRIO    rd1_prio     : 1;  /**<Priority of RD1 port. 
                                                    NOTE: RD0 is always CYGFX_SYS_INIT_INFRA_PORT_PRIO_LOW; 
                                                    RD2 is always CYGFX_SYS_INIT_INFRA_PORT_PRIO_HIGH.*/
    CYGFX_BLIT_ROUTING_MODE  blit_dyn     : 1;  /**<Blit engine routing in LBC BAR DYNAMIC or STATIC.
                                                    NOTE: DYNAMIC is recommended for efficiency.*/
    CYGFX_ASSIGN_INFRA_PORT  jpgDecoder   : 2;  /**<Port for JPEG Decoder; use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X]. */
    CYGFX_ASSIGN_INFRA_PORT  drawEng      : 2;  /**<Port for Drawing Engine; use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X].*/
    CYGFX_ASSIGN_INFRA_PORT  cmdSeq       : 2;  /**<Port for Command Sequencer; use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X].*/
    CYGFX_ASSIGN_INFRA_PORT  fetchWarp1   : 2;  /**<Port for Fetch Warp unit; Fetch Eco1 will also use same port. 
                                                    Use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X].*/
    CYGFX_ASSIGN_INFRA_PORT  fetchDecode0 : 2;  /**<Port for Fetch Decode0 unit; use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X].*/
    CYGFX_ASSIGN_INFRA_PORT  fetchDecode4 : 2;  /**<Port for Fetch Decode4 unit; Fetch Eco4 will also use same port. 
                                                   Use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X].*/
    CYGFX_ASSIGN_INFRA_PORT  fetchLayer1  : 2;  /**<Port for Fetch Layer1 unit; use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X].*/
    CYGFX_ASSIGN_INFRA_PORT  fetchBlit0   : 2;  /**<Port for Fetch Blit0 unit; use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X].*/
    CYGFX_ASSIGN_INFRA_PORT  fetchBlit1   : 2;  /**<Port for Fetch Blit1 unit; use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X].*/
    CYGFX_ASSIGN_INFRA_PORT  fetchBlit2   : 2;  /**<Port for Fetch Blit2 unit; use CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD[X].*/
} CYGFX_UNITMAP_S; 

/** \name Resource names */
/** \{ */
/* Displays */
    typedef CYGFX_U32 CYGFX_SYS_RES;                               /**< Type for resources */
#define CYGFX_SYS_RES_DISP0        ((CYGFX_SYS_RES)(1uL))      /**< Resource Display 0 (includes framegen, Clut, optional color matrix, optional histogram, dither for display 0)
                                                                        \note If Display 0 should be configured in dual channel mode, CYSD_SYS_RES_DISP1 must be also selected but no CYSD_SYS_RES_DISP1WINDOWS */
#define CYGFX_SYS_RES_DISP1        ((CYGFX_SYS_RES)(2uL))      /**< Resource Display 1 (includes framegen, Clut, optional color matrix, optional histogram, dither for display 1) */
#define CYGFX_SYS_RES_DISP0WINDOWS ((CYGFX_SYS_RES)(5uL))      /**< Window 0 - 7 for display 0 (includes LayerBlend 5, FetchLayer 0, ConstFrame0, Extdest0) */
#define CYGFX_SYS_RES_DISP1WINDOWS ((CYGFX_SYS_RES)(10uL))     /**< Window 0 - 7 for display 1 (includes LayerBlend 4, FetchLayer 1, ConstFrame1, Extdest1) */
                                                                        /** \} */

/** \name Allowed PLL frequency range */
/** \{ */
typedef CYGFX_U32 CYGFX_SYS_INIT_DISP_PLL;                               /**< Type that represents a display PLL frequency */
#define CYGFX_SYS_INIT_DISP_PLL_MIN ((CYGFX_SYS_INIT_DISP_PLL)110000000) /**< Minimum display PLL frequency of 110 MHz */
#define CYGFX_SYS_INIT_DISP_PLL_MAX ((CYGFX_SYS_INIT_DISP_PLL)220000000) /**< Maximum display PLL frequency of 220 MHz */

/** \} */

/**
    Data type used to specify PLL values for the two display controllers
**/
typedef struct
{
    CYGFX_SYS_RES           ResourceLock; /**< Bitmask that describes the resources allocated by the safety driver; default: 0 */
    CYGFX_SYS_INIT_DISP_PLL PllDsp0;      /**< Frequency of the display 0 PLL in Hz. Used for the configuration of
        clock dividers for pixel clock generation. Assumed to have been configured by the system. The default value
        is 0. */
    CYGFX_SYS_INIT_DISP_PLL PllDsp1;      /**< Frequency of the display 1 PLL in Hz. Used for the configuration of
        clock dividers for pixel clock generation. Assumed to have been configured by the system. The default value
        is 0.
        Note: May not be available on all devices. */
    CYGFX_BOOL              bErase;       /**< Control whether a system-wide erasing is performed during startup. 
        The default value is CYGFX_TRUE; then all GFX registers and the complete VRAM are erased. */
    CYGFX_UNITMAP_S           UnitMap;      /**< Mapping of units to specific RD port (TVIIC2D6MDDR only, ignored for others). */
} CYGFX_SYSINIT_INFO_S;

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In Doxygen comments, character sequences such as double slash are used. 
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
/**
    Used to initialize the driver at startup.
    Applications must initialize the driver before they can call other driver
    functions except for the \ref cygfx_erp "error reporting API".

    \note
    The VIDEOSS hardware must be in the default state, i.e., no registers may be
    altered between HW reset and the call of CyGfx_SysInitializeDriver().

    The registers reserved for a safety driver may be altered.

    \note
    If a pDriverInitInfo parameter is used, it is recommended to initialize this
    structure with CYGFX_SYS_INIT_INITIALIZER, and then set the fields that are to
    be changed:

    \code
    CYGFX_SYSINIT_INFO_S DriverInitInfo = CYGFX_SYS_INIT_INITIALIZER;
    DriverInitInfo.PllDsp0 = (200 * 1000000); // Set value for display 0 PLL to 200 MHz
    DriverInitInfo.ResourceLock = CYGFX_SYS_RES_DISP0; //Reserves the FetchLayer0 Unit
    CyGfx_SysInitializeDriver(&DriverInitInfo);
    \endcode

    For driver default values, refer to \a ::CYGFX_SYS_INIT_INITIALIZER. Note that
    the driver will not configure the PLL frequencies specified with
    pDriverInitInfo, but relies on the system to have configured them.

    \param [in] pDriverInitInfo  Can be NULL or a pointer to a
                                 ::CYGFX_SYSINIT_INFO_S driver initialization structure.

    \retval  ::CYGFX_OK Successfully initialized the driver.
    \retval  ::CYGFX_ERP_ERR_SYS_DEVICE_INVALID_PARAMETER ResourceLock parameter
             invalid
    \retval  ::CYGFX_ERP_ERR_SYS_DEVICE_ALREADY_INITIALIZED Already initialized
    \retval  ::CYGFX_ERP_ERR_SYS_DEVICE_WRONG_ID The graphics driver is not valid
             for the hardware.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SysInitializeDriver( const CYGFX_SYSINIT_INFO_S* pDriverInitInfo);

/**
    Used to de-initialize the driver.

    Applications must de-initialize the driver if it is no longer used.

    \retval  ::CYGFX_OK Successfully shut down the driver.
    \retval  ::CYGFX_ERP_ERR_SYS_DEVICE_NOT_YET_INITIALIZED Not yet initialized (
             ::CyGfx_SysInitializeDriver was not called).
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SysDeInitializeDriver(void);

/**
    \note
    This API blocks the bliteng hardware operation, 
    it is allowed to be called in user level and interrupt level.
    Recommendation to use: Disable read operation of blit engine traffic during MJPEG Decoder operation active. 
    After the completion of MJPEG operation, enable read blit traffic at interrupt level with normal JPEG decoder operation running.
    For MJPEG use case, LBCBARBLIT should be in Dynamic Mode. After initialization of driver, first blit_dyn should be set as CYGFX_SYS_INIT_BLIT_ROUTING_MODE_DYNAMIC in order to enable the read operation of blit traffic by bBlitEnable variable.
    <table border="1">
    <tr>
    <th>JPEG Operation</th>
    <th>bBlitEnable</th>
    </tr>
    <tr>
    <td>normal JPEG</td>
    <td>::CYGFX_TRUE</td>
    </tr>
    <tr>
    <td>MJPEG</td>
    <td>::CYGFX_FALSE Disable blit before MJPEG usecase starts.<br>
    ::CYGFX_TRUE Enable blit after MJPEG usecase ends</td>
    </tr>
    </table>
    \param [in] bBlitEnable  CYGFX_TRUE, if blit engine traffic enabled. Otherwise, CYGFX_FALSE,if blit engine traffic disabled.
    \retval  ::CYGFX_OK Successfully blit traffic control enabled/disabled.
    \retval  ::CYGFX_ERP_ERR_SYS_DEVICE_INVALID_PARAMETER invalid parameter for bBlitEnable 

**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_SysBlitTrafficControl(CYGFX_BOOL bBlitEnable);
/**
    \note
    This API used to assign the priority for JPEG decoder port.
    <table border="1">
    <tr>
    <th>RD1 port priority(rd1_prio)</th>
    <th>JPEG Operation</th>
    <th>JPEG Decoder RD port(MJPEG_port)</th>
    </tr>
    <tr>
    <td>::CYGFX_SYS_INIT_INFRA_PORT_PRIO_LOW</td>
    <td>MJPEG</td>
    <td>::CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD2</td>
    </tr>
    <tr>
    <td>::CYGFX_SYS_INIT_INFRA_PORT_PRIO_HIGH</td>
    <td>MJPEG</td>
    <td>::CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1, ::CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD2</td>
    </tr>
    <tr>
    <td>::CYGFX_SYS_INIT_INFRA_PORT_PRIO_LOW</td>
    <td>normal JPEG</td>
    <td>::CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0, ::CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD1</td>
    </tr>
    <tr>
    <td>::CYGFX_SYS_INIT_INFRA_PORT_PRIO_HIGH</td>
    <td>normal JPEG</td>
    <td>::CYGFX_SYS_INIT_ASSIGN_INFRA_PORT_RD0</td>
    </tr>
    </table>
    \param[in] MJPEG_port  Assign, MJPEG - RD to HighPrio LPDDR4 port via lbcbar jpgcmd. Otherwise, switch it back to LowPrio, before normal JPEG decoding is started.
    \retval::CYGFX_OK Successfully infra port changed.
    \retval::CYGFX_ERP_ERR_SYS_DEVICE_INVALID_PARAMETER invalid parameter for MJPEG_port
**/

CYGFX_EXTERN CYGFX_ERROR CyGfx_SysJpegRdPrioControl(CYGFX_ASSIGN_INFRA_PORT MJPEG_port);
/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_SYSINIT_H */

