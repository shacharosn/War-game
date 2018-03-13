//
// Created by shachar on 12/21/2017.
//

#include "M16.h"
#include "Missle.h"
#include "UZI.h"
#include <sstream>


shared_ptr<Weapon> Weapon::make_weapon(const string &type, stringstream& stream ) {
    char temp;
    double x,y;
    stream>> temp>>x>>y>>temp;
    if (type == "M16") return std::make_shared<M16>(x,y);
    if (type == "Missile")return std::make_shared<Missle>(x,y);
    if (type == "UZI") return std::make_shared<UZI>(x,y);
    return nullptr;

}

shared_ptr<Weapon>  Weapon::make_weapon(string type) {
    if (type == "M16") return std::make_shared<M16>();
    if (type == "Missile")return std::make_shared<Missle>();
    if (type == "UZI") return std::make_shared<UZI>();
    return nullptr;
}


