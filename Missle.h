//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_MISSLE_H
#define UNTITLED_MISSLE_H

#include "HeavyWeapons.h"
class Missle :
	public HeavyWeapons {
public:
	void collect() override;

    string to_string() override;

    Missle();
	Missle(double x, double y);
};


#endif //UNTITLED_MISSLE_H
