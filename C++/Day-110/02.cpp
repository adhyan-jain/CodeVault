/*
Problem Statement



A developer named Priya is building a system that processes a list of integers provided by users. To ensure the data is clean, Priya needs to filter out duplicate elements from the list and return a sorted list of unique integers. To accomplish this task, she uses the Standard Template Library (STL) list. The program should sort the list and remove duplicate elements, returning only unique numbers in sorted order.



Write a program that reads a list of integers from the user, sorts the list, and removes any duplicate elements, outputting the unique elements in ascending order.

Input format :
The first line contains an integer n, which represents the number of elements in the list.

The second line contains N integers separated by spaces, representing the elements of the list.

Output format :
The output displays the sorted list of unique integers, with each integer separated by a space.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 10

1 ≤ elements ≤ 100

Sample test cases :
Input 1 :
5
3 2 1 4 4
Output 1 :
1 2 3 4 
Input 2 :
3
7 7 7
Output 2 :
7 
*/

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
int n;
cin >> n;
list<int> numbers(n);

for (int i = 0; i < n; i++) {
int num;        
cin >> num;
numbers.push_back(num);  
}

numbers.sort();
numbers.unique();
auto it = numbers.begin();
if (it != numbers.end()) it++;
for (; it != numbers.end(); it++) {
cout << *it << " ";
}

return 0;
}
