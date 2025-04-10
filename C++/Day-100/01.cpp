/*
Problem Statement:

Create a base class named operationsBase with the following four virtual functions

void addition()

void subtraction()

void multiplication()

void division()

Create a derived class named operationsDerived that extends operationsBase with a and b as its private attributes and override the virtual functions.

Input format :
The input consists of two integers.

Output format :
The output prints the results of addition, subtraction, multiplication, and division separated by a space.

Sample test cases :
Input 1 :
20 10
Output 1 :
30 10 200 2
Input 2 :
5248 284
Output 2 :
5532 4964 1490432 18
*/

#include <iostream>
#include <iomanip>
using namespace std;

class operationsBase
{
public:
    virtual void add() = 0;
    virtual void sub() = 0;
    virtual void mult() = 0;
    virtual void div() = 0;
};

class operationsDerived : public operationsBase
{
public:
    int a, b;
    operationsDerived(int a, int b) : a(a), b(b) {}
    virtual void add()
    {
        cout << a + b << " ";
    }
    virtual void sub()
    {
        cout << a - b << " ";
    }
    virtual void mult()
    {
        cout << a * b << " ";
    }
    virtual void div()
    {
        cout << a / b << "";
    }
};

int main()
{
    int a, b;
    cin >> a >> b;
    operationsBase *ptr;
    operationsDerived obj(a, b);
    ptr = &obj;
    ptr->add();
    ptr->sub();
    ptr->mult();
    ptr->div();
}