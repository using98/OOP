#include "Computer_clas.h"
#include <iostream>
using namespace std;
//Класс товар
Tovar::Tovar() : TovarPrice(0)//Инициализация через конструктор
{
}
Tovar::~Tovar()
{
}
void Tovar::setPrice(int price)
{
	this->TovarPrice = price;
}
//Внутренний класс компьютер информация
const void computer::computerInfo::printcomputerAlert()
{
}
//Класс ПК
PC::PC()
{
	Tovar::index = index;
}
void PC::setPrice(int price)
{
	Tovar::setPrice(price);
}
//Класс РАБОЧАЯ СТАНЦИЯ
work_station::work_station()
{
	Tovar::index = index;
}
void work_station::setPrice(int price)
{
	Tovar::setPrice(price);
}
//Класс прожектор
projector::projector()
{
	Tovar::index = index;
}
void projector::setPrice(int price)
{
	Tovar::setPrice(price);
}



//Класс КОНТЕЙНЕР
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
	cout << "Год выпуска товаров" << endl;
	cout << "________________________________________________________________" << endl;
	int god;
	cout << "ПК: " << Computer_class::God.PC << endl;
	cout << "Рабочая станция: " << Computer_class::God.work_station << endl;
	cout << "Проектор: " << Computer_class::God.projector << endl;
	cout << "________________________________________________________________" << endl;
	cout << "введите год,товары старше которого должны быть списаны:" << endl;
	cin >> god;
	cout << "________________________________________________________________" << endl;

	if (god == God.PC)
	{
		cout << "ПК: " << Computer_class::God.PC <<" года должен быть списан"<< endl;
	}
	if (god == God.work_station)
	{
		cout << "Рабочая станция: " << Computer_class::God.work_station <<" года должна быть списана"<< endl;
		cout << "ПК: " << Computer_class::God.PC << " года должен быть списан" << endl;
	}
	if (god == God.projector)
	{
		cout << "Рабочая станция: " << Computer_class::God.work_station << " года должна быть списана" << endl;
		cout << "ПК: " << Computer_class::God.PC << " года должен быть списан" << endl;
		cout << "Проектор: " << Computer_class::God.projector<<" года должен быть списан" << endl;
	}

	if (god > God.projector && god > God.work_station && god > God.PC)
	{

		cout << "вся  техника должна быть списана " << endl;
	}
	if (god < God.projector && god < God.work_station && god < God.PC)
	{

		cout << "нет техники на списание " << endl;
	}

}
const void Computer_class::getTovarPrice()
{
	cout << "________________________________________________________________" << endl;
	cout << "Стоимость товаров в порядке убывания цены" << endl;
	cout << "________________________________________________________________" << endl;

	if (Price.PC > Price.projector && Price.PC >Price.work_station && Price.work_station >Price.projector)
	{
		cout << "ПК: " << Computer_class::Price.PC << endl;
		cout << "Рабочей станции: " << Computer_class::Price.work_station << endl;
		cout << "Проектора: " << Computer_class::Price.projector << endl;
		cout << "Общая стоимость: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC > Price.projector && Price.PC >Price.work_station && Price.work_station <Price.projector)
	{
		cout << "ПК: " << Computer_class::Price.PC << endl;
		cout << "Проектора: " << Computer_class::Price.projector << endl;
		cout << "Рабочей станции: " << Computer_class::Price.work_station << endl;
		cout << "Общая стоимость: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC < Price.projector && Price.PC < Price.work_station && Price.work_station < Price.projector)
	{

		cout << "Проектора: " << Computer_class::Price.projector << endl;
		cout << "Рабочей станции: " << Computer_class::Price.work_station << endl;
		cout << "ПК: " << Computer_class::Price.PC << endl;
		cout << "Общая стоимость: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC < Price.projector && Price.PC < Price.work_station && Price.work_station > Price.projector)
	{
		cout << "Рабочей станции: " << Computer_class::Price.work_station << endl;
		cout << "Проектора: " << Computer_class::Price.projector << endl;
		cout << "ПК: " << Computer_class::Price.PC << endl;
		cout << "Общая стоимость: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC >Price.projector && Price.PC < Price.work_station)
	{
		cout << "Рабочей станции: " << Computer_class::Price.work_station << endl;
		cout << "ПК: " << Computer_class::Price.PC << endl;
		cout << "Проектора: " << Computer_class::Price.projector << endl;
		cout << "Общая стоимость: " << Computer_class::Price.Total << endl;
	}
	if (Price.PC > Price.projector && Price.PC < Price.work_station)
	{
		cout << "Проектора: " << Computer_class::Price.projector << endl;
		cout << "ПК: " << Computer_class::Price.PC << endl;
		cout << "Рабочей станции: " << Computer_class::Price.work_station << endl;
		cout << "Общая стоимость: " << Computer_class::Price.Total << endl;
	}
}

//Класс контроллер
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