// 10. Write a program to implement function pointers for basic arithmetic operations.
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {
    int num1, num2, result;
    char operator;
    printf("Enter first number, operator, second number: ");
    scanf("%d %c %d", &num1, &operator, &num2);
    int (*op_func)(int, int);
    if (operator == '+') {
        op_func = add;
    } else if (operator == '-') {
        op_func = subtract;
    } else if (operator == '*') {
        op_func = multiply;
    } else if (operator == '/') {
        op_func = divide;
    }
    result = op_func(num1, num2);
    printf("Result: %d", result);
    return 0;
}
