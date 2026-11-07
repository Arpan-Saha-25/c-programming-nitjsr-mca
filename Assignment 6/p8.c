// Write a recursive function to evaluate nCr = n! / r! * (n – r)!

#include <stdio.h>

int c(int n, int r) {
    if (r == 0 || n == r) {
        return 1;
    } else {
        return c(n - 1, r - 1) + c(n - 1, r);
    }
}
int main() {
    int n, r;
    printf("For nCr, input: \nn and r: ");
    scanf("%d%d", &n, &r);

    printf("nCr = %ld", c(n, r));

    return 0;
}
/*
Pascal's triangle
      1
    1 2 1
   1 3 3 1
  1 4 6 4 1
1 5 10 10 5 1
*/