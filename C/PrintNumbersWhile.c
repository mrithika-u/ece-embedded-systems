#include <stdio.h>
int main()
{
    int i=1;
    int n;
    printf("Enter the max number you want to print: ");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
        // i = i+1;
    }
    return 0;
}
