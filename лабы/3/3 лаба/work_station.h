#pragma once
#include "projector.h"
class work_station:
	public projector
{ 
	char *CPU;
public:
	work_station(void); \
	    void setCPU(char *CPU);
	    void getCPU();
	~work_station(void);
};

