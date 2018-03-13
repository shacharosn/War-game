//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_M16_H
#define UNTITLED_M16_H


#include "LightWeapon.h"
class M16 : public LightWeapon {
public:
    virtual void collect();

    string to_string() override;

    M16(double x, double y);
    M16();
};


#endif //UNTITLED_M16_H
