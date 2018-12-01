//
// Created by Owntrolf on 2018-11-30.
//

#ifndef LAB9_ENCHFAIRYLAND_DOOR_HPP
#define LAB9_ENCHFAIRYLAND_DOOR_HPP

#include "door.hpp"

static int doorCount = 0;
class enchFairyLand_door:public door {
int doorNum;
public:
    enchFairyLand_door()
    {
        doorNum = doorCount++;
    }
    int getDoorNum() override
    {
        return doorNum;
    }
};

#endif //LAB9_ENCHFAIRYLAND_DOOR_HPP
