// Find the size of fundamental data types (e.g., `int`, `float`, `double`)

#include <iostream>
using namespace std;

int main(){
    int num1;
    float num2;
    char str;
    double num3;
    long double num4;
    long int num5;
    short int num6;
    unsigned int num7;
    signed int num8;
    cout << "Size of int: " << sizeof(num1) << endl;
    cout << "Size of flaot: " << sizeof(num2) << endl;
    cout << "Size of double: " << sizeof(num3) << endl;
    cout << "Size of long double: " << sizeof(num4) << endl;
    cout << "Size of long int: " << sizeof(num5) << endl;
    cout << "Size of short int: " << sizeof(num6) << endl;
    cout << "Size of unsigned int: " << sizeof(num7) << endl;
    cout << "Size of signed int: " << sizeof(num8) << endl;
    cout << "Size of char: " << sizeof(str) << endl;
}