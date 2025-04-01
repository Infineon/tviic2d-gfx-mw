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
    \file        ut_class_ctx.h
    \brief       This class abstracts an CYGFX_BE_CONTEXT.
*/

#pragma once

#include "cygfx_bliteng.h"
#include "cygfx_draweng.h"

#include "ut_compatibility.h"

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_classes
\{ */

/** \addtogroup CCtx CCtx
    The CCtx class is a simple abstraction of a CYGFX_BE_CONTEXT object.
    The application can use an object of this class directly for blitting because the
    constructor takes over the initialization of the context. After a call of
    OpenDrawCtx, this context can be also used for drawing.
\{ */


/** Class CCtx see \ref CCtx */
class CCtx
{
public:
    /** Class CCtx constructor */
    CCtx()
    {
        m_addPathBuffer = NULL;
        m_alph_buffer_size = 0;
        m_addAlpha = NULL;
        CyGfx_BeResetContext(&m_ctx);
    }
    /** Class CCtx destructor */
    ~CCtx()
    {
        Close();
    }
    /** Initializes the context variables. */
    void Init(CYGFX_BE_TASK prio = CYGFX_BE_TASK_MEM_PRIO_1, CYGFX_BE_RENDER_MODE mode = CYGFX_BE_RENDER_MODE_MIXED)
    {
        m_addPathBuffer = NULL;
        m_alph_buffer_size = 0;
        m_addAlpha = NULL;
        CyGfx_BeResetContext(&m_ctx);
        CyGfx_BeSetAttribute(&m_ctx, CYGFX_BE_CTX_ATTR_TASK, prio);
        CyGfx_BeSetAttribute(&m_ctx, CYGFX_BE_CTX_ATTR_RENDER_MODE, mode);
    }
    /** Closes the context and destroys the buffers. */
    void Close()
    {
        if (m_addAlpha != NULL)
        {
            utVideoFree(m_addAlpha);
            m_addAlpha =  NULL;
            m_alph_buffer_size = 0;
        }
        if (m_addPathBuffer != NULL)
        {
            utVideoFree(m_addPathBuffer);
            m_addPathBuffer = NULL;
        }
    }
    /** Initializes the context to support drawing.
        \note Note that the alpha buffer is common for all draw contexts.
        It means that the last assigned alpha buffer is used for all draw operations.
        In many applications, it is useful to share one draw context for all draw
        routines.
        \param[in] w Width of the draw alpha buffer
        \param[in] h Height of the draw alpha buffer
        \param[in] bpp Bits-per-pixel of the draw alpha buffer (must be 1, 2, 4, or 8)
        \param[in] path_size Size in bytes of the draw path buffer that will be allocated
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR for memory allocation issues otherwise.
    */
    CYGFX_ERROR OpenDrawCtx(CYGFX_U32 w = 128, CYGFX_U32 h = 128, CYGFX_U32 bpp = 4, CYGFX_U32 path_size = 1024 * 32)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        CYGFX_U32 task;

        CyGfx_BeGetAttribute(&m_ctx, CYGFX_BE_CTX_ATTR_TASK, &task);
        if (task != CYGFX_BE_TASK_MEM_PRIO_1)
        {
#if (defined (DEBUG) || defined (RELEASE) || defined (FPGA))
            printf("Drawing only supported for CYGFX_BE_TASK_MEM_PRIO_1.\n");
#endif
            ret = CYGFX_ERR;
            return ret;
        }
        /* Set the render mode to IBO because drawing operates in IBO mode only so that it is faster to make all blits in IBO. */
        CyGfx_BeSetAttribute(&m_ctx, CYGFX_BE_CTX_ATTR_RENDER_MODE, CYGFX_BE_RENDER_MODE_IBO);
        UTIL_SUCCESS(ret, CyGfx_DeSetAttribute(&m_ctx, CYGFX_DE_ATTR_SUBPIXELGRID, bpp));

        CYGFX_U32 size;
        m_path_size = path_size;
        m_w = w;
        m_h = h;
        m_bpp = bpp;

        size = ((w * bpp + 7) / 8) * h * 2;

        /* Allocate and set the alpha buffer for the Drawing Engine. */
        if (size > m_alph_buffer_size)
        {
            if (m_addAlpha != NULL)
                utVideoFree(m_addAlpha);
            m_addAlpha = utVideoAlloc( size, 0, 0 );
            CyGfx_DeSetAlphaBuffer(w, h, bpp, m_addAlpha, size);
            m_alph_buffer_size = size;
            if (m_addAlpha == NULL)
            {
                ret = CYGFX_ERR;
                return ret;
            }
        }


        /* Allocate and set the draw path buffer for the Drawing Engine. */
        if (path_size > 0)
        {
            if (m_addPathBuffer != NULL)
                utVideoFree(m_addPathBuffer);
            m_addPathBuffer = utVideoAlloc( path_size, 0, 0);
            CyGfx_DeSetPathBuffer(&m_ctx, m_addPathBuffer, path_size);
            if (m_addPathBuffer == NULL)
            {
                ret = CYGFX_ERR;
            }
        }
        return ret;
    }
    /** Resets the draw buffer.
    */
    void Reset()
    {
        CYGFX_U32 size = ((m_w * m_bpp + 7) / 8) * m_h * 2;

        CyGfx_BeResetContext(&m_ctx);
        if (size > m_alph_buffer_size)
        {
            if (m_addAlpha != NULL)
                utVideoFree(m_addAlpha);
            m_addAlpha = utVideoAlloc( size, 0, 0 );
            CyGfx_DeSetAlphaBuffer(m_w, m_h, m_bpp, m_addAlpha, size);
            m_alph_buffer_size = size;
        }
        CyGfx_DeSetPathBuffer(&m_ctx, m_addPathBuffer, m_path_size);
    }
    /** Return the CYGFX_BE_CONTEXT object. */
    CYGFX_BE_CONTEXT GetHandle(){return &m_ctx;}
    /** Return the CYGFX_BE_CONTEXT object for direct use with the Graphics Driver API calls. */
    operator CYGFX_BE_CONTEXT(){return &m_ctx;}

public:
    CYGFX_BE_CONTEXT_OBJECT_S m_ctx; /**< Blit Engine context object */

    void* m_addPathBuffer;           /**< Address of the draw path buffer */
    CYGFX_U32 m_path_size;           /**< Size of the draw path buffer */

    CYGFX_U32 m_w;                   /**< Width of the draw alpha buffer */
    CYGFX_U32 m_h;                   /**< Height of the draw alpha buffer */
    CYGFX_U32 m_bpp;                 /**< Bits per pixel of the draw alpha buffer */
    void* m_addAlpha;                /**< Address of the draw alpha buffer */
    CYGFX_U32 m_alph_buffer_size;    /**< Size of the draw alpha buffer */
};

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
