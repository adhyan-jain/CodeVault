/*
Problem Statement

Lolita wants to write a program to define a Rectangle class that represents rectangles in a 2D space. The 
class should have private attributes to store the coordinates of two points, (llx, lly) representing the 
lower-left corner and (urx, ury) representing the upper-right corner of the rectangle.

The program should allow the user to input these coordinates and then compute and display the area of 
the rectangle. The Rectangle class should include a constructor to initialize the coordinates, a 
method to calculate the area, and a destructor to display a message when a rectangle object is destroyed.


Formula: Area = Width × Height

where:
Width is the absolute difference between the x-coordinates of the upper-right and lower-left corners.
Height is the absolute difference between the y-coordinates of the upper-right and lower-left corners
*/

#include <iostream>
#include <iomanip> 

using namespace std;

class Rectangle {
private:
  int x1, y1; 
  int x2, y2; 

public:
  Rectangle(int initX1, int initY1, int initX2, int initY2) {
        x1 = initX1;
        y1 = initY1;
        x2 = initX2;
        y2 = initY2;
        cout << "Rectangle created." << endl;
  }

  int area() { 
    int width = abs(x2 - x1);
    int height = abs(y2 - y1);
    return width * height;
  }

  ~Rectangle() {
    cout << "Rectangle destroyed." << endl;
  }
};

int main() {
  int llx, lly, urx, ury;
  cin >> llx >> lly;
  cin >> urx >> ury;

  Rectangle rect(llx, lly, urx, ury);
  cout << "Area of the rectangle: " << rect.area() << endl;
  return 0;
}