/*
Problem Statement



Madhu, a bank officer, needs to handle customer accounts. Create a system with a struct Customer that includes name, account number, and balance.



Implement two functions: printCustomersWithLowBalance() to list customers with balances under Rs. 200, and addBalanceForHighBalanceCustomers() to add Rs. 100 to the balances of customers with over Rs. 1000 and print the updated amounts.

Input format :
The first line contains an integer n, representing the number of customers.

The next n lines contain the following information for each customer, separated by a space:

A string name, the name of the customer.
An integer accountNumber, the account number of the customer.
A float accountBalance, is the account balance of the customer.
Output format :
The output prints "Customers: " followed by the names of customers with a balance < Rs.200, each on a new line.

If none, print "Customers: None".

The next line prints "Incremented balance: " followed by the names and updated balances (formatted to two decimal places) (balance + Rs.100) of customers with balance > Rs.1000, each on a new line.

If none, print "Incremented balance: None".



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 15

100 ≤ accountNumber ≤ 9999.

0.0 ≤ accountBalance ≤ 100000.0.

Sample test cases :
Input 1 :
3
John 1001 150.0
Sarah 1002 500.0
Mike 1003 1200.0
Output 1 :
Customers: John
Incremented balance: Mike Rs.1300.00
Input 2 :
2
Mia 1001 250.0
Nynika 1002 500.0
Output 2 :
Customers: None
Incremented balance: None
*/

#include <stdio.h>

typedef struct{
    char name[100];
    int acc;
    float balance;
}customer;

int main(){
    int n;
    scanf("%d", &n);
    customer a[n];
    for(int i=0; i<n; i++){
        scanf("%s %d %f", a[i].name, &a[i].acc, &a[i].balance);
    }
    printf("Customers: ");
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i].balance<200){
            printf("%s\n", a[i].name);
            c++;
        }
    }
    if(!c){
        printf("None\n");
    }
    c=0;
    printf("Incremented balance: ");
    for(int i=0; i<n; i++){
        if(a[i].balance>=1000){
            printf("%s Rs.%.2f\n", a[i].name, a[i].balance+100);
            c++;
        }
    }
    if(!c){
        printf("None\n");
    }
    return 0;
}