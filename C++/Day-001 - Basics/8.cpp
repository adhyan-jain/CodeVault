// Take input for two numbers and find the larger one

#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"number 1 < number 2: "<<(num1<num2)<<endl;
    cout<<"number 1 > number 2: "<<(num1>num2)<<endl;
    return 0;
}