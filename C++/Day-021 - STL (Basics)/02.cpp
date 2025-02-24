// Ascendigng order of string
// There are 2 ways: 
// 1. string size
// 2. lexicographically - default

#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b){
    if(a.size() != b.size()){
        return a.size() < b.size();
    }
    return  a < b;
}

int main(){
    string s[]={"Ayush", "Ajay", "Atharva", "Bhuvan"};
    cout << "Lexicographical sort: "<<endl;
    sort(s, s+4);  // By default lexicographic sort
    for(int i=0; i<4; i++){
        cout<<s[i]<<" ";
    }

    cout<<"\n\nString size: "<<endl;
    sort(s, s+4, comp);
    for(int i=0; i<4; i++){
        cout<<s[i]<<" ";
    }
    return 0;
}