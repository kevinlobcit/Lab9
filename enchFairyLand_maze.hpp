//
// Created by Owntrolf on 2018-11-30.
//

#ifndef LAB9_ENCHFAIRYLAND_MAZE_HPP
#define LAB9_ENCHFAIRYLAND_MAZE_HPP

#include "maze.hpp"

static int mazeCount = 0;
class enchFairyLand_maze:public maze {
int mazeNum;
public:
    enchFairyLand_maze()
    {
        mazeNum = mazeCount++;
    }

    int getMazeNum() override
    {
        return mazeNum;
    }
};

#endif //LAB9_ENCHFAIRYLAND_MAZE_HPP
