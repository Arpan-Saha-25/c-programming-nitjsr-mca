//  Write a C program to print all numbers between 1 to 100 which divided by a specified
// number and the remainder will be 3.

#include <stdio.h>

int main()
{
    int divisor;
    printf("Enter a divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0)
    {
        printf("Divisor cannot be zero.\n");
        return 1;
    }

    printf("\nThe numbers which are divided by %d and the remainder is 3 are:\n", divisor);

    for (int i = 1; i <= 100; i++)
    {
        if (i % divisor == 3)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
