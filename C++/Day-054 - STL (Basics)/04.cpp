// Vectors

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Initialize vector
    vector<int> v = {1, 3, 5, 6};
    v.push_back(5);  // adds the element in parenthesis at the end of the array
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    random_shuffle(v.rbegin(), v.rend()); // Shuffles the array randomlly

    auto r = *(max_element(v.begin(), v.end())); // max value
    cout << r << endl;
    
    int limit = 1;
    v.erase(v.begin() + 1); // erase one element
    v.insert(v.begin(), 4, 3);  // erase a range of elements
    
    // Shorter Way
    for (auto x : v)
    {
        cout << x << " ";
    }
    
    vector<vector<int>> v1;  // Nested vector
    v1.push_back({41, 4, 15, 6});
    v1.push_back({10, 14, 6, 7, 8, 9});
    
    for (auto x : v1)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    
    for (auto &j : v1)
    {
        sort(j.begin(), j.end());
    }
    
    cout << "Sorted" << endl;
    for (auto x : v1)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}