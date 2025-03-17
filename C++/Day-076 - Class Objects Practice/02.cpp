/*
Problem Statement

Venu is learning about basic arithmetic operations and wants to practice them with a simple program.

Write a program that has a class called Operation that takes two integers: a and b as public attributes.
 In the main function, it performs the following operations on a and b: Addition, Subtraction, 
 Multiplication, Division, and Modulus.
*/

#include <iostream>
using namespace std;

class Operation {
public:
  int a, b;
};

int main() {
  Operation op;
  
  cin >> op.a >> op.b;
  
  cout << "Addition: " << (op.a + op.b) << endl;
  cout << "Difference: " << (op.a - op.b) << endl;
  cout << "Product: " << (op.a * op.b) << endl;
  
  if (op.b == 0) {
    cout << "Division by zero not possible" << endl;
  } 
  
  else {
    cout << "Division: " << (op.a / op.b) << endl;
    cout << "Modulus: " << (op.a % op.b) << endl;
  }

  return 0;
}