#pragma once
#include <iostream>
using namespace std;
class String
{

	char *str1, *str2;
	int i, j, d;
public:
	~String();
	String();
	String(char *a, int del);

	char *get_string();

	bool operator ==(String);
	bool operator>(String);
	String operator +(String);
	String operator -(int d);
	String operator =(String);
   
};