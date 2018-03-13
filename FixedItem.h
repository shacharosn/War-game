//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_FIXEDITEM_H
#define UNTITLED_FIXEDITEM_H


#include "Item.h"
class FixedItem : public Item
{
public:
    const int w;
    const int h;

    string to_string() override;
    static shared_ptr<FixedItem> make_fixedItem(string type,stringstream& stream);

    FixedItem(int w, int h, double x, double y);
};



#endif //UNTITLED_FIXEDITEM_H
