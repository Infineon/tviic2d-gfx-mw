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
    \file        mml_gdc_display.h
 */


#ifndef MML_GDC_DISPLAY_H
#define MML_GDC_DISPLAY_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_display.h"
#include "cygfx_window.h"
#include "cygfx_cm.h"

/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_display
    \code #include "mml_gdc_display.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for Display API */
/** \{ */
#define MM_GDC_DISPLAY_MIN_DIMENSION                CYGFX_DISP_MIN_DIMENSION                /**< Simple redefinition */

#define MML_GDC_DISP_FEATURE_INDEX_COLOR            CYGFX_DISP_FEATURE_INDEX_COLOR          /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_DECODE                 CYGFX_DISP_FEATURE_DECODE               /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_EXTERN_ALPHA           CYGFX_DISP_FEATURE_EXTERN_ALPHA         /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_YUV1BUFF               CYGFX_DISP_FEATURE_YUV1BUFF             /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_WARP                   CYGFX_DISP_FEATURE_WARP                 /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_UPSCALE                CYGFX_DISP_FEATURE_UPSCALE              /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_COLOR_MATRIX           CYGFX_DISP_FEATURE_COLOR_MATRIX         /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_IMAGE_PROCESSING       CYGFX_DISP_FEATURE_IMAGE_PROCESSING     /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_MULTI_LAYER            CYGFX_DISP_FEATURE_MULTI_LAYER          /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_CAPTURE                CYGFX_DISP_FEATURE_CAPTURE              /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_FETCH_DECODE0          CYGFX_DISP_FEATURE_FETCH_DECODE0        /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_FETCH_WARP1            CYGFX_DISP_FEATURE_FETCH_WARP1          /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_FETCH_DECODE4          CYGFX_DISP_FEATURE_FETCH_DECODE4        /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_FETCH_LAYER0           CYGFX_DISP_FEATURE_FETCH_LAYER0         /**< Simple redefinition */
#define MML_GDC_DISP_FEATURE_FETCH_LAYER1           CYGFX_DISP_FEATURE_FETCH_LAYER1         /**< Simple redefinition */


#define MML_GDC_DISP_BUFF_TARGET_EXTERN_ALPHA       CYGFX_DISP_BUFF_TARGET_EXTERN_ALPHA     /**< Simple redefinition */
#define MML_GDC_DISP_BUFF_TARGET_COLOR_BUFF         CYGFX_DISP_BUFF_TARGET_COLOR_BUFF       /**< Simple redefinition */


#define MML_GDC_DISP_BLEND_NONE                     CYGFX_WIN_BLEND_NONE                    /**< Simple redefinition */
#define MML_GDC_DISP_BLEND_TRANSPARENCY             CYGFX_WIN_BLEND_TRANSPARENCY            /**< Simple redefinition */
#define MML_GDC_DISP_BLEND_GLOBAL_ALPHA             CYGFX_WIN_BLEND_GLOBAL_ALPHA            /**< Simple redefinition */
#define MML_GDC_DISP_BLEND_SOURCE_ALPHA             CYGFX_WIN_BLEND_SOURCE_ALPHA            /**< Simple redefinition */
#define MML_GDC_DISP_BLEND_EXTERN_ALPHA             CYGFX_WIN_BLEND_EXTERN_ALPHA            /**< Simple redefinition */
#define MML_GDC_DISP_BLEND_SOURCE_MULTIPLY_ALPHA    CYGFX_WIN_BLEND_SOURCE_MULTIPLY_ALPHA   /**< Simple redefinition */


#define MML_GDC_DISP_HSYNC_LOW                      (0u)           /**< Hsync signal low active */
#define MML_GDC_DISP_HSYNC_HIGH                     (1uL << 0u)    /**< Hsync signal high active */
#define MML_GDC_DISP_VSYNC_LOW                      (0u)           /**< Vsync signal low active */
#define MML_GDC_DISP_VSYNC_HIGH                     (1uL << 1u)    /**< Vsync signal high active */
#define MML_GDC_DISP_DE_LOW                         (0u)           /**< Data enable signal low active */
#define MML_GDC_DISP_DE_HIGH                        (1uL << 2u)    /**< Data enable signal high active */
#define MML_GDC_DISP_RGB_LOW                        (0u)           /**< No inversion of pixel data */
#define MML_GDC_DISP_RGB_HIGH                       (1uL << 3u)    /**< Pixel data inverted */


#define MML_GDC_DISP_GAMMA_NEUTRAL                  CYGFX_DISP_GAMMA_NEUTRAL                /**< Simple redefinition */
#define MML_GDC_DISP_GAMMA_REMOVE                   CYGFX_DISP_GAMMA_REMOVE                 /**< Simple redefinition */
#define MML_GDC_DISP_GAMMA_ADD                      CYGFX_DISP_GAMMA_ADD                    /**< Simple redefinition */


#define MML_GDC_DISP_PROPERTIES_INITIALIZER {  MML_GDC_DISP_CONTROLLER_0, MML_GDC_DISP_SINGLE_SCREEN, MML_GDC_DISP_SYNC_MODE_NONE, 0, 0, 60, 0, NULL, NULL, 0 }     /**< Simple redefinition */

#define MML_GDC_DISP_WINDOW_PROPERTIES_INITIALIZER  CYGFX_DISP_WINDOW_PROPERTIES_INITIALIZER        /**< Simple redefinition */
#define MML_GDC_DISP_MODE_LINE_INITIALIZER { \
    0.0f, /* pixelClock */ \
    0,    /* horDisplayPeriod */ \
    0,    /* horPulseStart */ \
    0,    /* horPulseEnd */ \
    0,    /* horTotal */ \
    0,    /* vertDisplayPeriod */ \
    0,    /* vertPulseStart */ \
    0,    /* vertPulseEnd */ \
    0,    /* vertTotal */ \
    0,    /* horTotalMin */ \
    0,    /* horTotalMax */ \
    0,    /* vertTotalMin */ \
    0,    /* vertTotalMax */ \
    MML_GDC_DISP_DCK_INVERT_OFF, /* DCKInvertEnable */ \
    NULL, /* capCtx */ \
    MML_GDC_DISP_HSYNC_LOW | MML_GDC_DISP_VSYNC_LOW | MML_GDC_DISP_DE_HIGH | MML_GDC_DISP_RGB_LOW }     /**< Simple redefinition */


#define MML_GDC_DISPLAY                             CYGFX_DISP                          /**< Simple redefinition */
#define MML_GDC_DISP_WINDOW                         CYGFX_WINDOW                        /**< Simple redefinition */


#define MML_GDC_DISP_CONTROLLER                     CYGFX_DISP_CONTROLLER               /**< Simple redefinition */
#define MML_GDC_DISP_CONTROLLER_0                   CYGFX_DISP_CONTROLLER_0             /**< Simple redefinition */
#define MML_GDC_DISP_CONTROLLER_1                   CYGFX_DISP_CONTROLLER_1             /**< Simple redefinition */

#define MML_GDC_DISP_MODE                           CYGFX_DISP_MODE                     /**< Simple redefinition */
#define MML_GDC_DISP_SINGLE_SCREEN                  CYGFX_DISP_MODE_SINGLE_SCREEN       /**< Simple redefinition */
#define MML_GDC_DISP_DUAL_SCREEN                    CYGFX_DISP_MODE_DUAL_SCREEN         /**< Simple redefinition */
#define MML_GDC_DISP_DUAL_VIEW                      CYGFX_DISP_MODE_DUAL_VIEW           /**< Simple redefinition */


#define MML_GDC_DISP_SYNC_MODE                      CYGFX_DISP_SYNC_MODE                /**< Simple redefinition */
#define MML_GDC_DISP_SYNC_MODE_NONE                 CYGFX_DISP_SYNC_MODE_NONE           /**< Simple redefinition */
#define MML_GDC_DISP_SYNC_MODE_MASTER               CYGFX_DISP_SYNC_MODE_MASTER         /**< Simple redefinition */
#define MML_GDC_DISP_SYNC_MODE_SLAVE                CYGFX_DISP_SYNC_MODE_SLAVE          /**< Simple redefinition */


#define MML_GDC_DISP_OUTPUT_SCREEN                  CYGFX_DISP_OUTPUT_SCREEN            /**< Simple redefinition */
#define MML_GDC_DISP_OUTPUT_SCREEN_PRIMARY          CYGFX_DISP_OUTPUT_SCREEN_PRIMARY    /**< Simple redefinition */
#define MML_GDC_DISP_OUTPUT_SCREEN_SECONDARY        CYGFX_DISP_OUTPUT_SCREEN_SECONDARY  /**< Simple redefinition */
#define MML_GDC_DISP_OUTPUT_SCREEN_BOTH             CYGFX_DISP_OUTPUT_SCREEN_BOTH       /**< Simple redefinition */


#define MML_GDC_DISP_FILTER                         CYGFX_GEN_FILTER                    /**< Simple redefinition */
#define MML_GDC_DISP_FILTER_NEAREST                 CYGFX_GEN_FILTER_NEAREST            /**< Simple redefinition */
#define MML_GDC_DISP_FILTER_BILINEAR                CYGFX_GEN_FILTER_BILINEAR           /**< Simple redefinition */


#define MML_GDC_DISP_TILE_MODE                      CYGFX_DISP_TILE_MODE                /**< Simple redefinition */
#define MML_GDC_DISP_TILE_MODE_ZERO                 CYGFX_DISP_TILE_MODE_ZERO           /**< Simple redefinition */
#define MML_GDC_DISP_TILE_MODE_CONST                CYGFX_DISP_TILE_MODE_CONST          /**< Simple redefinition */
#define MML_GDC_DISP_TILE_MODE_PAD                  CYGFX_DISP_TILE_MODE_PAD            /**< Simple redefinition */
#define MML_GDC_DISP_TILE_MODE_CLIP                 CYGFX_DISP_TILE_MODE_CLIP           /**< Simple redefinition */


#define MML_GDC_DISP_LAYER                          CYGFX_DISP_LAYER                    /**< Simple redefinition */
#define MML_GDC_DISP_LAYER_0                        CYGFX_DISP_LAYER_0                  /**< Simple redefinition */
#define MML_GDC_DISP_LAYER_1                        CYGFX_DISP_LAYER_1                  /**< Simple redefinition */
#define MML_GDC_DISP_LAYER_2                        CYGFX_DISP_LAYER_2                  /**< Simple redefinition */
#define MML_GDC_DISP_LAYER_3                        CYGFX_DISP_LAYER_3                  /**< Simple redefinition */
#define MML_GDC_DISP_LAYER_4                        CYGFX_DISP_LAYER_4                  /**< Simple redefinition */


#define MML_GDC_DISP_SUB_LAYER                      CYGFX_DISP_SUB_LAYER                /**< Simple redefinition */
#define MML_GDC_DISP_SUB_LAYER_DEFAULT              CYGFX_DISP_SUB_LAYER_DEFAULT        /**< Simple redefinition */
#define MML_GDC_DISP_SUB_LAYER_1                    CYGFX_DISP_SUB_LAYER_1              /**< Simple redefinition */
#define MML_GDC_DISP_SUB_LAYER_2                    CYGFX_DISP_SUB_LAYER_2              /**< Simple redefinition */
#define MML_GDC_DISP_SUB_LAYER_3                    CYGFX_DISP_SUB_LAYER_3              /**< Simple redefinition */
#define MML_GDC_DISP_SUB_LAYER_4                    CYGFX_DISP_SUB_LAYER_4              /**< Simple redefinition */
#define MML_GDC_DISP_SUB_LAYER_5                    CYGFX_DISP_SUB_LAYER_5              /**< Simple redefinition */
#define MML_GDC_DISP_SUB_LAYER_6                    CYGFX_DISP_SUB_LAYER_6              /**< Simple redefinition */
#define MML_GDC_DISP_SUB_LAYER_7                    CYGFX_DISP_SUB_LAYER_7              /**< Simple redefinition */
#define MML_GDC_DISP_SUB_LAYER_8                    CYGFX_DISP_SUB_LAYER_8              /**< Simple redefinition */


#define MML_GDC_DISP_DCK_INVERT_ENABLE              CYGFX_DISP_DCK_INVERT               /**< Simple redefinition */
#define MML_GDC_DISP_DCK_INVERT_OFF                 CYGFX_DISP_DCK_INVERT_OFF           /**< Simple redefinition */
#define MML_GDC_DISP_DCK_INVERT_ON                  CYGFX_DISP_DCK_INVERT_ON            /**< Simple redefinition */


#define MML_GDC_DISP_DITHER_ENABLE                  CYGFX_DISP_DITHER                   /**< Simple redefinition */
#define MML_GDC_DISP_DITHOFF                        CYGFX_DISP_DITHER_OFF               /**< Simple redefinition */
#define MML_GDC_DISP_DITHON                         CYGFX_DISP_DITHER_ON                /**< Simple redefinition */


#define MML_GDC_DISP_DITHER_MODE                    CYGFX_DISP_DITHER_MODE              /**< Simple redefinition */
#define MML_GDC_DISP_TEMPDITH                       CYGFX_DISP_DITHER_MODE_TEMP         /**< Simple redefinition */
#define MML_GDC_DISP_SPATDITH                       CYGFX_DISP_DITHER_MODE_SPAT         /**< Simple redefinition */


#define MML_GDC_DISP_DITHER_RANGE                   CYGFX_DISP_DITHER_RANGE             /**< Simple redefinition */
#define MML_GDC_DISP_DITHRS11LOW                    CYGFX_DISP_DITHER_RANGE_S11LOW      /**< Simple redefinition */


#define MML_GDC_DISP_DITHER_FORMAT                  CYGFX_DISP_DITHER_FORMAT            /**< Simple redefinition */
#define MML_GDC_DISP_DITHER108                      CYGFX_DISP_DITHER_FORMAT_108        /**< Simple redefinition */
#define MML_GDC_DISP_DITHER107                      CYGFX_DISP_DITHER_FORMAT_107        /**< Simple redefinition */
#define MML_GDC_DISP_DITHER106                      CYGFX_DISP_DITHER_FORMAT_106        /**< Simple redefinition */
#define MML_GDC_DISP_DITHER105                      CYGFX_DISP_DITHER_FORMAT_105        /**< Simple redefinition */


#define MML_GDC_DISP_CLUT_FORMAT                    CYGFX_CM_CLUT_FORMAT                /**< Simple redefinition */
#define MML_GDC_DISP_CLUT_FORMAT_33                 CYGFX_CM_CLUT_FORMAT_33             /**< Simple redefinition */


#define MML_GDC_DISP_CMATRIX_FORMAT                 CYGFX_CM_CMATRIX_FORMAT             /**< Simple redefinition */
#define MML_GDC_DISP_CMATRIX_FORMAT_4X3             CYGFX_CM_CMATRIX_FORMAT_4X3         /**< Simple redefinition */
#define MML_GDC_DISP_CMATRIX_FORMAT_5X4             CYGFX_CM_CMATRIX_FORMAT_5X4         /**< Simple redefinition */


#define MML_GDC_DISP_TCON_PROPERTIES                CYGFX_DISP_TCON_PROPERTIES_S        /**< Simple redefinition */


#define MML_GDC_DISP_WINDOW_PROPERTIES              CYGFX_DISP_WINDOW_PROPERTIES_S      /**< Simple redefinition */


#define MML_GDC_DISP_ATTR                           CYGFX_DISP_ATTR                     /**< Simple redefinition */
#define MML_GDC_DISP_ATTR_OUTPUT_CONTROLLER         CYGFX_DISP_ATTR_OUTPUT_CONTROLLER   /**< Simple redefinition */
#define MML_GDC_DISP_ATTR_X_RESOLUTION              CYGFX_DISP_ATTR_X_RESOLUTION        /**< Simple redefinition */
#define MML_GDC_DISP_ATTR_Y_RESOLUTION              CYGFX_DISP_ATTR_Y_RESOLUTION        /**< Simple redefinition */
#define MML_GDC_DISP_ATTR_BACKGROUND_COLOR          CYGFX_DISP_ATTR_BACKGROUND_COLOR    /**< Simple redefinition */
#define MML_GDC_DISP_ATTR_BUFF_ERR                  CYGFX_DISP_ATTR_BUFF_ERR            /**< Simple redefinition */
#define MML_GDC_DISP_ATTR_GAMMA                     CYGFX_DISP_ATTR_GAMMA               /**< Simple redefinition */
#define MML_GDC_DISP_ATTR_INCLUDE_WIN_COMMIT        CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT  /**< Simple redefinition */


#define MML_GDC_DISP_WIN_ATTR                       CYGFX_WIN_ATTR                      /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_LAYER_ID              CYGFX_WIN_ATTR_LAYER_ID             /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_SUB_LAYER_ID          CYGFX_WIN_ATTR_SUB_LAYER_ID         /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_TOPLEFT_X             CYGFX_WIN_ATTR_TOPLEFT_X            /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_TOPLEFT_Y             CYGFX_WIN_ATTR_TOPLEFT_Y            /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_WIDTH                 CYGFX_WIN_ATTR_WIDTH                /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_HEIGHT                CYGFX_WIN_ATTR_HEIGHT               /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_SCREEN                CYGFX_WIN_ATTR_SCREEN               /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_COLOR                 CYGFX_WIN_ATTR_COLOR                /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_DISABLE               CYGFX_WIN_ATTR_DISABLE              /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_SWAP_INTERVAL         CYGFX_WIN_ATTR_SWAP_INTERVAL        /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_MAX_BUFFER            CYGFX_WIN_ATTR_MAX_BUFFER           /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_FILTER                CYGFX_WIN_ATTR_FILTER               /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_TILE_MODE             CYGFX_WIN_ATTR_TILE_MODE            /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_FEATURE               CYGFX_WIN_ATTR_FEATURE              /**< Simple redefinition */
#define MML_GDC_DISP_WIN_ATTR_GAMMA                 CYGFX_WIN_ATTR_GAMMA                /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** Structure for backward compatibility (use for code developed for S6J3200 series) */
typedef struct
{
    MM_FLOAT pixelClock;        /**< Pixel clock in units of MHz\n  */

    MM_U32   horDisplayPeriod;  /**< Horizontal display period  */
    MM_U32   horPulseStart;     /**< Horizontal sync pulse start position: horDisplayPeriod < horPulseStart < horPulseEnd */
    MM_U32   horPulseEnd;       /**< Horizontal sync end position: horPulseStart < horPulseEnd < horTotal */
    MM_U32   horTotal;          /**< Total pixels per line. Must be between 5% and 40 % higher than horDisplayPeriod. */

    MM_U32   vertDisplayPeriod; /**< Vertical display period */
    MM_U32   vertPulseStart;    /**< Vertical sync pulse start position: vertDisplayPeriod < vertPulseStart < vertPulseEnd */
    MM_U32   vertPulseEnd;      /**< Vertical sync end position: vertPulseStart < vertPulseEnd < vertTotal */
    MM_U32   vertTotal;         /**< Total lines per frame: Must be between 2% and 20 % higher than vertDisplayPeriod (>= 5% for capture-to-display). */

    MM_U32   horTotalMin;       /**< Minimum total pixels per line: horDisplayPeriod < horTotalMin <= horTotal <= horTotalMax.
                                        Used for skew regulation in capture-to-display mode. It is ignored when capture-to-display is not enabled. */
    MM_U32   horTotalMax;       /**< Maximum total pixels per line: horDisplayPeriod < horTotalMin <= horTotal <= horTotalMax.
                                        Used for skew regulation in capture-to-display mode. It is ignored when capture-to-display is not enabled. */
    MM_U32   vertTotalMin;       /**< Minimum total lines per frame: vertDisplayPeriod < vertTotalMin <= vertTotal <= vertTotalMax.
                                        Used for skew regulation in capture-to-display mode. It is ignored when capture-to-display is not enabled. */
    MM_U32   vertTotalMax;       /**< Maximum total lines per frame: vertDisplayPeriod < vertTotalMin <= vertTotal <= vertTotalMax.
                                        Used for skew regulation in capture-to-display mode. It is ignored when capture-to-display is not enabled. */

    MML_GDC_DISP_DCK_INVERT_ENABLE    DCKInvertEnable;  /**< Display clock inversion. See the definition of MML_GDC_DISP_DCK_INVERT_ENABLE. */
    MML_GDC_CAP_CTX    capCtx;  /**< Handle returned from ::mmlGdcCapOpen. A valid handle enables the direct capture (capture-to-display) mode,
                                        with no buffer; display is synced to video; the video timing and resolution must be the same as the display.
                                        NULL disables capture-to-display. */
    MM_U32   syncPolarity;      /**<  Bit field combination of polarity control possibilities: \n
                                    ::MML_GDC_DISP_HSYNC_LOW / ::MML_GDC_DISP_HSYNC_HIGH    \n
                                    ::MML_GDC_DISP_VSYNC_LOW / ::MML_GDC_DISP_VSYNC_HIGH    \n
                                    ::MML_GDC_DISP_DE_LOW / ::MML_GDC_DISP_DE_HIGH          \n
                                    ::MML_GDC_DISP_RGB_LOW / ::MML_GDC_DISP_RGB_HIGH.       \n
                                    Default value: ::MML_GDC_DISP_HSYNC_LOW | ::MML_GDC_DISP_VSYNC_LOW | ::MML_GDC_DISP_DE_HIGH | ::MML_GDC_DISP_RGB_LOW. */
} MML_GDC_DISP_MODE_LINE;


/** Structure for backward compatibility (use for code developed for S6J3200 series) */
typedef struct
{
    MML_GDC_DISP_CONTROLLER  outputController;        /**< Specifies the display controller to use */
    MML_GDC_DISP_MODE        displayMode;             /**< Only single-screen mode is currently supported: must be set to MML_GDC_DISP_SINGLE_SCREEN. */
    MML_GDC_DISP_SYNC_MODE   syncMode;                /**< Determines the operating mode of the display for Side-by-Side synchronization */
    MM_U32                   xResolution;             /**< Horizontal resolution (640, 800, 1024, etc.)     */
    MM_U32                   yResolution;             /**< Vertical resolution (480, 600, 768, etc.)        */
    MM_U32                   refreshRate;             /**< Refresh rate in Hz (60, 75, 85, etc.)            */
    MM_U32                   fcvm;                    /**< Set to a non-zero value to have the driver use the modeLine settings specified by modeLine.  */
    MML_GDC_DISP_MODE_LINE  *modeLine;                /**< Custom display timing information  */
    MML_GDC_DISP_TCON_PROPERTIES *pDISP_TCON_PROPS;   /**< Pointer to the TCON register/value structure array. Must be NULL if no TCON is used. */
    MM_U32                   countTconProps;          /**< Number of TCON registers to be programmed. Must be zero if no TCON is used. */
} MML_GDC_DISP_PROPERTIES;



/**
    Wrapper function to open a display.\n
    For more details, see: ::CYGFX_DISP_PROPERTIES_S, ::CYGFX_CAP_CTX and ::CyGfx_DispOpenDisplay.
    \param[in] mode A pointer to an ::MML_GDC_DISP_PROPERTIES structure describing the desired resolution and display timings
    \param[out] display On success will contain a valid ::CYGFX_DISP
    \retval     CYGFX_OK on success;\n
                the related error code otherwise.
*/
#ifdef C_MODEL
    static __inline MM_ERROR mmlGdcDispOpenDisplay( MML_GDC_DISP_PROPERTIES *mode, MML_GDC_DISPLAY* display )
#else
    static inline MM_ERROR mmlGdcDispOpenDisplay( MML_GDC_DISP_PROPERTIES *mode, MML_GDC_DISPLAY* display )
#endif
{
    CYGFX_DISP_PROPERTIES_S new_mode = CYGFX_DISP_PROPERTIES_INITIALIZER;
    CYGFX_CAP_CTX capCtx;
    CYGFX_U32 param;
    static const CYGFX_DISP_TIMING_S     sTimings[] =
    {/*                     pixelClock,  Hact,  Vact,  Htot, Vtot, Hsbp, Vsbp, Hsync, Vsync, HtotMin, VtotMin, HtotMax, VtotMax, DCKInvertEnable, polEn, polHs, polVs, pixInv */
        {/*  "320x240@60" */        6.00f,  320u,  240u,  400u, 253u,  72u,  10u,   32u,    4u, 0, 0, 0, 0, CYGFX_DISP_DCK_INVERT_ON, CYGFX_GEN_POLARITY_HIGH, CYGFX_GEN_POLARITY_LOW, CYGFX_GEN_POLARITY_LOW, CYGFX_DISP_RGB_LOW},
        {/*  "480x272@60" */        9.07f,  480u,  272u,  525u, 288u,  25u,  10u,    4u,    3u, 0, 0, 0, 0, CYGFX_DISP_DCK_INVERT_ON, CYGFX_GEN_POLARITY_HIGH, CYGFX_GEN_POLARITY_LOW, CYGFX_GEN_POLARITY_LOW, CYGFX_DISP_RGB_LOW},
        {/*  "640x480@60" */       23.75f,  640u,  480u,  800u, 500u, 144u,  17u,   64u,    4u, 0, 0, 0, 0, CYGFX_DISP_DCK_INVERT_ON, CYGFX_GEN_POLARITY_HIGH, CYGFX_GEN_POLARITY_LOW, CYGFX_GEN_POLARITY_LOW, CYGFX_DISP_RGB_LOW},
        {/*  "800x480@60" */       29.50f,  800u,  480u,  992u, 500u, 168u,  17u,   72u,    7u, 0, 0, 0, 0, CYGFX_DISP_DCK_INVERT_ON, CYGFX_GEN_POLARITY_HIGH, CYGFX_GEN_POLARITY_LOW, CYGFX_GEN_POLARITY_LOW, CYGFX_DISP_RGB_LOW},
        {/*  "800x600@60" */       38.25f,  800u,  600u, 1024u, 624u, 192u,  21u,    80,    4u, 0, 0, 0, 0, CYGFX_DISP_DCK_INVERT_ON, CYGFX_GEN_POLARITY_HIGH, CYGFX_GEN_POLARITY_LOW, CYGFX_GEN_POLARITY_LOW, CYGFX_DISP_RGB_LOW},
        {/* "1024x768@60" */       63.50f, 1024u,  768u, 1328u, 798u, 256u,  27u,  104u,    4u, 0, 0, 0, 0, CYGFX_DISP_DCK_INVERT_ON, CYGFX_GEN_POLARITY_HIGH, CYGFX_GEN_POLARITY_LOW, CYGFX_GEN_POLARITY_LOW, CYGFX_DISP_RGB_LOW},
        {/* "1280x720@60" */       64.00f, 1280u,  720u, 1440u, 741u, 112u,  18u,   32u,    5u, 0, 0, 0, 0, CYGFX_DISP_DCK_INVERT_ON, CYGFX_GEN_POLARITY_HIGH, CYGFX_GEN_POLARITY_LOW, CYGFX_GEN_POLARITY_LOW, CYGFX_DISP_RGB_LOW}
    };

    new_mode.outputController = mode->outputController;
    new_mode.displayMode = mode->displayMode;
    new_mode.syncMode = mode->syncMode;
    new_mode.pTconProps = mode->pDISP_TCON_PROPS;
    new_mode.countTconProps = mode->countTconProps;

    CyGfx_ConfigGetAttribute(CYGFX_CONFIG_ATTR_BUILD_TYPE, &param);

    if(mode->fcvm != 0U)
    {
        if(mode->modeLine == NULL)
        {
            return CYGFX_ERP_ERR_DISP_INVALID_PARAMETER;
        }

        new_mode.timing.pixelClock = mode->modeLine->pixelClock;
        new_mode.timing.Hact    = mode->modeLine->horDisplayPeriod;
        new_mode.timing.Hsbp    = mode->modeLine->horTotal - mode->modeLine->horPulseStart;
        new_mode.timing.Hsync   = mode->modeLine->horPulseEnd - mode->modeLine->horPulseStart;
        new_mode.timing.Htot    = mode->modeLine->horTotal;
        new_mode.timing.Vact    = mode->modeLine->vertDisplayPeriod;
        new_mode.timing.Vsbp    = mode->modeLine->vertTotal - mode->modeLine->vertPulseStart;
        new_mode.timing.Vsync   = mode->modeLine->vertPulseEnd - mode->modeLine->vertPulseStart;
        new_mode.timing.Vtot    = mode->modeLine->vertTotal;
        new_mode.timing.HtotMax = mode->modeLine->horTotalMax;
        new_mode.timing.HtotMin = mode->modeLine->horTotalMin;
        new_mode.timing.VtotMax = mode->modeLine->vertTotalMax;
        new_mode.timing.VtotMin = mode->modeLine->vertTotalMin;
        new_mode.timing.DCKInvertEnable = mode->modeLine->DCKInvertEnable;
        new_mode.timing.polEn = ((mode->modeLine->syncPolarity & MML_GDC_DISP_DE_HIGH) == 0) ? CYGFX_GEN_POLARITY_LOW : CYGFX_GEN_POLARITY_HIGH;
        new_mode.timing.polHs = ((mode->modeLine->syncPolarity & MML_GDC_DISP_HSYNC_HIGH) == 0) ? CYGFX_GEN_POLARITY_LOW : CYGFX_GEN_POLARITY_HIGH;
        new_mode.timing.polVs = ((mode->modeLine->syncPolarity & MML_GDC_DISP_VSYNC_HIGH) == 0) ? CYGFX_GEN_POLARITY_LOW : CYGFX_GEN_POLARITY_HIGH;
        new_mode.timing.pixInv = ((mode->modeLine->syncPolarity & MML_GDC_DISP_RGB_HIGH) == 0) ? CYGFX_DISP_RGB_LOW : CYGFX_DISP_RGB_HIGH;

        capCtx = mode->modeLine->capCtx;
    }
    else
    {
        int i;
        CYGFX_FLOAT refreshR;
        const CYGFX_FLOAT epsilon = 1.0f;                 /* Tolerance for refresh rate match (1 Hz) */

        for (i=0; i< (sizeof(sTimings)/sizeof(sTimings[0])); i++)
        {
            refreshR = (sTimings[i].pixelClock * 1000000.0f) /
                ((CYGFX_FLOAT)sTimings[i].Htot * (CYGFX_FLOAT)sTimings[i].Vtot);

            /* If x-resolution, y-resolution, and pixel-clock match it means a matching mode */
            if( (sTimings[i].Hact == mode->xResolution) &&
                (sTimings[i].Vact == mode->yResolution) &&
                ((((CYGFX_FLOAT)mode->refreshRate) - epsilon) < refreshR) &&
                ((((CYGFX_FLOAT)mode->refreshRate) + epsilon) > refreshR))
            {
                new_mode.timing = sTimings[i];
                break;
            }
        }

        if( i >= (sizeof(sTimings)/sizeof(sTimings[0])))
        {

            return CYGFX_ERP_ERR_DISP_INVALID_MODE;
        }

        capCtx = NULL;
    }

    return CyGfx_DispOpenDisplay(&new_mode, display, capCtx);
}


/**
    Wrapper function to set CLUT data to a display.\n
    For more details, see: ::CyGfx_CmSetClutData.
    \param[in] display An ::MML_GDC_DISPLAY returned from a previous call to ::mmlGdcDispOpenDisplay.
    \param[in] format Number of entries in the array. Depending on the hardware,
               the CLUT hardware may not support all format types. In this case, the driver
               interpolates the missing or skips the values that are not needed.
               The current HW accepts only ::MML_GDC_DISP_CLUT_FORMAT_33.
    \param[in] pRed Pointer to the array of red values. The size of the array depends on the format.
    \param[in] pGreen Pointer to the array of green values. The size of the array depends on the format.
    \param[in] pBlue Pointer to the array of blue values. The size of the array depends on the format.

    \retval ::MML_OK on success; the related error code otherwise.
*/
static MM_ERROR mmlGdcDispCLUTData(MML_GDC_DISPLAY display,
                                   MML_GDC_DISP_CLUT_FORMAT format,
                                   const MM_S16 *pRed,
                                   const MM_S16 *pGreen,
                                   const MM_S16 *pBlue )
{
    return CyGfx_CmSetClutData( display, CYGFX_CM_CLUT_UNIT_0, format, pRed, pGreen, pBlue);
}


/**
    Wrapper function to set CLUT data to a window.\n
    For more details, see: ::CyGfx_CmSetClutData.
    \param[in] win An ::MML_GDC_DISP_WINDOW returned from a previous call to ::mmlGdcDispWinCreate
    \param[in] format Number of entries in the array. Depending on the hardware,
               the CLUT hardware may not support all format types. In this case, the driver
               interpolates the missing or skips the values that are not required.
    \param[in] pRed Pointer to the array of red values. The size of the array depends on the format.
    \param[in] pGreen Pointer to the array of green values. The size of the array depends on the format.
    \param[in] pBlue Pointer to the array of blue values. The size of the array depends on the format.

    \retval ::MML_OK on success; the related error code otherwise.
*/
static MM_ERROR mmlGdcDispWinCLUTData( MML_GDC_DISP_WINDOW win,
                                       MML_GDC_DISP_CLUT_FORMAT format,
                                       const MM_S16 *pRed,
                                       const MM_S16 *pGreen,
                                       const MM_S16 *pBlue )
{
    return CyGfx_CmSetClutData( win, CYGFX_CM_CLUT_UNIT_0, format, pRed, pGreen, pBlue);
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple redirection of "old" functions */
/** \{ */
#define mmlGdcDispCloseDisplay                      CyGfx_DispCloseDisplay      /**< Simple redefinition */
#define mmlGdcDispDitherCtrl                        CyGfx_DispDitherCtrl        /**< Simple redefinition */
#define mmlGdcDispSyncVSync                         CyGfx_DispGetVSync          /**< Simple redefinition */
#define mmlGdcDispSetAttribute                      CyGfx_DispSetAttribute      /**< Simple redefinition */
#define mmlGdcDispGetAttribute                      CyGfx_DispGetAttribute      /**< Simple redefinition */
#define mmlGdcDispSync                              CyGfx_DispGetSync           /**< Simple redefinition */
#define mmlGdcDispWaitSync                          CyGfx_DispWaitSync          /**< Simple redefinition */
#define mmlGdcDispCommit                            CyGfx_DispCommit            /**< Simple redefinition */
#define mmlGdcDispWinCreate                         CyGfx_DispWinCreate         /**< Simple redefinition */
#define mmlGdcDispWinDestroy                        CyGfx_WinDestroy            /**< Simple redefinition */
#define mmlGdcDispWinSetSurface                     CyGfx_WinSetSurface         /**< Simple redefinition */
#define mmlGdcDispWinSetCapture                     CyGfx_WinSetCapture         /**< Simple redefinition */
#define mmlGdcDispWinSetBlendMode                   CyGfx_WinSetBlendMode       /**< Simple redefinition */
#define mmlGdcDispWinColorMatrix                    CyGfx_CmSetColorMatrix      /**< Simple redefinition */
#define mmlGdcDispWinSetMatrix                      CyGfx_WinSetGeoMatrix       /**< Simple redefinition */
#define mmlGdcDispWinSetWarpBuffer                  CyGfx_WinSetWarpBuffer      /**< Simple redefinition */
#define mmlGdcDispWinSync                           CyGfx_WinGetSync            /**< Simple redefinition */
#define mmlGdcDispWinWaitSync                       CyGfx_WinWaitSync           /**< Simple redefinition */
#define mmlGdcDispWinSetAttribute                   CyGfx_WinSetAttribute       /**< Simple redefinition */
#define mmlGdcDispWinGetAttribute                   CyGfx_WinGetAttribute       /**< Simple redefinition */
#define mmlGdcDispWinCommit                         CyGfx_WinCommit             /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mml_gdc_display*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MML_GDC_DISPLAY_H */
