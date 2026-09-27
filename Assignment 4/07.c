// Write a C program to swap the elements of two arrays.

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Error: Invalid size.");
        return 0;
    }

    int arr[size], arr2[size], temp;

    printf("Enter the elements of array 1:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elements of array 2:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < size; i++) {
        temp = arr[i];
        arr[i] = arr2[i];
        arr2[i] = temp;
    }
    printf("\nAfter swapping.\nArray 1:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nArray 2:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

// Enter the size of the arrays: 4
// Enter the elements of array 1:
// 1 2 3 4
// Enter the elements of array 2:
// 5 6 7 8

// After swapping.
// Array 1:
// 5 6 7 8
// Array 2:
// 1 2 3 4