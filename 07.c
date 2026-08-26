// Write a C Program to input any Capital letter and display it with small letter.

#include <stdio.h>

int main() {
    printf("Enter the character: ");

    char ch;
    scanf("%c", &ch);

    int ch_ascii = ch;

    if (ch_ascii >= 65 && ch_ascii <= 90) {
        printf("Lowercased letter: %c", ch_ascii + 32);
    } else {
        printf("\n\nPLEASE ENTER A VALID CAPITAL LETTER!!!");
    }

    return 0;
}