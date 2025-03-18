/*
Problem Statement

Write a program to find the square, square root, cube, and cube root of the given number.

Create a class Demo and include a constructor to initialize the value and write a method display to print 
square, square root, cube, and cube root of the given number after that the destructor destroys the object.
*/

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Demo {
   private:
   int n;
   public:
   Demo(int num) {
      cout << "Inside Constructor" << endl;
      this->n = num;
   }
   void display() {
      cout << "square = " << this->n * this->n << endl;
      cout << "square root = " << sqrt(this->n) << endl;
      cout << "cube = " << this->n * this->n * this->n << endl;
      cout << "cube root = " << cbrt(this->n) << endl;
   }
   ~Demo() {
      cout << "Inside Destructor";
   }
};

int main() {
   int n;
   cin >> n;
   Demo obj1(n);
   obj1.display();
   return 0;
}
