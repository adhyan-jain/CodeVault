// Strictly increasing

/*
Problem Statement
You are given a positive integer N and a sequence of positive integers A=(A1,A2,…,AN) of length N.
Determine whether A is strictly increasing, that is, whether Ai<Ai+1Ai<Ai+1 holds for every integer i with 1≤i<N.

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    n--;
    int flag=1;
    while(n--){
        int b;
        cin>>b;
        if(b>a){
            a=b;            
            continue;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;

}