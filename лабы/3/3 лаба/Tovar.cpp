#include "stdafx.h"
#include "Tovar.h"
#include <iostream>
using namespace std;

Tovar::Tovar(void)
{ }
void Tovar::setname(char *name)
{
	this->name = name;
}
void Tovar::getname()
{
	cout << "Наименование товара:" << this->name << endl;
}
Tovar::~Tovar(void)
{ }