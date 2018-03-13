//
// Created by shachar on 12/29/2017.
//

#include "PlayerStrategy.h"

PlayerStrategy::PlayerStrategy(MovingSoldierStrategy *movingSoldierStrategy,
                               HealingSoldierStrategy *healingSoldierStrategy,
                               CollectingItemStrategy *collectingItemStrategy,
                               AttckingSoldierStrategy *attckingSoldierStrategy) : movingSoldierStrategy(
        movingSoldierStrategy), healingSoldierStrategy(healingSoldierStrategy), collectingItemStrategy(
        collectingItemStrategy), attckingSoldierStrategy(attckingSoldierStrategy) {}

void PlayerStrategy::setMap(Map *map) {
    PlayerStrategy::map = map;
}



void PlayerStrategy::set_movingSoldierStrategy(MovingSoldierStrategy *m) {
    movingSoldierStrategy = m;
}

void PlayerStrategy::set_healingSoldierStrategy(HealingSoldierStrategy *h) {
    healingSoldierStrategy = h;

}

void PlayerStrategy::set_collectingItemStrategy(CollectingItemStrategy *c) {
    collectingItemStrategy = c;

}

void PlayerStrategy::set_attckingSoldierStrategy(AttckingSoldierStrategy *a) {
    attckingSoldierStrategy = a;

}



void PlayerStrategy::visit(ParamedicSoldier *e) {
    movingSoldierStrategy->move(*e);
    healingSoldierStrategy->heal();
    attckingSoldierStrategy->attack(*e);
    collectingItemStrategy->collectItem(*e);
}

void PlayerStrategy::visit(SniperSoldier *e) {
    movingSoldierStrategy->move(*e);
    attckingSoldierStrategy->attack(*e);
    collectingItemStrategy->collectItem(*e);

}

void PlayerStrategy::visit(RegularSoldier *e) {
    movingSoldierStrategy->move(*e);
    attckingSoldierStrategy->attack(*e);
    collectingItemStrategy->collectItem(*e);
}

