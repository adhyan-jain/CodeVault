/*
Problem Statement

Lisa loves building toy houses using blocks. She has a special set of blocks that she uses to create 
houses. Each block has a certain length, width, and height. Lisa is curious about the total surface 
area of the toy house she's building, excluding the roof. Help her with the code to calculate it.

Implement a program that has a class named House and takes the dimensions of a toy house (length, 
width, and height) as public attributes and calculates the total surface area (TSA) of the house 
without the roof.

Formula: TSA = 2 * [(Width * Height) + (Width * Height) + (Height * Length) + (Height * Length)]
*/

#include <iostream>
#include <iomanip>
using namespace std;

class House {
public:
    double length;
    double width;
    double height;
};

int main() {
    House myHouse;
    cin >> myHouse.length;
    cin >> myHouse.width;
    cin >> myHouse.height;
    
    double side1Area = myHouse.height * myHouse.width;
    double side2Area = myHouse.height * myHouse.width;
    double side3Area = myHouse.length * myHouse.height;
    double side4Area = myHouse.length * myHouse.height;

    double totalSurfaceArea = 2 * (side1Area + side2Area + side3Area + side4Area);

    cout << fixed << setprecision(2) << totalSurfaceArea << " square units.";

    return 0;
}