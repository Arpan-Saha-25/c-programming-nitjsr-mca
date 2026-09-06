// Write a C Program to interchange values of two numbers without using third variable.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter 2 numbers : ");
    scanf("%d%d", &num1, &num2);

    printf("\nBefore swapping:\nnum1 : %d\nnum2 : %d", num1, num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("\n\nAfter swapping:\nnum1 : %d\nnum2 : %d", num1, num2);

    return 0;
}