// Implement a program to find the GCD and LCM of two numbers.

#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    int temp1=num2;
    int gcd=num1;
    while(temp1!=0){
        int temp2=temp1;
        temp1=gcd%temp1;
        gcd=temp2;
    }
    int lcm;
    lcm=(num1/gcd)*num2;

    cout<<"The GCD is: "<<gcd<<endl;
    cout<<"The LCM is: "<<lcm;
    return 0;

}