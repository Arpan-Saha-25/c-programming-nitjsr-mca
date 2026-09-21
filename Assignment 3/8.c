// Write a C program to check whether a given number is Palindrome or not.

#include <stdio.h>

int main()
{

    int num, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
    {
        printf("%d is a Palindrome number.", original);
    }
    else
    {
        printf("%d is not a Palindrome number.", original);
    }

    return 0;
}

// Enter a number: 12321
// 12321 is a Palindrome number.