// 7.2	Define a structure named “employee” to store information of an employee
// (emp_no, name, department, basic_pay, DA, HRA and gross_salary). Write a
// program, which will take as input the emp_no, name, department, basic_pay for
// several employees. The program will calculate the DA, HRA and total for each
// employee and display the details of the employee having the highest gross
// salary.

#include <stdio.h>

struct employee {
    int emp_no;
    char name[99];
    char department[50];
    float basic_pay;
    float DA;
    float HRA;
    float gross_salary;
};

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee arr[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &arr[i].emp_no);

        printf("Name: ");
        scanf(" %98[^\n]", arr[i].name);

        printf("Department: ");
        scanf(" %49[^\n]", arr[i].department);

        printf("Basic Pay: ");
        scanf("%f", &arr[i].basic_pay);

        arr[i].DA = arr[i].basic_pay * 0.10;
        arr[i].HRA = arr[i].basic_pay * 0.20;

        arr[i].gross_salary = arr[i].basic_pay + arr[i].DA + arr[i].HRA;
    }

    int max = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i].gross_salary > arr[max].gross_salary) {
            max = i;
        }
    }

    printf("\n--- Employee Having Highest Gross Salary ---\n");

    printf("Employee Number : %d\n", arr[max].emp_no);
    printf("Name            : %s\n", arr[max].name);
    printf("Department      : %s\n", arr[max].department);
    printf("Basic Pay       : %.2f\n", arr[max].basic_pay);
    printf("DA              : %.2f\n", arr[max].DA);
    printf("HRA             : %.2f\n", arr[max].HRA);
    printf("Gross Salary    : %.2f\n", arr[max].gross_salary);

    return 0;
}

/*
Enter number of employees: 2

Enter details of employee 1:
Employee Number: 001
Name: Arpan
Department: it
Basic Pay: 20000

Enter details of employee 2:
Employee Number: 002
Name: Rahul
Department: ECE
Basic Pay: 30000

--- Employee Having Highest Gross Salary ---
Employee Number : 2
Name            : Rahul
Department      : ECE
Basic Pay       : 30000.00
DA              : 3000.00
HRA             : 6000.00
Gross Salary    : 39000.00
*/