// 7.3	The time at a given point has three elements hours, mins and secs. Write
// a program to add two times. Use a function to add the times and return
// result.

#include <stdio.h>

struct Time {
    int hours, mins, secs;
} typedef T;

struct Time addTimes(T t1, T t2) {
    T retTime;

    retTime.hours = t1.hours + t2.hours;
    retTime.mins = t1.mins + t2.mins;
    retTime.secs = t1.secs + t2.secs;

    if (retTime.mins >= 60) {
        retTime.hours += retTime.mins / 60;
        retTime.mins %= 60;
    }
    if (retTime.secs >= 60) {
        retTime.mins += retTime.secs / 60;
        retTime.secs %= 60;
    }

    return retTime;
}

int main() {
    T t1, t2, sum;

    printf("Enter first time (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.mins, &t1.secs);

    printf("Enter second time (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.mins, &t2.secs);

    sum = addTimes(t1, t2);

    printf("\nSum is %d hours %d minutes %d seconds.", sum.hours, sum.mins,
           sum.secs);

    return 0;
}

/*
Enter first time (hours minutes seconds): 1 20 00
Enter second time (hours minutes seconds): 2 40 00

Sum is 4 hours 0 minutes 0 seconds.
*/