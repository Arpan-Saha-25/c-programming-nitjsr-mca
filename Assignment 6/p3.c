
// Write a program to find whether a matrix is symmetric or not using a function
// is_symmetric().

#include <stdio.h>

void is_symmetric(int rows, int cols, int arr[rows][cols]);

int main() {
    int rows, cols;

    printf("Enter the rows and cols: ");
    scanf("%d%d", &rows, &cols);

    if (rows != cols) {
        printf("A non-square matrix cannot be symmetric.");
        return 0;
    }

    int arr[rows][cols];

    printf("Enter the matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    is_symmetric(rows, cols, arr);

    return 0;
}

void is_symmetric(int rows, int cols, int arr[rows][cols]) {
    int flag = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != arr[j][i]) {
                flag = 1;
                break;
            }
        }

        if (flag) break;
    }

    if (flag)
        printf(">>> Not Symmetric.");
    else
        printf(">>> Symmetric.");
}

/*
Enter the rows and cols: 3 3
Enter the matrix:
1 2 1
2 1 2
1 2 1
>>> Symmetric.
*/