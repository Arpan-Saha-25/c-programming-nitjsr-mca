// Write a C program to convert a decimal number to its hexadecimal equivalent.

#include <stdio.h>

int main()
{
    int dec_num;
    printf("Enter the decimal number: ");
    scanf("%d", &dec_num);

    char hexDigits[30];
    int temp, i = 0;

    if (dec_num == 0)
    {
        printf("Hexadecimal value is: 0\n");
        return 0;
    }

    while (dec_num != 0)
    {
        temp = dec_num % 16;

        if (temp < 10)
            hexDigits[i++] = temp + '0';
        else
            hexDigits[i++] = temp - 10 + 'A';

        dec_num = dec_num / 16;
    }

    printf("Hexadecimal value is: ");

    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexDigits[j]);

    printf("\n");

    return 0;
}
