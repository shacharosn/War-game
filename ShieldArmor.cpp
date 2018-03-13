//
// Created by shachar on 12/21/2017.
//

#include "ShieldArmor.h"

string ShieldArmor::to_string() {
    return nullptr;
}

ShieldArmor::ShieldArmor(short s, double x, double y):Armor(s){
    this->location.set_x(x);
    this->location.set_y(y);
}

void ShieldArmor::collect() {

}
