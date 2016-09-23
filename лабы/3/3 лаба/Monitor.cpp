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
void Monitor::getdiagonal()
{
	cout << "Диагональ монитора:" << this->diagonal << endl;
}
Monitor::~Monitor(void)
{ }