// 1. Write a program to swap two numbers using pointers.
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int *p1 = &a, *p2 = &b;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    printf("Swapped numbers: %d %d", a, b);
    return 0;
}
