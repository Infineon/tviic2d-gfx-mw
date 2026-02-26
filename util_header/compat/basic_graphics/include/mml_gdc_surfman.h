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
    \file        mml_gdc_surfman.h
*/


#ifndef MML_GDC_SURFMAN_H
#define MML_GDC_SURFMAN_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_palette.h"
#include "cygfx_surfman.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_surfman
    \code #include "mml_gdc_surfman.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for Surface Manager API */
/** \{ */
#define MML_GDC_SURFACE_MAX_WIDTH                       CYGFX_SM_MAX_DIMENSION          /**< Simple redefinition */
#define MML_GDC_SURFACE_MAX_HEIGHT                      CYGFX_SM_MAX_DIMENSION          /**< Simple redefinition */

#define MML_GDC_SURFACE_CONTAINER                       CYGFX_SURFACE_OBJECT_S          /**< Simple redefinition */
#define MML_GDC_SURFACE                                 CYGFX_SURFACE                   /**< Simple redefinition */

#define MML_GDC_SURF_FORMAT                             CYGFX_SM_FORMAT                 /**< Simple redefinition */


#define MML_GDC_SURF_FORMAT_R8G8B8A8                    CYGFX_SM_FORMAT_R8G8B8A8        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_A8B8G8R8                    CYGFX_SM_FORMAT_A8B8G8R8        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_A8R8G8B8                    CYGFX_SM_FORMAT_A8R8G8B8        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_B8G8R8A8                    CYGFX_SM_FORMAT_B8G8R8A8        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_R8G8B8X8                    CYGFX_SM_FORMAT_R8G8B8X8        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_X8B8G8R8                    CYGFX_SM_FORMAT_X8B8G8R8        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_X8R8G8B8                    CYGFX_SM_FORMAT_X8R8G8B8        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_R8G8B8                      CYGFX_SM_FORMAT_R8G8B8          /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_B8G8R8                      CYGFX_SM_FORMAT_B8G8R8          /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_R6G6B6                      CYGFX_SM_FORMAT_R6G6B6          /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_R4G4B4A4                    CYGFX_SM_FORMAT_R4G4B4A4        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_A4R4G4B4                    CYGFX_SM_FORMAT_A4R4G4B4        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_R5G5B5A1                    CYGFX_SM_FORMAT_R5G5B5A1        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_A1R5G5B5                    CYGFX_SM_FORMAT_A1R5G5B5        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_A1B5G5R5                    CYGFX_SM_FORMAT_A1B5G5R5        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_B5G5R5A1                    CYGFX_SM_FORMAT_B5G5R5A1        /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_R5G6B5                      CYGFX_SM_FORMAT_R5G6B5          /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_A8RGB8                      CYGFX_SM_FORMAT_A8RGB8          /**< Simple redefinition */

#define MML_GDC_SURF_FORMAT_RGB8                        CYGFX_SM_FORMAT_RGB8            /**< Simple redefinition */

#define MML_GDC_SURF_FORMAT_A8                          CYGFX_SM_FORMAT_A8              /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_A4RGB4                      CYGFX_SM_FORMAT_A4RGB4          /**< Simple redefinition */

#define MML_GDC_SURF_FORMAT_A4                          CYGFX_SM_FORMAT_A4              /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_A2                          CYGFX_SM_FORMAT_A2              /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_A1                          CYGFX_SM_FORMAT_A1              /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_RGB1                        CYGFX_SM_FORMAT_RGB1            /**< Simple redefinition */
#define MML_GDC_SURF_FORMAT_YVYU422                     CYGFX_SM_FORMAT_YVYU422         /**< Simple redefinition */

#define MML_GDC_SURF_FORMAT_VYUY422                     CYGFX_SM_FORMAT_VYUY422         /**< Simple redefinition */

#define MML_GDC_SURF_COMP                               CYGFX_SM_COMP                   /**< Simple redefinition */
#define MML_GDC_SURF_COMP_NON                           CYGFX_SM_COMP_NONE              /**< Simple redefinition */
#define MML_GDC_SURF_COMP_RLC                           CYGFX_SM_COMP_RLC               /**< Simple redefinition */
#define MML_GDC_SURF_COMP_RLA                           CYGFX_SM_COMP_RLA               /**< Simple redefinition */
#define MML_GDC_SURF_COMP_RLAD                          CYGFX_SM_COMP_RLAD              /**< Simple redefinition */
#define MML_GDC_SURF_COMP_RLAD_UNIFORM                  CYGFX_SM_COMP_RLAD_UNIFORM      /**< Simple redefinition */

#define MML_GDC_SURF_COLOR_FORMAT                       CYGFX_SM_COLOR_FORMAT           /**< Simple redefinition */
#define MML_GDC_SURF_COLOR_FORMAT_RGBA                  CYGFX_SM_COLOR_FORMAT_RGBA      /**< Simple redefinition */
#define MML_GDC_SURF_COLOR_FORMAT_YUV422                CYGFX_SM_COLOR_FORMAT_YUV422    /**< Simple redefinition */

#define MML_GDC_SURF_CLF                                CYGFX_PALETTE_FORMAT            /**< Simple redefinition */
#define MML_GDC_SURF_CLF_R8G8B8                         CYGFX_PALETTE_FORMAT_R8G8B8     /**< Simple redefinition */
#define MML_GDC_SURF_CLF_B8G8R8                         CYGFX_PALETTE_FORMAT_B8G8R8     /**< Simple redefinition */
#define MML_GDC_SURF_CLF_R5G5B5                         CYGFX_PALETTE_FORMAT_R5G5B5     /**< Simple redefinition */
#define MML_GDC_SURF_CLF_A1R5G5B5                       CYGFX_PALETTE_FORMAT_A1R5G5B5   /**< Simple redefinition */
#define MML_GDC_SURF_CLF_A4R4G4B4                       CYGFX_PALETTE_FORMAT_A4R4G4B4   /**< Simple redefinition */

#define MML_GDC_SURF_COLOR_SPACE                        CYGFX_SM_COLOR_SPACE                            /**< Simple redefinition */
#define MML_GDC_SURF_COLOR_SPACE_RGB                    CYGFX_SM_COLOR_SPACE_RGB                        /**< Simple redefinition */
#define MML_GDC_SURF_COLOR_SPACE_YUV_BT601_SWING_STUDIO CYGFX_SM_COLOR_SPACE_YUV_BT601_SWING_STUDIO     /**< Simple redefinition */
#define MML_GDC_SURF_COLOR_SPACE_YUV_BT601_SWING_FULL   CYGFX_SM_COLOR_SPACE_YUV_BT601_SWING_FULL       /**< Simple redefinition */
#define MML_GDC_SURF_COLOR_SPACE_YUV_BT709_SWING_STUDIO CYGFX_SM_COLOR_SPACE_YUV_BT709_SWING_STUDIO     /**< Simple redefinition */

#define MML_GDC_SURF_ATTR                               CYGFX_SM_ATTR                       /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_BASE_ADDRESS                  CYGFX_SM_ATTR_VIRT_ADDRESS          /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_PHYS_ADDRESS                  CYGFX_SM_ATTR_PHYS_ADDRESS          /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_WIDTH                         CYGFX_SM_ATTR_WIDTH                 /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_HEIGHT                        CYGFX_SM_ATTR_HEIGHT                /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_STRIDE                        CYGFX_SM_ATTR_STRIDE                /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_BITPERPIXEL                   CYGFX_SM_ATTR_BITPERPIXEL           /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_COLORBITS                     CYGFX_SM_ATTR_COLORBITS             /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_COLORSHIFT                    CYGFX_SM_ATTR_COLORSHIFT            /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_COMPRESSION_FORMAT            CYGFX_SM_ATTR_COMPRESSION_FORMAT    /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_RLAD_MAXCOLORBITS             CYGFX_SM_ATTR_RLAD_MAXCOLORBITS     /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_COLOR_FORMAT                  CYGFX_SM_ATTR_COLOR_FORMAT          /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_SIZEINBYTES                   CYGFX_SM_ATTR_SIZEINBYTES           /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_SURF_FORMAT                   CYGFX_SM_ATTR_SURF_FORMAT           /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_COLOR_SPACE                   CYGFX_SM_ATTR_COLOR_SPACE           /**< Simple redefinition */
#define MML_GDC_SURF_ATTR_USERDEFINED                   CYGFX_SM_ATTR_USERDEFINED           /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple redirection of "old" functions */
/** \{ */
#define mmlGdcSmResetSurfaceObject                      CyGfx_SmResetSurfaceObject          /**< Simple redefinition */
#define mmlGdcSmAssignBuffer                            CyGfx_SmAssignBuffer                /**< Simple redefinition */
#define mmlGdcSmSetAttribute                            CyGfx_SmSetAttribute                /**< Simple redefinition */
#define mmlGdcSmGetAttribute                            CyGfx_SmGetAttribute                /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mml_gdc_surfman*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MML_GDC_SURFMAN_H */

