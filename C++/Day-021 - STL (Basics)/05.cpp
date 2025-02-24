// Pairs
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<string, int> pair1; // or we can write the value in parenthesis after pair name
    pair1 = make_pair("Hello", 1);
    pair1.second=3;
    cout << "The first element of pair is: "<< pair1.first<<endl;
    cout << "The second element of pair is: "<< pair1.second<<endl;
    return 0;
}