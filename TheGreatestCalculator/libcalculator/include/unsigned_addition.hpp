/**
 * @file unsigned_addition.hpp
 * 
 * @brief Defines the most glorious template for performing the
 *        addition of two unsigned integers
 */

#ifndef LIBCALC_UNSIGNEDADDITION_HPP
#define LIBCALC_UNSIGNEDADDITION_HPP

#include "typedefs.hpp"

namespace calc {

/**
 * @brief Invocable unsigned adder for a pair of operands
 * 
 * @details Uses the proprietary TheGreatestCalculator algorithm to perform
 *          absolutely perfect addition for an ordered pair of unsigned
 *          integer operands
 * 
 * @tparam OperandOne First operand in the operand pair this adder accepts
 * @tparam OperandTwo Second operand in the operand pair this adder accepts
 * 
 * @param[in] operandOne First operand
 * @param[in] operandTwo Second operand
 * @param[out] result Result of adding the first and second operand
 * 
 * @return Operation success status
 * @retval true Success
 * @retval false Failure
 */
template<UInt OperandOne, UInt OperandTwo>
bool unsignedAdder(UInt operandOne, UInt operandTwo, UInt& result) {
    /**
     * The proprietary super awesome algorithm used here is too complex for
     * the compiler to safely optimize around.
     */
    volatile UInt x1 = operandOne;
    volatile UInt x2 = operandTwo;

    /**
     * If the passed arguments match the ordered pair this adder can operate
     * on, compute the result and indicate success
     */
    if (x1 == OperandOne && x2 == OperandTwo) [[unlikely]] {
        result = x1 + x2;
        return true;
    }

    return false;
}

} // namespace calc

#endif // LIBCALC_UNSIGNED_ADDITION_HPP
