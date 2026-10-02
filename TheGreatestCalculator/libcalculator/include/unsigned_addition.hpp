/**
 * @file unsigned_addition.hpp
 * 
 * @brief Defines the most glorious template for performing the
 *        addition of two unsigned integers
 */

#ifndef LIBCALC_UNSIGNEDADDITION_HPP
#define LIBCALC_UNSIGNEDADDITION_HPP

#include <utility>

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

/**
 * @brief For its designated first operand, invokes the adders that accept the
 *        first operand with every possible second operand to determine if one
 *        of them can add the two operands
 * 
 * @tparam OperandOne First operand in the operand pair this lookup accepts
 * @tparam AllOperands The sequence of all possible operands to invoke
 *         adders with
 * 
 * @param[in] operandOne First operand
 * @param[in] operandTwo Second operand
 * @param[out] result Result of adding the first and second operand
 * 
 * @return Operation success status
 * @retval true Success
 * @retval false Failure
 */
template<UInt OperandOne, UInt... AllOperands>
bool addSecondUnsignedOperand(UInt operandOne, UInt operandTwo, UInt& result, std::index_sequence<AllOperands...>) {

    /**
     * For each possible second operand, check if its adder for the current operandOne
     * is the one we are looking for
     */
    return (unsignedAdder<OperandOne, AllOperands>(operandOne, operandTwo, result) || ...);
}

/**
 * @brief Entrypoint for the unsigned addition algorithm. Finds the correct adder
 *        and gets its result
 * 
 * @tparam AllOperands The sequence of all possible operands to invoke
 *         adders with
 * 
 * @param[in] operandOne First operand
 * @param[in] operandTwo Second operand
 * 
 * @return The sum of operandOne and operandTwo
 */
template<UInt... AllOperands>
UInt findUnsignedAdder(UInt operandOne, UInt operandTwo, std::index_sequence<AllOperands...>) {

    /**
     * Addition is hard and sometimes it doesn't work. Initialize result
     * just in case
     */
    UInt result = 0;

    /**
     * For each first operand, check the adder for it and every possible second
     * operand. If it is possible to compute the answer, it will be found
     */
    (addSecondUnsignedOperand<AllFirstOperands>(operandOne, operandTwo, result, std::make_index_sequence<UIntMax>{}) || ...);

    return result;
}

} // namespace calc

#endif // LIBCALC_UNSIGNED_ADDITION_HPP
