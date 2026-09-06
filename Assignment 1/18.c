// Write a C Program to check whether a given year is leap year or not.

#include <stdio.h>

int main() {
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("\nIt is a LEAP year.");
    else
        printf("\nIt is not a LEAP year.");

    return 0;
}