// Write a C program to insert an element (given by the user) into
// an array in a particular position (given by the user).

#include <stdio.h>

int main() {
    int size;
    printf("Size of the array: ");
    scanf("%d", &size);
    if (size > 0)
        size++;
    else
        return 0;

    int arr[size], elem, idx, temp, i;
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size - 1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("New element: ");
    scanf("%d", &elem);
    printf("At Index: ");
    scanf("%d", &idx);

    if (idx < 0 || idx >= size - 1) return 0;

    temp = arr[idx];
    arr[idx] = elem;

    for (i = idx + 1; i < size; i++) {
        int tmp = arr[i];
        arr[i] = temp;
        temp = tmp;
    }

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Size of the array: 5
// Enter the elements of the array:
// 1 2 3 4 5
// New element: 7
// At Index: 2
// Array after insertion:
// 1 2 7 3 4 5