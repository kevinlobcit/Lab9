//
// Created by Owntrolf on 2018-11-30.
//

#ifndef LAB9_MAZE_FACTORY_HPP
#define LAB9_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

class maze_factory{
public:
    maze_factory(){};
    virtual maze* make_maze()=0;
    virtual wall* make_wall()=0;
    virtual room* make_room()=0;
    virtual door* make_door()=0;
    virtual ~maze_factory(){};


};


#endif //LAB9_MAZE_FACTORY_HPP
