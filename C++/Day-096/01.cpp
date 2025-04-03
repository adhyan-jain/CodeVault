/*
Problem Statement



Vamsi is a young and curious student who is eager to learn about finding the minimum number among a set of integers and double values. He needs a program to find the minimum number from a given set of values.



Help him solve the program by overloading the function named findMin.

Input format :
The first line of input consists of three space-separated integers.

The second line consists of three space-separated double values.

Output format :
The first line of output prints "Minimum integer: " followed by the minimum integer among the given values.

The second line prints "Minimum double-point value: " followed by the minimum double-point number among the given values, rounded off to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ integers ≤ 1000

0.00 ≤ double-point values ≤ 1000.00

Sample test cases :
Input 1 :
8 3 7
19.4 10.5 0.8
Output 1 :
Minimum integer: 3
Minimum double-point value: 0.80
Input 2 :
435 768 346
3.531 4.561 7.89
Output 2 :
Minimum integer: 346
Minimum double-point value: 3.53

*/

#include <iostream>
#include <iomanip>

using namespace std;

class Min{
    public:
        int findMin(int x, int y, int z){
            if(x > y){
                if (z > y){
                    return y;
                }
                else {
                    return z;
                }
            }
            else {
                if(z > x){
                    return x;
                }
                else {
                    return z;
                }
            }
        }
        
        double findMin(double x, double y, double z){
            if(x > y){
                if (z > y){
                    return y;
                }
                else {
                    return z;
                }
            }
            else {
                if(z > x){
                    return x;
                }
                else {
                    return z;
                }
            }
        }
};

int main(){
    int x, y, z;
    double a, b, c;
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    
    Min m;
    
    cout << "Minimum integer: " << m.findMin(x, y, z) << endl;
    cout << "Minimum double-point value: " << fixed << setprecision(2) << m.findMin(a, b, c) << endl;
    
    return 0;
}