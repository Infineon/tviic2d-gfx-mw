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
    \file        ut_class_window.h
    \brief       This class abstracts windows.
*/

#pragma once

#include "ut_class_surface.h"
#include "ut_class_ctx.h"

#include "ut_freetype.h"

#include "hweb.h"


/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_classes
\{ */

/** \addtogroup CWindow CWindow
    The CWindow class can be used to open a window with the Graphics Driver. The header file contains
    different derived classes for different use cases. For example, a CSurfaceWindow<2> object
    can be used to manage a double-buffered render target that will be displayed as a Window layer
    on the connected panel.
    A CStaticSurfaceWindow object can be used as a static background layer or to display a static
    icon as the foreground window.
    The typical use of these CWindows object will be shown in the following sample:
    \code
    void main()
    {
        CDevice                 device;
        CDisplay                display;
        CStaticSurfaceWindow    wndBg;
        CSurfaceWindow<2>       wndRender;

        //Opens the device.
        device.Open();
        // Opens the display.
        display.Open(ScreenWidth, ScreenHeight);
        // Opens a background window and assign an image.
        wndBg.Open(display, background_image);

        // Opens a foreground window with alpha blending.
        wndRender.Open(display, 0, 0, ScreenWidth, ScreenHeight,
            CYGFX_DISP_LAYER_1, CYGFX_DISP_SUB_LAYER_DEFAULT, 0,
            CYGFX_WIN_BLEND_SOURCE_ALPHA);
        //Creates a (double) buffer for the window.
        wndRender.CreateBuffer();
        while (draw)
        {
            // Render something to wndRender.m_surface
            ...

            //Swaps the buffers.
            wndRender.Swap();
        }

    }

    \endcode

\{ */


/** Generic Window class (Base class for some specialized derived classes */
class CWindow
{
public:
    /** Class CWindow constructor */
    CWindow():m_win(0){}
    /** Class CWindow destructor */
    ~CWindow(){Close();}
    /** Opens the window.
        \param[in] display Display object that will be used to open the window
        \param[in] x X position offset of the upper-left window corner relative to the display screen
        \param[in] y Y position offset of the upper-left window corner relative to the display screen
        \param[in] w Width of the window; if w is 0, the display width is used.
        \param[in] h Height of the window; if h is 0, the display height is used.
        \param[in] layerId Layer ID of the window
        \param[in] sub_layerID Sublayer ID of the window
        \param[in] features Requested features for the window; see #CYGFX_DISP_WINDOW_PROPERTIES_S
        \param[in] blend_mode Starting blend mode for the window; see CyGfx_WinSetBlendMode().
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    CYGFX_ERROR  Open(CYGFX_DISP display, CYGFX_S32 x = 0, CYGFX_S32 y = 0, CYGFX_U32 w = 0, CYGFX_U32 h = 0,
        CYGFX_DISP_LAYER layerId = CYGFX_DISP_LAYER_0, CYGFX_DISP_SUB_LAYER sub_layerID = CYGFX_DISP_SUB_LAYER_DEFAULT,
        CYGFX_U32 features = 0, CYGFX_U32 blend_mode = 0)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        static const CYGFX_DISP_WINDOW_PROPERTIES_S  windowProp = CYGFX_DISP_WINDOW_PROPERTIES_INITIALIZER;
        m_windowProp = windowProp;
        m_windowProp.layerId = layerId;
        m_windowProp.sub_layerId = sub_layerID;
        m_windowProp.features = features;
        m_windowProp.topLeftX = x;
        m_windowProp.topLeftY = y;
        m_display = display;
        if (w == 0)
        {
            UTIL_SUCCESS(ret, CyGfx_DispGetAttribute(display, CYGFX_DISP_ATTR_X_RESOLUTION, &w));
            w -= x;
        }
        if (h == 0)
        {
            UTIL_SUCCESS(ret, CyGfx_DispGetAttribute(display, CYGFX_DISP_ATTR_Y_RESOLUTION, &h));
            h -= y;
        }
        m_windowProp.width = w;
        m_windowProp.height = h;
        if(sub_layerID != CYGFX_DISP_SUB_LAYER_DEFAULT)
        {
            m_windowProp.features |= CYGFX_DISP_FEATURE_MULTI_LAYER;
        }
        UTIL_SUCCESS(ret, CyGfx_SyncReset(&m_sync));
        if (display != NULL)
        {
            UTIL_SUCCESS(ret, CyGfx_DispWinCreate(display, &m_windowProp, &m_win));
            UTIL_SUCCESS(ret, CyGfx_WinSetBlendMode(m_win, blend_mode));
            /* Reset the sync and set it to the CreateWindow event. */
            /* Allow SyncReady to control the start of rendering if the window is ready. */
            UTIL_SUCCESS(ret, CyGfx_WinGetSync(m_win, GetSync()));
        }
        return ret;
    }
    /** Closes the window.
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR Close()
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (m_win)
        {
            UTIL_SUCCESS(ret, CyGfx_WinDestroy(m_win));
            m_win = 0;
        }
        return ret;
    }
    /** Checks the sync object of this window.
        \retval CYGFX_BOOL CYGFX_TRUE: window is ready; CYGFX_FALSE: window is still busy.
    */
    virtual CYGFX_BOOL SyncReady()
    {
        if (CyGfx_SyncWaitSync(GetSync(), 0) == CYGFX_OK)
            return CYGFX_TRUE;
        return CYGFX_FALSE;
    }
    /** Applies all changes.
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR Commit()
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (m_win != 0)
        {
            UTIL_SUCCESS(ret, CyGfx_WinCommit(m_win));
           /* Allows SyncReady to control whether the window is ready to render a new content. */
            UTIL_SUCCESS(ret, CyGfx_WinGetSync(m_win, GetSync()));
        }
        return ret;
    }
    /** Sets a new surface to the window and applies the changes
        \param[in] surf New surface to be shown
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR SetSurface(CYGFX_SURFACE surf)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (m_win != 0)
        {
            UTIL_SUCCESS(ret, CyGfx_WinSetSurface(m_win, CYGFX_DISP_BUFF_TARGET_COLOR_BUFF, surf));
            UTIL_SUCCESS(ret, CWindow::Commit());
        }
        return ret;
    }
    /** Switches gamma removal ON/OFF.
        \param[in] bEnable CYGFX_TRUE if gamma remove will be enabled; CYGFX_FALSE otherwise
        \param[in] bCommit CYGFX_TRUE changes should be applied
        \retval CYGFX_ERROR CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR UseLinearLight(CYGFX_BOOL bEnable, CYGFX_BOOL bCommit = CYGFX_FALSE)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (m_win == NULL) return CYGFX_OK;
        UTIL_SUCCESS(ret, CyGfx_WinSetAttribute(m_win, CYGFX_WIN_ATTR_GAMMA, (bEnable == CYGFX_TRUE)?CYGFX_DISP_GAMMA_REMOVE:CYGFX_DISP_GAMMA_NEUTRAL));
        if (bCommit)
        {
            UTIL_SUCCESS(ret, CWindow::Commit());
        }
        return ret;
    }
    /** \retval CYGFX_S32 Returns the width of the window */
    CYGFX_S32 GetWidth(){return m_windowProp.width;}
    /** \retval CYGFX_S32 Returns the height of the window */
    CYGFX_S32 GetHeight(){return m_windowProp.height;}
    /** \retval CYGFX_DISP Returns the display object of the window */
    CYGFX_DISP GetDisplay(){return m_display;}
    /** \retval CYGFX_WINDOW Returns the window object */
    CYGFX_WINDOW GetWindowHandle(){return m_win;}
    /** \retval CYGFX_WINDOW Returns the window object */
    operator CYGFX_WINDOW(){return m_win;}
    /** \retval CYGFX_SYNC Gets the sync object of this window */
    CYGFX_SYNC GetSync(){return &m_sync;}
private:
    CYGFX_SYNC_OBJECT_S m_sync;
protected:
    /** Window object used by this class instance */
    CYGFX_WINDOW m_win;
    /** Display object used by this class instance */
    CYGFX_DISP m_display;
    /** CYGFX_DISP_WINDOW_PROPERTIES_S structure used to create this window */
    CYGFX_DISP_WINDOW_PROPERTIES_S  m_windowProp;
    /** Sync object that can be used for synchronization */
};

/** The CSurfaceWindow class represents a CWindow with one or more pixel buffers. The pixel buffers can be used
    to store a (rendered) image that will be displayed in the Window after calling Swap. */
template<CYGFX_U32 NUM_BUFFERS>
class CSurfaceWindow: public CWindow
{
public:
    /** Creates one or more pixel buffers with the size of the window.
        \param[in] format Color format of the buffer
        \param[in] MaxSize Experimental: if a size != 0 is defined, the function tries to create compressed buffers
                   equal or smaller than MaxSize. (see \ref overview_compression)
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    CYGFX_ERROR CreateBuffer(const CYGFX_SM_FORMAT format = CYGFX_SM_FORMAT_R8G8B8A8, CYGFX_U32 MaxSize = 0)
    {
        return m_surface.CreateBuffer(GetWidth(), GetHeight(), format, MaxSize);
    }
    /** Creates one or more pixel buffers with the size of the window.
        \param[in] bit_red Number of red bits in the buffer(s)
        \param[in] bit_green Number of green bits in the buffer(s)
        \param[in] bit_blue Number of blue bits in the buffer(s)
        \param[in] bit_alpha Number of alpha bits in the buffer(s)
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    CYGFX_ERROR CreateBuffer(CYGFX_U32 bit_red, CYGFX_U32 bit_green, CYGFX_U32 bit_blue, CYGFX_U32 bit_alpha)
    {
        return m_surface.CreateBuffer(GetWidth(), GetHeight(), bit_red, bit_green, bit_blue, bit_alpha);
    }
    /** Creates one or more pixel buffers with the size of the window and a grey pixel format.
        \param[in] bit_color Number of grey bits in the buffer(s)
        \param[in] bit_alpha Number of alpha bits in the buffer(s)
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    CYGFX_ERROR CreateGrayBuffer(CYGFX_U32 bit_color, CYGFX_U32 bit_alpha)
    {
        return m_surface.CreateGrayBuffer(GetWidth(), GetHeight(), bit_color, bit_alpha);
    }
    /** Pushes the current buffer to the display and selects the next buffer (if any) for next drawing operation.
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR Swap()
    {
        CYGFX_ERROR ret = CYGFX_OK;
        CYGFX_U32 val;


        if (m_win != NULL)
        {
            /* Do not automatically swap if CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT is set. */
            UTIL_SUCCESS(ret, CyGfx_DispGetAttribute(GetDisplay(), CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT, &val));
            /* Swaps buffers. */
            UTIL_SUCCESS(ret, CyGfx_WinSetSurface(m_win, CYGFX_DISP_BUFF_TARGET_COLOR_BUFF, m_surface));
            /*
                Inserts a sync object into the display queue which tells later
                when the commit really occurred. Warning: The sync is not initialized if CYGFX_DISP_ATTR_INCLUDE_WIN_COMMIT is used.
            */
            if (val == CYGFX_FALSE)
            {
                UTIL_SUCCESS(ret, CWindow::Commit());
            }
        }
        else
        {
            SEND_SURFACE(m_surface);
        }

        /* Swaps the frame buffer. */
        m_surface.Swap();
        return ret;
    }
    /** Closes the window.
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR Close()
    {
        m_surface.Delete();
        return CWindow::Close();
    }
public:
    /** The surface (array) for this window */
    CSurface<NUM_BUFFERS> m_surface;
};

/** The CStaticSurfaceWindow class uses a VIDEOSS window showing a static image like a background image, or for example, a sign as foreground layer. */
class CStaticSurfaceWindow: public CSurfaceWindow<1>
{
public:
    /** Opens the window and shows an image.
        \param[in] display Display object that will be used to open the window
        \param[in] pImage Pointer to a buffer array describing a VIDEOSS pixel buffer (similar to utSurfLoadBitmap())
        \param[in] bCopyToVRAM If CYGFX_TRUE, the pImage will be copied to VRAM; the display controller will read the pImage buffer direct otherwise.
        \param[in] x X position offset of the upper-left window corner relative to the display screen
        \param[in] y Y position offset of the upper-left window corner relative to the display screen
        \param[in] layerId Layer ID of the window
        \param[in] sub_layerID Sublayer ID of the window
        \param[in] blend_mode Starting blend mode for the window; see CyGfx_WinSetBlendMode().
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR  Open(CYGFX_DISP display, const void *pImage, CYGFX_BOOL bCopyToVRAM = CYGFX_FALSE, CYGFX_S32 x = 0, CYGFX_S32 y = 0,
        CYGFX_DISP_LAYER layerId = CYGFX_DISP_LAYER_0, CYGFX_DISP_SUB_LAYER sub_layerID = CYGFX_DISP_SUB_LAYER_DEFAULT,
        CYGFX_U32 blend_mode = 0)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        CYGFX_U32 val;
        CYGFX_U32 features = 0;
        UTIL_SUCCESS(ret, m_surface.SurfLoadBitmap(pImage, bCopyToVRAM, CYGFX_PALETTE_REGION_DISPLAY));
        if (sub_layerID != CYGFX_DISP_SUB_LAYER_DEFAULT)
            features |= CYGFX_DISP_FEATURE_MULTI_LAYER;
        CyGfx_SmGetAttribute(m_surface, CYGFX_SM_ATTR_USERDEFINED, &val);
        if ((val & UTIL_SM_USERDEFINED_PALETTE) != 0)
            features |= CYGFX_DISP_FEATURE_INDEX_COLOR;
        CyGfx_SmGetAttribute(m_surface, CYGFX_SM_ATTR_COMPRESSION_FORMAT, &val);
        if (val != CYGFX_SM_COMP_NONE)
            features |= CYGFX_DISP_FEATURE_DECODE;
        UTIL_SUCCESS(ret, CSurfaceWindow<1>::Open(display, x, y, m_surface.GetWidth(), m_surface.GetHeight(), layerId, sub_layerID, features, blend_mode));
        UTIL_SUCCESS(ret, CSurfaceWindow<1>::Swap());
        return ret;
    }
    /** Opens the window and shows an image.
        \param[in] display Display object that will be used to open the window
        \param[in] sImage CYGFX_SURFACE object to be displayed
        \param[in] x X position offset of the upper-left window corner relative to the display screen
        \param[in] y Y position offset of the upper-left window corner relative to the display screen
        \param[in] layerId Layer ID of the window
        \param[in] sub_layerID Sublayer ID of the window
        \param[in] blend_mode Starting blend mode for the window; see CyGfx_WinSetBlendMode().
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR  Open(CYGFX_DISP display, CYGFX_SURFACE sImage, CYGFX_S32 x = 0, CYGFX_S32 y = 0,
        CYGFX_DISP_LAYER layerId = CYGFX_DISP_LAYER_0, CYGFX_DISP_SUB_LAYER sub_layerID = CYGFX_DISP_SUB_LAYER_DEFAULT,
        CYGFX_U32 blend_mode = 0)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        CYGFX_U32 val;
        CYGFX_U32 features = 0;
        if (sub_layerID != CYGFX_DISP_SUB_LAYER_DEFAULT)
            features |= CYGFX_DISP_FEATURE_MULTI_LAYER;
        CyGfx_SmGetAttribute(sImage, CYGFX_SM_ATTR_COMPRESSION_FORMAT, &val);
        if (val != CYGFX_SM_COMP_NONE)
            features |= CYGFX_DISP_FEATURE_DECODE;
        UTIL_SUCCESS(ret, CSurfaceWindow<1>::Open(display, x, y, utSurfWidth(sImage), utSurfHeight(sImage), layerId, sub_layerID, features, blend_mode));
        UTIL_SUCCESS(ret, CSurfaceWindow<1>::SetSurface(sImage));
        return ret;
    }
};

/** The CTextWindow class can be used with a free VIDEOSS window to show a simple status text. */
template<CYGFX_U32 NUM_BUFFERS>
class CTextWindow: public CSurfaceWindow<NUM_BUFFERS>
{
public:
    /** Initializes an opened CTextWindow object to be prepared to render and display text.
        \param[in] Font TrueType font for the menu (if size_of_font == 0, it defines the location in the file system;
            if size_of_font != 0, it is the pointer to the font buffer with a size of size_of_font.
        \param[in] size_of_font See the font parameter
        \param[in] font_height Requested font height in pixels
        \param[in] colorFont Font color
        \param[in] colorBG Background color
        \param[in] draw_ctx Initialized draw context object
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    CYGFX_ERROR  InitTextWindow(const void *Font, CYGFX_U32 size_of_font, CYGFX_U32 font_height, CYGFX_U32 colorFont = 0xffffffff, CYGFX_U32 colorBG = 0, CYGFX_BE_CONTEXT draw_ctx = 0)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        m_font_height = font_height;
        m_cctx.Init();
        m_ctx = draw_ctx;
        if (this->m_surface.HasBuffer() == CYGFX_FALSE)
        {
            UTIL_SUCCESS(ret, CSurfaceWindow<NUM_BUFFERS>::CreateBuffer(CYGFX_SM_FORMAT_A4));
        }
        if (draw_ctx == 0) {
            UTIL_SUCCESS(ret, m_cctx.OpenDrawCtx(CSurfaceWindow<NUM_BUFFERS>::GetWidth(), CSurfaceWindow<NUM_BUFFERS>::GetHeight(), 4));
            m_ctx = m_cctx.GetHandle();
        }
        m_colorFont = colorFont;
        m_colorBg = colorBG;
        if (this->m_win != NULL)
        {
            UTIL_SUCCESS(ret, CyGfx_WinSetAttribute(this->m_win, CYGFX_WIN_ATTR_COLOR, m_colorFont));
        }
        UTIL_SUCCESS(ret, CyGfx_BeSetAttribute(m_ctx, CYGFX_BE_CTX_ATTR_COLOR, colorBG));
        UTIL_SUCCESS(ret, utFtOpen(&m_fc, m_ctx, (const char *)Font, size_of_font, font_height));
        m_yOffset = font_height / 4;
        return ret;
    }
    /** Closes the window
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR Close()
    {
        utFtClose(&m_fc);
        m_cctx.Close();
        return CSurfaceWindow<NUM_BUFFERS>::Close();
    }
    /** Renders and shows the new text.
        \param[in] pszString String to be displayed
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR SetText(const wchar_t *pszString)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (m_ctx == 0) return CYGFX_OK;
        UTIL_SUCCESS(ret, CyGfx_BeBindSurface(m_ctx, CYGFX_BE_TARGET_SRC, 0));
        UTIL_SUCCESS(ret, CyGfx_BeBindSurface(m_ctx, CYGFX_BE_TARGET_DST, 0));
        UTIL_SUCCESS(ret, CyGfx_BeBindSurface(m_ctx, CYGFX_BE_TARGET_STORE, this->m_surface));
        UTIL_SUCCESS(ret, CyGfx_BeFill(m_ctx, 0, 0, CSurfaceWindow<NUM_BUFFERS>::GetWidth(), CSurfaceWindow<NUM_BUFFERS>::GetHeight()));
        UTIL_SUCCESS(ret, CyGfx_BeSetSurfAttribute(m_ctx, CYGFX_BE_TARGET_SRC, CYGFX_BE_SURF_ATTR_COLOR, m_colorFont));
        UTIL_SUCCESS(ret, utFtTextOut(&m_fc, 0, m_yOffset, pszString));
        UTIL_SUCCESS(ret, CSurfaceWindow<NUM_BUFFERS>::Swap());
        return ret;
    }
protected:
    /** Stores the font color. */
    CYGFX_U32 m_colorFont;
    /** Stores the background color. */
    CYGFX_U32 m_colorBg;
    /** Starting point for the text in y direction. */
    CYGFX_U16 m_yOffset;
    /** Font height. */
    CYGFX_U16 m_font_height;
    /** BlitEng context with drawing support. */
    CYGFX_BE_CONTEXT	m_ctx;
    /** Context class (only used if no context is given). */
    CCtx    m_cctx;
    /** Util FreeType structure for text rendering */
    FT_CONTEXT_CONTAINER m_fc;
public:
};

/** The COnTheFlyWindow class defines a window for the on-the-fly render mode. */
class COnTheFlyWindow: public CSurfaceWindow<1>
{
public:
    /** Constructor */
    COnTheFlyWindow(){}
    /** Opens an OTF window.
        \note Open generates also a ctx and a line buffer surface that is required for OTF rendering.
        \param[in] display Display object that will be used to open the window
        \param[in] x X position offset of the upper-left window corner relative to the display screen
        \param[in] y Y position offset of the upper-left window corner relative to the display screen
        \param[in] w Width of the window; if w is 0, the display width is used.
        \param[in] h Height of the window; if h is 0, the display height is used.
        \param[in] layerId Layer ID of the window
        \param[in] sub_layerID Sublayer ID of the window
        \param[in] features Requested features for the window; must be one of CYGFX_DISP_FEATURE_OTF_WIN_PRIO_0 .. CYGFX_DISP_FEATURE_OTF_WIN_PRIO_3
        \param[in] blend_mode Starting blend mode for the window; see CyGfx_WinSetBlendMode().
        \param[in] line_buffer Number of lines of the surface required for OTF rendering. The minimal value is 16. It must be a power of 2 value.
        \param[in] format Color format for the surface required for OTF rendering
        \param[in] keep_lines Must be set for warping; see CYGFX_WIN_ATTR_OTF_WARP_KEEPLINES.
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR  Open(CYGFX_DISP display, CYGFX_S32 x = 0, CYGFX_S32 y = 0, CYGFX_U32 w = 0, CYGFX_U32 h = 0,
        CYGFX_DISP_LAYER layerId = CYGFX_DISP_LAYER_0, CYGFX_DISP_SUB_LAYER sub_layerID = CYGFX_DISP_SUB_LAYER_DEFAULT,
        CYGFX_U32 features = CYGFX_DISP_FEATURE_OTF_WIN_PRIO_0, CYGFX_U32 blend_mode = 0,
        CYGFX_U32 line_buffer = 64, CYGFX_SM_FORMAT format = CYGFX_SM_FORMAT_R8G8B8A8, CYGFX_U32 keep_lines = 0)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        CYGFX_U32 val, task;

        CyGfx_DispGetAttribute(display, CYGFX_DISP_ATTR_OUTPUT_CONTROLLER, &val);
        switch(features & (CYGFX_DISP_FEATURE_OTF_WIN_PRIO_0 | CYGFX_DISP_FEATURE_OTF_WIN_PRIO_1 | CYGFX_DISP_FEATURE_OTF_WIN_PRIO_2 | CYGFX_DISP_FEATURE_OTF_WIN_PRIO_3))
        {
            case CYGFX_DISP_FEATURE_OTF_WIN_PRIO_0:
                task = CYGFX_BE_TASK_WIN_PRIO_0;
                break;
            case CYGFX_DISP_FEATURE_OTF_WIN_PRIO_1:
                task = CYGFX_BE_TASK_WIN_PRIO_1;
                break;
            case CYGFX_DISP_FEATURE_OTF_WIN_PRIO_2:
                task = CYGFX_BE_TASK_WIN_PRIO_2;
                break;
            case CYGFX_DISP_FEATURE_OTF_WIN_PRIO_3:
                task = CYGFX_BE_TASK_WIN_PRIO_3;
                break;
            default:
#if (defined (DEBUG) || defined (RELEASE) || defined (FPGA))
                printf("Error: Use one of feature CYGFX_DISP_FEATURE_OTF_WIN_PRIO_0 ... CYGFX_DISP_FEATURE_OTF_WIN_PRIO_3 for OTF windows!\n");
#endif
                return CYGFX_ERR;
        }

        if (sub_layerID != CYGFX_DISP_SUB_LAYER_DEFAULT)
        {
            features |= CYGFX_DISP_FEATURE_MULTI_LAYER;
        }
        if (w == 0)
        {
            CyGfx_DispGetAttribute(display, CYGFX_DISP_ATTR_X_RESOLUTION, &w);
        }
        if (h == 0)
        {
            CyGfx_DispGetAttribute(display, CYGFX_DISP_ATTR_Y_RESOLUTION, &h);
        }
        UTIL_SUCCESS(ret, CSurfaceWindow<1>::Open(display, x, y, w, h, layerId, sub_layerID, features, blend_mode));
        if (keep_lines)
        {
            UTIL_SUCCESS(ret, CyGfx_WinSetAttribute(m_win, CYGFX_WIN_ATTR_OTF_WARP_KEEPLINES, keep_lines));
        }
        UTIL_SUCCESS(ret, m_surface.CreateBuffer(w, line_buffer, format));
        UTIL_SUCCESS(ret, CyGfx_WinSetSurface(m_win, CYGFX_DISP_BUFF_TARGET_COLOR_BUFF, m_surface));
        CyGfx_BeResetContext(&m_ctx);
        CyGfx_BeSetAttribute(&m_ctx, CYGFX_BE_CTX_ATTR_TASK, task);


        return ret;
    }
    /** Closes the OTF window.
        \retval CYGFX_ERROR CYGFX_OK if success; the corresponding error code otherwise.
    */
    virtual CYGFX_ERROR Close()
    {
        return CSurfaceWindow<1>::Close();
    }
    /** Correct context for rendering to an OTF window.
        \retval CYGFX_BE_CONTEXT Blit context
    */
    CYGFX_BE_CONTEXT GetRenderContext()
    {
        return &m_ctx;
    }
    /** Pushes the last-rendered operations to the active pipeline.
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    virtual CYGFX_ERROR Swap()
    {
        CYGFX_ERROR ret = CWindow::Commit();
        return ret;
    }
private:
    CYGFX_BE_CONTEXT_OBJECT_S m_ctx;
};

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
