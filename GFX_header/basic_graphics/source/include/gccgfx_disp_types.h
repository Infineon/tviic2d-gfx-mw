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
 * \file    gccgfx_disp_types.h
 */


#ifndef GCCGFX_DISP_TYPES_H
#define GCCGFX_DISP_TYPES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */

#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_DISP_FIRST_DISPLAY ((CYGFX_U08)1u)                               /**< Define the offset for displays */
#define GCCGFX_DISP_FIRST_WINDOW  ((CYGFX_U08)1u)                               /**< Define the offset for windows */
#define GCCGFX_DISP_DISPLAY_ID0   ((CYGFX_U08)GCCGFX_DISP_FIRST_DISPLAY)        /**< Define display 0 */
#define GCCGFX_DISP_DISPLAY_ID1   ((CYGFX_U08)(GCCGFX_DISP_FIRST_DISPLAY + 1u)) /**< Define display 1 */

/**
    Convert a display id into a card type.

    \param [in] d  Display ID

    \retval GCCGFX_CARD_DEVICE_TYPE: GCCGFX_CARD_DEVICE_DISPLAY_0 resp. GCCGFX_CARD_DEVICE_DISPLAY_1 (depending on Display ID).
**/
#define GCCGFX_DISP_DISPID_TO_CARDTYPE(d) (((d) == (CYGFX_U32)GCCGFX_DISP_DISPLAY_ID0) ? (CYGFX_U08)GCCGFX_CARD_DEVICE_DISPLAY_0 : (CYGFX_U08)GCCGFX_CARD_DEVICE_DISPLAY_1)

/**
    Convert a display card type into a display id

    \param [in] d  Card Type

    \retval The Display ID
**/
#define GCCGFX_DISP_CARDTYPE_TO_DISPID(d) (((d) == (CYGFX_U08)GCCGFX_CARD_DEVICE_DISPLAY_0) ? (CYGFX_U32)GCCGFX_DISP_DISPLAY_ID0 : (CYGFX_U32)GCCGFX_DISP_DISPLAY_ID1)

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    Data type that specifies the operation mode for a display unit
**/
typedef enum
{
    GCCGFX_KDISP_MODE_STATIC     = 0, /**< No window is used in capture-to-window mode */
    GCCGFX_KDISP_MODE_RINGBUFFER = 1  /**< A window is used in capture-to-window mode */
} GCCGFX_KDISP_MODE_E;

/**
    Structure with initialization data for the DisplayK component
**/
typedef struct
{
    CYGFX_U32                         handle;      /**< Display controller [0..1] */
    GCCGFX_KDISP_MODE_E               mode;        /**< Display mode [::GCCGFX_KDISP_MODE_STATIC or ::GCCGFX_KDISP_MODE_RINGBUFFER] */
    volatile GCCGFX_CAP_RINGBUFFER_S* pRingBuffer; /**< Pointer to ring buffer description (for Capture-to-Window mode) */
} GCCGFX_KDISP_INIT_KERNEL_S;


/**
    Structure containing shadow load error information.
**/
typedef struct
{
    CYGFX_BOOL Any;         /**< Global shadow load error status. Should be always CYGFX_FALSE.
        If it is CYGFX_TRUE, the values of the other elements shall be read.  */
    CYGFX_U32  ExtDst;      /**< Primary stream ExtDst shadow load error status. Should be always zero (= no error). */
    CYGFX_U32  ExtDstSec;   /**< Secondary stream ExtDst shadow load error status. Should be always zero (= no error). */
    CYGFX_U32  FrameGen;    /**< FrameGen shadow load error status. Should be always zero (= no error). */
    CYGFX_U32  FetchLayer0; /**< FetchLayer0 shadow load error status. Should be always zero (= no error). */
    CYGFX_U32  FetchLayer1; /**< FetchLayer1 shadow load error status. Should be always zero (= no error). */
    CYGFX_U32  FetchWarp1;  /**< FetchWarp1 shadow load error status. Should be always zero (= no error). */
} GCCGFX_KDISP_SHADOW_LOAD_ERROR_S;

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_DISP_TYPES_H */

