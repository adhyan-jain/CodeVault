/*
Problem Statement

Regina is working on a greeting program to welcome and say hello to users. She wants to create a flexible 
program that allows users to input their name and receive a personalized welcome and greeting. Regina also 
wants to provide default greetings in case the user doesn't input their name.

Implement a program that takes a user's name as input and displays both a welcome message and a hello 
message using functions with default arguments.


Functions Specifications

void displayWelcome(const string& name = "") - If name is provided, it includes the name in the message.
void displayHello(const string& name = "") - If name is provided, it includes the name in the message.
*/

#include <iostream>
#include <string>
using namespace std;

void displayWelcome(const string& name = "") {
    cout << "Welcome ";
    if (!name.empty()) {
        cout << name << endl;
    } else {
        cout << endl;
    }
}

void displayHello(const string& name = "") {
    cout << "Hello ";
    if (!name.empty()) {
        cout << name;
    }
}

int main() {
    string name;
    cin >> name;

    displayWelcome(name);
    displayHello(name);

    return 0;
}
