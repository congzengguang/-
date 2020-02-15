#pragma once
#include "Fruit.h"
class AbstractFruitFactory
{
public:
	virtual Fruit* createFruit() = 0 ;
};

