/*
Problem Statement

Bhuvi is studying geometry, and she wants to determine the type of a triangle based on its side lengths. She needs your help to write a program using a class Triangle that can classify triangles as equilateral, isosceles, or scalene.

Equilateral triangle - All sides are equal

Isosceles triangle - Any two sides are equal

Scalene triangle - All sides are different
*/

#include <iostream>
using namespace std;

class Triangle {
public:
    int side1;
    int side2;
    int side3;
};

int main() {
    Triangle t;

    cin >> t.side1 >> t.side2 >> t.side3;
    
    if (t.side1 == t.side2 && t.side2 == t.side3) 
        cout << "Equilateral triangle" << endl;
    
    else if (t.side1 == t.side2 || t.side2 == t.side3 || t.side1 == t.side3) 
        cout << "Isosceles triangle" << endl;
    
    else 
        cout << "Scalene triangle" << endl;

    return 0;
}