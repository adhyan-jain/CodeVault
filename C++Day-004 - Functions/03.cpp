// Implement a recursive function to calculate factorial.

#include <iostream>

using namespace std;

int factorial(int num); // Function declaration

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << factorial(num);
    return 0;
}

int factorial(int num)
{
    int result = 1;
    // Returning value 1 if num is either 0 or 1
    if (num == 0 || num == 1)
        return result;
    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}