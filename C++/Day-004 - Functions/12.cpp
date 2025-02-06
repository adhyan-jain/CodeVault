// Find volume of cylinder, cube and rectangle with function overloading.

#include <iostream>
#include <cmath>
using namespace std;

// Volume of Cylinder
double volume(double radius, double height) {
    return M_PI * radius * radius * height;
}

// Volume of Cube
double volume(double side) {
    return side * side * side;
}

// Volume of Rectangular Prism
double volume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double radius, height, side, length, width;
    
    // Volume of Cylinder
    cout << "Enter radius and height of the cylinder: ";
    cin >> radius >> height;
    cout << "Volume of Cylinder: " << volume(radius, height) << endl;
    
    // Volume of Cube
    cout << "Enter side of the cube: ";
    cin >> side;
    cout << "Volume of Cube: " << volume(side) << endl;
    
    // Volume of Rectangular Prism
    cout << "Enter length, width, and height of the rectangular prism: ";
    cin >> length >> width >> height;
    cout << "Volume of Rectangular Prism: " << volume(length, width, height) << endl;
    
    return 0;
}
