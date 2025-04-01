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
 * \file    gccgfx_gamma.h
 */


#ifndef GCCGFX_GAMMA_H
#define GCCGFX_GAMMA_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
 * \addtogroup gccgfx_gamma
 * \brief      VIDEOSS Gamma Correction Unit configuration interface
*/

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_HW_GAMMA_COR_DISENG0    ((CYGFX_U32)0u) /**< GammaCor unit of DisEng0 */
#define GCCGFX_HW_GAMMA_COR_DISENG1    ((CYGFX_U32)1u) /**< GammaCor unit of DisEng1 */
#define GCCGFX_HW_GAMMA_COR_2_DISENG0  ((CYGFX_U32)2u) /**< GammaCor2 unit of DisEng0 */
#define GCCGFX_HW_GAMMA_COR_2_DISENG1  ((CYGFX_U32)3u) /**< GammaCor2 unit of DisEng1 */
#define GCCGFX_HW_GAMMA_COR_4          ((CYGFX_U32)4u) /**< GammaCor4 unit */

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
    Program GammaCor control and CLUT data.

    \param [in] cardHandle  Handle for the write operation
    \param [in] id  The HW system id of the GammaCor (must be 0, 1 or 4)
    \param [in] count  Number of values to write (must be 0 or 33)
    \param [in] pCLUTR  Pointer to the CLUT red component to write
    \param [in] pCLUTG  Pointer to the CLUT green component to write
    \param [in] pCLUTB  Pointer to the CLUT blue component to write
    \param [in] flag  CLUT flag defines per pixel alpha usage. See
                      ::CYGFX_DISP_CLUT_ALPHA.

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwProgramGamma( const GCCGFX_CARD_HANDLE cardHandle,
                                         CYGFX_U32                id,
                                         CYGFX_U32                count,
                                         const CYGFX_S16*         pCLUTR,
                                         const CYGFX_S16*         pCLUTG,
                                         const CYGFX_S16*         pCLUTB,
                                         CYGFX_U08                flag);

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_GAMMA_H */

