
// Write a menu-driven program to calculate the factorial of a given number,
// check whether the number is prime or not, and check whether the number is
// a palindrome or not. Use different functions for each of the above tasks
// and call the functions from main() using switch statement.

#include <stdio.h>

void factorial(int);
void isPrime(int);
void isPalindrome(int);

int main() {
    int choice, n;

    do {
        printf(
            "\nPress\n1 for factorial\n2 for prime\n3 for palindrome\n4 for "
            "exit\n----------------\n>>> ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number: ");
                scanf("%d", &n);
                factorial(n);
                break;

            case 2:
                printf("Enter the number: ");
                scanf("%d", &n);
                isPrime(n);
                break;

            case 3:
                printf("Enter the number: ");
                scanf("%d", &n);
                isPalindrome(n);
                break;

            case 4:
                printf("Exited.");
                break;

            default:
                printf("Invalid choice!");
        }

    } while (choice != 4);

    return 0;
}

void factorial(int num) {
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.");
        return;
    }

    unsigned long long fact = 1;

    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %llu\n", num, fact);
}

void isPrime(int num) {
    int flag = 1;

    if (num <= 1) {
        flag = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);
}

void isPalindrome(int num) {
    int original = num;
    int reverse = 0, remainder;

    if (num < 0) {
        printf("%d is not a Palindrome number.\n", num);
        return;
    }

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);
}

/*

Press
1 for factorial
2 for prime
3 for palindrome
4 for exit
----------------
>>> 1
Enter the number: 5
Factorial of 5 = 120

Press
1 for factorial
2 for prime
3 for palindrome
4 for exit
----------------
>>> 4
Exited.
*/