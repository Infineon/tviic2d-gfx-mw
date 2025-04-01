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
 * \file    cygfx_draweng.h
 */


#ifndef CYGFX_DRAWENG_H
#define CYGFX_DRAWENG_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In Doxygen comments, character sequences such as double slash are used.
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
/**
* \addtogroup cygfx_draweng
* \code #include "cygfx_draweng.h" \endcode
* \brief Drawing Engine API

The drawing engine API provides all functions to draw outline objects using the
VIDEOSS draw hardware.

The DrawEng API is an extension of the \ref cygfx_bliteng. Similar to blit
operations, it requires a BlitEng context and at least a store surface to draw something.
The path elements (see below) define an outline object.
The color of the object is defined by the following:
- the pattern of the surface that is bound to the SRC, or
- the SRC constant color if no surface is bound to SRC (see ::CYGFX_BE_SURF_ATTR_COLOR).

That means drawing an object is similar to blitting an SRC to a STORE surface
with an alpha buffer as the MASK surface.

For most use cases, draw objects must be blended to a background. It means that the target surface
will be bound to STORE and DST.

See also \ref overview_draweng.

\section Drawing_Commands  Path elements

To draw something, it is required to create a path by adding path elements to the
context. The elements must describe one or more shapes to be filled.
A path can be created by one or more calls of
::CyGfx_DeAppendPathData. A ::CyGfx_DeDraw call draws the path and resets the
path.
The start point for each new path element (except MOVE_TO) is always the end
point of the last path element.
That's why a LINE_TO element needs only an 'x' and a 'y' target coordinate.
If the path does not start with a MOVE_TO instruction, the 0,0 coordinate is
used as the start coordinate.

Path coordinates can be absolute or relative. Relative coordinates describe
only the offset to the x or y position of the end coordinate of the previous path element.

\note <ul>
  <li>The path must be closed for drawing. This can be realized by adding an
      CYGFX_DE_INSTR_CLOSE_PATH as the final path element.</li>
  <li>The application must ensure that the path is not self-crossing.</li>
  <li>The path geometry transformed by the given geometry matrix (if any) must not
      exceed the dimensions of the given alpha buffer.</li>
  </ul>

Depending on the element type, a different number of coordinates is required for
this path element. The following list describes the available path elements
and the required coordinates. xe and ye represent the end-coordinates from the previous element.

<table border="1">
  <tr>
    <th>Type</th>
    <th>Segment name</th>
    <th>Required coordinates</th>
    <th>Implicit coordinates</th>
  </tr>
  <tr>
    <td>Close path</td>
    <td>::CYGFX_DE_INSTR_CLOSE_PATH</td>
    <td></td>
    <td>Equal to MOVE_TO xs, ys</td>
  </tr>
  <tr>
    <td>Move</td>
    <td>::CYGFX_DE_INSTR_MOVE_TO_ABS, ::CYGFX_DE_INSTR_MOVE_TO_REL</td>
    <td>x0, y0 (Start point for next shape)</td>
    <td></td>
  </tr>
  <tr>
    <td>Line</td>
    <td>::CYGFX_DE_INSTR_LINE_TO_ABS, ::CYGFX_DE_INSTR_LINE_TO_REL</td>
    <td>x0, y0 (End point)</td>
    <td></td>
  </tr>
  <tr>
    <td>Horizontal line</td>
    <td>::CYGFX_DE_INSTR_HLINE_TO_ABS, ::CYGFX_DE_INSTR_HLINE_TO_REL</td>
    <td>x0 (End x coordinate)</td>
    <td>y0 = ye</td>
  </tr>
  <tr>
    <td>Vertical line</td>
    <td>::CYGFX_DE_INSTR_VLINE_TO_ABS, ::CYGFX_DE_INSTR_VLINE_TO_REL</td>
    <td>y0 (End y coordinate)</td>
    <td>x0 = xe</td>
  </tr>
  <tr>
    <td>Quadratic Bezier</td>
    <td>::CYGFX_DE_INSTR_QUAD_TO_ABS, ::CYGFX_DE_INSTR_QUAD_TO_REL</td>
    <td>x0,y0 (Control point), x1, y1 (End point)</td>
    <td></td>
  </tr>
  <tr>
    <td>Cubic Bezier</td>
    <td>::CYGFX_DE_INSTR_CUBIC_TO_ABS, ::CYGFX_DE_INSTR_CUBIC_TO_REL</td>
    <td>x0,y0 (First control point 1), x1, y1 (Second control point 2), x2, y2 (End point)</td>
    <td></td>
  </tr>
  <tr>
    <td>Smooth quadratic Bezier</td>
    <td>::CYGFX_DE_INSTR_SQUAD_TO_ABS, ::CYGFX_DE_INSTR_SQUAD_TO_REL</td>
    <td>x0, y0 (End point)</td>
    <td>Control point = 2*xe-xc, 2*ye-yc </td>
  </tr>
  <tr>
    <td>Smooth cubic Bezier</td>
    <td>::CYGFX_DE_INSTR_SCUBIC_TO_ABS, ::CYGFX_DE_INSTR_SCUBIC_TO_REL</td>
    <td>x0, y0 (Second control point 2), x2, y2 (End point)</td>
    <td>First control point = 2*xe-xc, 2*ye-yc </td>
  </tr>
  </table>

  <ul>
  <li>xs, ys is the start coordinate of the sub-path (last MOVE_TO coordinate).</li>
  <li>xe, ye is the end coordinate of the last curve.</li>
  <li>xc, yc is the (last) control point of the previous curve of the same type (quadratic or cubic) or the start point of the
current curve.</li>
  </ul>


\section sample Code sample
The following code sample shows the function calls required to draw a triangle:
\code
    // Start the driver.
    CyGfx_SysInitializeDriver();
    // Assign a VRAM block to buffer blit operations.
    CyGfx_BeSetTaskInstructionBuffer(CYGFX_BE_TASK_MEM_PRIO_1, add_pixeng, 1024);
    // Prepare a surface object.
    CyGfx_SmResetSurfaceObject(store);
    // Assign a pixel buffer in VRAM.
    CyGfx_SmAssignBuffer(store, 320, 240, CYGFX_SM_FORMAT_R8G8B8A8, add_store, 0);
    // Prepare a BlitEng context.
    CyGfx_BeResetContext(ctx);
    // Attach the target surface and allow blending.
    CyGfx_BeBindSurface(ctx, CYGFX_BE_TARGET_STORE | CYGFX_BE_TARGET_DST, store);

    // Assign a path buffer and alpha buffer.
    CyGfx_DeSetPathBuffer(ctx, addCmdLst, 1024);
    CyGfx_DeSetAlphaBuffer(64, 64, 8, addAlpha, 64 * 64 * 2 / 8);

    // Now, start drawing.

    // The SRC surface defines the fill color pixels. A mask is not used,
    // so a surface is not needed; however, the color is to be changed to blue.
    CyGfx_BeSetSurfAttribute(ctx, CYGFX_BE_TARGET_SRC, CYGFX_BE_SURF_ATTR_COLOR, CYGFX_SM_COLOR_TO_RGBA(0, 0, 255, 255));

    // Define a path element array.
    CYGFX_U08 PathSegments[] = {CYGFX_DE_INSTR_MOVE_TO_ABS, CYGFX_DE_INSTR_LINE_TO_ABS, CYGFX_DE_INSTR_LINE_TO_ABS, CYGFX_DE_INSTR_CLOSE_PATH};
    // Define a related coordinate array representing a triangle.
    float PathData[] = {0, 0, 50, 100, 100, 0};

    // Set the coordinate format to float.
    CyGfx_DeSetAttribute(ctx, CYGFX_DE_ATTR_DATA_FORMAT, CYGFX_DE_DATA_FORMAT_FLOAT);
    // Push the data into the path queue.
    CyGfx_DeAppendPathData(ctx, 4, PathSegments, PathData);

    // Finally, start the drawing at pixel position 20, 20.
    CyGfx_DeDraw(ctx, 20, 20);


\endcode


*/



/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define CYGFX_DE_MIN_DRAW_DIMENSION ((CYGFX_U32)(0))        /**< Minimum supported width and height of the draw area */
#define CYGFX_DE_MAX_DRAW_WIDTH     ((CYGFX_U32)(1023))     /**< Maximum supported width of the draw area */
#define CYGFX_DE_MAX_DRAW_HEIGHT    ((CYGFX_U32)(720))      /**< Maximum supported height of the draw area */
#define CYGFX_MAX_SIZE_PATH_BUFFER  ((CYGFX_U32)0x1000000u) /**< Maximum size for the drawing path buffer */
#define CYGFX_MIN_SIZE_PATH_BUFFER  ((CYGFX_U32)0x4u)       /**< Minumum size for the drawing path buffer so that at least one drawing job can be carried out */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/** \name Drawing engine fill rules */
/** \{ */
typedef CYGFX_U08 CYGFX_DE_FILLRULE;                      /**< Type for drawing fill rules */
#define CYGFX_DE_FILLRULE_EVENODD ((CYGFX_DE_FILLRULE)0u) /**< Fill rule even/odd: an even edge count is outside; an odd edge count is inside. */
#define CYGFX_DE_FILLRULE_NONZERO ((CYGFX_DE_FILLRULE)1u) /**< Fill rule non-zero: an edge count unequal to zero is inside. */
/** \} */

/** \name Drawing engine data formats */
/** \{ */
typedef CYGFX_U08 CYGFX_DE_DATA_FORMAT;                      /**< Type for drawing formats */
#define CYGFX_DE_DATA_FORMAT_S16_6 ((CYGFX_DE_DATA_FORMAT)0) /**< Default: 32-bit integer representing a signed fixed-point s26.6 notation */
#define CYGFX_DE_DATA_FORMAT_FLOAT ((CYGFX_DE_DATA_FORMAT)1) /**< 32-bit float */
#define CYGFX_DE_DATA_FORMAT_S32   ((CYGFX_DE_DATA_FORMAT)2) /**< 32-bit signed integer */
#define CYGFX_DE_DATA_FORMAT_S16   ((CYGFX_DE_DATA_FORMAT)3) /**< 16-bit signed integer */
#define CYGFX_DE_DATA_FORMAT_S08   ((CYGFX_DE_DATA_FORMAT)4) /**< 8-bit signed integer */
/** \} */

/** \name Drawing engine instructions */
/** \{ */
typedef CYGFX_U08 CYGFX_DE_INSTR;                          /**< Type for drawing instructions */
#define CYGFX_DE_INSTR_CLOSE_PATH    ((CYGFX_DE_INSTR)  0) /**< Close path instruction (add a MOVE_TO to the start position of the curve) */
#define CYGFX_DE_INSTR_MOVE_TO_ABS   ((CYGFX_DE_INSTR)  2) /**< Move To instruction with absolute coordinates */
#define CYGFX_DE_INSTR_MOVE_TO_REL   ((CYGFX_DE_INSTR)  3) /**< Move To instruction with relative coordinates */
#define CYGFX_DE_INSTR_LINE_TO_ABS   ((CYGFX_DE_INSTR)  4) /**< Line To instruction with absolute coordinates */
#define CYGFX_DE_INSTR_LINE_TO_REL   ((CYGFX_DE_INSTR)  5) /**< Line To instruction with relative coordinates */
#define CYGFX_DE_INSTR_HLINE_TO_ABS  ((CYGFX_DE_INSTR)  6) /**< Horizontal Line To instruction with absolute coordinates */
#define CYGFX_DE_INSTR_HLINE_TO_REL  ((CYGFX_DE_INSTR)  7) /**< Horizontal Line To instruction with relative coordinates */
#define CYGFX_DE_INSTR_VLINE_TO_ABS  ((CYGFX_DE_INSTR)  8) /**< Vertical Line To instruction with absolute coordinates */
#define CYGFX_DE_INSTR_VLINE_TO_REL  ((CYGFX_DE_INSTR)  9) /**< Vertical Line To instruction with relative coordinates */
#define CYGFX_DE_INSTR_QUAD_TO_ABS   ((CYGFX_DE_INSTR) 10) /**< Quadratic Bezier To instruction with absolute coordinates */
#define CYGFX_DE_INSTR_QUAD_TO_REL   ((CYGFX_DE_INSTR) 11) /**< Quadratic Bezier To instruction with relative coordinates */
#define CYGFX_DE_INSTR_CUBIC_TO_ABS  ((CYGFX_DE_INSTR) 12) /**< Cubic Bezier To instruction with absolute coordinates
    \note Cubic curves are not supported by HW, but the driver will add four quadratic curves to approximate it. */
#define CYGFX_DE_INSTR_CUBIC_TO_REL  ((CYGFX_DE_INSTR) 13) /**< Cubic Bezier To instruction with relative coordinates
    \note Cubic curves are not supported by HW, but the driver will add four quadratic curves to approximate it. */
#define CYGFX_DE_INSTR_SQUAD_TO_ABS  ((CYGFX_DE_INSTR) 14) /**< Smooth Quadratic Bezier To instruction with absolute coordinates */
#define CYGFX_DE_INSTR_SQUAD_TO_REL  ((CYGFX_DE_INSTR) 15) /**< Smooth Quadratic Bezier To instruction with relative coordinates */
#define CYGFX_DE_INSTR_SCUBIC_TO_ABS ((CYGFX_DE_INSTR) 16) /**< Smooth Cubic Bezier To instruction with absolute coordinates
    \note Cubic curves are not supported by HW, but the driver will add four quadratic curves to approximate it. */
#define CYGFX_DE_INSTR_SCUBIC_TO_REL ((CYGFX_DE_INSTR) 17) /**< Smooth Cubic Bezier To instruction with relative coordinates
    \note Cubic curves are not supported by HW, but the driver will add four quadratic curves to approximate it. */
/** \} */

/** \name Drawing engine attributes */
/** \{ */
typedef CYGFX_U08 CYGFX_DE_ATTR;                             /**< Type for drawing attributes */
#define CYGFX_DE_ATTR_FILLRULE            ((CYGFX_DE_ATTR)0) /**< Defines the fill rule for the geometries. Can be ::CYGFX_DE_FILLRULE_EVENODD (default) or ::CYGFX_DE_FILLRULE_NONZERO. */
#define CYGFX_DE_ATTR_ALLOW_REDRAW        ((CYGFX_DE_ATTR)1) /**< Defines the behavior of CyGfx_DeDraw() if no path data where added:
     0: Call will return with no action (default)
     1: The last path will be redrawn with current properties. This can speed up rendering of a glyph with a shadow because the outline calculation can be stepped. */
#define CYGFX_DE_ATTR_DATA_FORMAT         ((CYGFX_DE_ATTR)2) /**< Defines the data format of the coordinates in the pPathData array of the next CyGfx_DeAppendPathData call. Valid parameters are CYGFX_DE_DATA_FORMAT. CYGFX_DE_DATA_FORMAT_S16_6 is the default value. */
#define CYGFX_DE_ATTR_MIN_PATH_BUFFER     ((CYGFX_DE_ATTR)3) /**< This is a read-only attribute. The returned value represents the smallest available path buffer in bytes during all calls. A function call with this parameter resets the measurement.
    An application can use the returned value to measure the minimum unused size of the path buffer assigned by ::CyGfx_DeSetPathBuffer to optimize memory assignment.
    \note The returned value represents only an approximate value. For performance reasons, the HW status is not read after each instruction. Therefore, the real path buffer minimum can be smaller than the returned value. */
#define CYGFX_DE_ATTR_CURRENT_PATH_BUFFER ((CYGFX_DE_ATTR)4) /**< This is a read-only attribute. The returned value represents the current available path buffer in bytes.
    The returned value can be used by an application to decide whether further render steps should be delayed and continued later because the hardware is currently busy. */
#define CYGFX_DE_ATTR_CURRENT_PATH_USE    ((CYGFX_DE_ATTR)5) /**< This is a read-only attribute.
    The returned value represents the current path buffer usage in bytes if the path buffer should be stored/cached and drawn later using CyGfx_DeDrawPathBuffer(). The returned value must be used as the size parameter in CyGfx_DeDrawPathBuffer(). */
#define CYGFX_DE_ATTR_SUBPIXELGRID        ((CYGFX_DE_ATTR)6) /**< This attribute influences the quality of drawing. It defines the subpixel precision of the draw process.
    Higher SubPixelGrid (multi-sampling) results in better anti-aliased output at the cost of processing time.
    Supported values are CYGFX_DE_SUBPIXELGRID_8, CYGFX_DE_SUBPIXELGRID_4, CYGFX_DE_SUBPIXELGRID_2, and CYGFX_DE_SUBPIXELGRID_1. Default value is CYGFX_DE_SUBPIXELGRID_8.
    \note Rendering quality will be defined by this parameter and the bpp parameter of the CyGfx_DeSetAlphaBuffer function.
    The alpha buffer depth and color depth of the target render buffer should be used with equivalent values.
    Typically, subpixel precision should be set to the next quality level. For example, to get a very good quality, the following settings are recommended:
    Target buffer component depth and Alpha buffer depth = 4, Subpixel grid = CYGFX_DE_SUBPIXELGRID_8. */
#define CYGFX_DE_ATTR_ALPHA_HEIGHT         ((CYGFX_DE_ATTR)7) /**< Height of the draw buffer */
#define CYGFX_DE_ATTR_ALPHA_WIDTH          ((CYGFX_DE_ATTR)8) /**< Width of the draw buffer */
/** \} */

/** \name Drawing engine subpixel grid values */
/** \{ */
typedef CYGFX_U08 CYGFX_DE_SUBPIXELGRID;                   /**< Type of drawing engine subpixel grid values */
#define CYGFX_DE_SUBPIXELGRID_1 ((CYGFX_DE_SUBPIXELGRID)1) /**< Subpixel grid of 1. Highest processing speed, but lowest drawing quality. */
#define CYGFX_DE_SUBPIXELGRID_2 ((CYGFX_DE_SUBPIXELGRID)2) /**< Subpixel grid of 2. */
#define CYGFX_DE_SUBPIXELGRID_4 ((CYGFX_DE_SUBPIXELGRID)4) /**< Subpixel grid of 4. */
#define CYGFX_DE_SUBPIXELGRID_8 ((CYGFX_DE_SUBPIXELGRID)8) /**< Subpixel grid of 8. Lowest processing speed, but highest drawing quality. */
/** \} */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Sets an operation buffer for the drawing engine.
    \note The draw hardware needs to store an intermediate alpha image. The width
    and height represent the maximum size of a draw object in pixels. If the final
    draw object exceeds the dimensions, the final image will be cut at the upper-
    right side. bpp represents the bits used to store the alpha information.
    Usually, a double-buffer scheme is used, so the required draw buffer size in
    bytes can be calculated with the following formula:
    \code
    size = (WIDTH * BPP + 7) / 8 * HEIGHT * 2;
    \endcode
    It is also possible to assign only half the buffer size if VRAM size is limited.

    This will force the driver to use a single-buffer scheme, which will result in
    performance drop.

    \param [in] width  Maximum width of a draw object in pixels (1...
                       ::CYGFX_DE_MAX_DRAW_WIDTH)
    \param [in] height  Maximum height of a draw object in pixels (1...
                        ::CYGFX_DE_MAX_DRAW_HEIGHT)
    \param [in] bpp  Bit per pixel of the buffer that stores the intermediate alpha
                     image. This value can be 1, 2, 4, or 8. (See also ::CYGFX_DE_ATTR_SUBPIXELGRID.)
    \param [in] bufferAddress  Address of a buffer to store the intermediate alpha
                               image
    \param [in] bufferSize  Size of the buffer defined by bufferAddress

    \retval   ::CYGFX_OK On success
    \retval   ::CYGFX_ERP_ERR_DE_INVALID_PARAMETER Invalid specification for width
    / height, or alpha buffer bpp parameter used
    \retval ::CYGFX_ERP_ERR_DE_WRONG_ALPHA_BUFFER_SIZE The drawing buffer is too
    small
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DeSetAlphaBuffer( CYGFX_U32 width,
                                                 CYGFX_U32 height,
                                                 CYGFX_U32 bpp,
                                                 void*     bufferAddress,
                                                 CYGFX_U32 bufferSize);

/**
    Sets the buffer for path instruction buffering. This path buffer is similar to
    the blit instruction buffer that must be defined by
    ::CyGfx_BeSetTaskInstructionBuffer. The buffer size must be large enough to queue,
    in the worst-case scenario, all draw instructions of a frame-rendering process.
    The driver reports an error if the path buffer is full and new draw
    instructions are added.
    \note If different contexts beCtx are used for drawing, each context needs
    its own path buffer.
    \note Before switching the context or assigning a new path buffer, the draw
    commands previously submitted by \ref CyGfx_DeAppendPathData must first be
    executed using \ref CyGfx_DeDraw.
    Each time if switching the draw command buffer the HW needs to start at the
    beginning of the buffer. That's why the driver always adds new instructions
    at the begin in this case. But this requires the following application
    synchronization to avoid overwriting the previous instructions:
    - Draw and commit with the first context, get a sync for this drawings
    (\ref CyGfx_BeGetSync)
    - Draw and commit with the second context
    - Wait until the sync is released (\ref CyGfx_SyncWaitSync)
    - Now it is safe to add new Draw and commit to the first context. An absolute
    safe approach is also to wait always after \ref CyGfx_DeDraw before using a
    different context or avoid using different contexts at all.

    \param [in,out] beCtx  Context object
    \param [in] address  VRAM address of the draw instruction buffer. The VRAM
                         address must be 32-bit aligned.
    \param [in] size  Size of the draw instruction buffer in bytes. The size value
                      must be a power of 2; otherwise the driver reports a warning and reduces the
                      size to the next valid value. Size must be within
                      [CYGFX_MIN_SIZE_PATH_BUFFER, CYGFX_MAX_SIZE_PATH_BUFFER]. The minimum
                      recommended value for the path buffer is 128.

    \retval  ::CYGFX_OK On success
    \retval   ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT The specified context is NULL
    \retval ::CYGFX_ERP_ERR_DE_INVALID_PARAMETER The specified buffer address is NULL.<br>
                                                 The buffer size parameter is not within limits
    \retval ::CYGFX_ERP_ERR_DE_INVALID_PATH_ADDRESS The specified buffer address is
    not 32-bit aligned
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DeSetPathBuffer( CYGFX_BE_CONTEXT beCtx,
                                                void*            address,
                                                CYGFX_U32        size);
/* Deviation from MISRA C:2012 Rule-3.1.
   Justification: In Doxygen comments, character sequences such as double slash are used.
                  This cannot be avoided without losing information. */
/* PRQA S 5133 1 */
/**
    CyGfx_DeAppendPathData is a generic function to add one or more draw
    instructions to the current path.
    It can also be used to add only parts of a draw instruction.
    To add one or more draw instructions, it is required to give a valid
    pPathSegments
    and a pPathData pointer describing the path.
    pPathSegments is an array with draw instructions. Valid draw instructions
    are ::CYGFX_DE_INSTR_MOVE_TO_ABS up to ::CYGFX_DE_INSTR_CUBIC_TO_REL.
    The number of valid draw instructions in the array must be at least numSegments.


    pPathData is the array with related coordinates for draw instructions.
    Note that the amount of coordinates used depends on the types of the given draw
    instructions.
    For example, if numSegments = 3 and pPathSegments points to
    {::CYGFX_DE_INSTR_MOVE_TO_ABS, ::CYGFX_DE_INSTR_HLINE_TO_ABS,
    ::CYGFX_DE_INSTR_QUAD_TO_ABS},
    the driver expects 2+1+4 = 7 coordinates.
    The expected format of the coordinate array can be defined by using the
    ::CYGFX_DE_ATTR_DATA_FORMAT parameter in the ::CyGfx_DeSetAttribute function.
    Independent of the format, each coordinate must be in the range -0x01ffffff ..
    0x01ffffff.
    The production version of the driver does not always check this range.
    In addition to full draw instructions,
    it is possible to add one draw instruction and the related coordinates
    separately.
    In this case, pPathSegments or pPathData must be zero and numSegments defines
    only
    the number of pPathSegments (maximal one in this case) or pPathData coordinates.


    Note that the order must always be draw instruction, coordinate(s),
    coordinate(s), ..., draw instruction,..
    For convenience, it is possible to skip the instruction command except the
    first.
    In this case, the previous instruction command is used for next coordinates.
    The CYGFX_DE_MOVE_TO_... instruction command will be automatically changed
    to CYGFX_DE_LINE_TO_... for further coordinates.
    For example:
    \code
    CYGFX_U08 CommandMove = CYGFX_DE_INSTR_MOVE_TO_ABS;
    CYGFX_U08 CommandQuad = CYGFX_DE_INSTR_QUAD_TO_ABS;
    CYGFX_FLOAT pt1[] = {0, 0};
    // MoveTo
    CYGFX_FLOAT pt2[] = {40, 0};
    // LineTo1
    CYGFX_FLOAT pt3[] = {40, 20};
    // LineTo2
    CYGFX_FLOAT pt4[] = {30, 30};
    // 1. point quad1
    CYGFX_FLOAT pt5[] = {20, 20};
    // 2. point quad1
    CYGFX_FLOAT pt6[] = {10, 10};
    // 1. point quad2
    CYGFX_FLOAT pt7[] = {0, 20};
    // 2. point quad2
    CyGfx_DeAppendPathData(ctx, 1, &CommandMove,NULL);
    CyGfx_DeAppendPathData(ctx, 2, NULL, pt1);
    // A MoveTo
    CyGfx_DeAppendPathData(ctx, 2, NULL, pt2);
    // A LineTo
    CyGfx_DeAppendPathData(ctx, 2, NULL, pt3);
    // A LineTo
    CyGfx_DeAppendPathData(ctx, 1, &CommandQuad,NULL);
    CyGfx_DeAppendPathData(ctx, 2, NULL, pt4);
    // The first point from Quad
    CyGfx_DeAppendPathData(ctx, 2, NULL, pt5);
    // The second point from Quad
    CyGfx_DeAppendPathData(ctx, 2, NULL, pt6);
    // The first point from Quad
    CyGfx_DeAppendPathData(ctx, 2, NULL, pt7);
    // The second point from Quad The CYGFX_DE_INSTR_CLOSE_PATH path
    // will be added automatically by the driver.
    CyGfx_DeDraw(ctx, 0, 0);
    \endcode

    \param [in,out] beCtx  Context object
    \param [in] numSegments  Number of path segments to add if pPathSegments !=
                             NULL, or the number of coordinates in pPathData if pPathSegments == NULL. If
                             numSegments == 0, all previously added path segments will be removed;
                             the application can start adding a new draw path again.
    \param [in] pPathSegments  Pointer to an array with draw segments
    \param [in] pPathData  Pointer to an array with coordinates

    \retval    ::CYGFX_OK On success
    \retval    ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT The specified context is invalid.
    \retval ::CYGFX_ERP_ERR_DE_INVALID_PATH_BUFFER The specified path buffer is
    invalid.
    \retval ::CYGFX_ERP_ERR_DE_WRONG_PATH_SWITCH  CyGfx_DeAppendPathData and CyGfx_DeDraw must not be interrupted by another draw instruction.
     \retval ::CYGFX_ERP_ERR_DE_INVALID_PARAMETER One
    of the following conditions has occurred: adding multiple
    draw instructions without the related coordinate pointer, an invalid drawing
    instruction encountered in the buffer, or invalid data format.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DeAppendPathData( CYGFX_BE_CONTEXT beCtx,
                                                 CYGFX_U32        numSegments,
                                                 const CYGFX_U08* pPathSegments,
                                                 const void*      pPathData);

/**
    Draws the previously added draw instruction and empties the draw path. The
    beCtx object defines the draw properties similar to the ::CyGfx_BeBlt call. In
    this case, the alpha buffer output of the drawing engine replaces the MASK
    surface. If a geometry matrix is defined for the MASK surface (see
    ::CyGfx_BeSetGeoMatrix), path coordinates are modified according to the following
    formula:
    \code
    xout = fMatrix[0] * xin + fMatrix[2] * yin + fMatrix[4] + x
    yout = fMatrix[1] * xin + fMatrix[3] * yin + fMatrix[5] + y
    \endcode
    If no SRC surface is defined for this context, the draw area will be filled
    with the constant color of the SRC surface. If an SRC surface is bound to the
    context, the draw area will be filled with the SRC surface pixel data. It works
    identical to a blit operation with an external alpha. It is recommended to set
    up the context for standard blending: Bind the same surface as DST and STORE. A
    simple copy (DST == null) is also possible; however, the draw area is undefined
    in this case. The geometry matrix for DST is ignored for drawing.
    \note  Note that some other features like warping or FIR filter are not
    supported in draw mode. Compressed or indexed surfaces are not supported. YUV
    surfaces are not supported. Only translation is allowed for the SRC matrix.

    \param [in,out] beCtx  Context object
    \param [in] x  Horizontal offset related to the store buffer
    \param [in] y  Vertical offset related to the store buffer

    \retval    ::CYGFX_OK On success.
    \retval    ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT The specified context is invalid
    or the specified task ID is invalid.
    \retval ::CYGFX_ERP_ERR_BE_INVALID_DIMENSION The specified dimensions (x or y)
    are out of range.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DeDraw( CYGFX_BE_CONTEXT beCtx,
                                       CYGFX_FLOAT      x,
                                       CYGFX_FLOAT      y);

/**
    CyGfx_DeDrawPathBuffer works similar to ::CyGfx_DeDraw; however, in this case,
    it does not execute previously added draw instructions but executes the draw
    instructions of the address buffer. It can be used to draw cached glyphs if
    they are often used.
    To create such a cached glyph buffer, the following steps are required:
    - Assign a new path buffer with ::CyGfx_DeSetPathBuffer.
    - Add all path elements for the glyph.
    - Ensure that the last path element is CYGFX_DE_INSTR_CLOSE_PATH.
    - Get the size of the path buffer being used with the
    ::CYGFX_DE_ATTR_CURRENT_PATH_USE attribute in ::CyGfx_DeGetAttribute.
    - Assign a new path buffer for the next draw instruction.
    - The previously assigned path address can be used with CyGfx_DeDrawPathBuffer.
    Also, different beCtx must not use the same path address.
    \note - Draw commands previously submitted by CyGfx_DeAppendPathData() must be
    executed first using CyGfx_DeDraw().
    \note - Also, check the restrictions of the CyGfx_DeDraw() function.

    \param [in,out] beCtx  Context object
    \param [in] x  Horizontal offset related to the store buffer
    \param [in] y  Vertical offset related to the store buffer
    \param [in] address  VRAM address of the path buffer to draw. The VRAM address
                         must be 32-bit aligned.
    \param [in] size  Size of the path buffer

    \retval    ::CYGFX_OK On success
    \retval    ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT The specified context is invalid
    or the specified task ID is invalid.
    \retval    ::CYGFX_ERP_ERR_BE_INVALID_DIMENSION The specified dimensions (x or y)
    are out of range.
    \retval    ::CYGFX_ERP_ERR_DE_INVALID_PARAMETER The specified size parameter is
    invalid
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DeDrawPathBuffer( CYGFX_BE_CONTEXT beCtx,
                                                 CYGFX_FLOAT      x,
                                                 CYGFX_FLOAT      y,
                                                 void*            address,
                                                 CYGFX_U32        size);

/**
    Gets the drawing engine attributes

    \param [in,out] beCtx  Context object
    \param [in] eName  Name of the attribute. Can be one of ::CYGFX_DE_ATTR.
    \param [out] pValue  Pointer to a value getting the parameter value

    \retval    ::CYGFX_OK On success
    \retval    ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT The specified context structure
    is invalid.
    \retval ::CYGFX_ERP_ERR_DE_INVALID_PARAMETER The pValue specified reference is
    invalid.
    \retval ::CYGFX_ERP_ERR_DE_INVALID_PATH_CACHE Path does not start at the path
    buffer start address.
    \retval ::CYGFX_ERP_ERR_DE_INVALID_ATTRIBUTE The specified attribute does not
    exist.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DeGetAttribute( CYGFX_BE_CONTEXT beCtx,
                                               CYGFX_DE_ATTR    eName,
                                               CYGFX_U32*       pValue);

/**
    Sets an attribute for drawing engine operations

    \param [in,out] beCtx  Context object
    \param [in] eName  Name of the attribute. Can be one of ::CYGFX_DE_ATTR.
    \param [in] value  Parameter for the argument target (See ::CYGFX_DE_ATTR
                       description)

    \retval    ::CYGFX_OK On success.
    \retval    ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT The specified context structure
    is invalid.
    \retval    ::CYGFX_ERP_ERR_DE_INVALID_PARAMETER The specified winding parameter
    does not exist. If the selected attribute is ::CYGFX_DE_ATTR_ALLOW_REDRAW, the value specified is invalid. If the selected attribute is
    ::CYGFX_DE_ATTR_DATA_FORMAT, the data format is invalid. If the selected
    attribute is ::CYGFX_DE_ATTR_SUBPIXELGRID, the value specified for it is
    invalid.
    \retval ::CYGFX_ERP_ERR_DE_INVALID_ATTRIBUTE The following attributes are not allowed:
    ::CYGFX_DE_ATTR_MIN_PATH_BUFFER, ::CYGFX_DE_ATTR_CURRENT_PATH_BUFFER, ::CYGFX_DE_ATTR_CURRENT_PATH_USE, ::CYGFX_DE_ATTR_ALPHA_HEIGHT, or ::CYGFX_DE_ATTR_ALPHA_WIDTH
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_DeSetAttribute( CYGFX_BE_CONTEXT beCtx,
                                               CYGFX_DE_ATTR    eName,
                                               CYGFX_U32        value);

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_DRAWENG_H */

