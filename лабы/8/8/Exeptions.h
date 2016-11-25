#pragma once
#include <iostream>

using namespace std;

class Exeption
{
protected:
	int errorCode;

	Exeption();

	int getErrorCode();
};
class Full : public Exeption
{
public:
	Full();
	void printMessage();
};
class Empty : public Exeption
{
public:
	Empty();
	void printMessage();
};
class NoGreater : public Exeption
{
public:
	NoGreater();
	void printMessage();
};
class NoRepeating : public Exeption
{
public:
	NoRepeating();
	void printMessage();
};
class NoSpace : public Exeption
{
public:
	NoSpace();
	void printMessage();
};

