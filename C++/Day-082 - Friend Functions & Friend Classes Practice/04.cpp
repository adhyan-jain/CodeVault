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

class Distance{
    int speed;
    int times;
    public:
        Distance(int s, int t) : speed(s), times(t) {}
        
        double calcDistance(){
            return speed*times;
        }
};

int main(){
    
    int s, t;
    cin >> s >> t;
    
    Distance d(s,t);
    cout << fixed << setprecision(2) << d.calcDistance();
    return 0;
}