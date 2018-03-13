//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_MOVINGSOLDIERSTRATEGY_H
#define UNTITLED_MOVINGSOLDIERSTRATEGY_H
#include "Soldier.h"

class MovingSoldierStrategy {
public:
    virtual Point2d move(Soldier&)=0;

};


#endif //UNTITLED_MOVINGSOLDIERSTRATEGY_H
