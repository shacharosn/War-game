//
// Created by shachar on 12/22/2017.
//

#ifndef UNTITLED_UZI_H
#define UNTITLED_UZI_H


#include "LightWeapon.h"
class UZI : public LightWeapon {
public:
    virtual void collect();

    UZI();
    UZI( double x, double y);




    string to_string() override;

};


#endif //UNTITLED_UZI_H
