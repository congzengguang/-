#include "Singleton.h"
#include <iostream>
using namespace std;
Singleton* Singleton::instance = NULL;
Singleton::Singleton() {
	instance = NULL;
	cout << "�򵥵������ģʽ" << endl;
}

Singleton* Singleton::getInstance() {
	if (instance == NULL) {
		instance = new Singleton;
	}
	return instance;
}