#include "OrangeFactory.h"
#include "Orange.h"
#include "Fruit.h"
Fruit* OrangeFactory::createFruit() {
	return new Orange;
}