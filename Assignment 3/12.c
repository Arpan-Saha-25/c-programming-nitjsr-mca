// Write a C program to print the Fibonacci series upto a range.

#include <stdio.h>

int main()
{

    int n, a = 0, b = 1, c;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

// Enter the range: 5
// Fibonacci series: 0 1 1 2 3