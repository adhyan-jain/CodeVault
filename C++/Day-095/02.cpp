/*
Problem Statement



Ravi, a marathon enthusiast, requires a program to effortlessly convert distances between miles and kilometers to maintain consistent records.



The program should take a distance value and a unit indicator ('m' for miles or 'k' for kilometers) as input and employ constructor overloading within the MarathonRunner class to perform the conversion between units when needed.



This program will streamline Ravi's record-keeping process and ensure accuracy in his marathon distance tracking.



Note:

If 'm' is in miles, then 'distance' is multiplied by 1.60934.

Otherwise, if 'k' is in a different unit, 'distance' is multiplied by 1.2.

Input format :
The first line of input consists of a double-point number, distance, representing the distance recorded by Ravi.

The second line of input consists of the character unit, which can be either 'm' or 'k' and indicates the unit of the provided distance.

Output format :
The output displays the following format:



If the provided unit is valid ('m' or 'k'), the output is the converted distance as a floating-point number with two decimal places.
If the provided unit is invalid (anything other than 'm' or 'k'), the output is "Invalid input for unit."


Refer to the sample output for the formatting specifications.

Code constraints :
0.01 ≤ distance ≤ 100.0.

Sample test cases :
Input 1 :
60.0
k
Output 1 :
72.00
Input 2 :
80.45
m
Output 2 :
129.47
Input 3 :
43.2
M
Output 3 :
Invalid input for unit
*/

#include <iostream>
#include <iomanip>

using namespace std;

class MarathonRunner{
    double num;
    char s;
    public:
        MarathonRunner(double a, char b) : num(a), s(b) {}
        
        void calc(){
            switch(s){
                case 'k':
                    cout << fixed << setprecision(2) << num * 1.2 << endl;
                    break;
                case 'm':
                    cout << fixed << setprecision(2) << num * 1.60934 << endl;
                    break;
                default:
                    cout << "Invalid input for unit" << endl;
                    break;
            }
        }
};

int main(){
    double a;
    char b;
    cin >> a >>b;
    
    MarathonRunner m(a, b);
    m.calc();
    
    return 0;
}