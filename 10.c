// Write a C Program to input two digits number from user and display the number in reverse order.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int rev = 0, rem = 0;
    if (num > 9 && num < 100) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
        printf("Reversed Number is %d.", rev);
    } else
        printf(">>> Please enter a valid 2 digit number.\n");

    return 0;
}