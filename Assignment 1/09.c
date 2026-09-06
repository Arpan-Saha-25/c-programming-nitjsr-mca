// Write a C Program to input three digits number from user and calculate sum of first and last digits.

#include <stdio.h>

int main() {
    printf("Enter a 3-digit number: ");
    int num;
    scanf("%d", &num);

    if (num > 99 && num < 1000) {
        printf("first digit: %d", num / 100);
        printf("\nlast digit: %d", num % 10);
        printf("\nSum of these digits: %d", (num / 100) + (num % 10));
    } else {
        printf("\nPlease enter the number from the valid range.");
    }
    return 0;
}