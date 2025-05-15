#include <iostream>
#include <stdio.h>
#include <stdlib.h>

double e(int x, int n) {
    double r = 1; // initialize result to 1
    double p = 1; // initialize power of x to 1
    double f = 1; // initialize factorial to 1

    for (int i = 1; i <= n; i++) {
        p *= x; // calculate power of x
        f *= i; // calculate factorial of i
        r += p / f; // add current term to result
    }

    return r; // return the final result
}

int main() {
    int x = 1, n = 10; // example values for x and n
    printf("e^%d = %f\n", x, e(x, n)); // print the result of e^x using Taylor series
    return 0;
}