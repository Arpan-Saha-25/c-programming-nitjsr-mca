// Write a C program to convert a decimal number to its binary equivalent.

#include <stdio.h>
#include <string.h>

int main()
{
    int decimal, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0)
    {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary equivalent: ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}
