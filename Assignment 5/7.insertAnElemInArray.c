// Write a C program to insert an element(given by the user)
// into an array in a particular position(given by the user).

#include <stdio.h>

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid Size.");
        return 0;
    }

    int arr[size + 1];

    printf("Enter Array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, elem;
    printf("Enter element and its index:\n");
    scanf("%d%d", &elem, &pos);

    // Validate insertion position
    if (pos < 0 || pos > size) {
        printf("Invalid Position.");
        return 0;
    }

    // Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = elem;

    printf("New Array:\n");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*
Size: 4
Enter Array:
1 2 3 4
Enter element and its index:
9 2
New Array:
1 2 9 3 4
*/