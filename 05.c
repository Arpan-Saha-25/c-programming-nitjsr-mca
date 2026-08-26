// Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.

#include <stdio.h>

int main() {
    int radius_in = 6;
    float pi = 3.14;
    float circumference = 2 * radius_in * pi;
    float area = pi * radius_in * radius_in;

    printf("Radius of circle : %d", radius_in);
    printf("\nCircumference : %.2f", circumference);
    printf("\nArea : %.2f", area);

    return 0;
}