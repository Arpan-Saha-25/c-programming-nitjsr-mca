// Write a menu-driven program to calculate the factorial of a given number
// check whether the number is prime or not check whether the number is a
// palindrome or not. Use different functions for each of the above tasks and
// call the functions from main ( ) using switch statement.

#include <stdio.h>

void factorial(int);
void isPrime(int);
void isPalindrome(int);

int main() {
    printf(
        "Press\n1 for factorial\n2 for prime\n3 for palindrome\n4 for "
        "exit\n----------------\n>>> ");

    int choice;
    scanf("%d", &choice);

    if (choice == 4) {
        printf("Exited.");
        return 0;
    }

    printf("Enter the number: ");
    int n;
    scanf("%d", &n);
    switch (choice) {
        case 1:
            factorial(n);
            break;
        case 2:
            isPrime(n);
            break;
        case 3:
            isPalindrome(n);
            break;
        case 4:
            return 0;

        default:
            break;
    }

    return 0;
}

void factorial(int num) {
    // printf("0000000000000000000000000000000000000000000\n");
    int factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d", num, factorial);
    return;
}

void isPrime(int num) {
    int isPrime = 1;

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a Prime number.", num);
    } else {
        printf("%d is not a Prime number.", num);
    }
    return;
}

void isPalindrome(int num) {
    int original, reverse = 0, remainder;

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse) {
        printf("%d is a Palindrome number.", original);
    } else {
        printf("%d is not a Palindrome number.", original);
    }
    return;
}