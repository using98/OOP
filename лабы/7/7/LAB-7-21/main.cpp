//�������������� ������, ��������� � ���������� ���������� �6,
//��������� �������:
//������� ������ ��������� ������
//��������� ������������� ������� ��� ����������� ����� ������
//(� �������� ����������� ����� ������������ ����� � ������������ ����)
//
//�������� ���������� ������� - ������ � ������������ � ���������.
//��������� ������ ������� � int, double,float
//�������� ������� - ������, ������� ���������� ���������� ��������� � ������ ������ ���������

#include "String.cpp" 
#include "Tovar.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(0,"");
	
	StringInterface<int> TestInt;
	StringInterface<double> TestDouble;
	StringInterface<float> TestFloat;


	int a1 = 5;
	double a2 = 1.222;
	float a3 = 5.8;


cout << "������� ������ �����:" << endl;
TestInt.output_str(a1);
cout << endl;
cout << "��� int,a=5" << endl;
cout << "______________________________________" << endl;
cout << "������� ������ �����" << endl;
TestDouble.output_str(a2);
cout << endl;
cout << "��� double,a=1.222" << endl;
cout << "______________________________________" << endl;
cout << "������� ������ �����" << endl;
TestFloat.output_str(a3);
cout << endl;
cout << "��� float,a=5.8" << endl;
cout << "______________________________________" << endl;
cout << "������� ��������� �����" << endl;
TestInt.output_str(3);
cout << endl;
cout << "��� int,a=3" << endl;
cout << "______________________________________" << endl;

return 0;
}













//Tovar *Tov = new Tovar;
//Tov->setCena(3);
//StringInterface<Tovar> TestTovar;
//TestTovar.output_str(*Tov);