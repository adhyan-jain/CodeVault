/*
Problem Statement

Write a program to calculate the updated salary of an employee after a salary hike meeting. The 
current salary is computed by totaling the previous salary and the hike percentage of the previous salary.

Function Name: void currentSalary(int **rate ,int **salary)
*/

#include <iostream>
#include <iomanip>

using namespace std;

void currentSalary(int *rate, int *salary) {
  float hike = (float)*rate / 100.0;
  float newSalary = (*salary) * hike + (*salary);
  cout << fixed << setprecision(2) << newSalary << endl;
}

int main() {
  int rating, salary;
  cin >> rating >> salary;

  currentSalary(&rating, &salary);
  return 0;
}