#include "Computer_clas.h"
#include <iostream>
using namespace std;
//����� �����
Tovar::Tovar() : TovarPrice(0)//������������� ����� �����������
{
}
Tovar::~Tovar()
{
}
void Tovar::setPrice(int price)
{
	this->TovarPrice = price;
}
//���������� ����� ��������� ����������
const void computer::computerInfo::printcomputerAlert()
{
}
//����� ��
PC::PC()
{
	Tovar::index = index;
}
void PC::setPrice(int price)
{
	Tovar::setPrice(price);
}
//����� ������� �������
work_station::work_station()
{
	Tovar::index = index;
}
void work_station::setPrice(int price)
{
	Tovar::setPrice(price);
}
//����� ���������
projector::projector()
{
	Tovar::index = index;
}
void projector::setPrice(int price)
{
	Tovar::setPrice(price);
}



//����� ���������
Computer_class::Computer_class()
{
	Computer_class::God.PC = 0;
	Computer_class::God.work_station = 0;
	Computer_class::God.projector = 0;


	Computer_class::Price.PC = 0;
	Computer_class::Price.work_station = 0;
	Computer_class::Price.projector = 0;
	Computer_class::Price.Total = 0;
}
bool Computer_class::setTovarGod(unsigned int typeGod, int param)
{
	if (param < 3)
	{
		switch (param)
		{
		case 0: Computer_class::God.PC = typeGod; break;
		case 1: Computer_class::God.work_station = typeGod; break;
		case 2: Computer_class::God.projector = typeGod; break;
		}
		return true;
	}
	else
		return false;

}
bool Computer_class::setTovarPrice(unsigned int typePrice, int param)
{
	if (param < 3)
	{
		switch (param)
		{
		case 0: Computer_class::Price.PC = typePrice; break;
		case 1: Computer_class::Price.work_station = typePrice; break;
		case 2: Computer_class::Price.projector = typePrice; break;
		}


		Computer_class::Price.Total = Computer_class::Price.PC + Computer_class::Price.work_station + Computer_class::Price.projector;
		return true;
	}
	else
		return false;
}
const void Computer_class::getTovarGod()
{
	cout << "________________________________________________________________" << endl;
	cout << "��� ������� �������" << endl;
	cout << "________________________________________________________________" << endl;
	int god;
	cout << "��: " << Computer_class::God.PC << endl;
	cout << "������� �������: " << Computer_class::God.work_station << endl;
	cout << "��������: " << Computer_class::God.projector << endl;
	cout << "________________________________________________________________" << endl;
	cout << "������� ���,������ ������ �������� ������ ���� �������:" << endl;
	cin >> god;
	cout << "________________________________________________________________" << endl;

	if (god == God.PC)
	{
		cout << "��: " << Computer_class::God.PC <<" ���� ������ ���� ������"<< endl;
	}
	if (god == God.work_station)
	{
		cout << "������� �������: " << Computer_class::God.work_station <<" ���� ������ ���� �������"<< endl;
		cout << "��: " << Computer_class::God.PC << " ���� ������ ���� ������" << endl;
	}
	if (god == God.projector)
	{
		cout << "������� �������: " << Computer_class::God.work_station << " ���� ������ ���� �������" << endl;
		cout << "��: " << Computer_class::God.PC << " ���� ������ ���� ������" << endl;
		cout << "��������: " << Computer_class::God.projector<<" ���� ������ ���� ������" << endl;
	}

	if (god > God.projector && god > God.work_station && god > God.PC)
	{

		cout << "���  ������� ������ ���� ������� " << endl;
	}
	if (god < God.projector && god < God.work_station && god < God.PC)
	{

		cout << "��� ������� �� �������� " << endl;
	}

}
const void Computer_class::getTovarPrice()
{
	cout << "________________________________________________________________" << endl;
	cout << "��������� ������� � ������� �������� ����" << endl;
	cout << "________________________________________________________________" << endl;

	if (Price.PC > Price.projector && Price.PC >Price.work_station && Price.work_station >Price.projector)
	{
		cout << "��: " << Computer_class::Price.PC << endl;
		cout << "������� �������: " << Computer_class::Price.work_station << endl;
		cout << "���������: " << Computer_class::Price.projector << endl;
		cout << "����� ���������: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC > Price.projector && Price.PC >Price.work_station && Price.work_station <Price.projector)
	{
		cout << "��: " << Computer_class::Price.PC << endl;
		cout << "���������: " << Computer_class::Price.projector << endl;
		cout << "������� �������: " << Computer_class::Price.work_station << endl;
		cout << "����� ���������: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC < Price.projector && Price.PC < Price.work_station && Price.work_station < Price.projector)
	{

		cout << "���������: " << Computer_class::Price.projector << endl;
		cout << "������� �������: " << Computer_class::Price.work_station << endl;
		cout << "��: " << Computer_class::Price.PC << endl;
		cout << "����� ���������: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC < Price.projector && Price.PC < Price.work_station && Price.work_station > Price.projector)
	{
		cout << "������� �������: " << Computer_class::Price.work_station << endl;
		cout << "���������: " << Computer_class::Price.projector << endl;
		cout << "��: " << Computer_class::Price.PC << endl;
		cout << "����� ���������: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC >Price.projector && Price.PC < Price.work_station)
	{
		cout << "������� �������: " << Computer_class::Price.work_station << endl;
		cout << "��: " << Computer_class::Price.PC << endl;
		cout << "���������: " << Computer_class::Price.projector << endl;
		cout << "����� ���������: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC > Price.projector && Price.PC < Price.work_station)
	{
		cout << "���������: " << Computer_class::Price.projector << endl;
		cout << "��: " << Computer_class::Price.PC << endl;
		cout << "������� �������: " << Computer_class::Price.work_station << endl;
		cout << "����� ���������: " << Computer_class::Price.Total << endl;
	}
}

//����� ����������
Computer_classController::Computer_classController()
{
}
Computer_classController::Computer_classController(double p, double p1)
{
	jarSize = p;
	packetSize = p1;
}
void Computer_classController::loadCoffee(Tovar *Type, unsigned int money , bool param)
{
		setTovarPrice(money, Type->index);
}
void Computer_classController::loadCoffee2(Tovar *Type, unsigned int YEAR, bool param)
{
	setTovarGod(YEAR, Type->index);
}
const void Computer_classController::showcomputer_class()
{
	Computer_class::getTovarPrice();
}
const void Computer_classController::show2computer_class()
{
	Computer_class::getTovarGod();
}