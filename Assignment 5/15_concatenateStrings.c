// 15_concatenateStrings.c 
// Write a C program to concatenate two strings without using strcat() function.


#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%99[^\n]", str1);

    getchar(); // Consume the newline character

    printf("Enter second string: ");
    scanf("%99[^\n]", str2);

    // Find the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Append the second string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add null character at the end
    str1[i] = '\0';

    printf("Concatenated string: %s", str1);

    return 0;
}
