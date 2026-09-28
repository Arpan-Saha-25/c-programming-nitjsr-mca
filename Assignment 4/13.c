// Write a C program to print Fibonacci series using array.

#include <stdio.h>

int main() {
    int size;
    printf("Number of terms: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Error: Invalid Size.");
        return 0;
    }

    int arr[size];

    arr[0] = 0;

    if (size > 1) arr[1] = 1;

    for (int i = 2; i < size; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    printf("Fibonacci Series:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Number of terms: 4
// Fibonacci Series:
// 0 1 1 2