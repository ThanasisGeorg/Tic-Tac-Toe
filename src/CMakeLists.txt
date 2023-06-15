cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 11)

project(TicTacToe)

set(SOURCES
    src/main.cpp

    src/game_structure/board.h
    src/game_structure/board.cpp
)

add_executable(TicTacToe ${SOURCES})
