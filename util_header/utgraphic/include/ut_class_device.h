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
    \file        ut_class_device.h
    \brief       This class abstracts the device initialization.
*/

#pragma once

#include "cygfx_driver_api.h"
#include "ut_memman.h"
#include "ut_printf.h"
#include "ut_config.h"
#include "ut_disp.h"
#include "ut_disp_panels.h"


/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_classes Util class collection
    The util class collection defines some classes to abstract the low-level driver functionality.
    All these classes are defined as header files only.
\{ */


/** \addtogroup CDevice CDevice
    The class ::CDevice is responsible for initializing the Graphics Driver and the util part in the ::CDevice.Open()
    function; it also allocates and assigns the command sequencer fifo.
    This ::CDevice.Open() function must be called before using any other util class functions;
    the application must also ensure that the ::CDevice.Close() is called as the last
    instruction of an application. Only one object of the ::CDevice class is allowed in a program.
\{ */

/** Class CDevice */
class CDevice
{
public:
    /** Class CDevice constructor */
    CDevice():m_bOpened(CYGFX_FALSE)
    {
        for (CYGFX_U08 i = 0U; i < m_BE_CNT_TASKS; i++)
        {
            m_pCmdSeqBuffer[i] = 0;
            m_uCmdSeqSize[i] = 0;
        }
    }
    /** Class CDevice destructor */
    ~CDevice(){Close();}

    /** Opens the device using custom pixel clock configuration. It also stores the pixel clock and clock dividers
        to enable FPD-Link after open display.

        \param[in] pixelClock0  Pixel clock of display 0 in units of MHz
        \param[in] pixelClock1  Pixel clock of display 1 in units of MHz
        \param[in] displayMode  Display Mode (see ::CYGFX_DISP_MODE)
        \retval ::CYGFX_OK on success; the related error code or ::CYGFX_ERR otherwise.

    */
    CYGFX_ERROR OpenDevice(CYGFX_FLOAT pixelClock0 = s_panel_XXX_800_480.timing.pixelClock,
                           CYGFX_FLOAT pixelClock1 = s_panel_XXX_800_480.timing.pixelClock,
                           CYGFX_U08 displayMode = CYGFX_DISP_MODE_SINGLE_SCREEN)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        CYGFX_SYSINIT_INFO_S InitInfo = CYGFX_SYS_INIT_INITIALIZER;
        CYGFX_U08   clockDivider[2];

        if (m_bOpened == CYGFX_TRUE)
            return ret;

        if (pixelClock0 > 0.0f)
        {
            UTIL_SUCCESS(ret, utDispGetPll(pixelClock0, displayMode, &clockDivider[0], &InitInfo.PllDsp0));
            UTIL_SUCCESS(ret, utDispEnablePll(InitInfo.PllDsp0, CYGFX_DISP_CONTROLLER_0));
            utDispStorePllData(CYGFX_DISP_CONTROLLER_0, InitInfo.PllDsp0, clockDivider[0]);
        }

        if (pixelClock1 > 0.0f)
        {
            UTIL_SUCCESS(ret, utDispGetPll(pixelClock1, displayMode, &clockDivider[1], &InitInfo.PllDsp1));
            UTIL_SUCCESS(ret, utDispEnablePll(InitInfo.PllDsp1, CYGFX_DISP_CONTROLLER_1));
            utDispStorePllData(CYGFX_DISP_CONTROLLER_1, InitInfo.PllDsp1, clockDivider[1]);
        }

        UTIL_SUCCESS(ret,  CyGfx_ErpSetPrintf(erp_printf));

#if (defined (DEBUG) || defined (RELEASE) || defined (FPGA))
        printf("Active PLL0: %lu\n", InitInfo.PllDsp0);
        printf("Active PLL1: %lu\n", InitInfo.PllDsp1);
#endif

        UTIL_SUCCESS(ret, CyGfx_SysInitializeDriver(&InitInfo));

        if (ret != CYGFX_OK) return ret;

        UTIL_SUCCESS(ret, utMmanReset() );

        if (ret == CYGFX_OK)
            m_bOpened = CYGFX_TRUE;

        return ret;
    }
    /** Closes the device (will be called from the destructor)
        \retval ::CYGFX_OK on success; the related error code or ::CYGFX_ERR otherwise.
    */
    CYGFX_ERROR Close()
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (!m_bOpened) return CYGFX_TRUE;

        for (CYGFX_U08 i = 0; i < m_BE_CNT_TASKS; i++)
        {
            if (m_pCmdSeqBuffer[i] != NULL)
            {
                utVideoFree(m_pCmdSeqBuffer[i]);
                m_pCmdSeqBuffer[i] = NULL;
            }
            m_uCmdSeqSize[i] = 0;
        }
        UTIL_SUCCESS(ret, CyGfx_SysDeInitializeDriver());
        m_bOpened = CYGFX_FALSE;
        return ret;
    }

    /** Can be used to check the status of the device
        \retval CYGFX_BOOL ::CYGFX_TRUE if Open was successfully called; ::CYGFX_FALSE otherwise.
    */
    CYGFX_BOOL IsOpen(){return m_bOpened;}

    /** Can be used to check the status of the device and CmdSeq to the task
        \retval CYGFX_BOOL ::CYGFX_TRUE if open was successfully called; ::CYGFX_FALSE otherwise.
    */
    CYGFX_BOOL IsTaskOpen(CYGFX_BE_TASK task)
    {
        if (task >= m_BE_CNT_TASKS)
        {
            return CYGFX_FALSE;
        }
        return m_bOpened && (m_uCmdSeqSize[task] != 0);
    }

    /** Initializes CmdSeq for a given task
        \param[in] task Defines task
        \param[in] uCmdSeqSize Defines the size that will be allocated for the command sequencer
        \param[in] Cops Defines the cops for this task
        \retval ::CYGFX_OK on success; the related error code or ::CYGFX_ERR otherwise.
    */
    CYGFX_ERROR OpenTask(CYGFX_BE_TASK task, CYGFX_U32 uCmdSeqSize = 64*1024, CYGFX_U32 Cops = 16)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (task >= m_BE_CNT_TASKS)
            return CYGFX_ERR;

        ret = CyGfx_BeSetTaskCopses(task, Cops);
        if (ret != CYGFX_OK) return CYGFX_ERR;

        if (uCmdSeqSize != 0u)
        {
            m_pCmdSeqBuffer[task] = utVideoAlloc( uCmdSeqSize, 32, 0 );
            if (m_pCmdSeqBuffer[task] == NULL)
            {
#if (defined (DEBUG) || defined (RELEASE) || defined (FPGA))
                printf("Failed to allocate %ld bytes for task %ld!\n", uCmdSeqSize, task);
#endif
                return CYGFX_ERR;
            }
            m_uCmdSeqSize[task] = uCmdSeqSize;
            UTIL_SUCCESS(ret, CyGfx_BeSetTaskInstructionBuffer(task, m_pCmdSeqBuffer[task], m_uCmdSeqSize[task]));
        }
        return ret;
    }

    /** Opens the device and initializes CmdSeq for ::CYGFX_BE_TASK_MEM_PRIO_1.
        \param[in] uCmdSeqSize Defines the size that will be allocated for the command sequencer
        \retval ::CYGFX_OK on success; the related error code or ::CYGFX_ERR otherwise.
    */
    CYGFX_ERROR Open(CYGFX_U32 uCmdSeqSize = 64*1024)
    {
        CYGFX_ERROR ret = CYGFX_OK;

        if (!IsOpen())
            ret = OpenDevice();
        if (ret != CYGFX_OK) return CYGFX_ERR;

        return OpenTask(CYGFX_BE_TASK_MEM_PRIO_1, uCmdSeqSize);
    }

private:
    CYGFX_BOOL m_bOpened;
    static const CYGFX_U32 m_BE_CNT_TASKS = 7U;
    void *m_pCmdSeqBuffer[m_BE_CNT_TASKS];
    CYGFX_U32 m_uCmdSeqSize[m_BE_CNT_TASKS];
};

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
