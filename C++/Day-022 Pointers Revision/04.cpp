/*


Problem Statement



Anuj is working on a program to find the largest of two numbers by passing the addresses of the integers to the function.



Function Signature: int* findLarger(int*, int*)

Input format :
The first line of input consists of an integer n, representing the first number.

The second line of input consists of an integer n1, representing the second number.

Output format :
The output prints the largest number of the given two numbers.



Refer to the sample output for the formatting specifications.

Code constraints :
-106 ≤ numbers ≤ 106

Sample test cases :
Input 1 :
58 69
Output 1 :
69
Input 2 :
-856 -987
Output 2 :
-856

*/

#include <iostream>
using namespace std;

int* findLarger(int* ptr1, int* ptr2){
    if(*ptr1>*ptr2){
        return ptr1;
    }
    else{
        return ptr2;
    }
}

int main(){
    int num1, num2;
    cin>>num1;
    cin>>num2;
    int* ptr1=&num1;
    int* ptr2=&num2;
    int* ans= findLarger(ptr1, ptr2);
    cout<<*ans;
    return 0;
}
