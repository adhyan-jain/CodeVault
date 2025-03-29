/*
Problem Statement

Write a program to calculate the updated salary of an employee after a salary hike meeting. The 
current salary is computed by totaling the previous salary and the hike percentage of the previous salary.

Function Name: void currentSalary(int **rate ,int **salary)
*/

#include <iostream>
#include <iomanip>

using namespace std;

void currentSalary(int *rate, int *s){
    cout<< fixed << setprecision(2) << *s*(1+0.01*(*rate));
}

int main(){
    int r, s;
    cin>>r>>s;
    currentSalary(&r, &s);
}