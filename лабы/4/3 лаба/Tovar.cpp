#include "stdafx.h"
#include "Tovar.h"
#include <iostream>
using namespace std;

int Tovar::counter = 0;

Tovar::Tovar(void)
{
	counter++;
}
void Tovar::setname(char * name)
{
	this->name = name;
}
void Tovar::getname()
{
	cout << "������������ ������:" << this->name << endl;
}
Tovar::~Tovar(void)
{
	counter--;
}




Monitor::Monitor(void)
{}
void Monitor::setdiagonal(int diagonal) {
	this->diagonal = diagonal;
}
void Monitor::getdiagonal()
{
	cout << "���������:" << this->diagonal << endl;
}
void Monitor::setdate(int day, int month) {
	this->day = day;
	this->month = month;
}
void Monitor::getdate() {
	cout << "���� �������: " << this->day << "." << this->month;
	cout << endl;
}
void Monitor::setname(char *name)
{
	this->name = name;
}
void Monitor::getname()
{
	cout << "������������ ������:" << this->name << endl;
}
Monitor::~Monitor(void)
{}

 





work_station::work_station(void)
{
}
void work_station::setCPU(int CPU)
{
	this->CPU = CPU;
}
void work_station::getCPU()
{
	cout << "���������" << this->CPU << endl;
}
work_station::~work_station(void)
{
}
work_station::Name::Name()
{	
}

void work_station::Name::setnull(char* null)
{
	this->null = null;
}

void work_station::Name::getnull()
{
	cout << "�����: " << this->null << endl;
}
work_station::Name::~Name()
{
}
void work_station::gethard(Name& x) {
	x.fair();
}
void work_station::Name::fair() {
	cout << "hello my dear friend!" << endl;
}





headphones::headphones()
{ 
}
void headphones::setpower(int power)
{
	this->power = power;
}
void headphones::getpower()
{
	cout << "��������(���):" << this->power << endl;
}
headphones::~headphones()
{
}
void headphones::setmm(int mm) {
	this->mm = mm;
}



constclass::constclass()
{
}
constclass::~constclass()
{}




Person::Person(void)
{
}
Person::~Person(void)
{
}