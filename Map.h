//
// Created by shachar on 12/27/2017.
//

#ifndef UNTITLED_MAP_H
#define UNTITLED_MAP_H
#include "MapCell.h"
#include <math.h>

class Map {

public:
    Map(int h, int w);
    int h;
    int w;

    vector<vector<MapCell> > mapCells;


    void remove(shared_ptr<Soldier> &soldier);

    void remove(shared_ptr<Weapon> &weapon);

    void remove(shared_ptr<Armor> &armor);

    void remove(shared_ptr<FixedItem> &fixedItem);

    void add(shared_ptr<Soldier> &soldier);

    void add(shared_ptr<Weapon> &weapon);

    void add(shared_ptr<Armor> &armor);

    void add(shared_ptr<FixedItem> &fixedItem);

    void add(shared_ptr<Item> &item);

    void getCell();

    virtual ~Map();

    vector<std::shared_ptr<Soldier>> SearchSoldiersInRelevantCells( Point2d &p, double interval);
    vector<std::shared_ptr<Weapon>> SearchWeaponsInRelevantCells( Point2d &p, double interval);
    vector<std::shared_ptr<Armor>> SearchArmorsInRelevantCells( Point2d &p, double interval);
    vector<std::shared_ptr<FixedItem>> SearchFixItemsInRelevantCells( Point2d &p, double interval);




};


#endif //UNTITLED_MAP_H
