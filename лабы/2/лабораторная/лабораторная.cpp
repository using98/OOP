#include "stdafx.h"
#include "Bus.h" 
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

	setlocale(0, "");
	Bus a[5];


	/*	a1.setName("�����.�.�"); */
	a[1].setNomer1(1);
	a[1].setNomer2(7);
	a[1].setGod(1998);
	a[1].setProbeg(300000);
	/*a2.setName("�������.B.B"); */
	a[2].setNomer1(2);
	a[2].setNomer2(5);
	a[2].setGod(2000);
	a[2].setProbeg(55000);

	a[3].setNomer1(3);
	a[3].setNomer2(7);
	a[3].setGod(1996);
	a[3].setProbeg(37500);


	a[4].setNomer1(4);
	a[4].setNomer2(5);
	a[4].setGod(2010);
	a[4].setProbeg(10000);


	a[5].setNomer1(5);
	a[5].setNomer2(15);
	a[5].setGod(2004);
	a[5].setProbeg(89000);

	/*	char* q = a1.getName(); */
	int w1 = a[1].getNomer2();
	int w2 = a[2].getNomer2();
	int w3 = a[3].getNomer2();
	int w4 = a[4].getNomer2();
	int w5 = a[5].getNomer2();


	int z1 = a[1].getGod();
	int z2 = a[2].getGod();
	int z3 = a[3].getGod();
	int z4 = a[4].getGod();
	int z5 = a[5].getGod();

	a[1].print();
	a[2].print();
	a[3].print();
	a[4].print();
	a[5].print();

	int t;
	do
	{
		cout << "1. ������ ��������� ��� ��������� ������ ��������\n";
		cout << "2. C����� ���������, ������� ��������������� ������ ��������� �����\n";
		cout << "0. �����\n\n";
		cout << "�������� �����: ";
		cin >> t;
		cout << "________________________________________________________________________________\n";
		switch (t)
		{
		case 1:
			int d;
			{
				cout << "������� ����� ��������" << endl;
				cin >> d;
				if (d == w1 && d == w3)
				{
					cout << "������ ��������� ���\n ��������� ������ ��������" << endl;
					cout << "_________________________________________" << endl;
					a[1].print();
					a[3].print();
					cout << "_________________________________________" << endl;
				}
				if (d == w2 && d == w4)
				{
					cout << "������ ��������� ���\n ��������� ������ ��������" << endl;
					cout << "_________________________________________" << endl;
					a[2].print();
					a[4].print();
					cout << "_________________________________________" << endl;
				}
				if (d == w5)
				{
					cout << "������ ��������� ���\n ��������� ������ ��������" << endl;
					cout << "_________________________________________" << endl;
					a[5].print();
					cout << "_________________________________________" << endl;
				}
				if (d != w1 && d != w2 && d != w3 && d != w4 && d != w5)
				{
					cout << "_________________________________________" << endl;
					cout << "����� ��������� ���" << endl;
					cout << "_________________________________________" << endl;
				}}

			break;
		case 2:
			int h;
			cout << "������� ��� ������������" << endl;
			cin >> h;

			if (h > z4)
			{
				cout << "������ ��������� �������\n��������������� ������ ��������� �����" << endl;
				cout << "_________________________________________" << endl;
				a[1].print();
				a[2].print();
				a[3].print();
				a[4].print();
				a[5].print();
				cout << "_________________________________________" << endl;

			}
			if (h > z5 && h <= z4)
			{
				cout << "������ ��������� �������\n��������������� ������ ��������� �����" << endl;
				cout << "_________________________________________" << endl;
				a[1].print();
				a[2].print();
				a[3].print();
				a[5].print();
				cout << "_________________________________________" << endl;
			}
			if (h > z2 && h <= z5)
			{
				cout << "������ ��������� �������\n��������������� ������ ��������� �����" << endl;
				cout << "_________________________________________" << endl;
				a[1].print();
				a[2].print();
				a[3].print();
				cout << "_________________________________________" << endl;
			}
			if (h > z1 && h <= z2)
			{
				cout << "������ ��������� �������\n��������������� ������ ��������� �����" << endl;
				cout << "_________________________________________" << endl;
				a[1].print();
				a[3].print();

				cout << "_________________________________________" << endl;
			}
			if (h > z3 && h <= z1)
			{
				cout << "������ ��������� �������\n��������������� ������ ��������� �����" << endl;
				cout << "_________________________________________" << endl;

				a[3].print();

				cout << "_________________________________________" << endl;
			}

			if (h <= z3)
			{
				cout << "_________________________________________" << endl;
				cout << "����� ��������� ���!" << endl;
				cout << "_________________________________________" << endl;
			}
			break;
		case 0: exit(0); break;

		}
	}
		while (t != 0);
}
