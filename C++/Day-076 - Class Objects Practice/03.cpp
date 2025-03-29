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

class House{
    double length;
    double width;
    double height;
    public:
        House(double l, double b, double h){
            length=l;
            width=b;
            height=h;
        }
        void TSA(){
            double tsa=2*((width*height)+(width*height)+(height*length)+(height*length));
            cout<<fixed<<setprecision(2)<<tsa<<" square units.";
        }
};

int main(){
    double l,b,h;
    cin>>l>>b>>h;
    House H(l,b,h);
    H.TSA();
    return 0;
}