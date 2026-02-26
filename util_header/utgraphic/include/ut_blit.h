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
    \file        ut_blit.h
    \brief       Defines helper functions for blitting.
*/

#ifndef UT_BLIT_H
#define UT_BLIT_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_blit Special utilities for the Blit Engine
    Functions in this block support blitting special objects using the
    VIDEOSS Blit Engine.
\{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

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
    Performs a utilization counter read for all fields and display the values in
    human-readable format. The following values are calculated:

    For each of the 8 possible task buffers, the time in % that was spent on processing commands from each of them.
    - Blit Engine Idle Time % of total clock cycles in the measurement window
    - Blit Engine IBO usage time %
    - Blit Engine LBO usage time %

    For LBO
    - Time % that all fetches were active (max throughput)
    - Time % that was spent actively waiting for a resource (useful to see how good or bad is reading from slow flash, for example)
    - Time % that was spent operating with one or only two fetches active

    Throughput (calculated by already considering that one increment of clock_counter is 16 clock ticks)
    - IBO % pixel per clock
    - LBO % pixel per clock for each of the following :Source, RGBA, Alpha, Destination

    Processed pixels
    - IBO % total amount of processed pixels during the measurement window
    - LBO % total amount of processed pixels during the measurement window for each of LBO Source, LBO Destination

    All values are calculated from the performance/utilization counter's raw values.


   \param inputValues Pointer to an utilization counter variable where to perform the read

*/
CYGFX_ERROR utReadUCount (CYGFX_BE_U_COUNT_S *inputValues);

/**
    Blit 9 slice button according https://en.wikipedia.org/wiki/9-slice_scaling

    \param ctx  Context object
    \param x    Destination x coordinate
    \param y    Destination y coordinate
    \param w    Destination width
    \param h    Destination height
    \param surf Surface to be blitted
    \param x1   x position of the first split
    \param y1   y position of the first split
    \param x2   x position of the second split
    \param y2   y position of the second split
    \param transparence Overall transparency
*/
CYGFX_ERROR utBe9SliceScaling(CYGFX_BE_CONTEXT ctx, CYGFX_FLOAT x, CYGFX_FLOAT y, CYGFX_U32 w, CYGFX_U32 h,
    CYGFX_SURFACE surf, CYGFX_U32 x1, CYGFX_U32 y1, CYGFX_U32 x2, CYGFX_U32 y2, CYGFX_U08 transparence);



/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_BLIT_H */
