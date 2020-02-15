#pragma once
class Singleton
{
public:
	static Singleton* getInstance();
private:
	Singleton();
	static Singleton* instance;
};

