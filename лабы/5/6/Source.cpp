/*
1) Определить класс - Контейнер(указан в вариантах жирным шрифтом) для храненияя разных типов объектов(в пределах иерархии) 
в виде списка или массива(использовать абстрактный тип данных).Класс контейнер должен содержать методы get и set для списка / массива, 
 метод для вывода списка на консоль. 
2) Определить  управляющий класс - Контроллер, который управляет объектом - Контенером и реализовать в нем запросы по варианту :

Создать Компьютерный класс.
Найти общую стоимость всей  техники, вывести технику в порядке убывания  одного из параметров.
Найти технику, которая должна быть списана(политику списания определить самостоятельно)
*/





#include <iostream>
#include "Computer_clas.h"

void main()
{
	setlocale(LC_CTYPE, "Rus");

	Tovar *tovarType;
	Computer_classController Controller(1,2);

	PC CB;
	tovarType = &CB;
	tovarType->setPrice(1);

	Controller.loadCoffee(tovarType, 200,0);

	work_station GC;
	tovarType = &GC;
	tovarType->setPrice(1);
	Controller.loadCoffee(tovarType, 300,0);

	projector IC;
	tovarType = &IC;
	tovarType->setPrice(1);
	Controller.loadCoffee(tovarType, 400, 0);

	Controller.showcomputer_class();

	PC a;
	tovarType = &a;
	tovarType->setPrice(5);

	Controller.loadCoffee2(tovarType, 1998, 0);

	work_station b;
	tovarType = &b;
	tovarType->setPrice(3);

	Controller.loadCoffee2(tovarType, 1999,0);


	projector c;
	tovarType = &c;
	tovarType->setPrice(2);

	Controller.loadCoffee2(tovarType, 2000, 0);
	Controller.show2computer_class();
}
