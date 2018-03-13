//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_FIGHTER_H
#define UNTITLED_FIGHTER_H
#include "Soldier.h"


class Fighter : public Soldier {
public:
    shared_ptr<Weapon> weapon;
    virtual string to_string()=0;
    void setWeapon( shared_ptr<Weapon> &weapon);
    virtual ~Fighter();

    Fighter();

    Fighter(const string &owner, int walking_speed, double health );
};


#endif //UNTITLED_FIGHTER_H
