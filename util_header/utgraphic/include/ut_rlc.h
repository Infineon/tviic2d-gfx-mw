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


