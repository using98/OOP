#pragma once
#include "headphones.h"
class projector:
	public headphones
{
	char *resolution;
public:
	projector(void);
	void  setresolution(char *resolution);
	void getresolution () ;
	~projector(void);
};

