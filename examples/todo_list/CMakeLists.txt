cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project("Todo List")

enable_testing()

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
    "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  set(warnings "-Wall -Wextra -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
  SET(warnings "/W4 /WX /EHsc")
endif()

if (NOT CONFIGURED_ONCE)
  set(CMAKE_CXX_FLAGS "${warnings}"
    CACHE STRING "Flags used by the compiler during all build types." FORCE)
  set(CMAKE_C_FLAGS "${warnings}"
    CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()

add_executable(todoList main.cc Todo.cc)

add_test(todoTest todoList)

set(CONFIGURED_ONCE TRUE CACHE INTERNAL "${warnings}"
  "A flag showing that CMake has configured at least once.")

