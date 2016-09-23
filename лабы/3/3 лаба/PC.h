#pragma once
#include "Monitor.h"
class PC:
	public Monitor
{
	int stoimostb;
public:
	PC();
	void setstoimostb(int stoimostb);
	void getstoimostb();
	~PC(void);
};

