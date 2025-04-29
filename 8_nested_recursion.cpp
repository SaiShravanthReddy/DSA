#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int funA(int a)
{

    if (a > 100){
        return a-10;
    } else {
        return funA(funA(a + 11));
    }

}

int main()
{
    int ans = funA(96);
    printf("%d ", ans);
    printf("\n");
    return 0;
}