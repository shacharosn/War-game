//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_HUMENMOVINGSOLDIERSTRATEGY_H
#define UNTITLED_HUMENMOVINGSOLDIERSTRATEGY_H
#include "MovingSoldierStrategy.h"


class HumenMovingSoldierStrategy : public MovingSoldierStrategy{

public:
private:
    Point2d move(Soldier &soldier) override;
};


#endif //UNTITLED_HUMENMOVINGSOLDIERSTRATEGY_H
