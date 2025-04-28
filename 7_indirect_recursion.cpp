#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void funA(int a);

void funB(int b)
{
    if (b > 1){
        printf("%d ", b);
        funA(b/2);
    }
}


void funA(int a)
{
    if (a > 0){
        printf("%d ", a);
        funB(a-1);
    }
}

int main()
{
    funA(20);
    printf("\n");
    return 0;
}