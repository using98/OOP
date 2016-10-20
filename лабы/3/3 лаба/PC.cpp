#include "stdafx.h"
#include "PC.h"
#include <iostream>
using namespace std;

PC::PC(void)
{ }
void PC::setstoimostb(int stoimostb)
{
	this->stoimostb=stoimostb;
}
void PC::getstoimostb()
{
	cout << "Стоимость:" << this->stoimostb << endl;
}
PC::~PC(void)
{ }