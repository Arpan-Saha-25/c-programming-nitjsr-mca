// Write a C program to sort a set of n numbers in descending order and then
// search for a given number (taken from user) in the set of sorted numbers.

#include <stdio.h>

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid Size.");
        return 0;
    }

    int arr[size];

    printf("Array 1: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to be searched: ");
    int find, flag = 0;
    scanf("%d", &find);

    for (int i = 0; i < size; i++) {
        if (find == arr[i]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("Your elem is present in the sorted array.");
    } else {
        printf("Not Found.");
    }

    return 0;
}
