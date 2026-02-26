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
    \file        ut_rlc.h
    \brief       This sample code can be used to create a run-length encoded buffer.
*/

#ifndef UT_RLE_H
#define UT_RLE_H
#ifdef __cplusplus
extern "C"
{
#endif

/*******************************************************************************
 Includes
*******************************************************************************/

/* N/A */

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_compression Utilities for compression
\{ */

/** \addtogroup ut_rlc Utilities for RLC (Run Length Compression)
    This group defines functions to create RLC streams.
    \note The header and source code for these functions are included in the utility
          block delivered with the driver although it is not recommended to compress an image
          with the CPU on the target system. However, if required, this part can be used to create
          compression utilities for different platforms.
\{ */
/*******************************************************************************
 Function definitions
*******************************************************************************/

/**
    Encodes the pixel data into an RLD bit stream.
    \param[in]     pixeldata    Pixel data
    \param[in]     unWidth      Width of the image
    \param[in]     unHeight     Height of the image
    \param[in]     strideBytes  Number of bytes required for one line
    \param[in]     x_offs       x offset of the image. (x pixels on the left will be ignored.
                                Note: The width represented in that case is the width used for encoding.)
    \param[in]     dataBpp      Bits per pixel (1, 2, 4, 8, 16, 24, 32)
    \param[out]    rld          RLD bit stream. Can be NULL. In this case, only the return value (number of RLD words) is calculated.
    \param[in]     rldCount     Maximum number of RLD words

    \retval        CYGFX_U32    Required number of RLD words. This number may be larger than rldCount, in which
                                case only rldCount words are actually written.

    \note          The RLD bit stream is filled up with zero bits at the
                   end for alignment with word boundaries. RLD will
                   ignore the fill bits because the expected data size is
                   provided as a parameter for decoding.
*/
CYGFX_U32 utRldEncode(CYGFX_U32* pixeldata, CYGFX_U32 unWidth, CYGFX_U32 unHeight,
                   CYGFX_U32 strideBytes, CYGFX_U32 x_offs, CYGFX_U32 dataBpp,
                   CYGFX_U32* rld, CYGFX_U32 rldCount);


/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_RLE_H */


