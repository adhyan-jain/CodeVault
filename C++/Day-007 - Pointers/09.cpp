// 9. Implement a program to remove duplicates from an array using pointers.
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
    int *ptr1, *ptr2, temp, i, j;
    for (ptr1 = arr; ptr1 < arr + num - 1; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 < arr + num; ptr2++) {
            if (*ptr1 == *ptr2) {
                for (i = (ptr2 - arr); i < num - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                num--;
                ptr2--;
            }
        }
    }
    printf("Array after removing duplicates: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
