//
// Created by Owntrolf on 2018-11-30.
//

#ifndef LAB9_MAZE_FACTORY_HPP
#define LAB9_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

class maze_factory {
public:
    virtual maze make_maze();
    virtual wall make_wall();
    virtual room make_room();
    virtual door make_door();


};


#endif //LAB9_MAZE_FACTORY_HPP
