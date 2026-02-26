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
