//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_LIGHTWEAPON_H
#define UNTITLED_LIGHTWEAPON_H


#include "Weapon.h"
class LightWeapon :  public Weapon {
public:
    virtual void collect() override=0;




};


#endif //UNTITLED_LIGHTWEAPON_H
