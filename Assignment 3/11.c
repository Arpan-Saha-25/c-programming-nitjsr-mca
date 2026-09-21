// Write a C program to check whether a given number is Prime number or not.

#include <stdio.h>

int main()
{

    int num, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is a Prime number.", num);
    }
    else
    {
        printf("%d is not a Prime number.", num);
    }

    return 0;
}

// Enter a number: 113
// 113 is a Prime number.