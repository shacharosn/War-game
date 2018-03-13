//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_BODYARMOR_H
#define UNTITLED_BODYARMOR_H

#include "Armor.h"
class BodyArmor : public Armor
{
public:
	virtual void collect();

    string to_string() override;

	BodyArmor(short s, double x, double y);


};


#endif //UNTITLED_BODYARMOR_H
