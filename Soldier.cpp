//
// Created by shachar on 12/21/2017.
//

#include "RegularSoldier.h"
#include "ParamedicSoldier.h"
#include "SniperSoldier.h"
#include <sstream>


shared_ptr<Soldier> Soldier::make_soldier(const string &type, const string &owner) {

    char temp;
    double x,y;
    string str;

    if (type == "paramedic")return make_shared<ParamedicSoldier>(x,y,owner);
    if (type == "normal")return make_shared<RegularSoldier>(x, y, owner);
    if (type == "sniper") return std::make_shared<SniperSoldier>(x,y,owner);
        return nullptr;

}


void Soldier::setArmors( vector<shared_ptr<Armor>> &armors) {
    Soldier::armors = armors;
}






void Soldier::setOwner(const string &owner) {
    Soldier::owner = owner;
}


Soldier::Soldier(const string &owner, int walking_speed, double health ) :  walking_speed(walking_speed), health(health) {
    this->owner=owner;
}

Soldier::Soldier() {

}

void Soldier::setWeapon(shared_ptr<Weapon> weapon) {

}

