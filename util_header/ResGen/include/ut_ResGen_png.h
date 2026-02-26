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


/*
00000cm
     |+- COLOR_MASK
     +-- Bits per channel (1,2,4,8)
*/
#ifdef __cplusplus
extern "C"
{
#endif

#define UPNG_COLOR_MASK_PALETTE    1
#define UPNG_COLOR_MASK_COLOR      2
#define UPNG_COLOR_MASK_ALPHA      4

#define UPNG_COLOR_TYPE_GRAY 0
#define UPNG_COLOR_TYPE_PALETTE  (UPNG_COLOR_MASK_COLOR | UPNG_COLOR_MASK_PALETTE)
#define UPNG_COLOR_TYPE_RGB        (UPNG_COLOR_MASK_COLOR)
#define UPNG_COLOR_TYPE_RGB_ALPHA  (UPNG_COLOR_MASK_COLOR | UPNG_COLOR_MASK_ALPHA)
#define UPNG_COLOR_TYPE_GRAY_ALPHA (UPNG_COLOR_MASK_ALPHA)

#define UPNG_GET_COLOR_TYPE(x) (x & 0xf)
#define UPNG_GET_BIT_PER_CHANNEL(x) ((x>>4) & 0xf)

#define UPNG_IS_COLOR_TYPE_GRAY(x)      (UPNG_GET_COLOR_TYPE(x) == UPNG_COLOR_TYPE_GRAY)
#define UPNG_IS_COLOR_TYPE_PALETTE(x)   (UPNG_GET_COLOR_TYPE(x) == UPNG_COLOR_TYPE_PALETTE)
#define UPNG_IS_COLOR_TYPE_RGB(x)       (UPNG_GET_COLOR_TYPE(x) == UPNG_COLOR_TYPE_RGB)
#define UPNG_IS_COLOR_TYPE_RGB_ALPHA(x) (UPNG_GET_COLOR_TYPE(x) == UPNG_COLOR_TYPE_RGB_ALPHA)
#define UPNG_IS_COLOR_TYPE_GRAY_ALPHA(x)(UPNG_GET_COLOR_TYPE(x) == UPNG_COLOR_TYPE_GRAY_ALPHA)

#define UPNG_HAS_ALPHA(x) (x & UPNG_COLOR_MASK_ALPHA)
#define UPNG_HAS_COLOR(x) (x & UPNG_COLOR_MASK_COLOR)
#define UPNG_HAS_PALETTE(x) (x & UPNG_COLOR_MASK_PALETTE)

#define UPNG_A8B8G8R8 (UPNG_COLOR_TYPE_RGB_ALPHA | (8<<4))

#define UPNG_UNKNOWN 0
#define UPNG_ERROR_FORMAT (0xf<<4)

extern int png_Read(const char *filename, void **buffer, unsigned int *width, unsigned int *height, int *Format, unsigned int *pnColCnt, void **ppPallete);

extern int GetIrisParam(int nFormat, unsigned int width, unsigned int *pTotalBits, unsigned int *pStrideBits, unsigned int *pColorBits, unsigned int *pColorShift);

#ifdef __cplusplus
}
#endif
