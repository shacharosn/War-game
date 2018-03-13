//
// Created by shachar on 12/21/2017.
//

#include "RegularSoldier.h"


RegularSoldier::RegularSoldier(double x, double y, const string &owner) : Fighter(owner,2,100)
{
    std::cout << "constructor RegularSoldier" << std::endl;
}

string RegularSoldier::to_string() {
    return nullptr;
}

RegularSoldier::~RegularSoldier()  {std::cout << "destructor RegularSoldier" << std::endl;}

void RegularSoldier::accept(VisitorSoldier *v) {
    v->visit(this);

}

RegularSoldier::RegularSoldier() {

}


