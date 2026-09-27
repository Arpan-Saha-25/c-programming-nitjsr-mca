// Write a C program to print the following Pascal’s Triangle.
//           1
//         1   1
//       1   2   1
//     1   3   3   1
//   1   4   6   4   1
// 1   5   10   10   5   1

#include <stdio.h>

int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            int value = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d   ", value);
        }

        printf("\n");
    }

    return 0;
}

// Enter the number of rows: 6
//           1
//         1   1
//       1   2   1
//     1   3   3   1
//   1   4   6   4   1
// 1   5   10   10   5   1