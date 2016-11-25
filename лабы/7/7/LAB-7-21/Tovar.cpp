#include "Tovar.h"
#include <iostream>
#include <conio.h>

using namespace std;

Tovar::Tovar() : cena(0)
{
}
Tovar::~Tovar()
{
}
void Tovar::setCena(int Cena)
{
	this->cena = Cena;
}
int Tovar::getCena()
{
	return(this->cena);
}

////перегрузка операторов
////Для взаимодействия с моим пользовательским классом
istream& operator>>(istream& s, Tovar& e)
{
	cin >> e.cena;
	return s;
}
ostream& operator<<(ostream& s, Tovar& e)
{
	cout<<e.getCena();
	return s;
}

