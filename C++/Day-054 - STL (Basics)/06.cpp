// Tuples
#include <bits/stdc++.h>
using namespace std;

int main()
{
    tuple<string, int, float> tup1; // or we can write the value in parenthesis after pair name
    tup1 = make_tuple("Hello", 1, 0.33);
    get<1>(tup1) = 3;
    cout << "The first element of pair is: " << get<0>(tup1) << endl;
    cout << "The second element of pair is: " << get<1>(tup1) << endl;
    cout << "The third element of pair is: " << get<2>(tup1) << endl;
    return 0;
}