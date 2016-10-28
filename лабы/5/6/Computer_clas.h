#pragma once
#include <iostream>
class Tovar//����� �����
{
	friend class Computer_classController;

private:
	unsigned int TovarPrice;//������ ������ ������ �������� �����  , ��������� ������

protected://��� ������. ������ � �������� ������ ��������������� ������ ��� ����������
	Tovar();
	~Tovar();
	unsigned int index;
	//������, �� ���������� ���� �������, ���������� �������� ������ const!
public:
	virtual void setPrice(int price) = 0;//������ ����������� ������� ��� ������������ ������������
};

//����� ���������
class computer
{
	friend class Computer_classController;

protected:
	
	class computerInfo //��������� ����� (nested)
	{
	protected:
		const void printcomputerAlert();
	};
};

//�������� ������� ������ ������������, ����� ��������� ������������ �������� ������
class PC  : virtual public Tovar, virtual public computer, virtual public computer::computerInfo
	//����� ��
{
protected:
	const int index = 0;

public:
	PC();
	void setPrice(int price);
};

class work_station  : virtual public Tovar, virtual public computer
	//����� ������� �������
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

//����� ��������� �� �������
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

//����� ���������� �� �������
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
