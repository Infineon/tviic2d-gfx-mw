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
