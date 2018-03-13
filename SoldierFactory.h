//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_SOLDIERFACTORY_H
#define UNTITLED_SOLDIERFACTORY_H

#include "RegularSoldier.h"
#include "ParamedicSoldier.h"
#include "SniperSoldier.h"

class SoldierFactory
{
public:
    Soldier * GetSoldier(string type);
};

#endif //UNTITLED_SOLDIERFACTORY_H
