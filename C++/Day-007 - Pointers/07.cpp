// 7. Write a program to sort an array using pointers.
#include <stdio.h>

int main() {
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr1, *ptr2, temp;
    for (ptr1 = arr; ptr1 < arr + num - 1; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 < arr + num; ptr2++) {
            if (*ptr1 > *ptr2) {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
