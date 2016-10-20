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
	cout << "Чувствительность(дБ):" << this->sensitivity << endl;
}
void headphones::getpower()
{
	cout << "Мощность(мВт):" << this->power << endl;
}
headphones::~headphones()
{
}
