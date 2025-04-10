/*
Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints
1<=len(num)<=1000

All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.

In the given string:
occurs two times.
and  occur one time each.
The remaining digits  and  don't occur at all.

Sample Input 1
lw4n88j12n1

Sample Output 1
0 2 1 0 1 0 0 0 2 0 

Sample Input 2
1v88886l256338ar0ekk

Sample Output 2
1 1 1 2 0 1 2 0 5 0
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int frequency[10] = {0}; 
    scanf("%s", s); 

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            frequency[s[i] - '0']++; 
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", frequency[i]);
    }

    return 0;
}