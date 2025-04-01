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
/******************************************************************************/

/*!
 * \version     3.00
 * \date        Mon Jul 05 13:05:16 2021
 * \file        gfxreg_matrix_register.h
 *              This file was generated automatically by agentx 1.00.5.
 *                Design:   matrix
 *                Source:   structuredef.xml
 *                Template: structure_h.tpl
 * \brief      Iris matrix register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_MATRIX_STRUCTUR_H
#define GFXREG_MATRIX_STRUCTUR_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* matrix registers */
/******************************************************************************/

/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */




typedef struct {
    /** Color Matrix control register */
    un_gfxreg_matrix_control_t un_control; /*! Color Matrix control register */
    /** Matrix values for calculation of the red output value. */
    un_gfxreg_matrix_red0_t un_red0; /*! Matrix values for calculation of the red output value. */
    /** Matrix values for calculation of the red output value. */
    un_gfxreg_matrix_red1_t un_red1; /*! Matrix values for calculation of the red output value. */
    /** Matrix values for calculation of the green output value. */
    un_gfxreg_matrix_green0_t un_green0; /*! Matrix values for calculation of the green output value. */
    /** Matrix values for calculation of the green output value. */
    un_gfxreg_matrix_green1_t un_green1; /*! Matrix values for calculation of the green output value. */
    /** Matrix values for calculation of the blue output value. */
    un_gfxreg_matrix_blue0_t un_blue0; /*! Matrix values for calculation of the blue output value. */
    /** Matrix values for calculation of the blue output value. */
    un_gfxreg_matrix_blue1_t un_blue1; /*! Matrix values for calculation of the blue output value. */
    /** Matrix values for calculation of the alpha output value. */
    un_gfxreg_matrix_alpha0_t un_alpha0; /*! Matrix values for calculation of the alpha output value. */
    /** Matrix values for calculation of the alpha output value. */
    un_gfxreg_matrix_alpha1_t un_alpha1; /*! Matrix values for calculation of the alpha output value. */
    /** Offset vectors for red and green output. */
    un_gfxreg_matrix_offsetvector0_t un_offsetvector0; /*! Offset vectors for red and green output. */
    /** Offset vectors for blue and alpha output. */
    un_gfxreg_matrix_offsetvector1_t un_offsetvector1; /*! Offset vectors for blue and alpha output. */
} stc_gfxreg_color_matrix_t;




/*! \endcond Hide for doxygen */

#endif /* GFXREG_MATRIX_STRUCTUR_H */
