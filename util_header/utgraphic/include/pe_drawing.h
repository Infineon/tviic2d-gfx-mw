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
    \file        pe_drawing.h
    \brief       This header declares some simple drawing functions.
*/

#ifndef PE_DRAWING_H
#define PE_DRAWING_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup pe_drawing  Additional utilities for Blit Engine

    Functions in this block demonstrate how blit operations can be used
    to draw simple objects like lines, rectangles, and more.
    These functions may be helpful if the VIDEOSS drawing engine is not available.
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

/** Defines line end types */
typedef enum {
    /** The line end will be a rectangle. The given line-end coordinates is the center point. */
    UT_LINE_END_SQUARE     = 0x0,
    /** The line end will be a rectangle. The given line-end coordinates is the corner. */
    UT_LINE_END_BUTT,
    /** The line end will be round. The given line-end coordinate is the center point. */
    UT_LINE_END_ROUND
} UTIL_LINE_END;

/** Defines text position */
typedef enum {
    /** The text draw position defines the top-left point of the text. */
    UT_TEXT_POS_TOP_LEFT = 0x0,
    /** The text draw position defines the middle-left point of the text. */
    UT_TEXT_POS_MIDDLE_LEFT,
    /** The text draw position defines the bottom-left point of the text. */
    UT_TEXT_POS_BOTTOM_LEFT,
    /** The text draw position defines the top-middle point of the text. */
    UT_TEXT_POS_TOP_MIDDLE,
    /** The text draw position defines the center point of the text. */
    UT_TEXT_POS_CENTER,
    /** The text draw position defines the bottom-middle point of the text. */
    UT_TEXT_POS_BOTTOM_MIDDLE,
    /** The text draw position defines the top-right point of the text. */
    UT_TEXT_POS_TOP_RIGHT,
    /** The text draw position defines the middle-right point of the text. */
    UT_TEXT_POS_MIDDLE_RIGHT,
    /** The text draw position defines the bottom-right point of the text. */
    UT_TEXT_POS_BOTTOM_RIGHT
} UTIL_TEXT_POS;

/** Context for simple draw operations with the blit engine */
typedef struct {
    CYGFX_U08 r; /**< Red color part for drawing */
    CYGFX_U08 g; /**< Green color part for drawing */
    CYGFX_U08 b; /**< Blue color part for drawing */
    CYGFX_U08 a; /**< Alpha color part for drawing */
    /** Stores the target surface */
    CYGFX_SURFACE sStore;
    /** Stores the mask (brush) surface */
    CYGFX_SURFACE sMask;
    /** Matrix for the mask (can be NULL) */
    CYGFX_FLOAT *mBrushMat;
    /** Stores the font surface (contains 16*16 bitmaps of same size for the character codes 0-255)*/
    CYGFX_SURFACE sFont;
    /** Distance between two characters in pixels */
    CYGFX_U32 nCharSpace;
    /** Pointer to an array with 256 entries containing the width for each character */
    const CYGFX_U32 *pCharSize;
    /** Local array for pCharSize in case the character size must be calculated with utCalcCharacterSize */
    CYGFX_U32 utCharSize[256];
    /** Line width */
    CYGFX_FLOAT fLineWidth;
    /** Line end type */
    UTIL_LINE_END line_end;
    /** Filter mode */
    CYGFX_U32 filter;
    /** Point size for drawing */
    CYGFX_FLOAT fPointWidth;
    /** Generated point size. It stores the size of the 1-bpp circle used for all round corners. */
    CYGFX_U08 PointSize;
    /** Gamma conversion */
    CYGFX_BE_GAMMA attr_gamma;
    /** Generated point surface object */
    CYGFX_SURFACE sPoint;
} UTIL_CONTEXT;

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/**
    Resets the context.
    \param[in]  pUTCtx      Valid pointer to a util context
*/
void utResetContext(UTIL_CONTEXT *pUTCtx);

/**
    Prepares the library to draw points and round corners.
    \param[in]  pUTCtx  Valid pointer to a util context
    \param[in]  nSize   Diameter of the circle. You should use a value as large as
                        the biggest drawn rounding. If nSize = 0, the point memory will
                        be freed.
    \retval             #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utInitPoint(UTIL_CONTEXT *pUTCtx, CYGFX_U08 nSize);

/**
    Prepares the fixed-size font.
    \param[in]  pUTCtx      Valid pointer to a util context
    \param[in]  pFontSurf   A surface object defining a font. The driver expects a fixed-sized
                            font with 16 x 16 symbols.
*/
void utSetFont(UTIL_CONTEXT *pUTCtx, CYGFX_SURFACE pFontSurf);

/**
    Defines the distance between two characters (default = 2).
    \param[in]  pUTCtx      Valid pointer to a util context
    \param[in]  nCharSpace  Distance between two characters in pixels
*/
void utSetCharacterSpace(UTIL_CONTEXT *pUTCtx, CYGFX_U32 nCharSpace);

/**
    Defines the width of each character.
    \param[in]  pUTCtx      Valid pointer to a util context
    \param[in]  pCharWidth  Array with 256 values defining the width of each character
*/
void utSetCharacterSize(UTIL_CONTEXT *pUTCtx, const CYGFX_U32 *pCharWidth);

/**
    Calculates the width of each character for the given font.
    \param[in]  pUTCtx  Valid pointer to a util context
    \retval    #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utCalcCharacterSize(UTIL_CONTEXT *pUTCtx);

/**
    Sets a surface as the draw target.
    \param[in]  pUTCtx  Valid pointer to a util context
    \param[in]  pTarget Target surface. It may include matrix parameters to move or mirror the bitmap.
    \note               The utility library will use the target pointer for all
                        further draw functions. Therefore, the application must
                        ensure that the target surface object is kept valid.
*/
void utTarget(UTIL_CONTEXT *pUTCtx, CYGFX_SURFACE pTarget);

/**
    Sets the color for drawing functions.
    \param[in]  pUTCtx  Valid pointer to a util context
    \param[in]  r       Red value
    \param[in]  g       Green value
    \param[in]  b       Blue value
    \param[in]  a       Alpha value (currently ignored)
    \note               The color will be used if no brush is set. See #utBrush.
*/
void utColor(UTIL_CONTEXT *pUTCtx, CYGFX_U08 r, CYGFX_U08 g, CYGFX_U08 b, CYGFX_U08 a);

/**
    Sets a surface as brush for drawing functions.
    \param[in]  pUTCtx   Valid pointer to a util context
    \param[in]  sBrush   Brush surface. It may include matrix parameters to move or mirror the bitmap.
                         If sBrush = 0, the current brush will be detached and the #utColor will be used for
                         further drawing operations.
    \param[in] mBrushMat Matrix for brush (mask) surface
    \note                The utility library will use the brush pointer for all further draw functions. Therefore,
                         the application must ensure that the brush surface object is kept valid.
*/
void utBrush(UTIL_CONTEXT *pUTCtx, CYGFX_SURFACE sBrush, Mat3x2 mBrushMat);

/**
    Sets the filter mode for drawing operations.
    \param[in]  pUTCtx   Valid pointer to a util context
    \param[in]  filter   Filter type. Default: CYGFX_GEN_FILTER_NEAREST.
*/
void utFilter(UTIL_CONTEXT *pUTCtx, CYGFX_U32 filter);

/**
    Sets the linear light properties.
    \param[in]  pUTCtx   Valid pointer to a util context
    \param[in]  gammaValue Gamma operation. See ::CYGFX_BE_GAMMA.
*/
void utDrawGammaAttr(UTIL_CONTEXT *pUTCtx, CYGFX_BE_GAMMA gammaValue);

/**
    Sets the line-end type for line drawing operations.
    \param[in]  pUTCtx   Valid pointer to a util context
    \param[in]  type     Line-end type. Default: UT_LINE_END_SQUARE.
*/
void utLineEnd(UTIL_CONTEXT *pUTCtx, UTIL_LINE_END type);

/**
    Sets the line width for line drawing operations.
    \param[in]  pUTCtx   Valid pointer to a util context
    \param[in]  fWidth   Line width. Default: 1.0.
*/
void utLineWidth(UTIL_CONTEXT *pUTCtx, CYGFX_FLOAT fWidth);

/**
    Sets the point width for point drawing operations.
    \param[in]  pUTCtx   Valid pointer to a util context
    \param[in]  fWidth   Point width. Default: 1.0.
*/
void utPointSize(UTIL_CONTEXT *pUTCtx, CYGFX_FLOAT fWidth);

/**
    Draws a point with the point center equal to the pixel x,y center position.
    \note               This function requires a previously called #utInitPoint.
    \param[in]  pUTCtx  Valid pointer to a util context
    \param[in]  x       x coordinate
    \param[in]  y       y coordinate
    \retval            #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utPoint(UTIL_CONTEXT *pUTCtx, CYGFX_S32 x, CYGFX_S32 y);

/**
    Draws a point with the point center equal to the upper-left pixel x,y position.
    \note               This function requires a previously called #utInitPoint.
    \param[in]  pUTCtx  Valid pointer to a util context
    \param[in]  x       x coordinate
    \param[in]  y       y coordinate
    \retval             #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utPointf(UTIL_CONTEXT *pUTCtx, CYGFX_FLOAT x, CYGFX_FLOAT y);

/**
    Draws a line from the center of the x1, y1 pixel to the center of the x2, y2, pixel.
    \note               If UT_LINE_END_ROUND is selected, this function requires a previously called #utInitPoint.
    \param[in]  pUTCtx  Valid pointer to a util context
    \param[in]  x1      x coordinate of the start pixel
    \param[in]  y1      y coordinate of the start pixel
    \param[in]  x2      x coordinate of the end pixel
    \param[in]  y2      y coordinate of the end pixel
    \retval             #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utLine(UTIL_CONTEXT *pUTCtx, CYGFX_S32 x1, CYGFX_S32 y1, CYGFX_S32 x2, CYGFX_S32 y2);

/**
    Draws a line from the upper-left coordinate of the x1, y1 pixel to the upper-left coordinate of the x2, y2, pixel.
    \note               If UT_LINE_END_ROUND is selected, this function requires a previously called #utInitPoint.
    \param[in]  pUTCtx  Valid pointer to a util context
    \param[in]  x1      x coordinate of the start pixel
    \param[in]  y1      y coordinate of the start pixel
    \param[in]  x2      x coordinate of the end pixel
    \param[in]  y2      y coordinate of the end pixel
    \retval             #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utLinef(UTIL_CONTEXT *pUTCtx, CYGFX_FLOAT x1, CYGFX_FLOAT y1, CYGFX_FLOAT x2, CYGFX_FLOAT y2);

/**
    Draws a rectangle.
    \param[in]  pUTCtx   Valid pointer to a util context
    \param[in]  x        x start coordinate
    \param[in]  y        y start coordinate
    \param[in]  w        width of the rectangle
    \param[in]  h        height of the rectangle
    \retval              #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utRect(UTIL_CONTEXT *pUTCtx, CYGFX_S32 x, CYGFX_S32 y, CYGFX_U32 w, CYGFX_U32 h);

/**
    Draws a rectangle.
    \note               This function requires a previously called #utInitPoint.
    \param[in]  pUTCtx  Valid pointer to a util context
    \param[in]  x       x start coordinate
    \param[in]  y       y start coordinate
    \param[in]  w       Width of the rectangle
    \param[in]  h       Height of the rectangle
    \param[in]  rx      Specifies the width of the ellipse used to draw the rounded corners
    \param[in]  ry      Specifies the height of the ellipse used to draw the rounded corners
    \retval             #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utRoundRect(UTIL_CONTEXT *pUTCtx, CYGFX_S32 x, CYGFX_S32 y, CYGFX_S32 w, CYGFX_S32 h, CYGFX_S32 rx, CYGFX_S32 ry);

/**
    Fills the target with color 0.
    \param[in]  pUTCtx   Valid pointer to a util context
    \retval              #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utClear(UTIL_CONTEXT *pUTCtx);

/**
    Writes a character string at the specified location.
    \note               This function requires a previously called #utSetFont.
    \param[in]  pUTCtx  Valid pointer to a util context
    \param[in]  x       x start coordinate
    \param[in]  y       y start coordinate
    \param[in]  text    Points to the character string to be drawn
    \retval             #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utTextOut(UTIL_CONTEXT *pUTCtx, CYGFX_S32 x, CYGFX_S32 y,  CYGFX_CHAR* text);

/**
    Writes a scaled character string at the specified location.	
    \param[in]  pUTCtx   Valid pointer to a util context
    \param[in]  x        x coordinate
    \param[in]  y        y coordinate
    \param[in]  fsx      Scale factor for x direction
    \param[in]  fsy      scale factor for y direction
    \param[in]  Pos      Text position relative to the coordinate
    \param[in]  text     Points to the character string to be drawn
    \retval              #CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utTextOutEx(UTIL_CONTEXT *pUTCtx, CYGFX_S32 x, CYGFX_S32 y, CYGFX_FLOAT fsx, CYGFX_FLOAT fsy, UTIL_TEXT_POS Pos,  CYGFX_CHAR* text);

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* PE_DRAWING_H */
