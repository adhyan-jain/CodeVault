/*
Problem Statement

Bobby is developing a simple program using a class named Demo to manage two static integer values, 
X and Y. Initially, these static members are set to 10 and 20, respectively. In the program, Bobby 
wants to allow users to update these static values dynamically by inputting new integers. 

Your task is to help Bobby to create a class includes two static member functions: get(), which 
accepts new values for X and Y from the user, and fun(), which displays the current values of X and 
Y. The program should first show the initial values, allow the user to input new values, and then display 
the updated values.
*/

#include <iostream>
using namespace std;

class Demo
{
	private:	
		static int X;
        static int Y;
	public:
	    static void get()
	    {
	        cin>>X>>Y;
	    }
		static void fun()
		{
			cout <<"Value of X: " << X << endl;
			cout <<"Value of Y: " << Y << endl;
		}
};
int Demo :: X =10;
int Demo :: Y =20;
int main()
{
	Demo X;
	X.fun();
	X.get();
	X.fun();
	return 0;
}