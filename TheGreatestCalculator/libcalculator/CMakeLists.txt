# Build root for libcalculator
cmake_minimum_required(VERSION 3.31)

project(LibCalculator
  VERSION 0.0.0
  DESCRIPTION "Possibly the greatest implementation of math operations ever"
  LANGUAGES CXX)

# In the future, the library will be configured differently
# if it is the top level project
if(PROJECT_IS_TOP_LEVEL)

else()

endif()

# Compile-time configuration options
option(LIBCALC_USE_SMALL_DATA "If set, libcalculator will build using small data types" OFF)
option(LIBCALC_USE_MEDIUM_DATA "If set, libcalculator will build using medium data types" OFF)

add_library(libcalculator)
target_compile_features(libcalculator PRIVATE cxx_std_20)
target_include_directories(libcalculator
  PUBLIC
    "include")
target_sources(libcalculator
  PRIVATE
    "src/libcalculator.cpp"
      
  PUBLIC
  FILE_SET HEADERS
    FILES
      "include/libcalculator.hpp")

# Configure to build with smaller data types?
if(LIBCALC_USE_SMALL_DATA)
  target_compile_definitions(libcalculator PRIVATE LIBCALC_USE_SMALL)
elseif(LIBCALC_USE_MEDIUM_DATA)
  target_compile_definitions(libcalculator PRIVATE LIBCALC_USE_MEDIUM_DATA)
endif()
