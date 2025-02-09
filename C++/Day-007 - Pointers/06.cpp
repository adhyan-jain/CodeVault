// 6. Implement a program to find the length of a string using pointers.
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char *ptr = str;
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Length of the string: %d", length);
    return 0;
}
