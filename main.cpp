#include <iostream>

#include "enchFairyLand_maze_factory.hpp"

#include "maze_factory.hpp"
#include "maze_game.hpp"
int main() {

    maze_game game = maze_game();
    maze_factory* factory = new enchFairyLand_maze_factory();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}