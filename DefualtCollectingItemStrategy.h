//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_DEFUALTCOLLECTINGITEMSTRATEGY_H
#define UNTITLED_DEFUALTCOLLECTINGITEMSTRATEGY_H

#include "CollectingItemStrategy.h"
class DefualtCollectingItemStrategy : public CollectingItemStrategy
{
public:
    const collectableItem &collectItem(const Soldier &soldier) const override;
};


#endif //UNTITLED_DEFUALTCOLLECTINGITEMSTRATEGY_H
