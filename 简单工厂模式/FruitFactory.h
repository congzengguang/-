#pragma once
#include "Fruit.h"
#include <string>
using namespace std;
class FruitFactory
{
public:
	Fruit* getFruit(string name);
};

