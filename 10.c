// Write a C Program to input two digits number from user and display the number in reverse order.

#include <stdio.h>

int main() {
    printf("Enter a 2-digit number: ");
    int num;
    scanf("%d", &num);

    if (num > 9 && num < 100) {
        int i = 100, remainder;
        while (i > 0)
        {
            remainder = num % i;
            i/=10;
        }
        
    }
    return 0;
}