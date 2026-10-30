#include <stdio.h>

int main() {
    int size;
    scanf("Size: %d", &size);

    int arr[size];
    printf("Enter the elements: \n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reverse Order of Given Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}