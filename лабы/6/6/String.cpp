#include <iostream>
#include "String.h"

String::String()
{

}
String::String(char *a, int del)
{
	str1 = a;
	d = del;
}

bool String::operator ==(String ob)

{
	bool b = true;
	if (strlen(str1) == strlen(ob.str1))
	{
		for (i = 0; i <= strlen(ob.str1); i++)
			if (str1[i] != ob.str1[i])
				b = false;
	}
	else b = false;
	return b;
}
bool String::operator>(String ob)
{
	char* p1 = str1;
	char* p2 = ob.str1;
	return strstr(str1, ob.str1);
}

String String::operator +(String ob)
{
	String str2;
	str2.str1 = str1;
	strncat(str2.str1, ob.str1, strlen(ob.str1));
	cout << "\nСложение двух строк: " << str2.str1 << endl;
	return str2;
}
String String::operator -(int d)
{
	String str2;
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
String String::operator =(String ob)
{
	str1 = ob.str1;
	return *this;
}
char *String::get_string()
{
	return str1;
}
String::~String()
{
	
}