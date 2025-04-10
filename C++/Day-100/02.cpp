/*
Problem Statement:

Write a Program to calculate the current bill.

Create a class currentBill with a virtual method double amount().

Create a Fan

Create a class Fan that extends currentBill with watts and hours as its public attributes and overrides the virtual function.

Create a class Light that extends currentBill with watts and hours as its public attributes and overrides the virtual function.

Create a class TV that extends currentBill with watts and hours as its public attributes and overrides the virtual function.



In the main method, prompt the user to enter the power rate of the appliance and the total hours used then create the necessary objects and call the methods.

Input format :
The first line consists of the power rating of the fan and the total hours used separated by space.

The second line consists of the power rating of Light and the total hours used separated by space.

The third line consists of the power rating of the TV and the total hours used separated by space.

Output format :
The output prints the bill amount.



Refer to the sample input and output for formatting specifications.

Sample test cases :
Input 1 :
40 123
55 200
33 400
Output 1 :
43.68
Input 2 :
60 300
54 360
30 720
Output 2 :
88.56
*/

#include <iostream>

using namespace std;
class currentBill
{
public:
    virtual double amount() = 0;
};

class Fan : public currentBill
{
public:
    int watts, hrs;
    double amount()
    {
        double t = watts * hrs;
        double a = (t / 1000) * 1.5;
        return a;
    }
};

class Light : public currentBill
{
public:
    int watts, hrs;
    double amount()
    {
        double t = watts * hrs;
        double a = (t / 1000) * 1.5;
        return a;
    }
};
class TV : public currentBill
{
public:
    int watts, hrs;
    double amount()
    {
        double t = watts * hrs;
        double a = (t / 1000) * 1.5;
        return a;
    }
};
int main()
{
    Fan f;
    cin >> f.watts >> f.hrs;
    Light l;
    cin >> l.watts >> l.hrs;
    TV t;
    cin >> t.watts >> t.hrs;
    cout << f.amount() + l.amount() + t.amount();
    return 0;
}