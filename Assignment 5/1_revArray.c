// Write a C program to print the elements of an array in reverse order.

#include <stdio.h>

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}