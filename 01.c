// Write a C program to print your name, date of birth and mobile number.

#include <stdio.h>
int main() {
    char name[] = "Arpan Saha";
    char name2[50];
    char dob[] = "25-03-2004";
    char dob2[20];
    unsigned long long int mob_number = 9933886347;
    unsigned long long int mob_number_;

    printf("Enter the name: ");
    fgets(name2, sizeof(name2), stdin);

    printf("Enter the dob: ");
    fgets(dob2, sizeof(dob2), stdin);

    printf("Enter the mobile number: ");
    scanf("%llu", &mob_number_);

    printf("\nName: %s", name2);
    printf("Date of birth: %s", dob2);
    printf("Mobile No.: %llu", mob_number_);

    return 0;
}

/*
Arpan Saha
25 03 2004
9933881234
*/