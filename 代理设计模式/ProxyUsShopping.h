#pragma once
#include "Shopping.h"
#include "UsShopping.h"

class ProxyUsShopping :
	public Shopping
{
public:
	UsShopping shopping;
	virtual void buy();
};

