//Jeff Henebury
//  CalculatorTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculatorTemplate.h"
using namespace std;



int main()
{
    CalculatorTemplate myCalc;
    int x = 5;
    int g = 45;
    int ans1 = myCalc.addValues(x, g);
    cout << "added values: " << ans1 << endl;
    double a = 99.99;
    double b = 13.1;
    double ans2 = myCalc.subtractValues(a, b);
    cout << "subtracted values: " << ans2 << endl;

    //myCalc.getFirstNumber(5);
    //myCalc.doTheMath(x, '+', g);
    cout << endl;

    myCalc.doTheMath(a, '-', b);

    myCalc.UserInterface();

    return 0;

}
