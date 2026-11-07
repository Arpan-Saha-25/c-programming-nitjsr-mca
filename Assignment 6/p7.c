// Write a recursive function to calculate the sum of all digits of a number
// entered by the user.

#include <stdio.h>

int sumOfDigits(int n) {
    if (n <= 0) {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Sum of digits is %d.", sumOfDigits(n));

    return 0;
}

/*
n = 1234;
1234 % 10 = 4, sum = 4, n/10 = 123
123  % 10 = 3, sum = 7, n/10 = 12
12   % 10 = 2, sum = 9, n/10 = 1
1    % 10 = 1, sum = 10,n/10 = 0
breaks
*/