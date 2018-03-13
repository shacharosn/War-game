//
// Created by shachar on 12/27/2017.
//

#include "MapCell.h"

void MapCell::remove( shared_ptr<Soldier> &soldier) {
int i=0;
    for (auto &s:this->soldiers){
       if(soldier==s)
          this->soldiers.erase(soldiers.begin()+i);
        i++;
    }
}

void MapCell::remove(shared_ptr<Weapon> &weapon) {
    int i=0;
    for (auto &w:this->weapons){
        if(weapon==w)
            this->weapons.erase(weapons.begin()+i);
        i++;
    }
}

void MapCell::remove( shared_ptr<Armor> &armor) {
    int i=0;
    for (auto &a:this->armors){
        if(armor==a)
            this->armors.erase(armors.begin()+i);
        i++;
    }
}

void MapCell::remove(shared_ptr<FixedItem> &fixedItem) {
    int i=0;
    for (auto &f:this->fixedItems){
        if(fixedItem==f)
            this->fixedItems.erase(fixedItems.begin()+i);
        i++;
    }
}

void MapCell::add(shared_ptr<Soldier> &soldier) {
  this->soldiers.push_back(soldier);
    std::cout << "soldier added" << std::endl;
}

void MapCell::add(shared_ptr<Weapon> &weapon) {
    this->weapons.push_back(weapon);
    std::cout << "weapon added" << std::endl;
}

void MapCell::add(shared_ptr<Armor> &armor) {
    this->armors.push_back(armor);
    std::cout << "armor added" << std::endl;
}



void MapCell::add(shared_ptr<FixedItem> &fixedItem) {
    this->fixedItems.push_back(fixedItem);
    std::cout << "fixedItem added" << std::endl;
}

void MapCell::add(shared_ptr<Item> &item) {
    //this->fixedItems.push_back(item);
    std::cout << "item added!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
}

