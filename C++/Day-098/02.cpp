/*
Problem Statement



Imagine you are creating a SleepTracker program that demonstrates the use of inheritance and virtual functions. The program helps users analyze their sleep patterns, distinguishing between weekday and weekend sleep durations.



Implement a base class called SleepTracker with attributes for bedtime and wakeup times and virtual functions for input and duration calculation.



Derive two subclasses, WeekdaySleep and WeekendSleep, inheriting from SleepTracker. Override the virtual functions for specific behavior on weekdays and weekends.

Input format :
The first line consists of four space-separated integers, representing the bedtime hour, minute, wakeup hour, and minute for a weekday.

The second line consists of four space-separated integers, representing the bedtime hour, minute, wakeup hour, and minute for a weekend.

Output format :
The first two lines are in the format "Weekday: Xh Ym" and "Weekend: Xh Ym", where:

X is the number of hours.
Y is the number of minutes.
The third line is a statement comparing the sleep durations:

If the user slept more on weekdays, it outputs: "User slept more on weekdays."
If the user slept more on the weekend, it outputs: "User slept more on the weekend."
If the user slept the same amount on weekdays and the weekend, it outputs: "User slept the same amount on weekdays and the weekend."


Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

00 ≤ weekday & weekend bedtime hour ≤ 24

00 ≤ weekday & weekend bedtime minutes ≤ 59

00 ≤ weekday & weekend wakeup hour ≤ 24

00 ≤ weekday & weekend wakeup minutes ≤ 59

Sample test cases :
Input 1 :
22 50 07 32
20 54 10 19
Output 1 :
Weekday: 8h 42m
Weekend: 13h 25m
User slept more on the weekend.
Input 2 :
22 00 06 05
23 00 06 05
Output 2 :
Weekday: 8h 5m
Weekend: 7h 5m
User slept more on weekdays.
Input 3 :
22 00 06 00
21 00 05 00
Output 3 :
Weekday: 8h 0m
Weekend: 8h 0m
User slept the same amount on weekdays and weekend.
*/


#include <iostream>
using namespace std;

class SleepTracker {
public:
    int bh;
    int bm;
    int wh;
    int wm;

    void inputTime() {
        cin >> bh >> bm >> wh >> wm;
    }

    virtual void calcDuration() {}

    int getTotalMinutes() {
        return (wh - bh) * 60 + wm - bm;
    }
};

class WeekdaySleep : public SleepTracker {
public:
    void calcDuration() override {
        int totalMins = getTotalMinutes();
        if (totalMins < 0) {
            totalMins += 24 * 60;
        }
        cout << "Weekday: " << totalMins / 60 << "h " << totalMins % 60 << "m" << endl;
    }
};

class WeekendSleep : public SleepTracker {
public:
    void calcDuration() override {
        int totalMins = getTotalMinutes();
        if (totalMins < 0) {
            totalMins += 24 * 60;
        }
        cout << "Weekend: " << totalMins / 60 << "h " << totalMins % 60 << "m" << endl;
    }
};

int main() {
    WeekdaySleep wday;
    WeekendSleep wend;

    wday.inputTime();
    wday.calcDuration();

    wend.inputTime();
    wend.calcDuration();

    int weekdayDuration = wday.getTotalMinutes();
    int weekendDuration = wend.getTotalMinutes();

    if (weekdayDuration > weekendDuration) {
        cout << "User slept more on weekdays." << endl;
    } 
    else if (weekendDuration > weekdayDuration) {
        cout << "User slept more on the weekend." << endl;
    } 
    else {
        cout << "User slept the same amount on weekdays and weekend." << endl;
    }

    return 0;
}