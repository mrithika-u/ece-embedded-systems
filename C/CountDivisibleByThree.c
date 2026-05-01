#include <stdio.h>
int main()
{
    int n;
    int i;
    int count = 0;
    printf("Enter the max number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
         if((i%3)==0)
         {
             count++;
         }
    }


    printf("There is/are %d from 1 to %d which are divisible by 3", count, n);
    return 0;
}
