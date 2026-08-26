// Write a C Program to input any Small letter and display it with capital letter.

#include <stdio.h>

int main() {
    printf("Enter the character: ");

    char ch;
    scanf("%c", &ch);

    int ch_ascii = ch;

    if (ch_ascii >= 97 && ch_ascii <= 122) {
        printf("Lowercased letter: %c", (ch_ascii - 32));
    } else {
        printf("\n\nPLEASE ENTER A VALID SMALL LETTER!!!");
    }

    return 0;
}