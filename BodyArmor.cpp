//
// Created by shachar on 12/21/2017.
//

#include "BodyArmor.h"

string BodyArmor::to_string() {
    return nullptr;
}



void BodyArmor::collect() {

}

BodyArmor::BodyArmor( short s, double x, double y) :Armor(s){
    this->location.set_x(x);
    this->location.set_y(y);
}




