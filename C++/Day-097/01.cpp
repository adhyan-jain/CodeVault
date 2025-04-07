/*

Problem Statement



Implement a Fraction class that represents a fraction with a numerator and a denominator. Overload the '+' operator to add two fractions and return the result as a simplified fraction.



Function Specifications: Fraction operator+(const Fraction& other) const

Input format :
The input consists of two lines.

Each line contains two integers separated by a space.

The first line represents the numerator and denominator of the first fraction.

The second line represents the numerator and denominator of the second fraction.

Output format :
The output displays the sum of the fractions of the given input as simplified values.

Sample test cases :
Input 1 :
1 2
3 4
Output 1 :
5/4
Input 2 :
5 6
1 3
Output 2 :
7/6
*/

#include <iostream>
#include <iomanip>

using namespace std;

class A{
    public:
        double calculateTotalPrice(double a){
            return a;
        }
        double calculateTotalPrice(double a, double b){
            return a*b;
        }
        double calculateTotalPrice(double a, double b, double c){
            return a*b*(1-c/100);
        }
};

int main(){
    
    A a;
    
    int ans;
    while(1){
        cin >> ans;
        if(ans == 1){
            int x;
            cin >> x;
            cout << fixed << setprecision(2) << a.calculateTotalPrice(x) << endl;
        }
        else if(ans == 2){
            int x, y;
            cin >> x >> y;
             cout << fixed << setprecision(2) << a.calculateTotalPrice(x, y) << endl;
            
        }
        else if(ans == 3){
            int x, y, z;
            cin >> x >> y >> z;
             cout << fixed << setprecision(2) << a.calculateTotalPrice(x, y, z) << endl;
        }
        else if(ans == 4){
            break;
        }
        else{
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}