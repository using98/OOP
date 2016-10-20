#include "stdafx.h"
#include "Monitor.h"
#include <iostream>
using namespace std;

Monitor::Monitor(void)
{ }
void Monitor::setdiagonal(int diagonal)
{
	this->diagonal = diagonal;
}
void Monitor::setcover_type(char *cover_type)
{
	this->cover_type = cover_type;
}
void Monitor::getdiagonal()
{
	cout << "Диагональ:" << this->diagonal << endl;
}
void Monitor::getcover_type()
{
	cout << "Тип покрытия:" << this->cover_type << endl;
}

Monitor::~Monitor(void)
{ }