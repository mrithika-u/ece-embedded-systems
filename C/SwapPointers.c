#include <stdio.h>

void swap(int *x, int *y) //with parameter, without return type
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("%d, %d\n", a, b);
    swap(&a , &b);


    /*

    int a = 10;
    int b = 20;
    int temp;
    int *p;
    int *q;

    printf("%d, %d\n", a, b);

    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    /*p = &a;
    q = &b;
    b = *p;
    a = *q; */

    printf("%d, %d", a, b);
    return 0;

}

// swap two numbers using pointers
//referencing &
//dereferencing * value at a particular address
