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
 * \file    cygfx_palette.h
 */


#ifndef CYGFX_PALETTE_H
#define CYGFX_PALETTE_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
 \addtogroup cygfx_palette
 \code #include "cygfx_palette.h" \endcode
 \brief The palette API provides functions to manage palettes (See also \ref overview_surface)

\section cygfx_palette_index Palettes and indexed images

\subsection cygfx_palette_indexed_images Indexed images

Palettes are used for indexed images. The pixel buffer of an indexed image
does not contain the color values of the pixels, but indexes of entries of
a color lookup table. The color lookup table is a list of color values that
are composed of red, green, and blue color components, and, optionally, an
alpha value.

If an index table is defined for an image, the blue and green color components of the
pixels are no longer used, but the red component is used as a "pointer" to the color
lookup table; the related red, green, blue (and alpha) values in the table
define the pixel color.

     \code
     pixel color:           r  g  b
                            1  1  1
                            |
     color lookup table:    |         index r   g   b
                            |           0   0   0   0
                            ------>     1  255 255 255
                                        2   0  255 255
     resulting color: 255 255 255
     \endcode

A color lookup table can be defined with the ::CyGfx_PaletteAssign function
or
"manually" using ::CyGfx_PaletteSetAttribute calls. In the second case,
the minimum required attributes are ::CYGFX_PALETTE_ATTR_COUNT,
::CYGFX_PALETTE_ATTR_BITPERPIXEL, ::CYGFX_PALETTE_ATTR_COLORBITS, ::CYGFX_PALETTE_ATTR_COLORSHIFT,
and ::CYGFX_PALETTE_ATTR_VIRT_ADDRESS or ::CYGFX_PALETTE_ATTR_PHYS_ADDRESS.

\note  The maximum bits per pixel for an index entry is 24. Therefore, if an alpha
channel is required, a reduced bit width for the color channels is required (e.g., R6G6B6A6).
If this is not enough, the alpha channel can also be stored in the pixel data
besides the color index.

\note If an indexed image is used, the red component
(defining the bit width of the index) must start at the lowest bit.
(see ::CYGFX_PALETTE_ATTR_COLORBITS).

\subsection cygfx_palette_history Palette history

The implementation and the API of indexed images were changed during the
transition from TRAVEO(TM) to TRAVEO(TM) T2G. On the TRAVEO(TM) platform, a palette was
a part of a surface. The palette data needed to be uploaded to the hardware
for each blit operation and each window commit. On the TRAVEO(TM) T2G platform, a
palette is a separate object that can be shared by multiple surfaces. Once
uploaded to the hardware, the palette data can be used for multiple blit
operations or window commits. This reduces runtime, especially with regard to
LBO.

\subsection cygfx_palette_regions Palette regions

There exist two regions for palettes in the hardware: ::CYGFX_PALETTE_REGION_DISPLAY and ::CYGFX_PALETTE_REGION_BLIT.
These two regions are physically different locations to store the palettes.
The display region can store (::CYGFX_PALETTE_ENTRIES_VIDEOIO) entries,
the Blit Engine region can store (::CYGFX_PALETTE_ENTRIES_GFX2D) entries.
Each palette that is allocated (with CyGfx_PaletteAlloc) uses up the number of color entries that was specified when the palette was assigned (with ::CyGfx_PaletteAssign).
The display region can, for example, store 4 palettes with 256 entries or 64 palettes with 16 entries or a mixture of different sizes with a total of 1024 entries.
A palette of less than 16 does not further increase the number of available palettes because the driver arranges only blocks with a minimum size of 16 entries.
Only allocated palettes can be used. If a new palette cannot be allocated because the region is full,
the application must free (::CyGfx_PaletteFree) unused palettes first.

\subsection cygfx_palette_usage Using palettes
- The application must reset a CYGFX_PALETTE_OBJECT_S object, and configure the properties of the palette including an address that points to the palette data
  using ::CyGfx_PaletteAssign or ::CyGfx_PaletteSetAttribute.
  The palette data can be in VRAM, flash, or another memory location.
- The next step is to load the palette data into a hardware palette region using ::CyGfx_PaletteAlloc.
- Now, the palette can be assigned to a surface using ::CyGfx_SmPaletteAssign. One palette object can be assigned to multiple surfaces.
- There are two ways to free a palette if it is no longer used: Typically the application should keep the CYGFX_PALETTE_OBJECT_S object in memory and use ::CyGfx_PaletteFree.
  If a palette is used for one surface only, the application can also use the surface API ::CyGfx_SmPaletteFree.
  In this case, the application is not required to continue to keep the palette object in memory.
  To delete all palettes, ::CyGfx_PaletteFree can be used with NULL as the palette argument.
*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define CYGFX_PALETTE_ENTRIES_VIDEOIO       (1024)      /**< Number of palette entries for region display */
#define CYGFX_PALETTE_ENTRIES_GFX2D         (2048)      /**< Number of palette entries for region blit */
#define CYGFX_PALETTE_START_IDX_UNDEFINED   (0xFFFFu)   /**< Undefined palette start index */

#define CYGFX_MIN_PALETTE_ENTRIES           (2u)        /**< Minimum number of palette entries that can be assigned to a palette object */
#define CYGFX_MAX_PALETTE_ENTRIES           (256u)      /**< Maximum number of palette entries that can be assigned to a palette object */

#define CYGFX_PALETTE_ARRAY_PART            (16u)       /**< Size of a palette data block that is subject to automatic allocation */
/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    The Palette Object Container
**/
typedef struct
{
    CYGFX_U32 reserved[5]; /**< Reserved memory needed for any palette container */
} CYGFX_PALETTE_OBJECT_S;


typedef CYGFX_PALETTE_OBJECT_S* CYGFX_PALETTE; /**< Pointer to a structure of type CYGFX_PALETTE_OBJECT_S. Used as a handle of a
    palette object. */

/** \name Region for palette */
/** \{ */
typedef CYGFX_U08 CYGFX_PALETTE_REGION;                                                         /**< Region for palette */
#define CYGFX_PALETTE_REGION_DISPLAY ((CYGFX_PALETTE_REGION)(1))                                /**< Region display: For surfaces used with ::CyGfx_WinSetSurface */
#define CYGFX_PALETTE_REGION_BLIT    ((CYGFX_PALETTE_REGION)(2))                                /**< Region blit: For surfaces used ::CyGfx_BeBindSurface (it includes surfaces used for OTF rendering to display) */
#define CYGFX_PALETTE_REGION_ALL     (CYGFX_PALETTE_REGION_DISPLAY | CYGFX_PALETTE_REGION_BLIT) /**< Region display and Blit */
/** \} */

/** \name Color lookup table formats */
/** \{ */
typedef CYGFX_U08 CYGFX_PALETTE_FORMAT;                           /**< Color format of the palette color lookup table */
#define CYGFX_PALETTE_FORMAT_X8R8G8B8 ((CYGFX_PALETTE_FORMAT)(0)) /**< X8R8G8B8 (32 bpp but the upper 8 bits are unused) */
#define CYGFX_PALETTE_FORMAT_R8G8B8   ((CYGFX_PALETTE_FORMAT)(1)) /**< R8G8B8 */
#define CYGFX_PALETTE_FORMAT_B8G8R8   ((CYGFX_PALETTE_FORMAT)(2)) /**< B8G8R8 */
#define CYGFX_PALETTE_FORMAT_R5G5B5   ((CYGFX_PALETTE_FORMAT)(3)) /**< R5G5B5 */
#define CYGFX_PALETTE_FORMAT_A1R5G5B5 ((CYGFX_PALETTE_FORMAT)(4)) /**< A1R5G5B5 */
#define CYGFX_PALETTE_FORMAT_A4R4G4B4 ((CYGFX_PALETTE_FORMAT)(5)) /**< A4R4G4B4 */
/** \} */

/** \name Palette attributes */
/** \{ */
typedef CYGFX_U08 CYGFX_PALETTE_ATTR;                             /**< Type for palette attributes */
/** \note In the following description, "initial" means the value after ::CyGfx_PaletteReset was called. */
#define CYGFX_PALETTE_ATTR_VIRT_ADDRESS         ((CYGFX_PALETTE_ATTR)(0)) /**< Virtual base address.
    This attribute is initialized to 0 and must be set to a valid value with ::CyGfx_PaletteAssign or ::CyGfx_PaletteSetAttribute.
    \note
    - The base address should be used to address images inside the VRAM.
    - When setting a virtual address, the physical address will be overwritten.
    - See the address restrictions under ::CyGfx_PaletteAssign(). */
#define CYGFX_PALETTE_ATTR_PHYS_ADDRESS         ((CYGFX_PALETTE_ATTR)(1)) /**< Physical base address.
    This attribute is initialized to 0 and must be set to a valid value with ::CyGfx_PaletteAssign or ::CyGfx_PaletteSetAttribute.
    \note
    - Can be used to read image buffers directly from NOR flash.
    - When setting a physical address, the virtual address will be overwritten. */
#define CYGFX_PALETTE_ATTR_COUNT                ((CYGFX_PALETTE_ATTR)(2)) /**< Number of color entries (2..256).
    This attribute is initialized to 0 and must be set to a valid value with ::CyGfx_PaletteAssign or ::CyGfx_PaletteSetAttribute. */
#define CYGFX_PALETTE_ATTR_BITPERPIXEL          ((CYGFX_PALETTE_ATTR)(3)) /**< Size of one entry in bits (1, 2, 4, 8, 16, 24, or 32).
    For the bits per pixel that are bigger than 24, only the lower 24 bits are used.
    This attribute is initialized to 0 and must be set to a valid value with ::CyGfx_PaletteAssign or ::CyGfx_PaletteSetAttribute. */
#define CYGFX_PALETTE_ATTR_COLORBITS            ((CYGFX_PALETTE_ATTR)(4)) /**< Color component size of one entry in bits (0xRRGGBBAA; 0<=RR, GG, BB, AA<=8).
    This attribute is initialized to 0 and must be set to a valid value with ::CyGfx_PaletteAssign or ::CyGfx_PaletteSetAttribute. */
#define CYGFX_PALETTE_ATTR_COLORSHIFT           ((CYGFX_PALETTE_ATTR)(5)) /**< Color component shift of one entry in bits (0xRRGGBBAA).
    The default value is 0. */
#define CYGFX_PALETTE_ATTR_START_IDX_GFX2D      ((CYGFX_PALETTE_ATTR)(6)) /**< Palette space index, at which provided palette is stored for Blit region. */
#define CYGFX_PALETTE_ATTR_START_IDX_VIDEOIO    ((CYGFX_PALETTE_ATTR)(7)) /**< Palette space index, at which provided palette is stored for Display region. */

/** \} */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Resets a palette object with the default values.

    \param [out] palette  The palette to reset (Must be a pointer to a
                          ::CYGFX_PALETTE_OBJECT_S object).

    \retval             ::CYGFX_OK On success
    \retval            ::CYGFX_ERP_ERR_PAL_INVALID_PARAMETER The specified pPal is
    NULL
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_PaletteReset( CYGFX_PALETTE palette);

/**
    Assigns a memory address, color format, and number of colors representing a
    palette object.
    The application must ensure that the memory is available as long as the palette
    is allocated by ::CyGfx_PaletteAlloc.
    \note
    Changing palette properties after ::CyGfx_PaletteAlloc and
    ::CyGfx_SmPaletteAssign does not influence the uploaded palette.
    For an uploaded palette, properties are updated only after a call of
    ::CyGfx_PaletteAlloc and ::CyGfx_SmPaletteAssign API.

    \param [in] palette  Palette object (Must be a pointer to a
                         ::CYGFX_PALETTE_OBJECT_S object).
    \param [in] eFormat  Format of the image. The format defines the BitPerPixel,
                         ColorBits, and ColorShift.
    \param [in] count  Number of entries in the palette (
                       ::CYGFX_MIN_PALETTE_ENTRIES .. ::CYGFX_MAX_PALETTE_ENTRIES)
    \param [in] pBufferAddress  Virtual memory address of the image. The buffer
                                starts with the first color.

    \retval  ::CYGFX_OK On success
    \retval  ::CYGFX_ERP_ERR_PAL_INVALID_PARAMETER Invalid specification for the
    given palette or pBufferAddress, or the palette count is outside the normal
    range.
    \retval ::CYGFX_ERP_ERR_PAL_INVALID_FORMAT The specified palette format does
    not exist.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_PaletteAssign( CYGFX_PALETTE        palette,
                                              CYGFX_PALETTE_FORMAT eFormat,
                                              CYGFX_U16            count,
                                              const void*          pBufferAddress);

/**
    Sets palette attributes.

    \param [in] palette  Palette object (Must be a pointer to a
                         ::CYGFX_PALETTE_OBJECT_S object).
    \param [in] eName  Name of the attribute. See ::CYGFX_PALETTE_ATTR.
    \param [in] uValue  New value

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_PAL_INVALID_PARAMETER Invalid virtual / physical
    address of the specified palette, or the palette count is outside normal
    range, or the specified bits per pixel, color shift, and color bits are
    unsupported.
    \retval ::CYGFX_ERP_ERR_PAL_INVALID_ATTRIBUTE The given attribute does not exist
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_PaletteSetAttribute( CYGFX_PALETTE      palette,
                                                    CYGFX_PALETTE_ATTR eName,
                                                    CYGFX_U32          uValue);

/**
    Gets palette attributes

    \param [in] palette  Palette (Must be a pointer to a ::CYGFX_PALETTE_OBJECT_S
                         object).
    \param [in] eName  Name of the attribute. See ::CYGFX_PALETTE_ATTR.
    \param [out] puValue  Pointer to a variable to receive the attribute value

    \retval  ::CYGFX_OK On success
    \retval  ::CYGFX_ERP_ERR_PAL_INVALID_PARAMETER The specified palette and/or
    puValue are invalid.
    \retval ::CYGFX_ERP_ERR_PAL_INVALID_ATTRIBUTE The specified attribute does not
    exist.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_PaletteGetAttribute( const CYGFX_PALETTE palette,
                                                    CYGFX_PALETTE_ATTR  eName,
                                                    CYGFX_U32*          puValue);

/**
    Allocate and upload the palette to a defined region in the hardware.
    \note Changing palette properties after ::CyGfx_PaletteAlloc has no effect.
    \note Do not allocate the same palette more than once. If reallocation is
    needed, free the palette first, and then allocate it again.

    \param [in,out] palette  Palette to allocate (Must be a pointer to a
                             ::CYGFX_PALETTE_OBJECT_S object).
    \param [in] region  Defines the target region

    \retval   ::CYGFX_OK On success
    \retval   ::CYGFX_ERP_ERR_PAL_INVALID_REGION The specified region is outside normal range.
    \retval   ::CYGFX_ERP_ERR_PAL_INVALID_PARAMETER The given palette is NULL, or
    there is no address for the palette defined, or the palette count is outside
    the normal range for palette entries, or there is an invalid value given for
    bits per pixel / color shift / color bits.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_PaletteAlloc( CYGFX_PALETTE        palette,
                                             CYGFX_PALETTE_REGION region);

/**
    Extended version of ::CyGfx_PaletteAlloc, which, in addition to ::CyGfx_PaletteAlloc
    functionality, provides possibility to specify at which palette space index of which region
    function should allocate provided palette.

    \param [in,out] palette  Palette to allocate (Must be a pointer to a
                             ::CYGFX_PALETTE_OBJECT_S object).
    \param [in] region  Defines the target region
    \param [in] startIndexVideoioAbs  Palette space index, at which function should try allocate
    provided Palette for the Display region. For already successfully allocated Palette, such value can be
    obtained by calling ::CyGfx_PaletteGetAttribute with the ::CYGFX_PALETTE_ATTR_START_IDX_VIDEOIO
    parameter. When Display region is not selected via region parameter
    (it does not contain the ::CYGFX_PALETTE_REGION_DISPLAY bit), this parameter
    is ignored.
    \note ::CYGFX_PALETTE_START_IDX_UNDEFINED can be used to make function allocate
    palette by automatically found start index.
    \note Provided index should be divisible by ::CYGFX_PALETTE_ARRAY_PART
    \param [in] startIndexGfx2dAbs  Palette space index, at which function should try allocate
    provided palette for the Blit region. For already successfully allocated palette, such value
    can be obtained by calling ::CyGfx_PaletteGetAttribute with the ::CYGFX_PALETTE_ATTR_START_IDX_GFX2D
    parameter. When Blit region is not selected via region parameter
    (it does not contain the ::CYGFX_PALETTE_REGION_BLIT bit), this parameter
    is ignored.
    \note ::CYGFX_PALETTE_START_IDX_UNDEFINED can be used to make function allocate
    the palette by automatically found start index.
    \note Provided index should be divisible by ::CYGFX_PALETTE_ARRAY_PART

    \retval   ::CYGFX_OK On success
    \retval   ::CYGFX_ERP_ERR_PAL_INVALID_REGION The specified region is outside normal range.
    \retval   ::CYGFX_ERP_ERR_PAL_INVALID_PARAMETER The given palette is NULL, or
    there is no address for the palette defined, or the palette count is outside
    the normal range for palette entries, or there is an invalid value given for
    bits per pixel / color shift / color bits, or one or both provided start indexes are not divisible
    by ::CYGFX_PALETTE_ARRAY_PART, are out of palette space bounds, or cannot be used for the allocation
    (given the Palette size).
    \retval   ::CYCFX_ERP_ERR_PAL_SPACE_NOT_FREE Palette space or its part, which is needed to allocate
    palette with specified start index and size, is not free.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_PaletteAllocAtStartIndex( CYGFX_PALETTE        palette,
                                                         CYGFX_PALETTE_REGION region,
                                                         CYGFX_U32            startIndexVideoioAbs,
                                                         CYGFX_U32            startIndexGfx2dAbs);

/**
    Free the palette from a defined region in hardware. This frees hardware
    resources that were marked as used with ::CyGfx_PaletteAlloc.
    \note ::CyGfx_SmPaletteFree can also be used to free a palette.

    \param [in,out] palette  Can be NULL or a pointer to a ::CYGFX_PALETTE_OBJECT_S object.
                             If the parameter is NULL, it deletes all palettes in the region.
    \note Only palette objects that are attached for this region can be detached.
    \param [in] region  Defines the target region

    \retval             ::CYGFX_OK On success
    \retval             ::CYGFX_ERP_ERR_PAL_INVALID_REGION The specified region is
    invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_PaletteFree( CYGFX_PALETTE        palette,
                                            CYGFX_PALETTE_REGION region);
/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_PALETTE_H */
