#pragma once
#include <iostream>
using namespace std;
class Tovar
{
private:
	int cena;
public:
	Tovar();
	~Tovar();

	friend istream& operator>>(istream& s, Tovar& e);
	friend ostream& operator<<(ostream& s, Tovar& e);

	void setCena(int Cena);
	int getCena();
};