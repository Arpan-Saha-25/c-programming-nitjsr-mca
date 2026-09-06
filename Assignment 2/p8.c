// 2.8	Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <stdio.h>

int main() {
    int s1, s2, s3;

    printf("Enter the length of the three sides: ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if (s1 > 0 && s2 > 0 && s3 > 0 &&
        s1 + s2 > s3 &&
        s2 + s3 > s1 &&
        s1 + s3 > s2) {
        if (s1 == s2 && s2 == s3) {
            printf("It is an equilateral triangle.");
        } else if (s1 == s2 || s2 == s3 || s1 == s3) {
            printf("It is an isosceles triangle.");
        } else {
            printf("It is a scalene triangle.");
        }
    } else {
        printf("It is not a valid triangle.");
    }

    return 0;
}