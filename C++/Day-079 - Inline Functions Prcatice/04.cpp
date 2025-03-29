/*
Problem Statement

You have been assigned a task to create a program that performs arithmetic operations using the Operation 
class and using inline functions.

You have declared the following inline functions within the class: get(), sum(), difference(), product(), 
division(), and modulus(). These functions are used to perform various arithmetic operations. Implement 
the class and its methods as described above.

Then, create an object of the Operation class and demonstrate how the methods can be called to perform 
the necessary arithmetic calculations. Provide the complete code solution for the program, including 
the class definition, method implementations, and the main method where the object is created and the
 methods are called.

Note: This is a sample question asked in a TCS interview.
*/

#include <iostream>

using namespace std;

class Operation{
    int num1, num2;
    public:
        inline void get();
        inline void sum();
        inline void difference();
        inline void product();
        inline void division();
        inline void modulus();
};

void Operation :: get(){
    cin>>num1;
    cin>>num2;
}
void Operation :: sum(){
    cout<<"Addition of two numbers: "<<num1+num2<<endl;
}
void Operation :: difference(){
    cout<<"Difference of two numbers: "<<num1-num2<<endl;
}
void Operation :: product(){
    cout<<"Product of two numbers: "<<num1*num2<<endl;
}
void Operation :: division(){
    cout<<"Division of two numbers: "<<num1/num2<<endl;
}
void Operation :: modulus(){
    cout<<"Modulus of two numbers: "<<num1%num2<<endl;
}

int main(){
    Operation o;
    o.get();
    o.sum();
    o.difference();
    o.product();
    o.division();
    o.modulus();
    return 0;
}