#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    int *p;

    p = (int*)malloc(10*sizeof(int));
    if(p == NULL){
        cout << "Memory allocation failed" << endl;
        exit(1);
    }
    for(int i = 0; i < 10; i++){
        p[i] = i + 1;
    }
    cout << "The values in the array are: ";
    for(int i = 0; i < 10; i++){
        cout << p[i] << " "<<endl;
    }

    cout<< "this is the pointer address: "<< p << endl;

    delete []p; // freeing the memory using delete operator
   // p = NULL; // freeing the memory
    cout<< "this is the pointer address after freeing: "<< p << endl;
    cout << "The values in the array are: ";
    for(int i = 0; i < 10; i++){
        cout << p[i] << " "<<endl;
    }

    p = (int*)malloc(10*sizeof(int));
    cout<< "this is the new pointer: "<< p << endl;
    cout << "The values in the array are: ";
    for(int i = 0; i < 10; i++){
        cout << p[i] << " "<<endl;
    }

    return 0;

}