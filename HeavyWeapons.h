//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_HEAVYWEAPONS_H
#define UNTITLED_HEAVYWEAPONS_H

#include "Weapon.h"
class HeavyWeapons  :  public Weapon{
public:
    virtual void collect() override=0;


};


#endif //UNTITLED_HEAVYWEAPONS_H
