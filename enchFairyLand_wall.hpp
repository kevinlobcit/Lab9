//
// Created by Owntrolf on 2018-11-30.
//

#ifndef LAB9_ENCHFAIRYLAND_WALL_HPP
#define LAB9_ENCHFAIRYLAND_WALL_HPP

#include "wall.hpp"

static int wallCount = 0;
class enchFairyLand_wall:public wall {
int wallNum;
public:
    enchFairyLand_wall()
    {
        wallNum = wallCount++;
    }

    int getWallNum() override
    {
        return wallNum;
    }
};

#endif //LAB9_ENCHFAIRYLAND_WALL_HPP
