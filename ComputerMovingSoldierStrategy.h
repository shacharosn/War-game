//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_COMPUTERMOVINGSOLDIERSTRATEGY_H
#define UNTITLED_COMPUTERMOVINGSOLDIERSTRATEGY_H
#include "MovingSoldierStrategy.h"


class ComputerMovingSoldierStrategy : public MovingSoldierStrategy{
    Point2d move(Soldier &soldier) override;
};


#endif //UNTITLED_COMPUTERMOVINGSOLDIERSTRATEGY_H
