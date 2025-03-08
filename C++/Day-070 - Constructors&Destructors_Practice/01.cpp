/*
Problem Statement

Create a program that calculates and prints the areas of two walls. Define a class called Wall with 
private attributes for length and height. Initialize these variables using a constructor. In the main 
function, read the dimensions for two walls. Use a member function called calculateArea in the class 
to calculate the area. Read inputs for two walls and print the result.

Formula:
Area = length * height
*/

#include <iostream>
using namespace std;

class Wall {
  private:
    double length;
    double height;

  public:
    Wall(double len, double hgt) {
      this->length = len;
      this->height = hgt;
    }

    double calculateArea() {
      return this->length * this->height;
    }
};

int main() {
    double l, b;
    cin >> l;
    cin >> b;
    Wall wall1(l, b);
    cin >> l;
    cin >> b;
    Wall wall2(l, b);

    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea();

    return 0;
}