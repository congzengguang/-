#include "Singleton.h"
#include <iostream>
using namespace std;
Singleton* Singleton::instance = NULL;
Singleton::Singleton() {
	instance = NULL;
	cout << "简单单例设计模式" << endl;
}

Singleton* Singleton::getInstance() {
	if (instance == NULL) {
		instance = new Singleton;
	}
	return instance;
}