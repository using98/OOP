#pragma once

template <class Type>

class Stack
{
protected:
	Stack();
	Stack(unsigned int size);
	~Stack();

	bool pushElement(Type element);
	Type popElement();
	Type showElement(int index);
	bool isFull();
	bool clearAll();

	int top;
	int maxSize;

private:
	Type *data;
};

template <class Type>

class StackInterface final : protected Stack<Type>
{
public:
	StackInterface() : Stack() {};
	StackInterface(unsigned int size) : Stack(size) {};

	void operator++();//Дублирование верхнего
	void operator--();//Удаление подбных введенному
	void operator<=(StackInterface);//Копирование неповторяющихся из 2-го стека

	void loadElement(Type element);
	void addElement();
	void delGreaterThen(Type element);
	void showAll();

};
