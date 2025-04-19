/*
Problem Statement



Anu is analyzing two arrays to find the largest and second largest elements. She has an integer array and a floating-point array and needs a program that, using a class template Array, takes each array and outputs the two largest unique elements in each.



Implement this using the Array class template. Anu can input the array size and elements, and the program will display the largest and second-largest values for each array.

Input format :
The first line consists of an integer n representing the size of each array.

The second line contains n space-separated integers representing the elements of the integer array.

The third line contains n space-separated floating-point numbers representing the elements of the float array.

Output format :
The first line contains two space-separated integers representing the largest and second-largest elements.

The second line contains two space-separated floating-point numbers representing the largest and second-largest, respectively.



Refer to the sample output for formatting specifications.

Code constraints :
2 ≤ n ≤ 10

0 ≤ integer ≤ 100

0.00 ≤ floating point numbers ≤ 100.00

Sample test cases :
Input 1 :
5
10 31 21 9 8
7.8 6.21 3.67 90.99 2.1
Output 1 :
31 21
90.99 7.8
Input 2 :
6
-90 -67 -80 -34 -25 -38
0.12 0.111 0.999 0.543 0.67 0.433
Output 2 :
-25 -34
0.999 0.67
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class Array {
public:
void findLargestAndSecondLargest(const vector<T>& arr) {
    T first = arr[0], second = arr[1];
    if (first < second) {
    swap(first, second);
    }

for (int i = 2; i < arr.size(); ++i) {
if (arr[i] > first) {
    second = first;
    first = arr[i];
} else if (arr[i] > second && arr[i] != first) {
    second = arr[i];
}
}

cout << first << " " << second << endl;
}
};

int main() {
int n;
cin >> n;

vector<int> intArr(n);
vector<float> floatArr(n);

for (int i = 0; i < n; ++i) {
    cin >> intArr[i];
}   

for (int i = 0; i < n; ++i) {
    cin >> floatArr[i];
}

Array<int> intArray;
Array<float> floatArray;

intArray.findLargestAndSecondLargest(intArr);
floatArray.findLargestAndSecondLargest(floatArr);

return 0;
}