// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

#include <stdio.h>
int main() {
    int height_in = 7;
    int width_in = 5;

    int perimeter = 2 * (height_in + width_in);
    int area = height_in * width_in;

    printf("height = %d, width = %d\n", height_in, width_in);
    printf("Perimeter(inches) : %d\nArea(sq. inches) : %d", perimeter, area);

    return 0;
}