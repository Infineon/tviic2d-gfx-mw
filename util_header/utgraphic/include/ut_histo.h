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
    \file        ut_histo.h
    \brief       This header declares some helper functions for the use of the histogram unit.
*/

#ifndef UT_HISTO_H
#define UT_HISTO_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_histo Utilities for the histogram unit
\{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#include "math.h"

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

/*****************************************************************************/
/**
    Use the histogram results of a frame measurement to calculate a CLUT.
    The CLUT is directly calculated from the measurement data.

    \note This is useful only for the histogram measurement of RGB (CYGFX_CM_HISTO_MEASURE_NO_CONV).

    \param[in] pComp0    Pointer to an array of 64 bin values of component0, which means the red value
                         (result of a call of ::CyGfx_CmHistoReadValues)
    \param[in] pComp1    Pointer to an array of 64 bin values of component1 which means the green value
                         (result of a call of ::CyGfx_CmHistoReadValues)
    \param[in] pComp2    Pointer to an array of 64 bin values of component2 which means the blue value
                         (result of a call of ::CyGfx_CmHistoReadValues)
    \param[out] pClutR   Pointer to an array of 33 values to store the CLUT for Red
    \param[out] pClutG   Pointer to an array of 33 values to store the CLUT for Green
    \param[out] pClutB   Pointer to an array of 33 values to store the CLUT for Blue

    \retval              ::CYGFX_OK on success; the related error code otherwise.
*/
/*****************************************************************************/
extern CYGFX_ERROR utHisto2Clut(CYGFX_U32 *pComp0, CYGFX_U32 *pComp1, CYGFX_U32 *pComp2, CYGFX_S16 *pClutR, CYGFX_S16 *pClutG, CYGFX_S16 *pClutB);


/*****************************************************************************/
/**
    Creates a CLUT that is defined by the start point (0,0), the end point (32,1023), and two more points.
    Remember that the CLUT is an array of 33 values (0...32) with 10 bits (0...1023).
    These two points must be defined by the index number and the respective CLUT value. All other values
    of the CLUT are linearly interpolated between these four points
    (resulting in three linear sections of the CLUT with two bends at the specified points).

    \note This is useful only for the histogram measurement of RGB (CYGFX_CM_HISTO_MEASURE_NO_CONV).

    \param[in] lowBend   Index of the CLUT for the first bend (1...30)
    \param[in] lowClut   CLUT value at this index (0...1022)
    \param[in] highBend  Index of the CLUT for the second bend (2...31, lowBend < highBend)
    \param[in] highClut  CLUT value at this index (1...1023, lowClut < highClut)
    \param[out] pClutR   Pointer to an array of 33 values to store the CLUT for Red
    \param[out] pClutG   Pointer to an array of 33 values to store the CLUT for Green
    \param[out] pClutB   Pointer to an array of 33 values to store the CLUT for Blue

    \retval              ::CYGFX_OK on success; the related error code otherwise.
*/
/*****************************************************************************/
extern CYGFX_ERROR utHisto2BendsClut(CYGFX_U32 lowBend, CYGFX_U16 lowClut, CYGFX_U32 highBend, CYGFX_U16 highClut, CYGFX_S16 *pClutR, CYGFX_S16 *pClutG, CYGFX_S16 *pClutB);


/*****************************************************************************/
/**
    Uses the histogram results of a frame measurement to calculate a CLUT.
    The CLUT is calculated using the data and a cumulative Gauss distribution
    (the idea behind this is that every "picture" shows a Gauss-distribution of the grey values).

    \note This is useful only for a histogram measurement of RGB (CYGFX_CM_HISTO_MEASURE_NO_CONV).

    \param[in] pComp0    Pointer to an array of 64 bin values of component0 which means the red value
                         (result of a call of ::CyGfx_CmHistoReadValues)
    \param[in] pComp1    Pointer to an array of 64 bin values of component1 which means the green value
                         (result of a call of ::CyGfx_CmHistoReadValues)
    \param[in] pComp2    Pointer to an array of 64 bin values of component2 which means the blue value
                         (result of a call of ::CyGfx_CmHistoReadValues)
    \param[out] pClutR   Pointer to an array of 33 values to store the CLUT for Red
    \param[out] pClutG   Pointer to an array of 33 values to store the CLUT for Green
    \param[out] pClutB   Pointer to an array of 33 values to store the CLUT for Blue

    \retval              ::CYGFX_OK on success; the related error code otherwise.
*/
/*****************************************************************************/
extern CYGFX_ERROR utHistoGaussClut(CYGFX_U32 *pComp0, CYGFX_U32 *pComp1, CYGFX_U32 *pComp2, CYGFX_S16 *pClutR, CYGFX_S16 *pClutG, CYGFX_S16 *pClutB);


/*****************************************************************************/
/**
    Creates a CLUT that is defined by the start point (0,0), the end point (32,1023),
    and a gamma curve between these points.
    Remember that the CLUT is an array of 33 values (0...32) with 10 bits (0...1023).


    \param[in] gammaValue Gamma value (0.1 ... 10.0)
    \param[out] pClutR    Pointer to an array of 33 values to store the CLUT for Red
    \param[out] pClutG    Pointer to an array of 33 values to store the CLUT for Green
    \param[out] pClutB    Pointer to an array of 33 values to store the CLUT for Blue

    \retval               ::CYGFX_OK on success; the related error code otherwise.
*/
/*****************************************************************************/
extern CYGFX_ERROR utGammaClut(CYGFX_FLOAT gammaValue, CYGFX_S16 *pClutR, CYGFX_S16 *pClutG, CYGFX_S16 *pClutB);

/*****************************************************************************/
/**
    Creates a CLUT that is defined by the start point (0,0), the end point (32,1023),
    one point in between, and two gamma curves between these points.
    Remember that the CLUT is an array of 33 values (0...32) with 10 bits (0...1023).


    \param[in] x          Index of the CLUT for the middle fix point (1...31)
    \param[in] y          CLUT value at this index (1...1022)
    \param[in] gammaValue Gamma value (0.1 ... 10.0)
    \param[out] pClutR    Pointer to an array of 33 values to store the CLUT for Red
    \param[out] pClutG    Pointer to an array of 33 values to store the CLUT for Green
    \param[out] pClutB    Pointer to an array of 33 values to store the CLUT for Blue

    \retval               ::CYGFX_OK on success; the related error code otherwise.
*/
/*****************************************************************************/
extern CYGFX_ERROR ut2GammaClut(CYGFX_U32 x, CYGFX_U32 y, CYGFX_FLOAT gammaValue, CYGFX_S16 *pClutR, CYGFX_S16 *pClutG, CYGFX_S16 *pClutB);


/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_HISTO_H */
