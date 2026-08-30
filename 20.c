// Write a C program to calculate the distance between the two points.

#include <math.h>
#include <stdio.h>

int main() {
    int x1, y1, x2, y2;

    printf("Point 1: ");
    scanf("%d%d", &x1, &y1);
    printf("Point 2: ");
    scanf("%d%d", &x2, &y2);

    double dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    printf("Total Distance : %lf", dist);

    return 0;
}