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
 * \file        gccgfx_defines.h
 * \ingroup     gdc_internal
 * \brief       Common macro definitions
 * Implements Building Block: Sysinit
 *
 */


#ifndef GCCGFX_DEFINES_H
#define GCCGFX_DEFINES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* N/A */

#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_defines
* \brief Common macro definitions
*/



/** \{ */

/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */
/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_GEN_DISPLAY_COUNT              (2u)                                                        /**< Number of supported displays */
#define GCCGFX_GEN_WINDOW_COUNT               (26u)                                                       /**< Number of supported windows */
#define GCCGFX_GEN_LAYER_COUNT                (5u)                                                        /**< Number of supported layers */
#define GCCGFX_GEN_SECONDFETCH_COUNT          (2u)                                                        /**< Number of secondary fetch units (used to read external alpha or warp coordinates) */
#define GCCGFX_GEN_SUBLAYER_COUNT             (8u)                                                        /**< Number of sublayers per multilayer */
#define GCCGFX_GEN_CAPTURE_COUNT              (1u)                                                        /**< Number of supported capture units */
#define GCCGFX_GEN_HISTO_COUNT                (3u)                                                        /**< Number of supported histogram units */
#define GCCGFX_GEN_ON_THE_FLY_COUNT           (4u)                                                        /**< Number of on-the-fly windows */
#define GCCGFX_GEN_BLIT_TASKS_COUNT           (3u)                                                        /**< Number of supported memory based blit tasks */
#define GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS (GCCGFX_GEN_ON_THE_FLY_COUNT + GCCGFX_GEN_BLIT_TASKS_COUNT) /**< Number of CmdSeq tasks */
#define GCCGFX_GEN_CUSTOM_SYNC_COUNT          (5u)                                                        /**< Number of supported custom sync types */

#define GCCGFX_GEN_ENABLE                     1                                                           /**< Generic macro that provides the value to set an enable flag */
#define GCCGFX_GEN_DISABLE                    0                                                           /**< Generic macro that provides the value to reset an enable flag */
#define GCCGFX_CAP_SAFETY_MARGIN              (16 * 1024)                                                 /**< Various factors render the algorithm for frame dropping or repetition unstable, because the following assumptions are not accurate:
    1. The interrupt routine assumes that it is executed, when the interrupt is raised. In fact, it is delayed by the top-level interrupt handling, which is outside of the control of the driver. It is even possible that some other interrupt is handled first and delays the call to our ISR.
    2. The timing information given by the application might not be accurate, because of possible tolerance of the video source.
    3. Clock sources might not be entirely stable and precise.
    Therefore, a safety margin is introduced. It means that not only crossing of Fetch and Store pointer is avoided, but also a "close encounter". Although this value is somewhat arbitrary, it is regarded as a reasonable tradeoff between memory consumption and safety. */

/** \name All shadow load items for display. */
/** \{ */
#define GCCGFX_DISP_SHDLD_PATH0               (1uLL <<  0u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_PATH1               (1uLL <<  1u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_CONSTFRM4           (1uLL <<  2u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_CONSTFRM5           (1uLL <<  3u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_PROPERTY0           (1uLL <<  4u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_PROPERTY1           (1uLL <<  5u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN01               (1uLL <<  6u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN02               (1uLL <<  7u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN03               (1uLL <<  8u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN04               (1uLL <<  9u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN05               (1uLL << 10u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN06               (1uLL << 11u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN07               (1uLL << 12u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN08               (1uLL << 13u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN09               (1uLL << 14u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN10               (1uLL << 15u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN11               (1uLL << 16u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN12               (1uLL << 17u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN13               (1uLL << 18u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN14               (1uLL << 19u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN15               (1uLL << 20u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN16               (1uLL << 21u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN17               (1uLL << 22u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN18               (1uLL << 23u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN19               (1uLL << 24u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN20               (1uLL << 25u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN21               (1uLL << 26u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN22               (1uLL << 27u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN23               (1uLL << 28u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN24               (1uLL << 29u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN25               (1uLL << 30u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_WIN26               (1uLL << 31u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_ECO1                (1uLL << 32u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_ECO4                (1uLL << 33u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_CAPPATH             (1uLL << 34u)                                               /**< No check if executed. Use only together with other trigger events! */
#define GCCGFX_DISP_SHDLD_SECPATH             (1uLL << 35u)                                               /**< Shadow load request identifier */
#define GCCGFX_DISP_SHDLD_CAPPROP             (1uLL << 36u)                                               /**< Shadow load request identifier */
/** \} */

/** \name Shadow load item for capture. */
/** \{ */
#define GCCGFX_CAP_SHDLD_STORE4_TRIGGER       (1uLL << 40u)                                               /**< Shadow load request identifier */
/** \} */
/**
    Assign the maximum from a and b to a

    \param [in] a  Value a
    \param [in] b  Value b

**/
#define GCCGFX_GEN_MAX_ASSIGN(a, b) ((a) = CYGFX_MAX((a), (b)))

/**
    Assign the minimum from a and b to a

    \param [in] a  Value a
    \param [in] b  Value b

**/
#define GCCGFX_GEN_MIN_ASSIGN(a, b) ((a) = CYGFX_MIN((a), (b)))


/** \name Helper macros to generate shadow load item for a specific display. */
/** \{ */
/**
    Helper macro to generate shadow load item for a specific display.

    \param [in] dispID  Display index

**/
#define GCCGFX_DISP_SET_DISP_SHDLD_PATH(dispID) (GCCGFX_DISP_SHDLD_PATH0 << ((dispID) - GCCGFX_DISP_FIRST_DISPLAY))
/**
    Helper macro to generate shadow load item for a the const frame unit of a
    specific display.

    \param [in] dispID  Display index

**/
#define GCCGFX_DISP_SET_DISP_SHDLD_CONSTFRM(dispID) (GCCGFX_DISP_SHDLD_CONSTFRM4 << ((dispID) - GCCGFX_DISP_FIRST_DISPLAY))
/**
    Helper macro to generate shadow load item for a specific display.

    \param [in] dispID  Display index

**/
#define GCCGFX_DISP_SET_DISP_SHDLD_PROPERTY(dispID) (GCCGFX_DISP_SHDLD_PROPERTY0 << ((dispID) - GCCGFX_DISP_FIRST_DISPLAY))
/** \} */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/


/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/** \} end addtogroup */
/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_DEFINES_H */

