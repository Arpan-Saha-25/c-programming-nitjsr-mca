// Write a C program to print all numbers between 1 to 100 which divided by a
// specified number and the remainder will be 3.

#include <stdio.h>

int main() {
    int divisor;
    printf("Enter a divisor: ");
    scanf("%d", &divisor);

    if (divisor <= 3) {
        printf("Divisor must be greater than 3.\n");
        return 1;
    }

    printf(
        "\nThe numbers which are divided by %d and the remainder is 3 are:\n",
        divisor);

    for (int i = 1; i <= 100; i++) {
        if (i % divisor == 3) {
            printf("%d ", i);
        }
    }

    return 0;
}

// Enter a divisor: 5

// The numbers which are divided by 5 and the remainder is 3 are:
// 3 8 13 18 23 28 33 38 43 48 53 58 63 68 73 78 83 88 93 98