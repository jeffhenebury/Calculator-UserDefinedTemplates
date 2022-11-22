//Jeff Henebury
//  CalculatorTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculatorTemplate.h"
using namespace std;

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
