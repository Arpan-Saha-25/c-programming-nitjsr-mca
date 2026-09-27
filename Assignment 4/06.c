// 4.6 Write a C program to find the largest and smallest elements of an array.

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Error: Invalid size.");
        return 0;
    }

    int arr[size];

    printf("Enter the elements:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}

// Enter the size of the array: 5
// Enter the elements:
// 1 5 9 -2 1
// Largest element = 9
// Smallest element = -2