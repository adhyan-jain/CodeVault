// 3. Implement a program to reverse a string using pointers.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    char *start = str, *end = str + len - 2;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Reversed string: %s", str);
    return 0;
}
