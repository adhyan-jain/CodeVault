// Sets
// 1. Sets -> sorted -> Unique elements -> O(logn)
// 2. Unordered Sets -> not sorted -> Unique elements -> O(1)
// 3. Multiset -> sorted -> Duplicate Elements are allowed -> O(logn)  ---> unordered sets also exist and are used in the same way
// 4. Iterators in sets -> They are used to acces the sets since the cannot be accessed via the index operator []
// All of them have same functions except for initialization

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set
    cout << "Sets" << endl;
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(7);
    s.insert(4);
    s.insert(5);

    cout << s.count(4) << endl;
    cout << s.count(9) << endl;

    s.erase(7);

    for (auto x : s)
    {
        cout << x << " ";
    }

    cout << endl;

    // unordered set
    cout << "Unordered Sets" << endl;
    unordered_set<int> s2;
    s2.insert(1);
    s2.insert(2);
    s2.insert(7);
    s2.insert(4);
    s2.insert(5);

    cout << s2.count(4) << endl;
    cout << s2.count(9) << endl;

    s2.erase(7);

    for (auto x : s2)
    {
        cout << x << " ";
    }

    cout << endl;

    // Multiset
    cout << "Multisets" << endl;
    multiset<int> s3;
    s3.insert(1);
    s3.insert(2);
    s3.insert(2);
    s3.insert(2);
    s3.insert(7);
    s3.insert(4);
    s3.insert(4);
    s3.insert(5);

    cout << s3.count(4) << endl;
    cout << s3.count(9) << endl;

    s3.erase(7);

    for (auto x : s3)
    {
        cout << x << " ";
    }

    cout << endl;

    // Iterators in Sets
    cout << "Iterators in Sets" << endl;
    set<int> s4;

    s4 = {1, 2, 3, 4, 5, 6};
    set<int>::iterator it = s4.begin(); // Its a pointer
    cout << "First element: " << *it << endl;

    for (auto it = s4.begin(); it != s4.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
