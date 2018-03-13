//
// Created by shachar on 12/21/2017.
//


#include "ShieldArmor.h"
#include "BodyArmor.h"
#include <sstream>

shared_ptr<Armor> Armor::make_armor(string type,stringstream& stream) {
    char temp;
    short s;
    double x,y;
    stream>>s>>temp>>temp>>x>>y>>temp;
    if (type == "BodyArmor") return std::make_shared<BodyArmor>(s,x,y);
    if (type == "ShieldArmor")return std::make_shared<ShieldArmor>(s,x,y);
    return nullptr;
}

Armor::~Armor() = default;

Armor::Armor(const short strength):armor_strength(strength) {

}




