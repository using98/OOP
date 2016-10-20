#pragma once
#include "Tovar.h"
class Monitor:
	public Tovar
{
	int diagonal;
	char *cover_type;
public:
	Monitor(void);
	void setdiagonal(int diagonal);
	void getdiagonal();
	void setcover_type(char *cover_type);
	void getcover_type();
	~Monitor(void);
};

