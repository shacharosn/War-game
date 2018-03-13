//
// Created by shachar on 12/21/2017.
//

#include "ParamedicSoldier.h"

ParamedicSoldier::ParamedicSoldier() {std::cout << "constructor ParamedicSoldier" << std::endl;}

string ParamedicSoldier::to_string() {
    return nullptr;
}

ParamedicSoldier::~ParamedicSoldier() {std::cout << "destructor ParamedicSoldier" << std::endl;}

void ParamedicSoldier::accept(VisitorSoldier *v) {
    v->visit(this);

}

ParamedicSoldier::ParamedicSoldier(double x, double y, const string &owner) : Healer(owner,4,120)
{

}

void ParamedicSoldier::setWeapon(shared_ptr<Weapon> &weapon) {

}
