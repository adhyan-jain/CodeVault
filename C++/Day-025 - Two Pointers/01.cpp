/*
Time limit: 1.00 s
Memory limit: 512 MB



There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.
Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.
Input
The first input line has three integers n, m, and k: the number of applicants, the number of apartments, and the maximum allowed difference.
The next line contains n integers a_1, a_2 .... a_n: the desired apartment size of each applicant. If the desired size of an applicant is x, they will accept any apartment whose size is between x-k and x+k.
The last line contains m integers b_1, b_2 .... ldots, b_m: the size of each apartment.
Output
Print one integer: the number of applicants who will get an apartment.

Example
Input:

4 3 5
60 45 80 60
30 60 75

Output:

2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);

    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int l = 0, r = 0;
    int count = 0;
    while (l < n && r < m)
    {
        if (abs(b[r]-a[l]) <= k)
        {
            count++;
            l++;
            r++;
        }
        else if(b[r]-a[l] > k){
            l++;
        }
        else
        {
            r++;
        }
        
    }
    cout << count;
    return 0;
}