#include "ProxyUsShopping.h"
#include <iostream>

using namespace std;

void ProxyUsShopping::buy() {
	cout << "先去美国" << endl;
	shopping.buy();
	cout << "过海关" << endl;
}