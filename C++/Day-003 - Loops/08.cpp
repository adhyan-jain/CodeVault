// Create a program that prints all Armstrong numbers between 1 to 500.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "The Armstrong numbers between 1 to 500 are: " << endl;

    for (int i = 1; i <= 500; i++) {
        int rem, num = i, len = 0;
        float sum = 0;

        // Find the number of digits
        while (num != 0) {
            len++;
            num /= 10;
        }

        num = i;  // Reset num to original value

        // Get sum of digits to power of their length
        while (num != 0) {
            rem = num % 10;
            sum += pow(rem, len);
            num /= 10;
        }

        // Check if it's an Armstrong number
        if (sum == i) {
            cout << i;
            cout<<endl;
        }
    }
    return 0;
}
