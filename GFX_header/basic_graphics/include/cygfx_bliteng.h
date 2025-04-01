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
 * \file    cygfx_bliteng.h
 */


#ifndef CYGFX_BLITENG_H
#define CYGFX_BLITENG_H


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
/* PRQA S 5133 EOF */
/**
\addtogroup cygfx_bliteng
\code #include "cygfx_bliteng.h" \endcode
\brief Blit Engine (BlitEng) API

The Blit Engine API provides functions for blit operations using the
VIDEOSS Blit Engine hardware. As mentioned in \ref overview_bliteng,
it requires ::CYGFX_SURFACE objects to describe pixel buffers and an
::CYGFX_BE_CONTEXT object to describe the requested pixel operation.

The following example demonstrates the steps to fill a target buffer
with blue, and blend an src surface at the center of the target buffer:

\code
    CYGFX_BE_CONTEXT_OBJECT_S ctx;
    // Reset the CYGFX_BE_CONTEXT object
    CyGfx_BeResetContext(&ctx);
    // Bind a target surface as STORE and blend DeSTination buffer to the context.
    // (The target pixel will be read, blended with src, and written back to the target buffer.)
    CyGfx_BeBindSurface(&ctx, CYGFX_BE_TARGET_STORE | CYGFX_BE_TARGET_DST, target);
    // Set a fill color
    CyGfx_BeSetAttribute(&ctx, CYGFX_BE_CTX_ATTR_COLOR, 0x0000ff00);
    // Fill the store buffer
    CyGfx_BeFill(&ctx, 0, 0, target_width, target_height);
    // Attach the source buffer
    CyGfx_BeBindSurface(&ctx, CYGFX_BE_TARGET_SRC, src);
    // Blend the source pixel to the target
    CyGfx_BeBlt(&ctx, (target_width - src_width)/2, (target_height - src_height)/2);

    // Optional: Ensure that the operation finished execution
    CyGfx_BeFinish(&ctx);

\endcode


*/


/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define CYGFX_BE_MIN_DIMENSION              ((CYGFX_U32)(0))    /**< Minimum width and height for blit area */
#define CYGFX_BE_MAX_IBO_WIDTH              ((CYGFX_U32)(2880)) /**< Maximum width for IBO blit area */
#define CYGFX_BE_MAX_IBO_HEIGHT             ((CYGFX_U32)(1080)) /**< Maximum height for IBO blit area */
#define CYGFX_BE_COPS_NUMBER                ((CYGFX_U32)256)    /**< Number of COPSes supported by HW. (COPSes are required for decompressing images in LBO.) */
#define CYGFX_BE_DEFAULT_OBJECT_PARTITIONING ((CYGFX_U32)300)    /**< Default value for object partitioning (see ::CYGFX_BE_CTX_ATTR_OBJECT_PARTITIONING_WIDTH). */
#define CYGFX_BE_MIN_OBJECT_PARTITIONING     ((CYGFX_U32)100)    /**< Minimum value for object partitioning (see ::CYGFX_BE_CTX_ATTR_OBJECT_PARTITIONING_WIDTH). */
#define CYGFX_BE_SURF_MASK_ALPHA            ((CYGFX_SURFACE)1U) /**< A special surface object: it can be used in line rendering mode to store the alpha information. It can only bind as CYGFX_BE_TARGET_STORE and CYGFX_BE_TARGET_DST to render it or it can bind as CYGFX_BE_TARGET_MASK to use it. It does not allow any property changes. */
#define CYGFX_BE_CONTEXT_BUFFER_SIZE        ((CYGFX_U32)119)    /**< Size of the memory area for the Blit Engine context object struct */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/** \name Blit Engine task identifiers */
/** \{ */
typedef CYGFX_U32 CYGFX_BE_TASK;                    /**< Type for BE tasks */
#define CYGFX_BE_TASK_WIN_PRIO_0 ((CYGFX_BE_TASK)0) /**< Task for window with the feature ::CYGFX_DISP_FEATURE_OTF_WIN_PRIO_0 */
#define CYGFX_BE_TASK_WIN_PRIO_1 ((CYGFX_BE_TASK)1) /**< Task for window with the feature ::CYGFX_DISP_FEATURE_OTF_WIN_PRIO_1 */
#define CYGFX_BE_TASK_WIN_PRIO_2 ((CYGFX_BE_TASK)2) /**< Task for window with the feature ::CYGFX_DISP_FEATURE_OTF_WIN_PRIO_2 */
#define CYGFX_BE_TASK_WIN_PRIO_3 ((CYGFX_BE_TASK)3) /**< Task for window with the feature ::CYGFX_DISP_FEATURE_OTF_WIN_PRIO_3 */
#define CYGFX_BE_TASK_MEM_PRIO_0 ((CYGFX_BE_TASK)4) /**< High-priority BlitEng pipe */
#define CYGFX_BE_TASK_MEM_PRIO_1 ((CYGFX_BE_TASK)5) /**< Default BlitEng pipe */
#define CYGFX_BE_TASK_MEM_PRIO_2 ((CYGFX_BE_TASK)6) /**< Low-priority BlitEng pipe. All Command Sequencer queue buffers are optional, but they are required to use this feature. For example, you don't need to assign a buffer for window 1 if you don't use it. */
/** \} */

/** \name Blit Engine target types */
/** \{ */
typedef CYGFX_U32 CYGFX_BE_TARGET;                           /**< Type for BE targets */
#define CYGFX_BE_TARGET_STORE ((CYGFX_BE_TARGET)(1uL << 0u)) /**< = Blit write destination */
#define CYGFX_BE_TARGET_SRC   ((CYGFX_BE_TARGET)(1uL << 1u)) /**< = Blit source surface */
#define CYGFX_BE_TARGET_DST   ((CYGFX_BE_TARGET)(1uL << 2u)) /**< = Background for blend operations */
#define CYGFX_BE_TARGET_MASK  ((CYGFX_BE_TARGET)(1uL << 3u)) /**< = Mask surface */
/** \} */

/** \name Blit Engine gamma operations */
/** \{ */
typedef CYGFX_U08 CYGFX_BE_GAMMA;                      /**< Type for BE Gamma operations */
#define CYGFX_BE_GAMMA_NEUTRAL    ((CYGFX_BE_GAMMA)0u) /**< No gamma conversion */
#define CYGFX_BE_GAMMA_REMOVE_SRC ((CYGFX_BE_GAMMA)1u) /**< Enables the gamma correction stage to remove gamma for the SRC source. This stage is located after the color conversion stage and before the bilinear filter stage. */
#define CYGFX_BE_GAMMA_REMOVE_DST ((CYGFX_BE_GAMMA)2u) /**< Enables the gamma correction stage to remove gamma for the DST source. This stage is located after the color conversion stage and before the bilinear filter stage. */
#define CYGFX_BE_GAMMA_REMOVE     ((CYGFX_BE_GAMMA)3u) /**< Enables the gamma correction stage to remove gamma for the SRC and DST source */
#define CYGFX_BE_GAMMA_ADD        ((CYGFX_BE_GAMMA)4u) /**< Enables the gamma correction stage to apply gamma. This stage is in the store unit. */
#define CYGFX_BE_GAMMA_CORRECTED  ((CYGFX_BE_GAMMA)7u) /**< Enables the gamma correction stage for bilinear filtering */
/** \} */

/** \name Coordinate system origin definitions */
/** \{ */
typedef CYGFX_U32 CYGFX_BE_ATTR_ZERO;                          /**< Zero point for geometry calculation */
#define CYGFX_BE_ATTR_ZERO_TOP_LEFT    ((CYGFX_BE_ATTR_ZERO)0) /**< Coordinate system for a geometry operation starts in the upper-left corner.
        \note For a blit operation, it is equal to the buffer content and display coordinate orientation. For a draw operation, it means that the buffer content orientation is mirrored. */
#define CYGFX_BE_ATTR_ZERO_BOTTOM_LEFT ((CYGFX_BE_ATTR_ZERO)1) /**< Coordinate system for a geometry operation starts in the lower-left corner. */
/** \} */

/** \name Blit Engine tile modes */
/** \{ */
typedef CYGFX_U08 CYGFX_BE_TILE;                        /**< Type for BE Tile operations */
#define CYGFX_BE_TILE_FILL_ZERO     ((CYGFX_BE_TILE)0u) /**< Samples outside the frame are treated as zero pixel value. */
#define CYGFX_BE_TILE_FILL_CONSTANT ((CYGFX_BE_TILE)1u) /**< Samples outside the frame are filled with constant color. */
#define CYGFX_BE_TILE_PAD           ((CYGFX_BE_TILE)2u) /**< Samples outside the frame are padded with the last valid border pixels. */
#define CYGFX_BE_TILE_PAD_ZERO      ((CYGFX_BE_TILE)3u) /**< Applies tile mode PAD to RGB channels, and tile mode ZERO to the alpha channel */
/** \} */

/** \name Blit Engine ROP modes */
/** \{ */
typedef CYGFX_U08 CYGFX_BE_ROP;                        /**< Type for BE Rop operations */
#define CYGFX_BE_ROP_BLACKNESS    ((CYGFX_BE_ROP)0x00) /**< = 0 */
#define CYGFX_BE_ROP_WHITENESS    ((CYGFX_BE_ROP)0xFF) /**< = 1 */
#define CYGFX_BE_ROP_SRCCOPY      ((CYGFX_BE_ROP)0xAA) /**< = SRC */
#define CYGFX_BE_ROP_NOTSRCCOPY   ((CYGFX_BE_ROP)0x55) /**< = ~SRC */
#define CYGFX_BE_ROP_MASKCOPY     ((CYGFX_BE_ROP)0xCC) /**< = MASK */
#define CYGFX_BE_ROP_NOTMASK      ((CYGFX_BE_ROP)0x33) /**< = ~MASK */
#define CYGFX_BE_ROP_MASKINVERT   ((CYGFX_BE_ROP)0x66) /**< = MASK ^ SRC */
#define CYGFX_BE_ROP_MSKAND       ((CYGFX_BE_ROP)0x88) /**< = MASK & SRC */
#define CYGFX_BE_ROP_MASKERASE    ((CYGFX_BE_ROP)0x22) /**< = SRC & ~MASK */
#define CYGFX_BE_ROP_NOTMASKERASE ((CYGFX_BE_ROP)0x11) /**< = ~ (MASK | SRC) */
#define CYGFX_BE_ROP_MERGEMASK    ((CYGFX_BE_ROP)0xEE) /**< = SRC | MASK */
#define CYGFX_BE_ROP_MERGEMASKNOT ((CYGFX_BE_ROP)0xBB) /**< = SRC | ~MASK */
#define CYGFX_BE_ROP_DSTCOPY      ((CYGFX_BE_ROP)0xF0) /**< = DST */
#define CYGFX_BE_ROP_NOTDSTCOPY   ((CYGFX_BE_ROP)0x0F) /**< = ~DST */
#define CYGFX_BE_ROP_DSTPAINT     ((CYGFX_BE_ROP)0xFE) /**< = DST | MASK | SRC */
#define CYGFX_BE_ROP_MASKSEL      ((CYGFX_BE_ROP)0xB8) /**< = MASK ? SRC : DST */
#define CYGFX_BE_ROP_DSTAND       ((CYGFX_BE_ROP)0x80) /**< = DST & MASK & SRC */
/** \} */

/** \name Blit Engine render modes */
/** \{ */
typedef CYGFX_U08 CYGFX_BE_RENDER_MODE;                       /**< Type for specifying render modes */
#define CYGFX_BE_RENDER_MODE_IBO   ((CYGFX_BE_RENDER_MODE)0u) /**< Only IBO allowed */
#define CYGFX_BE_RENDER_MODE_LBO   ((CYGFX_BE_RENDER_MODE)1u) /**< Only LBO allowed */
#define CYGFX_BE_RENDER_MODE_MIXED ((CYGFX_BE_RENDER_MODE)2u) /**< IBO and LBO allowed */
/** \} */

/**
    Blit Engine Context Object
**/
typedef struct
{
    CYGFX_U32 reserved[CYGFX_BE_CONTEXT_BUFFER_SIZE]; /**< Reserved memory needed for any context container */
} CYGFX_BE_CONTEXT_OBJECT_S;


typedef CYGFX_BE_CONTEXT_OBJECT_S* CYGFX_BE_CONTEXT; /**< Blit Engine context object handle */

/** \name Blit Engine context attributes */
/** \{ */
typedef CYGFX_U08 CYGFX_BE_CTX_ATTR;                                          /**< Type for BE context attributes */
#define CYGFX_BE_CTX_ATTR_DITHER_COLOR               ((CYGFX_BE_CTX_ATTR)0u)  /**< Sets the color dither mode. The related parameter can be the following:
        - CYGFX_TRUE    Enable color dithering
        - CYGFX_FALSE   Disable color dithering (default) */
#define CYGFX_BE_CTX_ATTR_DITHER_ALPHA               ((CYGFX_BE_CTX_ATTR)1u)  /**< Sets the alpha dither mode. The related parameter can be the following:
        - CYGFX_TRUE    Enable alpha dithering
        - CYGFX_FALSE   Disable alpha dithering (default) */
#define CYGFX_BE_CTX_ATTR_DITHER_OFFSET              ((CYGFX_BE_CTX_ATTR)2u)  /**< Sets a dither offset. The value can be in the range from (0..15).
        The default value is 0.
        \note If the application renders a new frame with the vsync display frame rate, quality may be improved by increasing this dither offset value with each frame. It is the same effect like dithering an 8-bit color buffer component to a 6-bit panel. Using this feature, it is possible to use a smaller render buffer with the same color quality.  Warning: For target buffers with fewer bits (e.g., <=4) per color component, it will cause visible flickering artifacts. */
#define CYGFX_BE_CTX_ATTR_FILTER                     ((CYGFX_BE_CTX_ATTR)3u)  /**< Filter mode. The related parameter can be the following:
        - ::CYGFX_GEN_FILTER_NEAREST
        - ::CYGFX_GEN_FILTER_BILINEAR (default)
        - ::CYGFX_GEN_FILTER_ANISOTROPIC */
#define CYGFX_BE_CTX_ATTR_GAMMA                      ((CYGFX_BE_CTX_ATTR)4u)  /**< Gamma conversion. The related parameter can be the following:
        - ::CYGFX_BE_GAMMA_NEUTRAL (default)
        - ::CYGFX_BE_GAMMA_REMOVE_SRC
        - ::CYGFX_BE_GAMMA_REMOVE_DST
        - ::CYGFX_BE_GAMMA_REMOVE
        - ::CYGFX_BE_GAMMA_ADD
        - ::CYGFX_BE_GAMMA_CORRECTED */
#define CYGFX_BE_CTX_ATTR_ZERO_POINT                 ((CYGFX_BE_CTX_ATTR)5u)  /**< Coordinate zero point for geometry operations. See also \ref overview_coordinates. The related parameter can be the following:
        - ::CYGFX_BE_ATTR_ZERO_TOP_LEFT
        - ::CYGFX_BE_ATTR_ZERO_BOTTOM_LEFT (default) */
#define CYGFX_BE_CTX_ATTR_TASK                       ((CYGFX_BE_CTX_ATTR)6u)  /**< Task for the context. Must be one of:
        - CYGFX_BE_TASK_WIN_PRIO_0
        - CYGFX_BE_TASK_WIN_PRIO_1
        - CYGFX_BE_TASK_WIN_PRIO_2
        - CYGFX_BE_TASK_WIN_PRIO_3
        - CYGFX_BE_TASK_MEM_PRIO_0
        - CYGFX_BE_TASK_MEM_PRIO_1 (default)
        - CYGFX_BE_TASK_MEM_PRIO_2
        \note The context task must be set after CyGfx_BeResetContext() before any other operations and must not be changed afterwards. */
#define CYGFX_BE_CTX_ATTR_OBJECT_PARTITIONING_WIDTH  ((CYGFX_BE_CTX_ATTR)7u)  /**< Target width for object partitioning in LBO mode.
        Minimum is ::CYGFX_BE_MIN_OBJECT_PARTITIONING. All values smaller than
        CYGFX_BE_MIN_OBJECT_PARTITIONING and larger than ::CYGFX_DISP_MAX_WIDTH_OTF/2
        will disable object partitioning. The default value is ::CYGFX_BE_DEFAULT_OBJECT_PARTITIONING.

        \note In LBO mode, when rendering in parallel objects with different widths,
        the widest object will define the total render time. For example, a set of three objects
        with the widths 1600, 64, and again 64 while being rendered in parallel will only complete
        the rendering process when the 1600-pixel-wide object is ready, called 'T1600 cycles'.

        In order to address this deficiency, the gfx driver can be configured to partition large objects
        (larger than a set attribute value) in an attempt to transform the rendering sequence into a more
        time-efficient one.

        In this three-object-set example, by specifying CYGFX_BE_CTX_ATTR_OBJECT_PARTITIONING_WIDTH = 400,
        the driver is instructed to cut every object wider than 400 pixels into 400-pixel chunks. In this case,
        the 1600-pixel-wide object will be split up into four 400-pixel chunks, resulting in a
        total of six objects: 400px, 400px, 400px, 400px, 64px, and 64px. The first three will be
        rendered in parallel, with rendered time of T400 cycles; the last three will also
        get rendered in parallel. Here, the rendering time is dictated by the largest in the group (400-pixel), so the render time is T400px. Summing up the two, you get a total
        render time of 2 x T400 clk cycles, which is half of the no-partitioned example.
        However, note that the command sequencer queue will be used a little more and there will
        be a small increase in the CPU load.
        Object partitioning needs to be fine-tuned on the spot, taking into consideration application requirements.
        Consider the following during this optimization:
        - As the driver attempts to split objects into partitions of equal width,
          the actual partition width can be greater than the configured partition width.
        - Object partitioning usually does not provide benefits if the same operation is executed for
          multiple objects of the same size. In that case, hardware units that are operating in
          parallel already have a similar work load. In contrast, object partitioning is expected
          to improve performance if objects of different size
          are executed in the same context.
        - Very small partitions decrease the render performance because of the associated overhead.
        - The partition width of run-length-encoded objects is determined when the memory
          representation of these objects is generated. It cannot be changed at run time.
        - A way to optimize the partition width is to start with a suitable size
          (for example, the default partition width, the size of a render object,
          or a fraction of it), then to modify the partition width, and to measure
          the render performance. */
#define CYGFX_BE_CTX_ATTR_MIN_INSTRUCTION_BUFFER     ((CYGFX_BE_CTX_ATTR)8u)  /**< This attribute is available only in CyGfx_BeGetAttribute().
        The returned value represents the smallest available instruction buffer
        in bytes during all calls. A function call with this parameter resets the measurement.

        An application can use the returned value to measure the minimum unused size of the instruction buffer assigned by CyGfx_BeSetTaskInstructionBuffer() in order to optimize memory assignment.

        \note The returned value represents only an approximate value. For performance reasons, the HW status is not read after each instruction. Therefore, the real instruction buffer minimum can be smaller than the returned value. */
#define CYGFX_BE_CTX_ATTR_CURRENT_INSTRUCTION_BUFFER ((CYGFX_BE_CTX_ATTR)9u)  /**< This attribute is available only in CyGfx_BeGetAttribute().
        The returned value represents the current available instruction buffer size in bytes.
        The returned value can be used by an application to decide whether further render
        steps should be delayed and continued later because the hardware is still busy. */
#define CYGFX_BE_CTX_ATTR_RENDER_MODE                ((CYGFX_BE_CTX_ATTR)10u) /**< Render mode of the context. Must be one of the following:
        - CYGFX_BE_RENDER_MODE_IBO
        - CYGFX_BE_RENDER_MODE_LBO
        - CYGFX_BE_RENDER_MODE_MIXED (default) */
#define CYGFX_BE_CTX_ATTR_COLOR                      ((CYGFX_U08)11u)         /**< Sets the constant color value in the form 0xRRGGBBAA. This color is used in the following:
        - Fill color used in ::CyGfx_BeFill
        - Constant color used in blend mode (for detailed information, refer to ::CyGfx_BeBlendMode).
        The default value is 0x00000000. */
#define CYGFX_BE_CTX_ATTR_IBO_BLIT_CNT               ((CYGFX_U08)12u)         /**< This attribute is available only in CyGfx_BeGetAttribute().
        It returns the number of blits in IBO mode. After calling this attribute, the internal counter is reset to zero. */
#define CYGFX_BE_CTX_ATTR_LBO_BLIT_CNT               ((CYGFX_U08)13u)         /**< This attribute is available only in CyGfx_BeGetAttribute().
        It returns the number of blits in LBO mode. After calling this attribute, the internal counter is reset to zero. */
/** \} */

/** \name Blit Engine surface attributes */
/** \{ */
typedef CYGFX_U08 CYGFX_BE_SURF_ATTR;                                  /**< Type for BE surface attributes */
#define CYGFX_BE_SURF_ATTR_COLORMULTI        ((CYGFX_BE_SURF_ATTR)64u) /**< Enable/disable color multiplication. The related parameter can be the following:
        - CYGFX_TRUE    Enable color multiplication
        - CYGFX_FALSE   Disable color multiplication (default). The related formula is
        \code
        // AlphaColorMultiply see
        // CYGFX_BE_SURF_ATTR_ALPHA_COLORMULTI
        if (ColorMultiply == CYGFX_TRUE)
            A1 = Ain
        else
            A1 = 1;
        if (AlphaColorMultiply == CYGFX_TRUE)
            //see CYGFX_BE_SURF_ATTR_COLOR
            A2 = Aconst;
        else
            A2 = 1;
        Cout = Cin * A1 * A2;
        \endcode
        \note This attribute can be used only for CYGFX_BE_TARGET_SRC and CYGFX_BE_TARGET_DST. */
#define CYGFX_BE_SURF_ATTR_ALPHAMULTI        ((CYGFX_BE_SURF_ATTR)65u) /**< Enable/disable multiplication of pixel alpha
        with constant alpha defined by CyGfx_BeSetSurfAttribute(..., ::CYGFX_BE_SURF_ATTR_COLOR, ...).
        - CYGFX_TRUE    Enable alpha multiplication
        - CYGFX_FALSE   Disable alpha multiplication (default)
        The related formula is
        \code
        if (AlphaMultiply == CYGFX_TRUE)
          Aout = Ain * Aconst;
        else
          Aout = Ain;
        \endcode
        \note This attribute can be used only for CYGFX_BE_TARGET_SRC and CYGFX_BE_TARGET_DST. */
#define CYGFX_BE_SURF_ATTR_TILE_MODE         ((CYGFX_BE_SURF_ATTR)66u) /**< Tiling mode for pixels outside
        the source buffer. The related parameter can be the following:
        - ::CYGFX_BE_TILE_FILL_ZERO
        - ::CYGFX_BE_TILE_FILL_CONSTANT
        - ::CYGFX_BE_TILE_PAD
        - ::CYGFX_BE_TILE_PAD_ZERO (default)
        \note Compressed and YUV422 images can only be used with ::CYGFX_BE_TILE_FILL_ZERO
        and CYGFX_BE_TILE_FILL_CONSTANT. Other CYGFX_BE_SURF_ATTR_TILE_MODE settings
        will be ignored for such images. */
#define CYGFX_BE_SURF_ATTR_USE_CLIPPING      ((CYGFX_BE_SURF_ATTR)67u) /**< Defines whether the surface coordinates given by ::CyGfx_BeActiveArea are used as clip coordinates while reading (SRC, DST, MASK) or writing (STORE) the surface. If USE_CLIPPING is disabled, the ActiveArea coordinates are used for the target blit bounding box calculation only. If USE_CLIPPING is enabled, the surface will be used like a smaller bitmap.
        \note While using clipping for source surfaces, the ::CYGFX_BE_SURF_ATTR_TILE_MODE attribute must set to ::CYGFX_BE_TILE_FILL_ZERO.
        \note The bounding box defined by CyGfx_BeActiveArea() will always be used as the clipping box if USE_CLIPPING is enabled (independent of the CyGfx_BeSelectArea() settings).
        - ::CYGFX_FALSE Disable the clip feature (default)
        - ::CYGFX_TRUE  Enable the clip feature */
#define CYGFX_BE_SURF_ATTR_ALPHA_COLORMULTI  ((CYGFX_BE_SURF_ATTR)68u) /**< Enable/disable constant alpha multiplication for color multiplication. The related parameter can be the following:
        - CYGFX_TRUE    Enable alpha multiplication
        - CYGFX_FALSE   Disable alpha multiplication (default) The related formula is
        \code
        // ColorMultiply see
        // CYGFX_BE_SURF_ATTR_COLORMULTI
        if (ColorMultiply == CYGFX_TRUE)
            A1 = Ain
        else
            A1 = 1;
        if (AlphaColorMultiply == CYGFX_TRUE)
            //see CYGFX_BE_SURF_ATTR_COLOR
            A2 = Aconst;
        else
            A2 = 1;
        Cout = Cin * A1 * A2;
        \endcode
        \note This attribute can be used only for CYGFX_BE_TARGET_SRC and CYGFX_BE_TARGET_DST. */
#define CYGFX_BE_SURF_ATTR_TRANSPARENT       ((CYGFX_BE_SURF_ATTR)69u) /**< Enable/disable transparency. The related parameter can be the following:
        - CYGFX_TRUE    Enable transparency
        - CYGFX_FALSE   Disable transparency (default)
        Set the color and alpha value to zero if the red, green, and blue values of pixel color are identical to the red, green, and blue values defined by ::CYGFX_BE_SURF_ATTR_COLOR.
        \note This attribute can be used only for CYGFX_BE_TARGET_SRC and CYGFX_BE_TARGET_DST.
        \note ::CYGFX_BE_SURF_ATTR_TRANSPARENT_ALPHA and ::CYGFX_BE_SURF_ATTR_TRANSPARENT_COLOR overwrite this setting. */
#define CYGFX_BE_SURF_ATTR_TRANSPARENT_ALPHA ((CYGFX_BE_SURF_ATTR)70u) /**< Enable/disable transparency for the alpha channel. The related parameter can be the following:
        - CYGFX_TRUE    Enable transparency
        - CYGFX_FALSE   Disable transparency (default)
        Set the alpha value to zero if the red, green, and blue values of pixel color are identical to the red, green, and blue values defined by ::CYGFX_BE_SURF_ATTR_COLOR.
        \note This attribute can be used only for CYGFX_BE_TARGET_SRC and CYGFX_BE_TARGET_DST.
        \note ::CYGFX_BE_SURF_ATTR_TRANSPARENT overwrites this setting. */
#define CYGFX_BE_SURF_ATTR_TRANSPARENT_COLOR ((CYGFX_BE_SURF_ATTR)71u) /**< Enable/disable transparency for R, G, B color channels. The related parameter can be the following:
        - CYGFX_TRUE    Enable transparency
        - CYGFX_FALSE   Disable transparency (default)
        Set the color value to zero if the red, green, and blue values pixel color are identical to the red, green, and blue values defined by ::CYGFX_BE_SURF_ATTR_COLOR.
        \note This attribute can be used only for CYGFX_BE_TARGET_SRC and CYGFX_BE_TARGET_DST.
        \note ::CYGFX_BE_SURF_ATTR_TRANSPARENT overwrites this setting. */
#define CYGFX_BE_SURF_ATTR_COLOR             ((CYGFX_BE_SURF_ATTR)72u) /**< Indicated color is used for the following (format 0xRRGGBBAA):
        - Constant color in color multiplication
        - Constant color in tiling
        - Constant color used for missing color components (e.g., format R4G4, the blue and alpha values of constant color are used.)
        The default value is 0xFFFFFFFF. */
/** \} */

/** \name Blit Engine blend functions */
/** \{ */
typedef CYGFX_U16 CYGFX_BE_BF;                                         /**< Type for BE blend functions */
#define CYGFX_BE_BF_GL_ZERO                     ((CYGFX_BE_BF)0x0u)    /**< F = 0, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_ONE                      ((CYGFX_BE_BF)0x1u)    /**< F = 1, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_SRC_COLOR                ((CYGFX_BE_BF)0x300u)  /**< F = Cs, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_ONE_MINUS_SRC_COLOR      ((CYGFX_BE_BF)0x301u)  /**< F = 1 - Cs, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_SRC_ALPHA                ((CYGFX_BE_BF)0x302u)  /**< F = As, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA      ((CYGFX_BE_BF)0x303u)  /**< F = 1 - As, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_DST_ALPHA                ((CYGFX_BE_BF)0x304u)  /**< F = Ad, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_ONE_MINUS_DST_ALPHA      ((CYGFX_BE_BF)0x305u)  /**< F = 1 - Ad, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_DST_COLOR                ((CYGFX_BE_BF)0x306u)  /**< F = Cd, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_ONE_MINUS_DST_COLOR      ((CYGFX_BE_BF)0x307u)  /**< F = 1 - Cd, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_SRC_ALPHA_SATURATE       ((CYGFX_BE_BF)0x308u)  /**< F = min(As, 1 - Ad) see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_CONSTANT_COLOR           ((CYGFX_BE_BF)0x8001u) /**< F = Cc, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_ONE_MINUS_CONSTANT_COLOR ((CYGFX_BE_BF)0x8002u) /**< F = 1 - Cc, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_CONSTANT_ALPHA           ((CYGFX_BE_BF)0x8003u) /**< F = Ac, see ::CyGfx_BeBlendFunc */
#define CYGFX_BE_BF_GL_ONE_MINUS_CONSTANT_ALPHA ((CYGFX_BE_BF)0x8004u) /**< F = 1 - Ac, see ::CyGfx_BeBlendFunc */
/** \} */

/** \name Blit Engine blend modes */
/** \{ */
typedef CYGFX_U16 CYGFX_BE_BM;                                     /**< Type for BE blend modes */
#define CYGFX_BE_BM_GL_FUNC_ADD              ((CYGFX_BE_BM)0x8006) /**< C = Cs * Fs + Cd * Fd, see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_GL_MIN                   ((CYGFX_BE_BM)0x8007) /**< C = min(Cs, Cd), see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_GL_MAX                   ((CYGFX_BE_BM)0x8008) /**< C = max(Cs, Cd), see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_GL_FUNC_SUBTRACT         ((CYGFX_BE_BM)0x800A) /**< C = Cs * Fs - Cd * Fd, see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_GL_FUNC_REVERSE_SUBTRACT ((CYGFX_BE_BM)0x800B) /**< C = Cd * Fd - Cs * Fs, see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_SRC             ((CYGFX_BE_BM)0x2000) /**< C = Cs, see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_SRC_OVER        ((CYGFX_BE_BM)0x2001) /**< C = Cs + Cd * (1-As), see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_DST_OVER        ((CYGFX_BE_BM)0x2002) /**< C = Cs * (1-Ad) + Cd, see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_SRC_IN          ((CYGFX_BE_BM)0x2003) /**< C = Cs * Ad, see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_DST_IN          ((CYGFX_BE_BM)0x2004) /**< C = Cd * As, see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_MULTIPLY        ((CYGFX_BE_BM)0x2005) /**< C = Cs * (1-Ad) + Cd * (1-As) + Cs * Cd, see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_SCREEN          ((CYGFX_BE_BM)0x2006) /**< C = Cs + Cd - Cs * Cd, see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_DARKEN          ((CYGFX_BE_BM)0x2007) /**< C = min(Cs + Cd * (1-As), Cd + Cs * (1-Ad)), see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_LIGHTEN         ((CYGFX_BE_BM)0x2008) /**< C = max(Cs + Cd * (1-As), Cd + Cs * (1-Ad)), see ::CyGfx_BeBlendMode */
#define CYGFX_BE_BM_VG_BLEND_ADDITIVE        ((CYGFX_BE_BM)0x2009) /**< C = Cs + Cd, see ::CyGfx_BeBlendMode */
/** \} */

/** \name Blit Engine geometric matrix formats */
/** \{ */
typedef CYGFX_U08 CYGFX_BE_GEO_MATRIX_FORMAT;                          /**< Type for BE geo matrix format */
#define CYGFX_BE_GEO_MATRIX_FORMAT_3X2 ((CYGFX_BE_GEO_MATRIX_FORMAT)0) /**< float[6] array with three columns and two lines */
#define CYGFX_BE_GEO_MATRIX_FORMAT_3X3 ((CYGFX_BE_GEO_MATRIX_FORMAT)1) /**< float[9] array with three columns and three lines */
/** \} */

/** Blit Engine Utilization Key Indicators */
/** \{ */
typedef struct
{
    CYGFX_U32 ibo_active_counter;                 /**< Field for LBO active counter value */
    CYGFX_U32 lbo_active_counter;                 /**< Field for IBO active counter value */
    CYGFX_U32 clock_counter;                      /**< Field for clock counter value */
    CYGFX_U32 lbo_all_fetches_active_counter;     /**< Field for all-fetches-active counter value */
    CYGFX_U32 lbo_wait_bliteng_resources_counter; /**< Field for Blit Engine waiting on resources counter value */
    CYGFX_U32 tb0_active_counter;                 /**< Field for task buffer 0 counter value */
    CYGFX_U32 tb1_active_counter;                 /**< Field for task buffer 1 counter value */
    CYGFX_U32 tb2_active_counter;                 /**< Field for task buffer 2 counter value */
    CYGFX_U32 tb3_active_counter;                 /**< Field for task buffer 3 counter value */
    CYGFX_U32 tb4_active_counter;                 /**< Field for task buffer 4 counter value */
    CYGFX_U32 tb5_active_counter;                 /**< Field for task buffer 5 counter value */
    CYGFX_U32 tb6_active_counter;                 /**< Field for task buffer 6 counter value */
    CYGFX_U32 tb7_active_counter;                 /**< Field for task buffer 7 counter value */
    CYGFX_U32 lbo_source_pixel_rgba_counter;      /**< Field for LBO source-rgb counter value */
    CYGFX_U32 lbo_source_pixel_alpha_counter;     /**< Field for LBO source-alpha counter value */
    CYGFX_U32 lbo_destination_pixel_counter;      /**< Field for LBO destination pixel counter value */
    CYGFX_U32 ibo_destination_pixel_counter;      /**< Field for IBO destination pixel counter value */
} CYGFX_BE_U_COUNT_S;
/** \} */
/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Assigns internal VRAM for the command queue
    \note
    The command queue is required to buffer the render instructions to allow non-
    blocking API handling. The required instruction buffer size depends on the
    amount and complexity of the render instructions and the synchronization
    instructions that are used. A minimum recommended size is 8 KB for IBO
    rendering.
    Typically, more memory is required for LBO because the rendering will be
    started after ending a sequence of blit operations. The function
    must be called after CyGfx_SysInitializeDriver() before any render operations.

    A reconfiguration of the instruction buffer is not possible.
    \note
    An application can use the CyGfx_BeGetAttribute() function with the
    ::CYGFX_BE_CTX_ATTR_CURRENT_INSTRUCTION_BUFFER attribute to get the
    information
    about the currently available size of the instruction buffer.
    The latter option is most suitable as a general check after a longer
    period of rendering activity. A size of 1k is recommended for this attribute.
    \note
    To get the information about the minimum available size of the instruction
    buffer, an application can use the CyGfx_BeGetAttribute() function with
    the ::CYGFX_BE_CTX_ATTR_MIN_INSTRUCTION_BUFFER attribute.

    \param [in] task  Defines the task for the assignment.
                      Can be CYGFX_BE_TASK_WIN_PRIO_0, CYGFX_BE_TASK_WIN_PRIO_1,
                      CYGFX_BE_TASK_WIN_PRIO_2, CYGFX_BE_TASK_WIN_PRIO_3, CYGFX_BE_TASK_MEM_PRIO_0,
                      CYGFX_BE_TASK_MEM_PRIO_1, or CYGFX_BE_TASK_MEM_PRIO_2. Use
                      CYGFX_BE_TASK_MEM_PRIO_1 as the default value because CyGfx_BeResetContext()
                      also uses this task as the default.
    \param [in] address  Start address in the VRAM. Must be 64-bit-aligned.
    \param [in] size  Buffer size in bytes. It must be 32-bit-aligned, minimum 1024
                      bytes and smaller than 4 * (2^16 - 1) bytes; otherwise, the function will return an error.
                      The instruction buffer size must be even 32-bit words; otherwise, CmdSeq gets stuck if
                      it is set to odd 32-bit words.The application must ensure that the address as well as the
                      address plus size are within the range of the VIDEOSS VRAM memory; the function
                      will not do this.

    \retval            ::CYGFX_OK On success
    \retval            ::CYGFX_ERP_ERR_CMD_SEQ_WRONG_TASK Task parameter
    exceeds the maximum allowed task number.
    \retval   ::CYGFX_ERP_ERR_CMD_SEQ_INVALID_BUFFER_SIZE Task buffer size must be
    a multiple of 32-bit words. The maximum size of the task buffer is 4 * (2^16 - 1) bytes
    while the minimum size of the task buffer is 1024 bytes.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeSetTaskInstructionBuffer( CYGFX_BE_TASK task,
                                                           void*         address,
                                                           CYGFX_U32     size);

/**
    This function divides the available hardware COPSes (::CYGFX_BE_COPS_NUMBER) to
    different tasks.
    The default settings are:
    64 COPSes for CYGFX_BE_TASK_WIN_PRIO_0
    64 COPSes for CYGFX_BE_TASK_WIN_PRIO_1
    and 64 COPSes for CYGFX_BE_TASK_MEM_PRIO_1
    \note
    Rendering images with compression in LBO mode requires "COPSes". Each single
    render operation
    with a compressed image requires one COPS; if more internal driver render
    operations are required for
    one image (see also ::CYGFX_BE_CTX_ATTR_OBJECT_PARTITIONING_WIDTH), more COPSes
    are required.
    The hardware has a limited number of COPSes available; the driver ensures that
    each operation
    uses a different COPS. Every time a render sequence ends (e.g., starting a new
    frame
    for an OTF window or ending the LBO to memory blit sequence by calling Finish),
    all COPSes are
    again available for the next sequence.
    \note
    Do not change the COPS number while the Blit Engine is actively working.
    When changed / specified, each task must have a value in the range 0..
    CYGFX_BE_COPS_NUMBER.
    However, all COPS settings for all active tasks when summed up must not exceed
    CYGFX_BE_COPS_NUMBER.

    \param [in] task  Defines the task
    \param [in] size  Defines how many COPSes are available for this task. Can be 0.
                      .CYGFX_BE_COPS_NUMBER for each task, but must not exceed CYGFX_BE_COPS_NUMBER
                      for all tasks.

    \retval                       ::CYGFX_OK On success
    \retval                       ::CYGFX_ERP_ERR_CMD_SEQ_WRONG_TASK Task ID
    exceeds the maximum number for command sequencer tasks.
    \retval       ::CYGFX_ERP_ERR_BE_COPSES_TOTAL_EXCEEDED Exceeded maximum allowable
    number of COPS.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeSetTaskCopses( CYGFX_BE_TASK task,
                                                CYGFX_U32     size);

/**
    Resets all parameters of the context object
    \note
    After the CyGfx_BeResetContext() call, no surfaces are connected to beCtx and
    the default task CYGFX_BE_TASK_MEM_PRIO_1 is configured.

    \param [in,out] beCtx  Blit Engine context (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)

    \retval    ::CYGFX_OK On success
    \retval    ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT Invalid context
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeResetContext( CYGFX_BE_CONTEXT beCtx);

/**
    The CyGfx_BeBindSurface function sets the parameters for the source,
    destination, mask, and store surface.

    \note
    All bound surfaces must not be deleted as long as the context is used.
    Parameter changes in the surface object after binding are used for further blit
    operations with the context. Surface-related context attributes (see
    CyGfx_BeSetSurfAttribute(), CyGfx_BeActiveArea()) are reset while binding a
    surface.

    \param [in,out] beCtx  Blit Engine context (!=NULL). (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] target  Binding target. It is a single or OR combined value of:
                        ::CYGFX_BE_TARGET_SRC
                        ::CYGFX_BE_TARGET_DST
                        ::CYGFX_BE_TARGET_STORE
                        ::CYGFX_BE_TARGET_MASK
    \param [in] surface  Surface object; NULL: unbind surface.
                         The surface to bind can be also ::CYGFX_BE_SURF_MASK_ALPHA for
                         ::CYGFX_BE_TARGET_STORE [ | ::CYGFX_BE_TARGET_DST ] or CYGFX_BE_TARGET_MASK.
                         See ::CYGFX_BE_SURF_MASK_ALPHA.

    \retval                 ::CYGFX_OK On success
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_TARGET Invalid target
    parameter or attempt to assign an alpha surface as the source
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeBindSurface( CYGFX_BE_CONTEXT beCtx,
                                              CYGFX_BE_TARGET  target,
                                              CYGFX_SURFACE    surface);

/**
    Sets an attribute for the specified context

    \param [in,out] beCtx  Blit Engine context (!=NULL). (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] pname  Name of the attribute. Can be one of ::CYGFX_BE_CTX_ATTR.
    \param [in] param  Parameter for the argument target (see ::CYGFX_BE_CTX_ATTR
                       description.)

    \retval                 ::CYGFX_OK On success
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_PARAMETER Invalid parameter
    structure
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeSetAttribute( CYGFX_BE_CONTEXT  beCtx,
                                               CYGFX_BE_CTX_ATTR pname,
                                               CYGFX_U32         param);

/**
    Gets an attribute for the specified context

    \param [in] beCtx  Blit Engine context (!=NULL). (Must be a pointer to a
                       ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] pname  Name of the attribute. Can be one of ::CYGFX_BE_CTX_ATTR.
    \param [out] pParam  Parameter for the argument target (see ::CYGFX_BE_CTX_ATTR
                         description).

    \retval                ::CYGFX_OK On success
    \retval                ::CYGFX_ERP_ERR_BE_INVALID_PARAMETER Pointer to the
    param structure is not initialized.
    \retval    ::CYGFX_ERP_ERR_BE_INVALID_ATTRIBUTE Attribute name specified
    does not exist.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeGetAttribute( CYGFX_BE_CONTEXT  beCtx,
                                               CYGFX_BE_CTX_ATTR pname,
                                               CYGFX_U32*        pParam);

/**
    Sets an attribute for the surface that is bound to the specified target

    \param [in,out] beCtx  Blit Engine context (!=NULL). (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] target  Setting target. Must be one or a combination of the
                        following:
                        - ::CYGFX_BE_TARGET_SRC (all attributes)
                        - ::CYGFX_BE_TARGET_DST (all attributes)
                        - ::CYGFX_BE_TARGET_MASK (only the ::CYGFX_BE_SURF_ATTR_TILE_MODE and
                        ::CYGFX_BE_SURF_ATTR_USE_CLIPPING attributes)
                        - ::CYGFX_BE_TARGET_STORE (only the ::CYGFX_BE_SURF_ATTR_USE_CLIPPING
                        attribute)
    \param [in] pname  Name of the attribute. Can be one of ::CYGFX_BE_SURF_ATTR.
    \param [in] param  Parameter for the target. See ::CYGFX_BE_SURF_ATTR
                       description.

    \retval                 ::CYGFX_OK On success
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_TARGET Invalid target
    mask/store parameter
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_PARAMETER Invalid parameter structure

    \retval     ::CYGFX_ERP_ERR_BE_INVALID_ATTRIBUTE Parameter name does not exist.

**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeSetSurfAttribute( CYGFX_BE_CONTEXT   beCtx,
                                                   CYGFX_BE_TARGET    target,
                                                   CYGFX_BE_SURF_ATTR pname,
                                                   CYGFX_U32          param);

/**
    Gets an attribute for the surface that is bound to the specified target

    \param [in] beCtx  Blit Engine context (!=NULL). (Must be a pointer to a
                       ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] target  Target surface to get. Must be one of the following:
                        - ::CYGFX_BE_TARGET_SRC
                        - ::CYGFX_BE_TARGET_DST
                        - ::CYGFX_BE_TARGET_MASK
                        - ::CYGFX_BE_TARGET_STORE
    \param [in] pname  Name of the attribute. Can be one of ::CYGFX_BE_SURF_ATTR.
    \param [out] pParam  Pointer of the parameter for the target. See
                         ::CYGFX_BE_SURF_ATTR description.

    \retval                 ::CYGFX_OK On success; the related error code otherwise.


    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_PARAMETER Invalid parameter
    structure
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_TARGET Invalid target parameter
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_ATTRIBUTE Attribute name
    does not exist.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeGetSurfAttribute( CYGFX_BE_CONTEXT   beCtx,
                                                   CYGFX_BE_TARGET    target,
                                                   CYGFX_BE_SURF_ATTR pname,
                                                   CYGFX_U32*         pParam);

/**
    Sets the blending parameter. The following table shows the possible blend
    functions.
    - F stands for the selected blend function. See ::CyGfx_BeBlendMode for further
    usage.
    - Cs, Cd represent the incoming color or alpha component.
    - As, Ad represent the incoming alpha component.
    - Cc, Ac represent the constant color or alpha component defined by
    ::CYGFX_BE_CTX_ATTR_COLOR.
    \note The incoming color components Cs, Cd, As, and Ad can be the original
    image color or the result of a previous operation. See
    ::CyGfx_BeSetSurfAttribute().
    <table border="1">
    <tr>
    <th>Blend Function</th>
    <th>RGBA Components</th>
    </tr>
    <tr><td>CYGFX_BE_BF_GL_ZERO</td><td>F = 0</td></tr>
    <tr><td>CYGFX_BE_BF_GL_ONE</td><td>F = 1</td></tr>
    <tr><td>CYGFX_BE_BF_GL_SRC_COLOR</td><td>F = Cs</td></tr>
    <tr><td>CYGFX_BE_BF_GL_ONE_MINUS_SRC_COLOR</td><td>F = 1 - Cs</td></tr>
    <tr><td>CYGFX_BE_BF_GL_SRC_ALPHA</td><td>F = As</td></tr>
    <tr><td>CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA</td><td>F = 1 - As</td></tr>
    <tr><td>CYGFX_BE_BF_GL_DST_ALPHA</td><td>F = Ad</td></tr>
    <tr><td>CYGFX_BE_BF_GL_ONE_MINUS_DST_ALPHA</td><td>F = 1 - Ad</td></tr>
    <tr><td>CYGFX_BE_BF_GL_DST_COLOR</td><td>F = Cd</td></tr>
    <tr><td>CYGFX_BE_BF_GL_ONE_MINUS_DST_COLOR</td><td>F = 1 - Cd</td></tr>
    <tr><td>CYGFX_BE_BF_GL_SRC_ALPHA_SATURATE</td><td>F = min(As, 1 -
    Ad)</td></tr>
    <tr><td>CYGFX_BE_BF_GL_CONSTANT_COLOR</td><td>F = Cc</td></tr>
    <tr><td>CYGFX_BE_BF_GL_ONE_MINUS_CONSTANT_COLOR</td><td>F = 1 - Cc</td></tr>
    <tr><td>CYGFX_BE_BF_GL_CONSTANT_ALPHA</td><td>F = Ac</td></tr>
    <tr><td>CYGFX_BE_BF_GL_ONE_MINUS_CONSTANT_ALPHA</td><td>F = 1 - Ac</td></tr>
    </table>
    \note
    If OpenVG blend mode (See #CyGfx_BeBlendMode) is used, setting for this
    function is ignored in the drawing image.

    \param [in,out] beCtx  Blit Engine context (!=NULL). (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] func_red_src  Blend function of the source red (default:
                              ::CYGFX_BE_BF_GL_SRC_ALPHA)
    \param [in] func_red_dst  Blend function of the destination red (default:
                              ::CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA)
    \param [in] func_green_src  Blend function of the source green (default:
                                ::CYGFX_BE_BF_GL_SRC_ALPHA)
    \param [in] func_green_dst  Blend function of the destination green (default:
                                ::CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA)
    \param [in] func_blue_src  Blend function of the source blue (default:
                               ::CYGFX_BE_BF_GL_SRC_ALPHA)
    \param [in] func_blue_dst  Blend function of the destination blue (default:
                               ::CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA)
    \param [in] func_alpha_src  Blend function of the source alpha (default:
                                ::CYGFX_BE_BF_GL_ONE)
    \param [in] func_alpha_dst  Blend function of the destination alpha (default:
                                ::CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA)

    \retval                     ::CYGFX_OK On success
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeBlendFunc( CYGFX_BE_CONTEXT beCtx,
                                            CYGFX_BE_BF      func_red_src,
                                            CYGFX_BE_BF      func_red_dst,
                                            CYGFX_BE_BF      func_green_src,
                                            CYGFX_BE_BF      func_green_dst,
                                            CYGFX_BE_BF      func_blue_src,
                                            CYGFX_BE_BF      func_blue_dst,
                                            CYGFX_BE_BF      func_alpha_src,
                                            CYGFX_BE_BF      func_alpha_dst);

/**
    Sets the blending parameter
    \note
    The output of a blend operation is always alpha pre-multiplied. For the
    detailed blend function, see Section 13.2 in OpenVG Specification Version
    1.1 (March 27, 2007). The following table is a brief description of the
    different blend modes.
    - Cs, Cd, and C represent the incoming source, blend destination, and the
    result component: red, green, blue, or alpha.
    - As and Ad stand for the incoming source and blend destination alpha
    components.
    - Fs and Fd stand for the incoming source and blend destination blend functions.

    See ::CyGfx_BeBlendFunc.
    \note The incoming color components Cs, Cd, As, and Ad can be the original
    image color or the result of a previous operation. See
    ::CyGfx_BeSetSurfAttribute().
    <table border="1">
    <tr>
    <th>Blend Mode</th>
    <th>RGBA Components</th>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_GL_FUNC_ADD</td>
    <td>C = Cs * Fs + Cd * Fd</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_GL_MIN</td>
    <td>C = min(Cs, Cd)</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_GL_MAX</td>
    <td>C = max(Cs, Cd)</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_GL_FUNC_SUBTRACT</td>
    <td>C = Cs * Fs - Cd * Fd</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_GL_FUNC_REVERSE_SUBTRACT</td>
    <td>C = Cd * Fd - Cs * Fs</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_SRC</td>
    <td>C = Cs</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_SRC_OVER</td>
    <td>C = Cs + Cd * (1-As)</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_DST_OVER</td>
    <td>C = Cs * (1-Ad) + Cd</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_SRC_IN</td>
    <td>C = Cs * Ad</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_DST_IN</td>
    <td>C = Cd * As</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_MULTIPLY</td>
    <td>C = Cs * (1-Ad) + Cd * (1-As) + Cs * Cd</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_SCREEN</td>
    <td>C = Cs + Cd - Cs * Cd</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_DARKEN</td>
    <td>C = min(Cs + Cd * (1-As), Cd + Cs * (1-Ad))</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_LIGHTEN</td>
    <td>C = max(Cs + Cd * (1-As), Cd + Cs * (1-Ad))</td>
    </tr>
    <tr>
    <td>CYGFX_BE_BM_VG_BLEND_ADDITIVE</td>
    <td>C = Cs + Cd</td>
    </tr>
    </table>

    \param [in,out] beCtx  Blit Engine context (!=NULL). (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object)
    \param [in] mode_red  Blend mode of red (default: ::CYGFX_BE_BM_GL_FUNC_ADD)
    \param [in] mode_green  Blend mode of green (default:
                            ::CYGFX_BE_BM_GL_FUNC_ADD)
    \param [in] mode_blue  Blend mode of blue (default: ::CYGFX_BE_BM_GL_FUNC_ADD)
    \param [in] mode_alpha  Blend mode of alpha (default: ::CYGFX_BE_BM_GL_FUNC_ADD)

    \retval                 ::CYGFX_OK On success
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeBlendMode( CYGFX_BE_CONTEXT beCtx,
                                            CYGFX_BE_BM      mode_red,
                                            CYGFX_BE_BM      mode_green,
                                            CYGFX_BE_BM      mode_blue,
                                            CYGFX_BE_BM      mode_alpha);

/**
    Sets the Raster Operation (ROP) for each color channel and the alpha channel
    \note
    - A ROP operation different from the default settings requires the IBO render
    mode.
    - Source surfaces involved depend on the ROP mode. The driver will report an
    error if a requested surface is not defined and #CyGfx_BeBlt is called.
    - If one of the ROP modes uses the DST surface, the blend unit in the blit path
    will be switched OFF and the result will be written directly in the store
    surface.
    - If there is a MASK surface, by default, the MASK buffer alpha channel is read
    as the external alpha value of the SRC surface. If one of the ROP modes uses
    the MASK surface, the external alpha path of the SRC surface will be switched
    OFF and the MASK surface will be the input of the ROP operation.
    - The required ROP mode can be calculated with the following table:
    \code
           surface  DST MASK SRC  output (STORE)
                     0   0   0       0
                     0   0   1       1
                     0   1   0       0
                     0   1   1       1
                     1   0   0       1
                     1   0   1       0
                     1   1   0       1
                     1   1   1       1
                 Operation index    0xDA
    \endcode

    Some useful ROP modes are predefined in the define section of this file; see
    CYGFX_BE_ROP_...

    \param [in,out] beCtx  Blit Engine context (!=NULL). (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] op_red  ROP3 operation code for the red component (default:
                        ::CYGFX_BE_ROP_SRCCOPY)
    \param [in] op_green  ROP3 operation code for the green component (default:
                          ::CYGFX_BE_ROP_SRCCOPY)
    \param [in] op_blue  ROP3 operation code for the blue component (default:
                         ::CYGFX_BE_ROP_SRCCOPY)
    \param [in] op_alpha  ROP3 operation code for the alpha component (default:
                          ::CYGFX_BE_ROP_SRCCOPY)

    \retval               ::CYGFX_OK On success
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeRopOperation( CYGFX_BE_CONTEXT beCtx,
                                               CYGFX_BE_ROP     op_red,
                                               CYGFX_BE_ROP     op_green,
                                               CYGFX_BE_ROP     op_blue,
                                               CYGFX_BE_ROP     op_alpha);

/**
    CyGfx_BeSetGeoMatrix is the setting function of the transformation matrix for
    scaling, rotation, translation, and flipping for all source surfaces:
    ::CYGFX_BE_TARGET_SRC, ::CYGFX_BE_TARGET_DST, and ::CYGFX_BE_TARGET_MASK. The
    ::CYGFX_BE_TARGET_SRC surface can additionally perform perspective
    transformations. The formula for transformation on this matrix depends on the
    format parameter. ::CYGFX_BE_GEO_MATRIX_FORMAT_3X2 (fMatrix represents a
    float[6] array):
    \code
    xout = fMatrix[0] * xin + fMatrix[2] * yin + fMatrix[4]
    yout = fMatrix[1] * xin + fMatrix[3] * yin + fMatrix[5]
    \endcode
    ::CYGFX_BE_GEO_MATRIX_FORMAT_3X3 (fMatrix represents a float[9] array; the
    fMatrix[2], fMatrix[5], and fMatrix[8] values are ignored for the DST and MASK
    target and set to 0, 0, 1.)
    \code
    tmp  =  fMatrix[2] * xin + fMatrix[5] * yin + fMatrix[8]
    xout = (fMatrix[0] * xin + fMatrix[3] * yin + fMatrix[6]) / tmp
    yout = (fMatrix[1] * xin + fMatrix[4] * yin + fMatrix[7]) / tmp
    \endcode
    If fMatrix = NULL, an identity matrix (no transformation) will be set. The
    matrix must not be singular (The matrix must have an inverse matrix); otherwise,

    CyGfx_BeBlt will return CYGFX_OK without any action.

    \param [in,out] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] target  Setting target. It is a single or an OR-combined value of
                        the following:
                        ::CYGFX_BE_TARGET_SRC
                        ::CYGFX_BE_TARGET_DST
                        ::CYGFX_BE_TARGET_MASK
    \param [in] format  Defines the matrix format (see above)
    \param [in] fMatrix  Transformation matrix (see above)

    \retval                 ::CYGFX_OK On success
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_TARGET Invalid target
    parameter
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_PARAMETER Invalid format
    parameter
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeSetGeoMatrix( CYGFX_BE_CONTEXT           beCtx,
                                               CYGFX_BE_TARGET            target,
                                               CYGFX_BE_GEO_MATRIX_FORMAT format,
                                               const CYGFX_FLOAT*         fMatrix);


/**
    The CyGfx_BeGetDrawBox function gets the last draw box. Each blit function
    calculates a store surface, draws a rectangle based on the ::CyGfx_BeSelectArea
    settings, and the related surface properties (active area, matrix). The
    bounding box of this rectangle and the previously stored draw box will be
    stored as the new draw box. The draw box will be cleared if the reset parameter
    of ::CyGfx_BeGetDrawBox is different from 0. An application can use the draw
    box to get the minimal rectangle of a (frame) buffer that must be restored. The
    function returns an error if no blit operation was executed since the last
    reset.
    \note
    The draw box calculation is based only on the bounding box calculations for SRC,
    DST, and MASK. Possible STORE settings do not affect the calculation.
    \note
    The draw box is not influenced by DrawEng and Fill operations, and is updated
    for IBO render operations only.
    \note  This function operates only in IBO mode.
    \note  This functions is deprecated. It may not be available in future versions of this driver.


    \param [in,out] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in,out] x  Pointer to get the horizontal start point
    \param [in,out] y  Pointer to get the vertical start point (Zero point depends
                       on ::CYGFX_BE_CTX_ATTR_ZERO_POINT.)
    \param [in,out] w  Pointer to get the width
    \param [in,out] h  Pointer to get the height
    \param [in] reset  Reset flag (see above)

    \retval                 ::CYGFX_OK On success
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_OPERATION Requested operation failed
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeGetDrawBox( CYGFX_BE_CONTEXT beCtx,
                                             CYGFX_U32*       x,
                                             CYGFX_U32*       y,
                                             CYGFX_U32*       w,
                                             CYGFX_U32*       h,
                                             CYGFX_U32        reset);

/**
    CyGfx_BeActiveArea defines the processing area for the surface that is bound to
    the specified target. See also #CyGfx_BeSelectArea and
    #CYGFX_BE_SURF_ATTR_USE_CLIPPING.
    The area is defined by the lower-left coordinate, width, and height. The lower-
    left coordinate is inside the processing area. The upper-right coordinate (x+w,
    y+h) is outside the processing area. If w or h is equal to 0, the active area
    is disabled (default state). If the active area specifies a rectangle that is
    (partly) outside the attached surface, the color value defined by
    #CyGfx_BeSetSurfAttribute and ::CYGFX_BE_SURF_ATTR_TILE_MODE is used for this
    region.
    \note
    Blit operations with a non-default CyGfx_BeActiveArea setting may fail and
    report an error if buffers are involved with a bit-per-pixel size different
    from a multiple of the 8-bit or YUV color format.
    \note
    The function has impact only on #CyGfx_BeBlt. Fill and draw instructions are
    not affected.

    \param [in,out] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] target  Setting target. It is a single or OR-combined value of the
                        following:
                        ::CYGFX_BE_TARGET_SRC
                        ::CYGFX_BE_TARGET_DST
                        ::CYGFX_BE_TARGET_STORE
                        ::CYGFX_BE_TARGET_MASK
    \param [in] x  The left start coordinate of the active area (-4096 .. 4095)
    \param [in] y  Lower (or upper see ::CYGFX_BE_CTX_ATTR_ZERO_POINT) start
                   coordinate of the active area (-4096 .. 4095)
    \param [in] w  Width of the active area (0 .. 4096)
    \param [in] h  Height of the active area (0 .. 4096)

    \retval                 ::CYGFX_OK On success
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_TARGET Invalid target
    parameter
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_PARAMETER Invalid dimensions

**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeActiveArea( CYGFX_BE_CONTEXT beCtx,
                                             CYGFX_BE_TARGET  target,
                                             CYGFX_S32        x,
                                             CYGFX_S32        y,
                                             CYGFX_U32        w,
                                             CYGFX_U32        h);

/**
    CyGfx_BeSelectArea defines the surfaces that are used to calculate the
    processing area of #CyGfx_BeBlt operations.
    A default #CyGfx_BeBlt function processes the rectangle in the store surface
    defined by the active area (see #CyGfx_BeActiveArea) of the src surface and the
    given matrix transformation defined by #CyGfx_BeSetGeoMatrix.
    #CyGfx_BeSelectArea changes it to the active area of any other bounded surfaces
    or a combination of surfaces. The combination can be defined as follows:
    CyGfx_BeSelectArea(beCtx, CYGFX_BE_TARGET_SRC|CYGFX_BE_TARGET_DST);
    If more than one surface defines the target, the bounding box of all active
    areas will be used.

    \param [in,out] beCtx  Blit Engine context (!=NULL)
    \param [in] target  Selecting target. It is a single or OR-combined value of
                        the following:
                        ::CYGFX_BE_TARGET_SRC (default)
                        ::CYGFX_BE_TARGET_DST
                        ::CYGFX_BE_TARGET_STORE
                        ::CYGFX_BE_TARGET_MASK

    \retval                 ::CYGFX_OK On success
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_TARGET Invalid target parameter
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeSelectArea( CYGFX_BE_CONTEXT beCtx,
                                             CYGFX_BE_TARGET  target);

/**
    Sets the warp buffer. Either virtual address or physical address can be used to
    indicate the buffer address. If both addresses are NULL, the warping feature
    will be shut OFF.
    \note
    - Using warping requires IBO render mode.
    - The address (pAdd or pPhyAdd) must be 32-bit-aligned.
    - In the context of warping, the default dimension for blitting is not determined 
      by the dimension of the source buffer, but rather by the warp dimension.
    - CyGfx_BeActiveArea(ctx, CYGFX_BE_TARGET_SRC, x, y, w, h); has no effect for warping.

    \param [in,out] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] pWarpParam  Warp coordinate buffer parameters
    \param [in] pAdd  Virtual address of the warp buffer
    \param [in] pPhyAdd  Physical address of the warp buffer

    \retval                  ::CYGFX_OK On success
    \retval                  ::CYGFX_ERP_ERR_BE_INVALID_ADDRESS Address not 32-bit
    aligned
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeSetWarpCoordinateBuffer( CYGFX_BE_CONTEXT          beCtx,
                                                          const CYGFX_WARP_PARAM_S* pWarpParam,
                                                          const void*               pAdd,
                                                          const void*               pPhyAdd);

/**
    This API function fills the specified region of the surface that is bound to
    the ::CYGFX_BE_TARGET_STORE
    target with the constant color (see ::CYGFX_BE_CTX_ATTR_COLOR).
    If w or h is equal to 0 or  exceeds the maximal blit dimension, this API returns CYGFX_OK, but no work is done.
    \note
    The graphical operation will not be finished after the CyGfx_BeFill call. The
    target buffer may be still in use.
    Use synchronization objects or simply call ::CyGfx_BeFinish to ensure that all
    operations are complete
    before the buffer is used by another hardware unit (e.g., CPU, display) beside
    BlitEng or DrawEng.

    \param [in] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                       ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] x  The left start coordinate of the store surface (0 .. 4095)
    \param [in] y  Lower (or upper see ::CYGFX_BE_CTX_ATTR_ZERO_POINT) start
                   coordinate of the store surface (0 .. 4095)
    \param [in] w  Width of the rectangle region in pixel count. The effective
                   width of that rectangle is limited by ::CYGFX_BE_MAX_IBO_WIDTH.
    \param [in] h  Height of the rectangle region in line count. The effective
                   height of that rectangle is limited by ::CYGFX_BE_MAX_IBO_HEIGHT.

    \retval             ::CYGFX_OK On success
    \retval             ::CYGFX_ERP_ERR_BE_INVALID_PARAMETER Requested
    operation exceeds the maximal surface dimension.
    \retval   ::CYGFX_ERP_ERR_BE_INVALID_COMPRESSION_OPERATION Partial fill
    operations with compressed buffers are not supported.
    \retval   ::CYGFX_ERP_ERR_CARD_DEV_BUSY Access to the device is denied.
    \retval   ::CYGFX_ERP_ERR_BE_COPSES_PER_TASK_EXCEEDED Maximum number of COPS
    has been reached. Change it using CyGfx_BeSetTaskCopses().
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeFill( CYGFX_BE_CONTEXT beCtx,
                                       CYGFX_U32        x,
                                       CYGFX_U32        y,
                                       CYGFX_U32        w,
                                       CYGFX_U32        h);

/**
    This API function initiates an operation that reads the pixel data from
    surfaces bound to SRC, DST, and MASK, and performs a calculation using it. The
    resulting pixel data build a rectangle that is written to the bound STORE
    surface. The details of the operation are defined by the context and surface
    attributes.
    \note
    - The offsetx and offsety position parameters will be added to the current
    geometric matrix of the src and mask surface. It means that they are not really
    required because the matrix changes can handle the same. However, the most
    common use case is to blend a (modified) source bitmap to a defined x, y
    position; it is much simpler to commit this position as the parameter. The
    geometrical relationship between pixels of the target buffer and pixels of the
    source buffer are defined in the following way:
    - Moffs represent a matrix using the fX, fY offsets given from this function.
    - Ms (Xs, Ys) represent the surface matrix (pixel) of the related source: SRC
    or MASK.
    \code
    / Xstore \                / Xs \
    |        | = Moffs * Ms * |    |
    \ Ystore /                \ Ys /
    \endcode
    The path for the DST calculation is slightly different:
    \code
    / Xstore \          / Xdst \
    |        | = Mdst * |      |
    \ Ystore /          \ Ydst /
    \endcode
    - A typical CyGfx_BeBlt operation processes a store rectangle defined by the
    active area of the SRC surface and the given matrix transformation. An
    application can change this behavior by using #CyGfx_BeSelectArea.
    - At least an SRC and STORE surface must be defined to proceed a CyGfx_BeBlt
    (simple copy) operation. If a DST surface is defined, a blend operation will be
    performed. If a MASK surface is defined, the MASK alpha channel will be used as
    external alpha. It means that the resulting alpha for the blending step is A =
    Asrc * Amask. If an ROP operation with MASK or DST is defined, external alpha
    or blending mutates to an ROP operation. See #CyGfx_BeRopOperation for more
    details.
    - The graphical operation will not be finished after the CyGfx_BeBlt call. It
    means that the involved buffers are still in use. Use synchronization objects
    or simple #CyGfx_BeFinish to ensure that all operations are complete.
    - Blit Engine operations can be queued by the driver to enhance performance.
    The execution, especially of long processing commands, can be forced
    by a #CyGfx_BeFlush call. #CyGfx_BeFinish, #CyGfx_WinSetSurface,
    and #CyGfx_BeGetSync also flush the command queue.
    - The following features can be defined for the bounded surfaces:
    - ALL: Simple transformation (translation, mirroring, 90 degrees rotation) if
    buffer is not compressed
    - SRC: Rotate/scale or index/decompress
    - DST: Index/decompress if SRC does not require these features
    - MASK: Scale if the scale factor is identical to SRC
    - An operation with the STORE BitPerPixel 1, 2, 4, or 18 or the STORE color
    format ::CYGFX_SM_COLOR_FORMAT_YUV422 has additional restrictions:
    - The DST surface must be zero or equal to STORE.
    - No DST geometry matrix (see CyGfx_BeSetGeoMatrix()) must be set.
    - If the destination blit area is clipped to zero, or it is outside of the
    store surface, or it exceeds maximal blit area (::CYGFX_BE_MAX_IBO_WIDTH,
    ::CYGFX_BE_MAX_IBO_HEIGHT), this API returns ::CYGFX_OK, but no blit operation is done.

    \param [in,out] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object.)
    \param [in] offsetx  Horizontal offset (-4096 .. 4095)
    \param [in] offsety  Vertical offset (-4096 .. 4095) (Count direction depends
                         on ::CYGFX_BE_CTX_ATTR_ZERO_POINT)

    \retval                 ::CYGFX_OK On success
    \retval                 ::CYGFX_ERP_ERR_BE_INVALID_DIMENSION x or y
    coordinates are out of range.
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_SURFACE_OBJECT Surface that is to be
    attached as source is invalid.
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_MASK_PARAM Mask surface has YUV422
    format - it is not supported.
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_NO_ACTIVE_AREA Blit operation started
    but no active area source defined.
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_WARP_BLEND MASK or DST buffer must not
    be used if warping is active.
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_MATRIX No geometry operations are
    possible when warping is activated.
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_WARP_BUFFER Resolution of the warp
    coordinate buffer differs from the resolution of the destination.
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_ROP_MODE Not all surfaces defined for
    the specified ROP mode. Either a ROP mode with mask use was selected but no
    mask surface defined, or A ROP mode with dst use was selected but no dst surface
    defined.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeBlt( CYGFX_BE_CONTEXT beCtx,
                                      CYGFX_FLOAT      offsetx,
                                      CYGFX_FLOAT      offsety);

/**
    This API function is used to wait for blitting and drawing completion for
    synchronization.

    \param [in] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                       ::CYGFX_BE_CONTEXT_OBJECT_S object.)
                       The context must not be an OTF context.

    \retval      ::CYGFX_OK On success
    \retval      ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT This action does not work on
    contexts with OTF tasks attached.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeFinish( CYGFX_BE_CONTEXT beCtx);

/**
    Forces the execution of BlitEng commands in a specified time.

    \param [in] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                       ::CYGFX_BE_CONTEXT_OBJECT_S object.)
                       The context must not be an OTF context.

    \retval      ::CYGFX_OK On success
    \retval      ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT This action does not work on
    contexts with OTF tasks attached.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeFlush( CYGFX_BE_CONTEXT beCtx);

/**
    Requests a sync object from the 2D command pipeline (similar to the OpenGL
    glFencSync() call). The sync object will be signaled after all preceding
    instructions have been processed.

    \param [in] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                       ::CYGFX_BE_CONTEXT_OBJECT_S object.)
                       The context must not be an OTF context.
    \param [in,out] sync  Sync object that gets the parameter of the inserted sync.
                          Note: The sync object must be a pointer to a ::CYGFX_SYNC_OBJECT_S.

    \retval      ::CYGFX_OK On success
    \retval      ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT This action does not work on
    contexts with OTF tasks attached.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeGetSync( CYGFX_BE_CONTEXT beCtx,
                                          CYGFX_SYNC       sync);

/**
    Enables the utilization counter register.

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_BE_INVALID_OPERATION Requested operation failed.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeUCountEnable(void);

/**
    Disables the utilization counter register

    \retval ::CYGFX_OK On success
    \retval ::CYGFX_ERP_ERR_BE_INVALID_OPERATION Requested operation failed.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeUCountDisable(void);

/**
    Inserts a sync wait into the 2D command stream (similar to the OpenGL
    glWaitSync() call). Blit Engine operations performed after this call are
    executed only after sync gets signaled.
    \note
    A CyGfx_BeWaitSync() call may block the execution of blitting and drawing
    operations. A preferred solution is to use CyGfx_SyncWaitSync() to detect the
    sync condition using the CPU. In this case, the bliteng pipeline is never
    blocked.

    \param [in] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                       ::CYGFX_BE_CONTEXT_OBJECT_S object.)
                       The context must not be an OTF context.
    \param [in] sync  Sync to wait for
                      Note: The sync object must be a pointer to a ::CYGFX_SYNC_OBJECT_S that was
                      initialized by CyGfx_SyncReset() or a function that "defines" a sync condition.
                      See \ref bgd_sync.

    \retval      ::CYGFX_OK On success
    \retval      ::CYGFX_ERP_ERR_BE_INVALID_CONTEXT This action does not work on
    contexts with OTF tasks attached.
    \retval     ::CYGFX_ERP_ERR_BE_INVALID_PARAMETER Invalid sync/node parameter

**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeWaitSync( CYGFX_BE_CONTEXT beCtx,
                                           CYGFX_SYNC       sync);

/**
    Reads the Blit Engine utilization counters.

    A read cycle is as follows:
    1. Call CyGfx_BeUCountEnable - to enable the utilization counter register
    ...perform the gfx work...
    3. Call CyGfx_BeUCountGet - to read the values
    4. Call CyGfx_BeUCountDisable - to disable the utilization counter register

    \param [out] result  Pointer to the structure that will be filled with the
    utilization counter values read from the hardware.

    \retval                     ::CYGFX_OK On success
    \retval                     ::CYGFX_ERP_ERR_BE_INVALID_OPERATION .<br>
                                Either the measurement window is too long or the utilization counters must be enabled first
                                before attempting to read the values.

    \retval       ::CYGFX_ERP_ERR_BE_INVALID_PARAMETER Structure specified as parameter is NULL.
**/
CYGFX_EXTERN CYGFX_ERROR CyGfx_BeUCountGet( CYGFX_BE_U_COUNT_S* result);

/** \} end addtogroup */
#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_BLITENG_H */
