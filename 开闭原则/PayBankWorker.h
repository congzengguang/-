#pragma once
#include "IBankWorker.h"
class PayBankWorker :
	public IBankWorker
{
public:
	virtual void need();
};

