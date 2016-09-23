
#include "stdafx.h"
#include "Tovar.h"
#include "Monitor.h"
#include "PC.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,  "");
	Tovar a;
	a.setname("Monitor");
	a.getname();
	a.setname("PC");
	a.getname();
	a.setname("HEADPHONES");
	a.getname();
	a.setname("PROJECTOR");
	a.getname();
	a.setname("Work station");
	a.getname();
	a.setname("Screen");
	a.getname();
	cout << endl;

	Monitor b;
	b.setname("Monitor");
	b.getname();
	b.setdiagonal(24);
	b.getdiagonal();
	cout << endl;

	PC c;
	c.setname("PC");
	c.getname();
	c.setstoimostb(25000000);
	c.getstoimostb();
	c.setdiagonal(22);
	c.getdiagonal();
	cout << endl;

	return 0;
}