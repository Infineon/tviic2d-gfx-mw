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
 * \file    gccgfx_bliteng.h
 */


#ifndef GCCGFX_BLITENG_H
#define GCCGFX_BLITENG_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

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
/**
    Define the configuration parameters for frame rendering

    \param [in] cardHandle  Card handle
    \param [in] usage  see GCCGFX_BE_USE_*

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwBlitEngConfigureFrame( const GCCGFX_CARD_HANDLE cardHandle,
                                                  CYGFX_U32                usage);

/**
    Define the configuration parameters for line based rendering.

    \param [in] cardHandle  Card handle
    \param [in] task  Task id
    \param [in] SPR_id  Registerr used to store LineCnt.
    \param [in] w  Width
    \param [in] h  Height

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwBlitEngConfigureLine( const GCCGFX_CARD_HANDLE cardHandle,
                                                 CYGFX_U08                task,
                                                 CYGFX_U08                SPR_id,
                                                 CYGFX_U16                w,
                                                 CYGFX_U16                h);

/**
    Set given RGBA values as constant color/alpha in LBO mode.

    \param [in] cardHandle  Card handle
    \param [in] r  Red
    \param [in] g  Green
    \param [in] b  Blue
    \param [in] a  Alpha

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwBlitEngSetColor( const GCCGFX_CARD_HANDLE cardHandle,
                                            CYGFX_U16                r,
                                            CYGFX_U16                g,
                                            CYGFX_U16                b,
                                            CYGFX_U08                a);

/**
    Initiate a line rendering

    \param [in] cardHandle  Card handle
    \param [in] usage
    \param [in] pTask
    \param [in] x
    \param [in] y
    \param [in] w
    \param [in] h

    \retval ::CYGFX_OK On success, related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwBlitEngStartLine( const GCCGFX_CARD_HANDLE cardHandle,
                                                    CYGFX_U32                usage,
                                                    GCCGFX_BE_TASK_PARAM_S*  pTask,
                                                    CYGFX_U16                x,
                                                    CYGFX_U16                y,
                                                    CYGFX_U16                w,
                                                    CYGFX_U16                h);

/**
    Add a trigger for sequence complete to the BlitEngine device queue.

    \param [in] cardHandle  Card handle

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwBlitEngTriggerSeqComplete( const GCCGFX_CARD_HANDLE cardHandle);

/**
    Add a trigger for the given SyncId to the BlitEngine device queue.

    \param [in] cardHandle  Card handle
    \param [in] syncid  SyncId to Trigger

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwBlitEngSyncIdTrigger( const GCCGFX_CARD_HANDLE cardHandle,
                                                 CYGFX_U32                syncid);

/**
    Add a trigger to start the next source to linebuffer operation to the
    BlitEngine device queue.

    \param [in] cardHandle  Card handle

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwBlitEngTriggerLineBlit( const GCCGFX_CARD_HANDLE cardHandle);

/**
    Setup line buffer handshake

    \param [in] cardHandle  Card handle
    \param [in] SPR_id  SPR id
    \param [in] enable  Enable or disable LBH.
    \param [in] buflines  Number of lines in the linebuffer in power of two. Range
                          [0..14]
    \param [in] framelines  Height of the frame in lines. Range[1..16384)
    \param [in] keeplines  Number of lines to keep in the line buffer.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwBlitEngStaticSetupLbh( const GCCGFX_CARD_HANDLE cardHandle,
                                                  CYGFX_U08                SPR_id,
                                                  CYGFX_BOOL               enable,
                                                  CYGFX_U08                buflines,
                                                  CYGFX_U16                framelines,
                                                  CYGFX_U16                keeplines);

/**
    Get the GFXINT_GFX2D_SCHEDULER_ID_* for the given SPR id.

    \param [in] SPR_id  SPR id

    \retval CYGFX_U32 LBH sync value
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_HwBlitEngGetLbhSync( CYGFX_U08 SPR_id);

#ifdef TVIIC2D6MDDR
/**
   Trigger invalidation of the pixel cache.

    \param [in] cardHandle card Handle

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwBlitEngTriggerGfxCacheInvalidate( const GCCGFX_CARD_HANDLE cardHandle);
#endif


#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_BLITENG_H */

