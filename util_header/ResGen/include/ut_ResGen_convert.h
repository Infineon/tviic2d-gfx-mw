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

