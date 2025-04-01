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
/******************************************************************************/

/*!
 * \version     
 * \date        Tue May 26 11:58:37 2020
 * \file        gfxreg_videoss_addressmap.h
 *              This file was generated automatically by agentx 1.00.5.
 *                Design:   videoss_ip
 *                Source:   videoss_flat.addressmap.xml
 *                Template: addressmap_h.tpl
 * \brief       (none) register and field definition
 * Implements Building Block: HWExchangeBlock
 *
 *
 * \ingroup register_definitions
 */

#ifndef GFXREG_VIDEOSS_IP_OFFSET_H
#define GFXREG_VIDEOSS_IP_OFFSET_H

/*! \cond Hide for doxygen */

/******************************************************************************/
/* videoss_ip module address offsets */
/******************************************************************************/

/** subss_videosscfg (see gccgfx_videosscfg_register.h) */
#define GFXREG_SUBSS_VIDEOSSCFG_BASE      (CYGFX_VIDEOSS_BASE + 0x00000000U)

/** subss_vram (see gccgfx_vram_register.h) */
#define GFXREG_SUBSS_VRAM_BASE      (CYGFX_VIDEOSS_BASE + 0x00000400U)

/** subss_gfx2d_gfx2dcfg (see gccgfx_gfx2dcfg_register.h) */
#define GFXREG_SUBSS_GFX2D_GFX2DCFG_BASE      (CYGFX_VIDEOSS_BASE + 0x00040000U)

/** subss_gfx2d_cmdseq (see gccgfx_cmdseq_register.h) */
#define GFXREG_SUBSS_GFX2D_CMDSEQ_BASE      (CYGFX_VIDEOSS_BASE + 0x00050000U)

/** subss_gfx2d_bliteng_blitengcfg (see gccgfx_blitengcfg_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_BLITENGCFG_BASE      (CYGFX_VIDEOSS_BASE + 0x00060000U)

/** subss_gfx2d_bliteng_fetchsrc (see gccgfx_fetchblit_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_FETCHSRC_BASE      (CYGFX_VIDEOSS_BASE + 0x00064000U)

/** subss_gfx2d_bliteng_fetchdst (see gccgfx_fetchblit_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_FETCHDST_BASE      (CYGFX_VIDEOSS_BASE + 0x00064400U)

/** subss_gfx2d_bliteng_fetchmask (see gccgfx_fetchblit_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_FETCHMASK_BASE      (CYGFX_VIDEOSS_BASE + 0x00064800U)

/** subss_gfx2d_bliteng_rop (see gccgfx_rop_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_ROP_BASE      (CYGFX_VIDEOSS_BASE + 0x00065000U)

/** subss_gfx2d_bliteng_clut (see gccgfx_clut_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_CLUT_BASE      (CYGFX_VIDEOSS_BASE + 0x00065800U)

/** subss_gfx2d_bliteng_matrix (see gccgfx_matrix_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_MATRIX_BASE      (CYGFX_VIDEOSS_BASE + 0x00066000U)

/** subss_gfx2d_bliteng_gpscaler (see gccgfx_gpscaler_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_GPSCALER_BASE      (CYGFX_VIDEOSS_BASE + 0x00066400U)

/** subss_gfx2d_bliteng_blitblend (see gccgfx_blitblend_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_BLITBLEND_BASE      (CYGFX_VIDEOSS_BASE + 0x00066800U)

/** subss_gfx2d_bliteng_store (see gccgfx_store_register.h) */
#define GFXREG_SUBSS_GFX2D_BLITENG_STORE_BASE      (CYGFX_VIDEOSS_BASE + 0x00066c00U)

/** subss_gfx2d_draweng (see gccgfx_draweng_register.h) */
#define GFXREG_SUBSS_GFX2D_DRAWENG_BASE      (CYGFX_VIDEOSS_BASE + 0x00070000U)

/** videoio_subio_videoiocfg (see gccgfx_videoiocfg_register.h) */
#define GFXREG_VIDEOIO_SUBIO_VIDEOIOCFG_BASE      (CYGFX_VIDEOSS_BASE + 0x00080000U)

/** videoio_subio_framedump (see gccgfx_framedump_register.h) */
#define GFXREG_VIDEOIO_SUBIO_FRAMEDUMP_BASE      (CYGFX_VIDEOSS_BASE + 0x00080400U)

/** videoio_subio_capeng0_capengcfg (see gccgfx_capengcfg_register.h) */
#define GFXREG_VIDEOIO_SUBIO_CAPENG0_CAPENGCFG_BASE      (CYGFX_VIDEOSS_BASE + 0x00081000U)

/** videoio_subio_capeng0_framecap (see gccgfx_framecap_register.h) */
#define GFXREG_VIDEOIO_SUBIO_CAPENG0_FRAMECAP_BASE      (CYGFX_VIDEOSS_BASE + 0x00081400U)

/** videoio_subio_compeng_compengcfg (see gccgfx_compengcfg_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_COMPENGCFG_BASE      (CYGFX_VIDEOSS_BASE + 0x00090000U)

/** videoio_subio_compeng_constframe0 (see gccgfx_constframe_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_CONSTFRAME0_BASE      (CYGFX_VIDEOSS_BASE + 0x00092000U)

/** videoio_subio_compeng_extdst0 (see gccgfx_extdst_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_EXTDST0_BASE      (CYGFX_VIDEOSS_BASE + 0x00092400U)

/** videoio_subio_compeng_constframe4 (see gccgfx_constframe_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_CONSTFRAME4_BASE      (CYGFX_VIDEOSS_BASE + 0x00092800U)

/** videoio_subio_compeng_extdst4 (see gccgfx_extdst_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_EXTDST4_BASE      (CYGFX_VIDEOSS_BASE + 0x00092c00U)

/** videoio_subio_compeng_constframe1 (see gccgfx_constframe_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_CONSTFRAME1_BASE      (CYGFX_VIDEOSS_BASE + 0x00093000U)

/** videoio_subio_compeng_extdst1 (see gccgfx_extdst_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_EXTDST1_BASE      (CYGFX_VIDEOSS_BASE + 0x00093400U)

/** videoio_subio_compeng_constframe5 (see gccgfx_constframe_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_CONSTFRAME5_BASE      (CYGFX_VIDEOSS_BASE + 0x00093800U)

/** videoio_subio_compeng_extdst5 (see gccgfx_extdst_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_EXTDST5_BASE      (CYGFX_VIDEOSS_BASE + 0x00093c00U)

/** videoio_subio_compeng_extsrc4 (see gccgfx_extsrc_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_EXTSRC4_BASE      (CYGFX_VIDEOSS_BASE + 0x00094000U)

/** videoio_subio_compeng_store4 (see gccgfx_store_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_STORE4_BASE      (CYGFX_VIDEOSS_BASE + 0x00094400U)

/** videoio_subio_compeng_fetchlayer0 (see gccgfx_fetchlayer_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_FETCHLAYER0_BASE      (CYGFX_VIDEOSS_BASE + 0x00094800U)

/** videoio_subio_compeng_fetchdecode4 (see gccgfx_fetchdecode_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_FETCHDECODE4_BASE      (CYGFX_VIDEOSS_BASE + 0x00094c00U)

/** videoio_subio_compeng_fetcheco4 (see gccgfx_fetcheco_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_FETCHECO4_BASE      (CYGFX_VIDEOSS_BASE + 0x00095000U)

/** videoio_subio_compeng_fetchwarp1 (see gccgfx_fetchwarp_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_FETCHWARP1_BASE      (CYGFX_VIDEOSS_BASE + 0x00095800U)

/** videoio_subio_compeng_fetcheco1 (see gccgfx_fetcheco_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_FETCHECO1_BASE      (CYGFX_VIDEOSS_BASE + 0x00095c00U)

/** videoio_subio_compeng_fetchlayer1 (see gccgfx_fetchlayer_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_FETCHLAYER1_BASE      (CYGFX_VIDEOSS_BASE + 0x00096000U)

/** videoio_subio_compeng_fetchdecode0 (see gccgfx_fetchdecode_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_FETCHDECODE0_BASE      (CYGFX_VIDEOSS_BASE + 0x00096400U)

/** videoio_subio_compeng_gammacor4 (see gccgfx_gammacor_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_GAMMACOR4_BASE      (CYGFX_VIDEOSS_BASE + 0x00096800U)

/** videoio_subio_compeng_matrix4 (see gccgfx_matrix_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_MATRIX4_BASE      (CYGFX_VIDEOSS_BASE + 0x00096c00U)

/** videoio_subio_compeng_gpscaler4 (see gccgfx_gpscaler_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_GPSCALER4_BASE      (CYGFX_VIDEOSS_BASE + 0x00097000U)

/** videoio_subio_compeng_histogram4 (see gccgfx_histogram_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_HISTOGRAM4_BASE      (CYGFX_VIDEOSS_BASE + 0x00097400U)

/** videoio_subio_compeng_layerblend1 (see gccgfx_layerblend_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_LAYERBLEND1_BASE      (CYGFX_VIDEOSS_BASE + 0x00097800U)

/** videoio_subio_compeng_layerblend2 (see gccgfx_layerblend_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_LAYERBLEND2_BASE      (CYGFX_VIDEOSS_BASE + 0x00097c00U)

/** videoio_subio_compeng_layerblend3 (see gccgfx_layerblend_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_LAYERBLEND3_BASE      (CYGFX_VIDEOSS_BASE + 0x00098000U)

/** videoio_subio_compeng_layerblend4 (see gccgfx_layerblend_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_LAYERBLEND4_BASE      (CYGFX_VIDEOSS_BASE + 0x00098400U)

/** videoio_subio_compeng_layerblend5 (see gccgfx_layerblend_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_LAYERBLEND5_BASE      (CYGFX_VIDEOSS_BASE + 0x00098800U)

/** videoio_subio_compeng_extsrc8 (see gccgfx_extsrc_register.h) */
#define GFXREG_VIDEOIO_SUBIO_COMPENG_EXTSRC8_BASE      (CYGFX_VIDEOSS_BASE + 0x00098c00U)

/** videoio_diseng0_disengcfg (see gccgfx_disengcfg_register.h) */
#define GFXREG_VIDEOIO_DISENG0_DISENGCFG_BASE      (CYGFX_VIDEOSS_BASE + 0x000a0000U)

/** videoio_diseng0_sig (see gccgfx_sig_register.h) */
#define GFXREG_VIDEOIO_DISENG0_SIG_BASE      (CYGFX_VIDEOSS_BASE + 0x000a1000U)

/** videoio_diseng0_framegen (see gccgfx_framegen_register.h) */
#define GFXREG_VIDEOIO_DISENG0_FRAMEGEN_BASE      (CYGFX_VIDEOSS_BASE + 0x000a2000U)

/** videoio_diseng0_gammacor (see gccgfx_gammacor_register.h) */
#define GFXREG_VIDEOIO_DISENG0_GAMMACOR_BASE      (CYGFX_VIDEOSS_BASE + 0x000a2400U)

/** videoio_diseng0_dither (see gccgfx_dither_register.h) */
#define GFXREG_VIDEOIO_DISENG0_DITHER_BASE      (CYGFX_VIDEOSS_BASE + 0x000a2800U)

/** videoio_diseng0_tcon (see gccgfx_tcon_register.h) */
#define GFXREG_VIDEOIO_DISENG0_TCON_BASE      (CYGFX_VIDEOSS_BASE + 0x000a3000U)

/** videoio_diseng1_disengcfg (see gccgfx_disengcfg_register.h) */
#define GFXREG_VIDEOIO_DISENG1_DISENGCFG_BASE      (CYGFX_VIDEOSS_BASE + 0x000a4000U)

/** videoio_diseng1_sig (see gccgfx_sig_register.h) */
#define GFXREG_VIDEOIO_DISENG1_SIG_BASE      (CYGFX_VIDEOSS_BASE + 0x000a5000U)

/** videoio_diseng1_framegen (see gccgfx_framegen_register.h) */
#define GFXREG_VIDEOIO_DISENG1_FRAMEGEN_BASE      (CYGFX_VIDEOSS_BASE + 0x000a6000U)

/** videoio_diseng1_gammacor (see gccgfx_gammacor_register.h) */
#define GFXREG_VIDEOIO_DISENG1_GAMMACOR_BASE      (CYGFX_VIDEOSS_BASE + 0x000a6400U)

/** videoio_diseng1_dither (see gccgfx_dither_register.h) */
#define GFXREG_VIDEOIO_DISENG1_DITHER_BASE      (CYGFX_VIDEOSS_BASE + 0x000a6800U)

/** videoio_diseng1_tcon (see gccgfx_tcon_register.h) */
#define GFXREG_VIDEOIO_DISENG1_TCON_BASE      (CYGFX_VIDEOSS_BASE + 0x000a7000U)

/** fpdlink0 (see gccgfx_fpdlink_register.h) */
#define GFXREG_FPDLINK0_BASE      (CYGFX_VIDEOSS_BASE + 0x000c0000U)

/** fpdlink1 (see gccgfx_fpdlink_register.h) */
#define GFXREG_FPDLINK1_BASE      (CYGFX_VIDEOSS_BASE + 0x000c8000U)

/** mipicsi (see gccgfx_mipicsi_register.h) */
#define GFXREG_MIPICSI_BASE      (CYGFX_VIDEOSS_BASE + 0x000d0000U)

/** infra (see gccgfx_infra_register.h) */
#define GFXREG_INFRA_BASE      (CYGFX_VIDEOSS_BASE + 0x000f0000U)


/*! \endcond Hide for doxygen */

#endif /* GFXREG_VIDEOSS_IP_OFFSET_H */
