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
    \file        mml_gdc_draweng.h
*/


#ifndef MML_GDC_DRAWENG_H
#define MML_GDC_DRAWENG_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_draweng.h"
#include "cygfx_cm.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mml_gdc_draweng
    \code #include "mml_gdc_draweng.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for Drawing Engine API */
/** \{ */
#define MML_GDC_DE_MAX_DRAW_WIDTH               CYGFX_DE_MAX_DRAW_WIDTH                 /**< Simple redefinition */
#define MML_GDC_DE_MAX_DRAW_HEIGHT              CYGFX_DE_MAX_DRAW_HEIGHT                /**< Simple redefinition */

#define MML_GDC_DE_CLOSE_PATH                   CYGFX_DE_INSTR_CLOSE_PATH               /**< Simple redefinition */
#define MML_GDC_DE_MOVE_TO_ABS                  CYGFX_DE_INSTR_MOVE_TO_ABS              /**< Simple redefinition */
#define MML_GDC_DE_MOVE_TO_REL                  CYGFX_DE_INSTR_MOVE_TO_REL              /**< Simple redefinition */
#define MML_GDC_DE_LINE_TO_ABS                  CYGFX_DE_INSTR_LINE_TO_ABS              /**< Simple redefinition */
#define MML_GDC_DE_LINE_TO_REL                  CYGFX_DE_INSTR_LINE_TO_REL              /**< Simple redefinition */
#define MML_GDC_DE_HLINE_TO_ABS                 CYGFX_DE_INSTR_HLINE_TO_ABS             /**< Simple redefinition */
#define MML_GDC_DE_HLINE_TO_REL                 CYGFX_DE_INSTR_HLINE_TO_REL             /**< Simple redefinition */
#define MML_GDC_DE_VLINE_TO_ABS                 CYGFX_DE_INSTR_VLINE_TO_ABS             /**< Simple redefinition */
#define MML_GDC_DE_VLINE_TO_REL                 CYGFX_DE_INSTR_VLINE_TO_REL             /**< Simple redefinition */
#define MML_GDC_DE_QUAD_TO_ABS                  CYGFX_DE_INSTR_QUAD_TO_ABS              /**< Simple redefinition */
#define MML_GDC_DE_QUAD_TO_REL                  CYGFX_DE_INSTR_QUAD_TO_REL              /**< Simple redefinition */
#define MML_GDC_DE_CUBIC_TO_ABS                 CYGFX_DE_INSTR_CUBIC_TO_ABS             /**< Simple redefinition */
#define MML_GDC_DE_CUBIC_TO_REL                 CYGFX_DE_INSTR_CUBIC_TO_REL             /**< Simple redefinition */
#define MML_GDC_DE_SQUAD_TO_ABS                 CYGFX_DE_INSTR_SQUAD_TO_ABS             /**< Simple redefinition */
#define MML_GDC_DE_SQUAD_TO_REL                 CYGFX_DE_INSTR_SQUAD_TO_REL             /**< Simple redefinition */
#define MML_GDC_DE_SCUBIC_TO_ABS                CYGFX_DE_INSTR_SCUBIC_TO_ABS            /**< Simple redefinition */
#define MML_GDC_DE_SCUBIC_TO_REL                CYGFX_DE_INSTR_SCUBIC_TO_REL            /**< Simple redefinition */


#define MML_GDC_DE_FILLRULE_EVENODD             CYGFX_DE_FILLRULE_EVENODD               /**< Simple redefinition */
#define MML_GDC_DE_FILLRULE_NONZERO             CYGFX_DE_FILLRULE_NONZERO               /**< Simple redefinition */


#define MML_GDC_DE_DATA_FORMAT                  CYGFX_DE_DATA_FORMAT                    /**< Simple redefinition */
#define MML_GDC_DE_DATA_FORMAT_S16_6            CYGFX_DE_DATA_FORMAT_S16_6              /**< Simple redefinition */
#define MML_GDC_DE_DATA_FORMAT_FLOAT            CYGFX_DE_DATA_FORMAT_FLOAT              /**< Simple redefinition */
#define MML_GDC_DE_DATA_FORMAT_S32              CYGFX_DE_DATA_FORMAT_S32                /**< Simple redefinition */
#define MML_GDC_DE_DATA_FORMAT_S16              CYGFX_DE_DATA_FORMAT_S16                /**< Simple redefinition */
#define MML_GDC_DE_DATA_FORMAT_S08              CYGFX_DE_DATA_FORMAT_S08                /**< Simple redefinition */


#define MML_GDC_DE_ATTR                         CYGFX_DE_ATTR                           /**< Simple redefinition */
#define MML_GDC_DE_ATTR_FILLRULE                CYGFX_DE_ATTR_FILLRULE                  /**< Simple redefinition */
#define MML_GDC_DE_ATTR_ALLOW_REDRAW            CYGFX_DE_ATTR_ALLOW_REDRAW              /**< Simple redefinition */
#define MML_GDC_DE_ATTR_DATA_FORMAT             CYGFX_DE_ATTR_DATA_FORMAT               /**< Simple redefinition */
#define MML_GDC_DE_ATTR_MIN_PATH_BUFFER         CYGFX_DE_ATTR_MIN_PATH_BUFFER           /**< Simple redefinition */
#define MML_GDC_DE_ATTR_CURRENT_PATH_BUFFER     CYGFX_DE_ATTR_CURRENT_PATH_BUFFER       /**< Simple redefinition */
#define MML_GDC_DE_ATTR_CURRENT_PATH_USE        CYGFX_DE_ATTR_CURRENT_PATH_USE          /**< Simple redefinition */
#define MML_GDC_DE_ATTR_SUBPIXELGRID            CYGFX_DE_ATTR_SUBPIXELGRID              /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple redirection of "old" functions */
/** \{ */
#define mmlGdcDeSetAlphaBuffer                  CyGfx_DeSetAlphaBuffer                  /**< Simple redefinition */
#define mmlGdcDeSetPathBuffer                   CyGfx_DeSetPathBuffer                   /**< Simple redefinition */
#define mmlGdcDeAppendPathData                  CyGfx_DeAppendPathData                  /**< Simple redefinition */
#define mmlGdcDeDraw                            CyGfx_DeDraw                            /**< Simple redefinition */
#define mmlGdcDeDrawPathBuffer                  CyGfx_DeDrawPathBuffer                  /**< Simple redefinition */
#define mmlGdcDeGetAttribute                    CyGfx_DeGetAttribute                    /**< Simple redefinition */
#define mmlGdcDeSetAttribute                    CyGfx_DeSetAttribute                    /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mml_gdc_draweng*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
}
#endif

#endif /* MML_GDC_DRAWENG_H */

