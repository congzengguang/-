#include "FruitFactory.h"
#include <iostream>
#include "Apple.h"
#include "Banana.h"
Fruit* FruitFactory::getFruit(string name) {
	if (name == "apple") {
		return new Apple;
	}
	else if (name == "banana") {
		return new Banana;
	}
	else {
		return NULL;
	}
}