#pragma once
#include <iostream>
class Tovar//Класс товар
{
	friend class Computer_classController;

private:
	unsigned int TovarPrice;//Данные хранит только основной класс  , стоимость товара

protected://Для защиты. Теперь с методами класса взаимодействуют только его наследники
	Tovar();
	~Tovar();
	unsigned int index;
	//методы, не изменяющие поля объекта, определены ключевым словом const!
public:
	virtual void setPrice(int price) = 0;//Чистые виртуальные функции для демонстрации полиморфизма
};

//Класс компьютер
class computer
{
	friend class Computer_classController;

protected:
	
	class computerInfo //Вложенный класс (nested)
	{
	protected:
		const void printcomputerAlert();
	};
};

//Объявляю базовые классы виртуальными, чтобы устранить дублирование объектов класса
class PC  : virtual public Tovar, virtual public computer, virtual public computer::computerInfo
	//Класс Пк
{
protected:
	const int index = 0;

public:
	PC();
	void setPrice(int price);
};

class work_station  : virtual public Tovar, virtual public computer
	//Класс рабочая станция
{
protected:
	const int index = 1;

public:
	work_station();
	void setPrice(int price);
};
class projector : virtual public Tovar, virtual public computer
{
protected:
	const int index = 2;

public:
	projector();
	void setPrice(int price);
};

//Класс Контейнер из задания
class Computer_class
{
private:
	struct year
	{
		unsigned int PC;
		unsigned int work_station;
		unsigned int projector;
		unsigned int Total;
	};
	year God;

	struct price
	{
		unsigned int PC;
		unsigned int work_station;
		unsigned int projector;
		unsigned int Total;
	};
	price Price;

protected:
	Computer_class();

	bool setTovarPrice(unsigned int typePrice, int param);
	bool setTovarGod(unsigned int typeGod, int param);
	const void getTovarGod();
	const void getTovarPrice();
};

//Класс Контроллер из задания
class Computer_classController : public Computer_class
{
private:
	double jarSize;
	double packetSize;

public:
	Computer_classController();
	Computer_classController(double p, double p1);

	void loadCoffee(Tovar *Type, unsigned int money, bool param);
	void loadCoffee2(Tovar *Type, unsigned int YEAR, bool param);
	const void showcomputer_class();
	const void show2computer_class();
};
