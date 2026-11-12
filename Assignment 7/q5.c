// _____7.5	Write a program by using structure that describes the set books
// in a library. For each book the members are name of author, publisher, price
// and branch information. The program should •	print the list of books supplied
// by a publisher •	print the list of books in a particular branch

#include <stdio.h>
#include <string.h>

struct book {
    char author[50];
    char publisher[50];
    float price;
    char branch[50];
};

int main() {
    struct book b[100];
    int n, i;
    char search[50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i + 1);

        printf("Author: ");
        scanf(" %49[^\n]", b[i].author);

        printf("Publisher: ");
        scanf(" %49[^\n]", b[i].publisher);

        printf("Price: ");
        scanf("%f", &b[i].price);

        printf("Branch: ");
        scanf(" %49[^\n]", b[i].branch);
    }

    printf("\nEnter publisher name to search: ");
    scanf(" %49[^\n]", search);

    printf("\nBooks supplied by %s:\n", search);

    for (i = 0; i < n; i++) {
        if (strcmp(b[i].publisher, search) == 0) {
            printf("%s | %s | %.2f | %s\n", b[i].author, b[i].publisher,
                   b[i].price, b[i].branch);
        }
    }

    printf("\nEnter branch name to search: ");
    scanf(" %49[^\n]", search);

    printf("\nBooks available in %s:\n", search);

    for (i = 0; i < n; i++) {
        if (strcmp(b[i].branch, search) == 0) {
            printf("%s | %s | %.2f | %s\n", b[i].author, b[i].publisher,
                   b[i].price, b[i].branch);
        }
    }

    return 0;
}

/*
Enter number of books: 2

Enter details of book 1:
Author: Dennis
Publisher: phi
Price: 450
Branch: cse

Enter details of book 2:
Author: Balagurusamy
Publisher: mgh
Price: 550
Branch: maths

Enter publisher name to search: phi

Books supplied by phi:
Dennis | phi | 450.00 | cse

Enter branch name to search: maths

Books available in maths:
Balagurusamy | mgh | 550.00 | maths
*/