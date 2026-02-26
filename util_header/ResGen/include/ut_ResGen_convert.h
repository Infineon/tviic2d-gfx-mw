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

#ifndef __UTIL_CONVERT_H__
#define __UTIL_CONVERT_H__

#define IRIS_FORMAT_RGBA        0x00 /* standard format */
#define IRIS_FORMAT_RGB_INDEX   0x01 /* the red color channel defines the index for the RGB color table, alpha may be seperate */
#define IRIS_FORMAT_RGBA_INDEX  0x03 /* the red color channel defines the index for the RGBA color table */
#define IRIS_FORMAT_RLD         0x04 /* the image is RLD compressed */

#define PAL_TYPE_R 1
#define PAL_TYPE_G 2
#define PAL_TYPE_B 4
#define PAL_TYPE_A 8
#define PAL_TYPE_RGB (PAL_TYPE_R | PAL_TYPE_G | PAL_TYPE_B)
#define PAL_TYPE_RGBA (PAL_TYPE_R | PAL_TYPE_G | PAL_TYPE_B | PAL_TYPE_A)

#ifdef __cplusplus
extern "C"
{
#endif

void read_color(void *pIn,  unsigned int totalBitsIn,  unsigned int strideBitsIn, unsigned int colorBitsIn , unsigned int colorShiftIn,
                unsigned int x, unsigned int y, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

void write_color(void* pOut, unsigned int totalBitsOut, unsigned int strideBitsOut, unsigned int colorBitsOut, unsigned int colorShiftOut,
                       unsigned int x, unsigned int y, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


int util_convert(void *pIn,  unsigned int totalBitsIn, unsigned int strideBitsIn, unsigned int colorBitsIn , unsigned int colorShiftIn,
                 unsigned int nColsIn, void* pPalIn, unsigned char PalTypeIn,
                 void* pOut, unsigned int totalBitsOut, unsigned int strideBitsOut, unsigned int colorBitsOut, unsigned int colorShiftOut,
                 unsigned int nColsOut, void* pPalOut, unsigned char PalTypeOut,
                 unsigned int width, unsigned int height, unsigned int pre_mul_alpha);

int util_calc_format(CYGFX_SURFACE src, unsigned int *nColsOut, void* pPalOut,
                unsigned int *totalBitsOut, unsigned int *strideBytesOut, unsigned int *colorBitsOut, unsigned int *colorShiftOut, unsigned int *PalTypeOut);

unsigned int Enhance2PowerOf2(unsigned int var);

#ifdef __cplusplus
}
#endif

#endif /* __UTIL_CONVERT_H__ */

