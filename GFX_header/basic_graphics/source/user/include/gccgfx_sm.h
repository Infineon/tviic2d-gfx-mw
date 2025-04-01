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
 * \file    gccgfx_sm.h
 */


#ifndef GCCGFX_SM_H
#define GCCGFX_SM_H


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

/**
* \addtogroup gccgfx_surfman
* \brief      Interface of Surface Manager
*             The internal surface interface provides surface related functions
*             to all modules inside the Graphics Library.
*             This function layer is only visible inside the driver and is not
*             part of the exported APIs.
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_SM_OBJECT_PARTITIONING_BITS (3u)  /**< Width in bits of the maximum number object partitions */
/**
    Macro to retrieve compression mode information from the software representation
    of the EncodeControl/DecodeControl HW registers.

    \param [in] x  A 32bit value formatted as the EncodeControl/DecodeControl
                   registers of the fetch units.

**/
#define GCCGFX_SM_DECODECONTROL_GET_COMPRESSION(x) ((CYGFX_SM_COMP)((x) & 0x7U))

/**
    Macro to retrieve compression information from a surface object

    \param [in] pSurf  Pointer to surface object

**/
#define GCCGFX_SM_IS_COMPRESSED(pSurf) (GCCGFX_SM_DECODECONTROL_GET_COMPRESSION((pSurf)->ulCompressionControl) != CYGFX_SM_COMP_NONE)

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    Operation modes of the GccGfx_SmGetBufferSize function
**/
typedef enum
{
    GCCGFX_SM_SIZE_MODE_AUTO, /**< Configured size if it is non-zero, required
        size otherwise. */
    GCCGFX_SM_SIZE_MODE_CFG,  /**< Configured size which is the size that was set
        with the CyGfx_SmAssignBuffer function or the CYGFX_SM_ATTR_SIZEINBYTES
        attribute. */
    GCCGFX_SM_SIZE_MODE_REQ   /**< Required size which is the size that was
        derived from surface dimensions, pixel format, and compression type. */
} GCCGFX_SM_SIZE_MODE_E;

/**
    GDC Surface object
**/
typedef struct
{
    CYGFX_ADDR PhysAdd;                                                                    /**< physical address image data */
    CYGFX_ADDR PhysAddSec;                                                                 /**< physical address of secondary image data */
    CYGFX_U16  unWidth;                                                                    /**< Width in pixels */
    CYGFX_U16  unHeight;                                                                   /**< Height in pixels */
    CYGFX_U16  unStride;                                                                   /**< Size of a line in bytes. If unStride = 0 the default unStride = ((unWidth * unBitPerPixel + 7) >> 3) will be used */
    CYGFX_U16  unStrideSec;                                                                /**< Stride of secondary image data. */
    CYGFX_U16  unBitPerPixel;                                                              /**< Size of one pixel in bits (1, 2, 4, 8, 16, 18, 24, 32) */
    CYGFX_U16  unPaletteBitPerPixel;                                                       /**< Size of one entry in bits (1, 2, 4, 8, 16, 24, 32) */
    CYGFX_U32  ulColorBits;                                                                /**< Color component size in bits (0xRRGGBBAA or 0xYYUUYYVV) */
    CYGFX_U32  ulColorShift;                                                               /**< Color component shift (0xRRGGBBAA or 0xYYUUYYVV) */
    CYGFX_U32  ulCompressionControl;                                                       /**< Compression control like HW uses it! */
    CYGFX_U32  ulSizeInBytes;                                                              /**< Buffer size (= unHeight * unStride for uncompressed sources otherwise the size of the compressed stream) */
    CYGFX_U32  ulPaletteColorBits;                                                         /**< Color component size of one entry in bits (0xRRGGBBAA) */
    CYGFX_U32  ulPaletteColorShift;                                                        /**< Color component shift of one entry in bits (0xRRGGBBAA) */
    CYGFX_U32  ulUserDefined;                                                              /**< User defined */
    CYGFX_U32  ulPropertyCnt;                                                              /**< Property counter will be increased with each surface property change */
    CYGFX_U32  unPaletteStartIndexVideoio : 8;                                             /**< Start index of a palette in the videoio space */
    CYGFX_U32  unPaletteStartIndexGfx2d   : 8;                                             /**< Start index of a palette in the gfx2d space */
    CYGFX_U32  unRingLineBufSize          : 4;                                             /**< Defines original the buffer height (in power of two) for ring buffer mode surfaces.
        Note: The unHeight contains the window height in this case. */
    CYGFX_U32  eColorFormat               : 2;                                             /**< Color Format CYGFX_SM_COLOR_FORMAT */
    CYGFX_U32  eColorSpace                : 2;                                             /**< Color Space CYGFX_SM_COLOR_SPACE */
    CYGFX_U32  ObjectPartitioning: GCCGFX_SM_OBJECT_PARTITIONING_BITS;                     /**< If 0, the surface is backward compatible = no object partitioning.
        If != 1, the (compressed) image data are vertical split into ObjectPartioning columns. In such case the image data starts with
        ObjectPartioning times CYGFX_SURFACE_COLUMN_INFO_S structures:
            2 Bytes reserved, 2 Bytes column_width: Width for column i, 4 bytes column_address_offset: The address offset for column i.
        So each column i has the address column_info[i].column_address_offset + PhysAdd, a width column_info[i].column_width and a column_size:
            if i != n-1
                column_size = column_info[i+1].column_address_offset - column_info[i].column_address_offset
            else
                column_size = ulSizeInBytes - column_info[n-1].column_address_offset */
    CYGFX_U32 padding : 32u - 8u - 8u - 4u - 2u - 2u - GCCGFX_SM_OBJECT_PARTITIONING_BITS; /**< Padding to fill up bitfields */
} GCCGFX_SURFACE_S;

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/


/** \name Surface Functions
 */
/** \{ */

/**
    Return or calculate the stride of the surface.

    \param [in] pSurf  The surface object
    \param [in] bSecBuff If it is secondary buffer. CYGFX_FALSE, first buffer; CYGFX_TRUE secondary buffer.

    \retval Stride of the surface. For compressed buffers, the function returns 0.
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_SmGetStride(const GCCGFX_SURFACE_S* pSurf, 
                                CYGFX_BOOL bSecBuff);

/**
    Set all internal values for the given color format.

    \param [in] pSurf  The surface object
    \param [in] eFormat  the format to set

    \retval ::CYGFX_OK If it is a predefined format.
    \retval ::CYGFX_ERP_ERR_SURF_INVALID_FORMAT If it is an unknown format.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_SmSetFormat( GCCGFX_SURFACE_S* pSurf,
                                             CYGFX_SM_FORMAT   eFormat);

/**
    Return or calculate the buffer size of the surface. Depending on the value of
    the mode parameter and the configured buffer size, the function returns the
    configured buffer size or the buffer size that is required for the configured
    surface dimensions, pixel format, and compression format.

    \param [in] pSurf  The surface object
    \param [in] mode  Operation mode of this function

    \retval Buffer size of the surface
**/
CYGFX_EXTERN CYGFX_U32 GccGfx_SmGetBufferSize( const GCCGFX_SURFACE_S* pSurf,
                                               GCCGFX_SM_SIZE_MODE_E   mode);

/**
    Reset all parameters of the surface object.

    \param [in] pSurf  The surface object

    \retval None
**/
CYGFX_EXTERN void GccGfx_SmReset( GCCGFX_SURFACE_S* pSurf);

/**
    Set height and buffer size of the current on-the-fly rendering slice

    \param [in] pSurf  Surface object
    \param [in] nFrameLine  Number of lines
    \param [in] nLineBufferSize  Buffer size

**/
CYGFX_EXTERN void GccGfx_SmChangeHeightForOnTheFly( GCCGFX_SURFACE_S* pSurf,
                                                    CYGFX_U16         nFrameLine,
                                                    CYGFX_U32         nLineBufferSize);

/**
    Transform the surface representation of ulColorBits/ulColorShift (Y1.U.Y2.V)
    into HW representation (Y.U.V.-).
    Also check the input values for integrity.

    \note
    This function can be use to convert for store and fetch.

    \param [in] pSurf  The source surface in YUV422 format
    \param [in] pColorBits  Pointer to get the converted colorbits
    \param [in] pColorShift  Pointer to get the converted colorShift

    \retval ::CYGFX_OK on success, the error code in case of incompatibility
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_SmYuv422ToHw( const GCCGFX_SURFACE_S* pSurf,
                                              CYGFX_U32*              pColorBits,
                                              CYGFX_U32*              pColorShift);

/**
    Transform an R8G8B8A8 color value into an R10G10B10A8 color value, optionally
    with reverse gamma correction.

    \param [in] color  Color value to transform, encoded as R8G8B8A8.
    \param [in] bGammaRemove  Flag indicating that this function shall remove gamma
                              correction from the input color value.
    \param [out] r  Pointer to the memory location where the red color component of
                    the converted color will be stored. The value will have 10 significant bits.
    \param [out] g  Pointer to the memory location where the green color component
                    of the converted color will be stored. The value will have 10 significant bits.
    \param [out] b  Pointer to the memory location where the blue color component
                    of the converted color will be stored. The value will have 10 significant bits.
    \param [out] a  Pointer to the memory location where the alpha component of the
                    converted color will be stored. The value will have 8 significant bits.

**/
CYGFX_EXTERN void GccGfx_SmConvert8To10bitColor( CYGFX_U32  color,
                                                 CYGFX_BOOL bGammaRemove,
                                                 CYGFX_U16* r,
                                                 CYGFX_U16* g,
                                                 CYGFX_U16* b,
                                                 CYGFX_U08* a);
/** \} end Surface Functions */

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_SM_H */

