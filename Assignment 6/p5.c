// Write a recursive function to print the factorial of a number.

#include <stdio.h>

int fact(int n) {
    if (n < 0) {
        return -1;
    }

    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Factorial is %d.", fact(n));

    return 0;
}