// Write a C Program to accept any character from user and display its ASCII number on screen.

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("\nYour character is %c.\nIt's ASCII code is %d.", ch, ch);
    return 0;
}