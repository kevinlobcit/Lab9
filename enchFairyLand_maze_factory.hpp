//
// Created by Owntrolf on 2018-11-30.
//

#ifndef LAB9_ENCHFAIRYLAND_MAZE_FACTORY_HPP
#define LAB9_ENCHFAIRYLAND_MAZE_FACTORY_HPP

#include "maze_factory.hpp"
#include "enchFairyLand_maze.hpp"
#include "enchFairyLand_wall.hpp"
#include "enchFairyLand_room.hpp"
#include "enchFairyLand_door.hpp"


class enchFairyLand_maze_factory:public maze_factory {
public:
    maze make_maze()
    {
        return enchFairyLand_maze();
    }
    wall make_wall()
    {
        return make_wall();
    }
    room make_room()
    {
        return make_room();
    }
    door make_door()
    {
        return make_door();
    }


};

#endif //LAB9_ENCHFAIRYLAND_MAZE_FACTORY_HPP
