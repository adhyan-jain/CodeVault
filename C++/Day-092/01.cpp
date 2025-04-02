/*
Problem Statement



Harry is designing a program for vehicle parameter calculation of his friend Emily's car. 



Help him write the program to calculate the maximum range, payload capacity and fully loaded weight of Emily's car. 



The program consists of three classes that exhibit multi-level inheritance:

class Vehicle - contains fuel efficiency and maximum capacity as attributes.
class Car - derived from Vehicle class and calculates the maximum range for Emily's car.
class EmilyCar - derived from Car class and computes the payload capacity and fully loaded weight of Emily's car.


Formulas

Maximum range = Fuel efficiency * Maximum capacity
Payload capacity = 80% of the Maximum capacity
Total fully loaded weight = Payload capacity + (Fuel efficiency * Maximum capacity)
Input format :
The first line of input consists of a double value, representing Emily's car fuel efficiency.

The second line consists of a double value, representing the car's maximum fuel tank capacity.

Output format :
The first line of output prints "Maximum Range: X km" where X is a double-value, rounded off to two decimal places.

The second line prints "Payload Capacity: Y kg" where Y is a double-value, rounded off to two decimal places.

The third line prints "Fully loaded Weight: Z kg" where Z is a double-value, rounded off to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

0.01 ≤ fuel efficiency ≤100.00

1.00 ≤ maximum capacity ≤ 100.00

Sample test cases :
Input 1 :
10.0
80.0
Output 1 :
Maximum Range: 800.00 km
Payload Capacity: 64.00 kg
Fully loaded Weight: 864.00 kg
Input 2 :
15.0
60.7
Output 2 :
Maximum Range: 910.50 km
Payload Capacity: 48.56 kg
Fully loaded Weight: 959.06 kg
Input 3 :
18.5
55.0
Output 3 :
Maximum Range: 1017.50 km
Payload Capacity: 44.00 kg
Fully loaded Weight: 1061.50 kg

*/

#include <iostream>
#include <iomanip>

using namespace std;

class Vehicle{
    protected:
        double efficiency;
        double capacity;
    public:
        Vehicle(double a, double b) : efficiency(a), capacity(b) {}
        
};

class Car : public Vehicle{
    public:
        Car(double a, double b) : Vehicle(a, b) {}
        
        double MaxRange(){
            return efficiency * capacity;
        }
};

class EmilyCar : public Car{
    public:
        EmilyCar(double a, double b) : Car(a, b) {}
        
        double payload(){
            return capacity * 0.8;
        }
        
        double weight(){
            return payload() + efficiency*capacity;
        }
};

int main(){
    double a, b;
    cin >> a >> b;
    
    EmilyCar c(a, b);
    
    cout << "Maximum Range: " << fixed << setprecision(2) << c.MaxRange() << " km" << endl;
    cout << "Payload Capacity: " << fixed << setprecision(2) << c.payload() << " kg" << endl;
    cout << "Fully loaded weight: " << fixed << setprecision(2)  << c.weight() << " kg" << endl;
    
    return 0;
}