#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int power(int x, int n)
{
    if (n == 0) 
        return 1;
    if (n%2 == 0) 
        return power(x*x, n / 2);
    return x * power(x*x, (n - 1)/2);
    
}

int main()
{
    int x, n;
    cout << "Enter the base: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> n;
    int ans = power(x, n);
    printf("%d^%d = %d ", x, n, ans);
    printf("\n");
    return 0;
}