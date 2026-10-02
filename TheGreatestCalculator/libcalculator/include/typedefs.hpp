/**
 * @file typedefs.hpp
 * 
 * @brief Typedefs commonly used by the libcalculator library
 */

#ifndef LIBCALC_TYPEDEFS_HPP
#define LIBCALC_TYPEDEFS_HPP

#include <cstdint>
#include <limits>

namespace calc {

#ifdef LIBCALC_USE_SMALL_DATA
using UInt = std::uint8_t;
#elifdef LIBCALC_USE_MEDIUM_DATA
using UInt = std::uint32_t;
#endif
using UInt = std::uintmax_t;

constexpr UInt UIntMax = std::numeric_limits<UInt>::max();

} // namespace calc

#endif // LIBCALC_TYPEDEFS_HPP
