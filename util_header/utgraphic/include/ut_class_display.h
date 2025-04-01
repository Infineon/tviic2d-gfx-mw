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
    \file        ut_class_display.h
    \brief       This class abstracts the display initialization.
*/

#pragma once

#include "cygfx_display.h"
#include "cygfx_driver_api.h"
#include "sm_util.h"
#include "ut_disp.h"

//#if (defined (CY_USE_PSVP) && !CY_USE_PSVP)

//#include "fpdlink\cy_fpdlink.h"

//#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_classes
\{ */

/** \addtogroup CDisplay CDisplay
    The CDisplay class abstracts a CYGFX_DISP object and adds some helper functions.
\{ */

/** Class CDisplay (see \ref CDisplay) */
class CDisplay
{
public:
    CDisplay() : m_display(0), m_bOpened(CYGFX_FALSE) { }
    ~CDisplay() { Close(); }
    /** Opens / initializes the VIDEOSS display controller and enables the corresponding fpdlink.
        \param[in] nWidth Number of horizontal pixels
        \param[in] nHeight Number of vertical pixels
        \param[in] display ID of the display controller
        \param[in] displayMode Display mode (see ::CYGFX_DISP_MODE)
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    CYGFX_ERROR Open(CYGFX_U32 nWidth = 0, CYGFX_U32 nHeight = 0, CYGFX_DISP_CONTROLLER display = CYGFX_DISP_CONTROLLER_0, CYGFX_DISP_MODE displayMode = CYGFX_DISP_MODE_SINGLE_SCREEN)
    {
        CYGFX_ERROR ret = CYGFX_OK;

        CYGFX_DISP_PROPERTIES_S mode = CYGFX_DISP_PROPERTIES_INITIALIZER;

        m_mode = mode;
        m_mode.outputController = display;
        m_mode.displayMode = displayMode;

        UTIL_SUCCESS(ret, utDispGetTiming(nWidth, nHeight, &m_mode.timing));

        UTIL_SUCCESS(ret, CyGfx_DispOpenDisplay(&m_mode, &m_display, NULL));

        if (m_mode.countTconProps > 0 && m_mode.pTconProps != NULL)
        {
            UTIL_SUCCESS(ret, m_enableFpdLink());
        }

        if (ret == CYGFX_OK)
        {
            m_bOpened = CYGFX_TRUE;
        }

        return ret;
    }

    /** Opens / initializes the VIDEOSS display controller.
        \param[in] mode ::CYGFX_DISP_PROPERTIES_S structure describing the desired resolution and display timings
        \retval ::CYGFX_OK on success; the related error code or ::CYGFX_ERR otherwise.
    */
    CYGFX_ERROR Open(const CYGFX_DISP_PROPERTIES_S *mode)
    {
        CYGFX_ERROR ret = CYGFX_OK;

        if (mode == NULL)
        {
            return CYGFX_ERR;
        }

        m_mode = *mode;

        UTIL_SUCCESS(ret, CyGfx_DispOpenDisplay(&m_mode, &m_display, 0));

        if (m_mode.countTconProps > 0 && m_mode.pTconProps != NULL)
        {
            UTIL_SUCCESS(ret, m_enableFpdLink());
        }

        if (ret == CYGFX_OK)
        {
            m_bOpened = CYGFX_TRUE;
        }
        return ret;
    }
    /** Closes the display controller.
        \retval ::CYGFX_OK on success; the related error code or ::CYGFX_ERR otherwise.
    */
    CYGFX_ERROR Close()
    {
        if (m_bOpened)
        {
            CYGFX_ERROR ret = CyGfx_DispCloseDisplay(m_display);
            m_bOpened = CYGFX_FALSE;
            m_display = 0;
            return ret;
        }
        return CYGFX_OK;
    }
    /** Returns the frame rate per second of the opened display timing.
        \retval CYGFX_FLOAT Frame rate per second
    */
    CYGFX_FLOAT GetFPS(){return (m_mode.timing.pixelClock * 1000000.0f) / (m_mode.timing.Htot * m_mode.timing.Vtot);}
    /** Returns the frame timing structure for thins panel.
       \retval Timing structure
   **/
    CYGFX_DISP_TIMING_S* GetTiming() { return &m_mode.timing; }
    /** Switches the gamma apply function ON or OFF.
        \param[in] bEnable Defines the requested state (OFF is default)
        \param[in] bCommit If ::CYGFX_TRUE, the display commit will be called
        \retval ::CYGFX_OK on success; the related error code or ::CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR UseLinearLight(CYGFX_BOOL bEnable, CYGFX_BOOL bCommit = CYGFX_FALSE)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (m_display == NULL) return CYGFX_OK;
        UTIL_SUCCESS(ret, CyGfx_DispSetAttribute(m_display, CYGFX_DISP_ATTR_GAMMA, (bEnable==CYGFX_TRUE)?CYGFX_DISP_GAMMA_ADD:CYGFX_DISP_GAMMA_NEUTRAL));
        if (bCommit){UTIL_SUCCESS(ret, CyGfx_DispCommit(m_display));}
        return ret;
    }
    /** Changes the background color and applies the changes with commit.
        \param[in] color See #CYGFX_DISP_ATTR_BACKGROUND_COLOR
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR SetBgColor(CYGFX_U32 color)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (m_display == NULL) return CYGFX_OK;
        UTIL_SUCCESS(ret, CyGfx_DispSetAttribute(m_display, CYGFX_DISP_ATTR_BACKGROUND_COLOR, color));
        UTIL_SUCCESS(ret, CyGfx_DispCommit(m_display));
        return ret;
    }

    /** \retval Returns if the panel is currently opened **/
    CYGFX_BOOL IsOpen() { return m_bOpened; }
    /** \retval CYGFX_U32 Returns the width of the panel */
    CYGFX_U32 GetWidth(){return m_mode.timing.Hact;}
    /** \retval CYGFX_U32 Returns the height of the panel */
    CYGFX_U32 GetHeight(){return m_mode.timing.Vact;}
    /** \retval CYGFX_DISP_CONTROLLER Returns the Display Controller ID used */
    CYGFX_DISP_CONTROLLER GetDisplayController(){return m_mode.outputController;}
    /** \retval CYGFX_DISP Returns the ::CYGFX_DISP object used */
    CYGFX_DISP GetHandle(){return m_display;}
    /** \retval CYGFX_DISP Returns the ::CYGFX_DISP object used */
    operator CYGFX_DISP() {return m_display;}
private:
    CYGFX_DISP_PROPERTIES_S m_mode;
    CYGFX_DISP m_display;
    CYGFX_BOOL m_bOpened;

    /** Enables FPD-Link based on the active display.
        \retval ::CYGFX_OK on success; ::CYGFX_ERR otherwise
    */
    CYGFX_ERROR m_enableFpdLink(void)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        CYGFX_U32 pllClock;
        CYGFX_U08   divider;
        utDispRestorePllData(m_mode.outputController, &pllClock, &divider);

        if (m_display == NULL)
        {
            return CYGFX_ERR;
        }

        UTIL_SUCCESS(ret, utDispSetFpdLink(m_mode.outputController, m_mode.displayMode, divider));
        return ret;
    }

};


/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
