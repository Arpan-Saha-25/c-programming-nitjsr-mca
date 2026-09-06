// 2.3	Write a C program to check whether a number is even or odd.

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("This number is a even number.");
    else
        printf("This number is a odd number.");

    return 0;
}