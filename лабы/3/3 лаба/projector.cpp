#include "stdafx.h"
#include "projector.h"
#include <iostream>
using namespace std;

projector::projector()
{
}
void projector::setresolution(char *resolution)
{
	this->resolution =resolution;
}
void projector::getresolution()
{
	cout << "���������� ������:" << this->resolution << endl;
}


projector::~projector()
{
}
