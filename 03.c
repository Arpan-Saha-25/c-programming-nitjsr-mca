// 1.3 Write a C program that accepts two integers from the user and calculate the sum and
// product of the two integers.

#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int product = num1 * num2;

    printf("Sum of these numbers are %d.", sum);

    return 0;
}