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
 * \file    gccgfx_clut.h
 */


#ifndef GCCGFX_CLUT_H
#define GCCGFX_CLUT_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_clut
* \brief      VIDEOSS Color Lookup Table interface
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Reset CLUT structure

    \param [in,out] clut  Pointer to CLUT structure

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwResetClut( GCCGFX_IRIS_CLUT_S* clut);

/**
    Program CLUT data

    \param [in] cardHandle  Handle for the write operation
    \param [in] count  Number of values to write
    \param [in] pCLUTR  Pointer to the CLUT red component to write
    \param [in] pCLUTG  Pointer to the CLUT green component to write
    \param [in] pCLUTB  Pointer to the CLUT blue component to write

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwProgramClut( const GCCGFX_CARD_HANDLE cardHandle,
                                        CYGFX_U32                count,
                                        const CYGFX_S16*         pCLUTR,
                                        const CYGFX_S16*         pCLUTG,
                                        const CYGFX_S16*         pCLUTB);


/** \} end addtogroup */
#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_CLUT_H */

