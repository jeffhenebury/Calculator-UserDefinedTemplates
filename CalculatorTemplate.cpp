//Jeff Henebury
//  CalculatorTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculatorTemplate.h"
using namespace std;

void CalculatorTemplate::UserInterface() {
	while (true) {
		float flNum1 = 0;
		float flNum2 = 0;
		int iNum1 = 0;
		int iNum2 = 0;
		std::cout << "\nPlease type out: int, float, or quit? ";
		std::cin >> intOrFloat;
		if (intOrFloat == "int") {
			std::cout << "\nCool, let's do ints. Enter first number:";
			std::cin >> iNum1;
			std::cout << "\nEnter operator (+,-,*, or /):";
			std::cin >> oprtr;
			std::cout << "\nEnter second number:";
			std::cin >> iNum2;
			doTheMath(iNum1, oprtr, iNum2);
		}
		else if (intOrFloat == "float") {
			std::cout << "\nCool, let's do floats. Enter first number:";
			std::cin >> flNum1;
			std::cout << "\nEnter operator (+,-,*, or /):";
			std::cin >> oprtr;
			std::cout << "\nEnter second number:";
			std::cin >> flNum2;
			doTheMath(flNum1, oprtr, flNum2);
		}
		else if (intOrFloat == "quit") {
			std::cout << "Goodbye!\n";
			break;
		}
		else {
			std::cout << "Bad input! Please try again.\n";
		}
	}
}
