/*
Problem Statement
Preethi is learning programming and she got interested in how inline functions work. So she has been 
practicing questions on that.

Help her solve the code for the following question statement: Create an inline function isLeapYear() 
to check if a given year is a leap year.

Note: This is a sample question asked in a Capgemini interview.
*/

#include <iostream>
using namespace std;
inline bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int year;
    cin >> year;
    
    if (isLeapYear(year)) {
        cout << year << " is a leap year." << std::endl;
    }
    else {
        cout << year << " is not a leap year." << std::endl;
    }
    
    return 0;
}
