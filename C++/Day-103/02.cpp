/*
Problem Statement



Pranav runs a small hotel and tracks the revenue generated from each booking. He keeps the booking amounts in an array and wants to calculate the total income from a given number of bookings.



Help Pranav by writing a program that accepts the number of bookings and their respective amounts, and then calculates the total revenue using a function template. Ensure the total revenue is displayed in two decimal places.

Input format :
The first line contains an integer N, representing the number of bookings.

The next line contains N space-separated double values, representing the booking amounts.

Output format :
The output displays a single double value representing the total income, displayed in two decimal places.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ numBookings ≤ 10

100.0 ≤ amount ≤ 106

Sample test cases :
Input 1 :
3
1000.00 1500.00 2000.00
Output 1 :
4500.00
Input 2 :
5
50000.00 750000.00 10000.00 120005.00 150000.00
Output 2 :
1080005.00
F
*/

#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
T calculateTotalRevenue(T bookings[], size_t numBookings) {
    T totalRevenue = 0;

    for (size_t i = 0; i < numBookings; ++i) {
        totalRevenue += bookings[i];
    }

    return totalRevenue;
}

int main() {
    size_t numBookings;
    cin >> numBookings;

    size_t maxBookings = 1000; 

    double bookingAmounts[1000];

    for (size_t i = 0; i < numBookings; ++i) {
        cin >> bookingAmounts[i];
    }

    double totalRevenue = calculateTotalRevenue(bookingAmounts, numBookings);

    cout << fixed << setprecision(2) << totalRevenue;

    return 0;
}