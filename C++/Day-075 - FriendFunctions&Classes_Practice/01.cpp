/*
Problem Statement

Riya is designing a room layout for her new apartment. She needs to calculate the area of various rooms, 
which are rectangular. To simplify her work, she decides to create a Rectangle class with the following 


features:

Private attributes length and breadth to store the dimensions of the rectangle.
A constructor to initialize these attributes.
A friend function void calcArea(Rectangle s) to calculate and display the area of the rectangle.


Help Riya by writing a program that takes the length and breadth of a rectangle as input, calculates 
its area using the calcArea function, and displays the result.
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;
class Rectangle{
   int length, breadth;
  
   public:
   Rectangle(int length, int breadth):length(length),breadth(breadth)
   {}
   friend void calcArea(Rectangle s); 
  
};
void calcArea(Rectangle s){
   cout<<s.length * s.breadth;
   }
int main()
   {
      int len,bre;
      cin>>len>>bre;
      Rectangle s(len,bre);
      calcArea(s);
  
      return 0;
}