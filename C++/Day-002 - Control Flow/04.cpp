// Write a program to find the roots of a quadratic equation

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a,b,c,x,y;
    cout<<"Enter the coeffecients of the quadratic equation"<<endl;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    x=-b+sqrt(b*b-4*a*c);
    y=-b-sqrt(b*b-4*a*c);
    cout<<"The roots are: "<<x<<" & "<<y<<endl;
    return 0;
}