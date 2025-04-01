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


/*
    \file        mml_gdc_pixeng.h
*/


#ifndef MML_GDC_PIXENG_H
#define MML_GDC_PIXENG_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_bliteng.h"
#include "cygfx_cm.h"



/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_pixeng
    \code #include "mml_gdc_pixeng.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for Pixel Engine API */
/** \{ */
#define MML_GDC_PE_STORE                        CYGFX_BE_TARGET_STORE               /**< Simple redefinition */
#define MML_GDC_PE_SRC                          CYGFX_BE_TARGET_SRC                 /**< Simple redefinition */
#define MML_GDC_PE_DST                          CYGFX_BE_TARGET_DST                 /**< Simple redefinition */
#define MML_GDC_PE_MASK                         CYGFX_BE_TARGET_MASK                /**< Simple redefinition */

#define  MML_GDC_PE_ROP_BLACKNESS               CYGFX_BE_ROP_BLACKNESS              /**< Simple redefinition */
#define  MML_GDC_PE_ROP_WHITENESS               CYGFX_BE_ROP_WHITENESS              /**< Simple redefinition */
#define  MML_GDC_PE_ROP_SRCCOPY                 CYGFX_BE_ROP_SRCCOPY                /**< Simple redefinition */
#define  MML_GDC_PE_ROP_NOTSRCCOPY              CYGFX_BE_ROP_NOTSRCCOPY             /**< Simple redefinition */
#define  MML_GDC_PE_ROP_MASKCOPY                CYGFX_BE_ROP_MASKCOPY               /**< Simple redefinition */
#define  MML_GDC_PE_ROP_NOTMASK                 CYGFX_BE_ROP_NOTMASK                /**< Simple redefinition */
#define  MML_GDC_PE_ROP_MASKINVERT              CYGFX_BE_ROP_MASKINVERT             /**< Simple redefinition */
#define  MML_GDC_PE_ROP_MSKAND                  CYGFX_BE_ROP_MSKAND                 /**< Simple redefinition */
#define  MML_GDC_PE_ROP_MASKERASE               CYGFX_BE_ROP_MASKERASE              /**< Simple redefinition */
#define  MML_GDC_PE_ROP_NOTMASKERASE            CYGFX_BE_ROP_NOTMASKERASE           /**< Simple redefinition */
#define  MML_GDC_PE_ROP_MERGEMASK               CYGFX_BE_ROP_MERGEMASK              /**< Simple redefinition */
#define  MML_GDC_PE_ROP_MERGEMASKNOT            CYGFX_BE_ROP_MERGEMASKNOT           /**< Simple redefinition */

#define  MML_GDC_PE_ROP_DSTCOPY                 CYGFX_BE_ROP_DSTCOPY                /**< Simple redefinition */
#define  MML_GDC_PE_ROP_NOTDSTCOPY              CYGFX_BE_ROP_NOTDSTCOPY             /**< Simple redefinition */
#define  MML_GDC_PE_ROP_DSTPAINT                CYGFX_BE_ROP_DSTPAINT               /**< Simple redefinition */
#define  MML_GDC_PE_ROP_MASKSEL                 CYGFX_BE_ROP_MASKSEL                /**< Simple redefinition */
#define  MML_GDC_PE_ROP_DSTAND                  CYGFX_BE_ROP_DSTAND                 /**< Simple redefinition */


#define MML_GDC_PE_FILTER_NEAREST               CYGFX_GEN_FILTER_NEAREST            /**< Simple redefinition */
#define MML_GDC_PE_FILTER_BILINEAR              CYGFX_GEN_FILTER_BILINEAR           /**< Simple redefinition */
#define MML_GDC_PE_FILTER_ANISOTROPIC           CYGFX_GEN_FILTER_ANISOTROPIC        /**< Simple redefinition */

#define MML_GDC_PE_GAMMA_NEUTRAL                CYGFX_BE_GAMMA_NEUTRAL              /**< Simple redefinition */
#define MML_GDC_PE_GAMMA_REMOVE_SRC             CYGFX_BE_GAMMA_REMOVE_SRC           /**< Simple redefinition */
#define MML_GDC_PE_GAMMA_REMOVE_DST             CYGFX_BE_GAMMA_REMOVE_DST           /**< Simple redefinition */

#define MML_GDC_PE_GAMMA_REMOVE                 CYGFX_BE_GAMMA_REMOVE               /**< Simple redefinition */
#define MML_GDC_PE_GAMMA_ADD                    CYGFX_BE_GAMMA_ADD                  /**< Simple redefinition */
#define MML_GDC_PE_GAMMA_CORRECTED              CYGFX_BE_GAMMA_CORRECTED            /**< Simple redefinition */

#define MML_GDC_PE_ATTR_ZERO_TOP_LEFT           CYGFX_BE_ATTR_ZERO_TOP_LEFT         /**< Simple redefinition */
#define MML_GDC_PE_ATTR_ZERO_BOTTOM_LEFT        CYGFX_BE_ATTR_ZERO_BOTTOM_LEFT      /**< Simple redefinition */

#define MML_GDC_PE_TILE_FILL_ZERO               CYGFX_BE_TILE_FILL_ZERO             /**< Simple redefinition */
#define MML_GDC_PE_TILE_FILL_CONSTANT           CYGFX_BE_TILE_FILL_CONSTANT         /**< Simple redefinition */
#define MML_GDC_PE_TILE_PAD                     CYGFX_BE_TILE_PAD                   /**< Simple redefinition */
#define MML_GDC_PE_TILE_PAD_ZERO                CYGFX_BE_TILE_PAD_ZERO              /**< Simple redefinition */

#define MML_GDC_PE_CONTEXT_CONTAINER            CYGFX_BE_CONTEXT_OBJECT_S           /**< Simple redefinition */
#define MML_GDC_PE_CONTEXT                      CYGFX_BE_CONTEXT                    /**< Simple redefinition */

#define MML_GDC_PE_CTX_ATTR                     CYGFX_BE_CTX_ATTR                   /**< Simple redefinition */
#define MML_GDC_PE_CTX_ATTR_DITHER_COLOR        CYGFX_BE_CTX_ATTR_DITHER_COLOR      /**< Simple redefinition */
#define MML_GDC_PE_CTX_ATTR_DITHER_ALPHA        CYGFX_BE_CTX_ATTR_DITHER_ALPHA      /**< Simple redefinition */
#define MML_GDC_PE_CTX_ATTR_DITHER_OFFSET       CYGFX_BE_CTX_ATTR_DITHER_OFFSET     /**< Simple redefinition */
#define MML_GDC_PE_CTX_ATTR_FILTER              CYGFX_BE_CTX_ATTR_FILTER            /**< Simple redefinition */
#define MML_GDC_PE_CTX_ATTR_GAMMA               CYGFX_BE_CTX_ATTR_GAMMA             /**< Simple redefinition */
#define MML_GDC_PE_ATTR_ZERO_POINT              CYGFX_BE_CTX_ATTR_ZERO_POINT        /**< Simple redefinition */


#define MML_GDC_PE_SURF_ATTR                        CYGFX_BE_SURF_ATTR                      /**< Simple redefinition */
#define MML_GDC_PE_SURF_ATTR_COLORMULTI             CYGFX_BE_SURF_ATTR_COLORMULTI           /**< Simple redefinition */
#define MML_GDC_PE_SURF_ATTR_ALPHAMULTI             CYGFX_BE_SURF_ATTR_ALPHAMULTI           /**< Simple redefinition */
#define MML_GDC_PE_SURF_ATTR_TILE_MODE              CYGFX_BE_SURF_ATTR_TILE_MODE            /**< Simple redefinition */
#define MML_GDC_PE_SURF_ATTR_USE_CLIPPING           CYGFX_BE_SURF_ATTR_USE_CLIPPING         /**< Simple redefinition */
#define MML_GDC_PE_SURF_ATTR_ALPHA_COLORMULTI       CYGFX_BE_SURF_ATTR_ALPHA_COLORMULTI     /**< Simple redefinition */

#define MML_GDC_PE_SURF_ATTR_TRANSPARENT            CYGFX_BE_SURF_ATTR_TRANSPARENT          /**< Simple redefinition */
#define MML_GDC_PE_SURF_ATTR_TRANSPARENT_ALPHA      CYGFX_BE_SURF_ATTR_TRANSPARENT_ALPHA    /**< Simple redefinition */
#define MML_GDC_PE_SURF_ATTR_TRANSPARENT_COLOR      CYGFX_BE_SURF_ATTR_TRANSPARENT_COLOR    /**< Simple redefinition */


#define MML_GDC_PE_BF                               CYGFX_BE_BF                             /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_ZERO                       CYGFX_BE_BF_GL_ZERO                     /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_ONE                        CYGFX_BE_BF_GL_ONE                      /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_SRC_COLOR                  CYGFX_BE_BF_GL_SRC_COLOR                /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_ONE_MINUS_SRC_COLOR        CYGFX_BE_BF_GL_ONE_MINUS_SRC_COLOR      /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_SRC_ALPHA                  CYGFX_BE_BF_GL_SRC_ALPHA                /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_ONE_MINUS_SRC_ALPHA        CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA      /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_DST_ALPHA                  CYGFX_BE_BF_GL_DST_ALPHA                /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_ONE_MINUS_DST_ALPHA        CYGFX_BE_BF_GL_ONE_MINUS_DST_ALPHA      /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_DST_COLOR                  CYGFX_BE_BF_GL_DST_COLOR                /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_ONE_MINUS_DST_COLOR        CYGFX_BE_BF_GL_ONE_MINUS_DST_COLOR      /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_SRC_ALPHA_SATURATE         CYGFX_BE_BF_GL_SRC_ALPHA_SATURATE       /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_CONSTANT_COLOR             CYGFX_BE_BF_GL_CONSTANT_COLOR           /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_ONE_MINUS_CONSTANT_COLOR   CYGFX_BE_BF_GL_ONE_MINUS_CONSTANT_COLOR /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_CONSTANT_ALPHA             CYGFX_BE_BF_GL_CONSTANT_ALPHA           /**< Simple redefinition */
#define MML_GDC_PE_BF_GL_ONE_MINUS_CONSTANT_ALPHA   CYGFX_BE_BF_GL_ONE_MINUS_CONSTANT_ALPHA /**< Simple redefinition */


#define MML_GDC_PE_BM                               CYGFX_BE_BM                            /**< Simple redefinition */
#define MML_GDC_PE_BM_GL_FUNC_ADD                   CYGFX_BE_BM_GL_FUNC_ADD                /**< Simple redefinition */
#define MML_GDC_PE_BM_GL_MIN                        CYGFX_BE_BM_GL_MIN                     /**< Simple redefinition */
#define MML_GDC_PE_BM_GL_MAX                        CYGFX_BE_BM_GL_MAX                     /**< Simple redefinition */

#define MML_GDC_PE_BM_GL_FUNC_SUBTRACT              CYGFX_BE_BM_GL_FUNC_SUBTRACT            /**< Simple redefinition */
#define MML_GDC_PE_BM_GL_FUNC_REVERSE_SUBTRACT      CYGFX_BE_BM_GL_FUNC_REVERSE_SUBTRACT    /**< Simple redefinition */

#define MML_GDC_PE_BM_VG_BLEND_SRC                  CYGFX_BE_BM_VG_BLEND_SRC                /**< Simple redefinition */
#define MML_GDC_PE_BM_VG_BLEND_SRC_OVER             CYGFX_BE_BM_VG_BLEND_SRC_OVER           /**< Simple redefinition */
#define MML_GDC_PE_BM_VG_BLEND_DST_OVER             CYGFX_BE_BM_VG_BLEND_DST_OVER           /**< Simple redefinition */
#define MML_GDC_PE_BM_VG_BLEND_SRC_IN               CYGFX_BE_BM_VG_BLEND_SRC_IN             /**< Simple redefinition */
#define MML_GDC_PE_BM_VG_BLEND_DST_IN               CYGFX_BE_BM_VG_BLEND_DST_IN             /**< Simple redefinition */
#define MML_GDC_PE_BM_VG_BLEND_MULTIPLY             CYGFX_BE_BM_VG_BLEND_MULTIPLY           /**< Simple redefinition */
#define MML_GDC_PE_BM_VG_BLEND_SCREEN               CYGFX_BE_BM_VG_BLEND_SCREEN             /**< Simple redefinition */
#define MML_GDC_PE_BM_VG_BLEND_DARKEN               CYGFX_BE_BM_VG_BLEND_DARKEN             /**< Simple redefinition */
#define MML_GDC_PE_BM_VG_BLEND_LIGHTEN              CYGFX_BE_BM_VG_BLEND_LIGHTEN            /**< Simple redefinition */
#define MML_GDC_PE_BM_VG_BLEND_ADDITIVE             CYGFX_BE_BM_VG_BLEND_ADDITIVE           /**< Simple redefinition */


#define MML_GDC_PE_CMATRIX_FORMAT                   CYGFX_CM_CMATRIX_FORMAT                 /**< Simple redefinition */
#define MML_GDC_PE_CMATRIX_FORMAT_4X3               CYGFX_CM_CMATRIX_FORMAT_4X3             /**< Simple redefinition */
#define MML_GDC_PE_CMATRIX_FORMAT_5X4               CYGFX_CM_CMATRIX_FORMAT_5X4             /**< Simple redefinition */

#define MML_GDC_PE_GEO_MATRIX_FORMAT                CYGFX_BE_GEO_MATRIX_FORMAT              /**< Simple redefinition */
#define MML_GDC_PE_GEO_MATRIX_FORMAT_3X2            CYGFX_BE_GEO_MATRIX_FORMAT_3X2          /**< Simple redefinition */
#define MML_GDC_PE_GEO_MATRIX_FORMAT_3X3            CYGFX_BE_GEO_MATRIX_FORMAT_3X3          /**< Simple redefinition */

#define MML_GDC_PE_CLUT_FORMAT                      CYGFX_CM_CLUT_FORMAT                    /**< Simple redefinition */
#define MML_GDC_PE_CLUT_FORMAT_33                   CYGFX_CM_CLUT_FORMAT_33                 /**< Simple redefinition */
#define MML_GDC_PE_CLUT_FORMAT_256                  CYGFX_CM_CLUT_FORMAT_256                /**< Simple redefinition */

#define MML_GDC_PE_FILTER_CHANNEL                   CYGFX_CM_FILTER_CHANNEL                 /**< Simple redefinition */
#define MML_GDC_PE_FILTER_CHANNEL_R                 CYGFX_CM_FILTER_CHANNEL_R               /**< Simple redefinition */
#define MML_GDC_PE_FILTER_CHANNEL_G                 CYGFX_CM_FILTER_CHANNEL_G               /**< Simple redefinition */
#define MML_GDC_PE_FILTER_CHANNEL_B                 CYGFX_CM_FILTER_CHANNEL_B               /**< Simple redefinition */
#define MML_GDC_PE_FILTER_CHANNEL_A                 CYGFX_CM_FILTER_CHANNEL_A               /**< Simple redefinition */
#define MML_GDC_PE_FILTER_CHANNEL_RGB               CYGFX_CM_FILTER_CHANNEL_RGB             /**< Simple redefinition */
#define MML_GDC_PE_FILTER_CHANNEL_RGBA              CYGFX_CM_FILTER_CHANNEL_RGBA            /**< Simple redefinition */

#define MML_GDC_SYNC                                CYGFX_SYNC                              /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple redirection of "old" functions */
/** \{ */
#define mmlGdcPeBindSurface                         CyGfx_BeBindSurface                     /**< Simple redefinition */
#define mmlGdcPeAttribute                           CyGfx_BeSetAttribute                    /**< Simple redefinition */
#define mmlGdcPeColor(ctx, red, green, blue, alpha) CyGfx_BeSetAttribute(ctx, CYGFX_BE_CTX_ATTR_COLOR, CYGFX_SM_COLOR_TO_RGBA((red), (green), (blue), (alpha)))                                 /**< Simple redefinition */
#define mmlGdcPeSurfAttribute                       CyGfx_BeSetSurfAttribute                /**< Simple redefinition */
#define mmlGdcPeSurfColor(ctx, target, red, green, blue, alpha) CyGfx_BeSetSurfAttribute((ctx), (target), CYGFX_BE_SURF_ATTR_COLOR, CYGFX_SM_COLOR_TO_RGBA((red), (green), (blue), (alpha)))    /**< Simple redefinition */
#define mmlGdcPeBlendFunc                           CyGfx_BeBlendFunc                       /**< Simple redefinition */
#define mmlGdcPeBlendMode                           CyGfx_BeBlendMode                       /**< Simple redefinition */
#define mmlGdcPeRopOperation                        CyGfx_BeRopOperation                    /**< Simple redefinition */
#define mmlGdcPeSetMatrix                           CyGfx_BeSetGeoMatrix                    /**< Simple redefinition */
#define mmlGdcPeColorMatrix                         CyGfx_CmSetColorMatrix                  /**< Simple redefinition */
/* Requires adapted function parameters: #define mmlGdcPeFilter                              CyGfx_CmSetFilter */
#define mmlGdcPeGetDrawBox                          CyGfx_BeGetDrawBox                      /**< Simple redefinition */
#define mmlGdcPeActiveArea                          CyGfx_BeActiveArea                      /**< Simple redefinition */
#define mmlGdcPeSelectArea                          CyGfx_BeSelectArea                      /**< Simple redefinition */
#define mmlGdcPeSetWarpCoordinateBuffer             CyGfx_BeSetWarpCoordinateBuffer         /**< Simple redefinition */
#define mmlGdcPeFill                                CyGfx_BeFill                            /**< Simple redefinition */
#define mmlGdcPeBlt                                 CyGfx_BeBlt                             /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/**
    Wrapper function to wait for completing of blitting and drawing for synchronization.\n
    For more details, see: ::CYGFX_BE_CONTEXT_OBJECT_S and ::CyGfx_BeFinish.
    \retval CYGFX_OK on success; the related error code otherwise.
*/
static CYGFX_ERROR mmlGdcPeFinish(void)
{
    CYGFX_BE_CONTEXT_OBJECT_S ctx;
    CyGfx_BeResetContext(&ctx);
    return CyGfx_BeFinish(&ctx);
}


/**
    Wrapper function to force the execution of BlitEng commands in a specified time.\n
    For more details see: ::CYGFX_BE_CONTEXT_OBJECT_S and ::CyGfx_BeFlush
    \retval CYGFX_OK on success; the related error code otherwise.
*/
static MM_ERROR mmlGdcPeFlush(void)
{
    CYGFX_BE_CONTEXT_OBJECT_S ctx;
    CyGfx_BeResetContext(&ctx);
    return CyGfx_BeFlush(&ctx);
}


/**
    Wrapper function to request a sync object from the 2D command pipeline.\n
    For more details, see: ::CYGFX_BE_CONTEXT_OBJECT_S and ::CyGfx_BeGetSync.
    \param[in,out] sync Sync object that gets the parameter of the inserted sync.
    \retval             CYGFX_OK on success; the related error code otherwise.
*/
static MM_ERROR mmlGdcPeSync(MML_GDC_SYNC sync)
{
    CYGFX_BE_CONTEXT_OBJECT_S ctx;
    CyGfx_BeResetContext(&ctx);
    return CyGfx_BeGetSync(&ctx, sync);
}

/**
    Wrapper function to insert a sync wait into the 2D command stream.\n
    For more details, see: ::CYGFX_BE_CONTEXT_OBJECT_S and ::CyGfx_BeWaitSync.
    \param[in] sync Sync to wait for
    \retval         CYGFX_OK on success; the related error code otherwise.
*/
static MM_ERROR mmlGdcPeWaitSync(MML_GDC_SYNC sync)
{
    CYGFX_BE_CONTEXT_OBJECT_S ctx;
    CyGfx_BeResetContext(&ctx);
    return CyGfx_BeWaitSync(&ctx, sync);
}

/**
    Wrapper function to reset a blit/pixel engine context object.\n
    This function overwrites the default rendering mode (CYGFX_BE_RENDER_MODE_MIXED)
    with the legacy mode (CYGFX_BE_RENDER_MODE_IBO).
    For more details, see: ::CYGFX_BE_CONTEXT_OBJECT_S and ::CyGfx_BeResetContext.
    \param[in] pectx Pointer to the context object to reset
    \retval         CYGFX_OK on success; the related error code otherwise.
*/
static MM_ERROR mmlGdcPeResetContext( MML_GDC_PE_CONTEXT pectx )
{
    CYGFX_ERROR Result;
    Result = CyGfx_BeResetContext(pectx);
    if (CYGFX_OK == Result)
    {
        Result = CyGfx_BeSetAttribute(pectx, CYGFX_BE_CTX_ATTR_RENDER_MODE, CYGFX_BE_RENDER_MODE_IBO);
    }
    return Result;
}

/**
    Wrapper function to set the CLUT data.\n
    This function sets the CLUT unit to CYGFX_CM_CLUT_UNIT_0; see ::CyGfx_CmSetClutData.
    \param[in,out] pectx    Pixel Engine context (!=NULL) (Must be a pointer to a ::MML_GDC_PE_CONTEXT_CONTAINER object).
    \param[in] format       Number of entries in the array. Depending on the hardware,
                            the CLUT hardware may not support all format types. In such cases, the driver
                            interpolates the missing or skips the values that are not required.
    \param[in] pRed         Pointer to the array of red values. The size of the array depends on the format.
    \param[in] pGreen       Pointer to the array of green values. The size of the array depends on the format.
    \param[in] pBlue        Pointer to the array of blue values. The size of the array depends on the format.

    \retval ::MML_OK on success; the related error code otherwise.
*/
static MM_ERROR mmlGdcPeCLUTData(MML_GDC_PE_CONTEXT pectx,
                                 MML_GDC_PE_CLUT_FORMAT format,
                                 const MM_S16 *pRed,
                                 const MM_S16 *pGreen,
                                 const MM_S16 *pBlue )
{
    return CyGfx_CmSetClutData( pectx, CYGFX_CM_CLUT_UNIT_0, format, pRed, pGreen, pBlue);
}

/** \} */ /* end addtogroup mml_gdc_pixeng*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
}
#endif

#endif /* MML_GDC_PIXENG_H */
