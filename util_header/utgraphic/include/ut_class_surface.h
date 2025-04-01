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
    \file        ut_class_surface.h
    \brief       This class abstracts CYGFX_SURFACE objects.
*/

#pragma once

/* for memcpy  */
#include <string.h>

#include "ut_compatibility.h"
#include "cygfx_surfman.h"
#include "sm_util.h"


/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_classes
\{ */

/** \addtogroup CSurface CSurface
    The CSurface class is an abstraction of one or more CYGFX_SURFACE objects
    depending on the NUM_BUFFERS definition. The constructor takes over the
    surface object initialization. To use the surface for blit or display operations, it
    is typically required to allocate VRAM or to assign a static resource from flash
    memory. The required functions are part of this class.

    If the NUM_BUFFERS is 2 (or more), the CSurface object can be used for multi-buffer rendering.
    The Swap member function can be used to toggle between foreground and background buffers.
    The GetSurface, GetHandle, and []operator will always return the foreground buffer.
\{ */

/** Class CSurface */
template<CYGFX_U32 NUM_BUFFERS = 1>
class CSurface
{
public:

    /** Class CSurface constructor */
    CSurface(){Init();}
    /** Class CSurface destructor */
    ~CSurface(){Delete();}
    /** Initialization */
    void Init();
    /** The Delete function can be used to free up the allocated memory, if any.
        This function will be called in the destructor also.
        \retval CYGFX_OK on success; the related error code otherwise.
    */
    CYGFX_ERROR Delete();
    /** Fills all buffers with 0
    */
    CYGFX_ERROR ClearBuffer();
    /** The CreateBuffer function can be used set up the member surface object(s)
        with the allocated VRAM. The buffers are adapted for JPEG decoding.
        \param[in] width Defines the width of the surface(s)
        \param[in] height Defines the height of the surface(s)
        \param[in] format Defines the color format of the surface(s)
        \param[in] MaxSize Experimental: Defines the maximum size for the buffers:
                   O: No limitation; the required buffer will be allocated.
                   size in bytes: The buffer will be created with ::CYGFX_SM_COMP_RLAD_UNIFORM
                   parameter and the allocated buffer size will be smaller or equal MaxSize.
        \retval CYGFX_OK on success; the related error code otherwise.
    */
    virtual CYGFX_ERROR CreateBuffer(const CYGFX_U32 width, const CYGFX_U32 height,
                  const CYGFX_SM_FORMAT format = CYGFX_SM_FORMAT_R8G8B8A8,
                  CYGFX_U32 MaxSize = 0);
    /** The CreateBuffer function can be used set up the member surface object(s)
        with the allocated VRAM.
        \param[in] width Width of the surface(s)
        \param[in] height Height of the surface(s)
        \param[in] bit_red Bits for the red channel of the surface(s)
        \param[in] bit_green Bits for the green channel of the surface(s)
        \param[in] bit_blue Bits for the blue channel of the surface(s)
        \param[in] bit_alpha Bits for the alpha channel of the surface(s)
        \retval CYGFX_OK on success; the related error code otherwise.
    */
    virtual CYGFX_ERROR CreateBuffer(const CYGFX_U32 width, const CYGFX_U32 height,
        CYGFX_U32 bit_red, CYGFX_U32 bit_green, CYGFX_U32 bit_blue, CYGFX_U32 bit_alpha);
    /** The CreateGrayBuffer function can be used set up the member surface object(s)
        with the allocated VRAM.
        \param[in] width Width of the surface(s)
        \param[in] height Height of the surface(s)
        \param[in] bit_color Common bits for the red, green, and blue channels of the surface(s)
        \param[in] bit_alpha Bits for the alpha channel of the surface(s)
        \retval CYGFX_OK on success; the related error code otherwise.
        \note This Function may not work for the JPEG driver
    */
    virtual CYGFX_ERROR CreateGrayBuffer(const CYGFX_U32 width, const CYGFX_U32 height,
        CYGFX_U32 bit_color, CYGFX_U32 bit_alpha);
    /** The SurfLoadBitmap function initializes the surface object, and frees up the allocated memory
        and uses the ::utSurfLoadBitmapEx function to read a bitmap structure and set the related surface attributes.
        \param[in] pImage Pointer to the image
        \param[in] bCopyToVRAM CYGFX_TRUE if the bitmap and color look up table memory should be copied into VRAM
        \param[in] region Region of the surface for the HW upload
        \param[in] id ID of the surface. \note bCopyToVRAM must be identical for all sub surfaces.
        \retval CYGFX_OK on success; the related error code otherwise.
        \note This Function may not work for the JPEG driver.
    */
    virtual CYGFX_ERROR SurfLoadBitmap(const void *pImage, CYGFX_BOOL bCopyToVRAM = CYGFX_FALSE, CYGFX_PALETTE_REGION region = CYGFX_PALETTE_REGION_ALL, CYGFX_U32 id = 0);
    /** Copies the given surface object to the internal buffer.
        \note This function copies the properties only, not the surface content.

        \param[in] surface Surface that should be copied
        \retval CYGFX_OK on success; the related error code otherwise .
    */
    virtual CYGFX_ERROR Copy(CYGFX_SURFACE surface);
    /** Gets the surface width
        \retval CYGFX_S32 Surface width
    */
    CYGFX_S32 GetWidth()  { return utSurfWidth(GetHandle()); }
    /** Gets the surface height
        \retval CYGFX_S32 Surface height
    */
    CYGFX_S32 GetHeight() { return utSurfHeight(GetHandle()); }
    /** Returns whether the surface object owns the memory of the surfaces.
        \note Some member functions like CreateBuffer() allocate VRAM; other functions
              like Copy() only point to a memory buffer.
        \retval CYGFX_TRUE if the surface owns the buffer; CYGFX_FALSE otherwise.
    */
    CYGFX_BOOL HasBuffer(){return m_bHasBuffer;}
    /** Gets the (foreground) surfaces.
        \retval CYGFX_SURFACE Surface object
    */
    CYGFX_SURFACE GetSurface(){return &m_buffer[m_bufferIdx];}
    /** Gets the (foreground) surfaces.
        \retval CYGFX_SURFACE Surface object
    */
    CYGFX_SURFACE GetHandle(){return GetSurface();}
    /** Gets the (foreground) surfaces.
        \retval CYGFX_SURFACE Surface object
    */
    operator CYGFX_SURFACE() {return GetSurface();}
    /** Gets the number of surfaces in the class object.
        \retval CYGFX_U32 Number of surfaces in the class object
    */
    CYGFX_U32 GetBufferCnt() {return NUM_BUFFERS;}
    /** Gets a dedicated surface.
        \param[in] id Index of the surface stored in the internal buffer.
        \retval CYGFX_SURFACE Surface object
    */
    CYGFX_SURFACE GetSurface(int id){return &m_buffer[id%NUM_BUFFERS];}
    /** Gets the current index.
        \retval CYGFX_U32 Current index
    */
    CYGFX_U32 GetIndex(){return m_bufferIdx;}
    /** Toggles the foreground and background buffers.
        \retval CYGFX_OK on success; the related error code otherwise.
    */
    void Swap() {m_bufferIdx = (m_bufferIdx + 1)%NUM_BUFFERS; }
protected:
    /** CYGFX_SURFACE_OBJECT_S object(s) used to describe the buffers(s) */
    CYGFX_SURFACE_OBJECT_S     m_buffer[NUM_BUFFERS];
    /** Index of the current render buffer */
    CYGFX_U32                        m_bufferIdx;
    /** CYGFX_TRUE if the buffer was allocated in this class. In this case, the destructor must free the memory. */
    CYGFX_BOOL				          m_bHasBuffer;
};

template<CYGFX_U32 NUM_BUFFERS>
void CSurface<NUM_BUFFERS>::Init()
{
    m_bufferIdx = 0;
    m_bHasBuffer = CYGFX_FALSE;
    for (CYGFX_U32 i = 0; i < NUM_BUFFERS; i++)
    {
        CyGfx_SmResetSurfaceObject(&m_buffer[i]);
    }
}

template<CYGFX_U32 NUM_BUFFERS>
CYGFX_ERROR CSurface<NUM_BUFFERS>::Delete()
{
    CYGFX_ERROR ret = CYGFX_OK;

    for (CYGFX_U32 i=0; i<NUM_BUFFERS; i++)
    {
        /* Check if memory was allocated with or without request by this object. */
        if (m_bHasBuffer)
            utSurfDeleteBuffer(&m_buffer[i]);
        CyGfx_SmResetSurfaceObject(&m_buffer[i]);
    }
    m_bHasBuffer = CYGFX_FALSE;
    return ret;
}

template<CYGFX_U32 NUM_BUFFERS>
CYGFX_ERROR CSurface<NUM_BUFFERS>::ClearBuffer()
{
    CYGFX_ERROR ret = CYGFX_OK;
    CYGFX_BE_CONTEXT_OBJECT_S ctx;

    CyGfx_BeResetContext(&ctx);
    CyGfx_BeSetAttribute(&ctx, CYGFX_BE_CTX_ATTR_COLOR, 0);
    for (CYGFX_U32 i=0; i<NUM_BUFFERS; i++)
    {
        UTIL_SUCCESS(ret, CyGfx_BeBindSurface(&ctx, CYGFX_BE_TARGET_STORE , &m_buffer[i]));
        UTIL_SUCCESS(ret, CyGfx_BeFill(&ctx, 0, 0, GetWidth(), GetHeight()));
        UTIL_SUCCESS(ret, CyGfx_BeFinish(&ctx));
    }
    return ret;
}

template<CYGFX_U32 NUM_BUFFERS>
CYGFX_ERROR CSurface<NUM_BUFFERS>::CreateBuffer(const CYGFX_U32 width, const CYGFX_U32 height, const CYGFX_SM_FORMAT format, CYGFX_U32 MaxSize)
{
    CYGFX_ERROR ret = CYGFX_OK;
    Init();
    for (CYGFX_U32 i=0; i<NUM_BUFFERS; i++)
    {
        if (MaxSize == 0)
        {
            UTIL_SUCCESS(ret, utSurfCreateBuffer(&m_buffer[i], width, height, format));
        }
        else
        {
            UTIL_SUCCESS(ret, utSurfCreateCompressedBufferBySize(&m_buffer[i], width, height, format, MaxSize / NUM_BUFFERS));
        }
    }
    if (ret == CYGFX_OK)
    {
        m_bHasBuffer = CYGFX_TRUE;
    }
    UTIL_SUCCESS(ret, ClearBuffer());
    return ret;
}

template<CYGFX_U32 NUM_BUFFERS>
CYGFX_ERROR CSurface<NUM_BUFFERS>::CreateBuffer(const CYGFX_U32 width, const CYGFX_U32 height, CYGFX_U32 bit_red, CYGFX_U32 bit_green, CYGFX_U32 bit_blue, CYGFX_U32 bit_alpha)
{
    CYGFX_ERROR ret = CYGFX_OK;
    CYGFX_U32 size;
    CYGFX_U32 bpp = bit_red + bit_green + bit_blue + bit_alpha;
    Init();
    if (bpp > 32)
    {
        return CYGFX_ERR;
    }
    CYGFX_U32 bits =  (bit_red<<24) | (bit_green<<16) | (bit_blue<<8) | bit_alpha;
    CYGFX_U32 shift = ((bit_green + bit_blue + bit_alpha)<<24) | ((bit_blue + bit_alpha)<<16) | ((bit_alpha)<<8);
    for (CYGFX_U32 i=0; i<NUM_BUFFERS; i++)
    {
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_WIDTH, width));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_HEIGHT, height));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_BITPERPIXEL, bpp));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_COLORBITS, bits));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_COLORSHIFT, shift));
        UTIL_SUCCESS(ret, CyGfx_SmGetAttribute(&m_buffer[i], CYGFX_SM_ATTR_SIZEINBYTES, &size));
        /* use 32 byte alignment to avoid cache problem in TLM tests */
        void* p = utVideoAlloc( size, 32, 0 );
        if (p == NULL)
        {
            return CYGFX_ERR;
        }
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_VIRT_ADDRESS, (CYGFX_U32)p));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_USERDEFINED, UTIL_SM_USERDEFINED_VRAM));
    }
    UTIL_SUCCESS(ret, ClearBuffer());
    if (ret == CYGFX_OK)
    {
        m_bHasBuffer = CYGFX_TRUE;
    }
    return ret;
}

template<CYGFX_U32 NUM_BUFFERS>
CYGFX_ERROR CSurface<NUM_BUFFERS>::CreateGrayBuffer(const CYGFX_U32 width, const CYGFX_U32 height, CYGFX_U32 bit_color, CYGFX_U32 bit_alpha)
{
    CYGFX_ERROR ret = CYGFX_OK;
    CYGFX_U32 size;
    CYGFX_U32 bpp = bit_color + bit_alpha;
    Init();
    if (bpp > 32)
    {
        return CYGFX_ERR;
    }
    CYGFX_U32 bits =  (bit_color<<24) + (bit_color<<16) + (bit_color<<8) + bit_alpha;
    CYGFX_U32 shift = bit_color;
    for (CYGFX_U32 i=0; i<NUM_BUFFERS; i++)
    {
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_WIDTH, width));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_HEIGHT, height));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_BITPERPIXEL, bpp));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_COLORBITS, bits));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_COLORSHIFT, shift));
        UTIL_SUCCESS(ret, CyGfx_SmGetAttribute(&m_buffer[i], CYGFX_SM_ATTR_SIZEINBYTES, &size));
        void* p = utVideoAlloc( size, 8, 0 );
        if (p == NULL)
        {
            return CYGFX_ERR;
        }
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_VIRT_ADDRESS, (CYGFX_U32)p));
        UTIL_SUCCESS(ret, CyGfx_SmSetAttribute(&m_buffer[i], CYGFX_SM_ATTR_USERDEFINED, UTIL_SM_USERDEFINED_VRAM));
    }
    UTIL_SUCCESS(ret, ClearBuffer());
    if (ret == CYGFX_OK)
    {
        m_bHasBuffer = CYGFX_TRUE;
    }
    return ret;
}

template<CYGFX_U32 NUM_BUFFERS>
CYGFX_ERROR CSurface<NUM_BUFFERS>::SurfLoadBitmap(const void *pImage, CYGFX_BOOL bCopyToVRAM, CYGFX_PALETTE_REGION region, CYGFX_U32 id)
{
    CYGFX_ERROR ret = CYGFX_OK;
    CYGFX_U32   attr;

    Delete();
    Init();
    UTIL_SUCCESS(ret, utSurfLoadBitmapEx(GetSurface(id), pImage, bCopyToVRAM, region));

    if (ret == CYGFX_OK)
    {
        m_bHasBuffer = bCopyToVRAM;
        (void) CyGfx_SmGetAttribute(GetSurface(),CYGFX_SM_ATTR_USERDEFINED,&attr);
        if ((attr & (UTIL_SM_USERDEFINED_VRAM | UTIL_SM_USERDEFINED_FLASH)) != 0)
        {
           m_bHasBuffer = CYGFX_TRUE;
        }
    }
    return ret;
}

template<CYGFX_U32 NUM_BUFFERS>
CYGFX_ERROR CSurface<NUM_BUFFERS>::Copy(CYGFX_SURFACE surface)
{
    if (surface == NULL)
        return CYGFX_ERR;
    Delete();
    memcpy(&m_buffer[0], surface, sizeof(CYGFX_SURFACE_OBJECT_S));
    return CYGFX_OK;
}

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
