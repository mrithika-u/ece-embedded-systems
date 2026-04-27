#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n>0)
        printf("Number is positive");
    else if(n==0)
        printf("Number is 0");
    else if(n<0)
        printf("Number is negative");
    else
        printf("Invalid Input(Only integers)");
    return 0;
}

