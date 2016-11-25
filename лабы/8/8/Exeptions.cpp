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
	cout << "стек пуст" << endl;
	cout << "код ошибки: " << Exeption::getErrorCode() << endl;
}
Empty::Empty()
{
	Exeption::errorCode = 1;
}

void Full::printMessage()
{
	cout << "стек полон" << endl;
	cout << "код ошибки: " << Exeption::getErrorCode() << endl;
}
Full::Full()
{
	Exeption::errorCode = 2;
}

void NoGreater::printMessage()
{

	cout << "нет элементов больше данного" << endl;
	cout << "код ошибки: " << Exeption::getErrorCode() << endl;
}
NoGreater::NoGreater()
{
	Exeption::errorCode = 3;
}

void NoRepeating::printMessage()
{

	cout << "таких чисел в стеке нет" << endl;
	cout << "код ошибки: " << Exeption::getErrorCode() << endl;
}
NoRepeating::NoRepeating()
{
	Exeption::errorCode = 4;
}

void NoSpace::printMessage()
{

	cout << "в конечномстеке нет места" << endl;
	cout << "код ошибки: " << Exeption::getErrorCode() << endl;
}
NoSpace::NoSpace()
{
	Exeption::errorCode = 5;
}