//
// Created by shachar on 12/27/2017.
//

#include "Map.h"


Map::Map(int _h, int _w): h(_h), w(_w) {
    std::cout << "constructor Map" << std::endl;
    mapCells.resize((unsigned long)_h);
    for (int i = 0; i < _w; ++i)
        mapCells[i].resize((unsigned long)_h);
}

void Map::remove(shared_ptr<Soldier> &soldier) {

    mapCells[floor(soldier.get()->location.get_x())][(int)(soldier.get()->location.get_y())].remove(soldier);

}

void Map::remove(shared_ptr<Weapon> &weapon) {
    mapCells[floor(weapon.get()->location.get_x())][(int)(weapon.get()->location.get_y())].remove(weapon);
}

void Map::remove(shared_ptr<Armor> &armor) {
    mapCells[floor(armor.get()->location.get_x())][(int)(armor.get()->location.get_y())].remove(armor);
}

void Map::add(shared_ptr<Soldier> &soldier) {
    mapCells[floor(soldier.get()->location.get_x())][(int)(soldier.get()->location.get_y())].add(soldier);
}

void Map::add(shared_ptr<Weapon> &weapon) {
    mapCells[floor(weapon.get()->location.get_x())][(int)(weapon.get()->location.get_y())].add(weapon);
}

void Map::add(shared_ptr<Armor> &armor) {
    mapCells[floor(armor.get()->location.get_x())][(int) (armor.get()->location.get_y())].add(armor);

}

void Map::getCell() {

}

vector<shared_ptr<Soldier>> Map::SearchSoldiersInRelevantCells(Point2d &p, double interval) {
    int x1= max(0,(int)(p.get_x())-1);
    int x2= min(this->h - 1, (int)(p.get_x() + interval - 1));
    int y1= max(0,(int)(p.get_y())-1);
    int y2= min(this->h - 1, (int)(p.get_y() + interval - 1));
   vector<shared_ptr<Soldier>> ans;
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            for (auto &s : mapCells[i][j].soldiers) {
                ans.push_back(s);
            }
        }
    }
    return ans;
}

vector<std::shared_ptr<Weapon>> Map::SearchWeaponsInRelevantCells(Point2d &p, double interval) {
    int x1= max(0,(int)(p.get_x())-1);
    int x2= min(this->h - 1, (int)(p.get_x() + interval - 1));
    int y1= max(0,(int)(p.get_y())-1);
    int y2= min(this->h - 1, (int)(p.get_y() + interval - 1));
    vector<shared_ptr<Weapon>> ans;
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            for (auto &s:mapCells[i][j].weapons) {
                ans.push_back(s);
            }
        }
    }
    return ans;
}

vector<std::shared_ptr<Armor>> Map::SearchArmorsInRelevantCells(Point2d &p, double interval) {
    int x1= max(0,(int)(p.get_x())-1);
    int x2= min(this->h - 1, (int)(p.get_x() + interval - 1));
    int y1= max(0,(int)(p.get_y())-1);
    int y2= min(this->h - 1, (int)(p.get_y() + interval - 1));
    vector<shared_ptr<Armor>> ans;
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            for (auto &s:mapCells[i][j].armors) {
                ans.push_back(s);
            }
        }
    }
    return ans;
}

vector<std::shared_ptr<FixedItem>> Map::SearchFixItemsInRelevantCells(Point2d &p, double interval) {
    int x1= max(0,(int)(p.get_x())-1);
    int x2= min(this->h - 1, (int)(p.get_x() + interval - 1));
    int y1= max(0,(int)(p.get_y())-1);
    int y2= min(this->h - 1, (int)(p.get_y() + interval - 1));
    vector<shared_ptr<FixedItem>> ans;
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            for (auto &s:mapCells[i][j].fixedItems) {
                ans.push_back(s);
            }
        }
    }
    return ans;
}

Map::~Map() {
    std::cout << "constructor Map" << std::endl;
}

void Map::remove(shared_ptr<FixedItem> &fixedItem) {
    mapCells[floor(fixedItem.get()->location.get_x())][(int)(fixedItem.get()->location.get_y())].remove(fixedItem);
}

void Map::add(shared_ptr<FixedItem> &fixedItem) {
    mapCells[floor(fixedItem.get()->location.get_x())][(int) (fixedItem.get()->location.get_y())].add(fixedItem);
}

void Map::add(shared_ptr<Item> &item) {
    mapCells[floor(item.get()->location.get_x())][(int) (item.get()->location.get_y())].add(item);
}



