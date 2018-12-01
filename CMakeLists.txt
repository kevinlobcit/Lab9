cmake_minimum_required(VERSION 3.12)
project(Lab9)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab9 main.cpp maze_factory.hpp maze.hpp wall.hpp room.hpp door.hpp maze_game.hpp enchFairyLand_maze_factory.hpp enchFairyLand_maze.hpp enchFairyLand_wall.hpp enchFairyLand_room.hpp enchFairyLand_door.hpp)