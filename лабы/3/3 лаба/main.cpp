#include "stdafx.h"
#include "Tovar.h"
#include "Monitor.h"
#include "PC.h"
#include "headphones.h"
#include "projector.h"
#include "work_station.h"
//#include "screen.h"
#include <iostream>
using namespace std;

	//screen j;
	void all_products()
	{
		
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

			a.D.setnull("влад");
			a.D.getnull();
	
	}
	void product_1()
	{
		Monitor b;
		b.setname("Monitor");
		b.getname();
		b.setdiagonal(24);
		b.getdiagonal();
		b.setcover_type("ћатовый");
		b.getcover_type();

		b.D.setnull("кол€");
		b.D.getnull();
		cout << endl;
	}
	void product_2()
	{
		PC c;
		c.setname("PC");
		c.getname();
		c.setstoimostb(25000000);
		c.getstoimostb();
		c.setdiagonal(22);
		c.getdiagonal();
		cout << endl;
	}
	void product_3()
	{
		headphones d;
		d.setname("HEADPHONES");
		d.getname();
		d.setstoimostb(250000);
		d.getstoimostb();
		d.setsensitivity(126);
		d.getsensitivity();
		d.setpower(15);
		d.getpower();
		cout << endl;
	}
	void product_4()
	{
		projector e;
		e.setname("projector");
		e.getname();
		e.setstoimostb(7000000);
		e.getstoimostb();
		e.setpower(2000);
		e.getpower();
		e.setresolution("1920x1080");
		e.getresolution();
		cout << endl;
	}

	void product_5()
	{
		work_station f;
		f.setname("Work station");
		f.getname();
		f.setstoimostb(15000000);
		f.getstoimostb();
		f.setresolution("1920x1080");
		f.getresolution();
		f.setpower(20000000);
		f.getpower();
		f.setCPU("Z840 Xeon E5-2609 v3");
		f.getCPU();
		cout << endl;
	}

	int _tmain(int argc, _TCHAR* argv[])
	{
		setlocale(0, "");
		int position;
		do
		{
		cout << "________________________________________________" << endl;
		cout << "1-дл€ вывода всех товаров" << endl;
		cout << "2-дл€ вывода информации о (первом) товаре" << endl;
		cout << "3-дл€ вывода информации о (втором) товаре" << endl;
		cout << "4-дл€ вывода информации о (третьем) товаре" << endl;
		cout << "5-дл€ вывода информации о (четвертом) товаре" << endl;
		cout << "6-дл€ вывода информации о (п€том) товаре" << endl;
		cout << "7-дл€ выхода" << endl;
		cout << "________________________________________________" << endl;
		cin >> position;
		system("cls");
			switch (position)
			{
			case 1: all_products();     break;
			case 2: product_1();     break;
			case 3: product_2();     break;
			case 4: product_3(); break;
			case 5: product_4(); break;
			case 6: product_5(); break;


			}
		} while (position != 7);


		return 0;
	}