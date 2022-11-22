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
		//	std::cout << "TEST: You entered +\n";
			std::cout << "\nAnswer: " << addValues(firstNum, secondNum);
		}
		else if (opr == '-') {
		//	std::cout << "TEST:You entered -\n";
			std::cout << "\nAnswer: " << subtractValues(firstNum, secondNum);
		}
		else if (opr == '*') {
		//	std::cout << "TEST:You entered *\n";
			std::cout << "\nAnswer: " << multiplyValues(firstNum, secondNum);
		}
		else if (opr == '/') {
		//	std::cout << "TEST:You entered /\n";
			std::cout << "\nAnswer: "<< divideValues(firstNum, secondNum);
		}
	}

	/*template <typename T> T addValues(T x, T y);
	template <typename T> T subtractValues(T x, T y);
	template <typename T> T  multiplyValues(T x, T y);
	template <typename T> T divideValues(T x, T y);
	template <typename T> void doTheMath(T firstNum, char opr, T secondNum);*/
	void UserInterface();
		
};



#endif // !1

