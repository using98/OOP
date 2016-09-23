#pragma once
#include "Tovar.h"
class Monitor:
	public Tovar
{
	int diagonal;
public:
	Monitor(void);
	void setdiagonal(int diagonal);
	void getdiagonal();
	~Monitor(void);
};

