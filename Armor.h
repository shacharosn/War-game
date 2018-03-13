//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_ARMOR_H
#define UNTITLED_ARMOR_H


#include "collectableItem.h"



class Armor :
        public collectableItem
{
public:
    const short armor_strength;

    explicit Armor(short armor_strength);

    void collect() override =0;
    static shared_ptr<Armor> make_armor(string type,stringstream& stream);

    virtual ~Armor();
};


#endif //UNTITLED_ARMOR_H
