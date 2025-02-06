// Write a function to calculate the area and perimeter of a rectangle.

#include <iostream>
using namespace std;

void calculateRectangle(int length, int width) {
    int area = length * width;
    int perimeter = 2 * (length + width);
    cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
}

int main() {
    int length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    
    calculateRectangle(length, width);
    
    return 0;
}
