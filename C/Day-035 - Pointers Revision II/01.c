


/*
Problem Statement



Becky is analyzing a list of integers. She needs to find the maximum absolute difference between the two elements in the list. 



Write a program that takes an integer n as input, followed by n integers, and outputs the maximum absolute difference between any two elements in the list using pointers.

Input format :
The first line contains an integer n, representing the number of elements in the list.

The second line contains n integers separated by spaces, representing the elements in the list.

Output format :
The output prints a single integer representing the maximum absolute difference between any two elements in the list.

Code constraints :
3 ≤ n ≤ 20

Sample test cases :
Input 1 :
3
7 9 10
Output 1 :
3
Input 2 :
5
10 9 15 12 8
Output 2 :
7

*/

#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    int* ptr=arr;
    for(int i=0; i<num; i++){
        scanf("%d", ptr+i);
    }
    int max = *ptr;
    int min = *ptr; 
    for(int i=0; i<num; i++){
        if(max<*(ptr+i)){
            max=*(ptr+i);
        }
        if(min>*(ptr+i)){
            min=*(ptr+i);
        }
    }
    printf("%d",max-min);
    return 0;
}