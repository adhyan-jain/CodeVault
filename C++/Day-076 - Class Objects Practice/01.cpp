/*
Problem Statement

Ramanan is a weather enthusiast who wants a simple tool to convert temperatures between Fahrenheit and 
Celsius. He has requested your help to create a program that accomplishes this task.

Write a program that allows Ramanan to input temperatures in Fahrenheit and Celsius, convert them to 
the other scale and display the equivalent temperature of both temperatures. Use a class Temperature 
having the temperature as a public attribute.


Formulas:

Fahrenheit to Celsius = (F - 32) * 5/9
Celsius to Fahrenheit = (C * 9/5) + 32
*/

#include <iostream>
#include <iomanip> 
using namespace std;

class Temperature {
public:
    float temperature;
};

int main() {
    Temperature f, c;

    cin >> f.temperature;
    float celsius = (f.temperature - 32.0) * 5.0 / 9.0;
    cout << fixed << setprecision(2) << celsius << " degree celsius" << endl;

    cin >> c.temperature;
    float fahrenheit = (c.temperature * 9.0 / 5.0) + 32.0;
    cout << fixed << setprecision(2) << fahrenheit << " degree fahrenheit" << endl;

    return 0;
}