#include <stdio.h>
int main()
{
    int a;
    int i = 1;
    printf("Print max number: ");
    scanf("%d", &a);
    printf("Even numbers from 1 to %d are: \n", a);
    while(i<=a)
    {
        if(( i % 2) == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
