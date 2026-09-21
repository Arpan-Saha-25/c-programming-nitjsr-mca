// Write a C program tocalculate the sum of all number not divisible by 17 between two given integer numbers.

#include <stdio.h>

int main()
{
    int lower, upper;
    printf("Enter the lower and upper range value: ");
    scanf("%d%d", &lower, &upper);

    int sum = 0;

    for (int i = lower; i <= upper; i++)
    {
        if (i % 17 == 0)
        {
            sum += i;
        }
    }

    printf("The sum is %d.", sum);

    return 0;
}