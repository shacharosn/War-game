//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_COLLECTABLEITEM_H
#define UNTITLED_COLLECTABLEITEM_H


#include "Item.h"
class collectableItem : public Item
{
public:
    virtual void collect()=0;
};


#endif //UNTITLED_COLLECTABLEITEM_H
