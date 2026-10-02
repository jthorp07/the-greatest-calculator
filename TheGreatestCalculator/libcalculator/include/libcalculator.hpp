/**
 * @file libcalculator.hpp
 * 
 * @brief Include file for the libcalculator library
 */

#ifndef LIBCALC_LIBCALCULATOR_HPP
#define LIBCALC_LIBCALCULATOR_HPP

#include <utility>

#include "typedefs.hpp"
#include "unsigned_addition.hpp"

namespace calc {

/**
 * @brief Overload of the add function for unsigned addition
 * 
 * @tparam MaxOperand Maximum operand to prepare add to receive
 * 
 * @param[in] operandOne First operand
 * @param[in] operandTwo Second operand
 * 
 * @return The sum of operandOne and operandTwo
 */
template<UInt MaxOperand> UInt add(UInt operandOne, UInt operandTwo) {
    return findUnsignedAdder(operandOne, operandTwo, std::make_index_sequence<MaxOperand>{});
}

} // namespace calc

#endif // LIBCALC_LIBCALCULATOR_HPP
