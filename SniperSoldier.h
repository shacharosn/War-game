//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_SNIPERSOLDIER_H
#define UNTITLED_SNIPERSOLDIER_H


#include "Fighter.h"
class SniperSoldier : public Fighter {
public:
    SniperSoldier(double x, double y, const string &owner);
    SniperSoldier();
     ~SniperSoldier() override;

    string to_string() override;
    /*virtual*/void accept(VisitorSoldier* v) override;
};


#endif //UNTITLED_SNIPERSOLDIER_H
