//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_SOLDIER_H
#define UNTITLED_SOLDIER_H

class SniperSoldier;
class ParamedicSoldier;
class RegularSoldier;

#include <iostream>
#include <vector>
#include "MapObject.h"
#include "Armor.h"
#include "Weapon.h"
#include <memory>
using std::shared_ptr;



class VisitorSoldier {
public:

    virtual void visit(ParamedicSoldier *e) = 0;
    virtual void visit(SniperSoldier *e) = 0;
    virtual void visit( RegularSoldier *e) = 0;
};



class Soldier: public MapObject
{
public:

    const string soldier_id;
    int walking_speed;
    double health;
    int attack_capability;

    vector<shared_ptr<Armor>> armors;
    virtual string to_string()=0;
    static shared_ptr<Soldier> make_soldier(const string &type, const string &owner);
    void setWeapon( shared_ptr<Weapon> weapon);
    Soldier(const string &owner, int walking_speed, double health);
    Soldier();

    virtual void accept( VisitorSoldier*) = 0;

    void setOwner(const string &owner);



    void setArmors( vector<shared_ptr<Armor>> &armors);

    virtual ~Soldier()= default;
};


#endif //UNTITLED_SOLDIER_H
