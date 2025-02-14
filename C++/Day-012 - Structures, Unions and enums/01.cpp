/*
Create a struct named Employee with the following attributes:

name (string)
id (int)
basicSalary (float)
hra (float) → House Rent Allowance (20% of basicSalary)
da (float) → Dearness Allowance (50% of basicSalary)
grossSalary (float)
Write a program to input details of N employees and calculate their grossSalary as:

grossSalary = basicSalary + hra + da

Finally, display the employee with the highest gross salary.
*/

#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float basicSalary, hra, da, grossSalary;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    
    Employee employees[n], highestPaid;
    
    for (int i = 0; i < n; i++) {
        cout << "Enter details for Employee " << i + 1 << " (Name, ID, Basic Salary): ";
        cin >> employees[i].name >> employees[i].id >> employees[i].basicSalary;
        
        employees[i].hra = 0.2 * employees[i].basicSalary;
        employees[i].da = 0.5 * employees[i].basicSalary;
        employees[i].grossSalary = employees[i].basicSalary + employees[i].hra + employees[i].da;
        
        if (i == 0 || employees[i].grossSalary > highestPaid.grossSalary) {
            highestPaid = employees[i];
        }
    }

    cout << "\nHighest Paid Employee:\n";
    cout << "Name: " << highestPaid.name << ", ID: " << highestPaid.id 
         << ", Gross Salary: " << highestPaid.grossSalary << endl;

    return 0;
}
