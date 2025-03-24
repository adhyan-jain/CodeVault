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

class Hotel{
    int type;
    int nights;
    bool meals;
    bool services;
    public:
        Hotel(int a, int b, bool c, bool d) : type(a), nights(b), meals(c), services(d){
        }
    
        double calculateRoomCharges(){
            double cost = 0;
            switch(type){
                case 1:
                    cost += 100*nights;
                    break;
                case 2:
                    cost += 150*nights;
                    break;
                case 3:
                    cost += 250*nights;
                    break;
                default:
                    cout << "No rooms" << endl;
                    break;
            }
            return cost;
        }
        
        double calculateMealExpenses(){
            return (meals) ? 30 : 0;
        }
        
        double calculateServiceCost(){
            return (services) ? 50 : 0;
        }
};

int main(){
    int a,b;
    bool c,d;
    
    cin >> a >> b >> c >> d;
    Hotel h(a,b,c,d);
    
    double cost = 0;
    
    cost += h.calculateRoomCharges();
    cost += h.calculateMealExpenses();
    cost += h.calculateServiceCost();
    cout << "Total cost of stay: Rs. " << fixed << setprecision(2) << cost;
    return 0;
}