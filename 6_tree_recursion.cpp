#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void fun(int a){
    if (a > 0){
        fun(a-1);
        cout << a << " ";
        // fun(a-1);
        fun(a-1);
        
    }
}

int main() {
    fun(3);

    return 0;
}