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
 * \file    gccgfx_histo.h
 */


#ifndef GCCGFX_HISTO_H
#define GCCGFX_HISTO_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_histo
* \brief      VIDEOSS Histogram interface
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* N/A */

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
    Initialize the Histogram unit.

    \param [in] unit  Indentify unit

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwHistoInit(GCCGFX_HISTO_TYPE_E unit);

/**
    De-initialize the Histogram unit.

    \param [in] unit  Indentify unit

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwHistoDeInit(GCCGFX_HISTO_TYPE_E unit);

/**
    The histogram related setting modification will not be active immediately.
    The ::GccGfx_HwHistoCommit() submits these settings for processing.

    \param [in] unit  Indentify unit
    \param [in,out] pHistoData  pointer of histogram settings.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwHistoCommit(GCCGFX_HISTO_TYPE_E unit, GCCGFX_HISTO_DATA_S* pHistoData);

/**
    Reset histogram structure data.

    \param [in,out] attr  Pointer of histogram settings.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwHistoReset(GCCGFX_HISTO_DATA_S* attr);

/**
    Write the specified data to the internal structure.
    More details see CyGfx_CmHistoClip().

    \param [in,out] attr  Pointer of histogram settings.
    \param [in] x  Top left x coordinate of the clip window
    \param [in] y  Top left y coordinate of the clip window
    \param [in] w  Width of the clip window
    \param [in] h  Height of the clip window

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwHistoSetClip(GCCGFX_HISTO_DATA_S* attr,
                                        CYGFX_U32            x,
                                        CYGFX_U32            y,
                                        CYGFX_U32            w,
                                        CYGFX_U32            h);

/**
    Write the specified data to the internal structure.
    More details see ::CyGfx_CmHistoColorFormat().

    \param [in,out] attr  Pointer of histogram settings.
    \param [in] eColIn  Input color format
    \param [in] eColMeasure  Measurement color format

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwHistoSetColorFormat(GCCGFX_HISTO_DATA_S*   attr,
                                               CYGFX_CM_HISTO_CONV    eColIn,
                                               CYGFX_CM_HISTO_MEASURE eColMeasure);

/**
    Write the specified data to the internal structure.
    More details see CyGfx_CmHistoMode().

    \param [in,out] attr  Pointer of histogram settings.
    \param [in] eMode  Operation mode that controls the start of frame measurement

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwHistoSetMode(GCCGFX_HISTO_DATA_S* attr,
                                        CYGFX_CM_HISTO_MODE  eMode);

/**
    Select input source.

    \param [in,out] attr  Pointer of histogram settings.
    \param [in] source  Input source of measurement.
**/
CYGFX_EXTERN void GccGfx_HwHistoSelectSource(GCCGFX_HISTO_DATA_S*  attr,
                                             CYGFX_CM_HISTO_SOURCE source);
/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_HISTO_H */

