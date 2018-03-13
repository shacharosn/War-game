//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_HEALER_H
#define UNTITLED_HEALER_H

#include "Soldier.h"

class Healer  : public Soldier{
public:
    Healer(const string &basic_string, int i, int i1);

    Healer();

    virtual string to_string()=0;
};


#endif //UNTITLED_HEALER_H
