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
 * \file    gccgfx_kinterrupt.h
 */


#ifndef GCCGFX_KINTERRUPT_H
#define GCCGFX_KINTERRUPT_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_kinterrupt
* \brief      API Interface of InterruptK
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
    Initializes the interrupt component.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kInterruptInit(void);

/**
    De-initialize the interrupt component.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kInterruptDeInit(void);

/**
    Triggers/presets the GFXINT_VIDEOIO_INTR0_BIT_GENERALPURPOSE1 interrupt for the CPU.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kInterruptTriggerDebugCap2Win(void);

/**
    Triggers/presets the GFXINT_VIDEOIO_INTR0_BIT_GENERALPURPOSE0 interrupt for the
    CPU.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kInterruptTriggerGeneralPurpose0(void);


/**
    Triggers/presets the GFXINT_VIDEOIO_INTR0_BIT_GENERALPURPOSE0 interrupt for the
    CPU.
    Polling until the interrupt handler of GP0 is called.
    This function is not allowed to be called on interrupt level.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kInterruptTriggerAndPollGeneralPurpose0(void);

/**
    Triggers/presets the specified interrupt for the CmdSeq.

    \param [in] bit  id of the interrupt to trigger.

    \retval None
**/
CYGFX_EXTERN void GccGfx_kInterruptTriggerCmdSeq( CYGFX_U32 bit);



/**
    Get the synchronization flag for GP interrupt wait.

    \retval CYGFX_BOOL
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_kInterruptGetWaitForGP0(void);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_KINTERRUPT_H */

