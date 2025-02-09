// 2. Create a program to find the sum of elements in an array using pointers.
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    for (int i = 0; i < num; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of elements: %d", sum);
    return 0;
}
