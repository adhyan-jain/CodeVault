/*
Problem Statement

Tom needs to calculate properties of multiple circles for his geometry project. For each circle, he 
will set its radius and compute the area and circumference. Additionally, he wants to keep track 
of how many circles have been created.

Write a program using a class named Circle with the following:

static int circleCount: Counts the total number of Circle objects created.
static int getCircleCount(): Returns the total number of circles created.
void setRadius(double r): Sets the circle's radius.
double calculateArea(): Returns the area of the circle.
double calculateCircumference(): Returns the circumference of the circle.
void displayDetails(): Displays the circle's radius, area, and circumference.

Formula:
Area = 3.14159 * radius * radius
Circumference = 2 * 3.14159 * radius

*/

#include <iostream>
#include <iomanip>
using namespace std;

class Circle {
private:
    static int circleCount;
    double radius;

public:
    Circle() {
        circleCount++;
    }

    static int getCircleCount() {
        return circleCount;
    }

    void setRadius(double r) {
        radius = r;
    }

    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }

    void displayDetails() {
        cout << "Radius: " << fixed << setprecision(2) << radius << endl;
        cout << "Area: " << fixed << setprecision(2) << calculateArea() << endl;
        cout << "Circumference: " << fixed << setprecision(2) << calculateCircumference() << endl;
    }
};

int Circle::circleCount = 0;

int main() {
    int n;
    cin >> n;

    Circle circles[n];

    for (int i = 0; i < n; i++) {
        double radius;
        cin >> radius;
        circles[i].setRadius(radius);
    }

    cout << Circle::getCircleCount() << endl;

    for (int i = 0; i < n; i++) {
        circles[i].displayDetails();
    }

    return 0;
}
