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

#define PI 3.14159

class Circle{
    double r;
    static int count;
    public:
        void get(double radius){
            r=radius;
        }
        static void circleCount(){
            count++;
        }
        static void getCircleCount(){
            cout<<count<<endl;
        }
        void calculateArea(){
            cout<<"Area: "<< fixed << setprecision(2) << PI*r*r << endl;
        }
        void calculateCircumference(){
            cout<<"Circumference: "<< fixed << setprecision(2) << PI*r*2 << endl;
        }
        void displayDetails(Circle c){
            cout<<"Radius: "<< fixed << setprecision(2) << r << endl;
            c.calculateArea();
            c.calculateCircumference();
        }
};

int Circle :: count=0;

int main(){
    int num;
    cin>>num;
    Circle c[num];
    cout << num << endl;
    for(int i=0; i<num; i++){
        double radius;
        cin>>radius;
        c[i].get(radius);
        c[i].displayDetails(c[i]);
    }
    return 0;
}