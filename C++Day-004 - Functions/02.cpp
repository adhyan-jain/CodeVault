// Create a function to calculate the power of a number (x^y)

#include <iostream>

using namespace std;

// Function declaration for calculating power
float pow(float base, float exponent);

int main()
{
    float base, exponent;
    cout << "Enter base number: "; // Take user for base number
    cin >> base;
    cout << "Enter exponent number: "; // Take user for exponent number
    cin >> exponent;
    cout << base << " ^ " << exponent << " : " << pow(base, exponent); // Display the result
    return 0;
}

// Function to calculate power using a loop
float pow(float base, float exponent)
{
    float result = 1;
    for (int i = 0; i < exponent; i++)
    { // Loop to multiply base
        result *= base;
    }
    return result;
}