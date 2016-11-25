#include "Stack.h"
#include <iostream>
#include <conio.h>

using namespace std;

template <class Type>
Stack<Type>::Stack() : top(0), maxSize(16)
{
	data = new Type[16];
}
template <class Type>
Stack<Type>::Stack(unsigned int size) : top(0)
{
	maxSize = size;
	data = new Type[maxSize];
}
template <class Type>
Stack<Type>::~Stack()
{

}
template <class Type>
bool Stack<Type>::pushElement(Type element)
{
	if (Stack::isFull() != true)
	{
		data[top] = element;
		top++;
		return true;
	}
	else return false;
}
template <class Type>
Type Stack<Type>::popElement()
{
	Type popped = Stack::showElement(top - 1);
	data[top] = {};
	top--;
	return popped;
}
template <class Type>
Type Stack<Type>::showElement(int index)
{
	return data[index];
}

template <class Type>
bool Stack<Type>::isFull()
{
	if (top == maxSize)
		return true;
	else
		return false;
}

template <class Type>
bool Stack<Type>::clearAll()
{
	data = new Type[maxSize];
	top = 0;
	return true;
}

//Класс ИНТРЕФЕЙСА

template <class Type>
void StackInterface<Type>::operator++()
{
	if (Stack<Type>::isFull() == true)
		throw Full();
	else
	{
		if (Stack<Type>::top == 0)
			throw Empty();
		else
		{
			Type topElement = Stack<Type>::showElement(top - 1);
			cout << "Продублирован элемент: " << topElement << endl;
			Stack<Type>::pushElement(topElement);
		}
	}
}

template <class Type>
void StackInterface<Type>::operator--()
{
	Type *buffer = new Type[maxSize];
	int top = Stack<Type>::top;

	if (Stack::top == 0)
		throw Empty();

	else
	{
		int amountNotRepeating = 0;
		int forSearch = 0;

		cout << "Введите число: ";
		cin >> forSearch;

		//Подсчет повторений
		for (int i = 0; i < Stack<Type>::top; i++)
		{
			Type element = Stack<Type>::showElement(i);
			if (element != forSearch)
			{
				buffer[amountNotRepeating] = element;
				amountNotRepeating++;
			}
		}

		//Проверка на повторяемость с обработкой исключения
		if (Stack<Type>::top == amountNotRepeating)
			throw NoRepeating();
		else
		{
			Stack<Type>::clearAll();
			for (int i = 0; i < amountNotRepeating; i++)
			{
				Stack<Type>::pushElement(buffer[i]);
			}
			cout << "Извлечено " << top - amountNotRepeating << " элемента(ов) \"" << forSearch << "\"" << endl;
		}
	}
}

template <class Type>
void StackInterface<Type>::operator<=(StackInterface<Type> SI)
{
	if (Stack<Type>::isFull() == true)
		throw Full();
	if ((Stack<Type>::top + SI.top) > Stack<Type>::maxSize)
		throw NoSpace();

	else
	{
		for (int i = 0; i < SI.top; i++)
		{
			Type temp = SI.showElement(i);
			int similCounter = 0;
			for (int k = 0; k < Stack::top; k++)
			{
				if (temp == Stack<Type>::showElement(k))
				{
					similCounter++;
					break;
				}
			}
			if (similCounter == 0)
				Stack<Type>::pushElement(temp);
		}
	}
}


template <class Type>
void StackInterface<Type>::loadElement(Type element)
{
	if (Stack::isFull() == true)
		throw Full();
	else
	{
		Stack<Type>::pushElement(element);
	}
}


template <class Type>
void StackInterface<Type>::addElement()
{
	if (Stack::isFull() == true)
		throw Full();
	else
	{
		Type element = 0;
		cout << "Введите элемент: ";
		cin >> element;
		Stack<Type>::pushElement(element);
	}
}


template <class Type>
void StackInterface<Type>::delGreaterThen(Type element)
{
	Type *buffer = new Type[maxSize];
	int top = Stack<Type>::top;

	if (Stack::top == 0)
		throw Empty();
	else
	{
		cout << "Удаление элементов больше чем " << element << endl;
		int counter = 0;
		for (int i = 0; i < Stack<Type>::top; i++)
		{
			Type pushed = Stack<Type>::showElement(i);
			if (pushed <= element)
			{
				buffer[counter] = pushed;
				counter++;
			}
			if (counter == Stack<Type>::top)
				throw NoGreater();

		}
		Stack<Type>::clearAll();
		for (int i = 0; i < counter; i++)
		{
			Stack<Type>::pushElement(buffer[i]);
		}
		cout << "Удаление успешно" << endl;
	}
}
template <class Type>
void StackInterface<Type>::showAll()
{
	if (Stack::top == 0)
		throw Empty();
	else
	{
		cout << "Размер стека: " << Stack<Type>::maxSize << endl;
		cout << "Количество элементов в стеке: " << Stack<Type>::top << endl;
		for (int i = 0; i < Stack<Type>::top; i++)
		{
			cout << Stack<Type>::showElement(i) << "\t";
		}
		cout << endl;
	}
}
