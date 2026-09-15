// 2.1 Write a C program to input any character and check
// whether it is alphabet, digit or special character.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("It is an alphabet.\n");

    else if (ch >= '0' && ch <= '9')
        printf("It is a digit.\n");

    else
        printf("It is a special character.\n");

    return 0;
}