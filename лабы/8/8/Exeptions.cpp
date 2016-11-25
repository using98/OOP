#include "Exeptions.h"

using namespace std;

Exeption::Exeption()
{
	errorCode = 0;
}

int Exeption::getErrorCode()
{
	return errorCode;
}

void Empty::printMessage()
{
	cout << "���� ����" << endl;
	cout << "��� ������: " << Exeption::getErrorCode() << endl;
}
Empty::Empty()
{
	Exeption::errorCode = 1;
}

void Full::printMessage()
{
	cout << "���� �����" << endl;
	cout << "��� ������: " << Exeption::getErrorCode() << endl;
}
Full::Full()
{
	Exeption::errorCode = 2;
}

void NoGreater::printMessage()
{

	cout << "��� ��������� ������ �������" << endl;
	cout << "��� ������: " << Exeption::getErrorCode() << endl;
}
NoGreater::NoGreater()
{
	Exeption::errorCode = 3;
}

void NoRepeating::printMessage()
{

	cout << "����� ����� � ����� ���" << endl;
	cout << "��� ������: " << Exeption::getErrorCode() << endl;
}
NoRepeating::NoRepeating()
{
	Exeption::errorCode = 4;
}

void NoSpace::printMessage()
{

	cout << "� ������������� ��� �����" << endl;
	cout << "��� ������: " << Exeption::getErrorCode() << endl;
}
NoSpace::NoSpace()
{
	Exeption::errorCode = 5;
}