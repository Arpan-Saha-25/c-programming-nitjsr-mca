// Write a C program to print each of the following output patterns.

#include <stdbool.h>
#include <stdio.h>

int main() {
    int n = 5;

    // Pattern 1
    printf("\nPattern 1:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 2
    printf("\nPattern 2:\n");

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 3
    printf("\nPattern 3:\n");

    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        // Stars
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Pattern 4
    printf("\nPattern 4:\n");

    bool flag = true;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (flag) {
                printf("1");
                flag = false;
            } else {
                printf("0");
                flag = true;
            }
        }
        printf("\n");
    }

    // Pattern 5
    printf("\nPattern 5:\n");

    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        // Row number
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
