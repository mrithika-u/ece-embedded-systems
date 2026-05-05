//void func(int x)
//Pass By Reference
#include <stdio.h>

void doubler(int *x)
{
    *x = 2*(*x);
}

int main()
{
    int a = 10;
    doubler(&a);
    printf("%d", a);
    return 0;

}

