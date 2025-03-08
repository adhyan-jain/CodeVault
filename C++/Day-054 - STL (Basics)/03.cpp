// Binary Search
// Assumed Array is sorted
// Lower bound -> >=x
// upper bound -> >x

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 7, 8};
    int x = 7; // The element to be searched for
    int n = 9; // Number of elemnets in the array

    auto k = lower_bound(arr, arr + n, x) - arr;
    if (k < n && arr[k] == x)
    {
        cout << "The lower bound index is: " << k << endl;
    }

    auto l = upper_bound(arr, arr + n, x) - arr;
    if (l < n)
    {
        cout << "The upper bound index is: " << l << endl;
    }

    return 0;
}