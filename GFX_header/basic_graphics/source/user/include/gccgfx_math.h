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
/*****************************************************************************/


/**
 * \file    gccgfx_math.h
 */


#ifndef GCCGFX_MATH_H
#define GCCGFX_MATH_H


/*****************************************************************************/
/*** INCLUDES ****************************************************************/
/*****************************************************************************/
/* Deviation from MISRA C:2012 Dir-4.9.
   Justification: The choice of using a function-like macro here is done in order to 
                  allow an easier understanding of the code 
                  without incurring the overhead of a function call.    */
/* PRQA S 3453 EOF */


#include <math.h>

#ifdef __cplusplus
extern "C"
{
#endif

/**
* \addtogroup gccgfx_math
* \brief      Math library provides matrix operation functions, etc.
*/

/** \{ */

/*****************************************************************************/
/*** DEFINITIONS *************************************************************/
/*****************************************************************************/
#define GCCGFX_MATH_FLOAT_ZERO 0.0f     /**< 0 in math lib float. */
#define GCCGFX_MATH_FLOAT_ONE  1.0f     /**< 1 in math lib float. */
#define GCCGFX_MATH_FLOAT_HALF 0.5f     /**< 0.5 in math lib float. */
#define GCCGFX_MATH_EPSILON    0.00001f /**< Tolerance for floating point comparison */
/**
    Convert an int32 to an uint32. As only C99 is supported, a type cast can safely
    be used.

    \param [in] a  Value of type CYGFX_S32 to be converted to CYGFX_U32.

**/
#define GCCGFX_MATH_INT32_TO_UINT32(a) ((CYGFX_U32)(a))

/**
    Convert int to math lib float.

    \param [in] a  Integer value to be converted to an CYGFX_FLOAT value.

**/
#define GCCGFX_MATH_INT2FLOAT(a) ((CYGFX_FLOAT)(a))

/**
    Check that the math lib float is approximately one.

    \param [in] x  Value to be compared with one.

**/
#define GCCGFX_MATH_FLOAT_IS_ONE(x) (((1.0f - GCCGFX_MATH_EPSILON) < (x)) && ((x) < (1.0f + GCCGFX_MATH_EPSILON)))

/**
    Check that the math lib float is approximately |one|.

    \param [in] x  Number whose absolute value is to be compared with one.

**/
#define GCCGFX_MATH_FLOAT_IS_ABS_ONE(x) ((((1.0f - GCCGFX_MATH_EPSILON) < (x)) && ((x) < (1.0f + GCCGFX_MATH_EPSILON))) || (((-1.0f - GCCGFX_MATH_EPSILON) < (x)) && ((x) < (-1.0f + GCCGFX_MATH_EPSILON))))

/**
    Check that the math lib float is approximately zero.

    \param [in] x  Value to be compared with zero.

**/
#define GCCGFX_MATH_FLOAT_IS_ZERO(x) ((- GCCGFX_MATH_EPSILON < (x)) && ((x) < GCCGFX_MATH_EPSILON))

/**
    Round math lib float to an integer in math lib float format.

    \param [in] x  Value to be rounded.

**/
#define GCCGFX_MATH_FLOAT_ROUND(x) floorf((x)+0.5f)

/**
    Calculate floorf() of a float value.

    \param [in] val  Value to calculate

    \retval floorf(val)
**/
#define GCCGFX_MATHFLOOR(val) (floorf((CYGFX_FLOAT)(val)))

/**
    Calculate ceilf() of a float value.

    \param [in] val  Value to calculate

    \retval ceilf(val)
**/
#define GCCGFX_MATHCEIL(val) (ceilf((CYGFX_FLOAT)(val)))

/**
    Calculate the absolute value of a float value.

    \param [in] val  Value to calculate

    \retval fabs(val)
**/
#define GCCGFX_MATHABS(val) (fabsf((CYGFX_FLOAT)(val)))


/*****************************************************************************/
/*** TYPES / STRUCTURES ******************************************************/
/*****************************************************************************/
typedef CYGFX_FLOAT IRIS_MATH_M3X2[6]; /**< Matrix for geometry operations (3*2) in math lib float */

typedef CYGFX_FLOAT IRIS_MATH_M3X3[9]; /**< Matrix for geometry operations (3*3) in math lib float */

typedef CYGFX_FLOAT IRIS_MATH_M4x3[12]; /**< Matrix for color operations (4*3) in math lib float */

/*****************************************************************************/
/*** GLOBAL VARIABLES ********************************************************/
/*****************************************************************************/

/* N/A */

/*****************************************************************************/
/*** FUNCTIONS ***************************************************************/
/*****************************************************************************/
/**
    Convert a float value into a fixed-point value and check the range. The inline
    specifier was used because int_bits and fraction_bits are fix and many
    calculations based on this can be optimized by compiler. The function body is
    in the header because some linker does not find the function if it is in a c
    file. Note: int_bits + fraction_bits + shift < 32!

    \param [in] fIn  Value to convert
    \param [in] int_bits  Number of integer bits including sign bit
    \param [in] fraction_bits  Number of fraction bits
    \param [in] shift  Defines how many bits the result is shifted to left
    \param [out] val  Pointer to get the result

    \retval CYGFX_OK On success. Otherwise the related error code.
**/
CYGFX_STATIC CYGFX_INLINE CYGFX_ERROR GccGfx_MathFloat2Sfix( CYGFX_FLOAT     fIn,
                                                             const CYGFX_U32 int_bits,
                                                             const CYGFX_U32 fraction_bits,
                                                             const CYGFX_U32 shift,
                                                             CYGFX_U32*      val);

/**
    Like GccGfx_MathFloat2Sfix but for fragments == 0.5 it rounds to the lower
    value. Note: int_bits + fraction_bits + shift < 32!

    \param [in] fIn  Value to convert
    \param [in] int_bits  Number of integer bits including sign bit
    \param [in] fraction_bits  Number of fraction bits
    \param [in] shift  Defines how many bits the result is shifted to left
    \param [out] val  Pointer to get the result

    \retval CYGFX_OK On success. Otherwise the related error code.
**/
CYGFX_STATIC CYGFX_INLINE CYGFX_ERROR GccGfx_MathFloat2SfixDown( CYGFX_FLOAT     fIn,
                                                                 const CYGFX_U32 int_bits,
                                                                 const CYGFX_U32 fraction_bits,
                                                                 const CYGFX_U32 shift,
                                                                 CYGFX_U32*      val);

/** \name Matrix functions for geometric operations
 */
/** \{ */

/**
    Copy a 3*2 or 3*3 src matrix to a 3*2 or 3*3 dst or load identity if no src is
    given.

    \param [in] dst[]  Destination matrix
    \param [in] src[]  Source matrix
    \param [in] dst_size  Destination matrix size (6 for 3x2 matrix; 9 for 3x3
                          matrix)
    \param [in] src_size  Source matrix size (6 for 3x2 matrix; 9 for 3x3 matrix)

    \retval None
**/
CYGFX_EXTERN void GccGfx_MathMatCopy( CYGFX_FLOAT       dst[],
                                      const CYGFX_FLOAT src[],
                                      CYGFX_U32         dst_size,
                                      CYGFX_U32         src_size);

/**
    Calculate the inverted matrix.

    \param [in] m  The matrix to modify

    \retval ::CYGFX_OK On success, otherwise the related error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_MathMat3x2Invert( IRIS_MATH_M3X2 m);

/**
    Calculate the target position for a given matrix and source position.

    \param [in] m  The matrix
    \param [in] size  Destination matrix size (6 for 3x2 matrix; 9 for 3x3 matrix)
    \param [in] x  Source x position
    \param [in] y  Source y position
    \param [out] xout  Pointer to the destination x position
    \param [out] yout  Pointer to the destination y position

    \retval CYGFX_OK On success. Otherwise the related error code.
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_MathMatGetXY( const CYGFX_FLOAT* m,
                                              CYGFX_U32          size,
                                              const CYGFX_FLOAT  x,
                                              const CYGFX_FLOAT  y,
                                              CYGFX_FLOAT*       xout,
                                              CYGFX_FLOAT*       yout);

/**
    Fill the matrix with "1"s in the main diagonal and with "0"s elsewhere.

    \param [in] m  The matrix

    \retval None
**/
CYGFX_EXTERN void GccGfx_MathMat3x2LoadIdentity( IRIS_MATH_M3X2 m);

/**
    Check if the matrix is the identity matrix.

    \param [in] m  The matrix

    \retval CYGFX_TRUE If m is the identity matrix.
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_MathMat3x2IsIdentity( IRIS_MATH_M3X2 m);

/**
    dst = src1 * src2

    \param [out] dst  The destination matrix
    \param [in] src1  The source matrix
    \param [in] src2  The source matrix

    \retval None
**/
CYGFX_EXTERN void GccGfx_MathMat3x2Multiply(IRIS_MATH_M3X2 dst, const IRIS_MATH_M3X2 src1, const IRIS_MATH_M3X2 src2);

/**
    Check if the 3x3 matrix is the identity matrix.

    \param [in] m  The matrix

    \retval CYGFX_TRUE If m is the identity matrix.
**/
CYGFX_EXTERN CYGFX_BOOL GccGfx_MathMat3x3IsIdentity( IRIS_MATH_M3X3 m);

/**
    Calculate the inverse matrix for a given matrix

    \param [in,out] m  The matrix to be inverted

    \retval         ::CYGFX_OK On success\n
    \retval         ::CYGFX_ERP_ERR_MATH_INVALID_MATRIX If the matrix is singular.\n
**/
CYGFX_EXTERN CYGFX_ERROR GccGfx_MathMat3x3Invert( IRIS_MATH_M3X3 m);

/**
    Calculate the fractional part of a value.

    \param [in] val  Value to calculate

    \retval The fractional part of the val argument
**/
/* Deviation from MISRA C:2012 Rule-5.9
   Deviation from MISRA C:2012 Rule-2.1
   Justification: - This static inline function is only defined in this header
                  file uniquely. 
                  - The warning comes from the way the driver is designed 
                  (e.g. intensive use of pointers, pointer to incomplete types, 
                  static functions in headers for performance reasons, more than one return path etc.).
                  - The idea is to have this object/function locally and allow the compiler to optimize as much as possible. */
/* PRQA S 1527,3219,3480 1 */
CYGFX_STATIC CYGFX_INLINE CYGFX_FLOAT GccGfx_MathFract(CYGFX_FLOAT val)
{
    return val - floorf(val);
}

/**
    Calculate the square root of a value.

    \param [in] val  Value to calculate

    \retval sqrt(val)
**/
/* Deviation from MISRA C:2012 Rule-5.9
   Deviation from MISRA C:2012 Rule-2.1
   Justification: - This static inline function is only defined in this header
                  file uniquely. 
                  - The warning comes from the way the driver is designed 
                  (e.g. intensive use of pointers, pointer to incomplete types, 
                  static functions in headers for performance reasons, more than one return path etc.).
                  - The idea is to have this object/function locally and allow the compiler to optimize as much as possible. */
/* PRQA S 1527,3219,3480 1 */
CYGFX_STATIC CYGFX_INLINE CYGFX_FLOAT GccGfx_MathSqrt(CYGFX_FLOAT val)
{
    GCCGFX_ERP_ASSERT(0.0f <= val);
    return (CYGFX_FLOAT)sqrtf(val);
}

/**
    Convert a float value in fix point and check the range.
    The inline specifier was used because int_bits and fraction_bits are fix
    and many calculations based on this can be optimized by compiler.
    The function body is in the header because some linker does not find
    the function if it is in a c file.
    Note: int_bits + fraction_bits + shift < 32!
    \param[in] fIn Value to convert
    \param[in] int_bits Number of integer bits including sign bit
    \param[in] fraction_bits Number of fraction bits
    \param[in] shift Defines how many bits the result is shifted to left
    \param[in,out] val Pointer to get the result
    \retval CYGFX_OK on success. Otherwise the related error code.
**/
/* Deviation from MISRA C:2012 Rule-5.9
   Deviation from MISRA C:2012 Rule-2.1
   Justification: - This static inline function is only defined in this header
                  file uniquely. 
                  - The warning comes from the way the driver is designed 
                  (e.g. intensive use of pointers, pointer to incomplete types, 
                  static functions in headers for performance reasons, more than one return path etc.).
                  - The idea is to have this object/function locally and allow the compiler to optimize as much as possible. */
/* PRQA S 1527,3219,3480 1 */
CYGFX_STATIC CYGFX_INLINE CYGFX_ERROR GccGfx_MathFloat2Sfix( CYGFX_FLOAT      fIn,
                                                             const CYGFX_U32  int_bits,
                                                             const CYGFX_U32  fraction_bits,
                                                             const CYGFX_U32  shift,
                                                             CYGFX_U32*       val )
{
    CYGFX_S32 ret;
    CYGFX_U32 retU;

#ifndef PRODUCTION
    {
        /* Do additional test only in release version:
            - e.g. if 10 int bits and 10 fraction_bits the production version does not identify 0xf000000 as error
            - if int_bits + fraction_bits) == 32 no errors will be found at all
        */
        CYGFX_U32   i;
        CYGFX_FLOAT fCompare;

        retU = 0;
        for (i = 0; i < (int_bits + fraction_bits - 1); i++)
        {
            retU = (retU << 1U) + 1U;
        }
        fCompare = (CYGFX_FLOAT)retU / (CYGFX_FLOAT)(1 << fraction_bits);
        if ((fIn <= -fCompare) || (fIn >= fCompare))
        {
            return CYGFX_ERP_ERR_MATH_INVALID_FLOAT;
        }
    }
#endif /* ifndef PRODUCTION */
    /* Deviation from MISRA C:2012 Rule-10.8
       Justification: This solution is selected for performance reasons. */
    /* PRQA S 4394 1 */
    fIn *= (CYGFX_FLOAT)(1uL << fraction_bits);
    if (fIn < GCCGFX_MATH_FLOAT_ZERO)
    {
        fIn -= GCCGFX_MATH_FLOAT_HALF;
        ret  = (CYGFX_S32)(fIn);
        /* for symmetry reason we report the same error like on positive direction
           although we can support one more value. */
        if ((((CYGFX_U32)(-ret)) & (0xffffffffu << ((int_bits + fraction_bits) - 1u))) != 0u)
        {
            return CYGFX_ERP_ERR_MATH_INVALID_FLOAT;
        }
        retU = GCCGFX_MATH_INT32_TO_UINT32(ret);
        /* cut the first (negative) bits */
        if ((int_bits + fraction_bits) < 32u)
        {
            retU &= ((1uL << (int_bits + fraction_bits)) - 1u);
        }
    }
    else
    {
        fIn += GCCGFX_MATH_FLOAT_HALF;
        retU = (CYGFX_U32)(fIn);
        if ((retU & (0xffffffffu << ((int_bits + fraction_bits) - 1u))) != 0u)
        {
            return CYGFX_ERP_ERR_MATH_INVALID_FLOAT;
        }
    }
    retU <<= shift;
    *val   = retU;

    return CYGFX_OK;
}

/**
    Similar to GccGfx_MathFloat2Sfix but for fractional part == 0.5 it rounds to the lower value.
    Note: int_bits + fraction_bits + shift < 32!
    \param[in] fIn Value to convert
    \param[in] int_bits Number of integer bits including sign bit
    \param[in] fraction_bits Number of fraction bits
    \param[in] shift Defines how many bits the result is shifted to left
    \param[in,out] val Pointer to get the result
    \retval CYGFX_OK on success. Otherwise the related error code.
**/
/* Deviation from MISRA C:2012 Rule-5.9
   Deviation from MISRA C:2012 Rule-2.1
   Justification: -This static inline function is only defined in this header
                   file uniquely.
                  - The warning comes from the way the driver is designed 
                  (e.g. intensive use of pointers, pointer to incomplete types, 
                  static functions in headers for performance reasons, more than one return path etc.).
                  - The idea is to have this object/function locally and allow the compiler to optimize as much as possible. */
/* PRQA S 1527,3219,3480 1 */
CYGFX_STATIC CYGFX_INLINE CYGFX_ERROR GccGfx_MathFloat2SfixDown( CYGFX_FLOAT      fIn,
                                                                 const CYGFX_U32  int_bits,
                                                                 const CYGFX_U32  fraction_bits,
                                                                 const CYGFX_U32  shift,
                                                                 CYGFX_U32*       val )
{
    CYGFX_S32   ret;
    CYGFX_U32   retU;
    CYGFX_FLOAT fInFraq;

#ifndef PRODUCTION
    {
        /* Do additional test only in release version:
            - e.g. if 10 int bits and 10 fraction_bits the production version does not identify 0xf000000 as error
            - if int_bits + fraction_bits) == 32 no errors will be found at all
        */
        CYGFX_U32   i;
        CYGFX_FLOAT fCompare;

        retU = 0;
        for (i = 0; i < (int_bits + fraction_bits - 1); i++)
        {
            retU = (retU << 1U) + 1U;
        }
        fCompare = (CYGFX_FLOAT)retU / (1 << fraction_bits);
        if ((fIn <= -fCompare) || (CYGFX_FLOAT)(fIn >= fCompare))
        {
            return CYGFX_ERP_ERR_MATH_INVALID_FLOAT;
        }
    }
#endif /* ifndef PRODUCTION */
    /* Deviation from MISRA C:2012 Rule-10.8
       Justification: This solution is selected for performance reasons. */
    /* PRQA S 4394 1 */
    fIn    *= (CYGFX_FLOAT)(1uL << fraction_bits);
    fInFraq = fIn - (CYGFX_FLOAT)floorf(fIn);
    if (fIn < GCCGFX_MATH_FLOAT_ZERO)
    {
        if (fInFraq != GCCGFX_MATH_FLOAT_HALF)
        {
            fIn -= GCCGFX_MATH_FLOAT_HALF;
        }
        ret = (CYGFX_S32)(fIn);
        /* for symmetry reason we report the same error like on positive direction
           although we can support one more value. */
        if ((((CYGFX_U32)(-ret)) & (0xffffffffu << ((int_bits + fraction_bits) - 1u))) != 0u)
        {
            return CYGFX_ERP_ERR_MATH_INVALID_FLOAT;
        }
        retU = GCCGFX_MATH_INT32_TO_UINT32(ret);
        if ((int_bits + fraction_bits) < 32u)
        {
            retU &= ((1uL << (int_bits + fraction_bits)) - 1u);
        }
    }
    else
    {
        if (fInFraq != GCCGFX_MATH_FLOAT_HALF)
        {
            fIn += GCCGFX_MATH_FLOAT_HALF;
        }
        retU = (CYGFX_U32)(fIn);
        if ((retU & (0xffffffffu << ((int_bits + fraction_bits) - 1u))) != 0u)
        {
            return CYGFX_ERP_ERR_MATH_INVALID_FLOAT;
        }
    }
    retU <<= shift;
    *val   = retU;

    return CYGFX_OK;
}

/** \} */


/** \} end addtogroup */

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /* GCCGFX_MATH_H */

