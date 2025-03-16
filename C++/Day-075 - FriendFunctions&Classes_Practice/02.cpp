/*
Problem Statement

You are building a shipping application for an online store and need to calculate the volume of a box. 
Implement a Box class with a private attribute length. The class should include:


A constructor initializes length to 0.
A member function get() to input the length.
A friend function printVolume(Box) calculates and returns the volume as length^3.
*/

#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor
    Box() : length(0) {}

    // Member function to get the length
    void get() {
        cin >> length;
    }

    // Friend function to calculate volume
    friend int printVolume(Box b);
};

// Friend function definition
int printVolume(Box b) {
    return b.length * b.length * b.length;
}

int main() {
    Box box;
    box.get();
    cout << printVolume(box) << endl;
    return 0;
}
