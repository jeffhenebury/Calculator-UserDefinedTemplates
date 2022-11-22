#pragma once
#ifndef CALCULATORTEMPLATE_H_
#define CALCULATORTEMPLATE_H_
#include <string>

class CalculatorTemplate
{
public:
	CalculatorTemplate() {};
	~CalculatorTemplate() {}; //virtual destructor
	std::string intOrFloat = "";
	char oprtr;

	template <typename T> T addValues(T x, T y) {
		return (x + y);
	}
	template <typename T> T subtractValues(T x, T y) {
		return (x - y);
	}
	template <typename T> T  multiplyValues(T x, T y) {
		return (x * y);
	}
	template <typename T> T divideValues(T x, T y) {
		return (x / y);
	}
	template <typename T> void doTheMath(T firstNum, char opr, T secondNum) {
		if (opr == '+') {
			std::cout << "TEST: You entered +\n";
			std::cout << addValues(firstNum, secondNum);
		}
		else if (opr == '-') {
			std::cout << "TEST:You entered -\n";
			std::cout << subtractValues(firstNum, secondNum);
		}
		else if (opr == '*') {
			std::cout << "TEST:You entered *\n";
			std::cout << multiplyValues(firstNum, secondNum);
		}
		else if (opr == '/') {
			std::cout << "TEST:You entered /\n";
			std::cout << divideValues(firstNum, secondNum);
		}
	}

	void UserInterface()
	{
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
private:

};



#endif // !1

