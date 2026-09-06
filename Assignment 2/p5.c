// 2.5	Write a C program to input month number and print number of days in that month.
// 29 - 2
// 30 - 4 6 9 11
// 31 - 1 3 5 7 8 10 12

#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month == 2)
        printf(">>> It has 28/29 days.");

    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf(">>> It has 30 days.");

    else if (month >= 1 && month <= 12)
        printf(">>> It has 31 days.");

    else
        printf(">>> Invalid month number.");

    return 0;
}