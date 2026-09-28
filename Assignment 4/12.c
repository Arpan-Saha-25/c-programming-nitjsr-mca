// Write a C program for shifting an element of an array one location left.

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

    int shiftElem;
    printf("Shifting Elem: ");
    scanf("%d", &shiftElem);

    for (int i = 1; i < size; i++) {
        if (arr[i] == shiftElem) {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            break;
        }
    }

    printf("Array after shifting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Size of the array: 5
// Enter the elements of the array:
// 12 23 34 45 56
// Shifting Elem: 34
// Array after shifting:
// 12 34 23 45 56