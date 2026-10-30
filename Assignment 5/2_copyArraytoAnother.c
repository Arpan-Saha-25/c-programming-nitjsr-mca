// Write a program in C to copy the elements of one array into another array.
#include <stdio.h>

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    int arr[size], copiedArray[size];

    printf("Original Array : ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Copied Array : ");
    for (int i = 0; i < size; i++) {
        copiedArray[i] = arr[i];
        printf("%d ", copiedArray[i]);
    }

    return 0;
}

/*
Size: 4
Original Array : 5 4 3 2
Copied Array : 5 4 3 2
*/