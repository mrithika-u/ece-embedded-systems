#include <stdio.h>

//with argument
//with return type

int factorial(int n)
{
    int f=1;
    for(; n>=1; n--) //can also be for(; n >= 1; n--)
    {
        f=n*f;
    }
    return f;
}

int main()
{
    int num;
    int ans;
    printf("Enter number to find factorial of: ");
    scanf("%d", &num);
    ans = factorial(num);
    printf("The factorial of %d is %d.", num, ans);
    return 0;
}
