/*
Problem Statement



Rohith is designing a program that consists of a base class Expression with a pure virtual function evaluate().



There are two derived classes PowerAB and PowerBA representing expressions of the form ab and ba respectively, where a and b are real numbers. The program takes the values of a and b as input and calculates and displays the power results for both types of expressions.



Note: Use the pow function from the math library to calculate the power value.

Input format :
The input consists of two space-separated double values a and b.

Output format :
The first line of output prints the value of ab as a double-value, rounded off to two decimal places.

The second line prints the value of ba as a double-value, rounded off to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
1.0 ≤ a, b ≤ 10.0

Sample test cases :
Input 1 :
4.5 2.0
Output 1 :
20.25
22.63
Input 2 :
1.1 1.1
Output 2 :
1.11
1.11
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Expression
{
public:
    virtual double evaluate() = 0;
};
class PowerAB : public Expression
{
    double a, b;

public:
    PowerAB(double x, double y) : a(x), b(y) {}
    double evaluate() override
    {
        return pow(a, b);
    }
};
class PowerBA : public Expression
{
    double a, b;

public:
    PowerBA(double x, double y) : a(x), b(y) {}
    double evaluate() override
    {
        return pow(b, a);
    }
};
int main()
{
    double a, b;
    cin >> a >> b;

    PowerAB exp1(a, b);
    PowerBA exp2(a, b);

    cout << fixed << setprecision(2) << exp1.evaluate() << "\n";
    cout << fixed << setprecision(2) << exp2.evaluate() << "\n";

    return 0;
}