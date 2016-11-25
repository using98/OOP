//�������������� ������, ��������� � ���������� ���������� �7.
//
//1) ������� �������� ������� ����������(�����������).�������
//������������ ���������������� ����� ���������� �� �������� ������
//exception.
//
//2) ������������� � ���������� ��� ������� ���� ���������
//�������������� ��������.��������, �� ��������� ��� �������������
//�������� ���������� �������� ������, ������������ ������ ��� ������
//� ������� � ������ ������ � �������, ������� �� ����, ��������
//������, ������� ��������� � �.�.
//
//3) ��������� ���������� ������� � main.��� ��������� ��������
//������������� ���������� � ����� � ������� ����������.���������
//������ ���� ����, ������� ����������� ��� ����������.
//����������:
//1 - ���� ����
//2 - ���� �����
//3 - � ����� ��� �����, ������� ��� �������(��� delGreaterThan)
//4 - ��� �������������(��� operator--, �������� �������� ����������)
//5 - �� ������� ����� ��� ��������(��� operator<=, ����������� �� 2-�� �����)

#define SIZE 4

#include <iostream>
#include <conio.h>
#include "Exeptions.h"
#include "Stack.cpp"

StackInterface<int> TestStack(SIZE);

void addElement()//������ � ����
{
	try
	{
		TestStack.addElement();
	}
	catch (Full error)
	{
		error.printMessage();
	}
}

void printAll()//���������� ����
{
	try
	{
		TestStack.showAll();
	}
	catch (Empty error)
	{
		error.printMessage();
	}
}
void delSimilarTo()//�������� ����, ������ ����������
{
	try
	{
		--TestStack;
	}
	catch (Empty error)
	{
		error.printMessage();
	}
	catch (NoRepeating error)
	{
		error.printMessage();
	}
}
void copyNotRepeating()//����������� ��������������� �� 2-�� �����
{
	try
	{
		StackInterface<int> ForCopy(2);
		ForCopy.loadElement(5);
		ForCopy.loadElement(6);

		TestStack <= ForCopy;
		TestStack.showAll();
	}
	catch (Empty error)
	{
		error.printMessage();
	}
	catch (Full error)
	{
		error.printMessage();
	}
	catch (NoSpace error)
	{
		error.printMessage();
	}
}

void delGreaterThen()//������� ��������, ������ ��� ���������
{
	try
	{
		int element;
		cout << "������� �������: ";
		cin >> element;
		TestStack.delGreaterThen(element);
	}
	catch (Empty error)
	{
		error.printMessage();
	}
	catch (NoGreater error)
	{
		error.printMessage();
	}
}



void main()
{
	setlocale(LC_CTYPE, "Rus");

	int choise = 0;

	do
	{

		cout << "�������:" << endl;
		cout << "1 - ��� ���������� �������� � ����" << endl;
		cout << "2 - ��� ������ ����� �����" << endl;
		cout << "3 - ��� ���������� ���� ���������, ������ ���������" << endl;
		cout << "4 - ��� ����������� ��������������� ��������� �� ������� �����" << endl;
		cout << "5 - ��� �������� ��������, ������ ����������" << endl;

		cout << "0 - ��� ������" << endl;

		cin >> choise;
		switch (choise)
		{
		case 1: addElement(); break;
		case 2: printAll(); break;
		case 3: delSimilarTo(); break;
		case 4: copyNotRepeating(); break;
		case 5: delGreaterThen(); break;
		case 0: break;
		default: break;
		}

		_getch();
		system("cls");

	} while (choise != 0);

}
