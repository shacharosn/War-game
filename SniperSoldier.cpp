//
// Created by shachar on 12/21/2017.
//

#include "SniperSoldier.h"

SniperSoldier::SniperSoldier()
{
    std::cout << "constructor SniperSoldier" << std::endl;
}

string SniperSoldier::to_string() {
    return nullptr;
}

SniperSoldier::~SniperSoldier()  {std::cout << "destructor SniperSoldier" << std::endl;}

void SniperSoldier::accept(VisitorSoldier *v) {
    v->visit(this);
}

SniperSoldier::SniperSoldier(double x, double y, const string &owner) : Fighter(owner,2,80){

}
