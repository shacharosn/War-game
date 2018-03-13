//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_ITEM_H
#define UNTITLED_ITEM_H

#include "MapObject.h"
class Item : public MapObject
{
public:
    virtual string to_string()=0;
    static shared_ptr<Item> make_item(const string& type1, const string& type2, stringstream& stream);
};



#endif //UNTITLED_ITEM_H
