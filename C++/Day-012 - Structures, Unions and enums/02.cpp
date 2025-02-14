/*
Create a union named Data that can store either:

an integer (intVal),
a floating-point number (floatVal), or
a character (charVal).
Write a program to allow the user to assign values to different members one at a time and display them, explaining why only one value is retained at a time.
*/

#include <iostream>
using namespace std;

union Data {
    int intVal;
    float floatVal;
    char charVal;
};

int main() {
    Data d;
    
    d.intVal = 42;
    cout << "Integer Value: " << d.intVal << endl;

    d.floatVal = 3.14;
    cout << "Float Value: " << d.floatVal << endl;  // Overwrites intVal

    d.charVal = 'A';
    cout << "Char Value: " << d.charVal << endl;  // Overwrites floatVal

    cout << "\nNotice that only the last assigned value is valid, as a union stores only one value at a time!\n";
    return 0;
}
