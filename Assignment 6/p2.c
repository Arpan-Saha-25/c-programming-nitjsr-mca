// Write a program to find the maximum and minimum elements of an array using
// two different functions array_max ( ) and array_min ( ).

#include <stdio.h>

void array_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max elem is %d\n", max);
}

void array_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Min elem is %d\n", min);
}

int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size.");
        return 0;
    }

    int arr[size];
    printf("Enter the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    array_max(arr, size);
    array_min(arr, size);

    return 0;
}

/*
Enter the size: 5
Enter the array:
1 2 3 4 5
Max elem is 5
Min elem is 1
*/