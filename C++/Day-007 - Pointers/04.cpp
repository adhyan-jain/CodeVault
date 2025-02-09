// 4. Write a program to dynamically allocate an array and perform basic operations.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    int *arr = (int*)malloc(num * sizeof(int));
    printf("Enter elements: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }
    printf("Sum of elements: %d", sum);
    free(arr);
    return 0;
}
