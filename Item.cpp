//
// Created by shachar on 12/21/2017.
//

#include "Item.h"
#include "Weapon.h"
#include "FixedItem.h"
#include "Armor.h"



shared_ptr<Item> Item::make_item(const string &type1,const string& type2, stringstream& stream ) {

    if (type1 == "weapon") return Weapon::make_weapon(type2,stream);
    if (type1 == "Armor")return Armor::make_armor(type2,stream);
    if (type1 == "solid")return FixedItem::make_fixedItem(type2,stream);
    return nullptr;
}
