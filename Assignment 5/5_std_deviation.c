// Write a C program to find the average of the elements of an integer array.
// Also find the standard deviation of these elements.
#include <stdio.h>

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid Size.");
        return 0;
    }

    int arr[size], sum = 0;

    printf("Array 1: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float avg = sum / size;

    float sumOfDiff = 0;
    for (int i = 0; i < size; i++) {
        sumOfDiff += ((arr[i] - avg) * (arr[i] - avg));
    }
    printf("Std Deviation = %f", sumOfDiff / size);

    return 0;
}

/*
Size: 5
Array 1: 1 1 2 1 1
Std Deviation = 0.200000
*/