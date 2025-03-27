/*
Problem Statement



Rahul is a skilled sculptor who creates unique cylindrical art pieces. He needs a program to calculate the volume of these sculptures based on their radius and height. Your task is to design and implement this program using object-oriented principles.



Create a base class named Circle with the protected attribute radius representing the radius of a circle. The class should provide a constructor to initialize the radius and a method to retrieve the radius value.



Inherit from the Circle class to create a derived class named Cylinder. The Cylinder class should introduce a private attribute height representing the height of the cylindrical sculpture.



Implement a volume() method inside the Cylinder class to calculate the volume of the cylinder.



Formula: Volume = 3.14 * radius2 * height.

Input format :
The input consists of two space-separated double-point values, which represent the radius and height of the cylinder.

Output format :
The output prints the volume of the cylinder, rounded off to two decimal places.



Refer to the sample outputs for formatting specifications.

Code constraints :
1.0 ≤ radius, height ≤ 50.0

Sample test cases :
Input 1 :
5.1 3.6
Output 1 :
294.02
Input 2 :
3.4 6.2
Output 2 :
225.05
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Circle;
class Cylinder;

class Circle{
    protected:
        double radius;
    public:
        Circle(double a) : radius(a){}
        double CalcCircle(){
            return 3.14 * radius * radius;
        }
};

class Cylinder : public Circle{
    double height;
    public:
        Cylinder(double a, double b) : Circle(a), height(b){
        }
        
        void volume(){
            cout << fixed << setprecision(2) << CalcCircle() * height <<endl;
        }
};


int main(){
    double a, b;
    cin >> a >> b;
    
    Cylinder c(a,b);
    c.volume();
    return 0;
}