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
    \file        ut_disp.h
    \brief       This header declares display helper functions.
*/

#ifndef UT_DISP_H
#define UT_DISP_H

#if (defined (CY_USE_PSVP) && !CY_USE_PSVP)

#include "fpdlink\cy_fpdlink.h"

#else

/* required for many samples not running on Silicon */
typedef enum
{
    Fpdlink0 = 0, /**< FPD-Link instance #0 */
    Fpdlink1 = 1, /**< FPD-Link instance #1 */
    FpdlinkDual01 = 128, /**< FPD-Link instance #0 and #1 in dual pixel mode */
} cy_fpdlink_en_instance_t;
#endif 

#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_disp Utilities for display controller

    This block contains helper functions to set up a display.

    Display controllers need a pixel clock set in close relation to the chosen resolution such that the displays are working.
    To configure a suitable pixel clock, you must first select a PLL from the PLL pool, configure that PLL, and redirect
    its output towards one of the output links.

    This example uses the API functions from the SDL library.

     - Cy_SysClk_Pll400MConfigure - Used to configure a 400-MHz PLL
     - Cy_SysClk_PllConfigure     - Used to configure a 200-MHz PLL
     - Cy_SysClk_PllEnable        - Used to enable an already configured PLL
     - Cy_SysClk_PllDisable       - Used to switch off a PLL (configured or not)

     See the SDL documentation for further information.

     Note that the PLL clock is formed as follows:

     Display Single Screen mode: PLL clock = 2 * 2^(KDIV) * DesiredPixelClock with KDIV being 0,1,2,3.

     Display Dual Channel mode: PLL clock = 2^(KDIV) * DesiredPixelClock with KDIV being 0,1,2,3.

\{ */

/** Data structure to hold the data for FPD-Link enable after open display */

struct TimeData
{
    /** pixel clock for display 0 */
    CYGFX_U32 pllClock0;
    /** pixel clock for display 1 */
    CYGFX_U32 pllClock1;
    /** clock divider for display 0 */
    CYGFX_U08   divider0;
    /** clock divider for display 1 */
    CYGFX_U08   divider1;
};

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/**
    Stores the data for PLL setting to be used later.
    \param[in] outputController  Display (CYGFX_DISP_CONTROLLER_0 or CYGFX_DISP_CONTROLLER_1) 
    \param[in] pllClock          Value of the PLL clock
    \param[in] divider           Clock divider
*/
CYGFX_EXTERN void utDispStorePllData(CYGFX_DISP_CONTROLLER outputController, CYGFX_U32 pllClock, CYGFX_U08 divider);


/**
    Gets the data for PLL setting to be used later.   
    \param[in] outputController  Display (CYGFX_DISP_CONTROLLER_0 or CYGFX_DISP_CONTROLLER_1) 
    \param[out] pllClock         Value of the PLL-clock
    \param[out] divider          Clock divider    
*/
CYGFX_EXTERN void utDispRestorePllData(CYGFX_DISP_CONTROLLER outputController, CYGFX_U32* pllClock, CYGFX_U08* divider);


/**
    Gets the timing parameters in the timing structure for a given
    display resolution. The supported timing list is defined in ut_disp.c.
    Reports an error if the given resolution is not found in the defined timing list.

    \param[in] xResolution   Horizontal resolution
    \param[in] yResolution   Vertical resolution
    \param[out] timing       Pointer to the display timing structure passed to
                             ::CYGFX_DISP_PROPERTIES_S and ::CyGfx_DispOpenDisplay()

    \retval ::CYGFX_OK on success
    \retval ::CYGFX_ERR if one of the parameters is invalid
*/
CYGFX_EXTERN CYGFX_ERROR utDispGetTiming(CYGFX_U32 xResolution, CYGFX_U32 yResolution, CYGFX_DISP_TIMING_S *timing);


/*****************************************************************************/
/**
    Calculates the Display PLL and required dividers based on the provided pixelClock.

    \param[in] pixelClock  Display pixel clock (in MHz)
    \param[in] displayMode Display mode: Single-screen or dual-channel (see ::CYGFX_DISP_MODE)
    \param[out] divider    Divider matching the PLL and pixelClock ratio
    \param[out] pll        Pointer to get the resulting PLL value (in Hz)

    \retval ::CYGFX_OK on success; ::CYGFX_ERR otherwise.
*/
/*****************************************************************************/
CYGFX_EXTERN CYGFX_ERROR utDispGetPll(CYGFX_FLOAT pixelClock, CYGFX_DISP_MODE displayMode, CYGFX_U08 *divider, CYGFX_U32 *pll);


/*****************************************************************************/
/**
    Programs the display PLL based on the provided pixelClock.

    \param[in] pll             PLL value (in Hz), e.g., returned from a previous call of utDispGetPll
    \param[in] outputController  Display (CYGFX_DISP_CONTROLLER_0 or CYGFX_DISP_CONTROLLER_1)

    \retval ::CYGFX_OK on success; ::CYGFX_ERR otherwise.
*/
CYGFX_EXTERN CYGFX_ERROR utDispEnablePll(CYGFX_U32 pll, CYGFX_DISP_CONTROLLER outputController);


/*****************************************************************************/
/**
    The utDispEnableFpdLink() function is deprecated and should no longer be used.
	It is recommended to use utDispSetFpdLink instead and adapt the existing applications accordingly.

    Enables the selected FPD-Link interface.

    \param[in] pllDivider    Divider to be programmed[ 0, 1, 2, 3]; (See ::utDispGetPll)
    \param[in] displayMode   Display mode: Single-screen or dual-channel (see ::CYGFX_DISP_MODE)
    \param[in] fpdLink       FpdLink channel
                             - 0 - FpdLink 0;
                             - 1 - FpdLink 1;
                             - 128 - FpdLink 0 in Dual-channel mode

    \retval ::CYGFX_OK on success; ::CYGFX_ERR otherwise
*/
/*****************************************************************************/
CYGFX_EXTERN CYGFX_ERROR utDispEnableFpdLink(CYGFX_U08 pllDivider, CYGFX_DISP_MODE displayMode, cy_fpdlink_en_instance_t fpdLink);

/*****************************************************************************/
/**
    Enables the selected FPD-Link interface.
 
    \param[in] outputController Display controller
    \param[in] displayMode   Display mode: Single-screen or dual-channel (see ::CYGFX_DISP_MODE)
    \param[in] pllDivider    Divider to be programmed[ 0, 1, 2, 3]; (See ::utDispGetPll)
 
    \retval ::CYGFX_OK on success; ::CYGFX_ERR otherwise.
*/
 /*****************************************************************************/
CYGFX_EXTERN CYGFX_ERROR utDispSetFpdLink(CYGFX_DISP_CONTROLLER outputController, CYGFX_DISP_MODE displayMode, CYGFX_U08 pllDivider);

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif

#endif /* UT_DISP_H */
