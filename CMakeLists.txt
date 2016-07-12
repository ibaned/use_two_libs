cmake_minimum_required(VERSION 2.8.11)
project(use_two_libs)

set(USE_TWO_LIBS_MAJOR "0")
set(USE_TWO_LIBS_MINOR "1")
set(USE_TWO_LIBS_PATCH "0")

# CMake RPATH "always full" configuration, see:
# https://cmake.org/Wiki/CMake_RPATH_handling#Always_full_RPATH
# use, i.e. don't skip the full RPATH for the build tree
set(CMAKE_SKIP_BUILD_RPATH False)
# when building, don't use the install RPATH already
# (but later on when installing)
set(CMAKE_BUILD_WITH_INSTALL_RPATH False)
# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH True)

set(two_libs_PREFIX "" CACHE STRING "two_libs install")

find_package(two_libs 0.1.0 REQUIRED PATHS ${two_libs_PREFIX})

add_executable(use_two_libs use_two_libs.c)
target_link_libraries(use_two_libs mult_nums)
