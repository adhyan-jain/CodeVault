/* 
   Question 2: Create a class 'Circle' with an attribute 'radius'.
   Include a member function to calculate and return the area of the circle.
*/
#include <iostream>
using namespace std;


class Circle {
public:
    double radius;

    // Function to calculate area
    double getArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c1;
    c1.radius = 5.0;

    cout << "Area: " << c1.getArea() << endl; // Output: Area: 78.5397
    return 0;
}
