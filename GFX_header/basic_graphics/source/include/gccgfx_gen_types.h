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
 * \file    gccgfx_gen_types.h
 */


#ifndef GCCGFX_GEN_TYPES_H
#define GCCGFX_GEN_TYPES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */

#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    Enum for all supported histogram units.
**/
typedef enum
{
    GCCGFX_HISTO_TYPE_CAP0  =  0, /**< Histo unit connected with the capture module */
    GCCGFX_HISTO_TYPE_DISP0  = 1, /**< Histo unit connected with display 0 */
    GCCGFX_HISTO_TYPE_DISP1  = 2  /**< Histo unit connected with display 1 */
} GCCGFX_HISTO_TYPE_E;

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_GEN_TYPES_H */

