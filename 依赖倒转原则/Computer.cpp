#include "Computer.h"

Computer::Computer(IMemory* memory, IHardDisk* hardDisk, ICpu* cpu) {
	this->memory = memory;
	this->cpu = cpu;
	this->hardDisk = hardDisk;
}

void Computer::work() {
	this->memory->work();
	this->cpu->work();
	this->hardDisk->work();
}