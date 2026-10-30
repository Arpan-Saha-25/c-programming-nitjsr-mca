// Write a C program to find the largest and smallest elements of an array.

#include <stdio.h>

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid Size.");
        return 0;
    }

    int arr[size], min, max;

    printf("Original Array : ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("Max: %d\nMin: %d", max, min);

    return 0;
}