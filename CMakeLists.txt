cmake_minimum_required(VERSION 3.27)
project(CTacToe VERSION 0.1.0 LANGUAGES C CXX)

find_package(raylib REQUIRED)

include_directories(CTacToe PRIVATE objects)

include(CTest)
enable_testing()

add_executable(CTacToe main.cpp
               objects/Game.hpp
               objects/Game.cpp
               objects/Board.hpp
               objects/Board.cpp)

target_link_libraries(CTacToe PRIVATE raylib)
target_compile_features(CTacToe PRIVATE cxx_std_11)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
