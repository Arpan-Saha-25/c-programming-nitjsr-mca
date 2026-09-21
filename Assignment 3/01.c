// Write a C program to print all natural numbers upto a range.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}

// Enter a number: 10
// 1 2 3 4 5 6 7 8 9 10