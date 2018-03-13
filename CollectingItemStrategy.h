//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_COLLECTINGITEMSTRATEGY_H
#define UNTITLED_COLLECTINGITEMSTRATEGY_H

#include "Soldier.h"
#include "collectableItem.h"

class CollectingItemStrategy
{
public:
    virtual const collectableItem& collectItem(const Soldier&) const = 0;



};



#endif //UNTITLED_COLLECTINGITEMSTRATEGY_H
