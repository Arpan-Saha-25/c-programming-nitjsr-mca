// 4.8 Write a C program to find the average of the elements of an integer
// array. Also find the standard deviation of these elements.

#include <math.h>
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
    float sum = 0, average, variance = 0, standardDeviation;

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / size;

    for (int i = 0; i < size; i++) {
        variance += (arr[i] - average) * (arr[i] - average);
    }

    standardDeviation = sqrt(variance / size);

    printf("Average = %.2f\n", average);
    printf("Standard Deviation = %.2f", standardDeviation);

    return 0;
}

// Enter the size of the array: 4
// Enter the elements:
// 1 3 5 9
// Average = 4.50
// Standard Deviation = 2.96