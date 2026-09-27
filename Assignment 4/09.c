// Write a C program to sort a set of n numbers in descending order and then
// search for a given number (taken from user) in the set of sorted numbers.

#include <stdio.h>

int main() {
    int n, i, j, temp;
    int key, low, high, mid;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nNumbers in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the number to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (found) {
        printf("%d is found at position %d.\n", key, mid + 1);
    } else {
        printf("%d is not found.\n", key);
    }

    return 0;
}

// Enter the number of elements: 4
// Enter 4 numbers:
// 10 20 30 50

// Numbers in descending order:
// 50 30 20 10

// Enter the number to search: 30
// 30 is found at position 2.