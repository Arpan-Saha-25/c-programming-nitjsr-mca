// 7.1	Define a structure named “student” to store information of a student
// (roll, name, marks_in_physics, marks_in_chemistry, marks_in_mathematics).
// Write a program, which will take as input the roll, name and numbers obtained
// by several students in different subjects. The program will calculate the
// total marks obtained by each student and display the list of students in
// descending order according to the total marks.

#include <stdio.h>

struct Student {
    char name[99];
    int rollNo;
    int marks_phys;
    int marks_chem;
    int marks_maths;
    int total;
} typedef stud;

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    stud arr[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &arr[i].rollNo);

        printf("Name: ");
        scanf(" %98[^\n]", arr[i].name);

        printf("Physics marks: ");
        scanf("%d", &arr[i].marks_phys);

        printf("Chemistry marks: ");
        scanf("%d", &arr[i].marks_chem);

        printf("Mathematics marks: ");
        scanf("%d", &arr[i].marks_maths);

        arr[i].total =
            arr[i].marks_phys + arr[i].marks_chem + arr[i].marks_maths;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].total < arr[j + 1].total) {
                stud temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n--- Student Result (Descending Order) ---\n");

    printf("Roll\tName\t\tPhysics\tChemistry\tMaths\tTotal\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%-15s\t%d\t%d\t\t%d\t%d\n", arr[i].rollNo, arr[i].name,
               arr[i].marks_phys, arr[i].marks_chem, arr[i].marks_maths,
               arr[i].total);
    }

    return 0;
}

/*
Enter the number of students: 2

Enter details of student 1:
Roll number: 1
Name: Arpan
Physics marks: 70
Chemistry marks: 80
Mathematics marks: 70

Enter details of student 2:
Roll number: 2
Name: Nikhil
Physics marks: 70
Chemistry marks: 67
Mathematics marks: 56

--- Student Result (Descending Order) ---
Roll    Name            Physics Chemistry       Maths   Total
1       Arpan           70      80              70      220
2       Nikhil          70      67              56      193
*/