// 2.6	Consider a currency system in which there are notes of seven denominations, namely, Re.1, Rs. 2, Rs.5, Rs.10, Rs. 50 and Rs. 100. If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the amount: ");
    scanf("%d", &n);

    count = count + n / 100;
    n = n % 100;

    count = count + n / 50;
    n = n % 50;

    count = count + n / 10;
    n = n % 10;

    count = count + n / 5;
    n = n % 5;

    count = count + n / 2;
    n = n % 2;

    count = count + n / 1;

    printf("Smallest number of notes = %d", count);

    return 0;
}