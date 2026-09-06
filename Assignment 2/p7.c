// 2.7	Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>

int main() {
    int a1, a2, a3;
    printf("Enter the 3 angles of the triangle: ");
    scanf("%d%d%d", &a1, &a2, &a3);

    if ((a1 + a2 + a3 == 180) && a1 > 0 && a2 > 0 && a3 > 0) {
        printf("It is a valid triangle.");
    } else {
        printf("It is not a valid triangle.");
    }

    return 0;
}