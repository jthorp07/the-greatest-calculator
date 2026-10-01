/**
 * @file typedefs.hpp
 * 
 * @brief Typedefs commonly used by the libcalculator library
 */

#ifndef LIBCALC_TYPEDEFS_HPP
#define LIBCALC_TYPEDEFS_HPP

#include <cstdint>

namespace calc {

#ifdef LIBCALC_USE_SMALL_DATA
using UInt = std::uint8_t;
#elifdef LIBCALC_USE_MEDIUM_DATA
using UInt = std::uint32_t;
#endif
using UInt = std::uintmax_t;

} // namespace calc

#endif // LIBCALC_TYPEDEFS_HPP
