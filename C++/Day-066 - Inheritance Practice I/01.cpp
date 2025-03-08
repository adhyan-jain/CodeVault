#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator {
protected:
    float num1, num2;
public:
    void getInput() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void performOperations() {
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        if (num2 != 0) {
            cout << "Division: " << num1 / num2 << endl;
        } else {
            cout << "Division: Cannot divide by zero" << endl;
        }
    }
};

class ScientificCalculator {
protected:
    float num1, num2;
public:
    void getInput() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void performScientificOperations() {
        cout << "Power (num1^num2): " << pow(num1, num2) << endl;
        cout << "Square root of num1: " << sqrt(num1) << endl;
        cout << "Log of num1: " << log(num1) << endl;
        cout << "Sin of num1 (in radians): " << sin(num1) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
public:
    void getInputHybrid() {
        SimpleCalculator::getInput(); // Taking input using SimpleCalculator
    }
    void displayResults() {
        cout << "\n--- Simple Calculator Results ---" << endl;
        SimpleCalculator::performOperations(); // Perform simple operations

        cout << "\n--- Scientific Calculator Results ---" << endl;
        ScientificCalculator::performScientificOperations(); // Perform scientific operations
    }
};

int main() {
    HybridCalculator calc;
    calc.getInputHybrid(); // Taking input
    calc.displayResults(); // Displaying results
    return 0;
}
