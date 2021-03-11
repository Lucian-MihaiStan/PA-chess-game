cmake_minimum_required(VERSION 3.17)
project(PA_chess_game_luci)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PA_chess_game_luci
        Board.cpp
        Command.cpp
        main.cpp
        Pawn.cpp
        Piece.cpp
        Position.cpp)
