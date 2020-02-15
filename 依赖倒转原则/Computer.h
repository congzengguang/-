#pragma once
#include "ICpu.h"
#include "IHardDisk.h"
#include "IMemory.h"
class Computer
{
public:
	Computer(IMemory* memory, IHardDisk* hardDisk, ICpu* cpu);
	void work();
private:
	IMemory *memory;
	IHardDisk* hardDisk;
	ICpu* cpu;
};

