#include "String.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

template <class Type>
String<Type>::String() : top(0), maxSize(16)
{
	str1 = new Type[16];

}
template <class Type>
bool String<Type>::operator ==(String<Type> ob)

{
	int i;
	bool b = true;
	if (strlen(str1) == strlen(ob.str1))
	{
		for (i = 0; i <= strlen(ob.str1); i++)
			if (str1[i] != ob.str1[i])
				b = false;
	}
	else
		b = false;
	return b;
}
template <class Type>
bool String<Type>::operator>(String<Type> ob)
{
	char* p1 = str1;
	char* p2 = ob.str1;
	return strstr(str1, ob.str1);
}
template <class Type>
String<Type>::String( unsigned int size): top(0)
{
	maxSize = size;
	str1 = new Type [maxSize];
}
template <class Type>
String<Type>::~String()
{
}
//Класс ИНТРЕФЕЙСА

template <class Type>
StringInterface<Type> StringInterface<Type>::operator +(StringInterface<Type> ob)
{
	StringInterface<Type> str2;
	str2.str1 = str1;
	strncat(str2.str1, ob.str1, strlen(ob.str1));
	cout << "\nСложение двух строк: " << str2.str1 << endl;
	return str2;
}
template <class Type>
StringInterface<Type> StringInterface<Type> ::operator -(Type d)
{
	int d , i;
	StringInterface<Type> str2;
	j = 0;
	char str[50];
	for (i = 0; i <= strlen(str1); i++)
		if (i != d - 1)
		{
			str[j] = str1[i];
			j++;
		};
	str[j] = NULL;
	str2.str1 = str;
	cout << "Строка: " << str2.str1 << endl;
	return str2;
}
template<class Type>
StringInterface<Type> StringInterface<Type>::operator =(StringInterface<Type> ob)
{
	str1 = ob.str1;
	return *this;
}
template<class Type>
void StringInterface<Type>::output_str(Type el)
{

		char s[15];
		cin >> s;
		for (i = 0; i <el; i++)
			cout << s[i] << "\0";
		
}




//нет

template<class Type>
class Massiv
{
};

//нельзя