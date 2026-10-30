// Write a C program to insert an element(given by the user)
// into an array in a particular position(given by the user).

#include <stdio.h>

int main() {
    int size;
    printf("Size: ");
    scanf("%d", &size);

    int arr[size + 1];

    printf("Enter Array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, elem;
    printf("Enter element and its index:\n");
    scanf("%d%d", &elem, &pos);

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = elem;
    printf("New Array:\n");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Size: 5
Enter Array:
10 20 30 40 50
Enter element and its index:
-5 3
New Array:
10 20 30 -5 40 50
*/