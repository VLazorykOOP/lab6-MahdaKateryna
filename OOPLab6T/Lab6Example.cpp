#include "Lab6Example.h"
#include <iostream>

#include "task2.h"

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

void MenuExample() {
	std::cout << "     Menu Example   \n";
	std::cout << "    1   Example 1  \n";
	std::cout << "    2   Task 2  \n";
	std::cout << "    3   Example 3  \n";

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
		case '1':  SpaceExample1::mainExample1();   break;
		case '2':  menutask2();   break;
		case '3':  SpaceExample3::mainExample3();   break;
		case '4':  return;
		case 'e':  return;
		}
		std::cout << " Press any key and enter\n";
		ch = std::cin.get();
	} while (ch != '6');

	return ;
}



