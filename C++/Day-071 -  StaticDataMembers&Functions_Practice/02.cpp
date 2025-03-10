/*

Problem Statement

Alex manages a retail store and wants to track total sales using an efficient method across multiple 
transactions. To achieve this, he implements a program that uses static data members and static member 
functions. These static elements ensure that the total sales are shared across all instances of the 
sales process. 

You are required to write a program that helps Alex sum up the sales amounts over a given number of days, 
utilizing static members for maintaining the total sales. The program should calculate and display the 
total sales rounded to two decimal places.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Shop {
private:
    static double totalSales;  

public:
    static void addSales(double salesAmount) {
        totalSales += salesAmount;  
    }

    static double getTotalSales() {
        return totalSales;
    }
};

double Shop::totalSales = 0.0; 

int main() {
    int n;
    double salesAmount;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> salesAmount;
        Shop::addSales(salesAmount);
    }

    cout << fixed << setprecision(2); 
    cout << "Total Sales: " << Shop::getTotalSales() << endl;

    return 0;
}