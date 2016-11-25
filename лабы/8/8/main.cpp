//Модифицировать проект, созданный в предыдущем практикуме №7.
//
//1) Создать иерархию классов исключений(собственных).Сделать
//наследование пользовательских типов исключений от иерархии класса
//exception.
//
//2) Сгенерировать и обработать как минимум пять различных
//исключительных ситуаций.Например, не позволять при инициализации
//объектов передавать неверные данные, обрабатывать ошибки при работе
//с памятью и ошибки работы с файлами, деление на ноль, неверный
//индекс, нулевой указатель и т.д.
//
//3) Обработку исключений вынести в main.При обработке выводить
//специфическую информацию о месте и причине исключения.Последним
//должен быть блок, который отлавливает все исключения.
//Исключения:
//1 - Стек пуст
//2 - Стек полон
//3 - В стеке нет чисел, больших чем искомое(для delGreaterThan)
//4 - Нет повторяющихся(для operator--, удаление подобных введенному)
//5 - Не хватает места для операции(для operator<=, копирование из 2-го стека)

#define SIZE 4

#include <iostream>
#include <conio.h>
#include "Exeptions.h"
#include "Stack.cpp"

StackInterface<int> TestStack(SIZE);

void addElement()//Ввести в стек
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

void printAll()//Напечатать стек
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
void delSimilarTo()//Удаление всех, равных введенному
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
void copyNotRepeating()//Копирование неповторяющихся из 2-го стека
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

void delGreaterThen()//Удалить элементы, больше чем введенный
{
	try
	{
		int element;
		cout << "Введите элемент: ";
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

		cout << "ВВЕДИТЕ:" << endl;
		cout << "1 - Для добавления элемента в стек" << endl;
		cout << "2 - Для вывода всего стека" << endl;
		cout << "3 - Для извлечения всех элементов, равных заданному" << endl;
		cout << "4 - Для копирования неповторяющихся элементов из второго стека" << endl;
		cout << "5 - Для удаления элемента, больше введенного" << endl;

		cout << "0 - Для выхода" << endl;

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
