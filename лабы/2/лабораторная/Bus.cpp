#include "stdafx.h"
#include <iostream> 
#include "Bus.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

Bus::Bus()
{}
Bus::Bus(/*char* NAME,*/ int Nomer1,int Nomer2,int God,int Probeg)
{
	/*strcpy(name, NAME);*/
	nomer1 = Nomer1; 
}
void Bus::setNomer1(int Nomer1)
{
	nomer1 = Nomer1;
}
void Bus::setNomer2(int Nomer2)
{
	nomer2=Nomer2;
}
void Bus::setGod(int God)
{
	god = God;
}
void Bus::setProbeg(int Probeg)
{
	probeg = Probeg;
}
//void Bus::setName(char *NAME)
//{
//	strcpy(name, NAME); 
//} 
Bus::~Bus(void)
{ } 
void Bus::print() 
{

	//cout << "Name - " << Bus::name << endl;
	cout << "����� �������� - " << Bus::nomer1 << endl;
	cout << "����� �������� - " << Bus::nomer2 << endl;
	cout << "��� ������ ������������ - " << Bus::god << endl;
	cout << "������ - " << Bus::probeg << endl;
	cout<<"______________________________________________\n\n";
}
int Bus::getNomer1(void)
{
	return nomer1;
}
int Bus::getNomer2(void)
{
	return nomer2;
}
int Bus::getGod(void)
{
	return god;
}
int Bus::getProbeg(void)
{
	return probeg;
}
