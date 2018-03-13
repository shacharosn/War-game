//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_GAMESTATE_H
#define UNTITLED_GAMESTATE_H

#include <iostream>
#include <memory>
#include <vector>
#include "Point2d.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "GameState.h"

using std::shared_ptr;


#include "Armor.h"
#include "Player.h"
#include "Weapon.h"
#include "Soldier.h"
#include "Map.h"

using namespace std;

class GameState
{
public:
    Map* map;
    vector<shared_ptr<Player>> players_left;
    string playrs_turn;
    int w;
    int h;
    int number_of_players;

    GameState(const string &csv_file);

    ~GameState();

    GameState(int w, int h);
};


#endif //UNTITLED_GAMESTATE_H
