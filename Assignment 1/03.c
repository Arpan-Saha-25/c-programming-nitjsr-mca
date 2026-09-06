// 1.3 Write a C program that accepts two integers from the user and calculate the sum and
// product of the two integers.

#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("\nSum of these numbers are %d.", num1 + num2);
    printf("\nProduct of these numbers are %d.", num1 * num2);

    return 0;
}