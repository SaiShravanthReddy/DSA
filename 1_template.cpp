#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

template <class T>
class Rectangle {
private:
    T length;
    T breadth;
public:
    Rectangle(T l, T b);
    T area();
    T perimeter();
};

template <class T>
Rectangle<T>::Rectangle(T l, T b){
    this->length=l;
    this->breadth=b;
}

template <class T>
T Rectangle<T>::area() {
    return length*breadth;
}

template <class T>
T Rectangle<T>::perimeter(){
    return (2*(length+breadth));
}

int main()
{
    //Rectangle<int> r(0,0);

    int length, breadth, p;
    printf("Enter length and breadth");
    cin>>length>>breadth;

    Rectangle<int> r(length,breadth);

    int a=r.area();
    p=r.perimeter();

    printf("Area of the rectangle is %d and perimeter of rectangle is %d", a, p);

    return 0;
}
