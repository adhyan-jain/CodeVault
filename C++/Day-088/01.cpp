/*
Problem Statement



Dravid is managing a store and wants to calculate the total cost for different goods based on their weight and the rate per kilogram. He needs to write a program that takes user input for the weight (in kilograms) and the rate (in rupees per kilogram) of the goods and calculates the total cost. The program should display the weight, rate, and total cost with precision.



The program should utilize constructor overloading in the CotRCal class, which should have two constructors:

The default constructor initializes the weight and rate to 0.0.
The parameterized constructor accepts the weight and rate as arguments and calculates the total cost.
Input format :
The first line of input consists of a double value, W, representing the weight of the goods in kilograms.

The second line of input consists of a double value, R, representing the rate per kilogram in rupees.

Output format :
The first line prints "Weight: W kg".

The second line prints "Rate: Rs. R per kg".

The third line prints "Total Cost: Rs. " followed by the total cost as a double value rounded to two decimal places.



Refer to the sample output for the formatting specifications.

Sample test cases :
Input 1 :
45.9
3.4
Output 1 :
Weight: 45.9 kg
Rate: Rs. 3.4 per kg
Total Cost: Rs. 156.06
*/

#include <iostream>
#include <iomanip>

using namespace std;

class CotRCal{
    double w,r;
    public:
        CotRCal(){}
        CotRCal(double W, double R) : w(W), r(R) {}
        void display(){
            cout << "Weight: " << w << " kg" << endl;
            cout << "Rate: Rs." << r << " per kg" << endl;
            cout << "Total Cost: Rs." << fixed << setprecision(2) <<w*r;
        }
};

int main(){
    double W;
    double R;
    cin >> W >> R;
    CotRCal c(W, R);
    c.display();
    return 0;
}