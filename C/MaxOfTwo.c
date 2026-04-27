#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers to find the maximum: ");
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("%d is max", a);
    else if(a<b)
        printf("%d is max", b);
    else
        printf("both are equal");
    return 0;
}
