//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_SHIELDARMOR_H
#define UNTITLED_SHIELDARMOR_H

#include "Armor.h"
class ShieldArmor : public Armor
{
public:
    virtual void collect();

    string to_string() override;

    ShieldArmor(short s, double x, double y);
};



#endif //UNTITLED_SHIELDARMOR_H
