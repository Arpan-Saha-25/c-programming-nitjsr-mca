// 1.2	Write a C program to print the following characters in a reverse way.
// Input: ABC, Output: CBA

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    // fgets adds the newline too, so we are changing it to null char
    int len = strlen(str);

    printf("Reversed string: ");

    for (int i = len - 1; i >= 0; i--) {
        if (str[i] != '\0') {
            printf("%c", str[i]);
        }
    }

    return 0;
}

/*
Input:
Enter the string: ABC

Output:
Reversed string: CBA
*/