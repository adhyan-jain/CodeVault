/*
Problem Statement

Write a program to find the square, square root, cube, and cube root of the given number.

Create a class Demo and include a constructor to initialize the value and write a method display to print 
square, square root, cube, and cube root of the given number after that the destructor destroys the object.
*/

#include <iostream>
#include <cmath>

using namespace std;

class Demo{
    int n;
    public:
        Demo(int num){
            n=num;
            cout<<"Inside Constructor"<<endl;
        }
        void display(){
            cout<<"square = "<<n*n<<endl;
            cout<<"square root = "<<sqrt(n)<<endl;
            cout<<"cube = "<<n*n*n<<endl;
            cout<<"cube root = "<<cbrt(n)<<endl;
        }
        ~Demo(){
            cout<<"Inside Destructor"<<endl;
        }
};

int main(){
    int num;
    cin>>num;
    Demo d(num);
    
    d.display();
    return 0;
}