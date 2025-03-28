/*
Problem Statement



Create a class Parent that has a method "add" which prints the addition of two integers. 



Create a class child1 that is a child class of the Parent class. It has a method "sub" that prints the subtraction of two integers. 



Create a class child2 that is a child class of the Parent class. It has a method "mul" that prints the multiplication of two integers. 



Create a class child3 that is a child class of the Parent class. It has a method "div" that prints the division of two integers. 



Create an object of the child3 class. Then, from this object, call the four methods add, sub, mul, and div inherited from the child1 class and display the results.

Input format :
The input consists of two space-separated integers: a and b.

Output format :
The first line prints the addition of the given integers.

The second line prints the subtraction of the given integers.

The third line prints the multiplication of the given integers.

The fourth line prints the division of the given integers rounded off to two decimal places.

Code constraints :
-100 ≤ a, b ≤ 103

Sample test cases :
Input 1 :
12 24
Output 1 :
36
-12
288
0.50
Input 2 :
30 -15
Output 2 :
15
45
-450
-2.00
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Parent{
    public:
        void add(int a, int b){
            cout<<a+b<<endl;
        }
};

class Child1 : public Parent{
    public:
        void sub(int a, int b){
            cout<<a-b<<endl;
        }
};

class Child2 : public Parent{
    public:
        void mult(int a, int b){
            cout<<a*b<<endl;
        }
};

class Child3 : public Parent{
    int a,b;
    public:
        Child3 (int aa, int bb) : a(aa), b(bb){}
        
        void div(int a, int b){
            cout<<fixed<<setprecision(2)<<(double)a/b;
        }
        
        void display(){
            Parent c1;
            c1.add(a,b);
            
            Child1 c2;
            c2.sub(a,b);
            
            Child2 c3;
            c3.mult(a,b);
            
            div(a,b);
        }
};

int main(){
    int a,b;
    cin>>a>>b;
    Child3 c(a, b);
    c.display();
    return 0;
}