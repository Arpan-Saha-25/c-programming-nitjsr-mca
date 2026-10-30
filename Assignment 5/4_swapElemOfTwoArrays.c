// Write a C program to swap the elements of two arrays.
#include <stdio.h>
int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid Size.");
        return 0;
    }

    int arr[size], arr2[size];

    printf("Array 1: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array 2: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Swapped Array :\nArray 1: ");

    for (int i = 0; i < size; i++) {
        int temp = arr2[i];
        arr2[i] = arr[i];
        arr[i] = temp;
        printf("%d ", arr[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

/*
Size: 4
Array 1: 9 8 7 6
Array 2: 1 2 3 4
Swapped Array :
Array 1: 1 2 3 4
Array 2: 9 8 7 6
*/