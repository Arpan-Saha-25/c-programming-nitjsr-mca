// Write a C program to delete an element from a particular position (given by
// the user) in an array.

#include <stdio.h>

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter position:\n");
    scanf("%d", &pos);

    // Shift elements to the left
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("New Array:\n");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Size: 4
Enter Array:
1 2 3 4
Enter position:
3
New Array:
1 2 3
*/