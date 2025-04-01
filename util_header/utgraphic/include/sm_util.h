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
    \file        sm_util.h
    \brief       Utilities for surface management
*/

#ifndef SM_UTIL_H
#define SM_UTIL_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup sm_util Utilities for surface management

    This utility block realizes some helper functions related to the Surface Manager API
    of the Graphics Driver.

    The following code allocates a 16-bpp image buffer in the VRAM and initializes a surface object.
    Afterward, it fills the surface with the generated pixel data.
    \code
    void CreatePattern(CYGFX_SURFACE surf, CYGFX_U32 width, CYGFX_U32 height)
    {
        CYGFX_U32 x;
        CYGFX_U32 y;
        CYGFX_U32 red;
        CYGFX_U32 green;
        CYGFX_U32 blue;
        CYGFX_U32 alpha;
        CyGfx_SmResetSurfaceObject(surf);
        utSurfCreateBuffer(surf, width, height, CYGFX_SM_FORMAT_R4G4B4A4);
        for (x = 0; x < width; x++)
        {
            for (y = 0; y < height; y++)
            {
                red = 255 - 255 * x / width;
                green = 255 * x / width;
                blue = 255 * y / width;
                alpha = 255 - 255 * y / width;
                utSurfSetPixel(surf, x, y, red, green, blue, alpha);
            }
        }
    }
    \endcode

\{ */

/*******************************************************************************
 Includes
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Macro Definitions
*******************************************************************************/

#if (defined (DEBUG) || defined (RELEASE) || defined (FPGA))
/** This macro avoids execution if the previous instruction failed. */
#define UTIL_SUCCESS(rc, execute)                                                                           \
    do                                                                                                      \
    {                                                                                                       \
        if ((rc) == CYGFX_OK)                                                                               \
        {                                                                                                   \
            rc = (execute);                                                                                 \
            if (rc != CYGFX_OK)                                                                             \
                printf("Error 0x%lx in %s (%s line %d)\n", (CYGFX_S32)rc, __FUNCTION__, __FILE__, __LINE__); \
        }                                                                                                   \
        else                                                                                                \
        {                                                                                                   \
            printf("Skip function call in %s (%s line %d)\n", __FUNCTION__, __FILE__, __LINE__);            \
        }                                                                                                   \
    } while (0)
#else
/** This macro avoids execution if the previous instruction failed. */
#define UTIL_SUCCESS(rc, execute)                                                                           \
    do                                                                                                      \
    {                                                                                                       \
        if ((rc) == CYGFX_OK)                                                                               \
        {                                                                                                   \
            rc = (execute);                                                                                 \
        }                                                                                                   \
    } while (0)
#endif


#define UTIL_SM_USERDEFINED_VRAM            0x00000001 /**< Bitmap data is copied to VRAM. */
#define UTIL_SM_USERDEFINED_FLASH           0x00000002 /**< Bitmap data is copied to flash memory. Only for c-model. */
#define UTIL_SM_USERDEFINED_PALETTE         0x00000004 /**< Surface uses a palette. */

typedef CYGFX_U08 UT_SURF_FLASH_AREA;                  /**< Defines different memory ranges for flash simulation on C-Model */
#define UT_SURF_FLASH_AREA_FLASH ((UT_SURF_FLASH_AREA)  0u)  /**< Emulates the flash area in the flash memory */
#define UT_SURF_FLASH_AREA_HOST  ((UT_SURF_FLASH_AREA)  1u)  /**< Emulates the flash area in the host memory */

/*******************************************************************************
 Data Types
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Variables
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Function Prototypes
*******************************************************************************/

/* N/A */

/*******************************************************************************
 Function definitions
*******************************************************************************/

#ifdef C_MODEL
/**
    This function can be used to dump a surface object describing an image
    with pixel data and optional palette to a header file that can be used
    later with the utSurfLoadBitmap function described below.
    This function is not available in Arm(R)-based programs.
    Note that for indexed format, the palette can not be NULL.
    Note that for compressed format, Object partitioning is presented by Stride.
    Note that YUV format is not supported.
    \param[in] surf        Surface object to dump
    \param[in] palette     Palette object to dump. palette == NULL means the pixel data is not indexed format.
    \param[in] szFileName  Path and filename that will be used as store file
    \param[in] szImageName Name of the image
*/
void utSurfDumpHeader(CYGFX_SURFACE surf, CYGFX_PALETTE palette, const  CYGFX_CHAR* szFileName, const  CYGFX_CHAR* szImageName);

/**
* Only for model
* Per default, flash memory images will be copied in prepared 4-MB flash memory to work together with the model instance.
* If two client instances work in parallel with one model (safety and QM), each client must use a different memory.
* With utSurfSetFlashEmulation, another memory area can be selected for one instance.
* *  \param[in] area     Defines the area (default UT_SURF_FLASH_AREA_FLASH)
**/
void utSurfSetFlashEmulation(UT_SURF_FLASH_AREA area);
#endif

/**
    Reads a bitmap structure, sets the related surface attributes,
    allocates the required memory for pixel and palette buffer, and copies the related data.
    If there is a palette in the bitmap, then reads the palette structure, sets the palette attribute, assigns the palette to the surface, and
    allocates and uploads the palette to the defined region in hardware.
    Note that the surface object must be created before.

    \param[in] surface     Surface object
    \param[in] pImage      Pointer to the image data buffer, which is generated by an image conversion tool (Resourcegenerator)
    \param[in] bCopyToVRAM CYGFX_TRUE if the bitmap and color look up table memory should be
                        copied into VRAM.
    \param[in] region_palette If there is a palette in bitmap,  allocates and uploads the palette to region_palette in hardware.
    \retval #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfLoadBitmapEx(CYGFX_SURFACE surface, const void *pImage, CYGFX_BOOL bCopyToVRAM, CYGFX_PALETTE_REGION region_palette);


/**
    Reads a bitmap structure, sets the related surface attributes,
    allocates the required memory for pixel, and copies the related data.
    If there is a palette in the bitmap, reads palette structure, sets the palette attribute, assigns the palette to the surface, and
    allocates and uploads the palette to region display and blit (::CYGFX_PALETTE_REGION_ALL).

    Note that the surface object must be created before.
    \param[in] surface     Surface object
    \param[in] pImage      Pointer to the image data buffer, which is generated by an image conversion tool (Resourcegenerator)
    \param[in] bCopyToVRAM CYGFX_TRUE if the bitmap and color look up table memory should be
                        copied into VRAM.
    \retval #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfLoadBitmap(CYGFX_SURFACE surface, const void *pImage, CYGFX_BOOL bCopyToVRAM);


/**
    Extracts the palette data from a bitmap image, sets the related palette attributes, and
    allocates and uploads the palette to the defined region in hardware.

    Note that the palette object must be created before.
    \param[in] palette     Palette object
    \param[in] pImage      Pointer to the image data buffer, which is generated by an image conversion tool (Resourcegenerator)
    \param[in] region_palette Hardware palette region, where the extracted palette data is stored
    \retval #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfLoadPalette(CYGFX_PALETTE palette, const void *pImage, CYGFX_PALETTE_REGION region_palette);


/**
    Loads the YUV420P(NV12) image onto a surface object.
    Allocates the required memory for Y buffer, UV buffer and copies the related data.
    Sets the surface attributes.

    Note that the surface object must be created before.
    \param[in] surface     Surface object
    \param[in] pImage      Pointer to the image data buffer, which is generated by an image conversion tool (Resourcegenerator)
    \param[in] nWidth      Width of the image
    \param[in] nHeight     Height of the image
    \retval #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfLoadYUV420Data(CYGFX_SURFACE surface, const void *pImage, CYGFX_U16 nWidth, CYGFX_U16 nHeight);

/**
    Returns the width of a given surface object.
    \param[in] surf    Surface object
    \retval CYGFX_S32  Width of the surface
*/
CYGFX_S32 utSurfWidth(CYGFX_SURFACE surf);

/**
    Returns the height of a given surface object.
    \param[in] surf    Surface object
    \retval CYGFX_S32  Height of the surface
*/
CYGFX_S32 utSurfHeight(CYGFX_SURFACE surf);

/**
  Returns the base address of a given surface object.
   \param[in] surf    Surface object
   \retval            address of the surface
 **/
CYGFX_U32 utSurfAddress(CYGFX_SURFACE surf);

/**
    Creates a buffer with the given dimensions and color format and sets the
    related surface object properties.
    Note that the surface object must be created before. The buffers are adapted for JPEG decoding.
    The buffer stride is 64-byte aligned. Stride = ((Width * BitPerPixel + 7) >> 3). If the stride is not 64-byte aligned, padding bytes will be added.
    \param[in] surf     Surface object
    \param[in] w        Width of the surface
    \param[in] h        Height of the surface
    \param[in] eFormat  Color format
    \retval             #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfCreateBuffer(CYGFX_SURFACE surf, CYGFX_U32 w, CYGFX_U32 h, CYGFX_SM_FORMAT eFormat);


/**
    Creates a buffer with the given dimensions and color format and sets the
    related surface object properties.
    Note that the surface object must be created before.
    The buffer stride is 32-byte aligned.
    \param[in] surf     Surface object
    \param[in] w        Width of the surface
    \param[in] h        Height of the surface
    \param[in] eFormat  Color format
    \retval             #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfCreateBuffer32(CYGFX_SURFACE surf, CYGFX_U32 w, CYGFX_U32 h, CYGFX_SM_FORMAT eFormat);

/**
    Creates a buffer prepared for compression with the given dimensions, color format, and a maximum size, and sets the
    related surface object properties. A compressed surface can be used as the source or store buffer for most
    blit operations and can be displayed if the windows were created with the ::CYGFX_DISP_FEATURE_DECODE feature.
    Note that blitting in a compressed buffer may cause artifacts and it can be slower compared to an
    uncompressed buffer.
    The surface object must be created before calling this function.
    \param[in] surf             Surface object
    \param[in] w                Width of the surface
    \param[in] h                Height of the surface
    \param[in] eFormat          Requested color format
    \param[in] maxSizeInBytes   Maximum size of the buffer
    \retval                     #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfCreateCompressedBufferBySize(CYGFX_SURFACE surf, CYGFX_U32 w, CYGFX_U32 h, CYGFX_SM_FORMAT eFormat, CYGFX_U32 maxSizeInBytes);


/**
    Deletes the surface buffers.
    \param[in] surf Surface object
*/
void utSurfDeleteBuffer(CYGFX_SURFACE surf);

#ifdef C_MODEL
/**
    Stores the RGB image described by the surface object in ppm format.
    Note that not all possible surface formats are supported.
    This function is not available in ARM-based programs.
    \param[in] surf    Surface object
    \param[in] pName   Location and name for the target file
    \retval            #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfSavePPM(CYGFX_SURFACE surf,  const CYGFX_CHAR *pName);

/**
    Stores the alpha part of the image described by the surface object in ppm format.
    Note that not all possible surface formats are supported.
    This function is not available in Arm(R)-based programs.
    \param[in] surf    Surface object
    \param[in] pName   Location and name for the target file
    \retval            #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfSaveAlphaPPM(CYGFX_SURFACE surf,  const CYGFX_CHAR *pName);
#endif /* C_MODEL */

/**
    Gets the r, g, b, and a pixel data of a surface at position x, y.
    The pixel with the coordinates 0, 0 is the upper-left pixel
    similar to the memory organization of the memory buffer.
    Note that this is different from the glReadPixels specification.
    Note that not all possible surface formats are supported.
    ::CYGFX_SM_COLOR_FORMAT_YUV422 and ::CYGFX_SM_COLOR_FORMAT_YUV420 are not supported.
    \param[in] src     Surface object
    \param[in] x       x position of the pixel
    \param[in] y       y position of the pixel
    \param[in] r       Pointer to get the red value
    \param[in] g       Pointer to get the green value
    \param[in] b       Pointer to get the blue value
    \param[in] a       Pointer to get the alpha value
    \retval            #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfGetPixel(CYGFX_SURFACE src, CYGFX_U32 x, CYGFX_U32 y, CYGFX_U08 *r, CYGFX_U08 *g, CYGFX_U08 *b, CYGFX_U08 *a);

/**
    Sets the r, g, b, and a pixel data of a surface at position x, y.
    The pixel with the coordinates 0, 0 is the upper-left pixel
    similar to the memory organisation of the memory buffer.
    Note that this is different from the glReadPixels specification.
    Note that not all possible surface formats are supported.
    ::CYGFX_SM_COLOR_FORMAT_YUV422 and ::CYGFX_SM_COLOR_FORMAT_YUV420 are not supported.
    \param[in] src     Surface object
    \param[in] x       x position of the pixel
    \param[in] y       y position of the pixel
    \param[in] r       New red value
    \param[in] g       New green value
    \param[in] b       New blue value
    \param[in] a       New alpha value
    \retval            #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utSurfSetPixel(CYGFX_SURFACE src, CYGFX_U32 x, CYGFX_U32 y, CYGFX_U08 r, CYGFX_U08 g, CYGFX_U08 b, CYGFX_U08 a);

/*****************************************************************************/
/**
    Fills the buffer of the specified surface with gradients using the specified data for colors and direction.

    \param surf Surface object to be filled
    \param rs   Red start
    \param gs   Green start
    \param bs   Blue start
    \param as   Alpha start
    \param rd   Red end
    \param gd   Green end
    \param bd   Blue end
    \param ad   Alpha end
    \param dir  Direction: 0 vertical, 1 horizontal
    \retval     #CYGFX_OK on success; the related error code otherwise.
*/
/*****************************************************************************/
CYGFX_ERROR utSurfGenerateGradient(CYGFX_SURFACE surf, CYGFX_U08 rs, CYGFX_U08 gs, CYGFX_U08 bs, CYGFX_U08 as,
     CYGFX_U08 rd, CYGFX_U08 gd, CYGFX_U08 bd, CYGFX_U08 ad, CYGFX_U08 dir);

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* SM_UTIL_H */
