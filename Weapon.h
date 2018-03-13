//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_WEAPON_H
#define UNTITLED_WEAPON_H
#include <memory>
using std::shared_ptr;

#include "collectableItem.h"
class Weapon :
        public collectableItem
{
     short weapon_strength;
public:
    virtual void collect() = 0;
    static shared_ptr<Weapon> make_weapon(const string &type, stringstream& stream );
    static shared_ptr<Weapon>  make_weapon(string type);


};

#endif //UNTITLED_WEAPON_H
