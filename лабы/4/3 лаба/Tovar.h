#pragma once
#include <iostream>

using namespace std;

class Tovar
{ 
private:
	static int counter;
    char *name; 
public:
	Tovar(void);
	virtual void setname(char *name) = 0;
	virtual void getname() = 0;
	virtual void toConsole() = 0;
	static int getCounter()
	{
		return counter;
	}
	virtual ~Tovar(void);
};

class Monitor : public Tovar
{
	int day;
	int month;
	int diagonal;
public:
	int days;
	int months;

	Monitor(int d, int m) : days(d), months(m) {};

	char *name;
	void	setdate(int day, int month);
	void getdate();
	void getname();
	void setname(char* name);
	void toConsole()
	{
		cout << typeid(this).name() << "Дата выпуска: " << months << " . " << days << endl;

	}
	Monitor(void);
	void setdiagonal(int diagonal);
	void getdiagonal();
	virtual ~Monitor(void);
	
};



class work_station : public Monitor
{
	 int CPU;
public:
	int m2;
	class Name
	{
	char* null;
	public:
	Name();
	void fair();
	void setnull(char* null);
	void getnull();
	~Name(void);
	}D;
	void gethard(Name &x);
	void setCPU(int CPU);
	void getCPU();
	work_station(void);
	~work_station(void);
};



class headphones : protected work_station
{
protected: 
	int power, mm;
		 void setmm(int mm);
public:
	int numb;
		void setpower(int power);
	    void getpower();
	    headphones(void);
	    ~headphones(void);

};




class constclass :public headphones
{
private:
	 const int con = 10;
public:
	constclass(void);
	~constclass(void);
	void getfun() const
	{
		cout << this->con << endl;
	}
};




class Printer
{
	int Number;
public:
	Printer() : Number(5) {};

	void iAmPrinting(Tovar *any)
	{
		cout << "Type: " << typeid(any).name() << endl;
		any->toConsole();
	}

};

class Person
{
public:
	Person(void);
	~Person(void);
};

class Student : public Person
{
private:
	int age;
	friend class Inspector;
	friend class Curator;
public:
	void setage()
	{
		cin >> age;
	}
	void setage(int age)
	{
		this->age = age; 
	}
	void getage()
	{
		cout << this->age << endl;
	}
	void convert()
	{
		cout << "Преобразование в char" << endl;
		cout << "||" << static_cast<char>(age) << "||";
	}
};

class Inspector
{
public:
	void iKnowAllAboutYou(Student& any)
	{
		std::cout << "Твой возраст: " << any.age << std::endl;
	}
};

class Curator
{
public:
	void iCanModify(Student& any)
	{
		cin>>any.age;
	}
};