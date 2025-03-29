/*
Problem Statement

In a bustling city, a team of detectives is working tirelessly to solve a series of mysterious 
messages left by an enigmatic criminal mastermind. These messages contain a mix of alphabets, 
numbers, and special characters. The detectives need a tool to analyze the messages and provide 
insights into the distribution of different characters within them.

Design a program that takes a message as input and performs the following tasks:

a) Calculate the length of the message.
b) Count the number of alphabets (both uppercase and lowercase), numbers, and special characters in the message.
c) Determine the occurrence count of each unique character in the message.

Function specifications

int length (const char* str1) -  To find the length of the string
void count (const char * str1) - To count the total number of alphabets, digits, or special characters
void occur (const char * str1) - To count all occurrences of a character
*/

#include <iostream>
#include <cstring>

using namespace std;

int length(char* str){
    
    return strlen(str);
}

void count(char *str){
    
    int alpha=0, num=0, spc=0;
    int len = strlen(str);
    for(int i=0; i<len; i++){
        
        switch(str[i]){
            case 97 ... 122:
            case 65 ... 90:
                alpha++;
                break;
            case 43 ... 52:
                num++;
                break;
            default:
                spc++;
                break;
        }
    }
    
    cout << "Alphabets: "<< alpha<< endl;
    cout << "Numbers: " << num << endl;
    cout << "Special characters: " << spc << endl;
}

void occur(char* str){
    int len = strlen(str);
    int k=1;
    int a[len];
    a[0]=str[0];
    for(int i=0; i<len; i++){
        for(int j=0; j<k; j++){
            if(a[j] == str[i]){
                break;
            }
            if(j == k-1){
                a[k]=str[i];
                k++;
            }
        }
    }
    
    for(int i=0; i<k; i++){
        int count =0;
        for(int j=0; j<len; j++){
            if(a[i]==str[j]){
                count++;
            }
        }
        cout<<"Occurrence of "<<char(a[i])<<" is "<<count<<endl;
    }
}

int main(){
    char str[50];
    cin>>str;
    
    cout<<"Length: "<<length(str)<<endl;
    count(str);
    occur(str);
    return 0;
}