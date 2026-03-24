
# joyrideturbo - ReXGlue Recompiled Project
#
# This file is yours to edit. 'rexglue migrate' will NOT overwrite it.
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(joyrideturbo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(JOYRIDETURBO_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(joyrideturbo WIN32 ${JOYRIDETURBO_SOURCES})
else()
    add_executable(joyrideturbo ${JOYRIDETURBO_SOURCES})
endif()

rexglue_setup_target(joyrideturbo)
