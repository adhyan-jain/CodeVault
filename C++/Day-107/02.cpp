/*
Problem Statement

Create a base class Account with 3 virtual functions

void display()

void deposit(double amount)

void withdrawl(double amount)



Create a class savingsAccount that extends Account with accno, balance, and name as its private variables and override the virtual methods.

Create a class currentAccount that extends Account with accno, balance, name, draftlimit, and city as its private variables and override the virtual methods.



In the main method, create the objects and call the methods

Input format :
The first line of the input consists of the choice

If the choice is 1, enter the accno, name, and balance.

If the choice is 2, enter the accno, name, balance, draftlimit, and city.

The next input is the choice.

If the input is 1, enter the amount to be deposited.

If the input is 2, enter the amount to be withdrawn.

Output format :
The first line of the output prints the account details.

The next line prints the balance after deposit/withdrawl.

The last line prints the modified account details.

Sample test cases :
Input 1 :
1
2448 alice 25486
1
524
Output 1 :
2448 alice 25486.00
Balance after deposit:26010.00
2448 alice 26010.00
Input 2 :
1
2448 alice 25486
2
524
Output 2 :
2448 alice 25486.00
Balance after withdrawl:24962.00
2448 alice 24962.00
Input 3 :
2
8888 bob 55000 10000 Coimbatore
1
5000
Output 3 :
8888 bob 55000.00 10000 Coimbatore
Balance after deposit:60000.00
8888 bob 60000.00 10000 Coimbatore
Input 4 :
2
8888 bob 55000 10000 Coimbatore
2
5000
Output 4 :
8888 bob 55000.00 10000 Coimbatore
Balance after withdrawl:50000.00
8888 bob 50000.00 10000 Coimbatore
*/

#include<bits/stdc++.h>
#include<string>
using namespace std;
class Account
{
public:
	virtual void display() = 0;
	virtual void deposit(double amount) = 0;
	virtual void withdrawl(double amount) = 0;
};

class savingsAccount: public Account
{
    int accno;
    double balance;
    string name;
    public:
        int get()
        {
            cin>>accno>>name>>balance;
        }
        void deposit(double amount)
        {
            balance = (balance+amount);
            cout<<"Balance after deposit:"<<fixed<<setprecision(2)<<balance<<"\n";
        }
        void withdrawl(double amount)
        {
            balance = (balance-amount);
            cout<<"Balance after withdrawl:"<<fixed<<setprecision(2)<<balance<<"\n";
        }
        void display()
        {
            cout<<accno<<" "<<name<<" "<<fixed<<setprecision(2)<<balance<<"\n";
        }
	    
};
class currentAccount: public Account
{
    int accno,draftlimit;
    double balance;
    string name,city;
    public:
        int get()
        {
            cin>>accno>>name>>balance>>draftlimit>>city;
        }
        void deposit(double amount)
        {
            balance = (balance+amount);
            cout<<"Balance after deposit:"<<fixed<<setprecision(2)<<balance<<"\n";
        }
        void withdrawl(double amount)
        {
            balance = (balance-amount);
            cout<<"Balance after withdrawl:"<<fixed<<setprecision(2)<<balance<<"\n";
        }
        void display()
        {
            cout<<accno<<" "<<name<<" "<<fixed<<setprecision(2)<<balance<<" "<<draftlimit<<" "<<city<<"\n";
        }
	    
};

int main()
{
    int choice;
    cin>>choice;
    if(choice ==1)
    {
        savingsAccount s;
        s.get();
        s.display();
        double amount;
        int ch;
        cin>>ch>>amount;
        if(ch==1) {
            s.deposit(amount);
            s.display();
        }
        if(ch==2) {
            s.withdrawl(amount);
            s.display();
        }
        
    }
    if(choice ==2)
    {
        currentAccount c;
        c.get();
        c.display();
        double amount;
        int ch;
        cin>>ch>>amount;
        if(ch==1) {
            c.deposit(amount);
            c.display();
        }
        if(ch==2) {
            c.withdrawl(amount);
            c.display();
        }
    }
    return 0 ;
}