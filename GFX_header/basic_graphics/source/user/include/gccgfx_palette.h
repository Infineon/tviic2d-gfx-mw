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
 * \file    gccgfx_palette.h
 */


#ifndef GCCGFX_PALETTE_H
#define GCCGFX_PALETTE_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_palette
* \brief      Interface of Palette module
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_PALETTE_START_INDEX_INVALIDATE 0xffu /**< Invalid palette index value */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    Palette object
**/
typedef struct
{
    CYGFX_ADDR PhysAdd;                      /**< physical address palette data */
    CYGFX_U32  ColorBits;                    /**< Color component size of one entry in bits (0xRRGGBBAA) */
    CYGFX_U32  ColorShift;                   /**< Color component shift of one entry in bits (0xRRGGBBAA) */
    CYGFX_U32  Count             : 9;        /**< Number of color in the palette */
    CYGFX_U32  BitPerPixel       : 7;        /**< Size of one entry in bits (1, 2, 4, 8, 16, 24, 32) */
    CYGFX_U32  StartIndexGfx2D   : 8;        /**< Start index for region blit (gfx2d). 0xffff in the palette is not attached to region blit. */
    CYGFX_U32  StartIndexVideoio : 8;        /**< Start index for region display (videoio). 0xffff in the palette is not attached to region display. */
    CYGFX_U32  HwBitWidth        : 4;        /**< Bits representing Count (internal value only. Will be calculated by ::CyGfx_PaletteAlloc.) */
    CYGFX_U32  padding           : 32u - 4u; /**< Padding to fill up bitfields  */
} GCCGFX_PALETTE_S;

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Initializes the palette component.

**/
CYGFX_EXTERN void GccGfx_PaletteInit(void);

/**
    Detaches a surface from a palette.

    \param [in] start_index  Start index of the palette
    \param [in] target  Target region (::CYGFX_PALETTE_REGION_DISPLAY or
                        ::CYGFX_PALETTE_REGION_BLIT)

**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_PaletteDetachByStartIndex( CYGFX_U32            start_index,
                                                           CYGFX_PALETTE_REGION target);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_PALETTE_H */

