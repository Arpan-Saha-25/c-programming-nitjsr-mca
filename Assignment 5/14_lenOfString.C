// 14_lenOfString.C
// count len of string

#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    printf("Length of the string: %d", len);

    return 0;
}
