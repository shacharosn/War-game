//
// Created by shachar on 12/29/2017.
//

#ifndef UNTITLED_PLAYERSTRATEGY_H
#define UNTITLED_PLAYERSTRATEGY_H
#include "MovingSoldierStrategy.h"
#include "HealingSoldierStrategy.h"
#include "AttckingSoldierStrategy.h"
#include "CollectingItemStrategy.h"
#include "SoldierFactory.h"
#include "Map.h"
#include "RegularSoldier.h"
#include "ParamedicSoldier.h"
#include "SniperSoldier.h"

class PlayerStrategy :public VisitorSoldier{
public:
    PlayerStrategy(MovingSoldierStrategy *movingSoldierStrategy, HealingSoldierStrategy *healingSoldierStrategy,
                   CollectingItemStrategy *collectingItemStrategy, AttckingSoldierStrategy *attckingSoldierStrategy);
    Map* map;

    void setMap(Map *map);

private:
    MovingSoldierStrategy * movingSoldierStrategy;
    HealingSoldierStrategy* healingSoldierStrategy;
    CollectingItemStrategy* collectingItemStrategy;
    AttckingSoldierStrategy* attckingSoldierStrategy;

    void set_movingSoldierStrategy(MovingSoldierStrategy* m);

    void set_healingSoldierStrategy(HealingSoldierStrategy* h);

    void set_collectingItemStrategy(CollectingItemStrategy* c);

    void set_attckingSoldierStrategy(AttckingSoldierStrategy* a);



    void visit(ParamedicSoldier *e) override;
    void visit(SniperSoldier *e) override;
    void visit( RegularSoldier *e)override;
};


#endif //UNTITLED_PLAYERSTRATEGY_H
