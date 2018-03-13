//
// Created by shachar on 12/21/2017.
//

#include "SoldierFactory.h"


Soldier * SoldierFactory::GetSoldier(string type)
{
    if (type == "normal") return new RegularSoldier();
    if (type == "paramedic") return new ParamedicSoldier();
    if (type == "sniper") return new SniperSoldier();
    return NULL;
}
