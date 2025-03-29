/*
Problem Statement

Priya is working on a banking application that calculates interest for customers' accounts. She needs to 
create a class called BankAccount that contains a static data member to store the interest rate (initially 
set to 3%), which is shared by all accounts. This static interest rate can be updated using a static 
member function setInterestRate. The class should also include a method to calculate the interest based 
on the account balance and the shared interest rate. 

Write a program to help Priya calculate the interest for a given balance using the updated interest rate, 
with the result printed to two decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount{
    static float rate;
    public:
        float setInterestRate(float num, float amount){
            rate=num;
            return amount * rate;
        }
};

float BankAccount :: rate = 0.03;

int main(){
    float num;
    cin>>num;
    float amount;
    cin>>amount;
    BankAccount b;
    cout << fixed << setprecision(2) << b.setInterestRate(num, amount);
    return 0;
}