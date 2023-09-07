cmake_minimum_required(VERSION 3.5)

project(CADEX)

set(SOURCES
    main.cpp
    curve.cpp
)

set(HEADERS
    curve.hpp
)

add_executable(CADEX ${SOURCES} ${HEADERS})

set_target_properties (
    CADEX PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)