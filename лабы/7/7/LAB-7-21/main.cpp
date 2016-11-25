//Модифицировать проект, созданный в предыдущем практикуме №6,
//следующим образом:
//Создать шаблон заданного класса
//Проверить использование шаблона для стандартных типов данных
//(в качестве стандартных типов использовать целые и вещественные типы)
//
//Написать глобальную функцию - шаблон в соответствии с вариантом.
//Проверить работу функции с int, double,float
//Написать функцию - шаблон, которая возвращает количество элементов в строке равных заданному

#include "String.cpp" 
#include "Tovar.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(0,"");
	
	StringInterface<int> TestInt;
	StringInterface<double> TestDouble;
	StringInterface<float> TestFloat;


	int a1 = 5;
	double a2 = 1.222;
	float a3 = 5.8;


cout << "введите первое слово:" << endl;
TestInt.output_str(a1);
cout << endl;
cout << "тип int,a=5" << endl;
cout << "______________________________________" << endl;
cout << "введите второе слово" << endl;
TestDouble.output_str(a2);
cout << endl;
cout << "тип double,a=1.222" << endl;
cout << "______________________________________" << endl;
cout << "введите третье слово" << endl;
TestFloat.output_str(a3);
cout << endl;
cout << "тип float,a=5.8" << endl;
cout << "______________________________________" << endl;
cout << "введите четвертое слово" << endl;
TestInt.output_str(3);
cout << endl;
cout << "тип int,a=3" << endl;
cout << "______________________________________" << endl;

return 0;
}













//Tovar *Tov = new Tovar;
//Tov->setCena(3);
//StringInterface<Tovar> TestTovar;
//TestTovar.output_str(*Tov);