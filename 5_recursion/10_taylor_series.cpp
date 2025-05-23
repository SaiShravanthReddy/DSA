#include <stdio.h>
#include <stdlib.h>
#include <iostream>

double e(int x, int n) {
    static double p = 1, f = 1; // static variables to store power and factorial
    double r;

    if (n == 0) {
        return 1; // base case: e^0 = 1
    }
    
    r = e(x, n - 1);
    p = p * x; // calculate power of x
    f = f * n; // calculate factorial of n
    
    return  r + (p / f); // recursive call and add current term
}

int main() {
    int x = 1, n = 3; // example values for x and n
    printf("e^%d = %f\n", x, e(x, n)); // print the result of e^x using Taylor series
    return 0;
}