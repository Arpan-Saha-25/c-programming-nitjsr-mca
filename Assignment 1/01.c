// Write a C program to print your name, date of birth and mobile number.

#include <stdio.h>

int main() {
    // char name[] = "Arpan Saha";
    // char dob[] = "25-03-2004";
    // unsigned long long int mob_number = 9933886347;

    char name[50];
    char dob[20];
    unsigned long long int mob_number;

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter the dob: ");
    fgets(dob, sizeof(dob), stdin);

    printf("Enter the mobile number: ");
    scanf("%llu", &mob_number);

    printf("\nName: %s", name);
    printf("Date of birth: %s", dob);
    printf("Mobile No.: %llu", mob_number);

    return 0;
}

/*
output:
Enter the name: Arpan Saha
Enter the dob: 25 march 2004
Enter the mobile number: 9933886347

Name: Arpan Saha
Date of birth: 25 march 2004
Mobile No.: 9933886347
*/