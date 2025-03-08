/*
Problem Statement



Create a structure-based program to enter the marks of students in Tamil, English, Chemistry, Mathematics, and Physics (each out of 100) using a structure named Marks having elements roll no., name, tamil_marks, english_marks, chem_marks, maths_marks, and phy_marks and then display the average. Get n student details and print their average

Input format :
The first line of the input consists of the number of students.

The next n line consists of the roll number, name, Tamil marks, English marks, Chemistry marks, Maths marks, Physics marks.



Output format :
The output prints the average of the students separated by a space.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ number of students ≤ 10

Sample test cases :
Input 1 :
2
10 alice 95 96 84 96 84
11 harris 85 81 75 90 93
Output 1 :
91.00 84.80
*/

#include <iostream>
using namespace std;

typedef struct
{
    int roll_no;
    char name[100];
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
} struct1;

int main()
{
    int n;
    scanf("%d", &n);
    struct1 a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].roll_no >> a[i].name >> a[i].num1 >> a[i].num2 >> a[i].num3 >> a[i].num4 >> a[i].num5;
    }
    for (int i = 0; i < n; i++)
    {
        float sum = 0;
        sum += a[i].num1;
        sum += a[i].num2;
        sum += a[i].num3;
        sum += a[i].num4;
        sum += a[i].num5;
        cout << sum / 5 << " ";
    }
    return 0;
}