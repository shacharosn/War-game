//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include "MovingSoldierStrategy.h"
#include "HealingSoldierStrategy.h"
#include "AttckingSoldierStrategy.h"
#include "CollectingItemStrategy.h"
#include "SoldierFactory.h"
#include "Map.h"
#include "RegularSoldier.h"
#include "ParamedicSoldier.h"
#include "SniperSoldier.h"
#include "PlayerStrategy.h"


class Player {
public:

    vector<shared_ptr<Soldier>> soldiers_of_player;
    const string player_id;
    PlayerStrategy* playerStrategy;


    void init_soldiers(string type);
    void play(Map *map);

    Player(const string &player_id);

     ~Player();



};








#endif //UNTITLED_PLAYER_H
