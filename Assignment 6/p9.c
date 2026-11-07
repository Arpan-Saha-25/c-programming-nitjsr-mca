// Write a C program to swap two number using call by reference.

#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("a = %d\nb = %d", a, b);

    return 0;
}