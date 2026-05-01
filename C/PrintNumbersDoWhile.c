#include <stdio.h>
int main()
{
    int n;
    int i=1;
    printf("Enter the max number you want to print: ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i<=n);
    return 0;
}

// even if n is 0 program will print 1
