#pragma once
#include "IBankWorker.h"
class SaveBankWorker :
	public IBankWorker
{
public:
	virtual void need();
};

