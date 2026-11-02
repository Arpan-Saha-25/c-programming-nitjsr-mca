// Write a program in C for addition of two Matrices of same size.

#include <stdio.h>

int main() {
    int row, col;
    printf("Enter the size of the matrices (ROW and COLUMN):\n");
    scanf("%d%d", &row, &col);

    if (row <= 0 || col <= 0) {
        printf("Invalid matrix dimensions.");
        return 0;
    }

    int arr1[row][col], arr2[row][col], result[row][col];

    printf("Enter the first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Enter the size of the matrices (ROW and COLUMN):
2 3
Enter the first matrix:
1 2 3
4 5 6
Enter the second matrix:
2 2 2
3 3 3
Resultant Matrix:
3 4 5
7 8 9
*/