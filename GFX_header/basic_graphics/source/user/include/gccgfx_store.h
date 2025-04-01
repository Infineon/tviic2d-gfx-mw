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
 * \file    gccgfx_store.h
 */


#ifndef GCCGFX_STORE_H
#define GCCGFX_STORE_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_store
* \brief      VIDEOSS Store interface(HwaStore)
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Set up a store unit with ring buffer functionality disabled.

    \param [in] cardHandle  Handle for the write operation
    \param [in] pSurf  Surface that describes the destination buffer for the store
                       unit.
    \param [in] storeId  ID of the store unit (::GCCGFX_GEN_SEL_STORE4 or
                         ::GCCGFX_GEN_SEL_STORE)
    \param [in] singleFrame  Enable single frame operation (only for storeId ::GCCGFX_GEN_SEL_STORE4)
    \param [in] StartX  X offset in the surface buffer
    \param [in] StartY  Y offset in the surface buffer
    \param [in] ulDitherControl  It is a bit combination of
                                 - ::GCCGFX_BE_DITHER_COLOR: Controls whether spatial dithering (value 1) or LSB
                                 truncation (value 0) is used when ComponentBitsRed/Green/Blue is smaller than
                                 10 bits.
                                 - ::GCCGFX_BE_DITHER_ALPHA: Controls whether spatial dithering (value 1) or LSB
                                 truncation (value 0) is used when ComponentBitsAlpha is smaller than 8 bits.
                                 - 4 bits with ::GCCGFX_BE_DITHER_OFFSET_SHIFT defining the dither offset
    \param [in] AddGamma  Enable gamma conversion stage to convert the pixel data
                          from linear color space to non-linear color space before writing it to AXI Bit
                          value:
                          1 Enable gamma conversion,
                          0 bypass gamma conversion
    \param [in] kick  kick=1 starts processing of the pixel engine

    \retval ::CYGFX_OK on success,
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER if one of the parameters is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwProgramStore( const GCCGFX_CARD_HANDLE cardHandle,
                                                const GCCGFX_SURFACE_S*  pSurf,
                                                GCCGFX_GEN_SEL_E         storeId,
                                                CYGFX_BOOL               singleFrame,
                                                CYGFX_S32                StartX,
                                                CYGFX_S32                StartY,
                                                CYGFX_U32                ulDitherControl,
                                                CYGFX_U32                AddGamma,
                                                CYGFX_U32                kick);

#ifndef TVIIC2D6MDDR
/**
    Set up store unit #4 with ring buffer functionality enabled.

    \param [in] cardHandle  Handle for the write operation
    \param [in] pSurf  Surface that describes the destination buffer for the store
                       unit.
    \param [in] ringBufferAddr  Physical start address of the ring buffer
    \param [in] bufferSize  Number of bytes, which is converted to the number of
                            32-bit words and minus one as the setting value in the register.
                            These bytes are reserved for the destination buffer
                            in case that RasterMode is ENCODE.
                            The actual number used can be read from RLEWords field.
    \param [in] ringBufferSize  Size in bytes of the ring buffer
    \param [in] rastermode  Selects a method for destination buffer data from input
                            pixels:
                            ::GFXREG_STORE_CONTROL_RASTERMODE_NORMAL = RGBA or YUV 4:4:4 pixel buffer
                            ::GFXREG_STORE_CONTROL_RASTERMODE_YUV422 = Packed YUV 4:2:2 pixel buffer
                            ::GFXREG_STORE_CONTROL_RASTERMODE_ENCODE = RLAD compressed bit stream
    \param [in] compressionControl  Control options for RLAD compression
                                    (Compression control like HW uses it!)

    \retval ::CYGFX_OK on success,
    \retval ::CYGFX_ERP_ERR_DISP_INVALID_PARAMETER if one of the parameters is invalid.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwStoreRingBuffer( const GCCGFX_CARD_HANDLE cardHandle,
                                                   const GCCGFX_SURFACE_S*  pSurf,
                                                   CYGFX_ADDR               ringBufferAddr,
                                                   CYGFX_U32                bufferSize,
                                                   CYGFX_U32                ringBufferSize,
                                                   CYGFX_U32                rastermode,
                                                   CYGFX_U32                compressionControl);
#endif

/**
    Set up store unit #4 to by pass.

    \param [in] cardHandle  Handle for the write operation

    \retval None
**/
CYGFX_EXTERN void GccGfx_HwStore4Bypass( const GCCGFX_CARD_HANDLE cardHandle);

/**
    Check the integrity of a surface for store (Address and stride alignment,
    dimension).
    Do not do the check for ::CYGFX_BE_SURF_MASK_ALPHA surface if such surface is
    allowed to use.

    \param [in] pSurface  The surface to check
    \param [in] bAllowMaskAlpha  ::CYGFX_TRUE if ::CYGFX_BE_SURF_MASK_ALPHA surface
                                 is allowed to use.

    \retval ::CYGFX_OK on success, the error code in case of incompatibility
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_HwStoreIntegrity( const GCCGFX_SURFACE_S* pSurface,
                                                  CYGFX_BOOL              bAllowMaskAlpha);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_STORE_H */

