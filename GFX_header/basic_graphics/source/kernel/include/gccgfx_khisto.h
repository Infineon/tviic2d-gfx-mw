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
 * \file    gccgfx_khisto.h
 */


#ifndef GCCGFX_KHISTO_H
#define GCCGFX_KHISTO_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_kcap
* \brief Interface of HistoK
* Histogram unit interface in kernel space
* \code #include "gccgfx_khisto.h" \endcode
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

#define GCCGFX_KHISTO_NUMBER_ACTIVE_BINS 64u  /**< Number of bins for histogram measurement (HW constant) */

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
    This function resets all the HistoK units.
    \retval None
**/
CYGFX_EXTERN void GccGfx_kHistoResetAll(void);

/**
    This function resets the HistoK internal variables.

    \param [in] unit  Histo unit. Must be one of GCCGFX_HISTO_TYPE_E.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kHistoReset(GCCGFX_HISTO_TYPE_E unit);
/**
    This function accepts the all Histo unit changes.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kHistoIsrAcceptChanges(void);

/**
    Write the configuration data from the shadow-structure to the histogram
    registers and read the values from the histogram unit and store them in an
    internal static structure.

    \param [in] unit  Histo unit. Must be one of GCCGFX_HISTO_TYPE_E.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kHistoIsrEndOfFrame(GCCGFX_HISTO_TYPE_E unit);


/**
    This function allows the update of Histo unit.

    \param [in] unit  Histo unit. Must be one of GCCGFX_HISTO_TYPE_E.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kHistoIsrAllowUpdate(GCCGFX_HISTO_TYPE_E unit);

/**
    Write data to the shadow-structure.

    \param [in] unit  Histo unit. Must be one of GCCGFX_HISTO_TYPE_E.
    \param [in] Control  control register
    \param [in] ClipWinUpperLeft  ClipWinUpperLeft register
    \param [in] ClipWinSize  ClipWinSize register
    \param [in] ModeState  The mode that will be used
    \param [in] SelectSource  The input source that will be used

    \retval None
**/
CYGFX_EXTERN void GccGfx_kHistoWriteSettings( GCCGFX_HISTO_TYPE_E unit,
                                              CYGFX_U32 Control,
                                              CYGFX_U32 ClipWinUpperLeft,
                                              CYGFX_U32 ClipWinSize,
                                              CYGFX_CM_HISTO_MODE ModeState,
                                              CYGFX_U32 SelectSource);

/**
    Get the values from the static structure.

    \param [in] unit  Histo unit. Must be one of GCCGFX_HISTO_TYPE_E.
    \param [out] pComponent0  NULL or Pointer to an array to store the 64 values of
                              component0
    \param [out] pComponent1  NULL or Pointer to an array to store the 64 values of
                              component1
    \param [out] pComponent2  NULL or Pointer to an array to store the 64 values of
                              component2

    \retval ::CYGFX_OK On success. Otherwise the related error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_kHistoReadValues( GCCGFX_HISTO_TYPE_E unit,
                                                     CYGFX_U32* pComponent0,
                                                     CYGFX_U32* pComponent1,
                                                     CYGFX_U32* pComponent2);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_KHISTO_H */

