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
