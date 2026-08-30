// Write a C program that accepts an employee's ID, total worked hours of a month and
// the amount he received per hour.
// Print the employee's ID and salary (with two decimal places) of a particular month.

#include <stdio.h>
int main() {
    int emp_id, work_hrs;
    float amt_per_hr;

    printf("Enter the employee's ID: ");
    scanf("%d", &emp_id);
    printf("Enter the total worked hours of a month: ");
    scanf("%d", &work_hrs);
    printf("Enter the amount he received per hour: ");
    scanf("%f", &amt_per_hr);

    printf("Employee's ID : %d", emp_id);
    printf("\nSalary : %.2f", work_hrs * amt_per_hr);

    return 0;
}