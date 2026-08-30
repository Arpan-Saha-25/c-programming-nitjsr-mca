// Write a C program to convert specified days into years, weeks and days.

#include <stdio.h>

int main() {
    int numOfDays, years, weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &numOfDays);

    years = numOfDays / 365;
    numOfDays = numOfDays % 365;

    weeks = numOfDays / 7;
    days = numOfDays % 7;

    printf("Years : %d\n", years);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d\n", days);

    return 0;
}