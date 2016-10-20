#pragma once
#include "Tovar.h"
#include "PC.h"
class headphones :
	
	public PC
{
	int sensitivity;
	int power;

public:
	headphones(void);
	void setsensitivity(int sensitivity);
	void setpower(int power);
	void getsensitivity();
	void getpower();

	~headphones(void);

};


