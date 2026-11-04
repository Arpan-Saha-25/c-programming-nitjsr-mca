// Write a program to find whether a matrix is symmetric or not using a function
// is_symmetric ( ).

#include <stdio.h>

void is_symmetric(int rows, int cols, int arr[rows][cols]);

int main() {
    int rows, cols;
    printf("Enter the rows and cols: ");
    scanf("%d%d", &rows, &cols);

    if (rows != cols) {
        return 0;
    }

    int arr[rows][cols];

    printf("Enter the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Calling func...\n");
    is_symmetric(rows, cols, arr);

    return 0;
}

void is_symmetric(int rows, int cols, int arr[rows][cols]) {
    int trans[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
            trans[j][i] = arr[i][j];
        }
        printf("\n");
    }
    // printf("Enter the matrix:\n");
    int flag = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != trans[i][j]) {
                flag = 1;
            }
        }
    }
    if (flag)
        printf("\n>>> Not Symmetric.");
    else
        printf("\n>>> Symmetric");
}