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
 * \file    cygfx_errors.h
 */


#ifndef CYGFX_ERRORS_H
#define CYGFX_ERRORS_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

/**
 *  \addtogroup cygfx_errors
 *  \code #include "cygfx_errors.h" \endcode
 *  \brief Error Codes of this driver
 *
 *  All Error Codes used for all modules are collected here.
 */


/** \{ */


/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/** \name Error codes for Surface Manager API*/
/** \{ */
#define CYGFX_ERP_ERR_SURF_INVALID_SURFACE             (CYGFX_ERRCODE(0x21000001)) /**< Surface object invalid */
#define CYGFX_ERP_ERR_SURF_INVALID_FORMAT              (CYGFX_ERRCODE(0x21000002)) /**< Format not supported */
#define CYGFX_ERP_ERR_SURF_INVALID_ATTRIBUTE           (CYGFX_ERRCODE(0x21000003)) /**< Attribute not supported */
#define CYGFX_ERP_ERR_SURF_INVALID_PARAMETER           (CYGFX_ERRCODE(0x21000004)) /**< Incorrect parameter */
/** \} */

/** \name Error codes for Display API */
/** \{ */
#define CYGFX_ERP_ERR_DISP_DISPLAY_ALREADY_OPEN        (CYGFX_ERRCODE(0x21001001)) /**< Display that is being opened is already open */
#define CYGFX_ERP_ERR_DISP_INVALID_PARAMETER           (CYGFX_ERRCODE(0x21001002)) /**< Invalid argument passed */
#define CYGFX_ERP_ERR_DISP_INVALID_MODE                (CYGFX_ERRCODE(0x21001003)) /**< Requested display mode not supported on the hardware */
#define CYGFX_ERP_ERR_DISP_LAYER_ALREADY_USED          (CYGFX_ERRCODE(0x21001004)) /**< Requested layer is already being used */
#define CYGFX_ERP_ERR_DISP_INVALID_WINDOW              (CYGFX_ERRCODE(0x21001005)) /**< Feature not supported by the given window */
#define CYGFX_ERP_ERR_DISP_FAILED                      (CYGFX_ERRCODE(0x21001006)) /**< Operation failed because the requested resource is not available */
#define CYGFX_ERP_ERR_DISP_INVALID_SCALING             (CYGFX_ERRCODE(0x21001007)) /**< Scale factor not supported */
#define CYGFX_ERP_ERR_DISP_INVALID_BLENDING            (CYGFX_ERRCODE(0x21001008)) /**< Blend mode not supported */
#define CYGFX_ERP_ERR_DISP_INVALID_DIMENSION           (CYGFX_ERRCODE(0x21001009)) /**< Buffer width or height not valid */
#define CYGFX_ERP_ERR_DISP_NO_CAPTURE_STREAM           (CYGFX_ERRCODE(0x2100100A)) /**< No capture stream bound to this window */
#define CYGFX_ERP_ERR_DISP_DEV_BUSY                    (CYGFX_ERRCODE(0x2100100B)) /**< Previously requested configuration not completely set up */
#define CYGFX_ERP_ERR_DISP_WINDOW_ALREADY_USED         (CYGFX_ERRCODE(0x2100100C)) /**< Requested window not available */
#define CYGFX_ERP_ERR_DISP_WRONG_CAPTURE_TIMING        (CYGFX_ERRCODE(0x2100100D)) /**< Capture stream timing does not match the display timing */
#define CYGFX_ERP_ERR_DISP_WRONG_WIN_COMMIT            (CYGFX_ERRCODE(0x2100100E)) /**< Window in open or close state. Use CyGfx_DispCommit() */
#define CYGFX_ERP_ERR_DISP_WRONG_STATE                 (CYGFX_ERRCODE(0x2100100F)) /**< Window already in open or close state. Use CyGfx_DispCommit() first. */
#define CYGFX_ERP_ERR_DISP_SHDLD_ERROR                 (CYGFX_ERRCODE(0x21001010)) /**< A shadow load not confirmed in the expected time */
#define CYGFX_ERP_ERR_DISP_CLOSED                      (CYGFX_ERRCODE(0x21001011)) /**< Function called with a display parameter that is currently closed */
#define CYGFX_ERP_ERR_DISP_WIN_CLOSED                  (CYGFX_ERRCODE(0x21001012)) /**< Function called with a window parameter that is currently closed */
#define CYGFX_ERP_ERR_DISP_WRONG_ON_THE_FLY_SETUP      (CYGFX_ERRCODE(0x21001013)) /**< The on-the-fly setup is wrong */
#define CYGFX_ERP_ERR_DISP_RESOURCE_RESERVED           (CYGFX_ERRCODE(0x21001014)) /**< The requested resource is reserved by functional safety driver */
/** \} */

/** \name Error codes for Video Capture API*/
/** \{ */
#define CYGFX_ERP_ERR_CAP_BUSY                         (CYGFX_ERRCODE(0x21002001)) /**< Capture unit busy */
#define CYGFX_ERP_ERR_CAP_NOT_OPEN                     (CYGFX_ERRCODE(0x21002002)) /**< Capture unit not open */
#define CYGFX_ERP_ERR_CAP_INVALID_PARAMETER            (CYGFX_ERRCODE(0x21002003)) /**< Incorrect arguments */
#define CYGFX_ERP_ERR_CAP_NOT_SUPPORTED                (CYGFX_ERRCODE(0x21002004)) /**< Device does not support video capture */
#define CYGFX_ERP_ERR_CAP_SCALE_ERROR                  (CYGFX_ERRCODE(0x21002005)) /**< Scale ratio out of range */
#define CYGFX_ERP_ERR_CAP_SIZE_ERROR                   (CYGFX_ERRCODE(0x21002006)) /**< Capture surfaces have inconsistent sizes */
#define CYGFX_ERP_ERR_CAP_INVALID_COUNT                (CYGFX_ERRCODE(0x21002007)) /**< Number of requested surfaces exceeds the limit */
#define CYGFX_ERP_ERR_CAP_SCALING_CHANGED              (CYGFX_ERRCODE(0x21002008)) /**< Dynamic change between upscaling and downscaling not possible. This is probably caused by a change of the window size. Stop capture temporarily by calling CyGfx_WinSetCapture(win, 0), and then start again with new window size. */
#define CYGFX_ERP_ERR_CAP_INVALID_SURFACE              (CYGFX_ERRCODE(0x21002009)) /**< Surface object invalid */
#define CYGFX_ERP_ERR_CAP_NO_BUFFER                    (CYGFX_ERRCODE(0x2100200A)) /**< No capture buffer(s) defined */
#define CYGFX_ERP_ERR_CAP_BUFFER_TOO_SMALL             (CYGFX_ERRCODE(0x2100200B)) /**< Ring buffer too small in capture-to-window mode */
#define CYGFX_ERP_ERR_CAP_ILLEGAL_CAPTURE_MODE         (CYGFX_ERRCODE(0x2100200C)) /**< Operation not allowed in the current capture mode */
#define CYGFX_ERP_ERR_CAP_DEV_BUSY                     (CYGFX_ERRCODE(0x2100200D)) /**< Previously requested configuration not completely set up */
#define CYGFX_ERP_ERR_CAP_MEASUREMENT_TIMEOUT          (CYGFX_ERRCODE(0x2100200E)) /**< Capture frame measurement timeout */
#define CYGFX_ERP_ERR_CAP_MEASUREMENT_INVALID          (CYGFX_ERRCODE(0x2100200F)) /**< Capture frame measurement invalid */
#define CYGFX_ERP_ERR_CAP_FRAME_SUPERVISION_INVALID    (CYGFX_ERRCODE(0x21002010)) /**< Capture frame supervision invalid */

/** \} */

/** \name Error codes for Palette API*/
/** \{ */
#define CYGFX_ERP_ERR_PAL_INVALID_PARAMETER            (CYGFX_ERRCODE(0x21003001)) /**< Incorrect parameter */
#define CYGFX_ERP_ERR_PAL_INVALID_FORMAT               (CYGFX_ERRCODE(0x21003002)) /**< Format not supported */
#define CYGFX_ERP_ERR_PAL_INVALID_ATTRIBUTE            (CYGFX_ERRCODE(0x21003003)) /**< Attribute not supported */
#define CYGFX_ERP_ERR_PAL_FULL                         (CYGFX_ERRCODE(0x21003004)) /**< The palette cannot by uploaded because no free contiguous space is available for the palette size. */
#define CYGFX_ERP_ERR_PAL_INVALID_DETACH               (CYGFX_ERRCODE(0x21003005)) /**< The palette is not attached in HW */
#define CYGFX_ERP_ERR_PAL_INVALID_REGION               (CYGFX_ERRCODE(0x21003006)) /**< Invalid region */
#define CYGFX_ERP_ERR_PAL_ATTR_READ_ONLY               (CYGFX_ERRCODE(0x21003007)) /**< Provided attribute is read-only */
#define CYCFX_ERP_ERR_PAL_SPACE_NOT_FREE               (CYGFX_ERRCODE(0x21003008)) /**< Palette space is not free at the provided index with provided palette size */

/** \} */

/** \name Error codes for Write-back API */
/** \{ */
#define CYGFX_ERP_ERR_WB_DEVICE_BUSY                   (CYGFX_ERRCODE(0x21004001)) /**< Write-back unit busy */
#define CYGFX_ERP_ERR_WB_INVALID_PARAMETER             (CYGFX_ERRCODE(0x21004002)) /**< Invalid parameter specified */
/** \} */

/** \name Error codes for Synchronization API */
/** \{ */
#define CYGFX_ERP_ERR_SYNC_INVALID_PARAMETER           (CYGFX_ERRCODE(0x21005001)) /**< Invalid parameter */
#define CYGFX_ERP_ERR_SYNC_TIMEOUT                     (CYGFX_ERRCODE(0x21005002)) /**< Timeout expired */
#define CYGFX_ERP_ERR_SYNC_INVALID                     (CYGFX_ERRCODE(0x21005003)) /**< Invalid sync object */
/** \} */

/** \name Error codes for Drawing Engine API */
/** \{ */
#define CYGFX_ERP_ERR_DE_INVALID_PARAMETER             (CYGFX_ERRCODE(0x21006001)) /**< Specified parameter invalid */
#define CYGFX_ERP_ERR_DE_DRAW_BUFFER_FULL              (CYGFX_ERRCODE(0x21006002)) /**< Draw buffer already full */
#define CYGFX_ERP_ERR_DE_INVALID_PATH_BUFFER           (CYGFX_ERRCODE(0x21006003)) /**< Specified path buffer invalid */
#define CYGFX_ERP_ERR_DE_INVALID_PATH_CACHE            (CYGFX_ERRCODE(0x21006004)) /**< Current path cannot be used for cached path drawing. */
#define CYGFX_ERP_ERR_DE_WRONG_PATH_SWITCH             (CYGFX_ERRCODE(0x21006005)) /**< Invalid path address switch (CyGfx_DeAppendPathData and CyGfx_DeDraw must not be interrupted by another draw instruction). */
#define CYGFX_ERP_ERR_DE_WRONG_ALPHA_BUFFER_ADDRESS    (CYGFX_ERRCODE(0x21006006)) /**< No or incorrect alpha buffer defined.  See ::CyGfx_DeSetAlphaBuffer. */
#define CYGFX_ERP_ERR_DE_WRONG_ALPHA_BUFFER_SIZE       (CYGFX_ERRCODE(0x21006007)) /**< Incorrect alpha buffer size.  See ::CyGfx_DeSetAlphaBuffer. */
#define CYGFX_ERP_ERR_DE_INVALID_ATTRIBUTE             (CYGFX_ERRCODE(0x21006008)) /**< Invalid attribute (target) specified for an argument */
#define CYGFX_ERP_ERR_DE_INVALID_PATH_ADDRESS          (CYGFX_ERRCODE(0x21006009)) /**< Path buffer not 32-bit aligned */
#define CYGFX_ERP_ERR_DE_INVALID_SURFACES_FORMAT_YUV   (CYGFX_ERRCODE(0x2100600A)) /**< YUV surfaces not supported for drawing */
#define CYGFX_ERP_ERR_DE_WRONG_TASK                    (CYGFX_ERRCODE(0x2100600B)) /**< Drawing is restricted to CYGFX_BE_TASK_MEM_PRIO_1. */
#define CYGFX_ERP_ERR_DE_INVALID_PALETTE_OPERATION     (CYGFX_ERRCODE(0x2100600C)) /**< Indexed color surfaces are not supported for drawing */
#define CYGFX_ERP_ERR_DE_INVALID_RENDER_MODE_LBO       (CYGFX_ERRCODE(0x2100600D)) /**< The render mode LBO cannot be used. */
/** \} */

/** \name Error codes for Config API */
/** \{ */
#define CYGFX_ERP_ERR_CONFIG_INVALID_PARAMETER         (CYGFX_ERRCODE(0x21007001)) /**< Incorrect parameter */
/** \} */

/** \name Error codes for Driver Initialization API */
/** \{ */
#define CYGFX_ERP_ERR_SYS_DEVICE_ALREADY_INITIALIZED   (CYGFX_ERRCODE(0x21008001)) /**< Hardware device already initialized */
#define CYGFX_ERP_ERR_SYS_DEVICE_NOT_YET_INITIALIZED   (CYGFX_ERRCODE(0x21008002)) /**< Hardware device not yet initialized */
#define CYGFX_ERP_ERR_SYS_DEVICE_INVALID_PARAMETER     (CYGFX_ERRCODE(0x21008003)) /**< Invalid parameter */
#define CYGFX_ERP_ERR_SYS_DEVICE_WRONG_ID              (CYGFX_ERRCODE(0x21008004)) /**< Graphics driver not valid for the hardware */
/** \} */

/** \name Error codes for Window API */
/** \{ */
#define CYGFX_ERP_ERR_WIN_INVALID_PARAMETER            (CYGFX_ERRCODE(0x21009001)) /**< Invalid argument passed */
#define CYGFX_ERP_ERR_WIN_LAYER_ALREADY_USED           (CYGFX_ERRCODE(0x21009002)) /**< Requested layer is already being used */
#define CYGFX_ERP_ERR_WIN_INVALID_WINDOW               (CYGFX_ERRCODE(0x21009003)) /**< Feature not supported by the given window */
#define CYGFX_ERP_ERR_WIN_INVALID_SCALING              (CYGFX_ERRCODE(0x21009004)) /**< Scale factor not supported */
#define CYGFX_ERP_ERR_WIN_INVALID_BLENDING             (CYGFX_ERRCODE(0x21009005)) /**< Blend mode not supported */
#define CYGFX_ERP_ERR_WIN_INVALID_DIMENSION            (CYGFX_ERRCODE(0x21009006)) /**< Buffer width or height not valid */
#define CYGFX_ERP_ERR_WIN_NO_CAPTURE_STREAM            (CYGFX_ERRCODE(0x21009007)) /**< No capture stream bound to this window */
#define CYGFX_ERP_ERR_WIN_WINDOW_ALREADY_USED          (CYGFX_ERRCODE(0x21009008)) /**< Requested window not available */
#define CYGFX_ERP_ERR_WIN_WRONG_WIN_COMMIT             (CYGFX_ERRCODE(0x21009009)) /**< Window in open or close state. Use CyGfx_DispCommit() */
#define CYGFX_ERP_ERR_WIN_WRONG_STATE                  (CYGFX_ERRCODE(0x2100900A)) /**< Window already in open or close state. Use CyGfx_DispCommit() first. */
#define CYGFX_ERP_ERR_WIN_CLOSED                       (CYGFX_ERRCODE(0x2100900B)) /**< Function called with a display parameter that is currently closed */
#define CYGFX_ERP_ERR_WIN_WRONG_ON_THE_FLY_SETUP       (CYGFX_ERRCODE(0x2100900C)) /**< The on-the-fly setup is wrong */
/** \} */

/** \name Error codes for the Blit Engine API */
/** \{ */
#define CYGFX_ERP_ERR_BE_INVALID_CONTEXT               (CYGFX_ERRCODE(0x2100A001)) /**< Context object invalid */
#define CYGFX_ERP_ERR_BE_INVALID_TARGET                (CYGFX_ERRCODE(0x2100A002)) /**< Invalid target */
#define CYGFX_ERP_ERR_BE_INVALID_SURFACE_OBJECT        (CYGFX_ERRCODE(0x2100A003)) /**< Surface object invalid */
#define CYGFX_ERP_ERR_BE_INVALID_ADDRESS               (CYGFX_ERRCODE(0x2100A004)) /**< Incorrect address (for example, not aligned) */
#define CYGFX_ERP_ERR_BE_INVALID_MATRIX                (CYGFX_ERRCODE(0x2100A005)) /**< Matrix operation cannot be performed */
#define CYGFX_ERP_ERR_BE_INVALID_DIMENSION             (CYGFX_ERRCODE(0x2100A006)) /**< Dimension out of range */
#define CYGFX_ERP_ERR_BE_INVALID_STRIDE                (CYGFX_ERRCODE(0x2100A007)) /**< Invalid value for Stride */
#define CYGFX_ERP_ERR_BE_INVALID_BITS_PER_PIXEL        (CYGFX_ERRCODE(0x2100A008)) /**< Invalid value for BitsPerPixel */
#define CYGFX_ERP_ERR_BE_INVALID_COMPRESSION           (CYGFX_ERRCODE(0x2100A009)) /**< Compression of a source buffer cannot be applied */
#define CYGFX_ERP_ERR_BE_INVALID_ROP_MODE              (CYGFX_ERRCODE(0x2100A00A)) /**< Not all surfaces defined for the specified ROP mode */
#define CYGFX_ERP_ERR_BE_INVALID_NO_ACTIVE_AREA        (CYGFX_ERRCODE(0x2100A00B)) /**< Blit operation started but no active area source defined */
#define CYGFX_ERP_ERR_BE_INVALID_ATTRIBUTE             (CYGFX_ERRCODE(0x2100A00C)) /**< Invalid attribute (target) specified for an argument */
#define CYGFX_ERP_ERR_BE_INVALID_PARAMETER             (CYGFX_ERRCODE(0x2100A00D)) /**< Invalid parameter specified for an argument */
#define CYGFX_ERP_ERR_BE_INVALID_OPERATION             (CYGFX_ERRCODE(0x2100A00E)) /**< Requested operation failed */
#define CYGFX_ERP_ERR_BE_INVALID_MASK_PARAM            (CYGFX_ERRCODE(0x2100A00F)) /**< Required parameter not supported for mask */
#define CYGFX_ERP_ERR_BE_INVALID_CLUT_OPERATION        (CYGFX_ERRCODE(0x2100A010)) /**< Lookup table cannot be used in this mode */
#define CYGFX_ERP_ERR_BE_INVALID_WARP_BUFFER           (CYGFX_ERRCODE(0x2100A011)) /**< Warp coordinate buffer does not fit the specification. */
#define CYGFX_ERP_ERR_BE_INVALID_WARP_BLEND            (CYGFX_ERRCODE(0x2100A012)) /**< MASK or DST buffer must not be used if warping is active. */
#define CYGFX_ERP_ERR_BE_INVALID_WARP_SRC_PROP         (CYGFX_ERRCODE(0x2100A013)) /**< SRC surface properties cannot be applied for warping. */
#define CYGFX_ERP_ERR_BE_INVALID_YUV_PARAM             (CYGFX_ERRCODE(0x2100A014)) /**< YUV surface properties invalid */
#define CYGFX_ERP_ERR_BE_INVALID_COMPRESSION_OPERATION (CYGFX_ERRCODE(0x2100A015)) /**< Requested operation with a compressed buffer not supported */
#define CYGFX_ERP_ERR_BE_INVALID_MODE                  (CYGFX_ERRCODE(0x2100A016)) /**< The requested operation requires line and frame buffer mode */
#define CYGFX_ERP_ERR_BE_COPSES_PER_TASK_EXCEEDED      (CYGFX_ERRCODE(0x2100A017)) /**< Maximum number of COPSes exceeded. You can change it using CyGfx_BeSetTaskCopses(). */
#define CYGFX_ERP_ERR_BE_COPSES_TOTAL_EXCEEDED         (CYGFX_ERRCODE(0x2100A018)) /**< Total number of COPSes exceeded. The number of available COPSes is defined as CYGFX_BE_COPS_NUMBER. */
#define CYGFX_ERP_ERR_BE_INVALID_ON_THE_FLY_STORE      (CYGFX_ERRCODE(0x2100A019)) /**< No or a wrong surface configured for the window on-the-fly blit target */
#define CYGFX_ERP_ERR_BE_INVALID_OBJECT_PARTITIONING   (CYGFX_ERRCODE(0x2100A01A)) /**< Invalid surface with object partitioning */
#define CYGFX_ERP_ERR_BE_INVALID_ON_THE_FLY_SURF       (CYGFX_ERRCODE(0x2100A01B)) /**< No or a wrong surface configured for the on-the-fly window */
#define CYGFX_ERP_ERR_BE_PALETTE                       (CYGFX_ERRCODE(0x2100A01C)) /**< A surface with palette is blitted but the palette is not loaded */
/** \} */

/** \name Error codes for HW internal components */
/** \{ */
#define CYGFX_ERP_ERR_HW_GPSCALER_INVALID_PARAMETER    (CYGFX_ERRCODE(0x2100B001)) /**< A specified parameter is invalid. */
#define CYGFX_ERP_ERR_HW_COLORMATRIX_INVALID_PARAMETER (CYGFX_ERRCODE(0x2100B002)) /**< A specified parameter is invalid. */
#define CYGFX_ERP_ERR_HW_GFXCACHE_GFXCACHE1_OVERFLOW   (CYGFX_ERRCODE(0x2100B003)) /**< Overflow occurred in command cache. */
#define CYGFX_ERP_ERR_HW_GFXCACHE_GFXCACHE4_OVERFLOW   (CYGFX_ERRCODE(0x2100B004)) /**< Overflow occurred in pixel cache. */
/** \} */

/** \name Error codes for Error Reporting API */
/** \{ */
#define CYGFX_ERP_ERR_ERP_INVALID_PARAMETER            (CYGFX_ERRCODE(0x2100C001)) /**< Invalid value in argument */
/** \} */

/** \name Error codes for Palette API*/
/** \{ */
#define CYGFX_ERP_ERR_CM_INVALID_PARAMETER             (CYGFX_ERRCODE(0x2100D001)) /**< Wrong CmdSeq task */
/** \} */

/** \name Error codes for Histogram Unit API */
/** \{ */
#define CYGFX_ERP_ERR_HIST_INVALID_PARAMETER           (CYGFX_ERRCODE(0x2100E001)) /**< Incorrect arguments */
#define CYGFX_ERP_ERR_HIST_NODATA_ERROR                (CYGFX_ERRCODE(0x2100E002)) /**< (Yet) no data available */
/** \} */


/** \name Error codes for internal function calls */
/** \{ */
/* gccgfx_card */
#define CYGFX_ERP_ERR_CARD_DEV_BUSY                    (CYGFX_ERRCODE(0x21010001)) /**< Access to a device denied (e.g., because a shadow load request is pending) */

/* math_internal */
#define CYGFX_ERP_ERR_MATH_INVALID_FLOAT               (CYGFX_ERRCODE(0x21011001)) /**< Float value outside processable range */
#define CYGFX_ERP_ERR_MATH_INVALID_MATRIX              (CYGFX_ERRCODE(0x21011002)) /**< Matrix inversion failed */

/* gccgfx_res */
#define CYGFX_ERP_ERR_RES_EXCEEDED_MAXIMUM_USAGE       (CYGFX_ERRCODE(0x21012001)) /**< Resource cannot be acquired because it already has the maximum usage count. */

/** cmd_seq */
#define CYGFX_ERP_ERR_CMD_SEQ_INVALID_ADDRESS          (CYGFX_ERRCODE(0x21013001)) /**< Buffer address unaligned */
#define CYGFX_ERP_ERR_CMD_SEQ_INVALID_BUFFER_SIZE      (CYGFX_ERRCODE(0x21013002)) /**< Buffer size not aligned */
#define CYGFX_ERP_ERR_CMD_SEQ_FIFO_UNINITIALIZED       (CYGFX_ERRCODE(0x21013003)) /**< Command buffer not initialized */
#define CYGFX_ERP_ERR_CMD_SEQ_COMMAND_QUEUE_FULL       (CYGFX_ERRCODE(0x21013004)) /**< Command buffer full */
#define CYGFX_ERP_ERR_CMD_SEQ_WRONG_TASK               (CYGFX_ERRCODE(0x21013005)) /**< Wrong CmdSeq task */
#define CYGFX_ERP_ERR_CMD_SEQ_RE_ASSIGN_BUFFER         (CYGFX_ERRCODE(0x21013006)) /**< CmdSeq task buffer is already assigned. */

/* gccgfx_kinterrupt */
#define CYGFX_KERP_ERR_INTERRUPT_INVALID_PARAMETER     (CYGFX_ERRCODE(0x11000001)) /**< Invalid argument */

/* gccgfx_khisto.c */
#define CYGFX_KERP_ERR_HISTO_NOT_READY                 (CYGFX_ERRCODE(0x11001001)) /**< Histogram unit is not ready for reading results. */
/** \} */

#define CYGFX_ERP_ERR_FEATURE_NOT_SUPPORTED            (CYGFX_ERRCODE(0x2f000000)) /**< This feature is not supported for this device. */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/* N/A */


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* CYGFX_ERRORS_H */
