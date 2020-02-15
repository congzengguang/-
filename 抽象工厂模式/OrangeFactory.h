#pragma once
#include "AbstractFruitFactory.h"
class OrangeFactory :
	public AbstractFruitFactory
{
public:
	virtual Fruit* createFruit();
};

