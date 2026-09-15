// 2.4	Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u') {
            printf("It is a vowel.");
        } else {
            printf("It is a consonant.");
        }
    } else {
        printf("Invalid input.");
    }

    return 0;
}