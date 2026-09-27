// 4.5 Write a C program to print the elements of an array in reverse order.

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 0) {
        printf("Error: Invalid size.");
        return 0;
    }

    int arr[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Your elements are: ");
    for (int j = size - 1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }

    return 0;
}

// Enter the size of the array: 5
// Enter the elements:
// 10 11 18 -12 1
// Your elements are: 1 -12 18 11 10