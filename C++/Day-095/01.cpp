/*
Problem Statement



Design a program to calculate the sum of the first N odd or even numbers based on the provided type. 



Implement a class Calculator with constructors for different scenarios: one to initialize N and type, one to adjust the starting point if necessary, and a function calculateSum() to calculate the sum. 



The program should take input for the type ("odd" or "even") and the value of N and output the sum of the first N numbers of the specified type.

Input format :
The first line of input consists of a string type, which can be either "odd" or "even".

The second line consists of an integer N, representing the number of odd or even numbers to sum.

Output format :
The output prints the sum of the first N numbers of the specified type.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 15

Sample test cases :
Input 1 :
odd
5
Output 1 :
25
Input 2 :
even
4
Output 2 :
20
*/

#include <iostream>

using namespace std;

class Calculator{
    string s;
    int num;
    public:
        Calculator(string s1, int n) : s(s1), num(n){}
        
        void calculateSum(){
            bool flag;
            if (s=="odd") flag=1;
            else flag=0;
            
            int ans=0;
            for (int i=flag; i<=num*2; i=i+2){
                ans+=i;
            }
            
            cout << ans;
        }
};


int main(){
    string s;
    int n;
    
    cin >> s >>n;
    
    getline(cin, s);
    cin >> n;
    
    Calculator c(s, n);
    c.calculateSum();
    return 0;
}