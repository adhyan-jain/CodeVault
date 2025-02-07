// Implement a program to check if a triangle is equilateral, isosceles, or scalene.

#include <iostream>

using namespace std;

int main(){
    int side1, side2, side3;
    cout<<"Enter all the sides";
    cout<<"Enter Side 1: ";
    cin>>side1;
    cout<<"Enter Side 2: ";
    cin>>side2;
    cout<<"Enter Side 3: ";
    cin>>side3;
    if(side1==side2 && side1==side3)
        cout<<"The triangle is an Equilateral Triangle";
    else if(side1==side2 || side2==side3 || side3==side1)
        cout<<"The triangle is an Isosceles Triangle";
    else
        cout<<"The triangle is an Scalene Triangle";
    return 0;
}