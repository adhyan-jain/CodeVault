// Implement a program to find the frequency of each element in an array.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of elements in the array: ";
    cin >> num;
    int arr[num];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    // To mark counted elements
    bool counted[num] = {false};

    cout << "Element Frequencies:\n";
    for (int i = 0; i < num; i++) {
        if (!counted[i]) {
            int count = 1;
            for (int j = i + 1; j < num; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    counted[j] = true; // Mark as counted
                }
            }
            cout << arr[i] << " -> " << count << endl;
        }
    }

    return 0;
}
