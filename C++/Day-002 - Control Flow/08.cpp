// Create a program that calculates the electricity bill based on units consumed.

#include <iostream>

using namespace std;

int main(){
    float unit, rate, cost;
    cout<<"Enter the units consumed: ";
    cin>>unit;
    cout<<"Enter the rate per unit: ";
    cin>>rate;
    cout<<"The cost of Electricity bill is: "<< unit*rate;
    return 0;
}