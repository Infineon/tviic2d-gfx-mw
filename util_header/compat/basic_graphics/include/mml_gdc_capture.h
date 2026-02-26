/*******************************************************************************
* (c) 2019-2026, Infineon Technologies AG, or an affiliate of Infineon         *
* Technologies AG. All rights reserved.                                        *
* This software, associated documentation and materials ("Software") is        *
* owned by Infineon Technologies AG or one of its affiliates ("Infineon")      *
* and is protected by and subject to worldwide patent protection, worldwide    *
* copyright laws, and international treaty provisions. Therefore, you may use  *
* this Software only as provided in the license agreement accompanying the     *
* software package from which you obtained this Software. If no license        *
* agreement applies, then any use, reproduction, modification, translation, or *
* compilation of this Software is prohibited without the express written       *
* permission of Infineon.                                                      *
*                                                                              *
* Disclaimer: UNLESS OTHERWISE EXPRESSLY AGREED WITH INFINEON, THIS SOFTWARE   *
* IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,         *
* INCLUDING, BUT NOT LIMITED TO, ALL WARRANTIES OF NON-INFRINGEMENT OF         *
* THIRD-PARTY RIGHTS AND IMPLIED WARRANTIES SUCH AS WARRANTIES OF FITNESS FOR A*
* SPECIFIC USE/PURPOSE OR MERCHANTABILITY.                                     *
* Infineon reserves the right to make changes to the Software without notice.  *
* You are responsible for properly designing, programming, and testing the     *
* functionality and safety of your intended application of the Software, as    *
* well as complying with any legal requirements related to its use. Infineon   *
* does not guarantee that the Software will be free from intrusion, data theft *
* or loss, or other breaches ("Security Breaches"), and Infineon shall have    *
* no liability arising out of any Security Breaches. Unless otherwise          *
* explicitly approved by Infineon, the Software may not be used in any         *
* application where a failure of the Product or any consequences of the use    *
* thereof can reasonably be expected to result in personal injury.             *
*******************************************************************************/


/**
    \file        mml_gdc_capture.h
*/


#ifndef MML_GDC_CAPTURE_H
#define MML_GDC_CAPTURE_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_capture.h"
#include "cygfx_cm.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_capture
    \code #include "mml_gdc_capture.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for Capture API */
/** \{ */
#define MM_CAP_MIN_WIDTH                        CYGFX_CAP_MIN_WIDTH                         /**< Simple redefinition */
#define MM_CAP_MAX_WIDTH                        CYGFX_CAP_MAX_WIDTH                         /**< Simple redefinition */
#define MM_CAP_MIN_HEIGHT                       CYGFX_CAP_MIN_HEIGHT                        /**< Simple redefinition */
#define MM_CAP_MAX_HEIGHT                       CYGFX_CAP_MAX_HEIGHT                        /**< Simple redefinition */


#define MML_GDC_CAP_PROPERTIES_INITIALIZER      { 720u, 576u, 864u, 625u, 27.0f, 0u, 0u, 0u, MML_GDC_CAP_VIDEO_FORMAT_RGB, MML_GDC_CAP_DIRECT_CAPTURE_OFF, MML_GDC_CAP_MODE_PROGRESSIVE }   /**< Simple redefinition */
#define MM_GDC_CAP_YUVCONVERSIONMODE_ITU601     CYGFX_CAP_YUVCONVERSIONMODE_ITU601          /**< Simple redefinition */
#define MM_GDC_CAP_YUVCONVERSIONMODE_ITU601_FR  CYGFX_CAP_YUVCONVERSIONMODE_ITU601_FR       /**< Simple redefinition */
#define MM_GDC_CAP_YUVCONVERSIONMODE_ITU709     CYGFX_CAP_YUVCONVERSIONMODE_ITU709          /**< Simple redefinition */


#define MML_GDC_CAPTURE_TYPE                    GCCGFX_CAP_CTX_TYPE                         /**< Simple redefinition */
#define MML_GDC_CAP_CTX                         CYGFX_CAP_CTX                               /**< Simple redefinition */


#define MML_GDC_CAP_ATTR                        CYGFX_CAP_ATTR                              /**< Simple redefinition */
#define MML_GDC_CAP_ATTR_COLORBITS              CYGFX_CAP_ATTR_COLORBITS                    /**< Simple redefinition */
#define MML_GDC_CAP_ATTR_COLORSHIFT             CYGFX_CAP_ATTR_COLORSHIFT                   /**< Simple redefinition */
#define MML_GDC_CAP_ATTR_YUVCONVERSIONMODE      CYGFX_CAP_ATTR_YUVCONVERSIONMODE            /**< Simple redefinition */


#define MML_GDC_CAP_UNIT_ID                     CYGFX_CAP_UNIT                              /**< Simple redefinition */
#define MML_GDC_CAP_UNIT_0                      CYGFX_CAP_UNIT_0                            /**< Simple redefinition */


#define MML_GDC_CAP_CMATRIX_FORMAT              CYGFX_CM_CMATRIX_FORMAT                     /**< Simple redefinition */
#define MML_GDC_CAP_CMATRIX_FORMAT_4X3          CYGFX_CM_CMATRIX_FORMAT_4X3                 /**< Simple redefinition */


#define MML_GDC_CAP_HISTO_COL_IN                CYGFX_CM_HISTO_CONV                         /**< Simple redefinition */
#define MML_GDC_CAP_HISTO_NO_CONV               CYGFX_CM_HISTO_CONV_NO                      /**< Simple redefinition */
#define MML_GDC_CAP_HISTO_YUV2RGB_BT601         CYGFX_CM_HISTO_CONV_YUV2RGB_BT601           /**< Simple redefinition */
#define MML_GDC_CAP_HISTO_YUV2RGB_BT709         CYGFX_CM_HISTO_CONV_YUV2RGB_BT709           /**< Simple redefinition */


#define MML_GDC_CAP_HISTO_COL_MEASURE           CYGFX_CM_HISTO_MEASURE                      /**< Simple redefinition */
#define MML_GDC_CAP_HISTO_MEASURE_NO_CONV       CYGFX_CM_HISTO_MEASURE_NO_CONV              /**< Simple redefinition */
#define MML_GDC_CAP_HISTO_MEASURE_LUMA          CYGFX_CM_HISTO_MEASURE_LUMA                 /**< Simple redefinition */
#define MML_GDC_CAP_HISTO_MEASURE_LUMINANCE     CYGFX_CM_HISTO_MEASURE_LUMINANCE            /**< Simple redefinition */


#define MML_GDC_CAP_CLUT_FORMAT                 CYGFX_CM_CLUT_FORMAT                        /**< Simple redefinition */
#define MML_GDC_CAP_CLUT_FORMAT_33              CYGFX_CM_CLUT_FORMAT_33                     /**< Simple redefinition */


#define MML_GDC_CAP_VIDEO_FORMAT                CYGFX_CAP_VIDEO_FORMAT                      /**< Simple redefinition */
/* Choose the correct YUV422 format between the offered formats in TVII
   (CYGFX_CAP_VIDEO_FORMAT_PARALLEL_YUV422, CYGFX_CAP_VIDEO_FORMAT_ITU10_YUV422 and
     CYGFX_CAP_VIDEO_FORMAT_ITU8_YUV422) based on the system requirements. */
#define MML_GDC_CAP_VIDEO_FORMAT_RGB            CYGFX_CAP_VIDEO_FORMAT_PARALLEL_RGB         /**< Simple redefinition */
#define MML_GDC_CAP_VIDEO_FORMAT_YUV444         CYGFX_CAP_VIDEO_FORMAT_PARALLEL_YUV444      /**< Simple redefinition */


#define MML_GDC_CAP_MODE                        CYGFX_CAP_MODE                              /**< Simple redefinition */
#define MML_GDC_CAP_MODE_PROGRESSIVE            CYGFX_CAP_MODE_PROGRESSIVE                  /**< Simple redefinition */
#define MML_GDC_CAP_MODE_INTERLACED             CYGFX_CAP_MODE_INTERLACED                   /**< Simple redefinition */


#define MML_GDC_CAP_DIRECT_CAPTURE_ENABLE       CYGFX_CAP_DIRECT_CAPTURE                    /**< Simple redefinition */
#define MML_GDC_CAP_DIRECT_CAPTURE_OFF          CYGFX_CAP_DIRECT_CAPTURE_OFF                /**< Simple redefinition */
#define MML_GDC_CAP_DIRECT_CAPTURE_ON           CYGFX_CAP_DIRECT_CAPTURE_ON                 /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/**
    Structure for backward compatibility (use for code developed for S6J3200 series)
*/
typedef struct
{
    MM_U16 active_width;                    /**< Active width of the video frame; must match the actual video dimension; 160 .. 1024 */
    MM_U16 active_height;                   /**< Active height of the video frame; must match the actual video dimension; 160 .. 1024 */
    MM_U16 total_width;                     /**< Total width of the video frame; must match the actual video dimension; active_width + 5 .. 40 % */
    MM_U16 total_height;                    /**< Total height of the video frame; must match the actual video dimension; active_height + 2 .. 20 % */
    MM_FLOAT pix_clk;                       /**< Pixel clock in units of MHz */
    MM_U08 polEn;                           /**< Polarity of the enable signal; 0 = active LOW, 1 = active HIGH */
    MM_U08 polHs;                           /**< Polarity of horizontal sync signal; 0 = active LOW, 1 = active HIGH */
    MM_U08 polVs;                           /**< Polarity of vertical sync signal; 0 = active LOW, 1 = active HIGH */
    MM_U08 format;                          /**< Input format: one of MML_GDC_CAP_VIDEO_FORMAT */
    MML_GDC_CAP_DIRECT_CAPTURE_ENABLE directCapEnable; /**< Enable direct capture-to-display mode; no buffer; display is synced to video;
                                                        video timing and resolution must be the same as the display */
    MML_GDC_CAP_MODE video_mode;            /**< 0: Video signal is progressive; 1: Video signal is interlaced */
} MML_GDC_CAP_PROPERTIES;



/**
    Wrapper function to open a capture unit and return a handle for it.\n
    For more details, see: ::CYGFX_CAP_PROPERTIES_S and ::CyGfx_CapOpen.
    \param[in] unit Identifier of the capture unit to open (must be CYGFX_CAP_UNIT_0)
    \param[in] properties Structure describing the desired resolution, timing
               parameters, and more
    \param[out] cap Capture handle on success

    \retval  ::CYGFX_OK Successfully opened the capture unit
    \retval  ::CYGFX_ERP_ERR_CAP_NOT_SUPPORTED Device does not support video capture.
    \retval  ::CYGFX_ERP_ERR_CAP_BUSY Capture unit already in use
    \retval  ::CYGFX_ERP_ERR_CAP_INVALID_PARAMETER Invalid parameter
*/
#ifdef C_MODEL
    static __inline CYGFX_ERROR mmlGdcCapOpen( MML_GDC_CAP_UNIT_ID unit, MML_GDC_CAP_PROPERTIES *properties, MML_GDC_CAP_CTX* cap)
#else
    static inline CYGFX_ERROR mmlGdcCapOpen( MML_GDC_CAP_UNIT_ID unit, MML_GDC_CAP_PROPERTIES *properties, MML_GDC_CAP_CTX* cap)
#endif
{
    CYGFX_CAP_PROPERTIES_S new_props = CYGFX_CAP_PROPERTIES_INITIALIZER;

    new_props.Hact = properties->active_width;
    new_props.Vact = properties->active_height;
    new_props.Htot = properties->total_width;
    new_props.Vtot = properties->total_height;
    new_props.pixelClock = properties->pix_clk;
    new_props.format = properties->format;
    new_props.directCapEnable = properties->directCapEnable;
    new_props.video_mode = properties->video_mode;
    new_props.polEn = properties->polEn;
    new_props.polHs = properties->polHs;
    new_props.polVs = properties->polVs;

    return CyGfx_CapOpen(unit, &new_props, cap);
}

/**
    Wrapper function to set the CLUT data to a capture.\n
    For more details, see: ::CyGfx_CmSetClutData.
    \param[in] cap Handle returned from ::mmlGdcCapOpen
    \param[in] eFormat Number of entries in the array. Depending on the
               hardware, the CLUT hardware may not support all format types. In this
               case, the driver interpolates the missing values or skips the values that are not required.
               Current HW accepts only ::MML_GDC_CAP_CLUT_FORMAT_33.
    \param[in] pComponent0 Pointer to an array of \e eFormat 10-bit values, which in the case of
               RGB pixels means the red value; in the case of YUV pixels means the Y value.
    \param[in] pComponent1 Pointer to an array of \e eFormat 10-bit values, which in the case of
               RGB pixels means the green value; in the case of YUV pixels means the U value.
    \param[in] pComponent2 Pointer to an array of \e eFormat 10-bit values, which in the case of
               RGB pixels means the blue value; in the case of YUV pixels means the V value.

    \retval ::MML_OK on success; the related error code otherwise.
*/
static MM_ERROR mmlGdcCapCLUTData( MML_GDC_CAP_CTX cap,
                                   MML_GDC_CAP_CLUT_FORMAT eFormat,
                                   const MM_S16 *pComponent0,
                                   const MM_S16 *pComponent1,
                                   const MM_S16 *pComponent2 )
{
    return CyGfx_CmSetClutData( cap, CYGFX_CM_CLUT_UNIT_0, eFormat, pComponent0, pComponent1, pComponent2);
}

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple redirection of "old" functions */
/** \{ */
#define mmlGdcCapClose                          CyGfx_CapClose                      /**< Simple redefinition */
#define mmlGdcCapSetAttribute                   CyGfx_CapSetAttribute               /**< Simple redefinition */
#define mmlGdcCapGetAttribute                   CyGfx_CapGetAttribute               /**< Simple redefinition */
#define mmlGdcCapSetCropWindow                  CyGfx_CapSetCropWindow              /**< Simple redefinition */
#define mmlGdcCapSetScaling                     CyGfx_CmSetScaling                  /**< Simple redefinition */
#define mmlGdcCapColorMatrix                    CyGfx_CmSetColorMatrix              /**< Simple redefinition */
#define mmlGdcCapAssignSurfaceArray             CyGfx_CapAssignSurfaceArray         /**< Simple redefinition */
#define mmlGdcCapAssignCapToWinBuffer           CyGfx_CapAssignCapToWinBuffer       /**< Simple redefinition */
#define mmlGdcCapGetSurface                     CyGfx_CapGetSurface                 /**< Simple redefinition */
#define mmlGdcCapHistoClip                      CyGfx_CmHistoClip                   /**< Simple redefinition */
#define mmlGdcCapHistoColorFormat               CyGfx_CmHistoColorFormat            /**< Simple redefinition */
#define mmlGdcCapHistoMode                      CyGfx_CmHistoMode                   /**< Simple redefinition */
#define mmlGdcCapHistoReadValues                CyGfx_CmHistoReadValues             /**< Simple redefinition */
#define mmlGdcCapSyncVSync                      CyGfx_CapGetVSync                   /**< Simple redefinition */
#define mmlGdcCapSync                           CyGfx_CapGetSync                    /**< Simple redefinition */
#define mmlGdcCapCommit                         CyGfx_CapCommit                     /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mml_gdc_capture*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MML_GDC_CAPTURE_H */
