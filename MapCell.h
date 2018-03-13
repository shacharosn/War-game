//
// Created by shachar on 12/27/2017.
//

#ifndef UNTITLED_MAPCELL_H
#define UNTITLED_MAPCELL_H

#include "CollectableItem.h"
#include "FixedItem.h"
#include "Soldier.h"

class MapCell {

public:
    std::vector<shared_ptr<Soldier>> soldiers;

    std::vector<shared_ptr<Weapon>> weapons;

    std::vector<shared_ptr<Armor>> armors;

    std::vector<shared_ptr<FixedItem>> fixedItems;

    void remove(shared_ptr<Soldier> &soldier);

    void remove(shared_ptr<Weapon> &weapon);

    void remove(shared_ptr<Armor> &armor);

    void remove(shared_ptr<FixedItem> &fixedItem);

    void add(shared_ptr<Soldier> &soldier);

    void add(shared_ptr<Weapon> &weapon);

    void add(shared_ptr<Armor> &armor);

    void add(shared_ptr<FixedItem> &fixedItem);

    void add(shared_ptr<Item> &item);


};


#endif //UNTITLED_MAPCELL_H
