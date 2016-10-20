#include "stdafx.h"
#include "work_station.h"
#include <iostream>
using namespace std;

work_station::work_station()
{
}
void work_station::setCPU(char *CPU)
{
	this->CPU = CPU;
}
void work_station::getCPU()
{
	cout << "Процессор:" << this->CPU << endl;
}

work_station::~work_station()
{
}
