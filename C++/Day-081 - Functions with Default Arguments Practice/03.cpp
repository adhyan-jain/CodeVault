/*
Problem Statement

Sneha is planning a trip and needs to book a hotel for her stay. She is looking for a simple program 
that helps her calculate the total cost of her stay based on the room type, number of nights, and 
additional services like meals and other amenities.

Implement a Hotel Booking System that allows Sneha to input her preferences and get the total cost 
of her stay.


Functions specifications

double calculateRoomCharges - To calculate the room charges based on room type and the number of nights.
double calculateMealExpenses - To calculate meal expenses based on whether meals are included.
double calculateServiceCosts - To calculate service costs based on whether services are included.


Note:

Room Charges per night
1. Standard Room = Rs. 100.0
2. Deluxe Room = Rs. 150.0
3. Suite = Rs. 250.0
Include Meal Yes = 30.0, No = 0.0
include Service Yes = 50.0, No = 0.0
*/


#include <iostream>
#include <iomanip>
using namespace std;

double calculateRoomCharges(int roomType = 1, int numNights = 1) {
    double roomRate;

    switch (roomType) {
        case 1: // Standard Room
            roomRate = 100.0;
            break;
        case 2: // Deluxe Room
            roomRate = 150.0;
            break;
        case 3: // Suite
            roomRate = 250.0;
            break;
        default:
            cout << "No rooms\n";
            break;
    }

    return roomRate * numNights;
}

double calculateMealExpenses(bool includeMeals = false) {
    return includeMeals ? 30.0 : 0.0;
}

double calculateServiceCosts(bool includeServices = false) {
    return includeServices ? 50.0 : 0.0;
}

double calculateTotalCost(int roomType, int numNights, bool includeMeals, bool includeServices) {
    double roomCharges = calculateRoomCharges(roomType, numNights);
    double mealExpenses = calculateMealExpenses(includeMeals);
    double serviceCosts = calculateServiceCosts(includeServices);

    return roomCharges + mealExpenses + serviceCosts;
}

int main() {
    int roomType, numNights;
    bool includeMeals, includeServices;

    cin >> roomType;
    cin >> numNights;
    cin >> includeMeals;
    cin >> includeServices;

    double totalCost = calculateTotalCost(roomType, numNights, includeMeals, includeServices);
    
    // Round off to two decimal points
    cout << fixed << setprecision(2);
    
    cout << "Total cost of stay: Rs. " << totalCost << endl;

    return 0;
}