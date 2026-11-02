// Write a C program to print the elements of an array in reverse order.

#include <stdio.h>

void main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}
/*
Size: 4
Original array:
1 2 3 4
Reversed array:
4 3 2 1
*/