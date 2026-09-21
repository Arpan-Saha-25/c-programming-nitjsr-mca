// Write a C program to find out factorial value of a given number.

#include <stdio.h>

int main()
{

    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d", num, factorial);

    return 0;
}