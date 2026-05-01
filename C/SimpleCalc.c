#include<stdio.h>
int main()
{
    char exp;
    int a,b;
    printf("Enter the value of expression(+or - or * or / ): ");
    scanf(" %c", &exp);
    printf("Enter the value of two integers to be used: ");
    scanf(" %d %d", &a, &b);
    switch (exp)
    {
    case '+':
        printf("%d + %d = %d", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a-b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a*b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a/b);
        break;

    default:
        printf("Invalid expression");

    }

    return 0;
}
