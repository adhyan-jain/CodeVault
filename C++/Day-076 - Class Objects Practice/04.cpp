/*
Problem Statement

John wants to create a program using a class called Weather to compare historical and current weather 
data. Predict if it's getting warmer, colder, or staying the same based on temperature comparisons 
and forecast changes in weather conditions. Implement the code by passing an object as a function argument.


If current temperature > historical temperature, output: "Warmer"
If current temperature < historical temperature, output: "Colder"
If current temperature = historical temperature, output: "Same temperature"
If current weather conditions = historical conditions, output: "Same conditions: " followed by the weather conditions.
If current weather conditions differ from historical conditions, output: "Conditions changing to: " followed by the current weather condition.
*/

#include <iostream>
#include <string>

using namespace std;

class Weather {
private:
    float temp;
    string conditions;

public:
    Weather(float t, string c){
        temp = t;
        conditions = c;
    }

    void predict(Weather hist) {
        if (temp > hist.temp) {
            cout << "Warmer" << endl;
        } 
        else if (temp < hist.temp) {
            cout << "Colder" << endl;
        } 
        else {
            cout << "Same temperature" << endl;
        }
        
        if (conditions == hist.conditions) {
            cout << "Same conditions: " << conditions << endl;
        } 
        else {
            cout << "Conditions changing to: " << conditions << endl;
        }

    }
};

int main() {
    float histTemp;
    string histCond;

    cin >> histTemp;
    cin.ignore();
    getline(cin, histCond);

    Weather histData(histTemp, histCond);

    float currTemp;
    string currCond;
    cin >> currTemp;
    cin.ignore();
    getline(cin, currCond);

    Weather currData(currTemp, currCond);
    currData.predict(histData);

    return 0;
}