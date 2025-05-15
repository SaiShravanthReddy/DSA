#include <stdlib.h>
#include <iostream>
#include <stdio.h>

double e(int x, int n) {
    static double r;

    if (n == 0) {
        return r; // base case: e^0 = 1
    }
    
    r = 1+x*r/n;
    
    return  e(x, n - 1);
}

int main() {
    int x = 1, n = 10; // example values for x and n
    printf("e^%d = %f\n", x, e(x, n)); // print the result of e^x using Taylor series
    return 0;
}