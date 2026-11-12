// _____7.6	Write a program which will calculate income tax and total tax
// for several persons at following rates: •	taxable income up to 40,000 – no
// tax •	taxable income from 40,001 to 60,000 – income tax = 3000 + 0.3
// (taxable income – 40,000) •	taxable income from 60,001 to 1,20,000 – income
// tax = 6000 + 0.3 (taxable income – 40,000) •	taxable income over 1,20,000 –
// income tax = 12,000 + 0.3 (taxable income – 40,000)
//          Calculate the tax payable by a person using the above scheme. The
//          program should accept pan_no, name, address, taxable income and tax
//          payable and print the details of the persons wh0 have a tax of
//          15,000 and above.

#include <stdio.h>

struct person {
    char pan_no[20];
    char name[50];
    char address[100];
    float income;
    float tax;
};

int main() {
    struct person p[100];
    int n, i;

    printf("Enter number of persons: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of person %d:\n", i + 1);

        printf("PAN Number: ");
        scanf("%19s", p[i].pan_no);

        printf("Name: ");
        scanf(" %49[^\n]", p[i].name);

        printf("Address: ");
        scanf(" %99[^\n]", p[i].address);

        printf("Taxable Income: ");
        scanf("%f", &p[i].income);

        if (p[i].income <= 40000) {
            p[i].tax = 0;
        } else if (p[i].income <= 60000) {
            p[i].tax = 3000 + 0.3 * (p[i].income - 40000);
        } else if (p[i].income <= 120000) {
            p[i].tax = 6000 + 0.3 * (p[i].income - 40000);
        } else {
            p[i].tax = 12000 + 0.3 * (p[i].income - 40000);
        }
    }

    printf("\n--- Persons with Tax Payable >= 15000 ---\n");

    for (i = 0; i < n; i++) {
        if (p[i].tax >= 15000) {
            printf("\nPAN Number: %s", p[i].pan_no);
            printf("\nName: %s", p[i].name);
            printf("\nAddress: %s", p[i].address);
            printf("\nTaxable Income: %.2f", p[i].income);
            printf("\nTax Payable: %.2f\n", p[i].tax);
        }
    }

    return 0;
}

/*
Enter number of persons: 2

Enter details of person 1:
PAN Number: BH2004MXARP
Name: ARPAN SAHA
Address: KOLKATA
Taxable Income: 90000

Enter details of person 2:
PAN Number: BH2003MXSAI
Name: SAI RANA
Address: BHUVANESHWAR
Taxable Income: 110000

--- Persons with Tax Payable >= 15000 ---

PAN Number: BH2004MXARP
Name: ARPAN SAHA
Address: KOLKATA
Taxable Income: 90000.00
Tax Payable: 21000.00

PAN Number: BH2003MXSAI
Name: SAI RANA
Address: BHUVANESHWAR
Taxable Income: 110000.00
Tax Payable: 27000.00
*/