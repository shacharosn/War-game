//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_REGULARSOLDIER_H
#define UNTITLED_REGULARSOLDIER_H

#include "Fighter.h"

class RegularSoldier : public Fighter {
public:
    RegularSoldier(double x, double y, const string &owner);
    RegularSoldier();
    ~RegularSoldier();

    string to_string() override;
    /*virtual*/void accept(VisitorSoldier* v);
};

#endif //UNTITLED_REGULARSOLDIER_H
