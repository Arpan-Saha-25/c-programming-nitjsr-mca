// Write a program in C for multiplication of two square Matrices.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrices (n of n X n):\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid matrix dimensions.");
        return 0;
    }

    int arr1[n][n], arr2[n][n], res[n][n];

    printf("Matrix 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Matrix 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = 0;

            for (int k = 0; k < n; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("Resultant:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Enter the size of the matrices (n of n X n):
2
Matrix 1:
1 2
3 4
Matrix 2:
4 3
2 1
Resultant:
8 5
20 13
*/
