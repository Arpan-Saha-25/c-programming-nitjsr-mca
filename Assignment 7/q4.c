// 7.4	A factory producing alloys like brass, bronze and stainless steel, wants
// to keep record of the composition of the metals produced. Brass is an alloy
// of copper and tin. Stainless is produced by adding right quantity of nickel
// and chromium. The factory wants to keep information about several alloys.
// Write a program using structure and union to efficiently store these
// information.

#include <stdio.h>

struct alloy {
    char name[30];
    int type;

    union {
        struct {
            float copper, tin;
        } brass;

        struct {
            float nickel, chromium;
        } steel;

    } metal;
};

int main() {
    struct alloy a[10];
    int n, i;

    printf("Enter number of alloys: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter alloy name: ");
        scanf("%s", a[i].name);

        printf("Enter type (1-Brass, 2-Steel): ");
        scanf("%d", &a[i].type);

        if (a[i].type == 1) {
            printf("Enter copper and tin: ");
            scanf("%f %f", &a[i].metal.brass.copper, &a[i].metal.brass.tin);
        } else {
            printf("Enter nickel and chromium: ");
            scanf("%f %f", &a[i].metal.steel.nickel,
                  &a[i].metal.steel.chromium);
        }
    }

    printf("\n--- Alloy Details ---\n");

    for (i = 0; i < n; i++) {
        printf("\nName: %s\n", a[i].name);

        if (a[i].type == 1) {
            printf("Brass\n");
            printf("Copper: %.2f\n", a[i].metal.brass.copper);
            printf("Tin: %.2f\n", a[i].metal.brass.tin);
        } else {
            printf("Stainless Steel\n");
            printf("Nickel: %.2f\n", a[i].metal.steel.nickel);
            printf("Chromium: %.2f\n", a[i].metal.steel.chromium);
        }
    }

    return 0;
}

/*
Enter number of alloys: 2

Enter alloy name: Alloy1
Enter type (1-Brass, 2-Steel): 1
Enter copper and tin: 12 23.9

Enter alloy name: Alloy2
Enter type (1-Brass, 2-Steel): 2
Enter nickel and chromium: 0.9 10

--- Alloy Details ---

Name: Alloy1
Brass
Copper: 12.00
Tin: 23.90

Name: Alloy2
Stainless Steel
Nickel: 0.90
Chromium: 10.00
*/