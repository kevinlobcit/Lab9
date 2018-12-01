//
// Created by Owntrolf on 2018-11-30.
//

#ifndef LAB9_ENCHFAIRYLAND_ROOM_HPP
#define LAB9_ENCHFAIRYLAND_ROOM_HPP

#include "room.hpp"

static int roomCount = 0;
class enchFairyLand_room:public room {
int roomNum;
public:
    enchFairyLand_room()
    {
        roomNum = roomCount++;
    }
    int getRoomNum() override
    {
        return roomNum;
    }
};

#endif //LAB9_ENCHFAIRYLAND_ROOM_HPP
