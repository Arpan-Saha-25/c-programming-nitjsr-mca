// Write a C program to delete an element from a particular position (given by
// the user) in an array.

#include <stdio.h>

int main() {
    int size;
    printf("Size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Error: Invalid Size.");
        return 0;
    }

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int deleteIndex;
    printf("Enter the index to be deleted from: ");
    scanf("%d", &deleteIndex);

    if (deleteIndex >= 0 && deleteIndex < size) {
        for (int i = deleteIndex; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Array after deletion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Error: Invalid Index.");
    }

    return 0;
}

// Size of the array: 5
// Enter the elements of the array:
// 1 2 3 4 5
// Enter the index to be deleted from: 3
// Array after deletion:
// 1 2 3 5