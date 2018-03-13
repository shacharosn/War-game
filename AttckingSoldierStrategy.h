//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_ATTCKINGSOLDIERSTRATEGY_H
#define UNTITLED_ATTCKINGSOLDIERSTRATEGY_H

#include "Soldier.h"
class AttckingSoldierStrategy
{
public:
    virtual Soldier& attack(const Soldier&) const = 0;

};



#endif //UNTITLED_ATTCKINGSOLDIERSTRATEGY_H
