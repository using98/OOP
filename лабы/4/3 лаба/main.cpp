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
����������� �����
}*/

void function_1()
{
	Monitor b;
	std::cout << Tovar::getCounter() << ")" << endl;
	//����� 
	b.setname("�������");
	b.getname();
	//�������
	b.setdate(14, 6);
	b.getdate();
	b.setdiagonal(1200);
	b.getdiagonal();
	std::cout << endl;

	work_station c;
	std::cout << Tovar::getCounter() << ")" << endl;
	//�����
	c.setname("������� �������");
	c.getname();
	//������� �������
	c.setdate(25, 3);
	c.getdate();
	c.setCPU(2000);
	c.getCPU();
	c.D.setnull("epam");//��������� ����� Name
	c.D.getnull();
	std::cout << endl;
}
void demo(Monitor *a)
{ //������� ��������������
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
	std::cout << "������ � �������������� ��������" << endl;


	Student a;//������������� ������
	a.setage(3);
	Inspector z;
	z.iKnowAllAboutYou(a);
	cout << "________________________________________________" << endl;


	Curator s; //��������� ���� � ������� �������������� ������
	cout << "������� �����" << endl;
	s.iCanModify(a);
	a.convert();
	cout << endl;//�������������� � char
	cout << "��������� � ������� �������������� ������" << endl;
	a.getage();
	cout << "________________________________________________" << endl;


	cout << "������ � ����������" << endl;
	constclass y;//������ � ����������
	y.getfun();
	cout << endl;

	//��������������
	work_station *d = new work_station;
	demo(d);
	cout << endl;


	Monitor *some = new Monitor(5, 6);
	Printer alluse;
	alluse.iAmPrinting(some);
}





//headpohones y;
//y.setCPU(10); ��� ������� � "work_station::setCPU", ��������� "headphones" ���������� "protected" ��� ������������ �� "workstation"
//y.setpower(6);
//y.getpower(9);
//y.setmm(4);work_station::setmm: ���������� ���������� � protected ����, ������������ � ������ "answer"	

//result z;
//z.setpower(12);
//z.setCPU(20); ��� ������� � "work_station::setCPU", ��������� "headphones" ���������� "protected" ��� ������������ �� "WORK_STATION"
//z.setpower(9);

//������������� ���������� ���������� ����
	int _tmain(int argc, _TCHAR* argv[])
	{
		setlocale(0, "");
		int position;
		do
		{
		cout << "________________________________________________" << endl;
		cout << "1-��� ������ 1 �������" << endl;
		cout << "2-��� ������ 2 �������" << endl;
		cout << "3-��� ������" << endl;
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


