#include <stdio.h>

int evenodd(int a)
{

    if((a%2)==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a;
    printf("Enter value of the integer: ");
    scanf("%d", &a);
    if(evenodd(a)==0)
    {
        printf("%d is even.", a);
    }
    else
    {
        printf("%d is odd", a);
    }
    return 0;
}
