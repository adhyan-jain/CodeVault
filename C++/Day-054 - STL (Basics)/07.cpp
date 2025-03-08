#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Atharva";
    string sub = "rva";

    string srt = name.substr(3, 2); // returns substring from index 3 of length 2
    cout << srt << " " << endl;

    int loc = name.find(sub);  // find index of substring
    cout << loc << endl;
    return 0;
}