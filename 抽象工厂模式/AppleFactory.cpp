#include "AppleFactory.h"
#include <iostream>
#include "Apple.h"
using namespace std;

Fruit* AppleFactory::createFruit() {
	return new Apple;
}