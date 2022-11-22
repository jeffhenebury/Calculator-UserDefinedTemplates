//Jeff Henebury
//  CalculatorTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculatorTemplate.h"
using namespace std;



int main()
{
    CalculatorTemplate myCalc;
    cout << "Manually testing ints...\n";
    int x = 5;
    int g = 45;
    int ans1 = myCalc.addValues(x, g);
    cout << "added values of 5 and 45: " << ans1 << endl;
    cout << "Manually testing dooubles...\n";
    double a = 99.99;
    double b = 13.1;
    double ans2 = myCalc.subtractValues(a, b);
    cout << "subtracted values, 99.99-13.1: " << ans2 << endl;
    cout << endl;
    myCalc.doTheMath(a, '-', b);
    cout << "And now, user input...\n";
    myCalc.UserInterface();
    return 0;

}
