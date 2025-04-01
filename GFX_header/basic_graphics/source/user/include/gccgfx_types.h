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
 * \file    gccgfx_types.h
 */


#ifndef GCCGFX_TYPES_H
#define GCCGFX_TYPES_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_types
* \brief Driver internal data type definitions
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_INSTANCE_IDENTIFIER_DISPLAY ((CYGFX_U08)0x01U) /**< Identifier for display handle */
#define GCCGFX_INSTANCE_IDENTIFIER_WINDOW  ((CYGFX_U08)0x02U) /**< Identifier for window handle */
#define GCCGFX_INSTANCE_IDENTIFIER_CTX     ((CYGFX_U08)0x03U) /**< Identifier for blit context handle */
#define GCCGFX_INSTANCE_IDENTIFIER_CAPTURE ((CYGFX_U08)0x04U) /**< Identifier for capture handle */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    Enumeration of all hardware resources that can be used to configure blit engine
    or display pipe.
    \note The IDs have been copied from the hardware manual. They must not be
    altered because they are written to hardware registers.
**/
typedef enum
{
    /*src form HW: pixelbus.h see enum SEL_... */
    GCCGFX_GEN_SEL_NONE         = 0,  /**< Hardware resource identifier (no resource) */
    GCCGFX_GEN_SEL_CONSTFRAME0  = 1,  /**< Hardware resource identifier (ConstFrame #0) */
    GCCGFX_GEN_SEL_EXTDST0      = 2,  /**< Hardware resource identifier (ExtDst #0) */
    GCCGFX_GEN_SEL_CONSTFRAME4  = 3,  /**< Hardware resource identifier (ConstFrame #4) */
    GCCGFX_GEN_SEL_EXTDST4      = 4,  /**< Hardware resource identifier (ExtDst #4) */
    GCCGFX_GEN_SEL_CONSTFRAME1  = 5,  /**< Hardware resource identifier (ConstFrame #1) */
    GCCGFX_GEN_SEL_EXTDST1      = 6,  /**< Hardware resource identifier (ExtDst #1) */
    GCCGFX_GEN_SEL_CONSTFRAME5  = 7,  /**< Hardware resource identifier (ConstFrame #5) */
    GCCGFX_GEN_SEL_EXTDST5      = 8,  /**< Hardware resource identifier (ExtDst #5) */
    GCCGFX_GEN_SEL_EXTSRC4      = 9,  /**< Hardware resource identifier (ExtSrc #4) */
    GCCGFX_GEN_SEL_STORE4       = 10, /**< Hardware resource identifier (Store #4) */
    GCCGFX_GEN_SEL_FETCHLAYER0  = 11, /**< Hardware resource identifier (FetchLayer #0) */
    GCCGFX_GEN_SEL_FETCHDECODE4 = 12, /**< Hardware resource identifier (FetchDecode #4) */
    GCCGFX_GEN_SEL_FETCHECO4    = 13, /**< Hardware resource identifier (FetchEco #4) */
    GCCGFX_GEN_SEL_FETCHWARP1   = 14, /**< Hardware resource identifier (FetchWarp #1) */
    GCCGFX_GEN_SEL_FETCHECO1    = 15, /**< Hardware resource identifier (FetchEco #1) */
    GCCGFX_GEN_SEL_FETCHLAYER1  = 16, /**< Hardware resource identifier (FetchLayer #1) */
    GCCGFX_GEN_SEL_FETCHDECODE0 = 17, /**< Hardware resource identifier (FetchDecode #0) */
    GCCGFX_GEN_SEL_GAMMACOR4    = 18, /**< Hardware resource identifier (GammaCor #4) */
    GCCGFX_GEN_SEL_MATRIX4      = 19, /**< Hardware resource identifier (Matrix #4) */
    GCCGFX_GEN_SEL_GPSCALER4    = 20, /**< Hardware resource identifier (GpScaler #4) */
    GCCGFX_GEN_SEL_HISTOGRAM4   = 21, /**< Hardware resource identifier (Histo #4) */
    GCCGFX_GEN_SEL_LAYERBLEND1  = 22, /**< Hardware resource identifier (LayerBlend #1) */
    GCCGFX_GEN_SEL_LAYERBLEND2  = 23, /**< Hardware resource identifier (LayerBlend #2) */
    GCCGFX_GEN_SEL_LAYERBLEND3  = 24, /**< Hardware resource identifier (LayerBlend #3) */
    GCCGFX_GEN_SEL_LAYERBLEND4  = 25, /**< Hardware resource identifier (LayerBlend #4) */
    GCCGFX_GEN_SEL_LAYERBLEND5  = 26, /**< Hardware resource identifier (LayerBlend #5) */
    GCCGFX_GEN_SEL_EXTSRC8      = 27, /**< Hardware resource identifier (ExtSrc #8) */
    /* Different from HW! We use an exact ID for all fetch units, but we must not use this id to connect something.*/
    GCCGFX_GEN_SEL_FETCHSRC     = 50, /**< Hardware resource identifier (all Fetch units) */
    GCCGFX_GEN_SEL_FETCHDST     = 51, /**< Hardware resource identifier (all Fetch units) */
    GCCGFX_GEN_SEL_FETCHMASK    = 52, /**< Hardware resource identifier (all Fetch units) */
    GCCGFX_GEN_SEL_STORE        = 54  /**< Hardware resource identifier (all Store units) */
} GCCGFX_GEN_SEL_E;
/**
    Handle identifier
**/
typedef struct
{
    CYGFX_U08 handle_type; /**< handle type: GCCGFX_INSTANCE_IDENTIFIER_DISPLAY, GCCGFX_INSTANCE_IDENTIFIER_WINDOW, GCCGFX_INSTANCE_IDENTIFIER_CTX and GCCGFX_INSTANCE_IDENTIFIER_CAPTURE */
    CYGFX_U08 handle_id;   /**< used for handle types GCCGFX_INSTANCE_IDENTIFIER_DISPLAY and GCCGFX_INSTANCE_IDENTIFIER_WINDOW.
                                Ignored for handle type GCCGFX_INSTANCE_IDENTIFIER_CTX and GCCGFX_INSTANCE_IDENTIFIER_CAPTURE */
    CYGFX_U16 padding;     /**< padding */
} GCCGFX_INSTANCE_IDENTIFIER_S;


/**
    Warp parameters (like HW registers, do not change)
**/
typedef struct
{
    CYGFX_U32 arbstartx; /**< Start value X for arbitrary warping */
    CYGFX_U32 arbstarty; /**< Start value Y for arbitrary warping */
    CYGFX_U32 arbdelta;  /**< Start values for delta incrementation of arbitrary warping */
} GCCGFX_IRIS_WARPSETTINGS_PARAMS_S;


/**
    Warp attributes
**/
typedef struct
{
    CYGFX_ADDR                        PhysAddWarpCoord; /**< physical address of warp coordinate buffer */
    CYGFX_U32                         WarpCoordControl; /**< HW related content GFXREG_FETCHWARP_WARPCONTROL, WARPBITSPERPIXEL, WARPCOORDINATEMODE and WARPSYMMETRICOFFSET_SHIFT */
    CYGFX_U16                         WarpCoordWidth;   /**< Warp Buffer width */
    CYGFX_U16                         WarpCoordHeight;  /**< Warp Buffer height */
    GCCGFX_IRIS_WARPSETTINGS_PARAMS_S Param;            /**< Warp parameters */
    CYGFX_U32                         KeepLines;        /**< Lines needed for buffer warping: must not be used for on-the-fly buffering (HW setting) */
} GCCGFX_IRIS_WARPSETTINGS_S;


/**
    Structure to store blitblend attributes (generated)
**/
typedef struct
{
    CYGFX_U32 constantcolor;           /**< Constant color register */
    CYGFX_U32 colorredblendfunction;   /**< Open GL RGB blending function */
    CYGFX_U32 colorgreenblendfunction; /**< Open GL RGB blending function */
    CYGFX_U32 colorblueblendfunction;  /**< Open GL RGB blending function */
    CYGFX_U32 alphablendfunction;      /**< Open GL alpha blending function */
    CYGFX_U32 blendmode1;              /**< Open GL and Open VG blending modes for colors red and green */
    CYGFX_U32 blendmode2;              /**< Open GL and Open VG blending modes for color blue and alpha */
} GCCGFX_BE_BLITBLENDATTR_S;


/**
    Structure to store color Matrix attributes (generated)
**/
typedef struct
{
    /* Warning: Structure represents a HW register part. Do not modify!! */
    CYGFX_U32 control;       /**< Color Matrix control register */
    CYGFX_U32 red0;          /**< Matrix values for calculation of the red output value. */
    CYGFX_U32 red1;          /**< Matrix values for calculation of the red output value. */
    CYGFX_U32 green0;        /**< Matrix values for calculation of the green output value. */
    CYGFX_U32 green1;        /**< Matrix values for calculation of the green output value. */
    CYGFX_U32 blue0;         /**< Matrix values for calculation of the blue output value. */
    CYGFX_U32 blue1;         /**< Matrix values for calculation of the blue output value. */
    CYGFX_U32 alpha0;        /**< Matrix values for calculation of the alpha output value. */
    CYGFX_U32 alpha1;        /**< Matrix values for calculation of the alpha output value. */
    CYGFX_U32 offsetvector0; /**< Offset vectors for red and green output. */
    CYGFX_U32 offsetvector1; /**< Offset vectors for blue and alpha output. */
} GCCGFX_IRIS_COLORMATRIX_S;


/**
    Structure to store CLUT (color look up table) data
**/
typedef struct
{
    CYGFX_U32        gammaFormat : 16; /**< CLUT entity size ::CYGFX_CM_CLUT_FORMAT */
    CYGFX_U32        flag        : 2;  /**< CLUT flag defines per pixel alpha usage. See CYGFX_DISP_CLUT_ALPHA. */
    CYGFX_U32        padding     : 14; /**< Padding to fill up bitfields */
    const CYGFX_S16* pCLUTR;           /**< pointer to array of 10-bit red values */
    const CYGFX_S16* pCLUTG;           /**< pointer to array of 10-bit green values */
    const CYGFX_S16* pCLUTB;           /**< pointer to array of 10-bit blue values */
} GCCGFX_IRIS_CLUT_S;


/**
    Data type that specifies the data for Histogram.
**/
typedef struct
{
    CYGFX_CM_HISTO_CONV    m_eColIn;      /**< Input color format of this Unit */
    CYGFX_CM_HISTO_MEASURE m_eColMeasure; /**< Measurement color format of this Unit */
    CYGFX_CM_HISTO_MODE    m_eMode;       /**< Operation mode of this Unit */
    CYGFX_CM_HISTO_SOURCE  m_eSource;     /**< Input source of this Unit */
    CYGFX_U16              m_Clipx;       /**< The top left x coordinate of clip window of this Unit */
    CYGFX_U16              m_Clipy;       /**< The top left y coordinate of clip window of this Unit */
    CYGFX_U16              m_Clipw;       /**< The width of clip window of this Unit */
    CYGFX_U16              m_Cliph;       /**< The height of clip window of this Unit */
    CYGFX_BOOL             m_bDoUpdate;   /**< The content of this structure has been changed since last write to shadow, so an update must be done. */
} GCCGFX_HISTO_DATA_S;


/**
    Filter attributes
**/
typedef struct
{
    /* Do not change! The order is like HW. */
    CYGFX_U32               coefficientsh0; /**< Horizontal coefficients for filter_mode FIR. */
    CYGFX_U32               coefficientsh1; /**< Horizontal coefficients for filter_mode FIR. */
    CYGFX_U32               coefficientsh2; /**< Horizontal coefficients for filter_mode FIR. */
    CYGFX_U32               coefficientsh3; /**< Horizontal coefficients for filter_mode FIR. */
    CYGFX_U32               coefficientsv0; /**< Vertical coefficients for filter_mode FIR. */
    CYGFX_U32               coefficientsv1; /**< Vertical coefficients for filter_mode FIR. */
    CYGFX_U32               coefficientsv2; /**< Vertical coefficients for filter_mode FIR. */
    CYGFX_U32               coefficientsv3; /**< Vertical coefficients for filter_mode FIR. */
    /* added by driver */
    CYGFX_CM_FILTER_CHANNEL eChannel;       /**< Filter channel */
    CYGFX_U08               taps_h;         /**< Filter width, can be 0 or every odd value between 3 and 15. */
    CYGFX_U08               taps_v;         /**< Filter height, can be 0 or every odd value between 3 and 15. */
    CYGFX_U08               fir_exponent;   /**< FIR product sum is divided by 2**(fir_exponent) and rounded. Must be: 0 <= fir_exponent < 16. */
} GCCGFX_IRIS_FILTER_S;

/**
    Structure to store context attributes
**/
typedef struct
{
    GCCGFX_BE_BLITBLENDATTR_S blitblend;                      /**< Register representation of blit blend attributes */
    CYGFX_U32                 rop_op;                         /**< ROP3 code for RGBA component. Use RASTEROPERATIONINDICES macros to access */
    CYGFX_U32                 area_select               : 4;  /**< Define the buffers that are used to determine the bounding box used for rendering. Bit combination of CYGFX_BE_TARGET_SRC, CYGFX_BE_TARGET_DST, CYGFX_BE_TARGET_MASK, CYGFX_BE_TARGET_STORE */
    CYGFX_U32                 dither_control            : 8;  /**< Dither Control see #GCCGFX_BE_DITHER_COLOR, #GCCGFX_BE_DITHER_ALPHA and #GCCGFX_BE_DITHER_OFFSET_SHIFT */
    CYGFX_U32                 filter_mode               : 2;  /**< Filter mode: ::CYGFX_GEN_FILTER_NEAREST, ::CYGFX_GEN_FILTER_BILINEAR or ::CYGFX_GEN_FILTER_ANISOTROPIC */
    CYGFX_U32                 gamma_mode                : 3;  /**< Gamma mode    CYGFX_BE_GAMMA_NEUTRAL */
    CYGFX_U32                 screen_orientation        : 1;  /**< CYGFX_BE_ATTR_ZERO_TOP_LEFT = zero point is upper left corner; CYGFX_BE_ATTR_ZERO_BOTTOM_LEFT = zero point is lower left corner */
    CYGFX_U32                 object_partitioning_width : 11; /**< Target width for object partitioning. */
    CYGFX_U32                 padding                   : 3;  /**< Padding to fill up bitfields */
} GCCGFX_BE_CTXATTR_S;


/**
    Common data passed to blit mode specific functions.
**/
typedef struct
{
    IRIS_MATH_M3X3 m_Src;     /**< Transformation matrix for source surface */
    IRIS_MATH_M3X2 m_Mask;    /**< Transformation matrix for mask surface */
    IRIS_MATH_M3X2 m_Dst;     /**< Transformation matrix for destination surface */
    CYGFX_S32      rr_StartX; /**< Bounding box start X position */
    CYGFX_S32      rr_StartY; /**< Bounding box start Y position */
    CYGFX_S32      rr_EndX;   /**< Bounding box end X position */
    CYGFX_S32      rr_EndY;   /**< Bounding box end Y position */
    CYGFX_U32      usage;     /**< Processing flags */
} GCCGFX_BE_BLIT_HELPER_S;


/**
    VIDEOSS Surface structure
**/
typedef struct
{
    GCCGFX_SURFACE_S* pSurface;                 /**< The related surface object */
    CYGFX_U32         color;                    /**< Constant color of surface [default = 0xffffffff] */
    CYGFX_S32         clip_x;                   /**< x coordinate at lower left in clip frame [default = 0] */
    CYGFX_S32         clip_y;                   /**< y coordinate at lower left in clip frame [default = 0] */
    CYGFX_U32         clip_w;                   /**< width of the clipped frame [default = 0] */
    CYGFX_U32         clip_h;                   /**< height of the clipped clip frame [default = 0] */
    CYGFX_U32         tile_mode            : 2; /**< Tile mode for pixels in out of buffer area.    CYGFX_BE_TILE_PAD_ZERO */
    CYGFX_U32         AlphaSrcEnable0      : 1; /**< Value 1 enables source alpha for computing the output alpha */
    CYGFX_U32         AlphaConstEnable0    : 1; /**< Value 1 enables constant alpha for computing the output alpha. */
    CYGFX_U32         AlphaMaskEnable0     : 1; /**< Value 1 enables mask alpha for computing the output alpha. */
    CYGFX_U32         AlphaTransEnable0    : 1; /**< Value 1 enables transparent alpha for computing the output alpha. */
    CYGFX_U32         RGBAlphaSrcEnable0   : 1; /**< Value 1 enables source alpha (stored together with color component in the source buffer) for RGB pre-multiply. */
    CYGFX_U32         RGBAlphaConstEnable0 : 1; /**< Value 1 enables constant alpha (ConstAlpha fields) for RGB pre-multiply. */
    CYGFX_U32         RGBAlphaMaskEnable0  : 1; /**< Value 1 enables mask alpha (read by another Fetch unit from a separate alpha layer) for RGB pre-multiply. */
    CYGFX_U32         RGBAlphaTransEnable0 : 1; /**< Value 1 enables transparent alpha (0 or 1 depending on RGB matching ConstantColor setting) for RGB pre-multiply. */
    CYGFX_U32         PremulConstRGB0      : 1; /**< When enabled (value 1) the values given by ConstantRed/Green/Blue are used instead of alpha for source RGB pre-multiply. */
    CYGFX_U32         ClipWindowEnable0    : 1; /**< Value 1 enables the clip window. */
    CYGFX_U32         RawPixel             : 1; /**< Raw pixel mode. If enabled (value = 1), the ComponentBits/Shift settings are replaced for all layers by fixed values that allow passing the pixel data read from memory unchanged to subsequent units (e.g. for reading coordinate layers). Multiply stages and transparent color are deactived. Skip and Tile pixels are not affected by this setting. */
    CYGFX_U32         gamma_remove         : 1; /**< Enable the gamma correction stage to remove gamma from RGB components. Used in display path to save user properties. In blit path we use it for temporary settings (modified during blit) */
    CYGFX_U32         isRingbuffer         : 1; /**< This surface is used for capture_to_window. The base address is controlled by Capture component. */
    CYGFX_U32         ScanDirection        : 7; /**< The matrix format see GCCGFX_HW_FETCH_SCAN_BIT_... */
    CYGFX_U32         OTFSubLayerId        : 4; /**< If one of sub window on a multi-layer fetch is OTF window, other non-OTF sub windows on this fetch should also use this id for LBH. */
    CYGFX_U32         padding              : 6; /**< Padding to fill up bitfields */
} GCCGFX_IRIS_FETCH_S;


/**
    VIDEOSS Display structure
**/
typedef struct
{
    GCCGFX_INSTANCE_IDENTIFIER_S identifier;                 /**< Handle type identifier */
    CYGFX_U32                    bg_color;                   /**< Define the bg color for the display */
    CYGFX_U32                    dither_format;              /**< see ::CYGFX_DISP_DITHER_FORMAT */
    CYGFX_U16                    Hact;                       /**< active pixels per line */
    CYGFX_U16                    Vact;                       /**< active lines per frame */
    CYGFX_FLOAT                  pixelClock;                 /**< pixel clock in MHz */
    CYGFX_U32                    Htot;                       /**< total pixels per line */
    CYGFX_U32                    Vtot;                       /**< total lines per frame */
    GCCGFX_IRIS_CLUT_S           gammaDisp;                  /**< Structure to store CLUT data (after color matrix) */
    GCCGFX_IRIS_COLORMATRIX_S    colorMatrix;                /**< Structure to store color matrix data */
    GCCGFX_IRIS_CLUT_S           gammaDisp2;                 /**< Structure to store the second CLUT data (before color matrix) */
    GCCGFX_HISTO_DATA_S          histoData;                  /**< Structure to store the histogram data */
    CYGFX_U08                    dither_mode;                /**< CYGFX_DISP_DITHER_MODE */
    CYGFX_U08                    changed;                    /**< Bits combination of GFX_DISP_BGC_CHANGED, GFX_DISP_CLUT_CHANGED, GFX_DISP_DITHER_CHANGED, GFX_DISP_EXTDST_CHANGED */
    CYGFX_U08                    displayMode;                /**< CYGFX_DISP_MODE */
    CYGFX_U08                    paddingByte0;               /**< Padding byte 0 */
    GCCGFX_SYNC_NODE_ID          syncNodeId;                 /**< SyncId to wait for. Will assigned to next commit as sync */
    CYGFX_S32                    syncValue;                  /**< SyncVal to wait for. Will assigned to next commit as sync */
    CYGFX_U32                    direct_capture        : 2;  /**< CYGFX_U08 CYGFX_CAP_DIRECT_CAPTURE */
    CYGFX_U32                    gamma_add             : 1;  /**< 0: gamma neutral, 1: add gamma */
    CYGFX_U32                    outputController      : 1;  /**< CYGFX_DISP_CONTROLLER */
    CYGFX_U32                    dither_enable         : 1;  /**< dither enable */
    CYGFX_U32                    input_control         : 1;  /**< input control CYGFX_DISP_INPUT_CONTROL */
    CYGFX_U32                    used                  : 1;  /**< currently in use */
    CYGFX_U32                    sync_mode             : 2;  /**< ::CYGFX_DISP_SYNC_MODE */
    CYGFX_U32                    WinCommitByDispCommit : 1;  /**< DispCommit also forces WinCommit */
    CYGFX_U32                    reserved              : 1;  /**< If display resource CYGFX_SYS_RES_DISP0/CYGFX_SYS_RES_DISP1 is reserved by Safety display driver, CYGFX_TRUE means reserved, default CYGFX_FALSE */
    CYGFX_U32                    padding               : 21; /**< padding */
} GCCGFX_IRIS_DISPLAY_S;


/**
    VIDEOSS Window structure
**/
typedef struct GCCGFX_IRIS_WINDOW_TYPE
{
    GCCGFX_INSTANCE_IDENTIFIER_S identifier;                    /**< Handle type identifier */
    GCCGFX_IRIS_FETCH_S          irisSurf;                      /**< Surface bound to a window */
    GCCGFX_SURFACE_S*            pSecondSurface;                /**< Secondary surface bound to a window (extern alpha) */
    CYGFX_CAP_CTX                capHandle;                     /**< Handle to bound capture stream or NULL, if no capture stream is bound */
    CYGFX_CAP_CTX                capRemovedHandle;              /**< Handle to capture stream that is to be detached from the window with the next call to CyGfx_DispWinCommit() */
    CYGFX_U32                    swap_interval;                 /**< swap interval to be used for displaying surfaces */
    CYGFX_S32                    last_swap;                     /**< defines when the last swap occurred */
    CYGFX_U32                    features;                      /**< bit combination. See CYGFX_DISP_FEATURE_... */
    CYGFX_FLOAT                  matrix[6];                     /**< 3x2 transformation matrix for scaling, rotation, translation and flipping */
    CYGFX_S16                    x;                             /**< x-coordinate */
    CYGFX_S16                    y;                             /**< y-coordinate */
    CYGFX_S16                    w;                             /**< width */
    CYGFX_S16                    h;                             /**< height */
    GCCGFX_GEN_SEL_E    layer_blend_id;                /**< Used to store layer assignment #GCCGFX_GEN_SEL_E */
    CYGFX_U08           sub_layer_id;                  /**< Used to store the sub id of the fetch (start counting with 1) */
    GCCGFX_GEN_SEL_E    fetch_id;                      /**< Used to store the used fetch #GCCGFX_GEN_SEL_E */
    GCCGFX_GEN_SEL_E    second_fetch_id;               /**< Used to store the second fetch (or 0 if not used) #GCCGFX_GEN_SEL_E */
    CYGFX_U08           layerblend;                    /**< bit combination. See CYGFX_WIN_BLEND_... */
    CYGFX_U08                    changed;                       /**< bit combination. Can be GFX_DISP_WIN_DISABLE_CHANGED, GFX_DISP_WIN_GENERIC_CHANGED, GFX_DISP_WIN_OPEN */
    CYGFX_U08                    screen;                        /**< #CYGFX_DISP_OUTPUT_SCREEN */
    GCCGFX_SYNC_NODE_ID          syncWaitId;                    /**< Stores sync node id of sync condition set in ::CyGfx_WinWaitSync(). Inserted into window device queue in ::CyGfx_WinCommit(). */
    CYGFX_S32                    syncWaitValue;                 /**< Stores sync node value of sync condition set in ::CyGfx_WinWaitSync(). Inserted into window device queue in ::CyGfx_WinCommit(). */
    CYGFX_U32                    surface_property;              /**< Save the surface property count for the window. It is required beside changed to know changes for ::CyGfx_DispCommit() */
    GCCGFX_GEN_SEL_E    del_layer_blend_id;            /**< same as layer_blend_id but for delete */
    CYGFX_U08           del_sub_layer_id;              /**< same as sub_layer_id but for delete */
    GCCGFX_GEN_SEL_E    del_second_fetch_id;           /**< same as second_fetch_id but for delete */
    GCCGFX_GEN_SEL_E    del_fetch_id;                  /**< same as fetch_id but for delete */
    CYGFX_U32           filter                   : 2;  /**< #CYGFX_GEN_FILTER */
    CYGFX_U32           display_id               : 2;  /**< display id for this window (1 or 2) */
    CYGFX_U32           disable_window           : 1;  /**< 1 if window in disabled */
    CYGFX_U32           used                     : 1;  /**< 1 if window in in use */
    CYGFX_U32           bUseVideoProcessingBlock : 1;  /**< The video processing block is currently in the display path */
    CYGFX_U32           bVideoUpscale            : 1;  /**< The display path needs the video processing block for upscaling of capture input */
    CYGFX_U32           bReconfigureRingbuffer   : 1;  /**< Window properties have been changed that require reconfiguration of ring buffer in capture_to_window mode */
    CYGFX_U32           del_display_id           : 2;  /**< same as display_id but for delete */
    CYGFX_U32           bIs2dOnTheFly            : 1;  /**< 1 if it is an on-the-fly window */
    CYGFX_U32           padding                  : 20; /**< Padding to fill up bitfields */
} GCCGFX_IRIS_WINDOW_S;

/**
    Drawing engine context object
**/
typedef struct
{
    CYGFX_U32*           pPathAddrStart;    /**< Start address for path */
    CYGFX_U32*           pPathAddrEnd;      /**< End address for path (pathAddrEnd is not included) */
    CYGFX_U32*           pPathAddrSW;       /**< Address for next path word */
    CYGFX_U32*           pPathAddrLastSW;   /**< Address for next path word */
    CYGFX_U32*           pPathAddrHw;       /**< Path address still containing draw data (still in use) */
    CYGFX_U32*           pPathAddrSWOld;    /**< store the draw start address (used to detect if draw instructions are in queue) */
    CYGFX_U32            minPathBuffer;     /**< minimal path buffer, store the lowest value (value in words) */
    CYGFX_DE_DATA_FORMAT data_format;       /**< store the data format (float, ...) */
    CYGFX_U08            paddingByte0;      /**< Padding byte 0 */
    CYGFX_U08            paddingByte1;      /**< Padding byte 1 */
    CYGFX_U08            paddingByte2;      /**< Padding byte 2 */
    CYGFX_S32            data[6];           /**< Store the last coordinates */
    CYGFX_S32            sStartX;           /**< Store the X position of the last move. Add a line to this point before drawing. */
    CYGFX_S32            sStartY;           /**< Store the Y position of the last move. Add a line to this point before drawing. */
    CYGFX_S32            sCurrX;            /**< Store the current X position */
    CYGFX_S32            sCurrY;            /**< Store the current Y position */
    CYGFX_S32            sControlX;         /**< Store the current X position for smooth elements */
    CYGFX_S32            sControlY;         /**< Store the last control point for smooth elements */
    CYGFX_U08            Command;           /**< Store the current path element of CyGfx_DeAppendPathData */
    CYGFX_U08            LastCommand;       /**< Store the last path element of CyGfx_DeAppendPathData (required for smooth elements) */
    CYGFX_U08            DataCnt;           /**< Store the current data count of the last instruction */
    CYGFX_U08            DataMax;           /**< Store the number of required data of the last instruction */
    CYGFX_U32            subPixelGrid : 4;  /**< SUBPIXELGRID. Must be 1, 2, 4 or 8 */
    CYGFX_U32            fillrulex    : 1;  /**< must fit to HW!: 0 .. EVENODD, 1 ... NONZERO */
    CYGFX_U32            bAllowRedraw : 1;  /**< 0: CyGfx_DeDraw with no path data will return; 1: the last path will be redrawn in this case. */
    CYGFX_U32            bPathDrawn   : 1;  /**< set to one if path was drawn and reset to 0 if next data will be added */
    CYGFX_U32            bNewBuffer   : 1;  /**< New assigned buffer */
    CYGFX_U32            padding      : 24; /**< Padding to fill up bitfields */
} GCCGFX_DE_CTX_S;

/**
    BE context object
**/
typedef struct
{
    GCCGFX_INSTANCE_IDENTIFIER_S identifier;       /**< Handle type identifier */
    GCCGFX_IRIS_FETCH_S          surf_src;         /**< Source surface for BlitEngine */
    GCCGFX_IRIS_FETCH_S          surf_dst;         /**< Destination surface for BlitEngine */
    GCCGFX_IRIS_FETCH_S          surf_mask;        /**< Mask image surface for BlitEngine */
    GCCGFX_IRIS_FETCH_S          surf_store;       /**< Store image surface for BlitEngine */
    CYGFX_FLOAT                  matrix_src[9];    /**< Transform matrix for src */
    CYGFX_FLOAT                  matrix_dst[6];    /**< Transform matrix for dst */
    CYGFX_FLOAT                  matrix_mask[6];   /**< Transform matrix for mask */
    CYGFX_U32                    ibo_blit_cnt;     /**< This counter will be increased for each IBO based operation. */
    CYGFX_U32                    lbo_blit_cnt;     /**< This counter will be increased for each LBO based operation. */
    GCCGFX_BE_CTXATTR_S          attributes;       /**< Attributes for BlitEngine */
    GCCGFX_IRIS_COLORMATRIX_S    cmatrix;          /**< Color Matrix Settings */
    GCCGFX_IRIS_CLUT_S           clut;             /**< CLUT data */
    GCCGFX_IRIS_FILTER_S         filter;           /**< Filter Settings */
    CYGFX_U32                    inv_sX;           /**< Store the bounding box of a blit operation: x start */
    CYGFX_U32                    inv_sY;           /**< Store the bounding box of a blit operation: y start */
    CYGFX_U32                    inv_eX;           /**< Store the bounding box of a blit operation: x end */
    CYGFX_U32                    inv_eY;           /**< Store the bounding box of a blit operation: y end */
    GCCGFX_IRIS_WARPSETTINGS_S   warp;             /**< Special settings for warping */
    GCCGFX_DE_CTX_S              dectx;            /**< Store the drawing engine context */
    CYGFX_U32                    task        : 3;  /**< Defines the task for the cmdseq. Must be 0...7 */
    CYGFX_U32                    render_mode : 2;  /**< Defines the render mode. Must be CYGFX_BE_RENDER_MODE_IBO, CYGFX_BE_RENDER_MODE_LBO or CYGFX_BE_RENDER_MODE_MIXED */
    CYGFX_U32                    padding     : 27; /**< Padding bits */
} GCCGFX_BE_CTX_S;


/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_TYPES_H */

