#pragma once
#include "AbstractFruitFactory.h"
class AppleFactory :
	public AbstractFruitFactory
{
public:
	virtual Fruit* createFruit();
};

