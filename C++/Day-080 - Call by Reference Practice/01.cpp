/*
Problem Statement

Indrajith wants to swap two numbers using their address in his lab exam. Write a program to obtain 
two numbers and swap them using call by reference.
*/

#include <iostream>
using namespace std;
void swap(int*, int*);
 
int main()
{
   int x, y;
 
   scanf("%d %d",&x,&y);
 
   swap(&x, &y); 
 
 printf("%d %d",x,y);
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}
 
 