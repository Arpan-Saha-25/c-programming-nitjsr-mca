// Write a C program that accepts two item’s weight (floating point values) and number of purchase
// (floating point values) and calculate the average value of the items.

#include <stdio.h>
int main() {
    float weight1, weight2;
    float purchase1, purchase2;

    printf("Enter the weights of the items: ");
    scanf("%f%f", &weight1, &weight2);

    printf("Enter the number of purchase: ");
    scanf("%f%f", &purchase1, &purchase2);

    float average = ((weight1 * purchase1) + (weight2 * purchase2)) / (purchase1 + purchase2);

    printf("Average value = %.2f\n", average);

    return 0;
}