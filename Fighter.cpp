//
// Created by shachar on 12/21/2017.
//

#include "Fighter.h"


void Fighter::setWeapon(shared_ptr<Weapon> &weapon) {
    Fighter::weapon = weapon;
}

Fighter::Fighter(const string &owner, int walking_speed, double health ) : Soldier(
        owner, walking_speed, health) {}

Fighter::Fighter()  = default;

Fighter::~Fighter()= default;


