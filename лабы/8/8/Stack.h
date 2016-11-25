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

	void operator++();//������������ ��������
	void operator--();//�������� ������� ����������
	void operator<=(StackInterface);//����������� ��������������� �� 2-�� �����

	void loadElement(Type element);
	void addElement();
	void delGreaterThen(Type element);
	void showAll();

};
