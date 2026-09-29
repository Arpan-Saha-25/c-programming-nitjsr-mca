// A positive integer is entered through the keyboard. Along with it the base of
// the number system in which you want to convert this number is entered. Write
// a C program to do this conversion.

#include <stdio.h>

int main() {
    int num, base, arr[100], i = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Enter the base: ");
    scanf("%d", &base);

    if (num <= 0 || base < 2 || base > 16) {
        printf("Error: Invalid number or base.");
        return 1;
    }

    while (num > 0) {
        arr[i] = num % base;
        num = num / base;
        i++;
    }

    printf("Converted number: ");

    for (i = i - 1; i >= 0; i--) {
        if (arr[i] < 10)
            printf("%d", arr[i]);
        else
            printf("%c", 'A' + arr[i] - 10);
    }

    return 0;
}

// Enter a positive integer: 32
// Enter the base: 2
// Converted number: 100000