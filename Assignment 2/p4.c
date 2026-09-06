// 2.4	Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>

int main() {
    char ch;
    printf("Enter the alphabet: ");
    ch = getchar();

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("It is a vowel.");
        } else {
            printf("It is a consonant.");
        }
    } else {
        printf("Invalid input.");
    }

    return 0;
}