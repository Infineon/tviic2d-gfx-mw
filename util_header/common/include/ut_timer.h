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
    \file        ut_timer.h
    \brief       This file defines timer-related helper functions.
*/

#ifndef UT_TIMER_H
#define UT_TIMER_H

#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_timer Timer functions
\{ */


typedef CYGFX_U64 UT_OS_SYSTIM;      /*!< The system operating time */

/*****************************************************************************/
/**
    Initializes the high-resolution timer.

    \retval      ::CYGFX_OK                        Normal termination
*/
/*****************************************************************************/
CYGFX_ERROR utOsInitTimer(void);

/*****************************************************************************/
/**
    Gets the system operating time with millisecond resolution. Use
    ::utOsDurationSec() to measure the elapsed time between two ::utOsGetTime()
    measurements.

    \param[out]  pSystim                         Pointer indicating the acquired
                                                 operating time [not NULL]

    \retval      ::CYGFX_OK                        Normal termination
*/
/*****************************************************************************/
CYGFX_ERROR utOsGetTime(UT_OS_SYSTIM *pSystim);

/*****************************************************************************/
/**
    Calculates the elapsed time in seconds between the time values specified in
    \a pStart and \a pStop. \a pStart and \a pStop must have been acquired using
    ::utOsGetTime().

    \param[in]   pStart                          Pointer indicating the start
                                                 time [not NULL]
    \param[in]   pStop                           Pointer indicating the stop
                                                 time [not NULL]

    \return                                      Elapsed time
*/
/*****************************************************************************/
CYGFX_FLOAT utOsDurationSec(UT_OS_SYSTIM *pStart,
                          UT_OS_SYSTIM *pStop);



/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* UT_TIMER_H */
