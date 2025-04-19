/*
Problem Statement



Richard is creating a system to print elements at odd positions from two types of arrays: one of integers and one of strings. Implement a program using the OddEvenPrinter class template that takes an integer n representing the array size, followed by the elements of an integer array and a string array. The program should output the elements at odd indices (0-based indexing) from each array on separate lines.

Input format :
The first line consists of an integer n, representing the size of the arrays.

The second line consists of n space-separated integers, representing the elements of the integer array.

The third line consists of n space-separated strings, representing the elements of the string array.

Output format :
The output displays the elements at odd indices for both the integer and string arrays in the two lines:

For the integer array, the output should be space-separated integers.

For the string array, the output should be space-separated strings.



Refer to the sample output for the formatting specifications.

Code constraints :
1≤n≤10

1≤ elements ≤100

1≤ length of string ≤100.

The elements of the string array are strings of alphanumeric characters with no spaces.

The index starts at 0.

Sample test cases :
Input 1 :
5
10 20 30 40 50
Apple orange Pineapple Banana Strawberry
Output 1 :
20 40 
orange Banana 
Input 2 :
6
190 180 170 160 150 140
Mask Mobile Diary NotePad Water Bottle
Output 2 :
180 160 140 
Mobile NotePad Bottle 
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
class OddEvenPrinter {
public:
void printOddPositions(const vector<T>& arr) {
for (int i = 1; i < arr.size(); i += 2) {
    cout << arr[i] << " "; 
}
cout << endl;
}
};

int main() {
int n;
cin >> n;
vector<int> intArr(n);
for (int i = 0; i < n; ++i) {
    cin >> intArr[i];
}

vector<string> strArr(n);
for (int i = 0; i < n; ++i) {
cin >> strArr[i];
}
OddEvenPrinter<int> intPrinter;
OddEvenPrinter<string> strPrinter;
intPrinter.printOddPositions(intArr);
strPrinter.printOddPositions(strArr);

return 0;
}
