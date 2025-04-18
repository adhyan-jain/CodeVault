/*
Problem Statement

Ramesh is currently working on a program to concatenate two strings efficiently. He wants to create a tool that can take two input strings, concatenate them, and then display the resulting string.

Help him in the program.

Input format :
The input consists of two strings in separate lines.

Output format :
The output displays a single string, which is the concatenation of the two input strings without any space.

Refer to the sample output for formatting specifications.

Code constraints :
Each input string has a maximum length of 25 characters.
The input string should be lowercase and uppercase letters without any spaces.

Sample test cases :

Input 1 :
Hi
Hello
Output 1 :
HiHello

Input 2 :
Alice
Wonderland
Output 2 :
AliceWonderland
*/

#include <stdio.h>

int main(){
    char str1[25], str2[25], fstr[50];
    int i=0, j=0;
    scanf("%s %s", &str1, &str2);
    
    while(str1[i]!='\0'){
        fstr[i]=str1[i];
        i++;
    }
    
    while(str2[j]!='\0'){
        fstr[i+j]=str2[j];
        j++;
    }
    
    printf("%s", fstr);
    return 0;
}
