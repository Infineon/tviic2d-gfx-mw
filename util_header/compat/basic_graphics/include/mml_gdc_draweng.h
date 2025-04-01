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

