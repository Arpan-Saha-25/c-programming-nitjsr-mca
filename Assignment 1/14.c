// Write a C Program to convert temperature in Celsius scale into Fahrenheit scale.

#include <stdio.h>

int main() {
    float cel;
    printf("Enter the celcius: ");
    scanf("%f", &cel);

    float fahr = (9 * cel / 5) + 32;

    printf("Fahrenheit  = %.2f", fahr);

    return 0;
}

/*
c =  (f - 32) * 5/9

f = 9c/5 + 32
*/