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
 * \file    gccgfx_be.h
 */


#ifndef GCCGFX_BE_H
#define GCCGFX_BE_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/


#ifdef __cplusplus
extern "C"
{
#endif


/**
* \addtogroup cygfx_bliteng_internal
* \brief      BlitEngine internal interface implementation
*             The Internal BlitEngine interface provides BlitEngine related initialization
*             and utility functions to other modules inside the Graphics Library.
*             This function layer will be visible to the driver
*             only and not be part of the exported APIs.
*/
/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_BE_DITHER_COLOR           0x01u       /**< Color dither enabled */
#define GCCGFX_BE_DITHER_ALPHA           0x02u       /**< Alpha dither enabled */
#define GCCGFX_BE_DITHER_OFFSET_SHIFT    4u          /**< Dither offset shift (4 bits) is stored starting at bit 4 */
/* We reduce complexity:
   Only Decode and Index (CLUT) are special features require to
   configure the Decode fetch as SRC. All other cases use the
   FetchPers as SRC.
 */
#define GCCGFX_BE_USE_CLUT               0x00000010U /**< include CLUT component */
#define GCCGFX_BE_USE_FILTER             0x00000020U /**< filter is used. */
#define GCCGFX_BE_USE_MATRIX             0x00000040U /**< Color Matrix is used */
#define GCCGFX_BE_USE_PRE_SCALER         0x00000080U /**< Scaler must be in the path */
#define GCCGFX_BE_USE_COPS_ID            0x00000100U /**< The current surface is compressed and the bliteng needs a COPS id. */
#define GCCGFX_BE_USE_COMPRESSION        0x00000200U /**< One surface (including store) is compressed/needs compression. */
#define GCCGFX_BE_USE_ROP_SEC            0x00001000U /**< ROP operation accesses MASK surface */
#define GCCGFX_BE_USE_ROP_TER            0x00002000U /**< ROP operation accesses DST surface */
#define GCCGFX_BE_USE_ROP                0x00004000U /**< Any ROP operation except CYGFX_BE_ROP_SRCCOPY for all color components */
#define GCCGFX_BE_USE_BLEND              0x00010000U /**< We have a dst surface */
#define GCCGFX_BE_USE_BLIT_CORRECTED     0x00020000U /**< Requires neutral border setup */
#define GCCGFX_BE_USE_FAST_FILL          0x00040000U /**< Fast can operate in fast fill mode */
#define GCCGFX_BE_USE_LINE_FILL          0x00080000U /**< Process fill in LBO */
#define GCCGFX_BE_USE_ALPHA_STORE        0x00100000U /**< Store the result in the alpha mask memory in LBO */
#define GCCGFX_BE_USE_ALPHA_MASK         0x00200000U /**< Read the alpha mask memory in LBO and use it as MASK */
#define GCCGFX_BE_USE_ALPHA_DST          0x00400000U /**< Read the alpha mask memory in LBO and use it as DSK */
#define GCCGFX_BE_NEED_LINE_MODE         0x01000000U /**< this operation needs the line mode */
#define GCCGFX_BE_NEED_FRAME_MODE        0x02000000U /**< Size requires frame mode */
#define GCCGFX_BE_NEED_FORCE_RESTART_LBO 0x04000000U /**< this operation needs a restart of LBO because some properties changed. */
#define GCCGFX_BE_USE_BLIT_COMPPACK      0x00000001U /**< Used for component packing (e.g. UV or source alpha buffer). */
#define GCCGFX_BE_USE_BLIT_ALPHAMASK     0x00000002U /**< Used for RGB and alpha pre-multiply stage (mask alpha buffer). */
#define GCCGFX_BE_USE_BLIT_WARP          0x00000004U /**< Used for arbitrary warping (coordinate buffer). */
#define GCCGFX_BE_FRAME_MODE             (GCCGFX_BE_NEED_FRAME_MODE   | \
                                          GCCGFX_BE_USE_BLIT_COMPPACK | \
                                          GCCGFX_BE_USE_BLIT_WARP     | \
                                          GCCGFX_BE_USE_FILTER        | \
                                          GCCGFX_BE_USE_CLUT          | \
                                          GCCGFX_BE_USE_PRE_SCALER    | \
                                          GCCGFX_BE_USE_ROP_SEC       | \
                                          GCCGFX_BE_USE_ROP_TER       | \
                                          GCCGFX_BE_USE_ROP) /**< Collects the following define into one 32bit value - for status check:
    GCCGFX_BE_NEED_FRAME_MODE
    GCCGFX_BE_USE_BLIT_COMPPACK
    GCCGFX_BE_USE_BLIT_WARP
    GCCGFX_BE_USE_FILTER
    GCCGFX_BE_USE_CLUT
    GCCGFX_BE_USE_PRE_SCALER
    GCCGFX_BE_USE_ROP_SEC
    GCCGFX_BE_USE_ROP_TER
    GCCGFX_BE_USE_ROP_SRC */
#define GCCGFX_BE_INVALID_JUMP_ADDRESS   0xFFFFFFFFu         /**< Default value for GCCGFX_BE_TASK_PARAM_S::JumpAddrDisplayLoop, meaning "no jump". */

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
/**
    The GCCGFX_BE_TASK_PARAM_S structure saves all information for a cmdseq task
**/
typedef struct
{
    GCCGFX_SURFACE_S* pLastStoreSurface;   /**< Pointer to lastly used store surface. Used to detect change between operations. */
    CYGFX_U32         LastStoreProp;       /**< Property change counter of lastly used store surface. Used to detect change between operations. */
    CYGFX_U32         store_dither;        /**< Dither mode of the task. Used to determine supported rendering modes. */
    CYGFX_U32         gamma_mode;          /**< Gamma mode of the task. Used to determine supported rendering modes. */
    CYGFX_U32         StartCopsId;         /**< ID of the first COPS associated with the task. */
    CYGFX_U32         CopsId;              /**< Index, starting at 0, of the current COPS within the range of COPSes associated with the task. */
    CYGFX_U32         MaxCops;             /**< Number of COPSes associated with the task. */
    CYGFX_U32         StartLoop;           /**< Start position of the current line rendering loop. */
    CYGFX_U32         PrevStartLoop;       /**< Start position of the previous line rendering loop. */
    CYGFX_U32         JumpAddrDisplayLoop; /**< Position of the jump to the start of the display loop. */
    CYGFX_U08         SPR_id;              /**< Register used to store LineCnt. */
    CYGFX_U08         BufLines;            /**< Binary logarithm of the number of lines in the line buffer. Range [0..14]. Saved when the OTF window is opened, used when it is closed. */
    CYGFX_U08         paddingByte0;        /**< padding byte 0 */
    CYGFX_U08         paddingByte1;        /**< padding byte 1 */
} GCCGFX_BE_TASK_PARAM_S;

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/
CYGFX_EXTERN GCCGFX_BE_TASK_PARAM_S cygfx_Be_TaskParam[GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS]; /**< Array of task ID structures. The size of the array is the sum of maximum on-the-fly tasks possible to be defined and the maximum number of blit engine tasks possible to be defined. For now, the size of the array is 4+3 = 7. */
CYGFX_EXTERN volatile CYGFX_U32 cygfx_Be_OTFmonitor;                                           /**< Variable to monitor OTF window tasks */ 

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Initialize the task parameter structure for the BlitEngine operations.

    \retval None
**/
CYGFX_EXTERN void GccGfx_BeInit(void);

/**
    Load default parameters to the context.

    \param [out] ctx  Pointer to the context to reset.

    \retval None
**/
CYGFX_EXTERN void GccGfx_BeResetContext( GCCGFX_BE_CTX_S* ctx);

/**
    Program a blit operation that transports the alpha map generated by the draweng
    to the target surface.

    \param [in,out] cardHandle  The handle that must be used for the write
                                operations.
    \param [in] ctx  Pointer to the context with properties.
    \param [in] xOffs  Horizontal pixel offset
    \param [in] yOffs  Vertical pixel offset
    \param [in] use_mask  TRUE if the SRC surface contains bitmap data and
                          therefore properties like matrix must be used.

    \retval ::CYGFX_OK On success. Otherwise the related error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BePostDrawBlit( GCCGFX_CARD_HANDLE cardHandle,
                                                GCCGFX_BE_CTX_S*   ctx,
                                                CYGFX_FLOAT        xOffs,
                                                CYGFX_FLOAT        yOffs,
                                                CYGFX_BOOL         use_mask);

/**
    Shutdown line rendering mode operation. If no LBO are added to the cmdseq, it
    will direct return.
    Otherwise it adds the required functions
    - end the slice rendering and add a store operation
    - add operation to increase line count
    - add operation to repeat all operations if the line count is below target
    height
    - for OTF add jump to repeat frame

    \param [in] cardDevice  The bliteng device

    \retval ::CYGFX_OK On success. Otherwise the related error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeEndLineRenderingMode( GCCGFX_CARD_DEVICE_S cardDevice);

/**
    Modify the gamma_remove flag for SRC or DST depending of the attributes.gamma_mode
    \note The Blit context is modified! Use a copy of the application ctx!

    \param [in] pCtx  The blit context
    \param [in] target  The target (Must be CYGFX_BE_TARGET_SRC or
                        CYGFX_BE_TARGET_DST)

    \retval None
**/
CYGFX_EXTERN void GccGfx_BeUpdateSurfGamma( GCCGFX_BE_CTX_S* pCtx,
                                            CYGFX_U32        target);

/**
    Proceed a LBO blit:
    - Stop the previous LBO sequence if required.
    - Start a new sequence.
    - Check if DST needs separate blit and proceed.
    - Check if MASK is required and process blit to alpha mask buffer.
    - Proceed SRC blit.

    \param [in] ctx  Blit Engine context
    \param [in] pHlp  Structure describing the blit properties

    \retval CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeBlitLbo( GCCGFX_BE_CTX_S*         ctx,
                                           GCCGFX_BE_BLIT_HELPER_S* pHlp);

/**
    Perform a fill operation in line based rendering mode
    \note It can happen that OB causes multiple operations.

    \param [in] ctx  Blit Context
    \param [in] pSurf_store  Target surface
    \param [in] x  Horizontal start position
    \param [in] y  Vertical start position
    \param [in] w  Width
    \param [in] h  Height
    \param [in] bFullScreen  If true the complete surface is filled
    \param [in] usage  Processing flags

    \retval CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeFillLineMode( GCCGFX_BE_CTX_S*  ctx,
                                                GCCGFX_SURFACE_S* pSurf_store,
                                                CYGFX_U32         x,
                                                CYGFX_U32         y,
                                                CYGFX_U32         w,
                                                CYGFX_U32         h,
                                                CYGFX_BOOL        bFullScreen,
                                                CYGFX_U32         usage);

/**
    Proceed an IBO blit.
    - Check if multiple passes are requires (e.g. filter).
    - Proceed Gfx_BeBlitIboSingle().

    \param [in] ctx  Blit Engine context
    \param [in] pHlp  Structure describing the blit properties

    \retval                 CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeBlitIbo( GCCGFX_BE_CTX_S*         ctx,
                                           GCCGFX_BE_BLIT_HELPER_S* pHlp);

/**
    Convert the CYGFX_BE_CONTEXT pointer (API view) to a GCCGFX_BE_CTX_S pointer
    (driver view) and roughly validate the context properties.

    \param [in] beCtx  Blit Engine context
    \param [out] ctx  GCCGFX_BE_CTX_S context

**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeCheckContext( CYGFX_BE_CONTEXT  beCtx,
                                                GCCGFX_BE_CTX_S** ctx);

/**
    Update properties for OTF window. Can be
    - disabling OTF window
    - enabling OTF (including LBH handling set up)
    - or just updating OTF
    \note keepLines can only be set if the OTF is not running (HW restriction).
    It is only used if the previous state is off and this call switches OTF on.

    \param [in] cardHandle  handle for the Display device.
    \param [in,out] pIrisWin  Pointer to the window description.
    \param [in] bEnable  Defines if the OTF in on or off
    \param [in] keepLines  Lines that must be always in memory to be able to warp
                           display content

    \retval CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeUpdateOtfWin( const GCCGFX_CARD_HANDLE cardHandle,
                                                GCCGFX_IRIS_WINDOW_S*    pIrisWin,
                                                CYGFX_BOOL               bEnable,
                                                CYGFX_U32                keepLines);

/**
    Calculate a full matrix for a blit path given by source and store surface mask
    and offset

    \param [in] ctx  Blit Context
    \param [in] target  Defines the target from \a ctx that is used for calculation
    \param [in] m  The Target matrix
    \param [in] fOffsX  The X offset
    \param [in] fOffsY  The Y offset

    \retval None
**/
CYGFX_EXTERN void GccGfx_BeCalcFullMatrix( const GCCGFX_BE_CTX_S* ctx,
                                           CYGFX_U32              target,
                                           IRIS_MATH_M3X3         m,
                                           CYGFX_FLOAT            fOffsX,
                                           CYGFX_FLOAT            fOffsY);

/**
    Flush the rendered content.
    Insert a store operation and close the render loop.

    If LBO mode is active, the command sequencer HW is programmed to finish the LBO
    tasks and then a new start marker for a new scheduling sequence is defined
    inside the task buffer of the scheduler part of the command sequencer HW.

    \param [in] task  Defines the task number with 0 <= task <
                      GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeFlush( CYGFX_U32 task);

/**
    Inserts a sync wait into the 2D command stream (similar to the OpenGL
    glWaitSync() call).
    BlitEngine operations performed after this call are executed only after sync
    gets signaled.

    Important remark - the command sequencer hardware will wait on sync, not the
    gfx driver / CPU.

    \param [in] task  Defines the task number with GCCGFX_GEN_ON_THE_FLY_COUNT <=
                      task < GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] sync  Sync to wait for

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeWaitSync( CYGFX_U32  task,
                                            CYGFX_SYNC sync);

/**
    Requests a sync object from the 2D command pipeline (similar to the OpenGL
    glFencSync() call).
    The sync object will be signaled after all preceding instructions have been
    processed.

    What this means is that the command sequencer HW gets programmed inside the
    "task" task buffer to wait on the blit engine finishing its present commands
    and when that happens then the "sync" object is updated as the wait condition
    is fulfiled.

    \param [in] task  Defines the task number with GCCGFX_GEN_ON_THE_FLY_COUNT <=
                      task < GCCGFX_GEN_HW_CMDSEQ_MAX_CMDSEQ_TASKS.
    \param [in] sync  Sync object that gets the parameter of the inserted sync.

    \retval CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeGetSync( CYGFX_U32  task,
                                           CYGFX_SYNC sync);

/**
    Check if an OTF window has rendered content.

    \param [in] pIrisWin  Pointer to the window description.

    \retval CYGFX_TRUE If rendered content is available.
    \retval CYGFX_FALSE Otherwise.
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_BeHasRenderContent( const GCCGFX_IRIS_WINDOW_S* pIrisWin);

/**
    Used to configure the Color Lookup Table (CLUT) (e.g., for gamma correction).
    More details see CyGfx_CmSetClutData().

    \param [in,out] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object).
    \param [in] format  Defines the number of entries in the array.
                        Depending on the hardware, the CLUT hardware may not support all format types.
                        In such cases, the driver interpolates the missing or skips the values that are
                        not required.
    \param [in] pRed  Pointer to the array of red values. The size of the array
                      depends on the format.
    \param [in] pGreen  Pointer to the array of green values. The size of the array
                        depends on the format.
    \param [in] pBlue  Pointer to the array of blue values. The size of the array
                       depends on the format.

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeClutData( CYGFX_BE_CONTEXT     beCtx,
                                           CYGFX_CM_CLUT_FORMAT format,
                                           const CYGFX_S16*     pRed,
                                           const CYGFX_S16*     pGreen,
                                           const CYGFX_S16*     pBlue);




/**
    GccGfx_BeSetColorMatrix is the setting function for the color matrix.
    More details see CyGfx_CmSetColorMatrix().
    
    \param [in,out] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object).
    \param [in] format  Defines the format of the matrix (see above)
    \param [in] fMatrix  Address of the color matrix (see [Description])

    \retval ::CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeSetColorMatrix( CYGFX_BE_CONTEXT        beCtx,
                                                 CYGFX_CM_CMATRIX_FORMAT format,
                                                 const CYGFX_FLOAT*      fMatrix);

/**
    The GccGfx_BeFilter function specifies a filter for the current context.
    More details see CyGfx_CmSetFilter().
    \param [in,out] beCtx  Blit Engine context (!=NULL) (Must be a pointer to a
                           ::CYGFX_BE_CONTEXT_OBJECT_S object).
    \param [in] eChannel  Filter channel
    \param [in] fir_exponent  FIR product sum is divided by 2**(fir_exponent) and
                              rounded. Must be: 0 <= fir_exponent < 16.
    \param [in] taps_h  Filter width; can be 0 or any odd value between 3 and 15.
                        Must be consistent with the number of coefficients in the fir_coefficients_h
                        vector.
    \param [in] fir_coefficients_h  Pointer to a vector of coefficients doing
                                    horizontal filtering. The coefficients are taps_h numbers in 8-bit signed
                                    integer format. Null pointer and taps_h = 0 mean that horizontal filtering is
                                    bypassed.
    \param [in] taps_v  Filter height; can be 0 or any odd value between 3 and 15.
                        Must be consistent with the number of coefficients in the fir_coefficients_v
                        vector.
    \param [in] fir_coefficients_v  Pointer to a vector of coefficients doing
                                    vertical filtering. The coefficients are taps_v numbers in 8-bit signed integer
                                    format. Null pointer and taps_v = 0 mean that vertical filtering is bypassed.

    \retval CYGFX_OK On success; the related error code otherwise.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_BeFilter( CYGFX_BE_CONTEXT        beCtx,
                                         CYGFX_CM_FILTER_CHANNEL eChannel,
                                         CYGFX_U08               fir_exponent,
                                         CYGFX_U08               taps_h,
                                         const CYGFX_S08*        fir_coefficients_h,
                                         CYGFX_U08               taps_v,
                                         const CYGFX_S08*        fir_coefficients_v);


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_BE_H */

