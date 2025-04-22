#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int fun(int a){

    static int x = 0;
    if (a>0){
        x++;
        return fun(a-1)+x;
    }
    return 0;



}

int main(){

    int a=5, value=0;
    value = fun(a);
    printf("value: %d\n", value);

    return 0;

}

