/*
Problem Statement



Create a program for an online store that sells electronics and clothing. Calculate the total cost of an order, applying discounts for bulk purchases.



class Product: 

Attributes: string name, double price, int quantity
Method: double calculateCost() - Returns total cost (price * quantity)


class Electronics (Derived from class Product):

Method: double calculateEleccost() - Calculates electronics cost with a 10% discount for 3 or more items.


class Clothing (Derived from class Product):

Method: double calculateClothCost() - Calculates clothing cost with a 5% discount for 5 or more items.


class OrderCalculator (Derived from Electronics and Clothing classes):

Method: double calculateTotalCost() - Calculates total order cost.


Refer to the below class diagram:



Implement the program to take user input and display the total order cost using hybrid inheritance.

Input format :
The first line of input consists of a string, representing the name of the electronic product.

The second line consists of a double value, representing the price of the electronic product.

The third line consists of an integer, representing the quantity of the electronic product.

The fourth line consists of a string, representing the name of the cloth product.

The fifth line consists of a double value, representing the price of the cloth product.

The sixth line consists of an integer, representing the quantity of the cloth product.

Output format :
The output prints "Total Order Cost: Rs. X" where X is a double value, rounded off to two decimal places.



Refer to the sample outputs for formatting specifications.

Code constraints :
1 ≤ Quantity ≤ 20

Sample test cases :
Input 1 :
Keyboard
930.0
8
Shirt
30.0
5
Output 1 :
Total Order Cost: Rs. 6838.50
Input 2 :
Printer
1250.0
1
Scarf
15.0
10
Output 2 :
Total Order Cost: Rs. 1392.50
Input 3 :
Smartphone
21500.0
3
Jeans
740.0
4
Output 3 :
Total Order Cost: Rs. 61010.00
Input 4 :
Laptop
35999.99
2
T-Shirt
329.79
3
Output 4 :
Total Order Cost: Rs. 72989.35

*/


#include <iostream>
#include <iomanip>

using namespace std;

class Product{
    protected:
        string name;
        double price;
        int quantity;
    public:
        Product(string s, double p, int q) : name(s), price(p), quantity(q) {}
        
        double calculateCost(){
            return price*quantity;
        }
};

class Electronics : public Product{
    double cost = 0;
    public:
        Electronics(string s, double p, int q) : Product(s, p, q) {}
        
        double calculateEleccost(){
            cost = calculateCost();
            if(quantity>=3){
                cost = cost - cost*0.1;
            }
            return cost;
        }
};

class Clothing : public Product{
    double cost = 0;
    public:
        Clothing(string s, double p, int q) : Product(s, p, q) {}
        
        double calculateClothcost(){
            cost = calculateCost();
            if(quantity>=5){
                cost = cost - cost*0.05;
            }
            return cost;
            
        }
};

class OrderCalculator : public Electronics, public Clothing{
    double cost;
    public:
        OrderCalculator(string s1, double p1, int q1, string s2, double p2, int q2) : Electronics(s1, p1, q1), Clothing(s2, p2, q2) {
            cost = 0;
        }
        
        double calculateTotalCost(){
            cost+=calculateEleccost();
            cost+=calculateClothcost();
            return cost;
        }
};

int main(){
    string s1, s2;
    double p1, p2;
    int q1, q2;
    
    cin >> s1 >> p1 >> q1 >> s2 >> p2 >> q2;
    
    OrderCalculator o(s1, p1, q1, s2, p2, q2);
    
    cout << "Total Order Cost: Rs. " << fixed << setprecision(2) << o.calculateTotalCost();
    return 0;
}