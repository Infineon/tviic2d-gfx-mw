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
    \file        ut_compression.h
    \brief       This file defines a helper function that can be used to compress
                 a surface.
*/

#ifndef UT_COMPRESSION_H
#define UT_COMPRESSION_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_compression Utilities for compression
    This group contains sample helper functions for surface compression.
    It shows how the surface parameters must be used with the \ref ut_rla and
    \ref ut_rlc utilities.
\{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/**
    Compresses a surface buffer.
    \note This function shows how images can be compressed to reduce memory
          usage. Compressed images can be used as source surfaces for blit and
          display operations. A real application will probably not use this function,
          but only load and use such compressed buffers created offline.
          Moreover, this function may fail for large images because
          the system memory is not sufficient.
    \param[in,out] surf Surface object describing an uncompressed image buffer.
          If the compression was successful, the surface object describes the new
          compressed buffer.
    \param[in] mode Requested compression mode
    \retval     ::CYGFX_OK on success
    \retval     ::CYGFX_ERR if the requested compression is not possible or the related driver error code
*/
/*****************************************************************************/
CYGFX_ERROR utSurfCompress(CYGFX_SURFACE surf, CYGFX_SM_COMP mode);


/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_COMPRESSION_H */
