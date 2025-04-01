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
    \file        ut_class_menu.h
    \brief       This class realizes a simple menu.
*/

#pragma once

#include "de_util.h"

#define ITEM_FLAG_ISCHECKED   (0x400)

static CYGFX_ERROR CyGfx_BeBlendFuncEx(CYGFX_BE_CONTEXT ctx,  CYGFX_BE_BF func_color_src, CYGFX_BE_BF func_color_dst,
    CYGFX_BE_BF func_alpha_src, CYGFX_BE_BF func_alpha_dst)
{
    return CyGfx_BeBlendFunc(ctx,
        func_color_src, func_color_dst,
        func_color_src, func_color_dst,
        func_color_src, func_color_dst,
        func_alpha_src, func_alpha_dst);
}
static CYGFX_ERROR CyGfx_BeBlendModeEx(CYGFX_BE_CONTEXT ctx, CYGFX_BE_BM mode_color, CYGFX_BE_BM mode_alpha)
{
    return CyGfx_BeBlendMode(ctx, mode_color, mode_color, mode_color, mode_alpha);
}

static CYGFX_ERROR utDeDrawArrow(CYGFX_BE_CONTEXT ctx, CYGFX_S32 x, CYGFX_S32 y, CYGFX_U32 item_height)
{
    CYGFX_ERROR ret = CYGFX_OK;
    static const CYGFX_U08 PathSegment[] = {CYGFX_DE_INSTR_MOVE_TO_ABS, CYGFX_DE_INSTR_LINE_TO_ABS, CYGFX_DE_INSTR_LINE_TO_ABS, CYGFX_DE_INSTR_CLOSE_PATH};
    static const CYGFX_S32 values[6] = {0, (1<<6)/3,   0, (1<<6)*2/3,  (1<<6)/3, (1<<6)/2};
    Mat3x2 mat;
    utMat3x2LoadIdentity(mat);
    utMat3x2Scale(mat, (float)item_height, (float)item_height);
    UTIL_SUCCESS(ret, CyGfx_BeSetGeoMatrix(ctx, CYGFX_BE_TARGET_MASK, CYGFX_BE_GEO_MATRIX_FORMAT_3X2, mat));
    UTIL_SUCCESS(ret, CyGfx_DeSetAttribute(ctx, CYGFX_DE_ATTR_DATA_FORMAT, CYGFX_DE_DATA_FORMAT_S16_6));
    UTIL_SUCCESS(ret, CyGfx_DeAppendPathData(ctx, 4, PathSegment, values));
    UTIL_SUCCESS(ret, CyGfx_DeDraw(ctx, (float)x, (float)y));
    UTIL_SUCCESS(ret, CyGfx_BeSetGeoMatrix(ctx, CYGFX_BE_TARGET_MASK, CYGFX_BE_GEO_MATRIX_FORMAT_3X2, 0));
    return ret;
}

static CYGFX_ERROR utDeDrawCheckBox(CYGFX_BE_CONTEXT ctx, CYGFX_S32 x, CYGFX_S32 y, CYGFX_U32 item_height, CYGFX_U32 nFlag)
{
    CYGFX_ERROR ret = CYGFX_OK;
    Mat3x2 mat;
    utMat3x2LoadIdentity(mat);
    utMat3x2Scale(mat, (float)item_height * 2 / 3, (float)item_height * 2 / 3);
    UTIL_SUCCESS(ret, CyGfx_BeSetGeoMatrix(ctx, CYGFX_BE_TARGET_MASK, CYGFX_BE_GEO_MATRIX_FORMAT_3X2, mat));
    static const CYGFX_CHAR *szCheckBox =
         "M 0.87817927,0.08217736 0.87896411,0.88242231 0.08416032,0.88143284 0.08352627,0.47863363 0.08289221,0.07583443"
         "0.00941405,0.08035031 0.01109585,0.95468469 0.955648,0.95887931 0.95528992,0.00633743 0.01483866,0.00918243 "
         "0.00941407,0.08035228 0.44379786,0.08126607 z";
       UTIL_SUCCESS(ret, utDeDrawForm(ctx, (CYGFX_FLOAT)x, (CYGFX_FLOAT)y, szCheckBox));

    if ((nFlag & ITEM_FLAG_ISCHECKED) != 0)
    {
        static const CYGFX_CHAR *szCheckBoxSel =
            "M 0.56397098,0.48342995 C 0.74908478,0.94168525 1.1043311,1.2008603 1.1305079,1.1072701 0.76713868,0.64412275"
            "0.72947998,0.27136095 0.68303788,0.20849266 c -0.0367983,-0.0498141 -0.2416992,0.00657 -0.3501572,0.0960831"
            "-0.108458,0.0895123 -0.2214143,0.128071 -0.1996597,0.1628608 0.0197411,0.031568 0.0751355,0.13015"
            "0.19107,0.0548851 0.1159341,-0.0752657 0.2202259,-0.0761506 0.23968,-0.0388917 z";
       UTIL_SUCCESS(ret, utDeDrawForm(ctx, (CYGFX_FLOAT)x, (CYGFX_FLOAT)y, szCheckBoxSel));
    }

    UTIL_SUCCESS(ret, CyGfx_BeSetGeoMatrix(ctx, CYGFX_BE_TARGET_MASK, CYGFX_BE_GEO_MATRIX_FORMAT_3X2, 0));
    return ret;
}
static CYGFX_ERROR utDeDrawRadio(CYGFX_BE_CONTEXT ctx, CYGFX_S32 x, CYGFX_S32 y, CYGFX_U32 item_height, CYGFX_U32 nFlag)
{
    CYGFX_ERROR ret = CYGFX_OK;
    Mat3x2 mat;
    utMat3x2LoadIdentity(mat);
    utMat3x2Scale(mat, (float)item_height * 2 / 3, (float)item_height * 2 / 3);
    UTIL_SUCCESS(ret, CyGfx_BeSetGeoMatrix(ctx, CYGFX_BE_TARGET_MASK, CYGFX_BE_GEO_MATRIX_FORMAT_3X2, mat));
    static const CYGFX_CHAR *szRadio=
        "M 0.0, 0.5 Q 0.0, 1.0, 0.5, 1.0 Q 1.0, 1.0, 1.0, 0.5 Q 1.0, 0.0, 0.5, 0.0 Q 0.0, 0.0, 0.0, 0.5 Z"
        "M 0.1, 0.5 Q 0.1, 0.9, 0.5, 0.9 Q 0.9, 0.9, 0.9, 0.5 Q 0.9, 0.1, 0.5, 0.1 Q 0.1, 0.1, 0.1, 0.5 Z";
    UTIL_SUCCESS(ret, utDeDrawForm(ctx, (CYGFX_FLOAT)x, (CYGFX_FLOAT)y, szRadio));

    if ((nFlag & ITEM_FLAG_ISCHECKED) != 0)
    {
        static const CYGFX_CHAR *szRadioSel =
            "M 0.2, 0.5 Q 0.2, 0.8, 0.5, 0.8 Q 0.8, 0.8, 0.8, 0.5 Q 0.8, 0.2, 0.5, 0.2 Q 0.2, 0.2, 0.2, 0.5 Z";
        UTIL_SUCCESS(ret, utDeDrawForm(ctx, (CYGFX_FLOAT)x, (CYGFX_FLOAT)y, szRadioSel));
    }

    UTIL_SUCCESS(ret, CyGfx_BeSetGeoMatrix(ctx, CYGFX_BE_TARGET_MASK, CYGFX_BE_GEO_MATRIX_FORMAT_3X2, 0));
    return ret;
}

static CYGFX_ERROR utDeDrawBorder(CYGFX_BE_CONTEXT ctx, CYGFX_S32 x, CYGFX_S32 y, CYGFX_S32 w, CYGFX_S32 h, CYGFX_S32 r)
{
    CYGFX_ERROR ret = CYGFX_OK;
    static const CYGFX_U08 PathSegment[] = {CYGFX_DE_INSTR_MOVE_TO_ABS,
        CYGFX_DE_INSTR_LINE_TO_ABS, CYGFX_DE_INSTR_QUAD_TO_ABS,
        CYGFX_DE_INSTR_LINE_TO_ABS, CYGFX_DE_INSTR_QUAD_TO_ABS,
        CYGFX_DE_INSTR_LINE_TO_ABS, CYGFX_DE_INSTR_QUAD_TO_ABS,
        CYGFX_DE_INSTR_LINE_TO_ABS, CYGFX_DE_INSTR_QUAD_TO_ABS,
        CYGFX_DE_INSTR_CLOSE_PATH
    };
    CYGFX_S32 values[] = {0, r,
        0, h-r,  0, h,  r, h,
        w-r, h,  w, h,  w, h-r,
        w, r,  w, 0,  w-r, 0,
        r, 0,  0, 0,  0, r
    };
    UTIL_SUCCESS(ret, CyGfx_DeSetAttribute(ctx, CYGFX_DE_ATTR_DATA_FORMAT, CYGFX_DE_DATA_FORMAT_S32));
    UTIL_SUCCESS(ret, CyGfx_DeAppendPathData(ctx, sizeof(PathSegment)/sizeof(PathSegment[0]), PathSegment, values));
    UTIL_SUCCESS(ret, CyGfx_DeDraw(ctx, (float)x, (float)y));
    return ret;
}

/** This class defines a menu item for the class CMenu. */
class CMenuItem
{
    friend class CMenu;

private:
    CMenuItem *m_pSubItem;
    CMenuItem *m_pNextItem;
    CYGFX_U32 m_id;
    CYGFX_U32 m_flag;
    CYGFX_U16 m_width; /* This member will be filled for the top item only, and contains the column width. */
    CYGFX_U08 m_nTextOffset; /* This member contains the text offset for this column. */
    CYGFX_U08 m_height; /* This member will be filled for the top item only, and contains the column height. */

    const wchar_t *m_pszString;
    enum MENU_ITEM_FLAG
    {
        MENU_ITEM_FLAG_VISIBLE = 0x1000,
        MENU_ITEM_FLAG_FOCUS = 0x2000,
        MENU_ITEM_FLAG_CHECKBOX = 0x100,
        MENU_ITEM_FLAG_RADIO = 0x200,
        MENU_ITEM_FLAG_ISCHECKED = 0x400
    };
    enum MENU_ITEM_FIND
    {
        MENU_ITEM_FIND_UP,
        MENU_ITEM_FIND_DOWN,
        MENU_ITEM_FIND_TOP,
        MENU_ITEM_FIND_BOTTOM,
        MENU_ITEM_FIND_PARENT,
        MENU_ITEM_FIND_SELECTED
    };
    CMenuItem(CYGFX_U32 id, CYGFX_U32 flag, const wchar_t *pszString):
      m_flag(flag),m_id(id),m_pSubItem(NULL),m_pNextItem(NULL)
    {
        m_pszString = pszString;
    }
    ~CMenuItem()
    {
        if (m_pSubItem != NULL)
            delete m_pSubItem;
        if (m_pNextItem != NULL)
            delete m_pNextItem;
    }
    const wchar_t *GetString(){return m_pszString;}

};

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_classes
\{ */

/** \addtogroup CMenu CMenu
    The classes in this group realize a simple menu. It can be used with a VIDEOSS display layer for demo applications
    to allow selections, switches, and similar operations with a minimum of keys.

    Sample code:
    \code
    CMenu menu;

    menu.Open(display, 0, 0, 320, 240, CYGFX_DISP_LAYER_4, CYGFX_DISP_SUB_LAYER_DEFAULT, 0,
        CYGFX_WIN_BLEND_SOURCE_ALPHA | CYGFX_WIN_BLEND_SOURCE_MULTIPLY_ALPHA);
    menu.InitMenu(Font_ttf, sizeof(Font_ttf), 16);

    menu.Insert(0, MENU_LL, CMenu::MENU_FLAG_CHECKBOX , L"This is a check box menu");
    menu.Insert(MENU_LL, MENU_FONT, 0, L"Font");
    menu.Insert(MENU_FONT + 0, MENU_FONT + 1,  CMenu::MENU_FLAG_POPUP | CMenu::MENU_FLAG_RADIO | CMenu::MENU_FLAG_ISCHECKED, L"Font 1");
    menu.Insert(MENU_FONT + 2, MENU_FONT + 2 + 1,  CMenu::MENU_FLAG_RADIO , L"Font 2");

    while(bRunning)
    {
        key = menu.HandleKey(GetLastKeyStroke());
        switch(key()
        {
            ...
        }
        menu.Draw();

        //draw other things
        ...
    }
    \endcode

\{ */


/** Class CMenu (see \ref CMenu)*/
class CMenu : public CTextWindow<2>
{
private:
    CYGFX_U08 m_nRadius;
    CMenuItem *m_pBaseItem;
    CYGFX_U32 m_nBorder;
    CYGFX_BOOL m_bNeedUpdate;
public:
    /** Defines some menu types and states. */
    enum MENU_FLAG
    {
        MENU_FLAG_POPUP = 1, /**< Popup menu entry */
        MENU_FLAG_CHECKBOX = CMenuItem::MENU_ITEM_FLAG_CHECKBOX, /**< Menu item with check box */
        MENU_FLAG_RADIO = CMenuItem::MENU_ITEM_FLAG_RADIO, /**< Menu item with radio button */
        MENU_FLAG_ISCHECKED = CMenuItem::MENU_ITEM_FLAG_ISCHECKED /**< Menu item is checked */
    };
    /** Defines key types. */
    enum MENU_KEYS
    {
        MENU_KEY_ENTER = 0x10000000, /**< Enter (select) key */
        MENU_KEY_UP = 0x10000001, /**< Up key */
        MENU_KEY_DOWN = 0x10000002, /**< Down key */
        MENU_KEY_LEFT = 0x10000003,  /**< Left key */
        MENU_KEY_RIGHT = 0x10000004 /**< Right key */
    };
public:
    CMenu():m_nRadius(0),m_pBaseItem(NULL),m_nBorder(8),m_bNeedUpdate(CYGFX_FALSE){}
    ~CMenu(){Close();}
    /** Unsupported base class method */
    virtual CYGFX_ERROR SetText(const wchar_t *pszString){return CYGFX_ERR;}
    /** Initialize the menu
        \param[in] Font Defines the TrueType font for the menu (if size_of_font == 0, it defines the location in the file system;
            if size_of_font != 0, it is the pointer to the font buffer with a size of size_of_font.
        \param[in] size_of_font See the font parameter.
        \param[in] font_height Defines the requested font height in pixels
        \param[in] draw_ctx Initialized draw context object
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    CYGFX_ERROR  InitMenu(const void *Font, CYGFX_U32 size_of_font, CYGFX_U32 font_height, CYGFX_BE_CONTEXT draw_ctx = 0)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (m_surface.HasBuffer() == CYGFX_FALSE)
        {
            UTIL_SUCCESS(ret, CreateGrayBuffer(3, 1));
        }
        UTIL_SUCCESS(ret, InitTextWindow(Font, size_of_font, font_height, 0xffffffff, 0, draw_ctx));
        UTIL_SUCCESS(ret, CyGfx_BeSetAttribute(m_ctx, CYGFX_BE_CTX_ATTR_GAMMA, CYGFX_BE_GAMMA_CORRECTED));
        /* Drawing is supported only in IBO mode. All render operations (Fills and Draw) should be in the same mode (IBO mode) to keep the efficiency. */
        UTIL_SUCCESS(ret, CyGfx_BeSetAttribute(m_ctx, CYGFX_BE_CTX_ATTR_RENDER_MODE, CYGFX_BE_RENDER_MODE_IBO));
        return ret;
    }
    /** Close the menu */
    virtual CYGFX_ERROR Close()
    {
        if (m_pBaseItem != NULL)
            delete m_pBaseItem;
        m_pBaseItem = NULL;
        return CTextWindow<2>::Close();
    }
    /** Inserts a menu item to the menu.
        \param[in] old_id ID of the parent menu item, or 0 if it is the root item.
            (Only one root item must be defined.)
        \param[in] id ID of the inserted menu item
        \param[in] flags One or more "ORed" MENU_FLAGs
        \param[in] pszString Menu item string
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    CYGFX_ERROR Insert(CYGFX_U32 old_id, CYGFX_U32 id, CYGFX_U32 flags, const wchar_t *pszString)
    {
        CYGFX_ERROR ret = CYGFX_OK;

        if (old_id  == 0)
        {
            if (m_pBaseItem != NULL) /* Allowed only for the first entry */
            {
                return CYGFX_ERR;
            }
            m_pBaseItem = new CMenuItem(id, flags, pszString);
            if (m_pBaseItem == NULL)
            {
                return CYGFX_ERR;
            }
            UTIL_SUCCESS(ret, CalcColumnSize(m_pBaseItem, m_pBaseItem->m_width, m_pBaseItem->m_nTextOffset, m_pBaseItem->m_height));
            return ret;
        }
        CMenuItem* pOld = Find(old_id, m_pBaseItem);
        if (pOld == NULL)
            return CYGFX_ERR;
        CMenuItem* pNew = new CMenuItem(id, flags, pszString);
        if (pNew == NULL)
            return CYGFX_ERR;
        if ((flags & MENU_FLAG_POPUP) != 0)
            pOld->m_pSubItem = pNew;
        else
            pOld->m_pNextItem = pNew;

        /* Rechecks the parent first because the size may have changed by the arrow. */
        CMenuItem *pTop = FindNext(m_pBaseItem, pOld, CMenuItem::MENU_ITEM_FIND_TOP);
        if (pTop == NULL)
            pTop = pOld;
        if (pTop)
        {
            UTIL_SUCCESS(ret, CalcColumnSize(pTop, pTop->m_width, pTop->m_nTextOffset, pTop->m_height));
        }
        /* Now, update the size for the submenu. */
        pTop = FindNext(m_pBaseItem, pNew, CMenuItem::MENU_ITEM_FIND_TOP);
        if (pTop == NULL)
            pTop = pNew;
        UTIL_SUCCESS(ret, CalcColumnSize(pTop, pTop->m_width, pTop->m_nTextOffset, pTop->m_height));
        m_bNeedUpdate = CYGFX_TRUE;

        return ret;
    }
    /** Searches for a menu item in the menu.
        \param[in] id ID of the menu item to find
        \param[in] pBase Base menu item to start the search
        \retval CMenuItem* The menu item on success; NULL otherwise.
    */
    CMenuItem* Find(CYGFX_U32 id, CMenuItem* pBase)
    {
        if (pBase == NULL)
            return NULL;

        if (pBase->m_id == id) return pBase;
        CMenuItem *pRet;
        pRet = Find(id, pBase->m_pNextItem);
        if (pRet != NULL) return pRet;
        pRet = Find(id, pBase->m_pSubItem);
        if (pRet != NULL) return pRet;
        return NULL;
    }
    /** Finds the current selected menu item.
        \param[in] pBase Base menu item to start the search
        \retval CMenuItem* Menu item on success; NULL otherwise.
    */
    CMenuItem* FindSelected(CMenuItem* pBase)
    {
        if (pBase == NULL)
            return NULL;

        if ((pBase->m_flag & CMenuItem::MENU_ITEM_FLAG_FOCUS) != 0)
            return pBase;
        CMenuItem *pRet;
        pRet = FindSelected(pBase->m_pNextItem);
        if (pRet != NULL) return pRet;
        pRet = FindSelected(pBase->m_pSubItem);
        if (pRet != NULL) return pRet;
        return NULL;
    }
    /** Searches for a menu item in the menu.
        \param[in] pBase Base menu item to start the search
        \param[in] pSearch Reference menu item for the search
        \param[in] find Relationship of the new item related to pSearch
        \retval CMenuItem* Menu item on success; NULL otherwise.
    */
    CMenuItem* FindNext(CMenuItem* pBase, CMenuItem* pSearch, CMenuItem::MENU_ITEM_FIND find)
    {
        if (pBase == NULL)
            return NULL;

        switch(find)
        {
        case CMenuItem::MENU_ITEM_FIND_UP:
            if (pSearch == pBase)
                return NULL;
            if (pSearch == pBase->m_pNextItem)
                return pBase;
            break;
        case CMenuItem::MENU_ITEM_FIND_DOWN:
            return pSearch->m_pNextItem;
        case CMenuItem::MENU_ITEM_FIND_TOP:
            {
                if(pBase == pSearch)
                    return pBase;

                CMenuItem* pTmp = pBase;
                while (pTmp->m_pNextItem)
                {
                    pTmp = pTmp->m_pNextItem;
                    if (pSearch == pTmp)
                        return pBase;
                }
            }
            break;
        case CMenuItem::MENU_ITEM_FIND_BOTTOM:
            if (pSearch->m_pNextItem == NULL)
                return NULL;
            while (pSearch->m_pNextItem != NULL)
            {
                pSearch = pSearch->m_pNextItem;
            }
            return pSearch;
        case CMenuItem::MENU_ITEM_FIND_PARENT:
            if (pSearch == pBase->m_pSubItem)
                return pBase;
            break;
        case CMenuItem::MENU_ITEM_FIND_SELECTED:
            if ((pBase->m_flag & CMenuItem::MENU_ITEM_FLAG_FOCUS) != 0)
                return pBase;
            break;
        }

        CMenuItem *pRet;
        pRet = FindNext(pBase->m_pNextItem, pSearch, find);
        if (pRet != NULL) return pRet;
        pRet = FindNext(pBase->m_pSubItem, pSearch, find);
        if (pRet != NULL) return pRet;
        return NULL;
    }
    /** Reports if the menu is visible.
        \retval CYGFX_TRUE if the menu currently shows any item; CYGFX_FALSE if the menu is not visible
    */
    CYGFX_BOOL IsOpen()
    {
        return (FindSelected(m_pBaseItem) != 0)?CYGFX_TRUE:CYGFX_FALSE;
    }
    /** Processes the key press input: For example, select the lower menu item if the down key was pressed.
        \param[in] key
        \retval CYGFX_U32 The function returns as follows:
        - the original key code if no action inside the menu was processed
        - 0 if an action was processed (e.g., selection changed)
        - or the selected menu item id if the menu was opened and the Enter key was pressed
    */
    CYGFX_U32 HandleKey(CYGFX_U32 key)
    {
        CYGFX_U32 ret = 0;
        CYGFX_BOOL bNeedUpdate = m_bNeedUpdate;
        m_bNeedUpdate = CYGFX_TRUE;
        CMenuItem* pSel = FindSelected(m_pBaseItem);
        switch (key)
        {
            case MENU_KEY_ENTER:
                if (pSel == 0)
                    m_pBaseItem->m_flag |= CMenuItem::MENU_ITEM_FLAG_FOCUS | CMenuItem::MENU_ITEM_FLAG_VISIBLE;
                else
                {
                    /* Handle it like right key if it has a sub-menu */
                    if (pSel->m_pSubItem != NULL)
                    {
                        pSel->m_flag &= ~(CMenuItem::MENU_ITEM_FLAG_FOCUS);
                        pSel->m_pSubItem->m_flag |= CMenuItem::MENU_ITEM_FLAG_FOCUS | CMenuItem::MENU_ITEM_FLAG_VISIBLE;
                    }
                    else
                    {
                        ret = pSel->m_id;
                        /* Deselect all radio buttons in the column */
                        CMenuItem* pTmp = FindNext(m_pBaseItem, pSel, CMenuItem::MENU_ITEM_FIND_TOP);
                        while(pTmp)
                        {
                            if ((pTmp->m_flag & CMenuItem::MENU_ITEM_FLAG_RADIO) != 0)
                            {
                                pTmp->m_flag &= ~CMenuItem::MENU_ITEM_FLAG_ISCHECKED;
                            }
                            pTmp = pTmp->m_pNextItem;
                        }
                        /* Select this item if it is a radio button or checkbox */
                        if ((pSel->m_flag & (CMenuItem::MENU_ITEM_FLAG_RADIO | CMenuItem::MENU_ITEM_FLAG_CHECKBOX)) != 0)
                        {
                            if ((pSel->m_flag & CMenuItem::MENU_ITEM_FLAG_ISCHECKED) != 0)
                            {
                                pSel->m_flag &= ~CMenuItem::MENU_ITEM_FLAG_ISCHECKED;
                            }
                            else
                            {
                                pSel->m_flag |= CMenuItem::MENU_ITEM_FLAG_ISCHECKED;
                            }
                        }
                        while (pSel)
                        {
                            pSel->m_flag &= ~(CMenuItem::MENU_ITEM_FLAG_FOCUS | CMenuItem::MENU_ITEM_FLAG_VISIBLE);
                            CMenuItem* pTop = FindNext(m_pBaseItem, pSel, CMenuItem::MENU_ITEM_FIND_TOP);
                            if (pTop != NULL)
                                pSel = pTop;
                            if (pSel)
                            {
                                pSel->m_flag &= ~(CMenuItem::MENU_ITEM_FLAG_FOCUS | CMenuItem::MENU_ITEM_FLAG_VISIBLE);
                                pSel = FindNext(m_pBaseItem, pSel, CMenuItem::MENU_ITEM_FIND_PARENT);
                            }
                        }
                    }
                }
                break;
            case MENU_KEY_UP: /* up */
                if (pSel != 0)
                {
                    CMenuItem* pTmp = FindNext(m_pBaseItem, pSel, CMenuItem::MENU_ITEM_FIND_UP);
                    if (pTmp == 0)
                        pTmp = FindNext(m_pBaseItem, pSel, CMenuItem::MENU_ITEM_FIND_BOTTOM);
                    if (pTmp != 0)
                    {
                        pSel->m_flag &= ~(CMenuItem::MENU_ITEM_FLAG_FOCUS);
                        pTmp->m_flag |= CMenuItem::MENU_ITEM_FLAG_FOCUS;
                    }
                }
                else
                    ret = key;
                break;
            case MENU_KEY_LEFT: /* left */
                if (pSel != 0)
                {
                    CMenuItem* pTmp = FindNext(m_pBaseItem, pSel, CMenuItem::MENU_ITEM_FIND_TOP);
                    if (pTmp == NULL)
                        pTmp = pSel;
                    pTmp->m_flag &= ~(CMenuItem::MENU_ITEM_FLAG_VISIBLE);
                    pTmp = FindNext(m_pBaseItem, pTmp, CMenuItem::MENU_ITEM_FIND_PARENT);
                    if (pTmp != 0)
                    {
                        pSel->m_flag &= ~(CMenuItem::MENU_ITEM_FLAG_FOCUS | CMenuItem::MENU_ITEM_FLAG_VISIBLE);
                        pTmp->m_flag |= CMenuItem::MENU_ITEM_FLAG_FOCUS;
                    }
                }
                else
                    ret = key;
                break;
            case MENU_KEY_RIGHT: /* right */
                if (pSel != 0)
                {
                    if (pSel->m_pSubItem != NULL)
                    {
                        pSel->m_flag &= ~(CMenuItem::MENU_ITEM_FLAG_FOCUS);
                        pSel->m_pSubItem->m_flag |= CMenuItem::MENU_ITEM_FLAG_FOCUS | CMenuItem::MENU_ITEM_FLAG_VISIBLE;
                    }
                }
                else
                    ret = key;
                break;
            case MENU_KEY_DOWN: /* down */
                if (pSel != 0)
                {
                    CMenuItem* pTmp = FindNext(m_pBaseItem, pSel, CMenuItem::MENU_ITEM_FIND_DOWN);
                    if (pTmp == 0)
                        pTmp = FindNext(m_pBaseItem, pSel, CMenuItem::MENU_ITEM_FIND_TOP);
                    if (pTmp != 0)
                    {
                        pSel->m_flag &= ~(CMenuItem::MENU_ITEM_FLAG_FOCUS);
                        pTmp->m_flag |= CMenuItem::MENU_ITEM_FLAG_FOCUS;
                    }
                }
                else
                    ret = key;
                break;
            default:
                ret = key;
                m_bNeedUpdate = bNeedUpdate;
                break;
        }
        return ret;
    }
    /** \retval CYGFX_U32 Height of one menu item
    */
    CYGFX_U32 GetDefautItemHeight()
    {
        return (CYGFX_U32)(m_font_height + 2 * m_nBorder);
    }
    /** Redraw the menu if required
        \retval CYGFX_OK on success; the related error code or CYGFX_ERR otherwise.
    */
    CYGFX_ERROR Draw()
    {
        CYGFX_ERROR ret = CYGFX_OK;
        if (m_bNeedUpdate == CYGFX_FALSE)
            return ret;
        m_bNeedUpdate = CYGFX_FALSE;
        UTIL_SUCCESS(ret, CyGfx_BeBindSurface(m_ctx, CYGFX_BE_TARGET_STORE | CYGFX_BE_TARGET_DST, m_surface));
        UTIL_SUCCESS(ret, CyGfx_BeBindSurface(m_ctx, CYGFX_BE_TARGET_SRC, 0));
        UTIL_SUCCESS(ret, CyGfx_BeSetAttribute(m_ctx, CYGFX_BE_CTX_ATTR_COLOR, 0x00000000));
        UTIL_SUCCESS(ret, CyGfx_BeFill(m_ctx, 0, 0, GetWidth(), GetHeight()));
        if ((m_pBaseItem->m_flag & CMenuItem::MENU_ITEM_FLAG_VISIBLE) != 0)
        {
            UTIL_SUCCESS(ret, DrawItem(m_pBaseItem, 0, m_pBaseItem->m_nTextOffset,  GetHeight() - GetDefautItemHeight(), m_pBaseItem->m_width));
        }
        UTIL_SUCCESS(ret, CyGfx_BeBindSurface(m_ctx, CYGFX_BE_TARGET_STORE | CYGFX_BE_TARGET_DST | CYGFX_BE_TARGET_SRC, 0));
        UTIL_SUCCESS(ret, CyGfx_BeSetAttribute(m_ctx, CYGFX_BE_CTX_ATTR_COLOR, 0x00000000));
        UTIL_SUCCESS(ret, CyGfx_BeSetSurfAttribute(m_ctx, CYGFX_BE_TARGET_DST | CYGFX_BE_TARGET_SRC, CYGFX_BE_SURF_ATTR_COLOR, 0x00000000));

        UTIL_SUCCESS(ret, CSurfaceWindow::Swap());
        return ret;
    }
private:
    CYGFX_ERROR DrawItem(CMenuItem *pItem, CYGFX_U32 x, CYGFX_U32 nTextOffset, CYGFX_U32 y, CYGFX_U32 w)
    {
        CYGFX_ERROR ret = CYGFX_OK;
        CYGFX_BOOL bHighlight = (pItem->m_flag & CMenuItem::MENU_ITEM_FLAG_FOCUS) ||
            ((pItem->m_pSubItem != 0) && ((pItem->m_pSubItem->m_flag & CMenuItem::MENU_ITEM_FLAG_VISIBLE) != 0));

        if (m_nRadius > 0)
        {
            UTIL_SUCCESS(ret, CyGfx_BeSetSurfAttribute(m_ctx, CYGFX_BE_TARGET_SRC, CYGFX_BE_SURF_ATTR_COLOR, 0xffffffff));
            UTIL_SUCCESS(ret, utDeDrawBorder(m_ctx, x, y, w, m_font_height + 2 * m_nBorder, 5));
            if (bHighlight == CYGFX_TRUE)
            {
                UTIL_SUCCESS(ret, CyGfx_BeSetAttribute(m_ctx, CYGFX_BE_CTX_ATTR_COLOR, 0xffffff80));
            }
            else
            {
                UTIL_SUCCESS(ret, CyGfx_BeSetAttribute(m_ctx, CYGFX_BE_CTX_ATTR_COLOR, 0x00808040));
                UTIL_SUCCESS(ret, CyGfx_BeSetSurfAttribute(m_ctx, CYGFX_BE_TARGET_SRC, CYGFX_BE_SURF_ATTR_COLOR, 0x00808040));
            }
            CyGfx_BeBlendFuncEx(m_ctx, CYGFX_BE_BF_GL_ONE, CYGFX_BE_BF_GL_ZERO, CYGFX_BE_BF_GL_ONE, CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA);
            CyGfx_BeBlendModeEx(m_ctx, CYGFX_BE_BM_GL_FUNC_REVERSE_SUBTRACT, CYGFX_BE_BM_GL_FUNC_REVERSE_SUBTRACT);
            UTIL_SUCCESS(ret, utDeDrawBorder(m_ctx, x+1, y+1, w-2, m_font_height + 2 * m_nBorder -2, 5));
            //UTIL_SUCCESS(ret, CyGfx_BeFill(m_ctx, x, y, 130, m_font_height + 2 * m_nBorder));
            CyGfx_BeBlendModeEx(m_ctx, CYGFX_BE_BM_GL_FUNC_ADD, CYGFX_BE_BM_GL_FUNC_ADD);
            CyGfx_BeBlendFuncEx(m_ctx, CYGFX_BE_BF_GL_SRC_ALPHA, CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA, CYGFX_BE_BF_GL_ONE, CYGFX_BE_BF_GL_ONE_MINUS_SRC_ALPHA);
        }
        else
        {
            if (bHighlight == CYGFX_TRUE)
            {
                UTIL_SUCCESS(ret, CyGfx_BeSetAttribute(m_ctx, CYGFX_BE_CTX_ATTR_COLOR, 0x808080ff));
            }
            else
            {
                UTIL_SUCCESS(ret, CyGfx_BeSetAttribute(m_ctx, CYGFX_BE_CTX_ATTR_COLOR, 0x404040ff));
            }
            UTIL_SUCCESS(ret, CyGfx_BeFill(m_ctx, x, y, w, m_font_height + 2 * m_nBorder-1));
        }
        if (bHighlight == CYGFX_TRUE)
        {
            UTIL_SUCCESS(ret, CyGfx_BeSetSurfAttribute(m_ctx, CYGFX_BE_TARGET_SRC, CYGFX_BE_SURF_ATTR_COLOR, 0xffffffff));
        }
        else
        {
            UTIL_SUCCESS(ret, CyGfx_BeSetSurfAttribute(m_ctx, CYGFX_BE_TARGET_SRC, CYGFX_BE_SURF_ATTR_COLOR, 0xc0c0c0ff));
        }
        if ((pItem->m_flag & CMenuItem::MENU_ITEM_FLAG_CHECKBOX) != 0)
        {
            UTIL_SUCCESS(ret, utDeDrawCheckBox(m_ctx, x + m_nBorder, y + m_yOffset + m_nBorder, m_font_height, pItem->m_flag));
        }
        if ((pItem->m_flag & CMenuItem::MENU_ITEM_FLAG_RADIO) != 0)
        {
            UTIL_SUCCESS(ret, utDeDrawRadio(m_ctx, x + m_nBorder, y + m_yOffset + m_nBorder, m_font_height, pItem->m_flag));
        }
        UTIL_SUCCESS(ret, utFtTextOut(&m_fc, (int)(x + m_nBorder + nTextOffset), (int)(y + m_yOffset + m_nBorder), pItem->GetString()));
        if (pItem->m_pSubItem != 0)
        {
            UTIL_SUCCESS(ret, utDeDrawArrow(m_ctx, x + w  - m_font_height / 2, y  + m_nBorder, m_font_height));
            if ((pItem->m_pSubItem->m_flag & CMenuItem::MENU_ITEM_FLAG_VISIBLE) != 0)
            {
                UTIL_SUCCESS(ret, DrawItem(pItem->m_pSubItem, x + w + 1, pItem->m_pSubItem->m_nTextOffset, y, pItem->m_pSubItem->m_width));
            }
        }
        if (pItem->m_pNextItem != NULL)
        {
            UTIL_SUCCESS(ret, DrawItem(pItem->m_pNextItem, x, nTextOffset, y - m_font_height - 2 * m_nBorder, w));
        }
        return ret;
    }

    CYGFX_ERROR CalcColumnSize(CMenuItem *pItem, CYGFX_U16 &w, CYGFX_U08 &TextOffset, CYGFX_U08 &h)
    {
        CYGFX_ERROR ret = CYGFX_OK;

        CYGFX_U32 wi, hi;
        w = h = TextOffset = 0;

        while(pItem != NULL)
        {
            UTIL_SUCCESS(ret, utFtCalc(&m_fc, &wi, &hi, pItem->GetString()));
            if (ret == CYGFX_OK)
            {
                wi += 2 * m_nBorder;
                if ((pItem->m_flag & (CMenuItem::MENU_ITEM_FLAG_CHECKBOX | CMenuItem::MENU_ITEM_FLAG_RADIO)) != 0)
                {
                    TextOffset = (CYGFX_U08)m_font_height;
                }
                wi += TextOffset;
                if (pItem->m_pSubItem != 0)
                    wi += m_font_height / 2;
                if (w < wi)
                    w = wi;
                if (hi < m_font_height)
                    hi = m_font_height;
                h += hi;
            }
            pItem = pItem->m_pNextItem;
        }
        return ret;
    }

};

/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */
