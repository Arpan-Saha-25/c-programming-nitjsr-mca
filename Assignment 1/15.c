// Write a C Program to check whether a number is even or odd.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("\nNumber is even.");
    else
        printf("\nNumber is odd.");

    return 0;
}