#include "stdafx.h"
#include "headphones.h"
#include <iostream>
using namespace std;

headphones::headphones()
{ }
void headphones::setsensitivity(int sensitivity)
{
	this->sensitivity = sensitivity;
}
void headphones::setpower(int power)
{
	this->power = power;
}

void headphones::getsensitivity()
{
	cout << "����������������(��):" << this->sensitivity << endl;
}
void headphones::getpower()
{
	cout << "��������(���):" << this->power << endl;
}
headphones::~headphones()
{
}
