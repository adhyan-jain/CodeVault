/*
Single File Programming Question
Problem Statement



Harsh is a city planner who is tasked with predicting the population growth of his city over the next few years. He wants to create a program to predict the future population based on the initial population, growth rate, and time.



Assist Harsh in completing his task using pointers and the function Growth() to find the growth rate.



Formula: Predicted population = initial population * e growth rate * time

Input format :
The first line of input consists of a double value N, representing the initial population of the city.

The second line consists of a double value M, representing the growth rate of the city.

The third line consists of a double value T, representing the time (in years).

Output format :
The output prints a double value, representing the predicted population, rounded off to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1000.0 ≤ N ≤ 100000.0

0.01 ≤ M ≤ 1.0

1.0 ≤ T ≤ 5.0

Sample test cases :
Input 1 :
1000.0
0.05
5.0
Output 1 :
1284.03
Input 2 :
7057.0
0.01
3.5
Output 2 :
7308.37
Input 3 :
100578.0
1.00
2.8
Output 3 :
1653969.68

*/

#include <stdio.h>
#include <math.h>

void Growth(double *ptr1, double *ptr2, double *ptr3)
{
    double ans = (double)(*ptr1) * exp((*ptr2) * (*ptr3));
    printf("%.2lf", ans);
}

int main()
{
    double pop, rate, times;
    scanf("%lf %lf %lf", &pop, &rate, &times);
    Growth(&pop, &rate, &times);
    return 0;
}