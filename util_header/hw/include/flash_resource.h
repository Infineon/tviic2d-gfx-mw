/*******************************************************************************
* (c) 2019-2023, Cypress Semiconductor Corporation (an Infineon company) or an *
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
    \file        flash_resource.h
    \brief       Linker section definition for resource data.
                 Include this file before the definition of a bitmap.
*/

#ifndef FLASH_RESOURCE_H
#define FLASH_RESOURCE_H

/** \addtogroup user_doc_utils */
/** \{ */

#if defined ( __ghs__ )
    /** Include this file before the definition of a bitmap to make sure that the bitmap
        data resides in cygfx_res_section so that it can be placed into the flash memory. */
    #pragma ghs section rodata=".cygfx_res_section"
#elif defined ( __ICCARM__ )
    #pragma section=".cygfx_res_section"
#elif defined (__GNUC__)
    /* GCC does not support pragma section to my knowledge, only __attribute__ syntax.
    * For this reason we will ignore the pragma for GCC because it will automatically be put
    * somewhere in the .text segment, which should be fine for most use-cases.
    */
#else
    #error "Unsupported compiler"
#endif


/** \} */

#endif /* FLASH_RESOURCE_H */
