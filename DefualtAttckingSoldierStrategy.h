//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_DEFUALTATTCKINGSOLDIERSTRATEGY_H
#define UNTITLED_DEFUALTATTCKINGSOLDIERSTRATEGY_H
#include "AttckingSoldierStrategy.h"
class DefualtAttckingSoldierStrategy :
	public AttckingSoldierStrategy
{
public:
	Soldier &attack(const Soldier &soldier) const override;
};



#endif //UNTITLED_DEFUALTATTCKINGSOLDIERSTRATEGY_H
