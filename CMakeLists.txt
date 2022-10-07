#-------------------------------------------------------------------#
# cmake version

cmake_minimum_required(VERSION 3.20)

#-------------------------------------------------------------------#
# project flags config

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

#-------------------------------------------------------------------#
# project config

project(parametrized_singleton)

#-------------------------------------------------------------------#
# project sources

set(SOURCES
    color.hpp
    dynamically_allocated_singleton.cpp
    dynamically_allocated_singleton.hpp
    main.cpp
    shape.hpp
    template_based_singleton.hpp
)

#-------------------------------------------------------------------#
# project type

add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/${SOURCES})

#-------------------------------------------------------------------#