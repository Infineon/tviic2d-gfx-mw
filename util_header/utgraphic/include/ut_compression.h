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
    \file        ut_compression.h
    \brief       This file defines a helper function that can be used to compress
                 a surface.
*/

#ifndef UT_COMPRESSION_H
#define UT_COMPRESSION_H
#ifdef __cplusplus
extern "C"
{
#endif

/** \addtogroup user_doc_utils
\{ */

/** \addtogroup ut_compression Utilities for compression
    This group contains sample helper functions for surface compression.
    It shows how the surface parameters must be used with the \ref ut_rla and
    \ref ut_rlc utilities.
\{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/**
    Compresses a surface buffer.
    \note This function shows how images can be compressed to reduce memory
          usage. Compressed images can be used as source surfaces for blit and
          display operations. A real application will probably not use this function,
          but only load and use such compressed buffers created offline.
          Moreover, this function may fail for large images because
          the system memory is not sufficient.
    \param[in,out] surf Surface object describing an uncompressed image buffer.
          If the compression was successful, the surface object describes the new
          compressed buffer.
    \param[in] mode Requested compression mode
    \retval     ::CYGFX_OK on success
    \retval     ::CYGFX_ERR if the requested compression is not possible or the related driver error code
*/
/*****************************************************************************/
CYGFX_ERROR utSurfCompress(CYGFX_SURFACE surf, CYGFX_SM_COMP mode);


/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
}
#endif
#endif /* UT_COMPRESSION_H */
