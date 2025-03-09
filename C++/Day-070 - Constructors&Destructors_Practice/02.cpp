/*
Problem Statement

Alex is creating a simulation to track the creation and destruction of objects in a program. 
Each object is represented by an instance of the man class. Every time a new object is created, 
a message is printed indicating its creation number. Similarly, when an object is destroyed, a 
message is printed indicating its destruction order. 

Write a program to simulate the creation of n objects and track the order in which they are 
created and destroyed.
*/

#include <iostream>
using namespace std;
class man{
    static int no;
public:
    man(){
        no++;
        cout << "Created " << no << "\n";
    }
    ~man(){
        --no;
        cout << "Destroyed " << no << "\n";
    }
};

int man::no=0;

int main(){
    int n;
    cin>>n;
    man A[n];
    return 0;
}