#include <stdio.h>
int main()
{
    int a = 10;
    int *p;

    p = &a; //&a means address of a

    printf("Previously: \n");
    printf("%p\n", p); //address
    printf("%d\n", *p); //value of address
    printf("%d\n", a); //value of a
    printf("%p\n\n", &a); //address of a

    *p = 20;
    printf("Currently: \n");
    printf("%p\n", p); //address
    printf("%d\n", *p); //value of address
    printf("%d\n", a); //value of a
    printf("%p\n", &a); //address of a

    return 0;
}

//referencing & getting address
//dereferencing * getting value at address
