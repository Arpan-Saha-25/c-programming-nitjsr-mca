
// Write a C program to multiply two matrices using array of pointers.

#include <stdio.h>

// Function declaration
void multiply(int* a[], int* b[], int* c[], int r1, int c1, int c2);

int main() {
    int A[10][10], B[10][10], C[10][10];

    // Array of pointers
    int *a[10], *b[10], *c[10];

    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    // Check valid dimensions
    if (r1 <= 0 || r1 > 10 || c1 <= 0 || c1 > 10 || r2 <= 0 || r2 > 10 ||
        c2 <= 0 || c2 > 10) {
        printf("Invalid matrix dimensions.\n");
        return 0;
    }

    // Check multiplication condition
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Assign addresses of rows to pointer arrays
    for (int i = 0; i < r1; i++) a[i] = A[i];

    for (int i = 0; i < r2; i++) b[i] = B[i];

    for (int i = 0; i < r1; i++) c[i] = C[i];

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");

    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Function call
    multiply(a, b, c, r1, c1, c2);

    // Display resultant matrix
    printf("\nResultant Matrix:\n");

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Matrix multiplication using array of pointers
void multiply(int* a[], int* b[], int* c[], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;

            for (int k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
