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
    \file        ut_freetype.h
    \brief       This file defines the simple function set that is required
                 to draw text using the FreeType library and the VIDEOSS hardware.
*/

#ifndef UT_FREETYPE_H
#define UT_FREETYPE_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils */
/** @{ */

/** \addtogroup ut_freetype Functions to render text using the FreeType library

\note  To disable FreeType from utility library, set the UTIL_INCLUDE_FREETYPE=0 macro in the project file of the specific compiler.

\section Drawing_Freetype Using hardware-accelerated glyph rendering with FreeType library

The FreeType library is designed for high-quality TrueType and other font type rendering.
The library can generate either glyph alpha masks (alpha buffer) for blitting
to a destination buffer or outline draw elements for hardware-accelerated font rendering.


The drawing engine API of the Graphics Driver is designed for such a hardware-accelerated font rendering.
A sample application shows how callback functions can be assigned to the
FreeType library so that all drawing-related steps are executed with hardware acceleration.
The following code snippet shows the basic steps:

\code
Define a callback function for a MoveTo path element
static CYGFX_ERROR decompose_move_to(const FT_Vector *to, void *user)
{
    const CYGFX_U08 type = CYGFX_DE_MOVE_TO;
    return CyGfx_DeAppendPathData((CYGFX_BE_CONTEXT)user, 1, &type, to);
}

Define a callback function for a LineTo path element
static CYGFX_ERROR decompose_line_to(const FT_Vector *to, void *user)
{
    const CYGFX_U08 type = CYGFX_DE_LINE_TO;
    return CyGfx_DeAppendPathData((CYGFX_BE_CONTEXT)user, 1, &type, to);
}

Define a callback function for a quadratic bezier path element
static CYGFX_ERROR decompose_conic_to(const FT_Vector *control, const FT_Vector *to, void *user)
{
    const CYGFX_U08 type = CYGFX_DE_QUAD_TO;
    CyGfx_DeAppendPathData((CYGFX_BE_CONTEXT)user, 1, &type, NULL);
    CyGfx_DeAppendPathData((CYGFX_BE_CONTEXT)user, 2, NULL, control);
    CyGfx_DeAppendPathData((CYGFX_BE_CONTEXT)user, 2, NULL, to);
    return CYGFX_OK;
}

Define a callback function array for FreeType
FT_Outline_Funcs funcs = {
      decompose_move_to,
      decompose_line_to,
      decompose_conic_to,
      0,
      0, 0
   };

void main()
{
    //do many initialization stuff
    ...
    // loop thought the string
    for (u32Index = 0; pszString[u32Index]; u32Index++)
    {
        // Find the glyph in the font
        uiGlyphIndex = FT_Get_Char_Index(face, pszString[u32Index]);
        //Update optional kerning settings
        ...
        // Load the glyph
        FT_Load_Glyph(pFtCtx->face, uiGlyphIndex, FT_LOAD_DEFAULT));
        // Check the glyph format
        switch (face->glyph->format) {
        case FT_GLYPH_FORMAT_OUTLINE:
            // Push the geometry data to the DrawEng driver using the callback function array
            FT_Outline_Decompose(&glyph->outline, &funcs, pectx);
            // Render the glyph with the VIDEOSS hardware
            CyGfx_DeDraw(pectx, stcPenPos[0], stcPenPos[1]);
            // Update next glyph position
            ...
        }
    }
}

\endcode
*/
/** @{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_OUTLINE_H
#include FT_BBOX_H
#include FT_GLYPH_H
#include FT_MODULE_H
#include FT_SYSTEM_H

#include "cygfx_surfman.h"
#include "cygfx_draweng.h"
#include "pe_matrix.h"

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/** The FreeType util context object container */
typedef struct {
    FT_Face face;           /**< The FreeType font object */
    CYGFX_BE_CONTEXT beCtx; /**< VIDEOSS Blit Engine context for drawing  */
    CYGFX_U32 load_flags;   /**< Load flags for FT_Load_Glyph */
}FT_CONTEXT_CONTAINER;

/** Context object definition*/
typedef FT_CONTEXT_CONTAINER *FT_CONTEXT;


/**
    Opens a TrueType font object with the defined size.
    \param[in]  ftCtx       Pointer to a ::FT_CONTEXT_CONTAINER object to store the font parameters
    \param[in]  beCtx       BlitEng context defining the target buffer and other properties
    \param[in]  font        Pointer to a memory object describing a TrueType font
    \param[in]  buffersize  Size in bytes of the TrueType font object. If this is 0, the library
                            will open a file with the name pointed by the font.
    \param[in]  size        Size of the requested font
    \retval                 CYGFX_OK if success; the corresponding error code otherwise.
*/
CYGFX_ERROR utFtOpen(FT_CONTEXT ftCtx, CYGFX_BE_CONTEXT beCtx, const CYGFX_CHAR *font, CYGFX_U32 buffersize, CYGFX_U32 size);

/**
    Makes a rotation to the text.
    \param[in]  ftCtx       Pointer to a ::FT_CONTEXT_CONTAINER object to store the font parameters
    \param[in]  mat         Rotation matrix
*/
void utFtRotation(FT_CONTEXT ftCtx, Mat3x2 mat);


/**
    Closes an FT_CONTEXT object that was opened by utFtOpen
    \param[in]  ftCtx       The ::FT_CONTEXT object to close
*/
void utFtClose(FT_CONTEXT ftCtx);

/**
    Draws some text at position x,y.

    \note utFtTextOutFast has internally a different functionality than utFtTextOut.
          The difference from the utFtTextOut function is that a complete string is drawn
          instead of each single letter. This makes it possible to display a string faster,
          but a larger alpha buffer is necessary to store the whole string.
          Only fonts with separated characters can be displayed (See limitation: Intersecting outlines are not allowed).
    \param[in]  ftCtx      The ::FT_CONTEXT object created by ::utFtOpen
    \param[in]  x           x position of the first character
    \param[in]  y           y position of the first character
    \param[in]  pszString   The text to be drawn
    \retval                 CYGFX_OK if success; the corresponding error code otherwise.
*/
CYGFX_ERROR utFtTextOutFast(FT_CONTEXT ftCtx, CYGFX_S32 x, CYGFX_S32 y, const wchar_t* pszString);

/**
    Draws some text at position x,y.
    \param[in]  ftCtx      The ::FT_CONTEXT object created by ::utFtOpen
    \param[in]  x           x position of the first character
    \param[in]  y           y position of the first character
    \param[in]  pszString   The text to be drawn
    \retval                 CYGFX_OK if success; the corresponding error code otherwise.
*/
CYGFX_ERROR utFtTextOut(FT_CONTEXT ftCtx, CYGFX_S32 x, CYGFX_S32 y, const wchar_t *pszString);

/**
    This function can be used to calculate the required width and height if the string pszString will be rendered
    \param[in]  ftCtx      The ::FT_CONTEXT object created by ::utFtOpen
    \param[out]  w         This value will contain the required width in pixel to render pszString.
    \param[out]  h         This value will contain the required height in pixel to render pszString.
    \param[in]  pszString  The text
    \retval                CYGFX_OK if success; the corresponding error code otherwise.
*/
CYGFX_ERROR utFtCalc(FT_CONTEXT ftCtx, CYGFX_U32 *w, CYGFX_U32 *h, const wchar_t *pszString);

/**
    This function assigns a new Blit Engine context to the FreeType context. It
    can be used to replace the Blit Engine context that was specified with ::utFtOpen()
    with a new one.


    \param[in]  ftCtx      The ::FT_CONTEXT object created by ::utFtOpen
    \param[out] beCtx      BlitEng context defining the target buffer and other properties
*/
void utFtSetContext(FT_CONTEXT ftCtx, CYGFX_BE_CONTEXT beCtx);

/**S
    Sets the parameter for FT_Load_Glyph
    \param[in]  ftCtx       Pointer to a ::FT_CONTEXT_CONTAINER object to store the font parameters
    \param[in]  load_flags  A flag indicating what to load for a glyph by FT_Load_Glyph().
                            The FT_LOAD_XXX constants can be used to control the
                            glyph loading process (e.g., whether to scale the outline, load bitmaps,
                            hint the outline, etc). See FreeType documentation.
                            Default: FT_LOAD_NO_BITMAP | FT_LOAD_NO_HINTING
    \retval                 CYGFX_OK
*/
CYGFX_ERROR utFtSetParam(FT_CONTEXT ftCtx, CYGFX_U32 load_flags);

/** @} end addtogroup */
/** @} end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_FREETYPE_H */
