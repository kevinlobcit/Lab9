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
    enchFairyLand_maze_factory()
    {

    }
    maze* make_maze() override
    {
        return new enchFairyLand_maze();
    }
    wall* make_wall() override
    {
        return new enchFairyLand_wall();
    }
    room* make_room() override
    {
        return new enchFairyLand_room();
    }
    door* make_door() override
    {
        return new enchFairyLand_door();
    }


};

#endif //LAB9_ENCHFAIRYLAND_MAZE_FACTORY_HPP
