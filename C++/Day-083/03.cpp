/*
Problem Statement



You are given the cost and discount values for an electronic gadget and a mechanical device. 



Write a program using hierarchical inheritance to calculate their total costs after applying the discounts and print these costs.



The program should contain three classes:

class Product - Contains cost and discount attributes.
class ElectronicGadget - Derived from Product class for electronic gadgets with a method calcTotalE() to calculate the total cost specific to electronic gadgets.
class MechanicalDevice - Derived from Product class for mechanical devices with a method calcTotalM() to calculate the total cost specific to mechanical devices.


Formula: Total Cost = Cost - (Cost * Discount)



Refer to the below class diagram:





Input format :
The first line of input consists of two space-separated double values, representing the cost and discount for an electronic gadget.

The second line consists of two space-separated double values, representing the cost and discount for a mechanical device.

Output format :
The first line of output prints "Electronic Cost: Rs. X" where X is a double value, rounded off to two decimal places.

The second line prints "Mechanical Cost: Rs. Y" where Y is a double value, rounded off to two decimal places.



Refer to the sample outputs for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1.00 ≤ cost ≤ 5000.00

0.00 ≤ discount ≤ 0.99

Sample test cases :
Input 1 :
100.5 0.5
200.0 0.1
Output 1 :
Electronic Cost: Rs. 50.25
Mechanical Cost: Rs. 180.00
Input 2 :
350.5 0.09
759.4 0.15
Output 2 :
Electronic Cost: Rs. 318.95
Mechanical Cost: Rs. 645.49
*/


#include <iostream>
#include <iomanip>

using namespace std;

class Product{
    protected:
        double cost;
        double rate;
    public:
        Product(double a, double b) : cost(a), rate(b) {}
        
        double calc(){
            return cost - cost*rate;
        }
};

class ElectronicGadget : public Product{
    public:
        ElectronicGadget(double a, double b) : Product(a, b){}
        
        void calcTotalE(){
            cout << "Electronic Cost: Rs. " << fixed << setprecision(2) << calc() << endl;
        }
};

class MechanicalDevice : public Product{
    public:
        MechanicalDevice(double a, double b) : Product(a, b){}
        
        void calcTotalM(){
            cout << "Mechanical Cost: Rs. " << fixed << setprecision(2) << calc() << endl;
        }
};

int main(){
    double e1, e2;
    double m1, m2;
    cin >> e1 >> e2 >> m1 >> m2;
    
    ElectronicGadget e(e1, e2);
    MechanicalDevice m(m1, m2);
    
    e.calcTotalE();
    m.calcTotalM();
    return 0;
}