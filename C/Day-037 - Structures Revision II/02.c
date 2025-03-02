/*
Problem Statement



Create a structure for a customer of a bank with the following structure members: Account number, Customer name, Address, Date of Birth, Deposit, Withdraw details and Balance.

 

Write a program to perform the following operations: 



Balance Enquiry (Input Account number and display details of the particular customer) 
Amount Deposit  
Amount Withdrawal (Minimum Balance of Rs.1000 should be maintained)    
Display the updated passbook in a neat format. 
Input format :
The first line consists of the number of customer's details

The second line consists of the Customer's details followed by Account number, Customer name, Address, Date of Birth, and Balance.

The third line consists of the choice to perform the following operations:

1 - Balance Enquiry, If the choice input is 1, then enter the Account number

2 - Amount Deposit, If the choice input is 2, then enter the Account number and Deposit amount

3 - Amount withdraw details, If the choice input is 3, then enter the Account number and withdraw amount

4 - Display updated passbook, If the choice input is 4, then enter the Account number.

Output format :
The output prints the details according to the choice:

1 - Balance Enquiry, If the choice input is 1

2 - Amount Deposit, If the choice input is 2

3 - Amount withdrawal details, If the choice input is 3

4 - Display the updated passbook, If the choice input is 4



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

The account number must be a non-negative integer

The Customer name is a valid String

Sample test cases :
Input 1 :
5
101 alice coimbatore 12/10/1995 1800
102 bob chennai 24/11/1993 25000
103 charles erode 14/02/1997 18000
104 david karur 18/09/2000 30000 
105 ester pollachi 06/12/2002 26000
2 104
Output 1 :
Amount Deposited Successfully!
Input 2 :
5
101 alice coimbatore 12/10/1995 1800
102 bob chennai 24/11/1993 25000
103 charles erode 14/02/1997 18000
104 david karur 18/09/2000 30000 
105 ester pollachi 06/12/2002 26000
1 103 
Output 2 :
103 charles erode 14/02/1997 18000.00 0.00 18000.00
Input 3 :
5
101 alice coimbatore 12/10/1995 1800
102 bob chennai 24/11/1993 25000
103 charles erode 14/02/1997 18000
104 david karur 18/09/2000 30000 
105 ester pollachi 06/12/2002 26000
3 103 1000
Output 3 :
Amount Withdrawn Successfully!
Input 4 :
5
101 alice coimbatore 12/10/1995 1800
102 bob chennai 24/11/1993 25000
103 charles erode 14/02/1997 18000
104 david karur 18/09/2000 30000 
105 ester pollachi 06/12/2002 26000
4
Output 4 :
Account No.    Customer Name            Address        Date of Birth  Deposit         Withdrawal      Balance        
101            alice                    coimbatore     12/10/1995     1800.00        0.00           1800.00        
102            bob                      chennai        24/11/1993     25000.00       0.00           25000.00       
103            charles                  erode          14/02/1997     18000.00       0.00           18000.00       
104            david                    karur          18/09/2000     30000.00       0.00           30000.00       
105            ester                    pollachi       06/12/2002     26000.00       0.00           26000.00       
Input 5 :
1
101 alice coimbatore 12/10/1995 100
3 101 1000
Output 5 :
Minimum Balance of Rs.1000 should be maintained
*/



#include <stdio.h>

typedef struct{
    int acc_no;
    char name[50];
    char address[50];
    struct dob{
        int date;
        int month;
        int year;
    }dob;
    float deposit;
    float withdrawal;
    float balance;
    
}Bank;

int main(){
    int n;
    scanf("%d", &n);
    Bank a[n];
    for(int i=0; i<n; i++){
        scanf("%d %s %s %d/%d/%d %f", &a[i].acc_no, a[i].name, a[i].address, &a[i].dob.date, &a[i].dob.month, &a[i].dob.year, &a[i].balance);
        a[i].deposit = a[i].balance;
        a[i].withdrawal=0.0;
    }
    int choice;
    scanf("%d", &choice);
    int num;
    int amount;
    switch(choice){
        case 1:
            scanf("%d", &num);
            for(int i=0; i<n; i++){
                if(a[i].acc_no==num){
                    printf("%d %s %s %02d/%02d/%04d %.2f %.2f %.2f", a[i].acc_no, a[i].name, a[i].address, a[i].dob.date, a[i].dob.month, a[i].dob.year, a[i].deposit, a[i].withdrawal,a[i].balance);
                }
            }
            break;
        case 2:
            scanf("%d", &num);
            printf("Amount Deposited Successfully!");
            break;
        case 3:
            scanf("%d", &num, &amount);
            for(int i=0; i<n; i++){
                if(a[i].acc_no==num){
                    if(a[i].balance-amount>=1000){
                        printf("Amount Withdrawn Successfully!");
                    }else{
                        printf("Minimum Balance of Rs.1000 should be maintained");
                    }
                }
            }
            break;
        case 4:
            printf("Account No.    Customer Name\t\t\tAddress\t\t\tDate of Birth\tDeposit\t\t\tWithdrawal\t\tBalance\n");
            for(int i=0; i<n; i++){
                printf("%d\t\t\t   %-*s %-*s %02d/%02d/%04d      %-*.2f%-*.2f%-*.2f\n",a[i].acc_no, 24, a[i].name, 15, a[i].address, a[i].dob.date, a[i].dob.month, a[i].dob.year, 15,a[i].deposit,15, a[i].withdrawal,a[i].balance);
            }
    }
    return 0;
}