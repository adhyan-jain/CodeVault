/*
You are given an array of n integers, and your task is to find two values (at distinct positions) whose sum is x.
Input
The first input line has two integers n and x: the array size and the target sum.
The second line has n integers a_1,a_2,\dots,a_n: the array values.
Output
Print two integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.

Example
Input:
4 8
2 7 5 1

Output:
2 4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());

    int l = 0, r = n - 1;
    int index1 = -1, index2 = -1;

    while (l < r) {
        int sum = v[l].first + v[r].first;

        if (sum == k) {
            index1 = v[l].second;
            index2 = v[r].second;
            break;
        } 
        else if (sum < k) {
            l++;
        } 
        else {
            r--;
        }
    }

    if (index1 != -1 && index2 != -1) {
        cout << min(index1, index2) << " " << max(index1, index2) << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
