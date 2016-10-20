#include "stdafx.h"
#include "Tovar.h"
#include <iostream>

using namespace std;

/*void all_products()
{
Tovar a;
a.setname("Monitor");
a.getname();
a.setname("HEADPHONES");
a.getname();
a.setname("Work station");
a.getname();
абстрактный класс
}*/

void function_1()
{
	Monitor b;
	std::cout << Tovar::getCounter() << ")" << endl;
	//Товар 
	b.setname("Монитор");
	b.getname();
	//монитор
	b.setdate(14, 6);
	b.getdate();
	b.setdiagonal(1200);
	b.getdiagonal();
	std::cout << endl;

	work_station c;
	std::cout << Tovar::getCounter() << ")" << endl;
	//товар
	c.setname("Рабочая станция");
	c.getname();
	//рабочая станция
	c.setdate(25, 3);
	c.getdate();
	c.setCPU(2000);
	c.getCPU();
	c.D.setnull("epam");//вложенный класс Name
	c.D.getnull();
	std::cout << endl;
}
void demo(Monitor *a)
{ //функция преобразования
	work_station* d = dynamic_cast<work_station*>(a);
	if (d)
	{
		std::cout << "Success!" << endl;
	}
	else
	{
		std::cout << "Not success!" << endl;
	}
}
void function_2()
{
	Monitor w(1, 9);
	std::cout << w.days << " . " << w.months << endl;
	cout << "________________________________________________" << endl;
	std::cout << "Работа с дружественными классами" << endl;


	Student a;//дружественный классы
	a.setage(3);
	Inspector z;
	z.iKnowAllAboutYou(a);
	cout << "________________________________________________" << endl;


	Curator s; //изменение поля с помощью дружественного класса
	cout << "введите число" << endl;
	s.iCanModify(a);
	a.convert();
	cout << endl;//преобразование в char
	cout << "изменение с помощью дружественного класса" << endl;
	a.getage();
	cout << "________________________________________________" << endl;


	cout << "Работа с константой" << endl;
	constclass y;//работа с константой
	y.getfun();
	cout << endl;

	//преобразования
	work_station *d = new work_station;
	demo(d);
	cout << endl;


	Monitor *some = new Monitor(5, 6);
	Printer alluse;
	alluse.iAmPrinting(some);
}





//headpohones y;
//y.setCPU(10); нет доступа к "work_station::setCPU", поскольку "headphones" использует "protected" для наследования из "workstation"
//y.setpower(6);
//y.getpower(9);
//y.setmm(4);work_station::setmm: невозможно обратиться к protected член, объявленному в классе "answer"	

//result z;
//z.setpower(12);
//z.setCPU(20); нет доступа к "work_station::setCPU", поскольку "headphones" использует "protected" для наследования из "WORK_STATION"
//z.setpower(9);

//использование операторов приведения типа
	int _tmain(int argc, _TCHAR* argv[])
	{
		setlocale(0, "");
		int position;
		do
		{
		cout << "________________________________________________" << endl;
		cout << "1-для вызова 1 функции" << endl;
		cout << "2-для вызова 2 функции" << endl;
		cout << "3-для выхода" << endl;
		cout << "________________________________________________" << endl;
		cin >> position;
		system("cls");
			switch (position)
			{
			case 1: function_1();     break;
	        case 2: function_2();     break;
			}
		} while (position != 3);


		return 0;
	}


