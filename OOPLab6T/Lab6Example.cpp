﻿#include "Lab6Example.h"
#include <iostream>

#include "task1.h"
#include "task2.h"
#include "task3.h"
using namespace Task1;

void menutask1()
{
	std::cout << " Task1\n";

	std::cout << "Size for Base1: " << sizeof(Base1) << std::endl;
	std::cout << "Size for Base2: " << sizeof(Base2) << std::endl;
	std::cout << "Size for D1: " << sizeof(D1) << std::endl;
	std::cout << "Size for D2: " << sizeof(D2) << std::endl;
	std::cout << "Size for D3: " << sizeof(D3) << std::endl;
	std::cout << "Size for D123: " << sizeof(D123) << std::endl << std::endl;

	std::cout << "Size for Base1V: " << sizeof(Base1V) << std::endl;
	std::cout << "Size for Base2V: " << sizeof(Base2V) << std::endl;
	std::cout << "Size for D1V: " << sizeof(D1V) << std::endl;
	std::cout << "Size for D2V: " << sizeof(D2V) << std::endl;
	std::cout << "Size for D3V: " << sizeof(D3V) << std::endl;
	std::cout << "Size for D123V: " << sizeof(D123V) << std::endl;

}

void menutask2()
{
	ArithmeticProgression arithProg(1, 2);

	// Обчислення суми перших 5 членів арифметичної прогресії
	double arithSum = arithProg.sum(5);
	std::cout << "Sum of arithmetic progression: " << arithSum << std::endl;

	// Створення об'єкту геометричної прогресії з першим членом 3 і співвідношенням 2
	GeometricProgression geoProg(3, 2);

	// Обчислення суми перших 4 членів геометричної прогресії
	double geoSum = geoProg.sum(4);
	std::cout << "Sum of geometric progression: " << geoSum << std::endl;

}

void menutask3()
{
	ReadWritableFile file("Example File", "example.txt");
	file.displayInfo();
	cout << endl;
	cout << file << endl;
	cin >> file;
	cout << endl;
	file.displayInfo();
	cin.get();
}

void MenuExample() {
	std::cout << "     Menu Example   \n";
	std::cout << "    1   Example 1  \n";
	std::cout << "    2   Task 2  \n";
	std::cout << "    3   Task 3  \n";

	std::cout << "    4 or e  Exit \n";

}
void Example()
{
	std::cout << "OOP. Example for laboratory work #6.\n";

	char ch = '5';
	do {
		system("cls");
		MenuExample();
		ch = std::cin.get();

		std::cin.get();

		switch (ch) {
		case '1':  menutask1();   break;
		case '2':  menutask2();   break;
		case '3':  menutask3();   break;
		case '4':  return;
		case 'e':  return;
		}
		std::cout << " Press any key and enter\n";
		ch = std::cin.get();
	} while (ch != '6');

	return ;
}



