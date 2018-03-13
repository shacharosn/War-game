//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_PARAMEDICSOLDIER_H
#define UNTITLED_PARAMEDICSOLDIER_H

#include "Healer.h"

class ParamedicSoldier : public Healer {
public:
    ParamedicSoldier();
    ParamedicSoldier(double x, double y, const string &owner);
     ~ParamedicSoldier();
    void setWeapon( shared_ptr<Weapon> &weapon);
    string to_string() override;
    /*virtual*/void accept(VisitorSoldier* v);
};


#endif //UNTITLED_PARAMEDICSOLDIER_H
