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
    \file        de_util.h
    \brief       Defines helper functions for drawing
*/

#ifndef DE_UTIL_H
#define DE_UTIL_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup de_utils Utilities for the Drawing Engine
    Functions in this block support drawing of simple objects using the
    VIDEOSS Drawing Engine.

    To use these functions, a valid draw context is required.
\{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

#include "de_util_type.h"

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
    Adds a move instruction to the current draw path.

    \param[in,out] beCtx Context object
    \param[in] x0 x coordinate of the target position
    \param[in] y0 y coordinate of the target position
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDePathMoveTo(CYGFX_BE_CONTEXT beCtx,
                           CYGFX_FLOAT      x0,
                           CYGFX_FLOAT      y0);

/**
    Adds a line instruction to the current draw path.
    The line starts at the end position of the last
    path command and ends with the given coordinate x0, y0.

    \param[in,out] beCtx Context object
    \param[in] x0 x coordinate of the line end position
    \param[in] y0 y coordinate of the line end position
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDePathLineTo(CYGFX_BE_CONTEXT beCtx,
                           CYGFX_FLOAT      x0,
                           CYGFX_FLOAT      y0);

/**
    Adds a Quadratic Bezier curve to the current draw path.
    The curve starts at the end position of the last
    path command and ends with the given coordinate x1, y1.
    The coordinates x0 and y0 define the control point of the curve.

    \param[in,out] beCtx Context object
    \param[in] x0 x coordinate of the control point
    \param[in] y0 y coordinate of the control point
    \param[in] x1 x coordinate of the target position
    \param[in] y1 y coordinate of the target position
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDePathQuadraticBezierTo(CYGFX_BE_CONTEXT beCtx,
                                      CYGFX_FLOAT      x0,
                                      CYGFX_FLOAT      y0,
                                      CYGFX_FLOAT      x1,
                                      CYGFX_FLOAT      y1);

/**
    Adds a Cubic Bezier curve to the current draw path.
    The curve starts at the end position of the last
    path command and ends with the given coordinate x2, y2.
    The coordinates x0, y0, x1, and y1 define the control points of the curve.

    \param[in,out] beCtx Context object
    \param[in] x0 x coordinate of control point 1
    \param[in] y0 y coordinate of control point 1
    \param[in] x1 x coordinate of control point 2
    \param[in] y1 y coordinate of control point 2
    \param[in] x2 x coordinate of the target position
    \param[in] y2 y coordinate of the target position
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDePathCubicBezierTo(CYGFX_BE_CONTEXT beCtx,
                                  CYGFX_FLOAT     x0,
                                  CYGFX_FLOAT     y0,
                                  CYGFX_FLOAT     x1,
                                  CYGFX_FLOAT     y1,
                                  CYGFX_FLOAT     x2,
                                  CYGFX_FLOAT     y2);



/**
    Draws a rectangle.

    \param[in,out] ctx Context object
    \param[in] x x coordinate of the lower left corner
    \param[in] y y coordinate of the lower left corner
    \param[in] w Width of the rectangle
    \param[in] h Height of the rectangle
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawRect(CYGFX_BE_CONTEXT ctx,
                         CYGFX_FLOAT      x,
                         CYGFX_FLOAT      y,
                         CYGFX_FLOAT      w,
                         CYGFX_FLOAT      h);

/**
    Draws a rectangle with round corners.

    \param[in,out] ctx Context object
    \param[in] x x coordinate of the lower left corner
    \param[in] y y coordinate of the lower left corner
    \param[in] w Width of the rectangle
    \param[in] h Height of the rectangle
    \param[in] r Radius of the corners
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawRoundRect(CYGFX_BE_CONTEXT ctx,
                              CYGFX_FLOAT      x,
                              CYGFX_FLOAT      y,
                              CYGFX_FLOAT      w,
                              CYGFX_FLOAT      h,
                              CYGFX_FLOAT      r);

/**
    Draws a circle.

    \param[in,out] ctx Context object
    \param[in] x x coordinate of the circle's center
    \param[in] y y coordinate of the circle's center
    \param[in] r Radius of the circle
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawCircle(CYGFX_BE_CONTEXT ctx,
                           CYGFX_FLOAT      x,
                           CYGFX_FLOAT      y,
                           CYGFX_FLOAT      r);


/**
    Draws an ellipse.

    \param[in,out] ctx Context object
    \param[in] cx x coordinate of the ellipse's center
    \param[in] cy y coordinate of the ellipse's center
    \param[in] halfWidth Horizontal radius of the ellipse
    \param[in] halfHeight Vertical radius of the ellipse
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawEllipse(CYGFX_BE_CONTEXT ctx,
                            CYGFX_FLOAT      cx,
                            CYGFX_FLOAT      cy,
                            CYGFX_FLOAT      halfWidth,
                            CYGFX_FLOAT      halfHeight);

/**
    Draws a circular arc.

    \param[in,out] ctx Context object
    \param[in] x x coordinate of the center
    \param[in] y y coordinate of the center
    \param[in] ri Inner radius
    \param[in] ro Outer radius
    \param[in] as Start angle in degrees
    \param[in] ae End angle in degrees
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawArc(CYGFX_BE_CONTEXT ctx,
                        CYGFX_FLOAT      x,
                        CYGFX_FLOAT      y,
                        CYGFX_FLOAT      ri,
                        CYGFX_FLOAT      ro,
                        CYGFX_FLOAT      as,
                        CYGFX_FLOAT      ae);

/**
    Draws a flower.

    \param[in,out] ctx Context object
    \param[in] x x coordinate of the center
    \param[in] y y coordinate of the center
    \param[in] r1 Inner radius
    \param[in] r2 Outer radius
    \param[in] cnt Number of leafs
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawFlower(CYGFX_BE_CONTEXT ctx,
                           CYGFX_FLOAT      x,
                           CYGFX_FLOAT      y,
                           CYGFX_FLOAT      r1,
                           CYGFX_FLOAT      r2,
                           CYGFX_U32        cnt);

/**
    Draws a star.

    \param[in,out] ctx Context object
    \param[in] x x coordinate of the center
    \param[in] y y coordinate of the center
    \param[in] r1 Inner radius
    \param[in] r2 Outer radius
    \param[in] cnt Number of corners
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawStar(CYGFX_BE_CONTEXT ctx,
                         CYGFX_FLOAT      x,
                         CYGFX_FLOAT      y,
                         CYGFX_FLOAT      r1,
                         CYGFX_FLOAT      r2,
                         CYGFX_U32        cnt);

/**
    Draws a line.

    \param[in,out] ctx Context object
    \param[in] x0 x coordinate of the start point
    \param[in] y0 y coordinate of the start point
    \param[in] x1 x coordinate of the end point
    \param[in] y1 y coordinate of the end point
    \param[in] w Width of the line
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeLine(CYGFX_BE_CONTEXT ctx,
                     CYGFX_FLOAT      x0,
                     CYGFX_FLOAT      y0,
                     CYGFX_FLOAT      x1,
                     CYGFX_FLOAT      y1,
                     CYGFX_FLOAT      w);

/**
    Draws an arrow.

    \param[in,out] ctx Context object
    \param[in] x0 x coordinate of the start point
    \param[in] y0 y coordinate of the start point
    \param[in] x1 x coordinate of the arrow head
    \param[in] y1 y coordinate of the arrow head
    \param[in] w Width of the arrow
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeArrow(CYGFX_BE_CONTEXT ctx,
                      CYGFX_FLOAT      x0,
                      CYGFX_FLOAT      y0,
                      CYGFX_FLOAT      x1,
                      CYGFX_FLOAT      y1,
                      CYGFX_FLOAT      w);

/**
    Draws a quadratic Bezier curve.

    \param[in,out] ctx Context object
    \param[in] x0 x coordinate of the start point
    \param[in] y0 y coordinate of the start point
    \param[in] x1 x coordinate of the control point
    \param[in] y1 y coordinate of the control point
    \param[in] x2 x coordinate of the end point
    \param[in] y2 y coordinate of the end point
    \param[in] w Width of the line
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeQuad(CYGFX_BE_CONTEXT ctx,
                     CYGFX_FLOAT      x0,
                     CYGFX_FLOAT      y0,
                     CYGFX_FLOAT      x1,
                     CYGFX_FLOAT      y1,
                     CYGFX_FLOAT      x2,
                     CYGFX_FLOAT      y2,
                     CYGFX_FLOAT      w);

/**
    Draws a quadratic Bezier curve with an arrow at the end.

    \param[in,out] ctx Context object
    \param[in] x0 x coordinate of the start point
    \param[in] y0 y coordinate of the start point
    \param[in] x1 x coordinate of the control point
    \param[in] y1 y coordinate of the control point
    \param[in] x2 x coordinate of the end point (= arrow head)
    \param[in] y2 y coordinate of the end point (= arrow head)
    \param[in] w Width of the line
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeQuadArrow(CYGFX_BE_CONTEXT ctx,
                          CYGFX_FLOAT      x0,
                          CYGFX_FLOAT      y0,
                          CYGFX_FLOAT      x1,
                          CYGFX_FLOAT      y1,
                          CYGFX_FLOAT      x2,
                          CYGFX_FLOAT      y2,
                          CYGFX_FLOAT      w);

/**
    Draws a geometry described by a string similar to it being used for path descriptions in SVG files.
    A detailed description can be found here: http://www.w3.org/TR/SVG11/paths.html.
    Elliptical curve commands (a,A) are currently not supported.

    Example: The following string will draw a triangle \code "M 100 100 L 300 100 L 200 300 z" \endcode.


    \param[in,out] ctx Context object
    \param[in] xo x offset. This value will be added to the geometry described in the string.
    \param[in] yo y offset. This value will be added to the geometry described in the string.
    \param[in] pFigure This parameter must point to the string with the draw instructions.
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawForm(CYGFX_BE_CONTEXT   ctx,
                         CYGFX_FLOAT        xo,
                         CYGFX_FLOAT        yo,
                         const  CYGFX_CHAR* pFigure);

/**
    Draws one or more geometries described with different colors in a structure.

    \param[in,out] ctx Context object
    \param[in] xo x offset. This value will be added to the geometry described in the string.
    \param[in] yo y offset. This value will be added to the geometry described in the string.
    \param[in] pGeo Pointer to a DE_UTIL_GEOMETRY structure
    \param[in] pMatrix Matrix values is a float array.
                If this parameter is non-zero, it must point to a
            ::CYGFX_BE_GEO_MATRIX_FORMAT_3X2 object that can be used to translate,
            scale, or rotate the whole geometry. pGeo can be zero if no transformations
            are required.
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawImage(CYGFX_BE_CONTEXT        ctx,
                          CYGFX_FLOAT             xo,
                          CYGFX_FLOAT             yo,
                          const DE_UTIL_GEOMETRY* pGeo,
                          CYGFX_FLOAT            *pMatrix);


/**
    Draws a logo.

    \param[in,out] ctx Context object
    \param[in] x x position of the start point
    \param[in] y y position of the start point
    \param[in] w Width of the logo. This parameter can be zero if the h parameter is defined.
    \param[in] h Height of the logo. This parameter can be zero if the w parameter is defined.
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawLogo(CYGFX_BE_CONTEXT ctx,
                         CYGFX_U32        x,
                         CYGFX_U32        y,
                         CYGFX_U32        w,
                         CYGFX_U32        h);

/**
    Fills the surface with a button image.

    \param[in,out] ctx Context object
    \param[in] surf Surface. It must point to valid memory.
    \param[in] r Radius of the round corners
    \retval CYGFX_OK on success; the related error code otherwise.
*/
CYGFX_ERROR utDeDrawButton(CYGFX_BE_CONTEXT ctx,
                           CYGFX_SURFACE    surf,
                           CYGFX_U08        r);

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* DE_UTIL_H */
