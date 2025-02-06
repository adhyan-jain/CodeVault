// Create a function to find the maximum of three numbers.

#include <iostream>
using namespace std;

int findMax(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    int max = findMax(x, y, z);
    cout << "The maximum number is: " << max << endl;

    return 0;
}
