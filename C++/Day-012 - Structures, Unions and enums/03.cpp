/*
Create an enum named TrafficLight with values:

RED,
YELLOW,
GREEN.
Write a program that takes a character input (R, Y, G) and prints the corresponding action:

RED → "Stop"
YELLOW → "Slow Down"
GREEN → "Go"
If the input is invalid, print "Invalid Input".
*/

#include <iostream>
using namespace std;

enum TrafficLight { RED, YELLOW, GREEN };

void checkTrafficLight(char signal) {
    TrafficLight light;
    
    switch (signal) {
        case 'R': light = RED; break;
        case 'Y': light = YELLOW; break;
        case 'G': light = GREEN; break;
        default: cout << "Invalid Input" << endl; return;
    }

    switch (light) {
        case RED: cout << "Stop" << endl; break;
        case YELLOW: cout << "Slow Down" << endl; break;
        case GREEN: cout << "Go" << endl; break;
    }
}

int main() {
    char signal;
    cout << "Enter Traffic Light Color (R/Y/G): ";
    cin >> signal;
    checkTrafficLight(signal);
    return 0;
}
