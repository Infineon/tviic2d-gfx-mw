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
    \file        ut_capringbuffer.h
                 Function to calculate the required ring buffer size for capture-to-window.
*/

#ifndef UT_CAPRINGBUFFER_H
#define UT_CAPRINGBUFFER_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_capringbuffer Utilities for capture-to-window

    The following code allocates a ring buffer in the VRAM that has 50% of
    the required uncompressed ring buffer size, which is just enough with
    maximum compression.
    \code
    CYGFX_ERROR SetupRingbuffer()
    {
        CYGFX_ADDR ringBufferPhys;
        //CYGFX_U32  compFactor = 75; // compression type 4:5:4
        //CYGFX_U32  compFactor = 63; // compression type 3:4:3
        CYGFX_U32  compFactor = 50; // compression type 2:3:2
        CYGFX_ERROR ret = CYGFX_OK;

        CYGFX_U32 ringBufferSize = CalculateRingbufferSize(
            CAP_WIDTH,
            CAP_HEIGHT,
            CAP_WIDTH_TOTAL,
            CAP_HEIGHT_TOTAL,
            (CYGFX_U32)(CAP_PCLK * 1000000.0f),
            DISP_WIDTH,
            DISP_HEIGHT,
            DISP_WIDTH_TOTAL,
            DISP_HEIGHT_TOTAL,
            (CYGFX_U32)(DISP_PCLK * 1000000.0f),
            CROP_WIDTH,
            CROP_HEIGHT,
            CROP_Y,
            WIN_WIDTH,
            WIN_HEIGHT,
            WIN_POSY,
            CYGFX_FALSE);

        ringBufferSize = ringBufferSize * (compFactor + 1) / 100;

        ringBufferVirt = utVideoAlloc(ringBufferSize, 64, &ringBufferPhys);
        ASSERT(ringBufferVirt != 0);
        ret = CyGfx_CapAssignCapToWinBuffer(capCtx, ringBufferPhys, ringBufferSize);
        return ret;
    }
    \endcode

\{ */

/*******************************************************************************
 Includes
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Macro Definitions
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Data Types
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Variables
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Function Definitions
*******************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Calculates the required ring buffer size.
    \param[in]  cap_width           Active width of a capture frame
    \param[in]  cap_height          Active height of a capture frame
    \param[in]  cap_totalwidth      Total width of a capture frame (including blanking)
    \param[in]  cap_totalheight     Total height of a capture frame (including blanking)
    \param[in]  cap_pclk            Capture pixel clock in Hz
    \param[in]  disp_width          Active width of a display frame
    \param[in]  disp_height         Active height of a display frame
    \param[in]  disp_totalwidth     Total width of a display frame (including blanking)
    \param[in]  disp_totalheight    Total height of a display frame (including blanking)
    \param[in]  disp_pclk           Display pixel clock in Hz
    \param[in]  crop_width          Width of the cropping area
    \param[in]  crop_height         Height of the cropping area
    \param[in]  crop_yoffset        Vertical position of the cropping area in the input frame
    \param[in]  win_width           Width of the window
    \param[in]  win_height          Height of the window
    \param[in]  win_yoffset         Vertical position of the window
    \param[in]  bYUV422             Use YUV422 format for ring buffer. This is possible only
                                    if the video format is YUV422 and no scaling is performed.
    \retval     CYGFX_U32           Minimum required ring buffer size without compression
*/
CYGFX_U32 CalculateRingbufferSize(
    CYGFX_U32 cap_width,
    CYGFX_U32 cap_height,
    CYGFX_U32 cap_totalwidth,
    CYGFX_U32 cap_totalheight,
    CYGFX_U32 cap_pclk,
    CYGFX_U32 disp_width,
    CYGFX_U32 disp_height,
    CYGFX_U32 disp_totalwidth,
    CYGFX_U32 disp_totalheight,
    CYGFX_U32 disp_pclk,
    CYGFX_U32 crop_width,
    CYGFX_U32 crop_height,
    CYGFX_U32 crop_yoffset,
    CYGFX_U32 win_width,
    CYGFX_U32 win_height,
    CYGFX_U32 win_yoffset,
    CYGFX_BOOL bYUV422);

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_CAPRINGBUFFER_H */
