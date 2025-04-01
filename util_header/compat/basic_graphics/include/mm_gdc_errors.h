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
    \file        mm_gdc_errors.h
*/


#ifndef MM_GDC_ERRORS_H
#define MM_GDC_ERRORS_H

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#include "cygfx_errors.h"


/** \addtogroup compat */
/** \{ */

/**
    \addtogroup mm_gdc_errors
    \code #include "mm_gdc_errors.h" \endcode
    \brief Use include path: 05_util/compat/basic_graphics/include
*/
/** \{ */

/** \name Placeholder for legacy error codes that are not mapped to new error codes. */
/** \{ */
#define MML_ERR_GDC_NOT_MAPPED                       0xF0000000                                             /**< Simple redefinition */
/** \} */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/** \name Simple new definitions for Error Codes */
/** \{ */
#define MML_ERR_GDC_CAP_BUSY                         CYGFX_ERP_ERR_CAP_BUSY                                 /**< Simple redefinition */
#define MML_ERR_GDC_CAP_NOT_OPEN                     CYGFX_ERP_ERR_CAP_NOT_OPEN                             /**< Simple redefinition */
#define MML_ERR_GDC_CAP_ARG_ERROR                    CYGFX_ERP_ERR_CAP_INVALID_PARAMETER                    /**< Simple redefinition */
#define MML_ERR_GDC_CAP_NOT_SUPPORTED                CYGFX_ERP_ERR_CAP_NOT_SUPPORTED                        /**< Simple redefinition */
#define MML_ERR_GDC_CAP_SCALE_ERROR                  CYGFX_ERP_ERR_CAP_SCALE_ERROR                          /**< Simple redefinition */
#define MML_ERR_GDC_CAP_SIZE_ERROR                   CYGFX_ERP_ERR_CAP_SIZE_ERROR                           /**< Simple redefinition */
#define MML_ERR_GDC_CAP_INVALID_COUNT                CYGFX_ERP_ERR_CAP_INVALID_COUNT                        /**< Simple redefinition */
#define MML_ERR_GDC_CAP_SCALING_CHANGED              CYGFX_ERP_ERR_CAP_SCALING_CHANGED                      /**< Simple redefinition */

#define MML_ERR_GDC_CAP_INVALID_SURFACE              CYGFX_ERP_ERR_CAP_INVALID_SURFACE                      /**< Simple redefinition */
#define MML_ERR_GDC_CAP_NO_BUFFER                    CYGFX_ERP_ERR_CAP_NO_BUFFER                            /**< Simple redefinition */
#define MML_ERR_GDC_CAP_BUFFER_TOO_SMALL             CYGFX_ERP_ERR_CAP_BUFFER_TOO_SMALL                     /**< Simple redefinition */
#define MML_ERR_GDC_CAP_ILLEGAL_CAPTURE_MODE         CYGFX_ERP_ERR_CAP_ILLEGAL_CAPTURE_MODE                 /**< Simple redefinition */
#define MML_ERR_GDC_CAP_DEV_BUSY                     CYGFX_ERP_ERR_CAP_DEV_BUSY                             /**< Simple redefinition */
#define MML_ERR_GDC_CAP_INVALID_PARAMETER            CYGFX_ERP_ERR_CAP_INVALID_PARAMETER                    /**< Simple redefinition */

#define MML_ERR_GDC_CONFIG_INVALID_PARAMETER         CYGFX_ERP_ERR_CONFIG_INVALID_PARAMETER                 /**< Simple redefinition */
#define MML_ERR_GDC_CONFIG_INTERNAL_ERROR            MML_ERR_GDC_NOT_MAPPED                                 /**< Simple redefinition */

#define MML_ERR_GDC_DISP_DEVICE_NOT_FOUND            MML_ERR_GDC_NOT_MAPPED                                 /**< Simple redefinition */
#define MML_ERR_GDC_DISP_DISPLAY_ALREADY_OPEN        CYGFX_ERP_ERR_DISP_DISPLAY_ALREADY_OPEN                /**< Simple redefinition */
#define MML_ERR_GDC_DISP_INVALID_ARG                 CYGFX_ERP_ERR_DISP_INVALID_PARAMETER                   /**< Simple redefinition */
#define MML_ERR_GDC_DISP_UNSUPPORTED_MODE            CYGFX_ERP_ERR_DISP_INVALID_MODE                        /**< Simple redefinition */
#define MML_ERR_GDC_DISP_LAYER_ALREADY_USED          CYGFX_ERP_ERR_DISP_LAYER_ALREADY_USED                  /**< Simple redefinition */
#define MML_ERR_GDC_DISP_WRONG_WINDOW                CYGFX_ERP_ERR_DISP_INVALID_WINDOW                      /**< Simple redefinition */
#define MML_ERR_GDC_DISP_INVALID_SCALING             CYGFX_ERP_ERR_DISP_INVALID_SCALING                     /**< Simple redefinition */
#define MML_ERR_GDC_DISP_INVALID_BLENDING            CYGFX_ERP_ERR_DISP_INVALID_BLENDING                    /**< Simple redefinition */
#define MML_ERR_GDC_DISP_INVALID_DIMENSION           CYGFX_ERP_ERR_DISP_INVALID_DIMENSION                   /**< Simple redefinition */
#define MML_ERR_GDC_DISP_NO_CAPTURE_STREAM           CYGFX_ERP_ERR_DISP_NO_CAPTURE_STREAM                   /**< Simple redefinition */
#define MML_ERR_GDC_DISP_DEV_BUSY                    CYGFX_ERP_ERR_DISP_DEV_BUSY                            /**< Simple redefinition */
#define MML_ERR_GDC_DISP_WINDOW_ALREADY_USED         CYGFX_ERP_ERR_DISP_WINDOW_ALREADY_USED                 /**< Simple redefinition */
#define MML_ERR_GDC_DISP_WRONG_CAPTURE_TIMING        CYGFX_ERP_ERR_DISP_WRONG_CAPTURE_TIMING                /**< Simple redefinition */
#define MML_ERR_GDC_DISP_WRONG_WIN_COMMIT            CYGFX_ERP_ERR_DISP_WRONG_WIN_COMMIT                    /**< Simple redefinition */
#define MML_ERR_GDC_DISP_WRONG_STATE                 CYGFX_ERP_ERR_DISP_WRONG_STATE                         /**< Simple redefinition */
#define MML_ERR_GDC_DISP_SHDLD_ERROR                 CYGFX_ERP_ERR_DISP_SHDLD_ERROR                         /**< Simple redefinition */
#define MML_ERR_GDC_DISP_CLOSED                      CYGFX_ERP_ERR_DISP_CLOSED                              /**< Simple redefinition */
#define MML_ERR_GDC_DISP_WIN_CLOSED                  CYGFX_ERP_ERR_DISP_WIN_CLOSED                          /**< Simple redefinition */

#define MML_ERR_GDC_DE_INVALID_PARAMETER             CYGFX_ERP_ERR_DE_INVALID_PARAMETER                     /**< Simple redefinition */
#define MML_ERR_GDC_DE_DRAW_BUFFER_FULL              CYGFX_ERP_ERR_DE_DRAW_BUFFER_FULL                      /**< Simple redefinition */
#define MML_ERR_GDC_DE_INVALID_PATH_BUFFER           CYGFX_ERP_ERR_DE_INVALID_PATH_BUFFER                   /**< Simple redefinition */
#define MML_ERR_GDC_DE_INVALID_PATH_CACHE            CYGFX_ERP_ERR_DE_INVALID_PATH_CACHE                    /**< Simple redefinition */
#define MML_ERR_GDC_DE_WRONG_PATH_SWITCH             CYGFX_ERP_ERR_DE_WRONG_PATH_SWITCH                     /**< Simple redefinition */


#define MML_ERR_GDC_DE_WRONG_ALPHA_BUFFER_ADDRESS    CYGFX_ERP_ERR_DE_WRONG_ALPHA_BUFFER_ADDRESS            /**< Simple redefinition */
#define MML_ERR_GDC_DE_WRONG_ALPHA_BUFFER_SIZE       CYGFX_ERP_ERR_DE_WRONG_ALPHA_BUFFER_SIZE               /**< Simple redefinition */
#define MML_ERR_GDC_DE_INVALID_ATTRIBUTE             CYGFX_ERP_ERR_DE_INVALID_ATTRIBUTE                     /**< Simple redefinition */
#define MML_ERR_GDC_DE_INVALID_PATH_ADDRESS          CYGFX_ERP_ERR_DE_INVALID_PATH_ADDRESS                  /**< Simple redefinition */
#define MML_ERR_GDC_DE_SURFACES_FORMAT_YUV           CYGFX_ERP_ERR_DE_INVALID_SURFACES_FORMAT_YUV           /**< Simple redefinition */

#define MML_ERR_ERP_INVALID_PARAMETER                CYGFX_ERP_ERR_ERP_INVALID_PARAMETER                    /**< Simple redefinition */

#define MML_ERR_GDC_PE_INVALID_CONTEXT               CYGFX_ERP_ERR_BE_INVALID_CONTEXT                       /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_TARGET                CYGFX_ERP_ERR_BE_INVALID_TARGET                        /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_SURFACE_OBJECT        CYGFX_ERP_ERR_BE_INVALID_SURFACE_OBJECT                /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_ADDRESS               CYGFX_ERP_ERR_BE_INVALID_ADDRESS                       /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_MATRIX                CYGFX_ERP_ERR_BE_INVALID_MATRIX                        /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_DIMENSION             CYGFX_ERP_ERR_BE_INVALID_DIMENSION                     /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_STRIDE                CYGFX_ERP_ERR_BE_INVALID_STRIDE                        /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_BITS_PER_PIXEL        CYGFX_ERP_ERR_BE_INVALID_BITS_PER_PIXEL                /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_COMPRESSION           CYGFX_ERP_ERR_BE_INVALID_COMPRESSION                   /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_ROP_MODE              CYGFX_ERP_ERR_BE_INVALID_ROP_MODE                      /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_NO_ACTIVE_AREA        CYGFX_ERP_ERR_BE_INVALID_NO_ACTIVE_AREA                /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_ATTRIBUTE             CYGFX_ERP_ERR_BE_INVALID_ATTRIBUTE                     /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_PARAMETER             CYGFX_ERP_ERR_BE_INVALID_PARAMETER                     /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_OPERATION             CYGFX_ERP_ERR_BE_INVALID_OPERATION                     /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_MASK_PARAM            CYGFX_ERP_ERR_BE_INVALID_MASK_PARAM                    /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_CLUT_OPERATION        CYGFX_ERP_ERR_BE_INVALID_CLUT_OPERATION                /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_WARP_BUFFER           CYGFX_ERP_ERR_BE_INVALID_WARP_BUFFER                   /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_WARP_BLEND            CYGFX_ERP_ERR_BE_INVALID_WARP_BLEND                    /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_WARP_SRC_PROP         CYGFX_ERP_ERR_BE_INVALID_WARP_SRC_PROP                 /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_YUV_PARAM             CYGFX_ERP_ERR_BE_INVALID_YUV_PARAM                     /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_COMPRESSION_OPERATION CYGFX_ERP_ERR_BE_INVALID_COMPRESSION_OPERATION         /**< Simple redefinition */
#define MML_ERR_GDC_PE_INVALID_FETCH_ID              MML_ERR_GDC_NOT_MAPPED                                 /**< Simple redefinition */


#define MML_ERR_GDC_SURF_OUT_OF_SPACE                MML_ERR_GDC_NOT_MAPPED                                 /**< Simple redefinition */
#define MML_ERR_GDC_SURF_INVALID_SURFACE             CYGFX_ERP_ERR_SURF_INVALID_SURFACE                     /**< Simple redefinition */
#define MML_ERR_GDC_SURF_INVALID_FORMAT              CYGFX_ERP_ERR_SURF_INVALID_FORMAT                      /**< Simple redefinition */
#define MML_ERR_GDC_SURF_INVALID_ATTRIBUTE           CYGFX_ERP_ERR_SURF_INVALID_ATTRIBUTE                   /**< Simple redefinition */
#define MML_ERR_GDC_SURF_INVALID_PARAMETER           CYGFX_ERP_ERR_SURF_INVALID_PARAMETER                   /**< Simple redefinition */

#define MML_ERR_GDC_SYNC_INVALID_PARAMETER           CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER                   /**< Simple redefinition */
#define MML_ERR_GDC_SYNC_OUT_OF_MEMORY               MML_ERR_GDC_NOT_MAPPED                                 /**< Simple redefinition */
#define MML_ERR_GDC_SYNC_TIMEOUT                     CYGFX_ERP_ERR_SYNC_TIMEOUT                             /**< Simple redefinition */
#define MML_ERR_GDC_SYNC_INVALID                     CYGFX_ERP_ERR_SYNC_INVALID                             /**< Simple redefinition */

#define MML_ERR_GDC_SYS_DEVICE_ALREADY_INITIALIZED   CYGFX_ERP_ERR_SYS_DEVICE_ALREADY_INITIALIZED           /**< Simple redefinition */
#define MML_ERR_GDC_SYS_DEVICE_NOT_YET_INITIALIZED   CYGFX_ERP_ERR_SYS_DEVICE_NOT_YET_INITIALIZED           /**< Simple redefinition */
#define MML_ERR_GDC_SYS_DEVICE_INVALID_PARAMETER     CYGFX_ERP_ERR_SYS_DEVICE_INVALID_PARAMETER             /**< Simple redefinition */
#define MML_ERR_GDC_SYS_DEVICE_WRONG_ID              CYGFX_ERP_ERR_SYS_DEVICE_WRONG_ID                      /**< Simple redefinition */

#define MML_ERR_GDC_WB_DEVICE_BUSY                   CYGFX_ERP_ERR_WB_DEVICE_BUSY                           /**< Simple redefinition */
#define MML_ERR_GDC_WB_INVALID_PARAMETER             CYGFX_ERP_ERR_WB_INVALID_PARAMETER                     /**< Simple redefinition */

#define MML_ERR_GDC_HIST_ARG_ERROR                   CYGFX_ERP_ERR_HIST_INVALID_PARAMETER                   /**< Simple redefinition */
#define MML_ERR_GDC_HIST_NODATA_ERROR                CYGFX_ERP_ERR_HIST_NODATA_ERROR                        /**< Simple redefinition */
#define MML_ERR_GDC_CARD_DEV_BUSY                    CYGFX_ERP_ERR_CARD_DEV_BUSY                            /**< Simple redefinition */

#define MML_ERR_GDC_IRIS_CMD_SEQ_INVALID_ADDRESS     CYGFX_ERP_ERR_CMD_SEQ_INVALID_ADDRESS                  /**< Simple redefinition */
#define MML_ERR_GDC_IRIS_CMD_SEQ_INVALID_BUFFER_SIZE CYGFX_ERP_ERR_CMD_SEQ_INVALID_BUFFER_SIZE              /**< Simple redefinition */
#define MML_ERR_GDC_IRIS_CMD_SEQ_FIFO_UNINITIALIZED  CYGFX_ERP_ERR_CMD_SEQ_FIFO_UNINITIALIZED               /**< Simple redefinition */
#define MML_ERR_GDC_IRIS_CMD_SEQ_COMMAND_QUEUE_FULL  CYGFX_ERP_ERR_CMD_SEQ_COMMAND_QUEUE_FULL               /**< Simple redefinition */

#define MML_ERR_GDC_INT_OUT_OF_RANGE                 CYGFX_KERP_ERR_INTERRUPT_INVALID_PARAMETER             /**< Simple redefinition */

#define MML_ERR_GDC_IRIS_MATH_INVALID_FLOAT          CYGFX_ERP_ERR_MATH_INVALID_FLOAT                       /**< Simple redefinition */
#define MML_ERR_GDC_IRIS_MATH_INVALID_MATRIX         CYGFX_ERP_ERR_MATH_INVALID_MATRIX                      /**< Simple redefinition */

#define MML_ERR_RES_EXCEEDED_MAXIMUM_USAGE           CYGFX_ERP_ERR_RES_EXCEEDED_MAXIMUM_USAGE               /**< Simple redefinition */

#define MMD_ERR_GDC_SYNC_INVALID_PARAMETER           MML_ERR_GDC_NOT_MAPPED                                 /**< Simple redefinition */
#define MMD_ERR_GDC_SYNC_MAX_CALLBACK                MML_ERR_GDC_NOT_MAPPEDs                                /**< Simple redefinition */

#define MMD_ERR_GDC_HISTO_NOT_READY                  CYGFX_KERP_ERR_HISTO_NOT_READY                         /**< Simple redefinition */
/** \} */
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


/** \} */ /* end addtogroup mm_gdc_errors*/
/** \} */ /* end addtogroup compat */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MM_GDC_ERRORS_H */

