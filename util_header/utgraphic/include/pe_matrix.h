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
    \file        pe_matrix.h
    \brief       Provides some matrix utility functions.
*/



#ifndef PE_MATRIX_H
#define PE_MATRIX_H

/* Enable TRACE_MATRIX if you want to trace a matrix content. */
/* #define TRACE_MATRIX */

#ifdef __cplusplus
    extern "C"
    {
#endif


/** \addtogroup user_doc_utils
\{ */

/** \addtogroup pe_matrix Utility functions for matrix calculations

    Functions in this block are used by some tutorial examples for matrix
    operations. Different matrix formats and related functions are defined to support
    different use cases:
        - ::Mat3x2: This matrix format is sufficient for affine operations like
                    translation, rotation, scaling, and sharing.
        - ::Mat3x3: A 3x3 matrix is required for perspective operations
        - ::Mat4x4: A 4x4 matrix is required for perspective operations including z
          (depth) calculation. The VIDEOSS hardware does not calculate z-coordinates and the
          driver API does not support this type of matrix. However, in the computer
          3D world (e.g., OpenGL), 4x4 matrices are often used and for compatibility
          reasons. In some tutorial examples, the 4x4 matrix type is used. To use such
          a matrix type with the VIDEOSS hardware, convert this matrix in
          a 3x3 matrix type, and in some cases make the z-order calculation in
          software.
        - ::Mat4x3: This matrix type is useful for color operations modifying the
          R, G, B or Y, U, V color channels.
        - ::Mat5x4: This matrix type is useful for color operations modifying the
          R, G, B, A or Y, U, V, A color channels.

    The following code shows a matrix calculation using typical 3D operations with a 4x4 matrix.
    The result will be converted into a 3x3 matrix and assigned to a blit context.

    \code
    Mat4x4 m44;
    Mat3x3 m33;

    utMat4x4LoadIdentity(m44);

    utMat4x4Translate(m44, w / 2.0f, h / 2.0f, 0);
    utMat4x4Scale(m44, w / 4.0f, h / 4.0f, 1);
    utMat4x4Perspective(m44, 60.0f, (CYGFX_FLOAT)w / h, 0.1f, 100.0f);
    utMat4x4Translate(m44, 0, 0, -2);
    utMat4x4RotX(m44, 40);//fAngle);
    utMat4x4RotZ(m44, 30);//fAngle2);
    utMat4x4Scale(m44, 2.0f / iw, 2.0f / ih, 1);
    utMat4x4Translate(m44, -iw / 2.0f, -ih / 2.0f, 0);

    //utMat4x4Trace("M4x4", m44);

    utMat4x4ToMat3x3(m44, m33);

    //utMat3x3Trace("M3x3", m33);

    CyGfx_BeSetGeoMatrix(ctx, CYGFX_BE_TARGET_SRC, CYGFX_BE_GEO_MATRIX_FORMAT_3X3, m33);
    \endcode

    \note Most matrix functions do not return an error. It is expected that all pointers are not zero.

\{ */

/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/

#ifndef UT_2D_MATRIX_API
/** The UT_2D_MATRIX_API can be used to define function types like dll export. */
#define UT_2D_MATRIX_API extern
#endif

/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/

/** Matrix with three columns and two rows for affine geometry operations.
    If m is a Mat3x2 matrix type and x,y in an input vector, the resulting vector is:
    \code
    / m[0] m[2] m[4] \ * / x \ = / (m[0] * x) + (m[2] * y) + m[4] \
    \ m[1] m[3] m[5] /   \ y /   \ (m[1] * x) + (m[3] * y) + m[5] /
    \endcode
*/
typedef CYGFX_FLOAT Mat3x2[6];

/** Matrix with three columns and three rows for perspective geometry operations.
    If m is a Mat3x3 matrix type and x,y in an input vector, the resulting vector is:
    \code
    / m[0] m[3] m[6] \   / x \   / ((m[0] * x) + (m[3] * y) + m[6]) / (m[2] * x + m[5] * y + m[8]) \
    | m[1] m[4] m[7] | * | y | = | ((m[1] * x) + (m[4] * y) + m[7]) / (m[2] * x + m[5] * y + m[8]) |
    \ m[2] m[5] m[8] /   \ 1 /   \                           1                                     /
    \endcode
*/
typedef CYGFX_FLOAT Mat3x3[9];

/** Matrix with four columns and four rows for perspective geometry operations including z calculation.
    The Mat4x4 matrix is defined in the following order:
    \code
    / m[0] m[4] m[ 8] m[12] \
    | m[1] m[5] m[ 9] m[13] |
    | m[2] m[6] m[10] m[14] |
    \ m[3] m[7] m[11] m[15] /
    \endcode
*/
typedef CYGFX_FLOAT Mat4x4[16];


/** Matrix with four columns and three rows for color operations with the R, G, B or Y, U, V channels.
    If m is a Mat4x3 matrix type and R, G, B in an input vector, the resulting vector is:
    \code
    / m[0] m[3] m[6] m[ 9] \   / R \   / m[0] * R + m[3] * G + m[6] * B + m[ 9] \
    | m[1] m[4] m[7] m[10] | * | G | = | m[1] * R + m[4] * G + m[7] * B + m[10] |
    \ m[2] m[5] m[8] m[11] /   \ B /   \ m[2] * R + m[5] * G + m[8] * B + m[11] /
    \endcode
*/
typedef CYGFX_FLOAT Mat4x3[12];

/** Matrix with five columns and four rows for color operations with the R, G, B, A or Y, U, V, A channels.
    If m is a Mat5x4 matrix type and R, G, B, A in an input vector, the resulting vector is:
    \code
    / m[0] m[4] m[ 8] m[12] m[16] \   / R \   / m[0] * R + m[4] * G + m[ 8] * B + m[12] * A + m[16] \
    | m[1] m[5] m[ 9] m[13] m[17] | * | G | = | m[1] * R + m[5] * G + m[ 9] * B + m[13] * A + m[17] |
    | m[2] m[6] m[10] m[14] m[18] |   | B | = | m[2] * R + m[6] * G + m[10] * B + m[14] * A + m[18] |
    \ m[3] m[7] m[11] m[15] m[19] /   \ A /   \ m[3] * R + m[7] * G + m[11] * B + m[15] * A + m[19] /
    \endcode
*/
typedef CYGFX_FLOAT Mat5x4[20];


/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/

/** \name Matrix functions for geometric operations
\{ */

/**
   Copies the matrix content to a new one.
    \param[out] dst Destination matrix
    \param[in]  src Source matrix
*/
UT_2D_MATRIX_API void utMat3x2Copy(Mat3x2 dst, const Mat3x2 src);

/**
    Multiplies two matrices.
    The resulting matrix represents dst = src1 * src2.
    \param[out] dst Destination matrix
    \param[in] src1 First source matrix
    \param[in] src2 Second source matrix
*/
UT_2D_MATRIX_API void utMat3x2Multiply(Mat3x2 dst, const Mat3x2 src1, const Mat3x2 src2);

/**
    Resets the matrix content to a unit matrix.
    \param[in,out] m Matrix to modify
*/
UT_2D_MATRIX_API void utMat3x2LoadIdentity(Mat3x2 m);

/**
    Modifies a matrix to realize a move operation.
    The resulting matrix represents m = m * m_trans.
    \param[in,out] m Matrix to modify
    \param[in]     x Move dimension in x direction
    \param[in]     y Move dimension in y direction
*/
UT_2D_MATRIX_API void utMat3x2Translate(Mat3x2 m, CYGFX_FLOAT x, CYGFX_FLOAT y);

/**
    Modifies a matrix by pre-multiplying a move matrix.
    The resulting matrix represents m = m_trans * m.
    \param[in,out] m Matrix to modify
    \param[in]     x Move dimension in x direction
    \param[in]     y Move dimension in y direction
*/
UT_2D_MATRIX_API void utMat3x2TranslatePre(Mat3x2 m, CYGFX_FLOAT x, CYGFX_FLOAT y);

/**
    Modifies a matrix to realize a scale operation.
    The resulting matrix represents m = m * m_scale.
    \param[in,out] m Matrix to modify
    \param[in]     x Scale factor in x direction
    \param[in]     y Scale factor in y direction
*/
UT_2D_MATRIX_API void utMat3x2Scale(Mat3x2 m, CYGFX_FLOAT x, CYGFX_FLOAT y);

/**
    Modifies a matrix by pre-multiplying a scale matrix.
    The resulting matrix represents m = m_scale * m.
    \param[in,out] m Matrix to modify
    \param[in]     x Scale factor in x direction
    \param[in]     y Scale factor in y direction
*/
UT_2D_MATRIX_API void utMat3x2ScalePre(Mat3x2 m, CYGFX_FLOAT x, CYGFX_FLOAT y);

/**
    Modifies a matrix to realize a rotation.
   The resulting matrix represents m = m * m_rot.
    \param[in,out] m Matrix to modify
    \param[in]     f Rotation angle in degrees
*/
UT_2D_MATRIX_API void utMat3x2Rot(Mat3x2 m, CYGFX_FLOAT f);

/**
    Modifies a matrix by pre-multiplying a rotation matrix.
    The resulting matrix represents m = m_rot * m.
    \param[in,out] m Matrix to modify
    \param[in]     f Rotation angle in degrees
*/
UT_2D_MATRIX_API void utMat3x2RotPre(Mat3x2 m, CYGFX_FLOAT f);

/**
    Calculates the inverted matrix.
    \param[in,out] m Matrix to modify
    \retval CYGFX_OK on success
    \retval CYGFX_ERR in case of singular matrix
*/
UT_2D_MATRIX_API CYGFX_ERROR utMat3x2Invert(Mat3x2 m);

/**
    Calculates the target position for a given matrix and source position.
    \param[in]  m Matrix
    \param[in]  x Source x position
    \param[in]  y Source y position
    \param[out] xout Pointer to the destination x position
    \param[out] yout Pointer to the destination y position
*/
UT_2D_MATRIX_API void utMat3x2GetXY(const Mat3x2 m, const CYGFX_FLOAT x, const CYGFX_FLOAT y, CYGFX_FLOAT *xout, CYGFX_FLOAT *yout);

/**
    Fills a 3x3-matrix with a unit matrix.
    \param[in,out] m Matrix to modify
*/
UT_2D_MATRIX_API void utMat3x3LoadIdentity(Mat3x3 m);

/**
    Copies the content of a 3x3-matrix into a new one.
    \param[out] dst Destination matrix
    \param[in]  src Source matrix
*/
UT_2D_MATRIX_API void utMat3x3Copy(Mat3x3 dst, const Mat3x3 src);

/**
    Multiplies two 3x3-matrices.
    The resulting matrix represents dst = src1 * src2.
    \param[out] dst Destination matrix
    \param[in]  src1 First source matrix
    \param[in]  src2 Second source matrix
*/
UT_2D_MATRIX_API void utMat3x3Multiply(Mat3x3 dst, const Mat3x3 src1, const Mat3x3 src2);


/**
    Modifies a 3x3-matrix to realize a move operation.
    The resulting matrix represents m = m * m_trans.
    \param[in,out] m Matrix to modify
    \param[in]     x Move dimension in x direction
    \param[in]     y Move dimension in y direction
*/
UT_2D_MATRIX_API void utMat3x3Translate(Mat3x3 m, CYGFX_FLOAT x, CYGFX_FLOAT y);

/**
    Modifies a 3x3-matrix by pre-multiplying a move matrix.
    The resulting matrix represents m = m_trans * m.
    \param[in,out] m Matrix to modify
    \param[in]     x Move dimension in x direction
    \param[in]     y Move dimension in y direction
*/
UT_2D_MATRIX_API void utMat3x3TranslatePre(Mat3x3 m, CYGFX_FLOAT x, CYGFX_FLOAT y);

/**
    Modifies a 3x3-matrix to realize a scale operation.
    The resulting matrix represents m = m * m_scale.
    \param[in,out] m Matrix to modify
    \param[in]     x Scale factor in x direction
    \param[in]     y Scale factor in y direction
*/
UT_2D_MATRIX_API void utMat3x3Scale(Mat3x3 m, CYGFX_FLOAT x, CYGFX_FLOAT y);

/**
    Rotates a 3x3-matrix around the X-axis.
    \param[in,out] m Input/output matrix
    \param[in]     f Rotation angle (in radians)
*/
UT_2D_MATRIX_API void utMat3x3RotX(Mat3x3 m, CYGFX_FLOAT f);

/**
    Rotates a 3x3-matrix around the Z-axis.
    \param[in,out] m Input/output matrix
    \param[in]     f Rotation angle (in radians)
*/
UT_2D_MATRIX_API void utMat3x3RotZ(Mat3x3 m, CYGFX_FLOAT f);

#ifdef TRACE_MATRIX
/**
    Traces a Mat3x3 object.
    \param[in] szName Defines a string that is printed as the matrix name
    \param[in] m Matrix
*/
UT_2D_MATRIX_API void utMat3x3Trace( const CYGFX_CHAR * szName, const Mat3x3 m);
#endif /* TRACE_MATRIX */


/**
    Copies the content of a 4x4-matrix into a new one.
    \param[out] dst Destination matrix
    \param[in]  src Source matrix
*/
UT_2D_MATRIX_API void utMat4x4Copy(Mat4x4 dst, const Mat4x4 src);

/**
    Multiplies two 4x4-matrices.
    The resulting matrix represents dst = src1 * src2.
    \param[out] dst Destination matrix
    \param[in]  src1 First source matrix
    \param[in]  src2 Second source matrix
*/
UT_2D_MATRIX_API void utMat4x4Multiply(Mat4x4 dst, const Mat4x4 src1, const Mat4x4 src2);

/**
    Fills a 4x4-matrix with a unit matrix.
    \param[in,out] m Matrix to modify
*/
UT_2D_MATRIX_API void utMat4x4LoadIdentity(Mat4x4 m);

/**
    Modifies a 4x4-matrix to realize a move operation.
    The resulting matrix represents m = m * m_trans.
    \param[in,out] m Matrix to modify
    \param[in]     x Move dimension in x direction
    \param[in]     y Move dimension in y direction
    \param[in]     z Move dimension in z direction
*/
UT_2D_MATRIX_API void utMat4x4Translate(Mat4x4 m, CYGFX_FLOAT x, CYGFX_FLOAT y, CYGFX_FLOAT z);

/**
    Modifies a 4x4-matrix to realize a scale operation.
    The resulting matrix represents m = m * m_scale.
    \param[in,out] m Matrix to modify
    \param[in]     x Scale factor in x direction
    \param[in]     y Scale factor in y direction
    \param[in]     z Scale factor in z direction
*/
UT_2D_MATRIX_API void utMat4x4Scale(Mat4x4 m, CYGFX_FLOAT x, CYGFX_FLOAT y, CYGFX_FLOAT z);

/**
    Rotates a 4x4-matrix around the X-axis.
    \param[in,out] m Input/output matrix
    \param[in]     f Rotation angle (in radians)
*/
UT_2D_MATRIX_API void utMat4x4RotX(Mat4x4 m, CYGFX_FLOAT f);

/**
    Rotates a 4x4-matrix around the Y-axis.
    \param[in,out] m Input/output matrix
    \param[in]  f Rotation angle (in radians)
*/
UT_2D_MATRIX_API void utMat4x4RotY(Mat4x4 m, CYGFX_FLOAT f);

/**
    Rotates a 4x4-matrix around the Z-axis.
    \param[in,out] m Input/output matrix
    \param[in]     f Rotation angle (in radians)
*/
UT_2D_MATRIX_API void utMat4x4RotZ(Mat4x4 m, CYGFX_FLOAT f);

/**
    Applies a perspective projection onto a 4x4-matrix.
    \param[in,out] m       Input/output matrix
    \param[in]     fovy    Opening angle of the frustum (in degrees), range is (cot(fovy / 2) != 0.0f)
    \param[in]     aspect  Ratio of width/height; range is (aspect != 0.0f)
    \param[in]     zNear   Near distance; should be different with zFar.
    \param[in]     zFar    Far distance; should be different with zNear.
    \retval CYGFX_OK on success
    \retval CYGFX_ERR in case fovy, zNear, zFar or aspect are not valid
*/
UT_2D_MATRIX_API CYGFX_ERROR utMat4x4Perspective(Mat4x4 m, CYGFX_FLOAT fovy, CYGFX_FLOAT aspect, CYGFX_FLOAT zNear, CYGFX_FLOAT zFar);

/**
    Calculates the target position for a given matrix and source position.
    \param[in]  m Matrix
    \param[in]  x Source x position
    \param[in]  y Source y position
    \param[in]  z Source z position
    \param[out] xout Pointer to the destination x position
    \param[out] yout Pointer to the destination y position
    \param[out] zout Pointer to the destination z position
    \retval CYGFX_OK on success
    \retval CYGFX_ERR in case of singular matrix
*/
UT_2D_MATRIX_API CYGFX_ERROR utMat4x4GetXYZ(const Mat4x4 m, CYGFX_FLOAT x, CYGFX_FLOAT y, CYGFX_FLOAT z, CYGFX_FLOAT *xout, CYGFX_FLOAT *yout, CYGFX_FLOAT *zout);


#ifdef TRACE_MATRIX
/**
    Traces a Mat4x4 object.
    \param[in] szName Defines a string that is printed as the matrix name
    \param[in] m Matrix
*/
UT_2D_MATRIX_API void utMat4x4Trace( const CYGFX_CHAR *szName, const Mat4x4 m);
#endif /*  TRACE_MATRIX */

/** \} */


/** \name Matrix functions for the conversion of matrices
\{ */

/**
    Converts a 3x2-matrix to a 4x4-matrix.
    \param[out] dst Destination matrix
    \param[in] src Source matrix
*/
UT_2D_MATRIX_API void utMat3x2ToMat4x4(const Mat3x2 src, Mat4x4 dst);

/**
    Converts a 3x3-matrix to a 4x4-matrix.
    \param[out] dst Destination matrix
    \param[in]  src Source matrix
*/
UT_2D_MATRIX_API void utMat3x3ToMat4x4(const Mat3x3 src, Mat4x4 dst);

/**
    Converts a 4x4-matrix to a 3x3-matrix.
    \param[out] dst Destination matrix
    \param[in]  src Source matrix
*/
UT_2D_MATRIX_API void utMat4x4ToMat3x3(const Mat4x4 src, Mat3x3 dst);

/**
    Converts a 4x4-matrix to a 3x2-matrix.
    \param[out] dst Destination matrix
    \param[in]  src Source matrix
    \retval CYGFX_OK on success
    \retval CYGFX_ERR in case src[15] == 0
*/
UT_2D_MATRIX_API CYGFX_ERROR utMat4x4ToMat3x2(const Mat4x4 src, Mat3x2 dst);

/** \} */





/** \name Matrix functions for color operations
\{ */

/**
    Copies the matrix content into a new one.
    \param[out] dst Destination matrix
    \param[in]  src Source matrix
*/
UT_2D_MATRIX_API void utMat4x3Copy(Mat4x3 dst, const Mat4x3 src);

/**
    Multiplies two matrices.
    \param[out] dst Destination matrix
    \param[in]  src1 First source matrix
    \param[in]  src2 Second source matrix
*/
UT_2D_MATRIX_API void utMat4x3Multiply(Mat4x3 dst, const Mat4x3 src1, const Mat4x3 src2);

/**
    Fills a 4x3-matrix with a unit matrix.
    \param[in,out] m Matrix to modify
*/
UT_2D_MATRIX_API void utMat4x3LoadIdentity(Mat4x3 m);

/**
    Fills a 5x4-matrix with a unit matrix.
    \param[in,out] m Matrix to modify
*/
UT_2D_MATRIX_API void utMat5x4LoadIdentity(Mat5x4 m);

/**
    Calculates a color matrix with the given parameters.
    \param[out] dst Destination color matrix. Previous matrix values will be overwritten.
    \param[in]  fContrast Sets the contrast (color component amplification). A useful range
                for fContrast is 0.0 .. 2.0, where 1.0 stands for no contrast modifications and
                higher and lower values stand for amplification and attenuation.
    \param[in]  fBrightness Sets the brightness (color component offset). A useful range
                for fBrightness is -1.0 .. 1.0, where 0.0 stands for no brightness modifications and
                higher and lower values stand for amplification and attenuation.
    \param[in]  fSaturation Sets the color saturation. A useful range
                for fSaturation is 0.0 .. 2.0, where 1.0 stands for no saturation modifications and
                higher and lower values stand for amplification and attenuation. A value of 0.0
                will result in a gray image.
    \param[in]  fHue color modification in degrees. The useful range is 0 .. 360 where 0 and 360 run
                into an identical result, which means no modification.
   \note The parameters are not checked concerning the range. A wrong value will result
         in a wrong image.
*/
UT_2D_MATRIX_API void utMat4x3CalcColMatrix(Mat4x3 dst, CYGFX_FLOAT fContrast, CYGFX_FLOAT fBrightness, CYGFX_FLOAT fSaturation, CYGFX_FLOAT fHue );
/** \} */


#ifdef TRACE_MATRIX
/**
    Traces a generic matrix object.
    \param[in] szName Defines a string that is printed as the matrix name
    \param[in] m Matrix
    \param[in] nCols Number of columns in the matrix
    \param[in] nRows Number of rows in the matrix
*/
UT_2D_MATRIX_API void matTrace( const CYGFX_CHAR *szName, const CYGFX_FLOAT *m, CYGFX_U32 nCols, CYGFX_U32 nRows);
#endif /* TRACE_MATRIX */


/** \} */ /* end addtogroup */
/** \} */ /* end addtogroup */

#ifdef __cplusplus
    }
#endif

#endif /* PE_MATRIX_H */
