/*
Problem Statement

Sam is writing a program that takes the speed (in km/h) and the time (in hours) as input and calculates 
the distance travelled. Your task is to guide him in creating a class called Distance with speed and 
time as public attributes. Using a friend function calcDistance(), the program should calculate the 
total distance travelled.

*/

#include <iostream>
#include <iomanip>
using namespace std;

class Distance {
public:
    int speed;
    int time;
    friend double calcDistance(const Distance& d);
};

double calcDistance(const Distance& d) {
    return static_cast<double>(d.speed) * d.time;
}

int main() {
    Distance d;
    cin >> d.speed >> d.time;

    double distance = calcDistance(d);
    cout << fixed << setprecision(2) << distance << endl;

    return 0;
}
