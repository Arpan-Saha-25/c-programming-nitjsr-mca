// 2.1	Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("This is a positive number.");
    else if (num < 0)
        printf("This is a negative number.");
    else
        printf("The number is zero.");

    return 0;
}