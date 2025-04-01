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
    \file        Coordinate.h
*/

#include <ostream>
#include <string>

#ifndef COORDINATE_H
#define COORDINATE_H


namespace coordinate {

#undef COORDINATE_DEBUG_FEATURES

/*
    \brief       Coordinate Class.
    This is the storage class for each coordinate tuple
*/
class Coordinate {
  public:
    /** Constructor */
    Coordinate () {
      this->x = 0;
      this->y = 0;
    }
    /**
        Constructor
        \param x
        \param y
    */
    Coordinate (double x, double y) {
      this->x = x;
      this->y = y;
    }
    /** X coordinate */
    double x;
    /** Y coordinate */
    double y;

    /**
        Convert the coordinate tuple from double to fixed point notation.
        \param num_int number of integer places
        \param num_dec number of decimal places
        \return conversion error
    */
    int double2fix(int num_int, int num_dec);

    /**
        Convert the coordinate tuple from double to fixed point notation.
        \param num_int number of integer places
        \param num_dec number of decimal places
        \param offset flag to indicate offset mode
        \return conversion error
    */

    int double2fix(int num_int, int num_dec, int offset);

    /**
        Convert the coordinate tuple from fixed point notation to double notation.
        \param num_int number of integer places
        \param num_dec number of decimal places
    */
    void fix2double(unsigned int num_int, unsigned int num_dec);

    /**
        Output stream operator. Prints x and y coordinates separated by a space to output stream.
    */
    friend std::ostream& operator << (std::ostream &os, const Coordinate& c);

    /**
        See fix2double() with non offset mode
    */
    static double fix2double(unsigned int x, int num_int, int num_dec);

    /**
        Convert from fixed point notation back to a double notation. If the offset mode is set, the
        sub-precision bit is set to one before converting to double notation.
        \param x unsigned int value to convert
        \param num_int number of integer places
        \param num_dec number of decimal places
        \param offset flag to indicate offset mode
        \return double value
    */
    static double fix2double(unsigned int x, int num_int, int num_dec, int offset);

    /**
        Convert from double to two's complement fixed point notation.
        If the most significant bits are truncated the error flag is set to 1.
        Setting the error flag will not interrupt the calculation but will most likely
        lead to wrong results in a following processing step.
        The following formula is used to represent the fixed point values.

        \f[
        x = \sum_{n=-d}^{N-d-2}x_{n} 2^{n}, \mbox{ for } x \geq 0
        \f]
        *
        \f[
        x = -2^{N-d-1} + \sum_{n=-d}^{N-d-2}x_{n} 2^{n}, \mbox{ for }  x < 0
        \f]
        Where \f$N\f$ is the word length (num_int+num_dec) an \f$d\f$ is the decimal length (num_dec = wl-iwl).
        The conversion uses saturation mode. Larger values than the fixed point notation can store are set to the largest value;
        the error is set to 1 if the value is outside the rounding interval.
        If the value is lower than the fixed point notation can store the smallest possible value is returned; the error is set
        to 2 if the value is outside the rounding interval.
        Decimal places lower than the resolution are rounded by default.
        \note The conversion is supposed to comply to a sc_fix conversion with sc_fxtype_params fxt(wl, iwl, SC_RND_CONV, SC_SAT)
        with a iwl smaller or equal to 32.
        \param x double value to convert
        \param num_int number of integer places
        \param num_dec number of decimal places
        \param error reference to error flag, on error set to 1
        \return fixed point value as unsigned int
    */
    static unsigned int double2fix(double x, int num_int, int num_dec, int& error);

    /**
        Wrapper method for double to fixed point conversion, switches between offset
        and non-offset method and directly handles the implied offset mode
        (sub precision bit set for 1 and 2 bpp).
        \param x double value to convert
        \param num_int number of integer places
        \param num_dec number of decimal places
        \param error reference to error flag, on error set to 1
        \param offset flag to indicate offset mode
        \return fixed point value as unsigned int
    */
    static unsigned int double2fix(double x, int num_int, int num_dec, int& error, int offset);

    /**
        Truncate a value in double precision to the corresponding fixed point truncated double notation.
        The methods converts the supplies double value to a fixed point value.
        Afterwards the fixed point value is converted back to a double value, which is returned.
        This method eases the calculation of the error caused by the fixed point conversion.
        \param x double value to convert
        \param num_int number of integer places
        \param num_dec number of decimal places
        \param error reference to error flag, on error set to 1
        \param offset [0=Disable, 1=Enable] symmetric offset (subgrid bit set 0.03125)
        \return double value (fixed point truncated value)
    */
    static double trunc2fix(double x, int num_int, int num_dec, int& error, int offset);

#ifdef COORDINATE_DEBUG_FEATURES
    /**
        Print 32 bit unsigned int bitwise to standard output for easier fixed point debugging.
        \param x unsigned int to print
        \note debug feature only
    */
    static void printbin (unsigned int x);
#endif

 private:

};

} // namespace
#endif
