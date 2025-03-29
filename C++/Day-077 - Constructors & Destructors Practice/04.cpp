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
#include <cmath>

using namespace std;

class Rectangle{
    int llx, lly;
    int urx, ury;
    public:
        Rectangle(){
            cout<<"Rectangle created."<<endl;
        }
        void get(int a, int b, int c, int d){
            llx=a;
            lly=b;
            urx=c;
            ury=d;
        }
        void area(){
            int area=abs(urx-llx)*abs(ury-lly);
            cout<<"Area of the rectangle: "<<area<<endl;
        }
        ~Rectangle(){
            cout<<"Rectangle destroyed.";
        }
};

int main(){
    Rectangle r;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    r.get(a,b,c,d);
    r.area();
    return 0;
}