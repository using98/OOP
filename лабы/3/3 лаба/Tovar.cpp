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
Tovar::v::v()
{
}
void Tovar::v::setnull(char * null)
{
	this->null = null;
}

void  Tovar::v::getnull()
{
	cout << "привет:" << this->null << endl;

}
Tovar::v::~v()
{
}

